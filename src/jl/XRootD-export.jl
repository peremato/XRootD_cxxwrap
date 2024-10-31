
export Add, AddJob, AdvanceCursor, Allocate, Append, At, BeginJob, ChMod, Clear, Close, DeepLocate, DirList, EndJob
export ExtendedFormat, Fcntl, Free, FromString, Get, GetAccessTime, GetAccessTimeAsString, GetAccessType, GetAddress, GetBuffer
export GetBufferAtCursor, GetChangeTime, GetChangeTimeAsString, GetChannelId, GetChecksum, GetChunks, GetCksums, GetCursor
export GetErrorMessage, GetFileHandle, GetFlags, GetFreeRW, GetFreeStaging, GetGroup, GetHostAddress, GetHostId, GetHostInfo
export GetHostName, GetId, GetLength, GetLocation, GetLoginToken, GetModTime, GetModTimeAsString, GetModeAsOctString
export GetModeAsString, GetName, GetNbRepair, GetNodesRW, GetNodesStaging, GetObfuscatedURL, GetOffset, GetOwner, GetParamsAsString
export GetParentName, GetPassword, GetPath, GetPathWithFilteredParams, GetPathWithParams, GetPort, GetProperty, GetProtocol
export GetSessionId, GetShellCode, GetSize, GetStatInfo, GetType, GetURL, GetUserName, GetUtilizationRW, GetUtilizationStaging
export GetVersion, Grab, HandleResponse, HandleResponseWithHosts, HasChecksum, HasProperty, IsError, IsFatal, IsLocalFile
export IsManager, IsMetalink, IsOK, IsOpen, IsSecure, IsServer, IsTPC, IsValid, JobProgress, Locate, MkDir, Mv, NeedRetry, Open
export ParseServerResponse, PgRead, PgWrite, Ping, Prepare, Protocol, Query, ReAllocate, Read, ReadV, Release, Rm, RmDir, Run, SendCache
export SendInfo, Set, SetCursor, SetErrorMessage, SetFlags, SetHostName, SetHostPort, SetNbRepair, SetParams, SetParentName
export SetPassword, SetPath, SetPort, SetProperty, SetProtocol, SetSize, SetStatInfo, SetUserName, ShouldCancel, Size, Stat
export StatVFS, Sync, TestFlags, TestHostInfo, ToStr, ToString, Truncate, TryOtherServer, VectorRead, VectorWrite, Visa, Write
export WriteV, XrdCl!Access, XrdCl!Access!GR, XrdCl!Access!GW, XrdCl!Access!GX, XrdCl!Access!Mode, XrdCl!Access!None
export XrdCl!Access!OR, XrdCl!Access!OW, XrdCl!Access!OX, XrdCl!Access!UR, XrdCl!Access!UW, XrdCl!Access!UX, XrdCl!AnyObject
export XrdCl!Buffer, XrdCl!ChunkInfo, XrdCl!CopyProcess, XrdCl!CopyProgressHandler, XrdCl!DirListFlags, XrdCl!DirListFlags!Chunked
export XrdCl!DirListFlags!Cksm, XrdCl!DirListFlags!Flags, XrdCl!DirListFlags!Locate, XrdCl!DirListFlags!Merge, XrdCl!DirListFlags!None
export XrdCl!DirListFlags!Recursive, XrdCl!DirListFlags!Stat, XrdCl!DirListFlags!Zip, XrdCl!DirectoryList, XrdCl!DirectoryList!HasStatInfo
export XrdCl!DirectoryList!ListEntry, XrdCl!File, XrdCl!File!DisableVirtRedirect, XrdCl!File!EnableVirtRedirect, XrdCl!File!VirtRedirect
export XrdCl!FileSystem, XrdCl!HostInfo, XrdCl!LocationInfo, XrdCl!LocationInfo!AccessType, XrdCl!LocationInfo!Location
export XrdCl!LocationInfo!LocationType, XrdCl!LocationInfo!ManagerOnline, XrdCl!LocationInfo!ManagerPending, XrdCl!LocationInfo!Read
export XrdCl!LocationInfo!ReadWrite, XrdCl!LocationInfo!ServerOnline, XrdCl!LocationInfo!ServerPending, XrdCl!MkDirFlags, XrdCl!MkDirFlags!Flags
export XrdCl!MkDirFlags!MakePath, XrdCl!MkDirFlags!None, XrdCl!OpenFlags, XrdCl!OpenFlags!Compress, XrdCl!OpenFlags!Delete, XrdCl!OpenFlags!Flags
export XrdCl!OpenFlags!Force, XrdCl!OpenFlags!IntentDirList, XrdCl!OpenFlags!MakePath, XrdCl!OpenFlags!New, XrdCl!OpenFlags!NoWait
export XrdCl!OpenFlags!None, XrdCl!OpenFlags!POSC, XrdCl!OpenFlags!PrefName, XrdCl!OpenFlags!Read, XrdCl!OpenFlags!Refresh
export XrdCl!OpenFlags!Replica, XrdCl!OpenFlags!SeqIO, XrdCl!OpenFlags!Update, XrdCl!OpenFlags!Write, XrdCl!OpenInfo, XrdCl!PageInfo
export XrdCl!PrepareFlags, XrdCl!PrepareFlags!Cancel, XrdCl!PrepareFlags!Colocate, XrdCl!PrepareFlags!Evict, XrdCl!PrepareFlags!Flags
export XrdCl!PrepareFlags!Fresh, XrdCl!PrepareFlags!None, XrdCl!PrepareFlags!Stage, XrdCl!PrepareFlags!WriteMode, XrdCl!PropertyList
export XrdCl!ProtocolInfo, XrdCl!ProtocolInfo!AttrMeta, XrdCl!ProtocolInfo!AttrProxy, XrdCl!ProtocolInfo!AttrSuper
export XrdCl!ProtocolInfo!HostTypes, XrdCl!ProtocolInfo!IsManager, XrdCl!ProtocolInfo!IsServer, XrdCl!QueryCode, XrdCl!QueryCode!Checksum
export XrdCl!QueryCode!ChecksumCancel, XrdCl!QueryCode!Code, XrdCl!QueryCode!Config, XrdCl!QueryCode!Opaque, XrdCl!QueryCode!OpaqueFile
export XrdCl!QueryCode!Prepare, XrdCl!QueryCode!Space, XrdCl!QueryCode!Stats, XrdCl!QueryCode!Visa, XrdCl!QueryCode!XAttr
export XrdCl!ResponseHandler, XrdCl!RetryInfo, XrdCl!StatInfo, XrdCl!StatInfo!BackUpExists, XrdCl!StatInfo!Flags, XrdCl!StatInfo!IsDir
export XrdCl!StatInfo!IsReadable, XrdCl!StatInfo!IsWritable, XrdCl!StatInfo!Offline, XrdCl!StatInfo!Other, XrdCl!StatInfo!POSCPending
export XrdCl!StatInfo!XBitSet, XrdCl!StatInfoVFS, XrdCl!Status, XrdCl!Status!IsSocketError, XrdCl!URL, XrdCl!VectorReadInfo, XrdCl!XAttr
export XrdCl!XAttrStatus, XrdCl!XRootDStatus, XrdCl!errAuthFailed, XrdCl!errCheckSumError, XrdCl!errConfig, XrdCl!errConnectionError
export XrdCl!errCorruptedHeader, XrdCl!errDataError, XrdCl!errErrorResponse, XrdCl!errFcntl, XrdCl!errHandShakeFailed, XrdCl!errInProgress
export XrdCl!errInternal, XrdCl!errInvalidAddr, XrdCl!errInvalidArgs, XrdCl!errInvalidMessage, XrdCl!errInvalidOp
export XrdCl!errInvalidRedirectURL, XrdCl!errInvalidResponse, XrdCl!errInvalidSession, XrdCl!errLocalError, XrdCl!errLoginFailed
export XrdCl!errNoMoreFreeSIDs, XrdCl!errNoMoreReplicas, XrdCl!errNone, XrdCl!errNotFound, XrdCl!errNotImplemented, XrdCl!errNotSupported
export XrdCl!errOSError, XrdCl!errOperationExpired, XrdCl!errOperationInterrupted, XrdCl!errPipelineFailed, XrdCl!errPoll
export XrdCl!errPollerError, XrdCl!errQueryNotSupported, XrdCl!errRedirect, XrdCl!errRedirectLimit, XrdCl!errResponseNegative
export XrdCl!errRetry, XrdCl!errSocketDisconnected, XrdCl!errSocketError, XrdCl!errSocketOptError, XrdCl!errSocketTimeout
export XrdCl!errStreamDisconnect, XrdCl!errThresholdExceeded, XrdCl!errTlsError, XrdCl!errUninitialized, XrdCl!errUnknown
export XrdCl!errUnknownCommand, XrdCl!stError, XrdCl!stFatal, XrdCl!stOK, XrdCl!suAlreadyDone, XrdCl!suContinue, XrdCl!suDone
export XrdCl!suNotStarted, XrdCl!suPartial, XrdCl!suRetry, XrdCl!xattr_name, XrdCl!xattr_value, Zero, and!, buffer, buffer!, code, code!
export errNo, errNo!, flags, flags!, iovec, length, length!, loadBalancer, loadBalancer!, name, name!, offset, offset!, or!
export protocol, protocol!, status, status!, url, url!, value, value!, xor!