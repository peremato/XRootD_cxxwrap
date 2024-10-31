module XRootD


using CxxWrap
import Libdl
@wrapmodule(()->"$(@__DIR__)/../deps/libjlXRootD." * Libdl.dlext)

function __init__()
    @initcxx
end

end #module
