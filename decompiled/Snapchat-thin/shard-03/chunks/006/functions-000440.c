/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b2d550; end: 102b2d563;  */

void FUN_102b2d550(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102b2d564();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102b2d5a4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102b2d564; end: 102b2d60f;  */

void FUN_102b2d564(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db231e8;
  func_0x000107c61520(&UNK_10db231e8,&UNK_11059ec88);
  puRam0000000112ef4448 = puVar1;
  return;
}



/* Entry: 102b2d610; end: 102b2d613;  */

void FUN_102b2d610(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23220;
  func_0x000107c61520(&UNK_10db23220,&UNK_11059ed38);
  puRam0000000112ef4468 = puVar1;
  return;
}



/* Entry: 102b2d614; end: 102b2d653;  */

void FUN_102b2d614(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23220;
  func_0x000107c61520(&UNK_10db23220,&UNK_11059ed38);
  puRam0000000112ef4468 = puVar1;
  return;
}



/* Entry: 102b2d654; end: 102b2d667;  */

void FUN_102b2d654(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102b2d668();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102b2d6a8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102b2d668; end: 102b2d713;  */

void FUN_102b2d668(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db232e8;
  func_0x000107c61520(&UNK_10db232e8,&UNK_11059ed38);
  puRam0000000112ef4470 = puVar1;
  return;
}



/* Entry: 102b2d714; end: 102b2d717;  */

void FUN_102b2d714(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23320;
  func_0x000107c61520(&UNK_10db23320,&UNK_11059ede8);
  puRam0000000112ef4490 = puVar1;
  return;
}



/* Entry: 102b2d718; end: 102b2d757;  */

void FUN_102b2d718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db23320;
  func_0x000107c61520(&UNK_10db23320,&UNK_11059ede8);
  puRam0000000112ef4490 = puVar1;
  return;
}



/* Entry: 102b2d758; end: 102b2d76b;  */

void FUN_102b2d758(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102b2d79c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x102b2d7dc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102b2d76c; end: 102b2d79b;  */

void FUN_102b2d76c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 102b2d79c; end: 102b2d847;  */

void FUN_102b2d79c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db233e8;
  func_0x000107c61520(&UNK_10db233e8,&UNK_11059ede8);
  puRam0000000112ef4498 = puVar1;
  return;
}



/* Entry: 102b2d848; end: 102b2d88b;  */

void FUN_102b2d848(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 102b2d88c; end: 102b2dbd7;  */

undefined1  [16] FUN_102b2d88c(void)

{
  return ZEXT816(0x11059ebd8);
}



/* Entry: 102b2dbd8; end: 102b2dc3f;  */

void FUN_102b2dbd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001005c4fb4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102b2e79c();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2dc40; end: 102b2dc47;  */

void FUN_102b2dc40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001005c4fb4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102b2e79c();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2dc48; end: 102b2dcaf;  */

undefined8 FUN_102b2dc48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102b2e79c(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102b2dcb0; end: 102b2dcd3;  */

void FUN_102b2dcb0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2dcd4; end: 102b2dd1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2dcd4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef46e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b2dd20; end: 102b2decb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2dd20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar4 = &puStack_a0;
  if (param_1 != 0) {
    puVar2 = &UNK_11059ef30;
    func_0x000107c613fc(&UNK_11059ef30,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(undefined8 *)(puVar2 + 0x18) = param_3;
    *(undefined8 *)(puVar2 + 0x20) = param_4;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_102b2e98c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_102b2df40;
    puStack_88 = &UNK_11059ef48;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
    func_0x000107c615f0(param_4);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ef46e8);
    puVar2 = &UNK_11059ef80;
    func_0x000107c613fc(&UNK_11059ef80,0x38,7);
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = uVar5;
    *(undefined8 *)(puVar2 + 0x28) = param_5;
    *(undefined8 *)(puVar2 + 0x30) = param_6;
    pcStack_80 = (code *)0x102b2e9b4;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_100ba5314;
    puStack_88 = &UNK_11059ef98;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
    func_0x000107c615f0(param_2);
    func_0x000107c61174(param_3);
    func_0x000107c6157c(uVar5);
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar2);
    func_0x000107c42c14(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b2decc; end: 102b2df3f;  */

void FUN_102b2decc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126db428;
  func_0x000107c610f8();
  func_0x000107c48fb4();
  func_0x000107c52748();
  uVar2 = 0;
  FUN_102b2ea2c();
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 102b2df40; end: 102b2dfc3;  */

void FUN_102b2df40(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 102b2dfc4; end: 102b2e1ab;  */

void FUN_102b2dfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long alStack_c0 [5];
  ulong uStack_98;
  undefined8 auStack_90 [5];
  undefined8 uStack_68;
  
  lVar4 = 0;
  func_0x0001005c4f94();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = param_2;
  *(undefined8 *)(lVar4 + 0x18) = param_3;
  alStack_c0[0] = lVar4;
  uStack_68 = param_1;
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c61434(param_1);
  func_0x00010008a7c8(auStack_90,alStack_c0);
  func_0x000100083b20(alStack_c0);
  func_0x000107c61574(auStack_90[0]);
  lVar2 = alStack_c0[0];
  uVar7 = *(ulong *)(alStack_c0[0] + 0x10);
  func_0x000107c61434(uVar7);
  func_0x000107c61574(lVar2);
  if (uVar7 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    puVar1 = PTR___ss11AnyHashableVN_11034e448;
  }
  else {
    uVar9 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar9 = uVar7;
    }
    func_0x000107c60480();
    puVar1 = PTR___ss11AnyHashableVN_11034e448;
  }
  PTR___ss11AnyHashableVN_11034e448 = puVar1;
  if (uVar9 == 0) {
    func_0x000107c6142c(uVar7);
  }
  else {
    if ((long)uVar9 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b2e1ac);
      (*pcVar3)();
    }
    uVar8 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar7 + uVar8 * 8 + 0x20);
        func_0x000107c615f0(uVar6);
      }
      else {
        uVar6 = uVar8;
        func_0x00010109f8fc(uVar8,uVar7);
      }
      uVar8 = uVar8 + 1;
      uStack_98 = uVar6;
      func_0x000107c615f0(uVar6);
      uVar5 = 0x112ef47b8;
      func_0x0001000285a8(0x112ef47b8,&UNK_10dbb4900);
      func_0x000107c6147c(alStack_c0,&uStack_98,uVar5,puVar1,7);
      func_0x0001007bbd54(auStack_90,alStack_c0);
      func_0x000107c615e8(uVar6);
      func_0x0001007bbff0(auStack_90);
    } while (uVar9 != uVar8);
    func_0x000107c6142c(uVar7);
    param_1 = uStack_68;
  }
  (*param_5)(param_1);
  func_0x000107c6142c(param_1);
  func_0x000107c61574(lVar4);
  return;
}



/* Entry: 102b2e1ac; end: 102b2e297; -[_TtC37CameraLensProcessingURIPluginRegistry37CameraLensProcessingURIPluginProvider provideURIPluginsWithScopeExposer:effectActionUpdater:appliedEffectsObservable:apiServicePluginProvider:completion:] */

void FUN_102b2e1ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11059f010;
  func_0x000107c613fc(&UNK_11059f010,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_1);
  FUN_102b2dd20(param_3,param_4,param_5,param_6,FUN_102b2e9e4,puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102b2e298; end: 102b2e2f7; -[_TtC37CameraLensProcessingURIPluginRegistry37CameraLensProcessingURIPluginProvider init] */

void FUN_102b2e298(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CameraLensProcessingURIPluginRegistry.CameraLensProcessingURIPluginProvider",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2e2c4);
  (*pcVar1)();
}



/* Entry: 102b2e2f8; end: 102b2e307; -[_TtC37CameraLensProcessingURIPluginRegistry37CameraLensProcessingURIPluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2e2f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef46e8));
  return;
}



/* Entry: 102b2e308; end: 102b2e42f;  */

ulong FUN_102b2e308(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2e430);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102b2e430(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2e42c);
      (*pcVar1)();
    }
    FUN_102b2e4b0(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102b2e430; end: 102b2e4af;  */

undefined * FUN_102b2e430(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_102b2e5d4();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102b2e4b0; end: 102b2e5d3;  */

long FUN_102b2e4b0(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b2e5d0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b2e5d4);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112ef47b8;
        func_0x0001000285a8(0x112ef47b8,&UNK_10dbb4900);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112ef47b8;
      func_0x0001000285a8(0x112ef47b8,&UNK_10dbb4900);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b2e5cc);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102b2e5d4; end: 102b2e5e7;  */

void FUN_102b2e5d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef47c8 == (undefined *)0x0 || ((ulong)puRam0000000112ef47c8 & 1) != 0) {
    puVar1 = &UNK_10e94752a;
    func_0x000107c61518(&UNK_10e94752a,0x31,0,0);
    puRam0000000112ef47c8 = puVar1;
  }
  return;
}



/* Entry: 102b2e5e8; end: 102b2e79b;  */

ulong FUN_102b2e5e8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2e6d0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2e6d4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar4 = 0x112ee3a00;
    func_0x0001000285a8(0x112ee3a00,&UNK_10db0ebc0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0x112ee3a00;
    func_0x0001000285a8(0x112ee3a00,&UNK_10db0ebc0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f0f1900);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2e79c);
  (*pcVar2)();
}



/* Entry: 102b2e79c; end: 102b2e98b;  */

long FUN_102b2e79c(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x0001048575f8();
  puVar3 = &UNK_10db23698;
  func_0x000107c614e0(&UNK_10db23698);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2e938);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          FUN_102b2e5e8(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2e934);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_102b2e308(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_102b2e308(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_102b2e954;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_102b2e954:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Entry: 102b2e98c; end: 102b2e9e3;  */

void FUN_102b2e98c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126db428;
  func_0x000107c610f8();
  func_0x000107c48fb4();
  func_0x000107c52748();
  uVar2 = 0;
  FUN_102b2ea2c();
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 102b2e9e4; end: 102b2ea2b;  */

void FUN_102b2e9e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fe08(param_1,PTR___ss11AnyHashableVN_11034e448,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b2ea2c; end: 102b2ea6f;  */

void FUN_102b2ea2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef47c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126db428;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ef47c0 = puVar1;
  return;
}



/* Entry: 102b2ea70; end: 102b2ea77;  */

void FUN_102b2ea70(long param_1,long param_2)

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



/* Entry: 102b2ea78; end: 102b2eaff;  */

undefined1  [16] FUN_102b2ea78(void)

{
  return ZEXT816(0x11059f040);
}



/* Entry: 102b2eb00; end: 102b2eb63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b2eb00(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61634(param_2 + _DAT_112ef4988,param_1);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 102b2eb64; end: 102b2eb87;  */

void FUN_102b2eb64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2eb88; end: 102b2ebdb;  */

undefined1  [16] FUN_102b2eb88(void)

{
  return ZEXT816(0);
}



/* Entry: 102b2ebdc; end: 102b2ec43;  */

void FUN_102b2ebdc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001005c7540();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102b2f6ec();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2ec44; end: 102b2ec4b;  */

void FUN_102b2ec44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001005c7540();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_102b2f6ec();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b2ec4c; end: 102b2ec93;  */

undefined8 FUN_102b2ec4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102b2f6ec(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 102b2ec94; end: 102b2ecb7;  */

void FUN_102b2ec94(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2ecb8; end: 102b2ece7;  */

void FUN_102b2ecb8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102b2ece8; end: 102b2ed83;  */

undefined8 FUN_102b2ece8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  func_0x0001005c7520();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  lStack_40 = lVar1;
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&lStack_40);
  func_0x000100083b20(&lStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61574(lVar1);
  lVar1 = lStack_40;
  uVar2 = *(undefined8 *)(lStack_40 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lVar1);
  return uVar2;
}



/* Entry: 102b2ed84; end: 102b2eda7;  */

void FUN_102b2ed84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2eda8; end: 102b2ef6b;  */

undefined * FUN_102b2eda8(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2ef6c);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_102b2f90c(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x000102b2f538(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        FUN_102b2f90c(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 102b2ef6c; end: 102b2f02f; -[_TtC34CameraLensApiServicePluginRegistry40CameraLensApiServicePluginProviderHandle buildApiServicePluginsWithAppliedEffectsObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2ef6c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + _DAT_112ef4988;
  func_0x000107c61648();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_1);
    puVar2 = param_3;
    FUN_102b2ece8(param_3);
    puVar3 = puVar2;
    FUN_102b2eda8();
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(puVar2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_1);
  }
  puVar2 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102b2f030; end: 102b2f063;  */

void FUN_102b2f030(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102b2f064; end: 102b2f073; -[_TtC34CameraLensApiServicePluginRegistry40CameraLensApiServicePluginProviderHandle .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2f064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_weakDestroy_11034f5e0)(param_1 + _DAT_112ef4988);
  return;
}



/* Entry: 102b2f074; end: 102b2f19b;  */

ulong FUN_102b2f074(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2f19c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_102b2f19c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b2f198);
      (*pcVar1)();
    }
    FUN_102b2f21c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 102b2f19c; end: 102b2f21b;  */

undefined * FUN_102b2f19c(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_102b2f314();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102b2f21c; end: 102b2f313;  */

long FUN_102b2f21c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b2f310);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b2f314);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102b2f90c(0);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_102b2f90c(0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b2f30c);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 102b2f314; end: 102b2f36f;  */

void FUN_102b2f314(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_102b2f90c();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112ef4b18;
  plVar5 = (long *)&UNK_10db23ab8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102b2f370; end: 102b2f6eb;  */

ulong FUN_102b2f370(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2f46c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2f470);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar5 = 0x112ee4758;
    func_0x0001000285a8(0x112ee4758,&UNK_10db0fa40);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar5);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar5 = 0x112ee4758;
    func_0x0001000285a8(0x112ee4758,&UNK_10db0fa40);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar5);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar3 = 0;
  func_0x000107c60714(uVar5,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar5 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2f538);
  (*pcVar2)();
}



/* Entry: 102b2f6ec; end: 102b2f8db;  */

long FUN_102b2f6ec(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x0001048575f8();
  puVar3 = &UNK_10db23a88;
  func_0x000107c614e0(&UNK_10db23a88);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2f888);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          FUN_102b2f370(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b2f884);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          FUN_102b2f074(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_102b2f074(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_102b2f8a4;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_102b2f8a4:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Entry: 102b2f8dc; end: 102b2f90b;  */

undefined1  [16] FUN_102b2f8dc(void)

{
  return ZEXT816(0x11059f2c8);
}



/* Entry: 102b2f90c; end: 102b2f94f;  */

void FUN_102b2f90c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ef4b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b0260;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ef4b10 = puVar1;
  return;
}



/* Entry: 102b2f950; end: 102b2f9a3;  */

void FUN_102b2f950(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102b2f9a4; end: 102b2fa87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b2f9a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c613fc();
  func_0x0001007dc708(*(long *)(param_3 + _DAT_112f5cd78) + _DAT_112f5cd48,auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar1 = param_2;
  func_0x000107c3e060(param_2);
  func_0x000107c61180();
  (**(code **)(lStack_58 + 8))();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x0001000834e4(auStack_78);
  return unaff_x20;
}



/* Entry: 102b2fa88; end: 102b2facb;  */

void FUN_102b2fa88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2facc; end: 102b2fb0f;  */

void FUN_102b2facc(long param_1,long *param_2,long param_3)

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



/* Entry: 102b2fb10; end: 102b2fb2f;  */

void FUN_102b2fb10(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 102b2fb30; end: 102b2fb3f;  */

void FUN_102b2fb30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2fb40; end: 102b2fbab;  */

void FUN_102b2fb40(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long alStack_48 [3];
  long lStack_30;
  undefined **ppuStack_28;
  
  lVar1 = 0;
  func_0x0001007dc614();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = 0;
  ppuStack_28 = &PTR_DAT_11059f530;
  alStack_48[0] = lVar2;
  lStack_30 = lVar1;
  func_0x0001005c2acc(0);
  func_0x000107c610f8();
  plVar3 = alStack_48;
  func_0x0001007dc698();
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 102b2fbac; end: 102b2fbcf;  */

void FUN_102b2fbac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2fbd0; end: 102b2fbfb;  */

undefined8 FUN_102b2fbd0(void)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 102b2fbfc; end: 102b2fd3b;  */

void FUN_102b2fbfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x0001000a8868(param_1 + 0x10,lVar3);
    lVar4 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    (**(code **)(lVar4 + 0x10))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar2 = lVar3;
    (**(code **)(lVar1 + 0x10))(lVar3,lVar1);
    (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
    if (lVar2 == 0) {
      func_0x000107c61574(param_1);
    }
    else {
      lVar3 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar3 == 0) {
        func_0x000107c61574(param_1);
      }
      else {
        func_0x000107c3d060(lVar3);
        func_0x000107c61574(param_1);
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 102b2fd3c; end: 102b2fd7f;  */

void FUN_102b2fd3c(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b2fd80; end: 102b2fd8f;  */

undefined1  [16] FUN_102b2fd80(void)

{
  return ZEXT816(0x11059f578);
}



/* Entry: 102b2fd90; end: 102b30053;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b2fd90(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef4e78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ef4e70))[1];
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ef4e70));
    (**(code **)(lVar2 + 0x18))();
    lVar2 = unaff_x20 + _DAT_112ef4e98;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4fc08();
      func_0x000107c61170(lVar2);
    }
    lVar2 = lVar1;
    func_0x000107c45380(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar3;
    func_0x000107c4da8c(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    puVar4 = &UNK_11059f598;
    func_0x000107c613fc(&UNK_11059f598,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uStack_50 = 0x102b304e0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_102b3026c;
    puStack_58 = &UNK_11059f5b0;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar3 = lVar2;
    func_0x000107c5c320(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c3e924(lVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102b30054; end: 102b300af;  */

void FUN_102b30054(uint param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102b300b0(param_1 & 1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102b300b0; end: 102b3026b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b300b0(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar2 = _DAT_112ef4ea0;
  ppuVar6 = &puStack_70;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + _DAT_112ef4ea0) != 0) {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar1);
  if ((param_1 & 1) == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ef4e78);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c45384();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c4da8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      puVar5 = &UNK_11059f598;
      func_0x000107c613fc(&UNK_11059f598,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_50 = FUN_102b30610;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1019eb2d8;
      puStack_58 = &UNK_11059f628;
      puStack_48 = puVar5;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      lVar3 = lVar4;
      func_0x000107c5c320();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar4);
      uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ef4e90);
      *(long *)(unaff_x20 + _DAT_112ef4e90) = lVar3;
      func_0x000107c61174(lVar3);
      func_0x000107c4218c(uVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uVar1);
      return;
    }
  }
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ef4e90);
  *(undefined8 *)(unaff_x20 + _DAT_112ef4e90) = 0;
  func_0x000107c4218c(uVar1);
  func_0x000107c61170(uVar1);
  lVar2 = _DAT_112ef4ea0;
  uVar1 = 0;
  if (*(long *)(unaff_x20 + _DAT_112ef4ea0) != 0) {
    func_0x000107c498f8();
    uVar1 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ef4e70);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ef4e70))[1];
  func_0x000107c614f0(uVar1);
  (**(code **)(lVar2 + 0x30))(0,uVar1,lVar2);
  return;
}



/* Entry: 102b3026c; end: 102b30347;  */

void FUN_102b3026c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102b30348; end: 102b303a7; -[_TtC29LensCarouselFeaturesWorkflows21LensActionBarWorkflow init] */

void FUN_102b30348(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensActionBarWorkflow",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b30374);
  (*pcVar1)();
}



/* Entry: 102b303a8; end: 102b3042f; -[_TtC29LensCarouselFeaturesWorkflows21LensActionBarWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b303d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b303f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b303d8) */
/* WARNING: Removing unreachable block (ram,0x000102b303f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b303a8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef4e70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef4e78));
  return;
}



/* Entry: 102b30430; end: 102b3044f;  */

void FUN_102b30430(void)

{
  func_0x000107c61168(&PTR_PTR_11288bed0);
  return;
}



/* Entry: 102b30450; end: 102b304db; -[_TtC29LensCarouselFeaturesWorkflows21LensActionBarWorkflow isPointInsideView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102b30450(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112ef4e70);
  lVar1 = ((undefined8 *)(param_3 + _DAT_112ef4e70))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 0x38);
  func_0x000107c61174(param_3);
  (*pcVar3)(param_1,param_2,uVar2,lVar1);
  func_0x000107c61170(param_3);
  return (uint)uVar2 & 1;
}



/* Entry: 102b304dc; end: 102b3050b; -[_TtC29LensCarouselFeaturesWorkflows21LensActionBarWorkflow setUIHidden:] */

void FUN_102b304dc(void)

{
  return;
}



/* Entry: 102b3050c; end: 102b3060f;  */

void FUN_102b3050c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102b30610; end: 102b30617;  */

void FUN_102b30610(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = param_1;
    func_0x000107c49c88();
    if ((int)uVar2 == 0) {
      func_0x000107c61174(param_1);
      FUN_102b30618();
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000102b305ac();
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b30618; end: 102b3079f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b30618(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef4e80);
  func_0x000107c614f0(uVar6);
  func_0x000100bcb214();
  puVar2 = &UNK_11059f598;
  func_0x000107c613fc(&UNK_11059f598,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11059f660;
  func_0x000107c613fc(&UNK_11059f660,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  puVar4 = PTR_PTR_1126ae888;
  func_0x000107c610f8();
  pcStack_60 = FUN_102b3081c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11059f678;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  func_0x000107c48cf4(0x4000000000000000);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef4ea0);
  *(undefined **)(unaff_x20 + _DAT_112ef4ea0) = puVar4;
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ef4e70);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ef4e70))[1];
  func_0x000107c614f0(uVar6);
  (**(code **)(lVar1 + 0x28))(param_1,0,uVar6,lVar1);
  return;
}



/* Entry: 102b307a0; end: 102b3081b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b307a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112ef4e78);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c44df4();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102b3081c; end: 102b3083b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3081c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ef4e78);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c44df4();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b3083c; end: 102b30897;  */

void FUN_102b3083c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = param_1;
  FUN_102b311cc();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 102b30898; end: 102b30ae7;  */

void FUN_102b30898(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  undefined8 uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  ppuVar10 = &puStack_90;
  if (unaff_x20[7] == 0) {
    uVar13 = *unaff_x20;
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar12 = unaff_x20[7];
    unaff_x20[7] = puVar3;
    func_0x000107c61170(uVar12);
    lVar4 = unaff_x20[4];
    func_0x000107c4b50c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar5 = lVar4;
      func_0x000107c499b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar5 != 0) {
        uVar6 = unaff_x20[2];
        func_0x000107c4b2e0(uVar6);
        func_0x000107c61180();
        uVar7 = unaff_x20[3];
        func_0x000107c51f40(uVar7);
        func_0x000107c61180();
        uVar12 = uVar6;
        func_0x000107c413c0(0x3f847ae147ae147b,uVar6);
        func_0x000107c61180();
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(uVar7);
        puVar3 = &UNK_11059f6b0;
        func_0x000107c613fc(&UNK_11059f6b0,0x18,7);
        *(undefined8 *)(puVar3 + 0x10) = uVar13;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_70 = FUN_102b311a0;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        pcStack_80 = FUN_102b30e20;
        puStack_78 = &UNK_11059f6c8;
        puStack_68 = puVar3;
        func_0x000107c60bc4(&puStack_90);
        func_0x000107c61574(puStack_68);
        lVar4 = lVar5;
        func_0x000107c3fe00(lVar5);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(uVar12);
        puVar3 = &UNK_11059f700;
        func_0x000107c613fc(&UNK_11059f700,0x18,7);
        func_0x000107c61644(puVar3 + 0x10);
        puVar9 = &UNK_11059f728;
        func_0x000107c613fc(&UNK_11059f728,0x20,7);
        *(undefined **)(puVar9 + 0x10) = puVar3;
        *(undefined8 *)(puVar9 + 0x18) = uVar13;
        pcStack_70 = (code *)0x102b311c4;
        puStack_90 = puVar1;
        uStack_88 = 0x42000000;
        pcStack_80 = (code *)&UNK_1008561f0;
        puStack_78 = &UNK_11059f740;
        puStack_68 = puVar9;
        func_0x000107c60bc4(&puStack_90);
        func_0x000107c61574(puStack_68);
        lVar11 = lVar4;
        func_0x000107c5c320(lVar4);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c61170(lVar4);
        if (unaff_x20[7] == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b30ae8);
          (*pcVar2)();
        }
        func_0x000107c3e924(lVar11);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar11);
      }
    }
  }
  return;
}



/* Entry: 102b30ae8; end: 102b30e1f;  */

void FUN_102b30ae8(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uStack_88;
  undefined *apuStack_80 [4];
  
  func_0x000107c3ebcc();
  if ((param_2 & 1) != 0) {
    func_0x0001000bb420(param_3,apuStack_80);
    uVar9 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    puVar3 = &uStack_88;
    func_0x000107c6147c(puVar3,apuStack_80,PTR___sypN_11034f1a8 + 8,uVar9,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar18 = uStack_88 & 0xffffffffffffff8;
      if (uStack_88 >> 0x3e == 0) {
        uVar16 = *(ulong *)(uVar18 + 0x10);
      }
      else {
        uVar16 = uVar18;
        if (0x7fffffffffffffff < uStack_88) {
          uVar16 = uStack_88;
        }
        func_0x000107c60480();
      }
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar16 != 0) {
        uVar12 = 0;
        do {
          while( true ) {
            if ((uStack_88 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102b30d9c);
                (*pcVar2)();
              }
              uVar4 = *(ulong *)(uStack_88 + uVar12 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar4 = uVar12;
              func_0x000100ff3f88(uVar12,uStack_88);
            }
            uVar1 = uVar12 + 1;
            if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102b30d98);
              (*pcVar2)();
            }
            uVar5 = uVar4;
            func_0x000107c49c88();
            if (((uVar5 & 1) == 0) && (uVar5 = uVar4, func_0x000107c4a4d8(), (int)uVar5 == 0))
            break;
            func_0x000107c61170(uVar4);
            uVar12 = uVar12 + 1;
            if (uVar1 == uVar16) goto LAB_102b30c9c;
          }
          puVar17 = puVar14;
          func_0x000107c61558();
          apuStack_80[0] = puVar14;
          if (((ulong)puVar17 & 1) == 0) {
            func_0x0001019d4adc(0,*(long *)(puVar14 + 0x10) + 1,1);
          }
          uVar12 = *(ulong *)(apuStack_80[0] + 0x10);
          if (*(ulong *)(apuStack_80[0] + 0x18) >> 1 <= uVar12) {
            func_0x0001019d4adc(1 < *(ulong *)(apuStack_80[0] + 0x18),uVar12 + 1,1);
          }
          *(ulong *)(apuStack_80[0] + 0x10) = uVar12 + 1;
          *(ulong *)(apuStack_80[0] + uVar12 * 8 + 0x20) = uVar4;
          uVar12 = uVar1;
          puVar14 = apuStack_80[0];
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        } while (uVar1 != uVar16);
      }
LAB_102b30c9c:
      func_0x000107c6142c(uStack_88);
      if (((long)puVar14 < 0) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
        puVar15 = puVar14;
        func_0x000107c60480();
        if (puVar15 != (undefined *)0x0) goto LAB_102b30cb4;
LAB_102b30dc0:
        func_0x000107c61574(puVar14);
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar15 = *(undefined **)(puVar14 + 0x10);
        if (puVar15 == (undefined *)0x0) goto LAB_102b30dc0;
LAB_102b30cb4:
        puVar10 = (undefined *)((ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU));
        apuStack_80[0] = puVar17;
        func_0x000100403514(0,puVar10,0);
        if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b30e20);
          (*pcVar2)();
        }
        puVar17 = (undefined *)0x0;
        do {
          puVar13 = apuStack_80[0];
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            puVar6 = *(undefined **)(puVar14 + (long)puVar17 * 8 + 0x20);
            func_0x000107c61174();
            puVar11 = puVar10;
          }
          else {
            puVar6 = puVar17;
            puVar11 = puVar14;
            func_0x000100ff3f88();
          }
          func_0x000107c61174();
          puVar7 = puVar6;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          puVar8 = puVar7;
          func_0x000107c5faec();
          puVar10 = puVar11;
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar7);
          uVar18 = *(ulong *)(puVar13 + 0x10);
          puVar6 = (undefined *)(uVar18 + 1);
          apuStack_80[0] = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar18) {
            puVar10 = puVar6;
            func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),puVar6,1);
          }
          puVar13 = apuStack_80[0];
          puVar17 = puVar17 + 1;
          *(undefined **)(apuStack_80[0] + 0x10) = puVar6;
          *(undefined **)(apuStack_80[0] + uVar18 * 0x10 + 0x20) = puVar8;
          *(undefined **)(apuStack_80[0] + uVar18 * 0x10 + 0x28) = puVar11;
        } while (puVar15 != puVar17);
        func_0x000107c61574(puVar14);
      }
      puVar17 = puVar13;
      func_0x000107c5fc48(puVar13,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar13);
      goto LAB_102b30dec;
    }
  }
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_102b30dec:
  uVar9 = 0;
  func_0x0001011eb06c();
  param_1[3] = uVar9;
  *param_1 = puVar17;
  return;
}



/* Entry: 102b30e20; end: 102b30edb;  */

void FUN_102b30e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 auStack_60 [3];
  undefined8 uStack_48;
  
  puVar4 = auStack_80;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_3;
  func_0x000107c614f0();
  auStack_60[0] = param_3;
  uStack_48 = uVar3;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(auStack_80,param_2,auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_80,uStack_68);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_80);
  func_0x000100183ab8(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 102b30edc; end: 102b30f9b;  */

void FUN_102b30edc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 auStack_50 [3];
  long lStack_38;
  
  auStack_50[0] = param_1;
  func_0x000107c615f0();
  uVar1 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  plVar2 = &lStack_38;
  func_0x000107c6147c(plVar2,auStack_50,PTR___syXlN_11034f1a0 + 8,uVar1,6);
  if (((ulong)plVar2 & 1) != 0) {
    if (*(long *)(lStack_38 + 0x10) != 0) {
      func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61648();
      if (param_2 != 0) {
        FUN_102b30fbc(lStack_38);
        func_0x000107c6142c(lStack_38);
        func_0x000107c61574(param_2);
        return;
      }
    }
    func_0x000107c6142c(lStack_38);
  }
  return;
}



/* Entry: 102b30f9c; end: 102b30fbb;  */

void FUN_102b30f9c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102b30fbc; end: 102b310fb;  */

/* WARNING: Possible PIC construction at 0x000102b310a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b310a4) */

void FUN_102b30fbc(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  func_0x000107c4b550();
  if ((long)uVar2 < 1) {
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(ulong *)(param_1 + 0x10);
  if (uVar2 <= *(ulong *)(param_1 + 0x10)) {
    uVar1 = uVar2;
  }
  uVar3 = 0;
  func_0x000107c605fc(0);
  puVar4 = param_1;
  func_0x000107c615f4(param_1,2);
  func_0x000107c61434();
  func_0x000107c61480();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c615e8(param_1);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  uVar2 = *(ulong *)(puVar4 + 0x10);
  func_0x000107c61574();
  if (uVar2 == uVar1) {
    puVar5 = param_1;
    func_0x000107c61480(param_1,uVar3);
    func_0x000107c615e8(param_1);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar5 != (undefined *)0x0) goto LAB_102b31068;
  }
  else {
    func_0x000107c615e8(param_1);
    puVar4 = param_1;
    func_0x000101994330(param_1,param_1 + 0x20,0,uVar1 << 1 | 1);
  }
  func_0x000107c615e8(param_1);
  puVar5 = puVar4;
LAB_102b31068:
  puVar4 = puVar5;
  func_0x000107c5fc48(puVar5,PTR___sSSN_11034da80);
  func_0x000107c61574(puVar5);
  func_0x000107c443a8(uVar6);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 102b310fc; end: 102b31147;  */

void FUN_102b310fc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b31148; end: 102b3119f;  */

void FUN_102b31148(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_102b311cc();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 102b311a0; end: 102b311cb;  */

void FUN_102b311a0(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uStack_88;
  undefined *apuStack_80 [4];
  
  func_0x000107c3ebcc(param_2,param_3,*(undefined8 *)(unaff_x20 + 0x10));
  if ((param_2 & 1) != 0) {
    func_0x0001000bb420(param_3,apuStack_80);
    uVar9 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    puVar3 = &uStack_88;
    func_0x000107c6147c(puVar3,apuStack_80,PTR___sypN_11034f1a8 + 8,uVar9,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar18 = uStack_88 & 0xffffffffffffff8;
      if (uStack_88 >> 0x3e == 0) {
        uVar16 = *(ulong *)(uVar18 + 0x10);
      }
      else {
        uVar16 = uVar18;
        if (0x7fffffffffffffff < uStack_88) {
          uVar16 = uStack_88;
        }
        func_0x000107c60480();
      }
      puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar16 != 0) {
        uVar12 = 0;
        do {
          while( true ) {
            if ((uStack_88 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar18 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x102b30d9c);
                (*pcVar2)();
              }
              uVar4 = *(ulong *)(uStack_88 + uVar12 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar4 = uVar12;
              func_0x000100ff3f88(uVar12,uStack_88);
            }
            uVar1 = uVar12 + 1;
            if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102b30d98);
              (*pcVar2)();
            }
            uVar5 = uVar4;
            func_0x000107c49c88();
            if (((uVar5 & 1) == 0) && (uVar5 = uVar4, func_0x000107c4a4d8(), (int)uVar5 == 0))
            break;
            func_0x000107c61170(uVar4);
            uVar12 = uVar12 + 1;
            if (uVar1 == uVar16) goto LAB_102b30c9c;
          }
          puVar17 = puVar14;
          func_0x000107c61558();
          apuStack_80[0] = puVar14;
          if (((ulong)puVar17 & 1) == 0) {
            func_0x0001019d4adc(0,*(long *)(puVar14 + 0x10) + 1,1);
          }
          uVar12 = *(ulong *)(apuStack_80[0] + 0x10);
          if (*(ulong *)(apuStack_80[0] + 0x18) >> 1 <= uVar12) {
            func_0x0001019d4adc(1 < *(ulong *)(apuStack_80[0] + 0x18),uVar12 + 1,1);
          }
          *(ulong *)(apuStack_80[0] + 0x10) = uVar12 + 1;
          *(ulong *)(apuStack_80[0] + uVar12 * 8 + 0x20) = uVar4;
          uVar12 = uVar1;
          puVar14 = apuStack_80[0];
          puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        } while (uVar1 != uVar16);
      }
LAB_102b30c9c:
      func_0x000107c6142c(uStack_88);
      if (((long)puVar14 < 0) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
        puVar15 = puVar14;
        func_0x000107c60480();
        if (puVar15 != (undefined *)0x0) goto LAB_102b30cb4;
LAB_102b30dc0:
        func_0x000107c61574(puVar14);
        puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar15 = *(undefined **)(puVar14 + 0x10);
        if (puVar15 == (undefined *)0x0) goto LAB_102b30dc0;
LAB_102b30cb4:
        puVar10 = (undefined *)((ulong)puVar15 & ((long)puVar15 >> 0x3f ^ 0xffffffffffffffffU));
        apuStack_80[0] = puVar17;
        func_0x000100403514(0,puVar10,0);
        if ((long)puVar15 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102b30e20);
          (*pcVar2)();
        }
        puVar17 = (undefined *)0x0;
        do {
          puVar13 = apuStack_80[0];
          if (((ulong)puVar14 & 0xc000000000000001) == 0) {
            puVar6 = *(undefined **)(puVar14 + (long)puVar17 * 8 + 0x20);
            func_0x000107c61174();
            puVar11 = puVar10;
          }
          else {
            puVar6 = puVar17;
            puVar11 = puVar14;
            func_0x000100ff3f88();
          }
          func_0x000107c61174();
          puVar7 = puVar6;
          func_0x000107c4b1dc();
          func_0x000107c61180();
          puVar8 = puVar7;
          func_0x000107c5faec();
          puVar10 = puVar11;
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar7);
          uVar18 = *(ulong *)(puVar13 + 0x10);
          puVar6 = (undefined *)(uVar18 + 1);
          apuStack_80[0] = puVar13;
          if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar18) {
            puVar10 = puVar6;
            func_0x000100403514(1 < *(ulong *)(puVar13 + 0x18),puVar6,1);
          }
          puVar13 = apuStack_80[0];
          puVar17 = puVar17 + 1;
          *(undefined **)(apuStack_80[0] + 0x10) = puVar6;
          *(undefined **)(apuStack_80[0] + uVar18 * 0x10 + 0x20) = puVar8;
          *(undefined **)(apuStack_80[0] + uVar18 * 0x10 + 0x28) = puVar11;
        } while (puVar15 != puVar17);
        func_0x000107c61574(puVar14);
      }
      puVar17 = puVar13;
      func_0x000107c5fc48(puVar13,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar13);
      goto LAB_102b30dec;
    }
  }
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_102b30dec:
  uVar9 = 0;
  func_0x0001011eb06c();
  param_1[3] = uVar9;
  *param_1 = puVar17;
  return;
}



/* Entry: 102b311cc; end: 102b311eb;  */

void FUN_102b311cc(void)

{
  func_0x000107c61168(&PTR_PTR_112ef4f10);
  return;
}



/* Entry: 102b311ec; end: 102b311f3;  */

void FUN_102b311ec(long param_1,long param_2)

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



/* Entry: 102b311f4; end: 102b3123f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b311f4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ef4fc8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102b31240; end: 102b3132f;  */

/* WARNING: Possible PIC construction at 0x000102b312c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b312c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b31240(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ef4fc8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126abfc8;
    func_0x000107c610f8(PTR_PTR_1126abfc8);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c549e0(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102b31330; end: 102b3138f; -[_TtC29LensCarouselFeaturesWorkflows23LensViewsBlizzardLogger init] */

void FUN_102b31330(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensViewsBlizzardLogger",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3135c);
  (*pcVar1)();
}



/* Entry: 102b31390; end: 102b3139f; -[_TtC29LensCarouselFeaturesWorkflows23LensViewsBlizzardLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b31390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ef4fc8));
  return;
}


