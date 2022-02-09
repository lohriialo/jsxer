#pragma once

#include "AstNode.h"
#include "../decoders.h"

using namespace jsxbin;

namespace jsxbin { namespace nodes {
    class ArrayIndexingExpr : public AstNode {
    public:
        explicit ArrayIndexingExpr(Reader& reader) : AstNode(reader) {}

        void parse() override;

        string to_string() override;

    private:
        string arrayName;
        string expression;
    };
} }
