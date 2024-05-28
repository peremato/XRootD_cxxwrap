module XRootD


using CxxWrap
@wrapmodule(()->"$(@__DIR__)/../deps/libjlXRootD")

function __init__()
    @initcxx
end

end #module
