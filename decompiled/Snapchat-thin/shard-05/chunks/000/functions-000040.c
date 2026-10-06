/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a77610; end: 103a7761f; -[SCMemoriesSnapDocTranscodedMediaTypeVideo overlayImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77610(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11380cca0));
  return;
}



/* Entry: 103a77620; end: 103a7777f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a77620(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar1 = _DAT_11380cc98;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_11380cca0) = param_2;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 103a77780; end: 103a777df; -[SCMemoriesSnapDocTranscodedMediaTypeVideo init] */

void FUN_103a77780(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocTranscodingServices.MemoriesSnapDocTranscodedMediaTypeVideo"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a777ac);
  (*pcVar1)();
}



/* Entry: 103a777e0; end: 103a7782b; -[SCMemoriesSnapDocTranscodedMediaTypeVideo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a777e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_11380cc98;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11380cca0));
  return;
}



/* Entry: 103a7782c; end: 103a77837;  */

void FUN_103a7782c(ulong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 103a77838; end: 103a778a7;  */

ulong * FUN_103a77838(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  func_0x000107c61174(uVar1 & 0x7fffffffffffffff);
  func_0x000107c61170(uVar2 & 0x7fffffffffffffff);
  return param_1;
}



/* Entry: 103a778a8; end: 103a77993;  */

int FUN_103a778a8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && ((char)param_1[2] != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103a77994; end: 103a779b3;  */

void FUN_103a77994(void)

{
  func_0x000107c61168(&PTR_PTR_11291a180);
  return;
}



/* Entry: 103a779b4; end: 103a779bb;  */

void FUN_103a779b4(void)

{
  if (lRam0000000112fda330 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7a2c60);
  return;
}



/* Entry: 103a779bc; end: 103a779f3;  */

void FUN_103a779bc(undefined8 param_1)

{
  if (lRam0000000112fda330 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a2c60);
  return;
}



/* Entry: 103a779f4; end: 103a77a67;  */

void FUN_103a779f4(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &UNK_10dc448f8;
    func_0x000107c61630(param_1,0x100,2,&lStack_30,param_1 + 0x50);
  }
  return;
}



/* Entry: 103a77a68; end: 103a77a73;  */

ulong * FUN_103a77a68(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  func_0x000107c61174(uVar1 & 0x7fffffffffffffff);
  return param_1;
}



/* Entry: 103a77a74; end: 103a77a83; -[SCMemoriesSnapDocTranscodingOutput snapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77a74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda340));
  return;
}



/* Entry: 103a77a84; end: 103a77bb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a77a84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda340) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fda348) = param_2;
  FUN_103a77bb4(param_3,unaff_x20 + _DAT_112fda350);
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_3);
  return puVar1;
}



/* Entry: 103a77bb4; end: 103a77bf7;  */

long FUN_103a77bb4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103a77bf8; end: 103a77c17; -[SCMemoriesSnapDocTranscodingOutput matchMediaWithImageBlock:videoBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77bf8(long param_1,undefined8 param_2,long param_3,long param_4)

{
  if (-1 < (long)*(ulong *)(param_1 + _DAT_112fda348)) {
    param_4 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x000103a77c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4,*(ulong *)(param_1 + _DAT_112fda348) & 0x7fffffffffffffff);
  return;
}



/* Entry: 103a77c18; end: 103a77c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77c18(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112fda350;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 8))(uVar2,lVar3);
  return;
}



/* Entry: 103a77c64; end: 103a77ccb; -[SCMemoriesSnapDocTranscodingOutput cleanUpMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77c64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  lVar1 = param_1 + _DAT_112fda350;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  pcVar4 = *(code **)(lVar3 + 8);
  func_0x000107c61174(param_1);
  (*pcVar4)(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103a77ccc; end: 103a77d2b; -[SCMemoriesSnapDocTranscodingOutput init] */

void FUN_103a77ccc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocTranscodingServices.MemoriesSnapDocTranscodingOutput",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a77cf8);
  (*pcVar1)();
}



/* Entry: 103a77d2c; end: 103a77d77; -[SCMemoriesSnapDocTranscodingOutput .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a77d2c(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fda340));
  func_0x000107c61170(*(ulong *)(param_1 + _DAT_112fda348) & 0x7fffffffffffffff);
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112fda350))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fda350));
  return;
}



/* Entry: 103a77d78; end: 103a77d97;  */

void FUN_103a77d78(void)

{
  func_0x000107c61168(&PTR_PTR_11291a310);
  return;
}



/* Entry: 103a77d98; end: 103a77eff;  */

void FUN_103a77d98(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 103a77f00; end: 103a77f37;  */

void FUN_103a77f00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 103a77f38; end: 103a780ab;  */

void FUN_103a77f38(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (uVar2 == 0 || ((int)uVar1 == -1 || (int)uVar1 == 0)) {
    func_0x000107c614b0(uVar2);
  }
  *param_1 = uVar2;
  return;
}



/* Entry: 103a780ac; end: 103a781c3;  */

int FUN_103a780ac(ulong *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff3 < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffff4;
  }
  uVar4 = *param_1;
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  uVar3 = (uint)uVar4;
  iVar1 = 0;
  if (10 < uVar3) {
    iVar1 = uVar3 - 0xb;
  }
  iVar2 = 0;
  if (1 < uVar3 + 1) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Entry: 103a781c4; end: 103a781d3; -[_TtC36SCMemoriesSnapDocTranscodingServices34MemoriesSnapDocTranscodingServices snapDocTranscodingManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a781c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fda388));
  return;
}



/* Entry: 103a781d4; end: 103a782db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a781d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  puVar4 = auStack_80;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda380) = param_1;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_103a784c8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x103a7830c;
  puStack_58 = &UNK_1106c5200;
  ppuVar3 = &puStack_70;
  uStack_48 = param_1;
  func_0x000107c60bc4(ppuVar3);
  uVar1 = uStack_48;
  func_0x000107c61580(param_1,2);
  func_0x000107c61574(uVar1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  *(undefined **)(unaff_x20 + _DAT_112fda388) = puVar2;
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar4;
}



/* Entry: 103a782dc; end: 103a78343;  */

undefined8 FUN_103a782dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103a783d8();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 103a78344; end: 103a7839f; -[_TtC36SCMemoriesSnapDocTranscodingServices34MemoriesSnapDocTranscodingServices init] */

void FUN_103a78344(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapDocTranscodingServices.MemoriesSnapDocTranscodingServices",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a78370);
  (*pcVar1)();
}



/* Entry: 103a783a0; end: 103a783d7; -[_TtC36SCMemoriesSnapDocTranscodingServices34MemoriesSnapDocTranscodingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a783a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fda380));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda388));
  return;
}



/* Entry: 103a783d8; end: 103a784c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a783d8(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fda380) = param_1;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  func_0x000107c60bc4();
  func_0x000107c61580(param_1,2);
  func_0x000107c61574(param_1);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0();
  *(undefined **)(unaff_x20 + _DAT_112fda388) = puVar1;
  func_0x0001002c4180();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a784c8; end: 103a784eb;  */

undefined8 FUN_103a784c8(void)

{
  undefined8 auStack_20 [2];
  
  func_0x0001000d224c(auStack_20);
  return auStack_20[0];
}



/* Entry: 103a784ec; end: 103a78513;  */

void FUN_103a784ec(long param_1,long param_2)

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



/* Entry: 103a78514; end: 103a7855f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78514(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda3b8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a78560; end: 103a785bb; -[_TtC26SCMemoriesSnapFeedServices26SCMemoriesSnapFeedServices init] */

void FUN_103a78560(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemoriesSnapFeedServices.SCMemoriesSnapFeedServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a7858c);
  (*pcVar1)();
}



/* Entry: 103a785bc; end: 103a785cb; -[_TtC26SCMemoriesSnapFeedServices26SCMemoriesSnapFeedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a785bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda3b8));
  return;
}



/* Entry: 103a785cc; end: 103a78763;  */

long FUN_103a785cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103a78764; end: 103a787af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78764(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fda3e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a787b0; end: 103a78807; -[_TtC32MemoriesSnapThumbnailServicesAPI31SCMemoriesSnapThumbnailServices initWithMemoriesSnapThumbnailProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a787b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fda3e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103a78808; end: 103a78867; -[_TtC32MemoriesSnapThumbnailServicesAPI31SCMemoriesSnapThumbnailServices init] */

void FUN_103a78808(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesSnapThumbnailServicesAPI.SCMemoriesSnapThumbnailServices",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a78834);
  (*pcVar1)();
}



/* Entry: 103a78868; end: 103a78877; -[_TtC32MemoriesSnapThumbnailServicesAPI31SCMemoriesSnapThumbnailServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda3e8));
  return;
}



/* Entry: 103a78878; end: 103a788c3; -[SCMemoriesSnapThumbnailRequest snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78878(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112fda418);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112fda418))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103a788c4; end: 103a788df; -[SCMemoriesSnapThumbnailRequest targetSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103a788c4(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_112fda420);
}



/* Entry: 103a788e0; end: 103a78a5b; -[SCMemoriesSnapThumbnailRequest initWithSnapId:targetSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a788e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_3;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_3 + _DAT_112fda418);
  *puVar1 = param_5;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_3 + _DAT_112fda420);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lStack_50 = param_3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a78a5c; end: 103a78a5f; -[SCMemoriesSnapThumbnailRequest copyWithZone:] */

void FUN_103a78a5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103a78a60; end: 103a78a7b; -[SCMemoriesSnapThumbnailRequest description] */

void FUN_103a78a60(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a78a7c; end: 103a78af7; -[SCMemoriesSnapThumbnailRequest init] */

void FUN_103a78a7c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MemoriesSnapThumbnailServicesAPI/MemoriesSnapThumbnailRequestWrapper.swift",
                      0x4a,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a78ac4);
  (*pcVar1)();
}



/* Entry: 103a78af8; end: 103a78b0b; -[SCMemoriesSnapThumbnailRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78af8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fda418 + 8))
  ;
  return;
}



/* Entry: 103a78b0c; end: 103a78b2b;  */

void FUN_103a78b0c(void)

{
  func_0x000107c61168(&PTR_PTR_11291a628);
  return;
}



/* Entry: 103a78b2c; end: 103a78b2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda418);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fda420);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a78b30; end: 103a78bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a78b30(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa3f80();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fda450) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fda458) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a78bb8);
  (*pcVar1)();
}



/* Entry: 103a78bb8; end: 103a78c17; -[_TtC35MmActiveUserSessionScopeGraphBridge50MmActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a78bb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MmActiveUserSessionScopeGraphBridge.MmActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a78be4);
  (*pcVar1)();
}



/* Entry: 103a78c18; end: 103a78c4f; -[_TtC35MmActiveUserSessionScopeGraphBridge50MmActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a78c34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a78c38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78c18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda450));
  return;
}



/* Entry: 103a78c50; end: 103a78c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78c50(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fda458),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fda450));
  return;
}



/* Entry: 103a78c78; end: 103a78cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a78c78(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fda568);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a78cdc; end: 103a78ce3;  */

void FUN_103a78cdc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a78ce4; end: 103a78d83;  */

void FUN_103a78ce4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a78d84; end: 103a78def;  */

void FUN_103a78d84(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a78df0; end: 103a78e4f; -[_TtC35MmActiveUserSessionScopeGraphBridge43MmActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103a78df0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MmActiveUserSessionScopeGraphBridge.MmActiveUserSessionScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a78e1c);
  (*pcVar1)();
}



/* Entry: 103a78e50; end: 103a78e5f; -[_TtC35MmActiveUserSessionScopeGraphBridge43MmActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78e50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fda568));
  return;
}



/* Entry: 103a78e60; end: 103a78ebb;  */

void FUN_103a78e60(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112fda558,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112fda558,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103a78ebc; end: 103a78ef3;  */

undefined1  [16] FUN_103a78ebc(void)

{
  return ZEXT816(0x1106c54f8);
}



/* Entry: 103a78ef4; end: 103a78f37; -[SCMmActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103a78ef4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a78f38; end: 103a78f6b;  */

void FUN_103a78f38(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a78f6c; end: 103a78fb3; -[SCMmActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a78f98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a78f9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78f6c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fda5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda5c8));
  return;
}



/* Entry: 103a78fb4; end: 103a78fd3;  */

void FUN_103a78fb4(void)

{
  func_0x000107c61168(&PTR_PTR_11291a880);
  return;
}



/* Entry: 103a78fd4; end: 103a78fdf; -[SCSCUserMetadataCacheServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78fd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fda600;
  func_0x000107c61428(param_1 + _DAT_112fda600,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a78fe0; end: 103a78feb; -[SCSCUserMetadataCacheServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fda600;
  func_0x000107c61428(param_1 + _DAT_112fda600,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a78fec; end: 103a78ff7; -[SCSCUserMetadataCacheServiceSaberServiceProvider mmActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a78fec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fda608;
  func_0x000107c61428(param_1 + _DAT_112fda608,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a78ff8; end: 103a7903b;  */

void FUN_103a78ff8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a7903c; end: 103a79047; -[SCSCUserMetadataCacheServiceSaberServiceProvider setMmActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a7903c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fda608;
  func_0x000107c61428(param_1 + _DAT_112fda608,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a79048; end: 103a7909b;  */

void FUN_103a79048(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a7909c; end: 103a792af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a7909c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4d004();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a78d08();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fda568);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fda610);
      *(long *)(unaff_x20 + _DAT_112fda610) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "MmActiveUserSessionScopeGraphBridge/SCSCUserMetadataCacheServiceSaberServiceProvider.swift"
                      ,0x5a,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a791c8);
  (*pcVar1)();
}



/* Entry: 103a792b0; end: 103a792e3; -[SCSCUserMetadataCacheServiceSaberServiceProvider provide] */

void FUN_103a792b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a7909c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a792e4; end: 103a79317; -[SCSCUserMetadataCacheServiceSaberServiceProvider __safeProvide] */

void FUN_103a792e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a791c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a79318; end: 103a7935b; -[SCSCUserMetadataCacheServiceSaberServiceProvider end] */

void FUN_103a79318(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a7935c; end: 103a794f3;  */

void FUN_103a7935c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e6e140)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f191ec0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MmActiveUserSessionScopeGraphBridge/SCSCUserMetadataCacheServiceSaberServiceProvider.swift"
                            ,0x5a,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a794f4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56738();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a794f4; end: 103a7959f; -[SCSCUserMetadataCacheServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_103a794f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a7935c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a795a0; end: 103a79613; -[SCSCUserMetadataCacheServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a795a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fda600,0);
  func_0x000107c61614(param_1 + _DAT_112fda608,0);
  *(undefined8 *)(param_1 + _DAT_112fda610) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a79614; end: 103a79647;  */

void FUN_103a79614(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a79648; end: 103a7968f; -[SCSCUserMetadataCacheServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a79648(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fda600);
  func_0x000107c61610(param_1 + _DAT_112fda608);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fda610));
  return;
}



/* Entry: 103a79690; end: 103a796af;  */

void FUN_103a79690(void)

{
  func_0x000107c61168(&PTR_PTR_112fda658);
  return;
}



/* Entry: 103a796b0; end: 103a79737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a796b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa45c8();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fda6c0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fda6c8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a79738);
  (*pcVar1)();
}



/* Entry: 103a79738; end: 103a79797; -[_TtC38MusicActiveUserSessionScopeGraphBridge53MusicActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a79738(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicActiveUserSessionScopeGraphBridge.MusicActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a79764);
  (*pcVar1)();
}



/* Entry: 103a79798; end: 103a797cf; -[_TtC38MusicActiveUserSessionScopeGraphBridge53MusicActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a797b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a797b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a79798(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fda6c0));
  return;
}



/* Entry: 103a797d0; end: 103a797f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a797d0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fda6c8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fda6c0));
  return;
}



/* Entry: 103a797f8; end: 103a7985b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a797f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdaff8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a7985c; end: 103a79863;  */

void FUN_103a7985c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a79864; end: 103a79903;  */

void FUN_103a79864(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a79904; end: 103a79923;  */

void FUN_103a79904(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a79924; end: 103a79987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a79924(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdb000);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a79988; end: 103a7998f;  */

void FUN_103a79988(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a79990; end: 103a79a2f;  */

void FUN_103a79990(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a79a30; end: 103a79a4f;  */

void FUN_103a79a30(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a79a50; end: 103a79ab3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a79a50(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdb008);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a79ab4; end: 103a79abb;  */

void FUN_103a79ab4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a79abc; end: 103a79b5b;  */

void FUN_103a79abc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a79b5c; end: 103a79b7b;  */

void FUN_103a79b5c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a79b7c; end: 103a79bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a79b7c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdb010);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a79be0; end: 103a79be7;  */

void FUN_103a79be0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


