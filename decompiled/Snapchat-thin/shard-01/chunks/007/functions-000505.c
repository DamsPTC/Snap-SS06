/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101457004; end: 101457107; -[SCManagedCapturerMediaCaptureStateManagerImpl willFinishRecordingWithSession:recordedVideoFuture:videoSize:placeholderImage:] */

/* WARNING: Possible PIC construction at 0x0001014570d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014570e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014570d4) */
/* WARNING: Removing unreachable block (ram,0x0001014570e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457004(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_3);
  FUN_1014600e0(param_1,param_2,0,0,uVar2,puVar1,param_5,param_6,param_7);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101457108; end: 101457113;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101457108(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d9f3c)(uVar5,param_2,param_3);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 101457114; end: 10145712b; -[SCManagedCapturerMediaCaptureStateManagerImpl didFinishRecordingWithSession:recordedVideo:] */

/* WARNING: Possible PIC construction at 0x0001014572f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014572f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457114(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101460a20(0,0,uVar2,puVar1,param_3,param_4);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10145712c; end: 10145723f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10145712c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*param_4)(uVar5,param_2,param_3);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 101457240; end: 10145724b; -[SCManagedCapturerMediaCaptureStateManagerImpl didFailRecordingWithSession:error:] */

/* WARNING: Possible PIC construction at 0x0001014572f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014572f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*(code *)0x10146103c)(0,0,uVar2,puVar1,param_3,param_4);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10145724c; end: 101457317;  */

/* WARNING: Possible PIC construction at 0x0001014572f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014572f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145724c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  (*param_5)(0,0,uVar2,puVar1,param_3,param_4);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457318; end: 101457323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101457318(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043d9ff0)(uVar5,param_2);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 101457324; end: 10145732f; -[SCManagedCapturerMediaCaptureStateManagerImpl didCancelRecordingWithSession:] */

/* WARNING: Possible PIC construction at 0x0001014576b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014576b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x10146165c)(0,0,uVar2,puVar1,param_3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457330; end: 10145737f;  */

ulong FUN_101457330(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010068ae9c(0);
  func_0x0001043da058(param_1,param_2,param_3,uVar1);
  return param_1 | 0x6000000000000000;
}



/* Entry: 101457380; end: 10145741f; -[SCManagedCapturerMediaCaptureStateManagerImpl didGetErrorWithError:type:session:] */

/* WARNING: Possible PIC construction at 0x0001014573f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014573fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457380(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da0860);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000101461d64(0,0,uVar1,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457420; end: 101457477;  */

ulong FUN_101457420(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x00010068ae9c(0);
  func_0x0001043da0d0(param_1,param_2,param_3,param_4,uVar1);
  return param_1 | 0x6000000000000000;
}



/* Entry: 101457478; end: 101457507; -[SCManagedCapturerMediaCaptureStateManagerImpl didAppendVideoSampleBufferWithPresentationTime:sampleMetadata:] */

/* WARNING: Possible PIC construction at 0x0001014574e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014574ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457478(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = *(undefined8 *)(param_1 + _DAT_112da0860);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000101462464(0,0,uVar4,uVar1,uVar2,uVar3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457508; end: 101457513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101457508(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043da138)(uVar5,param_2);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 101457514; end: 101457617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101457514(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*param_3)(uVar5,param_2);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 101457618; end: 101457623; -[SCManagedCapturerMediaCaptureStateManagerImpl willCapturePhotoWithSampleMetadata:] */

/* WARNING: Possible PIC construction at 0x0001014576b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014576b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457618(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x1014629c4)(0,0,uVar2,puVar1,param_3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457624; end: 1014576cb;  */

/* WARNING: Possible PIC construction at 0x0001014576b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014576b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457624(long param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(0,0,uVar2,puVar1,param_3);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014576cc; end: 1014576d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1014576cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043da1a0)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 1014576d8; end: 1014577d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1014576d8(long param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  func_0x00010068ae9c(0);
  uVar2 = uVar5;
  (*param_2)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x6000000000000000;
}



/* Entry: 1014577d4; end: 1014577df; -[SCManagedCapturerMediaCaptureStateManagerImpl didCapturePhoto] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014577d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x101462f58)(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014577e0; end: 101457863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014577e0(long param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0860);
  puVar1 = &UNK_1103be610;
  func_0x000107c613fc(&UNK_1103be610,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*param_3)(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457864; end: 1014578c3; -[SCManagedCapturerMediaCaptureStateManagerImpl init] */

void FUN_101457864(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCapturerStateCoordinatorImpl.ManagedCapturerMediaCaptureStateManagerImpl"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101457890);
  (*pcVar1)();
}



/* Entry: 1014578c4; end: 1014578d3; -[SCManagedCapturerMediaCaptureStateManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014578c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0860));
  return;
}



/* Entry: 1014578d4; end: 10145791f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014578d4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da0890) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101457920; end: 101457937;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101457920(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da0890);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3b9b0(0);
  uVar2 = uVar5;
  (*(code *)&UNK_1043dc394)(uVar5);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x8000000000000000;
}



/* Entry: 101457938; end: 10145794f; -[SCManagedCapturerSessionStateManagerImpl sessionDidStopRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457938(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x101463438)(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457950; end: 101457967; -[SCManagedCapturerSessionStateManagerImpl capturerDidStopRunning] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457950(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x101463918)(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457968; end: 101457973; -[SCManagedCapturerSessionStateManagerImpl didResetFromRuntimeError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457968(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x101463df8)(0,0,uVar2,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457974; end: 1014579ef; -[SCManagedCapturerSessionStateManagerImpl didChangeIsInterrupted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457974(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be688;
  func_0x000107c613fc(&UNK_1103be688,0x11,7);
  puVar1[0x10] = param_3;
  func_0x000107c61174(param_1);
  FUN_1014589ac(FUN_101457aa0,puVar1,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014579f0; end: 1014579fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1014579f0(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(long *)(param_2 + _DAT_112da0890);
    func_0x000107c61174();
    func_0x000107c61170(param_2);
    lVar1 = _DAT_112da0920;
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0920);
    func_0x000107c6157c(uVar3);
    func_0x00010006c804();
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar2 + lVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3b9b0(0);
  (*(code *)&UNK_1043dc58c)(param_1,uVar3);
  func_0x000107c61170(uVar3);
  return param_1 | 0x8000000000000000;
}



/* Entry: 1014579fc; end: 101457a07; -[SCManagedCapturerSessionStateManagerImpl didRemoveCaptureInputWithDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014579fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da0890);
  puVar1 = &UNK_1103be638;
  func_0x000107c613fc(&UNK_1103be638,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  (*(code *)0x101464438)(0,0,uVar2,param_3,puVar1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457a08; end: 101457a67; -[SCManagedCapturerSessionStateManagerImpl init] */

void FUN_101457a08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCapturerStateCoordinatorImpl.ManagedCapturerSessionStateManagerImpl"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101457a34);
  (*pcVar1)();
}



/* Entry: 101457a68; end: 101457a77; -[SCManagedCapturerSessionStateManagerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457a68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0890));
  return;
}



/* Entry: 101457a78; end: 101457a9f;  */

void FUN_101457a78(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e94f4(param_1,*(undefined1 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101457aa0; end: 101457aa3;  */

void FUN_101457aa0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001002e94f4(param_1,*(undefined1 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101457aa4; end: 101457ab7; -[SCManagedCapturerStateCoordinatorImpl setDevicePropertiesStateManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da08c8);
  *(undefined8 *)(param_1 + _DAT_112da08c8) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101458980)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457ab8; end: 101457acb; -[SCManagedCapturerStateCoordinatorImpl setLensesStateManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457ab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da08d0);
  *(undefined8 *)(param_1 + _DAT_112da08d0) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101458984)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457acc; end: 101457adf; -[SCManagedCapturerStateCoordinatorImpl setMediaCaptureStateManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da08d8);
  *(undefined8 *)(param_1 + _DAT_112da08d8) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101458988)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457ae0; end: 101457af3; -[SCManagedCapturerStateCoordinatorImpl setSessionStateManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457ae0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da08e0);
  *(undefined8 *)(param_1 + _DAT_112da08e0) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x10145898c)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457af4; end: 101457b07; -[SCManagedCapturerStateCoordinatorImpl setExposureStateManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da08e8);
  *(undefined8 *)(param_1 + _DAT_112da08e8) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101458990)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457b08; end: 101457b3b; -[SCManagedCapturerStateCoordinatorImpl focusStateManager] */

void FUN_101457b08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101457b3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101457b3c; end: 101457bef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101457b3c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lStack_50;
  long lStack_48;
  
  lVar2 = _DAT_112da08f0;
  plVar5 = &lStack_50;
  puVar6 = *(undefined1 **)(unaff_x20 + _DAT_112da08f0);
  puVar8 = puVar6;
  if (puVar6 == (undefined1 *)0x1) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112da08c0);
    lVar3 = 0;
    FUN_101456874();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112da0800) = uVar7;
    puVar1 = PTR_s_init_1125d9248;
    lStack_50 = lVar4;
    lStack_48 = lVar3;
    func_0x000107c61174(uVar7);
    func_0x000107c61154(&lStack_50,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
    *(long **)(unaff_x20 + lVar2) = plVar5;
    func_0x000107c61174();
    func_0x00010011ecd0(uVar7);
    puVar8 = (undefined1 *)plVar5;
  }
  func_0x00010011ece0(puVar6);
  return puVar8;
}



/* Entry: 101457bf0; end: 101457c03; -[SCManagedCapturerStateCoordinatorImpl setFocusStateManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112da08f0);
  *(undefined8 *)(param_1 + _DAT_112da08f0) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*(code *)0x101458994)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457c04; end: 101457c57;  */

void FUN_101457c04(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  *(undefined8 *)(param_1 + *param_4) = param_3;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  (*param_5)(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101457c58; end: 101457cd7; -[SCManagedCapturerStateCoordinatorImpl didChangeState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457c58(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112da08c0);
  puVar1 = &UNK_1103be6b0;
  func_0x000107c613fc(&UNK_1103be6b0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,uVar2);
  func_0x000107c61174(param_1);
  func_0x000101464974(0,0,uVar2,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101457cd8; end: 10145856b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101457cd8(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,ulong param_5,
                  uint param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if ((param_1 & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112da08c0);
    puVar2 = &UNK_1103be6b0;
    puVar1 = puVar2;
    func_0x000107c613fc(&UNK_1103be6b0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar9);
    func_0x000107c613fc(&UNK_1103be6b0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar9);
    puVar3 = &UNK_1103be890;
    func_0x000107c613fc(&UNK_1103be890,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = 0x101458998;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    uVar10 = *(undefined8 *)(lVar9 + _DAT_112da0930);
    func_0x000107c61580(puVar1,3);
    func_0x000107c6157c(puVar2);
    uVar4 = uVar10;
    func_0x000107c49be8();
    if ((int)uVar4 == 0) {
      func_0x000107c61574(puVar2);
      puVar2 = &UNK_1103be8b8;
      func_0x000107c613fc(&UNK_1103be8b8,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1014589a8;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      uStack_70 = 0x10145897c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103be8d0;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar2;
      func_0x000107c60bc4(ppuVar7);
      puVar2 = puStack_68;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar10);
      func_0x000107c61574(puVar3);
      func_0x000107c60bd0(ppuVar7);
      puVar3 = puVar1;
    }
    else {
      func_0x000107c61428(puVar2 + 0x10,auStack_d8,0,0);
      puVar5 = puVar2 + 0x10;
      func_0x000107c61618();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c61574(puVar1);
        func_0x000107c61574(puVar2);
      }
      else {
        puVar6 = puVar1;
        FUN_10145a61c();
        if ((((ulong)puVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61574(puVar1);
          func_0x000107c61574(puVar2);
          func_0x000107c61170(puVar5);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar5);
          func_0x000107c61574(puVar3);
          FUN_100c3c730(puVar6);
          func_0x000107c61574(puVar1);
          puVar3 = puVar2;
        }
      }
    }
    func_0x000107c61574(puVar3);
    func_0x000107c61578(puVar1,2);
  }
  if ((param_2 & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112da08c0);
    puVar2 = &UNK_1103be6d8;
    func_0x000107c613fc(&UNK_1103be6d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1103be7f0;
    func_0x000107c613fc(&UNK_1103be7f0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    puVar1 = &UNK_1103be6b0;
    func_0x000107c613fc(&UNK_1103be6b0,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar9);
    puVar5 = &UNK_1103be818;
    func_0x000107c613fc(&UNK_1103be818,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar1;
    *(code **)(puVar5 + 0x18) = FUN_101458918;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    uVar10 = *(undefined8 *)(lVar9 + _DAT_112da0930);
    func_0x000107c61580(puVar2,2);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar1);
    uVar4 = uVar10;
    func_0x000107c49be8();
    if ((int)uVar4 == 0) {
      func_0x000107c61574(puVar1);
      puVar1 = &UNK_1103be840;
      func_0x000107c613fc(&UNK_1103be840,0x20,7);
      *(undefined8 *)(puVar1 + 0x10) = 0x1014589a4;
      *(undefined **)(puVar1 + 0x18) = puVar5;
      uStack_70 = 0x101458978;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103be858;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar1;
      func_0x000107c60bc4(ppuVar7);
      puVar1 = puStack_68;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar1);
      func_0x000107c4e524(uVar10);
      func_0x000107c61574(puVar5);
      func_0x000107c60bd0(ppuVar7);
      puVar5 = puVar2;
    }
    else {
      func_0x000107c61428(puVar1 + 0x10,auStack_c0,0,0);
      puVar6 = puVar1 + 0x10;
      func_0x000107c61618();
      if (puVar6 == (undefined *)0x0) {
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar1);
        puVar3 = puVar2;
      }
      else {
        puVar8 = puVar2;
        func_0x00010145856c(puVar2,param_3,param_4);
        if ((((ulong)puVar8 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61574(puVar3);
          func_0x000107c61574(puVar1);
          func_0x000107c61170(puVar6);
          puVar3 = puVar2;
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar6);
          func_0x000107c61574(puVar5);
          FUN_100c3c730(puVar8);
          func_0x000107c61574(puVar3);
          puVar3 = puVar2;
          puVar5 = puVar1;
        }
      }
    }
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
  }
  if ((param_5 & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112da08c0);
    puVar2 = &UNK_1103be6d8;
    func_0x000107c613fc(&UNK_1103be6d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1103be6b0;
    func_0x000107c613fc(&UNK_1103be6b0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar9);
    puVar1 = &UNK_1103be778;
    func_0x000107c613fc(&UNK_1103be778,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(undefined8 *)(puVar1 + 0x18) = 0x1014588f8;
    *(undefined **)(puVar1 + 0x20) = puVar2;
    uVar10 = *(undefined8 *)(lVar9 + _DAT_112da0930);
    func_0x000107c61580(puVar2,3);
    func_0x000107c6157c(puVar3);
    uVar4 = uVar10;
    func_0x000107c49be8();
    if ((int)uVar4 == 0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1103be7a0;
      func_0x000107c613fc(&UNK_1103be7a0,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1014589a0;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_70 = 0x101458974;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103be7b8;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar3;
      func_0x000107c60bc4(ppuVar7);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(uVar10);
      func_0x000107c61574(puVar1);
      func_0x000107c60bd0(ppuVar7);
      puVar1 = puVar2;
    }
    else {
      func_0x000107c61428(puVar3 + 0x10,auStack_a8,0,0);
      puVar5 = puVar3 + 0x10;
      func_0x000107c61618();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar3);
      }
      else {
        puVar6 = puVar2;
        func_0x000101458674(puVar2,&UNK_1043d4a98);
        if ((((ulong)puVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61574(puVar2);
          func_0x000107c61574(puVar3);
          func_0x000107c61170(puVar5);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar5);
          func_0x000107c61574(puVar1);
          FUN_100c3c730(puVar6);
          func_0x000107c61574(puVar2);
          puVar1 = puVar3;
        }
      }
    }
    func_0x000107c61574(puVar1);
    func_0x000107c61578(puVar2,2);
  }
  if ((param_6 & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + _DAT_112da08c0);
    puVar2 = &UNK_1103be6d8;
    func_0x000107c613fc(&UNK_1103be6d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1103be6b0;
    func_0x000107c613fc(&UNK_1103be6b0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,lVar9);
    puVar1 = &UNK_1103be700;
    func_0x000107c613fc(&UNK_1103be700,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(code **)(puVar1 + 0x18) = FUN_1014588d8;
    *(undefined **)(puVar1 + 0x20) = puVar2;
    uVar10 = *(undefined8 *)(lVar9 + _DAT_112da0930);
    func_0x000107c61580(puVar2,3);
    func_0x000107c6157c(puVar3);
    uVar4 = uVar10;
    func_0x000107c49be8();
    if ((int)uVar4 == 0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1103be728;
      func_0x000107c613fc(&UNK_1103be728,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x10145899c;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_70 = 0x101458970;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103be740;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar3;
      func_0x000107c60bc4(ppuVar7);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar1);
      func_0x000107c61574(puVar3);
      func_0x000107c4e524(uVar10);
      func_0x000107c61574(puVar1);
      func_0x000107c60bd0(ppuVar7);
      puVar1 = puVar2;
    }
    else {
      func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
      puVar5 = puVar3 + 0x10;
      func_0x000107c61618();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        func_0x000107c61574(puVar3);
      }
      else {
        puVar6 = puVar2;
        func_0x000101458674(puVar2,&UNK_1043d49cc);
        if ((((ulong)puVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61574(puVar2);
          func_0x000107c61574(puVar3);
          func_0x000107c61170(puVar5);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar5);
          func_0x000107c61574(puVar1);
          FUN_100c3c730(puVar6);
          func_0x000107c61574(puVar2);
          puVar1 = puVar3;
        }
      }
    }
    func_0x000107c61574(puVar1);
    func_0x000107c61578(puVar2,2);
  }
  return;
}



/* Entry: 10145856c; end: 10145876f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10145856c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + _DAT_112da08c0);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(ulong *)(lVar3 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3b9b0(0);
  uVar2 = uVar5;
  FUN_100c3dc68(uVar5,param_2,param_3);
  func_0x000107c61170(uVar5);
  return uVar2 | 0x8000000000000000;
}



/* Entry: 101458770; end: 1014587e3; -[SCManagedCapturerStateCoordinatorImpl performDidActivateDeviceUpdateWithPerformDidChangeStateUpdate:performDidChangeCaptureDevicePositionUpdate:oldDevicePosition:oldSecondaryDevicePosition:performDidChangeFlashAndTorchSupportedUpdate:performDidChangeStabilizationModeActiveUpdate:] */

void FUN_101458770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c61174();
  FUN_101457cd8(param_3,param_4,param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014587e4; end: 101458817;  */

void FUN_1014587e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101458818; end: 10145889f; -[SCManagedCapturerStateCoordinatorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101458844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458864: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101458868) */
/* WARNING: Removing unreachable block (ram,0x000101458848) */
/* WARNING: Removing unreachable block (ram,0x000101458888) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101458818(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112da08c0));
  if (*(long *)(param_1 + _DAT_112da08c8) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1014588a0; end: 1014588d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1014588a0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112da0920;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0920);
    func_0x000107c6157c(uVar3);
    func_0x00010006c804();
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar2 + lVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3d364(0);
  uVar4 = uVar3;
  FUN_100c3d384(uVar3);
  func_0x000107c61170(uVar3);
  return uVar4;
}



/* Entry: 1014588d8; end: 101458917;  */

void FUN_1014588d8(void)

{
  func_0x000101458674();
  return;
}



/* Entry: 101458918; end: 101458923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101458918(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = *(long *)(lVar2 + _DAT_112da08c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = _DAT_112da0920;
    uVar6 = *(undefined8 *)(lVar5 + _DAT_112da0920);
    func_0x000107c6157c(uVar6);
    func_0x00010006c804();
    func_0x000107c61574(uVar6);
    uVar7 = *(ulong *)(lVar5 + _DAT_112da0928);
    uVar6 = *(undefined8 *)(lVar5 + lVar2);
    func_0x000107c61174(uVar7);
    func_0x000107c6157c(uVar6);
    func_0x000100070bfc();
    func_0x000107c61170(lVar5);
    func_0x000107c61574(uVar6);
  }
  FUN_100c3b9b0(0);
  uVar3 = uVar7;
  FUN_100c3dc68(uVar7,uVar1,uVar4);
  func_0x000107c61170(uVar7);
  return uVar3 | 0x8000000000000000;
}



/* Entry: 101458924; end: 10145894f;  */

void FUN_101458924(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101458950; end: 1014589ab;  */

void FUN_101458950(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1014589ac; end: 101459763;  */

/* WARNING: Possible PIC construction at 0x000101458a10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458b54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458cd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458c14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458c24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101458d6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101458d5c) */
/* WARNING: Removing unreachable block (ram,0x000101458c28) */
/* WARNING: Removing unreachable block (ram,0x000101458c18) */
/* WARNING: Removing unreachable block (ram,0x000101458cd4) */
/* WARNING: Removing unreachable block (ram,0x000101458cac) */
/* WARNING: Removing unreachable block (ram,0x000101458c34) */
/* WARNING: Removing unreachable block (ram,0x000101458b58) */
/* WARNING: Removing unreachable block (ram,0x000101458ad0) */
/* WARNING: Removing unreachable block (ram,0x000101458c2c) */
/* WARNING: Removing unreachable block (ram,0x000101458b3c) */
/* WARNING: Removing unreachable block (ram,0x000101458a94) */
/* WARNING: Removing unreachable block (ram,0x000101458a44) */
/* WARNING: Removing unreachable block (ram,0x000101458d98) */
/* WARNING: Removing unreachable block (ram,0x000101458a78) */
/* WARNING: Removing unreachable block (ram,0x000101458a14) */
/* WARNING: Removing unreachable block (ram,0x000101458d70) */
/* WARNING: Removing unreachable block (ram,0x000101458d74) */
/* WARNING: Removing unreachable block (ram,0x000101458d78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014589ac(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puVar2 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_3);
    puVar1 = &UNK_1103c0c98;
    func_0x000107c613fc(&UNK_1103c0c98,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(code **)(puVar1 + 0x18) = FUN_10145a6ec;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    uVar3 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c6157c(puVar2);
    func_0x000107c49be8();
    if ((uVar3 & 1) == 0) {
      func_0x000107c61574(puVar2);
      puVar2 = &UNK_1103c0cc0;
      func_0x000107c613fc(&UNK_1103c0cc0,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x1014654a8;
      *(undefined **)(puVar2 + 0x18) = puVar1;
      uStack_70 = 0x101465360;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103c0cd8;
      puStack_68 = puVar2;
      func_0x000107c60bc4(&puStack_90);
      puVar2 = puStack_68;
      func_0x000107c6157c(puVar1);
    }
    else {
      func_0x000107c61428(puVar2 + 0x10,&puStack_90,0,0);
      func_0x000107c61618(puVar2 + 0x10);
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar2 = *(undefined **)(param_3 + _DAT_112da0920);
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(puVar2);
    func_0x00010006c804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101459764; end: 10145a5eb;  */

/* WARNING: Possible PIC construction at 0x0001014597f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014598ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145995c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459be4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459b48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459bc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101459bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101459bc4) */
/* WARNING: Removing unreachable block (ram,0x000101459b4c) */
/* WARNING: Removing unreachable block (ram,0x000101459c14) */
/* WARNING: Removing unreachable block (ram,0x000101459a74) */
/* WARNING: Removing unreachable block (ram,0x000101459be8) */
/* WARNING: Removing unreachable block (ram,0x000101459b3c) */
/* WARNING: Removing unreachable block (ram,0x000101459b14) */
/* WARNING: Removing unreachable block (ram,0x000101459a9c) */
/* WARNING: Removing unreachable block (ram,0x000101459960) */
/* WARNING: Removing unreachable block (ram,0x0001014598b0) */
/* WARNING: Removing unreachable block (ram,0x000101459a94) */
/* WARNING: Removing unreachable block (ram,0x000101459924) */
/* WARNING: Removing unreachable block (ram,0x000101459874) */
/* WARNING: Removing unreachable block (ram,0x000101459824) */
/* WARNING: Removing unreachable block (ram,0x000101459c24) */
/* WARNING: Removing unreachable block (ram,0x000101459858) */
/* WARNING: Removing unreachable block (ram,0x0001014597f4) */
/* WARNING: Removing unreachable block (ram,0x000101459bd8) */
/* WARNING: Removing unreachable block (ram,0x000101459bdc) */
/* WARNING: Removing unreachable block (ram,0x000101459be4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101459764(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 auStack_a0 [48];
  
  puVar1 = &UNK_1103c0090;
  func_0x000107c613fc(&UNK_1103c0090,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  if (param_3 == 0) {
    puVar3 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_5);
    puVar2 = &UNK_1103c00b8;
    func_0x000107c613fc(&UNK_1103c00b8,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar3;
    *(undefined8 *)(puVar2 + 0x18) = 0x101464f40;
    *(undefined **)(puVar2 + 0x20) = puVar1;
    uVar4 = *(ulong *)(param_5 + _DAT_112da0930);
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar3);
    func_0x000107c49be8();
    if ((uVar4 & 1) != 0) {
      func_0x000107c61428(puVar3 + 0x10,auStack_a0,0,0);
      puVar2 = puVar3 + 0x10;
      func_0x000107c61618();
      puVar3 = puVar1;
      if (puVar2 != (undefined *)0x0) {
        FUN_100c71df4(0);
        func_0x0001043d6d10(param_1,param_2);
        func_0x000107c3e208(*(undefined8 *)(puVar2 + _DAT_112da0930));
        func_0x000107c4d664(*(undefined8 *)(puVar2 + _DAT_112da0960));
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar3 = *(undefined **)(param_5 + _DAT_112da0920);
    func_0x000100382e80(param_3,param_4);
    func_0x000107c6157c(puVar3);
    func_0x00010006c804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 10145a5ec; end: 10145a61b;  */

void FUN_10145a5ec(undefined8 param_1)

{
  func_0x000107c610f8();
  func_0x0001000c12b8(param_1);
  return;
}



/* Entry: 10145a61c; end: 10145a6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10145a61c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112da0920;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112da0920);
    func_0x000107c6157c(uVar2);
    func_0x00010006c804();
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112da0928);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c(uVar3);
    func_0x000100070bfc();
    func_0x000107c61170(param_1);
    func_0x000107c61574(uVar3);
  }
  FUN_100c3d364(0);
  uVar3 = uVar2;
  FUN_100c3d384(uVar2);
  func_0x000107c61170(uVar2);
  return uVar3;
}



/* Entry: 10145a6ec; end: 10145a6f3;  */

undefined8 FUN_10145a6ec(void)

{
  return 0xf000000000000007;
}



/* Entry: 10145a6f4; end: 10145a7ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145a6f4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112da0938);
    FUN_100c3d364(0);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(param_1 + _DAT_112da0920);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112da0928);
    uVar3 = *(undefined8 *)(param_1 + lVar1);
    uVar4 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar3);
    func_0x000100070bfc();
    func_0x000107c61574(uVar3);
    FUN_100c3d384(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 10145a800; end: 10145a973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145a800(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112da0938);
    FUN_100c3d364(0);
    lVar1 = _DAT_112da0920;
    uVar5 = *(undefined8 *)(param_1 + _DAT_112da0920);
    func_0x000107c61174(uVar3);
    func_0x000107c6157c(uVar5);
    func_0x00010006c804();
    func_0x000107c61574(uVar5);
    uVar6 = *(undefined8 *)(param_1 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(param_1 + lVar1);
    uVar5 = uVar6;
    func_0x000107c61174(uVar6);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61574(uVar4);
    FUN_100c3d384(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
    FUN_100c42040(0);
    uVar2 = (ulong)(param_2 & 1);
    func_0x0001043d4c3c(uVar2,param_3,param_4);
    func_0x000107c3e208(*(undefined8 *)(param_1 + _DAT_112da0930));
    func_0x000107c4d664(*(undefined8 *)(param_1 + _DAT_112da0940));
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10145a974; end: 10145aaef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145a974(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,code *param_5,
                  long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + _DAT_112da0938);
    FUN_100c3d364(0);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(param_3 + _DAT_112da0920);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(undefined8 *)(param_3 + _DAT_112da0928);
    uVar3 = *(undefined8 *)(param_3 + lVar1);
    uVar4 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar3);
    func_0x000100070bfc();
    func_0x000107c61574(uVar3);
    FUN_100c3d384(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    uVar4 = 0;
    (*param_4)(0);
    (*param_5)(param_1,param_2);
    func_0x000107c3e208(*(undefined8 *)(param_3 + _DAT_112da0930));
    func_0x000107c4d664(*(undefined8 *)(param_3 + *param_6));
    func_0x000107c61170(uVar4);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10145aaf0; end: 10145ac5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145aaf0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112da0938);
    FUN_100c3d364(0);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(param_2 + _DAT_112da0920);
    func_0x000107c61174(uVar2);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar5 = *(undefined8 *)(param_2 + _DAT_112da0928);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    uVar4 = uVar5;
    func_0x000107c61174(uVar5);
    func_0x000107c6157c(uVar3);
    func_0x000100070bfc();
    func_0x000107c61574(uVar3);
    FUN_100c3d384(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x0001043d847c(0);
    func_0x0001043d7c80(param_1,param_3);
    func_0x000107c3e208(*(undefined8 *)(param_2 + _DAT_112da0930));
    func_0x000107c4d664(*(undefined8 *)(param_2 + _DAT_112da0948));
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10145ac5c; end: 10145ac7b;  */

void FUN_10145ac5c(code *param_1)

{
  (*param_1)();
  return;
}



/* Entry: 10145ac7c; end: 10145ac83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10145ac7c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112da0920;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0920);
    func_0x000107c6157c(uVar3);
    func_0x00010006c804();
    func_0x000107c61574(uVar3);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112da0928);
    uVar4 = *(undefined8 *)(lVar2 + lVar1);
    func_0x000107c61174(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000100070bfc();
    func_0x000107c61170(lVar2);
    func_0x000107c61574(uVar4);
  }
  FUN_100c3d364(0);
  uVar4 = uVar3;
  FUN_100c3d384(uVar3);
  func_0x000107c61170(uVar3);
  return uVar4;
}



/* Entry: 10145ac84; end: 10145ace3; -[_TtC37SCManagedCapturerStateCoordinatorImpl42ManagedCapturerStateUpdatePerformingHelper init] */

void FUN_10145ac84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCManagedCapturerStateCoordinatorImpl.ManagedCapturerStateUpdatePerformingHelper"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10145acb0);
  (*pcVar1)();
}



/* Entry: 10145ace4; end: 10145ad9b; -[_TtC37SCManagedCapturerStateCoordinatorImpl42ManagedCapturerStateUpdatePerformingHelper .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010145ad00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145ad30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145ad50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145ad70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010145ad54) */
/* WARNING: Removing unreachable block (ram,0x00010145ad34) */
/* WARNING: Removing unreachable block (ram,0x00010145ad04) */
/* WARNING: Removing unreachable block (ram,0x00010145ad74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145ace4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da0928));
  return;
}



/* Entry: 10145ad9c; end: 10145ada7;  */

void FUN_10145ad9c(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1 & 0x1fffffffffffffff);
  return;
}



/* Entry: 10145ada8; end: 10145ae17;  */

ulong * FUN_10145ada8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  func_0x000107c61174(uVar1 & 0x1fffffffffffffff);
  func_0x000107c61170(uVar2 & 0x1fffffffffffffff);
  return param_1;
}



/* Entry: 10145ae18; end: 10145af03;  */

int FUN_10145ae18(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x79 < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7a;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1d | (uVar1 >> 0x19 & 8 | (uint)*(undefined8 *)param_1 & 7) << 3) ^ 0x7f;
  if (0x78 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10145af04; end: 1014600df;  */

/* WARNING: Possible PIC construction at 0x00010145af78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145afa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145aff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b0cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b0ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b1f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b1dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010145b32c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010145b31c) */
/* WARNING: Removing unreachable block (ram,0x00010145b37c) */
/* WARNING: Removing unreachable block (ram,0x00010145b1e0) */
/* WARNING: Removing unreachable block (ram,0x00010145b35c) */
/* WARNING: Removing unreachable block (ram,0x00010145b394) */
/* WARNING: Removing unreachable block (ram,0x00010145b294) */
/* WARNING: Removing unreachable block (ram,0x00010145b26c) */
/* WARNING: Removing unreachable block (ram,0x00010145b1f4) */
/* WARNING: Removing unreachable block (ram,0x00010145b0f0) */
/* WARNING: Removing unreachable block (ram,0x00010145b0d0) */
/* WARNING: Removing unreachable block (ram,0x00010145b038) */
/* WARNING: Removing unreachable block (ram,0x00010145b1ec) */
/* WARNING: Removing unreachable block (ram,0x00010145b0ac) */
/* WARNING: Removing unreachable block (ram,0x00010145affc) */
/* WARNING: Removing unreachable block (ram,0x00010145afac) */
/* WARNING: Removing unreachable block (ram,0x00010145b3b8) */
/* WARNING: Removing unreachable block (ram,0x00010145afe0) */
/* WARNING: Removing unreachable block (ram,0x00010145af7c) */
/* WARNING: Removing unreachable block (ram,0x00010145b330) */
/* WARNING: Removing unreachable block (ram,0x00010145b334) */
/* WARNING: Removing unreachable block (ram,0x00010145b398) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10145af04(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puVar3 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_3);
    puVar1 = &UNK_1103c1260;
    func_0x000107c613fc(&UNK_1103c1260,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar3;
    *(undefined8 *)(puVar1 + 0x18) = 0x101464fc0;
    *(ulong *)(puVar1 + 0x20) = param_4;
    uVar4 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c61580(param_4,3);
    func_0x000107c6157c(puVar3);
    func_0x000107c49be8();
    if ((uVar4 & 1) == 0) {
      func_0x000107c61574(puVar3);
      puVar3 = &UNK_1103c1288;
      func_0x000107c613fc(&UNK_1103c1288,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1014654d8;
      *(undefined **)(puVar3 + 0x18) = puVar1;
      uStack_70 = 0x101465390;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103c12a0;
      puStack_68 = puVar3;
      func_0x000107c60bc4(&puStack_90);
      puVar3 = puStack_68;
      func_0x000107c6157c(puVar1);
    }
    else {
      func_0x000107c61428(puVar3 + 0x10,&puStack_90,0,0);
      puVar2 = puVar3 + 0x10;
      func_0x000107c61618();
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c61578(param_4,2);
      }
      else {
        uVar4 = param_4;
        FUN_101455598();
        if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61578(param_4,2);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar2);
          puVar3 = puVar1;
        }
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    puVar3 = *(undefined **)(param_3 + _DAT_112da0920);
    func_0x000107c61580(param_4,2);
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(puVar3);
    func_0x00010006c804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 1014600e0; end: 101460a1f;  */

/* WARNING: Removing unreachable block (ram,0x0001014609b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014600e0(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9
                  )

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_c0 [24];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  puVar1 = &UNK_1103bf910;
  func_0x000107c613fc(&UNK_1103bf910,0x40,7);
  *(long *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_8;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  *(undefined8 *)(puVar1 + 0x38) = param_9;
  uVar4 = param_9;
  uVar5 = param_7;
  uVar6 = param_8;
  if (param_3 == (code *)0x0) {
    puVar2 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_5);
    puVar3 = &UNK_1103bf938;
    func_0x000107c613fc(&UNK_1103bf938,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = 0x101464ecc;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    uVar14 = *(ulong *)(param_5 + _DAT_112da0930);
    func_0x000107c61174(param_9);
    func_0x000107c61580(param_6,2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar2);
    func_0x000107c61174();
    func_0x000107c61174();
    uVar7 = uVar14;
    func_0x000107c49be8();
    if ((uVar7 & 1) == 0) {
      func_0x000107c61574(puVar2);
      puVar2 = &UNK_1103bf960;
      func_0x000107c613fc(&UNK_1103bf960,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x101465418;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      uStack_88 = 0x1014652d0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1103bf978;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar2;
      func_0x000107c60bc4(ppuVar10);
      puVar2 = puStack_80;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar14);
      func_0x000107c61574(puVar3);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(param_6);
    }
    else {
      func_0x000107c61428(puVar2 + 0x10,&puStack_a8,0,0);
      puVar8 = puVar2 + 0x10;
      func_0x000107c61618();
      if (puVar8 == (undefined *)0x0) {
        func_0x000107c61574(param_6);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(puVar2);
        puVar1 = puVar3;
      }
      else {
        func_0x000107c61428(param_6 + 0x10,auStack_c0,0,0);
        lVar9 = param_6 + 0x10;
        func_0x000107c61618();
        if (lVar9 == 0) {
          uVar12 = 0;
        }
        else {
          lVar11 = *(long *)(lVar9 + _DAT_112da0860);
          func_0x000107c61174();
          func_0x000107c61170(lVar9);
          lVar9 = _DAT_112da0920;
          uVar12 = *(undefined8 *)(lVar11 + _DAT_112da0920);
          func_0x000107c6157c(uVar12);
          func_0x00010006c804();
          func_0x000107c61574(uVar12);
          uVar12 = *(undefined8 *)(lVar11 + _DAT_112da0928);
          uVar16 = *(undefined8 *)(lVar11 + lVar9);
          func_0x000107c61174(uVar12);
          func_0x000107c6157c(uVar16);
          func_0x000100070bfc();
          func_0x000107c61170(lVar11);
          func_0x000107c61574(uVar16);
        }
        func_0x00010068ae9c(0);
        uVar16 = uVar12;
        func_0x0001043d9e74(param_1,param_2,uVar12,param_7,param_8,param_9);
        func_0x000107c61170(uVar12);
        func_0x000107c3e208(*(undefined8 *)(puVar8 + _DAT_112da0930));
        func_0x000107c4d664(*(undefined8 *)(puVar8 + _DAT_112da0950));
        func_0x000107c61574(param_6);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(puVar8);
        puVar1 = puVar3;
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    lVar9 = _DAT_112da0920;
    uVar12 = *(undefined8 *)(param_5 + _DAT_112da0920);
    func_0x000107c61174();
    func_0x000107c61580(param_6,2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100382e80(param_3,param_4);
    func_0x000107c6157c(uVar12);
    func_0x00010006c804();
    func_0x000107c61574(uVar12);
    lVar11 = _DAT_112da0928;
    uVar16 = *(undefined8 *)(param_5 + _DAT_112da0928);
    uVar13 = *(undefined8 *)(param_5 + lVar9);
    uVar12 = uVar16;
    func_0x000107c61174(uVar16);
    func_0x000107c6157c(uVar13);
    func_0x000100070bfc();
    func_0x000107c61574(uVar13);
    func_0x0001002ed5a8();
    func_0x000107c61170(uVar12);
    uVar12 = uVar16;
    (*param_3)();
    func_0x0001000c033c();
    uVar13 = *(undefined8 *)(param_5 + lVar9);
    func_0x000107c6157c(uVar13);
    func_0x00010006c804();
    func_0x000107c61574(uVar13);
    uVar13 = *(undefined8 *)(param_5 + lVar11);
    *(undefined8 *)(param_5 + lVar11) = uVar12;
    func_0x000107c61174(uVar12);
    func_0x000107c61170(uVar13);
    uVar13 = *(undefined8 *)(param_5 + lVar9);
    func_0x000107c6157c(uVar13);
    func_0x000100070bfc();
    func_0x000107c61170(uVar12);
    func_0x000107c61574(uVar13);
    puVar2 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_5);
    puVar3 = &UNK_1103bf9b0;
    func_0x000107c613fc(&UNK_1103bf9b0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = 0x101464ecc;
    *(undefined **)(puVar3 + 0x20) = puVar1;
    uVar14 = *(ulong *)(param_5 + _DAT_112da0930);
    func_0x000107c6157c(puVar1);
    func_0x000107c6157c(puVar2);
    uVar7 = uVar14;
    func_0x000107c49be8();
    if ((uVar7 & 1) == 0) {
      func_0x000107c61574(puVar2);
      puVar2 = &UNK_1103bf9d8;
      func_0x000107c613fc(&UNK_1103bf9d8,0x20,7);
      *(undefined8 *)(puVar2 + 0x10) = 0x10146541c;
      *(undefined **)(puVar2 + 0x18) = puVar3;
      uStack_88 = 0x1014652d4;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1103bf9f0;
      ppuVar10 = &puStack_a8;
      puStack_80 = puVar2;
      func_0x000107c60bc4(ppuVar10);
      puVar2 = puStack_80;
      func_0x000107c6157c(puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c4e524(uVar14);
      func_0x000100382f48(param_3,param_4);
      func_0x000107c61170(uVar16);
      func_0x000107c61574(puVar3);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(param_6);
    }
    else {
      func_0x000107c61428(puVar2 + 0x10,&puStack_a8,0,0);
      puVar8 = puVar2 + 0x10;
      func_0x000107c61618();
      if (puVar8 == (undefined *)0x0) {
        func_0x000100382f48(param_3,param_4);
        func_0x000107c61574(param_6);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar16);
        puVar1 = puVar3;
      }
      else {
        uVar13 = *(undefined8 *)(puVar8 + _DAT_112da0938);
        FUN_100c3d364();
        lVar9 = _DAT_112da0920;
        uVar12 = *(undefined8 *)(puVar8 + _DAT_112da0920);
        func_0x000107c6157c(param_6);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174(uVar13);
        func_0x000107c6157c(uVar12);
        func_0x00010006c804();
        func_0x000107c61574(uVar12);
        uVar17 = *(undefined8 *)(puVar8 + _DAT_112da0928);
        uVar15 = *(undefined8 *)(puVar8 + lVar9);
        uVar12 = uVar17;
        func_0x000107c61174(uVar17);
        func_0x000107c6157c(uVar15);
        func_0x000100070bfc();
        func_0x000107c61574(uVar15);
        FUN_100c3d384(uVar17);
        func_0x000107c61170(uVar12);
        func_0x000107c4d664(uVar13);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(uVar17);
        func_0x000107c61428(param_6 + 0x10,auStack_c0,0,0);
        lVar9 = param_6 + 0x10;
        func_0x000107c61618();
        if (lVar9 == 0) {
          uVar12 = 0;
        }
        else {
          lVar11 = *(long *)(lVar9 + _DAT_112da0860);
          func_0x000107c61174();
          func_0x000107c61170(lVar9);
          lVar9 = _DAT_112da0920;
          uVar12 = *(undefined8 *)(lVar11 + _DAT_112da0920);
          func_0x000107c6157c(uVar12);
          func_0x00010006c804();
          func_0x000107c61574(uVar12);
          uVar12 = *(undefined8 *)(lVar11 + _DAT_112da0928);
          uVar13 = *(undefined8 *)(lVar11 + lVar9);
          func_0x000107c61174(uVar12);
          func_0x000107c6157c(uVar13);
          func_0x000100070bfc();
          func_0x000107c61170(lVar11);
          func_0x000107c61574(uVar13);
        }
        func_0x00010068ae9c(0);
        uVar13 = uVar12;
        func_0x0001043d9e74(param_1,param_2,uVar12,param_7,param_8,param_9);
        func_0x000107c61170(uVar12);
        func_0x000107c3e208(*(undefined8 *)(puVar8 + _DAT_112da0930));
        func_0x000107c4d664(*(undefined8 *)(puVar8 + _DAT_112da0950));
        func_0x000107c61574(param_6);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar13);
        func_0x000107c61170(puVar8);
        func_0x000100382f48(param_3,param_4);
        func_0x000107c61574(param_6);
        func_0x000107c61574(puVar1);
        func_0x000107c61574(puVar2);
        func_0x000107c61170(uVar16);
        puVar1 = puVar3;
      }
    }
  }
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101460a20; end: 101464e53;  */

/* WARNING: Removing unreachable block (ram,0x000101460fe8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101460a20(code *param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar3 = &UNK_1103bf7f8;
  func_0x000107c613fc(&UNK_1103bf7f8,0x28,7);
  *(ulong *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  uVar6 = param_6;
  uVar7 = param_5;
  if (param_1 == (code *)0x0) {
    puVar4 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_3);
    puVar5 = &UNK_1103bf820;
    func_0x000107c613fc(&UNK_1103bf820,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = 0x101464ec0;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    uVar13 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c61174(param_6);
    func_0x000107c61580(param_4,2);
    func_0x000107c61174(param_5);
    func_0x000107c61174(uVar6);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar4);
    func_0x000107c61174(uVar7);
    uVar8 = uVar13;
    func_0x000107c49be8();
    if ((uVar8 & 1) == 0) {
      func_0x000107c61574(puVar4);
      puVar4 = &UNK_1103bf848;
      func_0x000107c613fc(&UNK_1103bf848,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = 0x101465410;
      *(undefined **)(puVar4 + 0x18) = puVar5;
      uStack_70 = 0x1014652c8;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103bf860;
      ppuVar10 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar10);
      puVar4 = puStack_68;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar13);
      func_0x000107c61574(puVar5);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(param_4);
      puVar5 = puVar3;
    }
    else {
      func_0x000107c61428(puVar4 + 0x10,&puStack_90,0,0);
      puVar9 = puVar4 + 0x10;
      func_0x000107c61618();
      if (puVar9 == (undefined *)0x0) {
        func_0x000107c61574(param_4);
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar4);
      }
      else {
        uVar8 = param_4;
        FUN_101457108(param_4,param_5,param_6);
        if (((uVar8 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
          func_0x000107c61574(param_4);
          func_0x000107c61574(puVar3);
          func_0x000107c61574(puVar4);
          func_0x000107c61170(puVar9);
        }
        else {
          FUN_100c3baf4();
          func_0x000107c61170(puVar9);
          func_0x000107c61574(puVar5);
          FUN_100c3c730(uVar8);
          func_0x000107c61574(param_4);
          func_0x000107c61574(puVar3);
          puVar5 = puVar4;
        }
      }
    }
  }
  else {
    func_0x0001002e8978(0);
    lVar1 = _DAT_112da0920;
    uVar11 = *(undefined8 *)(param_3 + _DAT_112da0920);
    func_0x000107c61174();
    func_0x000107c61580(param_4,2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000100382e80(param_1,param_2);
    func_0x000107c6157c(uVar11);
    func_0x00010006c804();
    func_0x000107c61574(uVar11);
    lVar2 = _DAT_112da0928;
    uVar14 = *(undefined8 *)(param_3 + _DAT_112da0928);
    uVar12 = *(undefined8 *)(param_3 + lVar1);
    uVar11 = uVar14;
    func_0x000107c61174(uVar14);
    func_0x000107c6157c(uVar12);
    func_0x000100070bfc();
    func_0x000107c61574(uVar12);
    func_0x0001002ed5a8();
    func_0x000107c61170(uVar11);
    uVar11 = uVar14;
    (*param_1)();
    func_0x0001000c033c();
    uVar12 = *(undefined8 *)(param_3 + lVar1);
    func_0x000107c6157c(uVar12);
    func_0x00010006c804();
    func_0x000107c61574(uVar12);
    uVar12 = *(undefined8 *)(param_3 + lVar2);
    *(undefined8 *)(param_3 + lVar2) = uVar11;
    func_0x000107c61174(uVar11);
    func_0x000107c61170(uVar12);
    uVar12 = *(undefined8 *)(param_3 + lVar1);
    func_0x000107c6157c(uVar12);
    func_0x000100070bfc();
    func_0x000107c61170(uVar11);
    func_0x000107c61574(uVar12);
    puVar4 = &UNK_1103be908;
    func_0x000107c613fc(&UNK_1103be908,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,param_3);
    puVar5 = &UNK_1103bf898;
    func_0x000107c613fc(&UNK_1103bf898,0x28,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = 0x101464ec0;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    uVar13 = *(ulong *)(param_3 + _DAT_112da0930);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar4);
    uVar8 = uVar13;
    func_0x000107c49be8();
    if ((uVar8 & 1) == 0) {
      func_0x000107c61574(puVar4);
      puVar4 = &UNK_1103bf8c0;
      func_0x000107c613fc(&UNK_1103bf8c0,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = 0x101465414;
      *(undefined **)(puVar4 + 0x18) = puVar5;
      uStack_70 = 0x1014652cc;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_1103bf8d8;
      ppuVar10 = &puStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppuVar10);
      puVar4 = puStack_68;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(uVar13);
      func_0x000100382f48(param_1,param_2);
      func_0x000107c61170(uVar14);
      func_0x000107c61574(puVar5);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61574(param_4);
      func_0x000107c61574(puVar3);
      goto LAB_101460fb8;
    }
    func_0x000107c6157c(param_4);
    func_0x000107c61174(uVar7);
    func_0x000107c61174(uVar6);
    FUN_100c3d1fc(puVar4,param_4,param_5,param_6,FUN_101457108);
    func_0x000107c61574(param_4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000100382f48(param_1,param_2);
    func_0x000107c61574(param_4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c61170(uVar14);
  }
  func_0x000107c61574(puVar5);
LAB_101460fb8:
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 101464e54; end: 101464ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101464e54(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = *(long *)(lVar1 + _DAT_112da0890);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = _DAT_112da0920;
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0920);
    func_0x000107c6157c(uVar4);
    func_0x00010006c804();
    func_0x000107c61574(uVar4);
    uVar4 = *(undefined8 *)(lVar3 + _DAT_112da0928);
    uVar5 = *(undefined8 *)(lVar3 + lVar1);
    func_0x000107c61174(uVar4);
    func_0x000107c6157c(uVar5);
    func_0x000100070bfc();
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar5);
  }
  FUN_100c3b9b0(0);
  (*(code *)&UNK_1043dc58c)(uVar2,uVar4);
  func_0x000107c61170(uVar4);
  return uVar2 | 0x8000000000000000;
}



/* Entry: 101464ee8; end: 101464f13;  */

void FUN_101464ee8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101464f14; end: 1014654e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101464f14(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    lVar4 = *(long *)(lVar2 + _DAT_112da0860);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    lVar2 = _DAT_112da0920;
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112da0920);
    func_0x000107c6157c(uVar5);
    func_0x00010006c804();
    func_0x000107c61574(uVar5);
    uVar6 = *(ulong *)(lVar4 + _DAT_112da0928);
    uVar5 = *(undefined8 *)(lVar4 + lVar2);
    func_0x000107c61174(uVar6);
    func_0x000107c6157c(uVar5);
    func_0x000100070bfc();
    func_0x000107c61170(lVar4);
    func_0x000107c61574(uVar5);
  }
  func_0x00010068ae9c(0);
  uVar3 = uVar6;
  (*(code *)&UNK_1043d9da4)(uVar6,uVar1);
  func_0x000107c61170(uVar6);
  return uVar3 | 0x6000000000000000;
}



/* Entry: 1014654e8; end: 101465557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * FUN_1014654e8(void)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112da09a8;
  pcVar2 = *(char **)(unaff_x20 + _DAT_112da09a8);
  pcVar3 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    pcVar3 = "mainQueuePerformer";
    func_0x0001000c10c0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(char **)(unaff_x20 + lVar1) = pcVar3;
    func_0x000107c615f0();
    func_0x000107c615e8(uVar4);
    pcVar2 = (char *)0x0;
  }
  func_0x000107c615f0(pcVar2);
  return pcVar3;
}



/* Entry: 101465558; end: 10146571b;  */

void FUN_101465558(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x4d);
  func_0x000107c5fb78(0xd000000000000039,0x800000010ef81b10);
  bVar2 = (param_1 & 1) == 0;
  uVar3 = 0x65757274;
  if (bVar2) {
    uVar3 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0xd000000000000010,0x800000010ef81b50);
  uStack_48 = param_2;
  func_0x000107c603d0(&uStack_48,&puStack_78,&UNK_110764ff8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar3 = uStack_70;
  func_0x000107c6142c(uStack_70);
  FUN_1014654e8();
  puVar4 = &UNK_1103c1518;
  func_0x000107c613fc(&UNK_1103c1518,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar5 = &UNK_1103c1540;
  func_0x000107c613fc(&UNK_1103c1540,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  puVar5[0x18] = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  pcStack_58 = FUN_101465ef0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1103c1558;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_50);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 10146571c; end: 101465b9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10146571c(undefined8 *param_1,byte param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  puVar2 = param_1;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000037;
  func_0x0001000a9a18(0xd000000000000037,0x800000010ef81b70);
  func_0x000107c61170(uVar3);
  func_0x000107c61428(param_1 + 2,auStack_80,0,0);
  param_1 = param_1 + 2;
  func_0x000107c61618();
  lVar1 = _DAT_112da0998;
  if (param_1 == (undefined8 *)0x0) goto LAB_10146590c;
  if ((param_2 & 1) != *(byte *)((long)param_1 + _DAT_112da0998)) {
    if ((param_2 & 1) == 0) {
      *(undefined1 *)((long)param_1 + _DAT_112da0998) = 0;
      lVar1 = _DAT_112da09b0;
      uVar3 = 0;
      if (*(long *)((long)param_1 + _DAT_112da09b0) != 0) {
        func_0x000107c4ff34();
        uVar3 = *(undefined8 *)((long)param_1 + lVar1);
      }
      *(undefined8 *)((long)param_1 + lVar1) = 0;
      func_0x000107c61170(uVar3);
      lVar1 = _DAT_112da09a0;
      if (0.0 <= *(double *)((long)param_1 + _DAT_112da09a0)) {
        puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c52e54(*(undefined8 *)((long)param_1 + lVar1));
        func_0x000107c61170(puVar8);
        *(undefined8 *)((long)param_1 + lVar1) = 0xbff0000000000000;
      }
    }
    else {
      puVar5 = param_1;
      FUN_101466070();
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined1 *)((long)param_1 + lVar1) = 1;
        lVar1 = _DAT_112da09b0;
        lVar6 = *(long *)((long)param_1 + _DAT_112da09b0);
        if (lVar6 == 0) {
          puVar7 = puVar5;
          FUN_1014663ac();
          uVar3 = *(undefined8 *)((long)param_1 + lVar1);
          *(undefined8 **)((long)param_1 + lVar1) = puVar7;
          func_0x000107c61170(uVar3);
          lVar6 = *(long *)((long)param_1 + lVar1);
          if (lVar6 == 0) {
            func_0x000107c61170(param_1);
            param_1 = puVar5;
            goto LAB_101465908;
          }
        }
        func_0x000107c61174();
        uVar3 = 0x3fe8000000000000;
        if (param_3 != 1) {
          uVar3 = 0;
        }
        uVar9 = 0x3ff0000000000000;
        if (param_3 != 0) {
          uVar9 = uVar3;
        }
        func_0x000107c526c0();
        func_0x000107c3d89c(puVar5);
        puVar8 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c3ec84();
        func_0x000107c61170(puVar8);
        *(undefined8 *)((long)param_1 + _DAT_112da09a0) = uVar9;
        func_0x000101465968();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar6);
      }
    }
  }
LAB_101465908:
  func_0x000107c61170(param_1);
LAB_10146590c:
  func_0x000107c61428(puVar2,auStack_98,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101465ba0; end: 101465bf3;  */

void FUN_101465ba0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000101465968();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101465bf4; end: 101465c63; -[_TtC26SCCaptureDeviceManagerImpl43CaptureDeviceBrightScreenOverlayFlashHelper init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101465bf4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112da0998) = 0;
  *(undefined8 *)(param_1 + _DAT_112da09a0) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + _DAT_112da09a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112da09b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101465c64; end: 101465c97;  */

void FUN_101465c64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101465c98; end: 101465ccf; -[_TtC26SCCaptureDeviceManagerImpl43CaptureDeviceBrightScreenOverlayFlashHelper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101465c98(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da09a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da09b0));
  return;
}



/* Entry: 101465cd0; end: 101465cef;  */

void FUN_101465cd0(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8120);
  return;
}



/* Entry: 101465cf0; end: 101465cf7;  */

void FUN_101465cf0(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 101465cf8; end: 101465eef;  */

void FUN_101465cf8(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 101465ef0; end: 101465f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101465ef0(void)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  puVar10 = *(undefined8 **)(unaff_x20 + 0x10);
  bVar1 = *(byte *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  puVar3 = puVar10;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  uVar5 = 0xd000000000000037;
  func_0x0001000a9a18(0xd000000000000037,0x800000010ef81b70);
  func_0x000107c61170(uVar4);
  func_0x000107c61428(puVar10 + 2,auStack_80,0,0);
  puVar10 = puVar10 + 2;
  func_0x000107c61618();
  lVar2 = _DAT_112da0998;
  if (puVar10 == (undefined8 *)0x0) goto LAB_10146590c;
  if ((bVar1 & 1) != *(byte *)((long)puVar10 + _DAT_112da0998)) {
    if ((bVar1 & 1) == 0) {
      *(undefined1 *)((long)puVar10 + _DAT_112da0998) = 0;
      lVar2 = _DAT_112da09b0;
      uVar4 = 0;
      if (*(long *)((long)puVar10 + _DAT_112da09b0) != 0) {
        func_0x000107c4ff34();
        uVar4 = *(undefined8 *)((long)puVar10 + lVar2);
      }
      *(undefined8 *)((long)puVar10 + lVar2) = 0;
      func_0x000107c61170(uVar4);
      lVar2 = _DAT_112da09a0;
      if (0.0 <= *(double *)((long)puVar10 + _DAT_112da09a0)) {
        puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c52e54(*(undefined8 *)((long)puVar10 + lVar2));
        func_0x000107c61170(puVar9);
        *(undefined8 *)((long)puVar10 + lVar2) = 0xbff0000000000000;
      }
    }
    else {
      puVar6 = puVar10;
      FUN_101466070();
      if (puVar6 != (undefined8 *)0x0) {
        *(undefined1 *)((long)puVar10 + lVar2) = 1;
        lVar2 = _DAT_112da09b0;
        lVar7 = *(long *)((long)puVar10 + _DAT_112da09b0);
        if (lVar7 == 0) {
          puVar8 = puVar6;
          FUN_1014663ac();
          uVar4 = *(undefined8 *)((long)puVar10 + lVar2);
          *(undefined8 **)((long)puVar10 + lVar2) = puVar8;
          func_0x000107c61170(uVar4);
          lVar7 = *(long *)((long)puVar10 + lVar2);
          if (lVar7 == 0) {
            func_0x000107c61170(puVar10);
            puVar10 = puVar6;
            goto LAB_101465908;
          }
        }
        func_0x000107c61174();
        uVar4 = 0x3fe8000000000000;
        if (lVar11 != 1) {
          uVar4 = 0;
        }
        uVar12 = 0x3ff0000000000000;
        if (lVar11 != 0) {
          uVar12 = uVar4;
        }
        func_0x000107c526c0();
        func_0x000107c3d89c(puVar6);
        puVar9 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c3ec84();
        func_0x000107c61170(puVar9);
        *(undefined8 *)((long)puVar10 + _DAT_112da09a0) = uVar12;
        func_0x000101465968();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(lVar7);
      }
    }
  }
LAB_101465908:
  func_0x000107c61170(puVar10);
LAB_10146590c:
  func_0x000107c61428(puVar3,auStack_98,0,0);
  uVar4 = *puVar3;
  func_0x000107c61174(uVar4);
  func_0x0001000aa0a8(uVar5);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101465f1c; end: 101465f87;  */

void FUN_101465f1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112da0a00;
  FUN_1014665e0(0x112da0a00,&UNK_10d943b78);
  uVar2 = 0x112da0a08;
  FUN_1014665e0(0x112da0a08,&UNK_10d943b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 101465f88; end: 101465fff;  */

undefined8 FUN_101465f88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 101466000; end: 10146606f;  */

undefined1 * FUN_101466000(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 101466070; end: 1014663ab;  */

undefined8 FUN_101466070(void)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong *puVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar12 = puVar4;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar5 = 0;
  FUN_101466524(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar7 = uVar5;
  FUN_100deaee4();
  puVar4 = puVar12;
  func_0x000107c5fe10(puVar12,uVar5,uVar7);
  func_0x000107c61170(puVar12);
  if (((ulong)puVar4 & 0xc000000000000001) == 0) {
    uVar9 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
    puVar13 = (ulong *)(puVar4 + 0x38);
    uVar11 = ~uVar9;
    uVar9 = -uVar9;
    uVar10 = 0xffffffffffffffff;
    if (uVar9 < 0x40) {
      uVar10 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar10 = uVar10 & *puVar13;
    puVar12 = puVar4;
    func_0x000107c61434();
    lVar14 = 0;
    puVar8 = puVar4;
  }
  else {
    puVar12 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar12 = puVar4;
    }
    func_0x000107c61434(puVar4);
    func_0x000107c60288();
    func_0x000107c5fe30(&puStack_88);
    uVar11 = uStack_78;
    puVar13 = puStack_80;
    uVar10 = uStack_68;
    puVar8 = puStack_88;
    lVar14 = lStack_70;
  }
  lVar2 = lVar14;
  uVar9 = uVar10;
  if (-1 < (long)puVar8) goto joined_r0x0001014661e4;
  while (func_0x000107c602ac(), puVar12 != (undefined *)0x0) {
    puStack_98 = puVar12;
    func_0x000107c6147c(&puStack_90,&puStack_98,PTR___syXlN_11034f1a0 + 8,uVar5,7);
    uVar9 = uVar10;
    lVar2 = lVar14;
    lVar15 = lVar14;
    puVar12 = puStack_90;
    while( true ) {
      lVar14 = lVar2;
      if (puVar12 == (undefined *)0x0) goto LAB_101466260;
      puVar6 = puVar12;
      func_0x000107c3d0e4();
      if (puVar6 == (undefined *)0x0) {
        FUN_100deaf38(puVar8,puVar13,uVar11,lVar15,uVar9);
        func_0x000107c6142c(puVar4);
        puVar4 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
        func_0x000107c61168(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
        puVar8 = puVar12;
        func_0x000107c6148c(puVar12,puVar4);
        if (puVar8 != (undefined *)0x0) {
          func_0x000107c5e408();
          func_0x000107c61180();
          uVar7 = 0;
          FUN_101466524(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
          puVar4 = puVar8;
          func_0x000107c5fc54(puVar8,uVar7);
          func_0x000107c61170(puVar8);
          if ((ulong)puVar4 >> 0x3e == 0) {
            puVar8 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar8 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar4) {
              puVar8 = puVar4;
            }
            func_0x000107c60480();
          }
          if (puVar8 != (undefined *)0x0) {
            if (((ulong)puVar4 & 0xc000000000000001) == 0) {
              if (*(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1014663ac);
                (*pcVar3)();
              }
              uVar7 = *(undefined8 *)(puVar4 + 0x20);
              func_0x000107c61174(uVar7);
            }
            else {
              uVar7 = 0;
              FUN_100de9de8(0,puVar4);
            }
            func_0x000107c6142c(puVar4);
            func_0x000107c61170(puVar12);
            return uVar7;
          }
          func_0x000107c6142c(puVar4);
        }
        func_0x000107c61170(puVar12);
        return 0;
      }
      func_0x000107c61170();
      lVar2 = lVar14;
      uVar9 = uVar10;
      if ((long)puVar8 < 0) break;
joined_r0x0001014661e4:
      while (uVar10 == 0) {
        lVar15 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101466370);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar15) {
          uVar10 = 0;
          goto LAB_10146625c;
        }
        lVar2 = lVar15;
        uVar10 = puVar13[lVar15];
      }
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      puVar12 = *(undefined **)
                 (*(long *)(puVar8 + 0x30) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_90 = puVar12;
      func_0x000107c61174(puVar12);
      lVar15 = lVar14;
    }
  }
LAB_10146625c:
  puStack_90 = (undefined *)0x0;
  uVar9 = uVar10;
  lVar15 = lVar14;
LAB_101466260:
  FUN_100deaf38(puVar8,puVar13,uVar11,lVar15,uVar9);
  func_0x000107c6142c(puVar4);
  return 0;
}



/* Entry: 1014663ac; end: 10146651b;  */

undefined *
FUN_1014663ac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_90 [48];
  
  puVar1 = param_5;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000003e;
  func_0x0001000a9a18(0xd00000000000003e,0x800000010ef81c50);
  func_0x000107c61170(uVar2);
  func_0x000107c3ec60(param_5);
  dVar6 = param_1;
  func_0x000107c609cc();
  dVar7 = param_1;
  func_0x000107c609b0(param_1,param_2,param_3,param_4);
  if (dVar7 < dVar6) {
    dVar7 = dVar6;
  }
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(param_1,param_2,dVar7,dVar7);
  func_0x000107c5a378();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c526c0(0,puVar4);
  func_0x000107c61428(puVar1,auStack_90,0,0);
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return puVar4;
}



/* Entry: 10146651c; end: 101466523;  */

void FUN_10146651c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000101465968();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101466524; end: 101466563;  */

void FUN_101466524(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 101466564; end: 101466577;  */

void FUN_101466564(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c15b8;
  if (lRam0000000112da09e0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112da09e0 = param_1;
  }
  return;
}



/* Entry: 101466578; end: 1014665bb;  */

void FUN_101466578(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1014665bc; end: 1014665df;  */

void FUN_1014665bc(void)

{
  FUN_1014665e0(0x112da09e8,&UNK_10d943adc);
  return;
}



/* Entry: 1014665e0; end: 10146661f;  */

void FUN_1014665e0(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_101466564(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 101466620; end: 101466667;  */

void FUN_101466620(void)

{
  FUN_1014665e0(0x112da09f0,&UNK_10d943ab0);
  return;
}



/* Entry: 101466668; end: 101466677;  */

void FUN_101466668(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}


