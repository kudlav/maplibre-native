#include <mbgl/shaders/mtl/hillshade_prepare.hpp>

namespace mbgl {
namespace shaders {

const std::array<AttributeInfo, 2>
    ShaderSource<BuiltIn::HillshadePrepareShader, gfx::Backend::Type::Metal>::attributes = {
        AttributeInfo{0, gfx::AttributeDataType::Short2, idHillshadePosVertexAttribute},
        AttributeInfo{1, gfx::AttributeDataType::Short2, idHillshadeTexturePosVertexAttribute},
};
const std::array<UniformBlockInfo, 1>
    ShaderSource<BuiltIn::HillshadePrepareShader, gfx::Backend::Type::Metal>::uniforms = {
        UniformBlockInfo{2, true, true, sizeof(HillshadePrepareDrawableUBO), idHillshadePrepareDrawableUBO},
};
const std::array<TextureInfo, 1> ShaderSource<BuiltIn::HillshadePrepareShader, gfx::Backend::Type::Metal>::textures = {
    TextureInfo{0, idHillshadeImageTexture},
};

} // namespace shaders
} // namespace mbgl