#include <mbgl/shaders/mtl/heatmap_texture.hpp>

namespace mbgl {
namespace shaders {

const std::array<AttributeInfo, 1> ShaderSource<BuiltIn::HeatmapTextureShader, gfx::Backend::Type::Metal>::attributes =
    {
        AttributeInfo{0, gfx::AttributeDataType::Short2, idHeatmapPosVertexAttribute},
};
const std::array<UniformBlockInfo, 1> ShaderSource<BuiltIn::HeatmapTextureShader, gfx::Backend::Type::Metal>::uniforms =
    {
        UniformBlockInfo{1, true, true, sizeof(HeatmapTextureDrawableUBO), idHeatmapTextureDrawableUBO},
};
const std::array<TextureInfo, 2> ShaderSource<BuiltIn::HeatmapTextureShader, gfx::Backend::Type::Metal>::textures = {
    TextureInfo{0, idHeatmapImageTexture},
    TextureInfo{1, idHeatmapColorRampTexture},
};

} // namespace shaders
} // namespace mbgl