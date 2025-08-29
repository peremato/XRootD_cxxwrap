
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
export SendInfo, SetCursor, SetErrorMessage, SetFlags, SetHostName, SetHostPort, SetNbRepair, SetParams, SetParentName
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
export XrdCl!ProtocolInfo, XrdCl!ProtocolInfo!AttrCache, XrdCl!ProtocolInfo!AttrMeta, XrdCl!ProtocolInfo!AttrProxy
export XrdCl!ProtocolInfo!AttrSuper, XrdCl!ProtocolInfo!HostTypes, XrdCl!ProtocolInfo!IsManager, XrdCl!ProtocolInfo!IsServer, XrdCl!QueryCode
export XrdCl!QueryCode!Checksum, XrdCl!QueryCode!ChecksumCancel, XrdCl!QueryCode!Code, XrdCl!QueryCode!Config, XrdCl!QueryCode!Opaque
export XrdCl!QueryCode!OpaqueFile, XrdCl!QueryCode!Prepare, XrdCl!QueryCode!Space, XrdCl!QueryCode!Stats, XrdCl!QueryCode!Visa
export XrdCl!QueryCode!XAttr, XrdCl!ResponseHandler, XrdCl!RetryInfo, XrdCl!StatInfo, XrdCl!StatInfo!BackUpExists, XrdCl!StatInfo!Flags
export XrdCl!StatInfo!IsDir, XrdCl!StatInfo!IsReadable, XrdCl!StatInfo!IsWritable, XrdCl!StatInfo!Offline, XrdCl!StatInfo!Other
export XrdCl!StatInfo!POSCPending, XrdCl!StatInfo!XBitSet, XrdCl!StatInfoVFS, XrdCl!Status, XrdCl!Status!IsSocketError, XrdCl!URL
export XrdCl!VectorReadInfo, XrdCl!XAttr, XrdCl!XAttrStatus, XrdCl!XRootDStatus, XrdCl!errAuthFailed, XrdCl!errCheckSumError
export XrdCl!errConfig, XrdCl!errConnectionError, XrdCl!errCorruptedHeader, XrdCl!errDataError, XrdCl!errErrorResponse, XrdCl!errFcntl
export XrdCl!errHandShakeFailed, XrdCl!errInProgress, XrdCl!errInternal, XrdCl!errInvalidAddr, XrdCl!errInvalidArgs, XrdCl!errInvalidMessage
export XrdCl!errInvalidOp, XrdCl!errInvalidRedirectURL, XrdCl!errInvalidResponse, XrdCl!errInvalidSession, XrdCl!errLocalError
export XrdCl!errLoginFailed, XrdCl!errNoMoreFreeSIDs, XrdCl!errNoMoreReplicas, XrdCl!errNone, XrdCl!errNotFound, XrdCl!errNotImplemented
export XrdCl!errNotSupported, XrdCl!errOSError, XrdCl!errOperationExpired, XrdCl!errOperationInterrupted, XrdCl!errPipelineFailed
export XrdCl!errPoll, XrdCl!errPollerError, XrdCl!errQueryNotSupported, XrdCl!errRedirect, XrdCl!errRedirectLimit
export XrdCl!errResponseNegative, XrdCl!errRetry, XrdCl!errSocketDisconnected, XrdCl!errSocketError, XrdCl!errSocketOptError
export XrdCl!errSocketTimeout, XrdCl!errStreamDisconnect, XrdCl!errThresholdExceeded, XrdCl!errTlsError, XrdCl!errUninitialized
export XrdCl!errUnknown, XrdCl!errUnknownCommand, XrdCl!stError, XrdCl!stFatal, XrdCl!stOK, XrdCl!suAlreadyDone, XrdCl!suContinue
export XrdCl!suDone, XrdCl!suNotStarted, XrdCl!suPartial, XrdCl!suRetry, XrdCl!xattr_name, XrdCl!xattr_value, Zero, and!, buffer
export buffer!, code, code!, errNo, errNo!, flags, flags!, iovec, length!, loadBalancer, loadBalancer!, name, name!, offset
export offset!, or!, protocol, protocol!, status, status!, url!, value, value!, xor!