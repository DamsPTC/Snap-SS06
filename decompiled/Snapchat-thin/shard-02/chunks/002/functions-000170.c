/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ac2260; end: 101ac23f7;  */

void FUN_101ac2260(void)

{
  return;
}



/* Entry: 101ac23f8; end: 101ac2443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac23f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df8fa8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ac2444; end: 101ac24a3; -[_TtC47SCComposerUserSessionImageLoadersPluginRegistry51SCComposerUserSessionImageLoadersPluginSaberService init] */

void FUN_101ac2444(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCComposerUserSessionImageLoadersPluginRegistry.SCComposerUserSessionImageLoadersPluginSaberService"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac2470);
  (*pcVar1)();
}



/* Entry: 101ac24a4; end: 101ac24d3; -[_TtC47SCComposerUserSessionImageLoadersPluginRegistry51SCComposerUserSessionImageLoadersPluginSaberService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac24a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df8fa8));
  return;
}



/* Entry: 101ac24d4; end: 101ac2587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101ac24d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11303ff58);
  *(undefined8 *)(unaff_x20 + _DAT_112df9018) = uVar3;
  uVar4 = *(undefined8 *)(param_1 + _DAT_11303ff40);
  *(undefined8 *)(unaff_x20 + _DAT_112df9020) = uVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112df9028) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101ac2588; end: 101ac25c3; -[_TtC25SnapEditorMusicDataLoader30SnapEditorValdiMusicDataLoader supportedURLSchemes] */

void FUN_101ac2588(void)

{
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ac25c4; end: 101ac2743;  */

void FUN_101ac25c4(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ec24();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ebe4(puVar5,param_2,0);
  puVar2 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    FUN_101ac3c7c(puVar5,0x112d4b5b0,&UNK_10d912140);
    param_1[3] = (long)PTR___sSSN_11034da80;
    *param_1 = 0;
    param_1[1] = -0x2000000000000000;
    return;
  }
  (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar1);
  lVar3 = lVar6;
  FUN_101ac345c();
  if (puVar5 != (undefined1 *)0x0) {
    lVar4 = lVar6;
    puVar2 = puVar5;
    func_0x000101ac36d8();
    if (((uint)puVar2 & 0xff) != 1) {
      *param_1 = lVar3;
      param_1[1] = (long)puVar5;
      param_1[2] = lVar4;
      param_1[3] = (long)&UNK_11043e410;
      goto LAB_101ac271c;
    }
    func_0x000107c6142c(puVar5);
  }
  param_1[3] = (long)PTR___sSSN_11034da80;
  *param_1 = 0;
  param_1[1] = -0x2000000000000000;
LAB_101ac271c:
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  return;
}



/* Entry: 101ac2744; end: 101ac2817; -[_TtC25SnapEditorMusicDataLoader30SnapEditorValdiMusicDataLoader requestPayloadWithURL:error:] */

void FUN_101ac2744(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_101ac25c4(auStack_60,puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  puVar2 = auStack_60;
  FUN_101ac3cbc(puVar2,uStack_48);
  func_0x000107c605b0();
  func_0x000101ac3ce0(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ac2818; end: 101ac2973;  */

long FUN_101ac2818(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  undefined1 auStack_70 [32];
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  FUN_101ac3a3c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5fcf4(puVar5);
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar5,0,1,lVar2);
  puVar3 = &UNK_11043e368;
  func_0x000107c613fc(&UNK_11043e368,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  func_0x0001000bb420(param_1,auStack_70);
  puVar4 = &UNK_11043e390;
  func_0x000107c613fc(&UNK_11043e390,0x60,7);
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  func_0x000100102924(auStack_70,puVar4 + 0x38);
  *(long *)(puVar4 + 0x58) = lVar1;
  func_0x000107c6157c(param_3);
  func_0x000107c61174(lVar1);
  func_0x0001000abba4(0,0,puVar5,&UNK_10d9c9a00,puVar4);
  func_0x000107c61574();
  return lVar1;
}



/* Entry: 101ac2974; end: 101ac2993;  */

void FUN_101ac2974(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x68) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x70) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x60) = in_x3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac2994,0,0);
  return;
}



/* Entry: 101ac2994; end: 101ac2aa7;  */

void FUN_101ac2994(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x30,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x88) = lVar5;
  if (lVar5 == 0) {
    (**(code **)(unaff_x22 + 0x68))();
  }
  else {
    func_0x0001000bb420(*(undefined8 *)(unaff_x22 + 0x78),unaff_x22 + 0x10);
    uVar3 = unaff_x22 + 0x48;
    func_0x000107c6147c(uVar3,unaff_x22 + 0x10,PTR___sypN_11034f1a8 + 8,&UNK_11043e410,6);
    if ((uVar3 & 1) != 0) {
      lVar1 = *(long *)(unaff_x22 + 0x48);
      lVar2 = *(long *)(unaff_x22 + 0x50);
      *(long *)(unaff_x22 + 0x90) = lVar2;
      lVar6 = *(long *)(unaff_x22 + 0x58);
      plVar4 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x98) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101ac2aa8;
      plVar4[0x15] = *(long *)(unaff_x22 + 0x80);
      plVar4[0x16] = lVar5;
      plVar4[0x14] = lVar6;
      plVar4[0x12] = lVar1;
      plVar4[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac2b80,0,0);
      return;
    }
    (**(code **)(unaff_x22 + 0x68))(0,0xf000000000000000,0);
    func_0x000107c61170(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000101ac2aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ac2aa8; end: 101ac2aff;  */

void FUN_101ac2aa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x90);
  *(undefined8 *)(lVar2 + 0xa0) = param_1;
  *(undefined8 *)(lVar2 + 0xa8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x98));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac2b00,0,0);
  return;
}



/* Entry: 101ac2b00; end: 101ac2b5f;  */

void FUN_101ac2b00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(unaff_x22 + 0x68))(uVar1,uVar2,0);
  func_0x0001000b44c0(uVar1,uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101ac2b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ac2b60; end: 101ac2b7f;  */

void FUN_101ac2b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac2b80,0,0);
  return;
}



/* Entry: 101ac2b80; end: 101ac2ed7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac2b80(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  byte *pbVar17;
  byte **ppbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  long unaff_x22;
  byte *pbStack_40;
  code *UNRECOVERED_JUMPTABLE;
  
  pbVar17 = *(byte **)(unaff_x22 + 0x90);
  pbVar14 = *(byte **)(unaff_x22 + 0x98);
  pbVar13 = (byte *)((ulong)pbVar17 & 0xffffffffffff);
  pbVar15 = (byte *)((ulong)pbVar14 >> 0x38 & 0xf);
  pbVar20 = pbVar13;
  if (((ulong)pbVar14 & 0x2000000000000000) != 0) {
    pbVar20 = pbVar15;
  }
  if (pbVar20 == (byte *)0x0) goto LAB_101ac2df0;
  if (((ulong)pbVar14 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar14 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar17 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        pbVar17 = (byte *)(((ulong)pbVar14 & 0xfffffffffffffff) + 0x20);
        pbVar14 = pbVar13;
      }
      if (*pbVar17 != 0x2b) {
        if (*pbVar17 != 0x2d) {
          if (pbVar14 == (byte *)0x0) goto LAB_101ac2df0;
          pbVar20 = (byte *)0x0;
          pbVar15 = pbVar17;
          while (pbVar15 != (byte *)0x0) {
            if (((9 < *pbVar17 - 0x30) ||
                (auVar8._8_8_ = 0, auVar8._0_8_ = pbVar20, SUB168(auVar8 * ZEXT816(10),8) != 0)) ||
               (uVar19 = (long)pbVar20 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
               pbVar20 = (byte *)(uVar19 + uVar1), CARRY8(uVar19,uVar1))) goto LAB_101ac2df0;
            pbVar14 = pbVar14 + -1;
            pbVar17 = pbVar17 + 1;
            pbVar15 = pbVar14;
          }
          goto LAB_101ac2e14;
        }
        pbVar15 = pbVar14 + -1;
        if ((long)pbVar14 < 1) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x101ac2ecc);
          (*pcVar10)();
        }
        if (pbVar15 != (byte *)0x0) {
          pbVar20 = (byte *)0x0;
          do {
            pbVar17 = pbVar17 + 1;
            if (((9 < *pbVar17 - 0x30) ||
                (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar20, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
               (uVar19 = (long)pbVar20 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
               pbVar20 = (byte *)(uVar19 - uVar1), uVar19 < uVar1)) goto LAB_101ac2df0;
            pbVar15 = pbVar15 + -1;
          } while (pbVar15 != (byte *)0x0);
          goto LAB_101ac2e14;
        }
        goto LAB_101ac2df0;
      }
      pbVar15 = pbVar14 + -1;
      if ((long)pbVar14 < 1) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101ac2ed4);
        (*pcVar10)();
      }
      if (pbVar15 == (byte *)0x0) goto LAB_101ac2df0;
      pbVar20 = (byte *)0x0;
      do {
        pbVar17 = pbVar17 + 1;
        if (((9 < *pbVar17 - 0x30) ||
            (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar20, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
           (uVar19 = (long)pbVar20 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
           pbVar20 = (byte *)(uVar19 + uVar1), CARRY8(uVar19,uVar1))) goto LAB_101ac2df0;
        pbVar15 = pbVar15 + -1;
      } while (pbVar15 != (byte *)0x0);
      goto LAB_101ac2e14;
    }
    pbStack_40 = pbVar17;
    UNRECOVERED_JUMPTABLE = (code *)((ulong)pbVar14 & 0xffffffffffffff);
    uVar21 = (uint)pbVar17 & 0xff;
    if (uVar21 == 0x2b) {
      if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101ac2ed8);
        (*pcVar10)();
      }
      pbVar15 = pbVar15 + -1;
      if (pbVar15 == (byte *)0x0) goto LAB_101ac2ddc;
      pbVar20 = (byte *)0x0;
      pbVar17 = (byte *)((ulong)&pbStack_40 | 1);
      do {
        if (((9 < *pbVar17 - 0x30) ||
            (auVar7._8_8_ = 0, auVar7._0_8_ = pbVar20, SUB168(auVar7 * ZEXT816(10),8) != 0)) ||
           (uVar19 = (long)pbVar20 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
           pbVar20 = (byte *)(uVar19 + uVar1), CARRY8(uVar19,uVar1))) goto LAB_101ac2ddc;
        uVar21 = 0;
        pbVar15 = pbVar15 + -1;
        pbVar17 = pbVar17 + 1;
      } while (pbVar15 != (byte *)0x0);
    }
    else if (uVar21 == 0x2d) {
      if (pbVar15 == (byte *)0x0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x101ac2ed0);
        (*pcVar10)();
      }
      pbVar15 = pbVar15 + -1;
      if (pbVar15 == (byte *)0x0) {
LAB_101ac2ddc:
        uVar21 = 1;
        pbVar20 = (byte *)0x0;
      }
      else {
        pbVar20 = (byte *)0x0;
        pbVar17 = (byte *)((ulong)&pbStack_40 | 1);
        do {
          if (((9 < *pbVar17 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar20, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar19 = (long)pbVar20 * 10, uVar1 = (ulong)(byte)(*pbVar17 - 0x30),
             pbVar20 = (byte *)(uVar19 - uVar1), uVar19 < uVar1)) goto LAB_101ac2ddc;
          uVar21 = 0;
          pbVar15 = pbVar15 + -1;
          pbVar17 = pbVar17 + 1;
        } while (pbVar15 != (byte *)0x0);
      }
    }
    else {
      if (pbVar15 == (byte *)0x0) goto LAB_101ac2ddc;
      pbVar20 = (byte *)0x0;
      ppbVar18 = &pbStack_40;
      do {
        if (((9 < *(byte *)ppbVar18 - 0x30) ||
            (auVar9._8_8_ = 0, auVar9._0_8_ = pbVar20, SUB168(auVar9 * ZEXT816(10),8) != 0)) ||
           (uVar19 = (long)pbVar20 * 10, uVar1 = (ulong)(byte)(*(byte *)ppbVar18 - 0x30),
           pbVar20 = (byte *)(uVar19 + uVar1), CARRY8(uVar19,uVar1))) goto LAB_101ac2ddc;
        uVar21 = 0;
        pbVar15 = pbVar15 + -1;
        ppbVar18 = (byte **)((long)ppbVar18 + 1);
      } while (pbVar15 != (byte *)0x0);
    }
  }
  else {
    func_0x000107c61434(pbVar14);
    pbVar20 = pbVar14;
    func_0x000100f5015c(pbVar17,pbVar14,10);
    uVar21 = (uint)pbVar20;
    func_0x000107c6142c(pbVar14);
    pbVar20 = pbVar17;
  }
  if ((uVar21 & 0xff) == 1) {
LAB_101ac2df0:
                    /* WARNING: Could not recover jumptable at 0x000101ac2e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
    return;
  }
LAB_101ac2e14:
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar3 = *(long *)(unaff_x22 + 0x70);
  FUN_101ac3cbc(unaff_x22 + 0x50,uVar2);
  plVar11 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101ac2ed8;
  piVar16 = *(int **)(lVar3 + 8);
  plVar12 = (long *)(ulong)(uint)piVar16[1];
  UNRECOVERED_JUMPTABLE = (code *)((long)*piVar16 + (long)piVar16);
  _swift_task_alloc();
  plVar11[2] = (long)plVar12;
  *plVar12 = (long)plVar11;
  plVar12[1] = (long)&UNK_103fca084;
                    /* WARNING: Could not recover jumptable at 0x000103fca080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pbVar20,PTR___swiftEmptySetSingleton_11034f1d8,uVar2,lVar3);
  return;
}



/* Entry: 101ac2ed8; end: 101ac2f27;  */

void FUN_101ac2ed8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xc0) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac2f28,0,0);
  return;
}



/* Entry: 101ac2f28; end: 101ac30f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac2f28(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  
  lVar17 = *(long *)(unaff_x22 + 0xc0);
  func_0x000101ac3ce0(unaff_x22 + 0x50);
  if (lVar17 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c3e3b4(uVar4);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar4);
    puVar6 = PTR_PTR_1126c7470;
    func_0x000107c610f8();
    uVar4 = uVar5;
    func_0x000107c5ee20(uVar5,param_2);
    func_0x000107c48c78();
    *(undefined **)(unaff_x22 + 200) = puVar6;
    func_0x000107c61170(uVar4);
    func_0x00010006c090(uVar5,param_2);
    puVar7 = &UNK_11043e368;
    func_0x000107c613fc(&UNK_11043e368,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,uVar2);
    *(undefined **)(unaff_x22 + 0x20) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
    *(undefined **)(unaff_x22 + 0x30) = puVar6;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar18;
    uVar8 = 0x112d56fe0;
    func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
    pcVar9 = FUN_101ac3d00;
    func_0x00010488bc98(FUN_101ac3d00,unaff_x22 + 0x10,uVar8);
    *(code **)(unaff_x22 + 0xd0) = pcVar9;
    func_0x000107c61574(puVar7);
    *(code **)(unaff_x22 + 0x88) = pcVar9;
    plVar10 = (long *)0x40;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd8) = plVar10;
    lVar17 = 0x112dc2cf0;
    func_0x0001000285a8(0x112dc2cf0,&UNK_10d9802c0);
    lVar11 = lVar17;
    FUN_1016ebd6c();
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101ac30f8;
    plVar10[3] = unaff_x22 + 0x78;
    uVar12 = 0xff;
    _swift_getAssociatedTypeWitness(0xff,lVar11,lVar17,&UNK_10e821f58,&UNK_10e821f60);
    uVar8 = 0x112d393f0;
    func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
    lVar13 = 0;
    __ss6ResultOMa(0,uVar12,uVar8,PTR___ss5ErrorWS_11034ee10);
    plVar10[4] = lVar13;
    uVar14 = *(long *)(*(long *)(lVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar10[5] = uVar14;
    piVar16 = *(int **)(lVar11 + 0x10);
    iVar1 = *piVar16;
    plVar15 = (long *)(ulong)(uint)piVar16[1];
    _swift_task_alloc();
    plVar10[6] = (long)plVar15;
    *plVar15 = (long)plVar10;
    plVar15[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar16))(plVar15,uVar14,lVar17,lVar11);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101ac30f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
  return;
}



/* Entry: 101ac30f8; end: 101ac3157;  */

void FUN_101ac30f8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101ac3158;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_101ac31a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101ac3158; end: 101ac319f;  */

void FUN_101ac3158(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101ac319c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Entry: 101ac31a0; end: 101ac31eb;  */

void FUN_101ac31a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101ac31e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xf000000000000000);
  return;
}



/* Entry: 101ac31ec; end: 101ac329f; -[_TtC25SnapEditorMusicDataLoader30SnapEditorValdiMusicDataLoader loadBytesWithRequestPayload:completion:] */

void FUN_101ac31ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [32];
  
  puVar2 = auStack_50;
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = &UNK_11043e438;
  func_0x000107c613fc(&UNK_11043e438,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  FUN_101ac2818(auStack_50,0x101ac3c74,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000101ac3ce0(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ac32a0; end: 101ac3323;  */

void FUN_101ac32a0(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001002ed07c(0);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ac3324; end: 101ac3327;  */

void FUN_101ac3324(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ac3328; end: 101ac336f; -[_TtC25SnapEditorMusicDataLoader30SnapEditorValdiMusicDataLoader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac3328(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112df9018));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112df9020));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112df9028));
  return;
}



/* Entry: 101ac3370; end: 101ac3383; -[_TtC25SnapEditorMusicDataLoader35SnapEditorMusicDataLoaderCancelable cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac3370(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112df9058) = 1;
  return;
}



/* Entry: 101ac3384; end: 101ac33cb; -[_TtC25SnapEditorMusicDataLoader35SnapEditorMusicDataLoaderCancelable init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac3384(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined1 *)(param_1 + _DAT_112df9058) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ac33cc; end: 101ac345b;  */

void FUN_101ac33cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ac345c; end: 101ac3a3b;  */

void FUN_101ac345c(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  long lStack_88;
  long lStack_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar9 = *(long *)(lVar1 + -8);
  lVar2 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar7 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5ebc4();
  if (lVar2 != 0) {
    uStack_78 = *(ulong *)(lVar2 + 0x10);
    lStack_88 = lVar5;
    lStack_80 = lVar5 - extraout_x12_01;
    if (uStack_78 != 0) {
      uVar6 = 0;
      do {
        if (*(ulong *)(lVar2 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x101ac36d8);
          (*pcVar8)();
        }
        (**(code **)(lVar9 + 0x10))
                  (lVar7,lVar2 + ((ulong)*(byte *)(lVar9 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar9 + 0x50) ^ 0xffffffffffffffff)) +
                         *(long *)(lVar9 + 0x48) * uVar6,lVar1);
        pcVar8 = *(code **)(lVar9 + 0x20);
        puVar3 = puVar4;
        lVar5 = lVar7;
        (*pcVar8)(puVar4,lVar7,lVar1);
        func_0x000107c5ebb4();
        if ((puVar3 == (undefined1 *)0x64496b63617274) && (lVar5 == -0x1900000000000000)) {
          func_0x000107c6142c(lVar2);
          lVar2 = -0x1900000000000000;
LAB_101ac3610:
          func_0x000107c6142c(lVar2);
          lVar2 = lStack_88;
          (*pcVar8)(lStack_88,puVar4,lVar1);
          lVar5 = lStack_80;
          lVar7 = lStack_80;
          (*pcVar8)(lStack_80,lVar2,lVar1);
          func_0x000107c5ebb8();
          if (lVar2 == 0) {
            (**(code **)(lVar9 + 8))(lVar5,lVar1);
            return;
          }
          lStack_70 = lVar7;
          lStack_68 = lVar2;
          func_0x000100e8b654();
          func_0x000107c60208(PTR___sSSN_11034da80,lVar7);
          (**(code **)(lVar9 + 8))(lVar5,lVar1);
          func_0x000107c6142c(lVar2);
          return;
        }
        func_0x000107c605b8();
        func_0x000107c6142c(lVar5);
        if (((ulong)puVar3 & 1) != 0) goto LAB_101ac3610;
        uVar6 = uVar6 + 1;
        (**(code **)(lVar9 + 8))(puVar4,lVar1);
      } while (uStack_78 != uVar6);
    }
    func_0x000107c6142c(lVar2);
  }
  return;
}



/* Entry: 101ac3a3c; end: 101ac3a5b;  */

void FUN_101ac3a3c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f3708);
  return;
}



/* Entry: 101ac3a5c; end: 101ac3acf;  */

void FUN_101ac3a5c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x58);
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101ac3ad0;
  plVar3[0xf] = unaff_x20 + 0x38;
  plVar3[0x10] = lVar5;
  plVar3[0xd] = lVar2;
  plVar3[0xe] = lVar4;
  plVar3[0xc] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac2994,0,0);
  return;
}



/* Entry: 101ac3ad0; end: 101ac3b0b;  */

void FUN_101ac3ad0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101ac3b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ac3b0c; end: 101ac3b17;  */

undefined8 * FUN_101ac3b0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101ac3b18; end: 101ac3b4b;  */

undefined8 * FUN_101ac3b18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101ac3b4c; end: 101ac3b9f;  */

undefined8 * FUN_101ac3b4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101ac3ba0; end: 101ac3bdb;  */

undefined8 * FUN_101ac3ba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  return param_1;
}



/* Entry: 101ac3bdc; end: 101ac3c7b;  */

int FUN_101ac3bdc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101ac3c7c; end: 101ac3cbb;  */

undefined8 FUN_101ac3c7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101ac3cbc; end: 101ac3cff;  */

long * FUN_101ac3cbc(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 101ac3d00; end: 101ac3e27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac3d00(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined1 auStack_68 [24];
  
  ppuVar4 = &puStack_a0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if ((lVar2 == 0) || (func_0x000107c61170(), (*(byte *)(lVar1 + _DAT_112df9058) & 1) != 0)) {
    uStack_98 = 0xf000000000000000;
    puStack_a0 = (undefined *)0x0;
    pcStack_90 = (code *)((ulong)pcStack_90 & 0xffffffffffffff00);
    func_0x00010488e5d4(&puStack_a0);
  }
  else if ((uVar5 != 0) &&
          (uVar3 = uVar5,
          func_0x000107c61150(uVar5,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_getBeatAmplitudesWithFps_callbac_1125ce580), (uVar3 & 1) != 0))
  {
    pcStack_80 = FUN_101ac3e28;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_101ac32a0;
    puStack_88 = &UNK_11043e450;
    uStack_78 = param_1;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c6157c(param_1);
    func_0x000107c43f1c(uVar6,uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(uStack_78);
  }
  return;
}



/* Entry: 101ac3e28; end: 101ac40df;  */

void FUN_101ac3e28(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  if (param_3 == 0) {
    if (param_2 != 0) {
      if (param_2 >> 0x3e == 0) {
        uVar8 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar8 = param_2;
        if (-1 < (long)param_2) {
          uVar8 = param_2 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar8 != 0) {
        puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000101ac3440(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac40e0);
          (*pcVar1)();
        }
        if ((param_2 & 0xc000000000000001) == 0) {
          puVar10 = (undefined8 *)(param_2 + 0x20);
          do {
            puVar7 = puStack_90;
            func_0x000107c436dc(*puVar10);
            uVar9 = *(ulong *)(puVar7 + 0x10);
            puStack_90 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
              func_0x000101ac3440(1 < *(ulong *)(puVar7 + 0x18),uVar9 + 1,1);
            }
            *(ulong *)(puStack_90 + 0x10) = uVar9 + 1;
            *(int *)(puStack_90 + uVar9 * 4 + 0x20) = (int)param_1;
            uVar8 = uVar8 - 1;
            puVar7 = puStack_90;
            puVar10 = puVar10 + 1;
          } while (uVar8 != 0);
        }
        else {
          uVar9 = 0;
          do {
            puVar7 = puStack_90;
            uVar3 = uVar9;
            func_0x0001002ec9a0(uVar9,param_2);
            func_0x000107c436dc();
            uVar2 = param_1;
            func_0x000107c615e8(uVar3);
            uVar3 = *(ulong *)(puVar7 + 0x10);
            puStack_90 = puVar7;
            if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
              func_0x000101ac3440(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
            }
            uVar9 = uVar9 + 1;
            *(ulong *)(puStack_90 + 0x10) = uVar3 + 1;
            *(int *)(puStack_90 + uVar3 * 4 + 0x20) = (int)param_1;
            puVar7 = puStack_90;
            param_1 = uVar2;
          } while (uVar8 != uVar9);
        }
      }
      if (*(ulong *)(puVar7 + 0x10) >> 0x3d == 0) {
        puStack_90 = puVar7 + 0x20;
        puStack_88 = puStack_90 + *(ulong *)(puVar7 + 0x10) * 4;
        puStack_78 = PTR___sSWN_11034dbc0;
        puStack_70 = PTR___sSW10Foundation15ContiguousBytesAAWP_110351010;
        ppuVar4 = &puStack_90;
        FUN_101ac3cbc();
        puVar5 = *ppuVar4;
        puVar6 = ppuVar4[1];
        func_0x000100e37074();
        func_0x000101ac3ce0(&puStack_90);
        func_0x000107c6142c(puVar7);
        uStack_80 = 0;
        puStack_90 = puVar5;
        puStack_88 = puVar6;
        func_0x00010006c00c(puVar5,puVar6);
        func_0x00010488e5d4(&puStack_90);
        func_0x00010006c090(puVar5,puVar6);
        func_0x00010006c090(puVar5,puVar6);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac40dc);
      (*pcVar1)();
    }
  }
  else {
    puStack_90 = (undefined *)0x0;
    puStack_88 = (undefined *)0xe000000000000000;
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(puStack_88);
    puStack_90 = (undefined *)0xd000000000000021;
    puStack_88 = (undefined *)0x800000010eff64d0;
    lStack_98 = param_3;
    func_0x000107c61174(param_3);
    uVar2 = 0x112df90c0;
    func_0x0001000285a8(0x112df90c0,&UNK_10d9c9a98);
    func_0x000107c5fb18(&lStack_98,uVar2);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(puStack_88);
  }
  puStack_88 = (undefined *)0xf000000000000000;
  puStack_90 = (undefined *)0x0;
  uStack_80 = 0;
  func_0x00010488e5d4(&puStack_90);
  return;
}



/* Entry: 101ac40e0; end: 101ac40fb;  */

void FUN_101ac40e0(long param_1,long param_2)

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



/* Entry: 101ac40fc; end: 101ac4173;  */

void FUN_101ac40fc(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  long unaff_x20;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  func_0x000107c60eb4(param_2,*(undefined8 *)(unaff_x20 + 0x10));
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 101ac4174; end: 101ac418b;  */

undefined8 * FUN_101ac4174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101ac418c; end: 101ac4317;  */

void FUN_101ac418c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar1
            );
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000002e;
  func_0x000107c5fadc(0xd00000000000002e,0x800000010eff65c0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puRam0000000113484bf8 = puVar2;
  return;
}



/* Entry: 101ac4318; end: 101ac4353; -[_TtC28SnapEditorStickerImageLoader33SnapEditorStickerValdiImageLoader supportedURLSchemes] */

void FUN_101ac4318(void)

{
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  func_0x000107c5fc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101ac4354; end: 101ac47fb;  */

/* WARNING: Removing unreachable block (ram,0x000101ac4768) */

void FUN_101ac4354(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_b0;
  undefined8 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = 0;
  func_0x000107c5ebbc();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar7 = (long)&lStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar7 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_90 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = (lVar16 - extraout_x12_00) - extraout_x12_01;
  lVar4 = 0x112d4b5b0;
  uStack_88 = uVar11;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = uVar11 - extraout_x8_00;
  lVar4 = 0;
  func_0x000107c5ec24();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ebe4(lVar14,param_2,0);
  lVar5 = lVar14;
  (**(code **)(lVar17 + 0x30))(lVar14,1,lVar4);
  if ((int)lVar5 == 1) {
    FUN_101ac608c(lVar14,0x112d4b5b0,&UNK_10d912140);
    param_1[3] = PTR___sSSN_11034da80;
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
  }
  else {
    lVar5 = lVar15;
    lStack_98 = lVar17;
    (**(code **)(lVar17 + 0x20))(lVar15,lVar14,lVar4);
    lStack_a0 = lVar15;
    func_0x000107c5ebc4();
    if (lVar5 != 0) {
      uStack_80 = *(ulong *)(lVar5 + 0x10);
      lStack_b0 = lVar4;
      puStack_a8 = param_1;
      if (*(ulong *)(lVar5 + 0x10) != 0) {
        uVar11 = 0;
        do {
          if (*(ulong *)(lVar5 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x101ac47fc);
            (*pcVar13)();
          }
          (**(code **)(lVar12 + 0x10))
                    (lVar16,lVar5 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                                    ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)) +
                            *(long *)(lVar12 + 0x48) * uVar11,lVar3);
          pcVar13 = *(code **)(lVar12 + 0x20);
          uVar6 = uVar7;
          lVar4 = lVar16;
          (*pcVar13)(uVar7,lVar16,lVar3);
          func_0x000107c5ebb4();
          if ((uVar6 == 0xd000000000000019) && (lVar4 == -0x7ffffffef1009ad0)) {
            func_0x000107c6142c(lVar5);
            lVar5 = -0x7ffffffef1009ad0;
LAB_101ac4620:
            func_0x000107c6142c(lVar5);
            lVar14 = lStack_90;
            (*pcVar13)(lStack_90,uVar7,lVar3);
            uVar11 = uStack_88;
            uVar7 = uStack_88;
            (*pcVar13)(uStack_88,lVar14,lVar3);
            func_0x000107c5ebb8();
            lVar5 = lStack_a0;
            lVar4 = lStack_b0;
            if (lVar14 == 0) {
              puStack_a8[3] = PTR___sSSN_11034da80;
              *puStack_a8 = 0;
              puStack_a8[1] = 0xe000000000000000;
              pcVar13 = *(code **)(lVar12 + 8);
            }
            else {
              uStack_70 = uVar7;
              lStack_68 = lVar14;
              func_0x000100e8b654();
              puVar1 = PTR___sSSN_11034da80;
              puVar8 = PTR___sSSN_11034da80;
              func_0x000107c60208();
              func_0x000107c6142c(lVar14);
              if (uVar7 == 0) {
                puStack_a8[3] = puVar1;
                *puStack_a8 = 0;
                puStack_a8[1] = 0xe000000000000000;
                pcVar13 = *(code **)(lVar12 + 8);
              }
              else {
                uVar11 = uVar7;
                func_0x000107c5ee08(puVar8,uVar7,0);
                func_0x000107c6142c(uVar7);
                if (uVar11 >> 0x3c < 0xf) {
                  func_0x000107c610f8(PTR_PTR_1126b0cc0);
                  func_0x000100de78a0(puVar8,uVar11);
                  puVar9 = puVar8;
                  func_0x00010103b414(puVar8,uVar11,0);
                  func_0x0001000b44c0(puVar8,uVar11);
                  puVar2 = puStack_a8;
                  if (puVar9 == (undefined *)0x0) {
                    puStack_a8[3] = puVar1;
                    func_0x0001000b44c0(puVar8,uVar11);
                    *puVar2 = 0;
                    puVar2[1] = 0xe000000000000000;
                  }
                  else {
                    uVar10 = 0;
                    FUN_101ac55fc();
                    puVar2 = puStack_a8;
                    puStack_a8[3] = uVar10;
                    func_0x0001000b44c0(puVar8,uVar11);
                    *puVar2 = puVar9;
                  }
                }
                else {
                  puStack_a8[3] = puVar1;
                  *puStack_a8 = 0;
                  puStack_a8[1] = 0xe000000000000000;
                }
                pcVar13 = *(code **)(lVar12 + 8);
                uVar11 = uStack_88;
              }
            }
            (*pcVar13)(uVar11,lVar3);
            pcVar13 = *(code **)(lStack_98 + 8);
            goto LAB_101ac47d0;
          }
          func_0x000107c605b8();
          func_0x000107c6142c(lVar4);
          if ((uVar6 & 1) != 0) goto LAB_101ac4620;
          uVar11 = uVar11 + 1;
          (**(code **)(lVar12 + 8))(uVar7,lVar3);
        } while (uStack_80 != uVar11);
      }
      func_0x000107c6142c(lVar5);
      param_1 = puStack_a8;
      lVar4 = lStack_b0;
    }
    param_1[3] = PTR___sSSN_11034da80;
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    pcVar13 = *(code **)(lStack_98 + 8);
    lVar5 = lStack_a0;
LAB_101ac47d0:
    (*pcVar13)(lVar5,lVar4);
  }
  return;
}



/* Entry: 101ac47fc; end: 101ac49df; -[_TtC28SnapEditorStickerImageLoader33SnapEditorStickerValdiImageLoader requestPayloadWithURL:error:] */

void FUN_101ac47fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  func_0x000107c61174(param_1);
  FUN_101ac4354(auStack_60,puVar2);
  func_0x000107c61170(param_1);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  puVar2 = auStack_60;
  func_0x0001006732c8(puVar2,uStack_48);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ac49e0; end: 101ac4a53;  */

void FUN_101ac49e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac4a54,uVar1,uVar2);
  return;
}



/* Entry: 101ac4a54; end: 101ac4b73;  */

void FUN_101ac4a54(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x30,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x90) = lVar5;
  if (lVar5 == 0) {
    pcVar1 = *(code **)(unaff_x22 + 0x58);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    (*pcVar1)(0,0xf000000000000000,0);
  }
  else {
    func_0x0001000bb420(*(undefined8 *)(unaff_x22 + 0x68),unaff_x22 + 0x10);
    uVar2 = 0;
    FUN_101ac55fc(0);
    uVar3 = unaff_x22 + 0x48;
    func_0x000107c6147c(uVar3,unaff_x22 + 0x10,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if ((uVar3 & 1) != 0) {
      lVar6 = *(long *)(unaff_x22 + 0x48);
      *(long *)(unaff_x22 + 0x98) = lVar6;
      plVar4 = (long *)0x90;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101ac4b74;
      plVar4[0xb] = *(long *)(unaff_x22 + 0x70);
      plVar4[0xc] = lVar5;
      plVar4[10] = lVar6;
      lVar6 = 0;
      func_0x000107c5fcec();
      lVar5 = lVar6;
      func_0x000107c5fce8();
      plVar4[0xd] = lVar5;
      func_0x000100eea164();
      func_0x000107c5fca8();
      plVar4[0xe] = lVar6;
      plVar4[0xf] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac4cdc,lVar6,lVar5);
      return;
    }
    pcVar1 = *(code **)(unaff_x22 + 0x58);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    (*pcVar1)(0,0xf000000000000000,0);
    func_0x000107c61170(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000101ac4b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ac4b74; end: 101ac4bbf;  */

void FUN_101ac4b74(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xa8) = param_1;
  *(undefined8 *)(lVar1 + 0xb0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101ac4bc0,*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88));
  return;
}



/* Entry: 101ac4bc0; end: 101ac4c6b;  */

void FUN_101ac4bc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(ulong *)(unaff_x22 + 0xb0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000100de78a0(uVar1,uVar3);
  func_0x0001000b44c0(uVar1,uVar3);
  if (uVar3 >> 0x3c < 0xf) {
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  (**(code **)(unaff_x22 + 0x58))(uVar1,uVar4,0);
  func_0x0001000b44c0(uVar1,uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101ac4c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ac4c6c; end: 101ac4cdb;  */

void FUN_101ac4c6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac4cdc,uVar1,uVar2);
  return;
}



/* Entry: 101ac4cdc; end: 101ac4dd7;  */

void FUN_101ac4cdc(void)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined1 auVar13 [16];
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
  puVar2 = &UNK_11043e5e0;
  func_0x000107c613fc(&UNK_11043e5e0,0x18,7);
  auVar13 = *(undefined1 (*) [16])(unaff_x22 + 0x50);
  func_0x000107c61614(puVar2 + 0x10,uVar12);
  *(undefined **)(unaff_x22 + 0x20) = puVar2;
  auVar13 = NEON_ext(auVar13,auVar13,8,1);
  *(long *)(unaff_x22 + 0x30) = auVar13._8_8_;
  *(long *)(unaff_x22 + 0x28) = auVar13._0_8_;
  uVar12 = 0x112d56fe0;
  func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
  pcVar3 = FUN_101ac5718;
  func_0x00010488bc98(FUN_101ac5718,unaff_x22 + 0x10,uVar12);
  *(code **)(unaff_x22 + 0x80) = pcVar3;
  func_0x000107c61574(puVar2);
  *(code **)(unaff_x22 + 0x48) = pcVar3;
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar4;
  lVar5 = 0x112dc2cf0;
  func_0x0001000285a8(0x112dc2cf0,&UNK_10d9802c0);
  lVar6 = lVar5;
  FUN_1016ebd6c();
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101ac4dd8;
  plVar4[3] = unaff_x22 + 0x38;
  uVar7 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar6,lVar5,&UNK_10e821f58,&UNK_10e821f60);
  uVar12 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar8 = 0;
  __ss6ResultOMa(0,uVar7,uVar12,PTR___ss5ErrorWS_11034ee10);
  plVar4[4] = lVar8;
  uVar9 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar4[5] = uVar9;
  piVar11 = *(int **)(lVar6 + 0x10);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  plVar4[6] = (long)plVar10;
  *plVar10 = (long)plVar4;
  plVar10[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))(plVar10,uVar9,lVar5,lVar6);
  return;
}



/* Entry: 101ac4dd8; end: 101ac4e37;  */

void FUN_101ac4dd8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x88));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x70);
    uVar3 = *(undefined8 *)(lVar4 + 0x78);
    pcVar1 = FUN_101ac4e38;
  }
  else {
    func_0x000107c614ac();
    uVar2 = *(undefined8 *)(lVar4 + 0x70);
    uVar3 = *(undefined8 *)(lVar4 + 0x78);
    pcVar1 = (code *)0x101ac4e78;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 101ac4e38; end: 101ac4ebb;  */

void FUN_101ac4e38(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101ac4e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Entry: 101ac4ebc; end: 101ac4f6f; -[_TtC28SnapEditorStickerImageLoader33SnapEditorStickerValdiImageLoader loadBytesWithRequestPayload:completion:] */

void FUN_101ac4ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [32];
  
  puVar2 = auStack_50;
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  puVar1 = &UNK_11043e630;
  func_0x000107c613fc(&UNK_11043e630,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000101ac48d0(auStack_50,FUN_101ac5710,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 101ac4f70; end: 101ac500b;  */

/* WARNING: Possible PIC construction at 0x000101ac4fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ac4ff0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ac4fa8) */
/* WARNING: Removing unreachable block (ram,0x000101ac4fbc) */
/* WARNING: Removing unreachable block (ram,0x000101ac4ff4) */
/* WARNING: Removing unreachable block (ram,0x000101ac4fc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac4f70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112df9118);
  uVar2 = *puVar1;
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 101ac500c; end: 101ac50b7;  */

void FUN_101ac500c(long param_1)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(uStack_28);
  uStack_30 = 0xd00000000000001d;
  uStack_28 = 0x800000010eff6610;
  if (param_1 == 0) {
    uStack_40 = 0xe400000000000000;
  }
  else {
    func_0x000107c614cc(param_1,auStack_38,auStack_50);
    func_0x000107c60640(uStack_48,uStack_40);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uStack_40);
  func_0x000107c6142c(uStack_28);
  return;
}



/* Entry: 101ac50b8; end: 101ac50bb;  */

void FUN_101ac50b8(long param_1)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = 0;
  uStack_28 = 0xe000000000000000;
  func_0x000107c602fc(0x1f);
  func_0x000107c6142c(uStack_28);
  uStack_30 = 0xd00000000000001d;
  uStack_28 = 0x800000010eff6610;
  if (param_1 == 0) {
    uStack_40 = 0xe400000000000000;
  }
  else {
    func_0x000107c614cc(param_1,auStack_38,auStack_50);
    func_0x000107c60640(uStack_48,uStack_40);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uStack_40);
  func_0x000107c6142c(uStack_28);
  return;
}



/* Entry: 101ac50bc; end: 101ac546f;  */

/* WARNING: Removing unreachable block (ram,0x000101ac52d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac50bc(long *param_1,undefined8 *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong auStack_b0 [2];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)auStack_b0 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(param_3 + _DAT_112df9120) & 1) != 0) {
    param_1[1] = -0x1000000000000000;
    *param_1 = 0;
    return;
  }
  uVar13 = *param_2;
  uStack_70 = 0;
  lStack_68 = 0;
  puVar5 = &UNK_11043e6a8;
  func_0x000107c613fc(&UNK_11043e6a8,0x18,7);
  *(undefined8 **)(puVar5 + 0x10) = &uStack_70;
  puVar6 = &UNK_11043e6d0;
  func_0x000107c613fc(&UNK_11043e6d0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_101ac6004;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  uStack_80 = 0x101ac6050;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011a6f3c;
  puStack_88 = &UNK_11043e6e8;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c754(uVar13);
  func_0x000107c60bd0(ppuVar7);
  lVar8 = lStack_68;
  uVar13 = uStack_70;
  if (lStack_68 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c61434(lStack_68);
    func_0x000107c5edd0(lVar9,uVar13,lVar8);
    func_0x000107c6142c(lVar8);
    lVar8 = lVar9;
    (**(code **)(lVar15 + 0x30))(lVar9,1,lVar4);
    if ((int)lVar8 != 1) {
      (**(code **)(lVar15 + 0x20))(lVar14,lVar9,lVar4);
      uVar10 = 0;
      lVar9 = lVar14;
      func_0x000107c5ede8();
      bVar1 = 0xe < uVar10 >> 0x3c;
      if (bVar1) {
        func_0x000100de78a0(lVar9,uVar10);
        func_0x0001000b44c0(lVar9,uVar10);
      }
      else {
        func_0x000100de78a0(lVar9,uVar10);
        func_0x0001000b44c0(lVar9,uVar10);
        func_0x0001000b44c0(0,0xf000000000000000);
      }
      puStack_a0 = (undefined *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_98);
      auStack_b0[0] = 0;
      puStack_a0 = (undefined *)0xd000000000000021;
      uStack_98 = 0x800000010eff6590;
      if (!bVar1) {
        uVar2 = (uint)(uVar10 >> 0x20);
        uVar11 = uVar2 >> 0x1e;
        if (uVar2 >> 0x1e < 2) {
          if (uVar11 == 0) {
            func_0x0001000b44c0(lVar9,uVar10);
            auStack_b0[0] = uVar10 >> 0x30 & 0xff;
          }
          else {
            iVar12 = (int)((ulong)lVar9 >> 0x20);
            if (SBORROW4(iVar12,(int)lVar9)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5470);
              (*pcVar3)();
            }
            auStack_b0[0] = (ulong)(iVar12 - (int)lVar9);
          }
        }
        else if (uVar11 == 2) {
          auStack_b0[0] = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
          if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5418);
            (*pcVar3)();
          }
        }
        else {
          func_0x0001000b44c0(lVar9,uVar10);
          auStack_b0[0] = 0;
        }
      }
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(uStack_98);
      (**(code **)(lVar15 + 8))(lVar14,lVar4);
      lVar4 = lStack_68;
      *param_1 = lVar9;
      param_1[1] = uVar10;
      func_0x000107c61574(puVar5);
      goto LAB_101ac53b8;
    }
    FUN_101ac608c(lVar9,0x112d36580,&UNK_10d9016d0);
    lVar4 = lStack_68;
  }
  param_1[1] = -0x1000000000000000;
  *param_1 = 0;
  func_0x000107c61574(puVar5);
LAB_101ac53b8:
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 101ac5470; end: 101ac5473;  */

void FUN_101ac5470(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ac5474; end: 101ac54bb; -[_TtC28SnapEditorStickerImageLoader33SnapEditorStickerValdiImageLoader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ac5490: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ac5494) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac5474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df90d8));
  return;
}



/* Entry: 101ac54bc; end: 101ac555f; -[_TtC28SnapEditorStickerImageLoader38SnapEditorStickerImageLoaderCancelable cancel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac54bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  *(undefined1 *)(param_1 + _DAT_112df9120) = 1;
  lVar2 = *(long *)(param_1 + _DAT_112df9118);
  if (lVar2 != 0) {
    lVar3 = ((long *)(param_1 + _DAT_112df9118))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c61174(param_1);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(lVar1,lVar3);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101ac5560; end: 101ac55b7; -[_TtC28SnapEditorStickerImageLoader38SnapEditorStickerImageLoaderCancelable init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac5560(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112df9118);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(param_1 + _DAT_112df9120) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ac55b8; end: 101ac55eb;  */

void FUN_101ac55b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ac55ec; end: 101ac55fb; -[_TtC28SnapEditorStickerImageLoader38SnapEditorStickerImageLoaderCancelable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac55ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112df9118));
  return;
}



/* Entry: 101ac55fc; end: 101ac565f;  */

void FUN_101ac55fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df90e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b0cc0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112df90e8 = puVar1;
  return;
}



/* Entry: 101ac5660; end: 101ac56d3;  */

void FUN_101ac5660(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x48);
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101ac56d4;
  plVar3[0xd] = unaff_x20 + 0x28;
  plVar3[0xe] = lVar5;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar4;
  plVar3[10] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[0xf] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[0x10] = lVar1;
  plVar3[0x11] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ac4a54,lVar1,lVar2);
  return;
}



/* Entry: 101ac56d4; end: 101ac570f;  */

void FUN_101ac56d4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101ac570c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ac5710; end: 101ac5717;  */

/* WARNING: Possible PIC construction at 0x000100f153f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f153f4) */

void FUN_101ac5710(undefined8 param_1,ulong param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 >> 0x3c < 0xf) {
    func_0x000107c5ee20();
  }
  else {
    param_1 = 0;
  }
  if (param_3 != 0) {
    func_0x000107c5ed2c(param_3);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ac5718; end: 101ac5c2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac5718(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  code *pcVar13;
  code *pcVar14;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  pcVar13 = *(code **)(unaff_x20 + 0x20);
  puVar11 = auStack_78;
  func_0x000107c61428(lVar3 + 0x10,puVar11,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    uStack_88 = 0xf000000000000000;
    lStack_90 = 0;
    uStack_80 = 0;
    func_0x00010488e5d4(&lStack_90);
    return;
  }
  if ((*(byte *)(lVar2 + _DAT_112df9120) & 1) == 0) {
    pcVar4 = pcVar13;
    func_0x000107c4ce20();
    func_0x000107c61180();
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x101ac5c1c);
      (*pcVar13)();
    }
    pcVar14 = pcVar4;
    func_0x000107c3e304();
    func_0x000107c61180();
    func_0x000107c61170(pcVar4);
    if (pcVar14 == (code *)0x0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x101ac5c20);
      (*pcVar13)();
    }
    pcVar4 = pcVar14;
    func_0x000107c3e31c();
    func_0x000107c61180();
    func_0x000107c61170(pcVar14);
    if (pcVar4 == (code *)0x0) {
LAB_101ac5944:
      pcVar4 = pcVar13;
      func_0x000107c4a764();
      func_0x000107c61180();
      if (pcVar4 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x101ac5c24);
        (*pcVar13)();
      }
      pcVar14 = pcVar4;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(pcVar4);
      if (pcVar14 == (code *)0x0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x101ac5c28);
        (*pcVar13)();
      }
      pcVar4 = pcVar14;
      func_0x000107c42930();
      func_0x000107c61170(pcVar14);
      if ((int)pcVar4 == 0x18) {
        FUN_101ac5cb4(pcVar13,lVar2);
      }
      else {
        puVar5 = PTR_PTR_1126bc960;
        func_0x000107c61168(PTR_PTR_1126bc960);
        func_0x000107c5d864();
        func_0x000107c61180();
        func_0x0001000d224c(&lStack_90);
        lVar7 = lStack_90;
        if (lStack_90 == 0) {
          func_0x000107c61170(puVar5);
          goto LAB_101ac5bbc;
        }
        lVar6 = lStack_90;
        func_0x000107c5ded4();
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
        lVar7 = lVar6;
        func_0x000107c4da04();
        func_0x000107c61180();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x101ac5c30);
          (*pcVar13)();
        }
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        lVar8 = lVar7;
        func_0x0001000b637c(lVar7);
        func_0x000107c61170(lVar7);
        puVar9 = &UNK_11043e720;
        func_0x000107c613fc(&UNK_11043e720,0x18,7);
        *(long *)(puVar9 + 0x10) = lVar2;
        func_0x000107c61174(lVar2);
        uVar12 = 0x112d56fe0;
        func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
        pcVar13 = FUN_101ac60cc;
        func_0x0001000bfde0(FUN_101ac60cc,puVar9,uVar12);
        func_0x000107c61574(puVar9);
        func_0x000107c61574(lVar8);
        func_0x000107c615e8(lVar6);
        func_0x000107c61170(puVar5);
      }
    }
    else {
      pcVar14 = pcVar4;
      func_0x000107c5faec();
      func_0x000107c61170(pcVar4);
      uVar1 = (ulong)pcVar14 & 0xffffffffffff;
      if (((ulong)puVar11 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar11 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        func_0x000107c6142c(puVar11);
        goto LAB_101ac5944;
      }
      func_0x0001000d224c(&lStack_90);
      lVar7 = lStack_90;
      if (lStack_90 == 0) {
LAB_101ac5ae0:
        pcVar13 = (code *)0x0;
      }
      else {
        func_0x000107c5fadc(pcVar14,puVar11);
        if (lRam0000000113484bf0 != -1) {
          func_0x000107c61568(0x113484bf0,FUN_101ac418c);
        }
        lVar6 = lRam0000000113484bf8;
        func_0x000107c4f7c0();
        func_0x000107c61180();
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x101ac5c2c);
          (*pcVar13)();
        }
        lVar8 = lVar7;
        func_0x000107c43244();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(pcVar14);
        if (lVar8 == 0) {
          func_0x000107c615e8(lVar7);
          goto LAB_101ac5ae0;
        }
        func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
        lVar6 = lVar8;
        func_0x0001000b637c(lVar8);
        puVar5 = &UNK_11043e680;
        func_0x000107c613fc(&UNK_11043e680,0x18,7);
        *(long *)(puVar5 + 0x10) = lVar2;
        func_0x000107c61174(lVar2);
        uVar12 = 0x112d56fe0;
        func_0x0001000285a8(0x112d56fe0,&UNK_10d91dda0);
        pcVar13 = FUN_101ac5ffc;
        func_0x0001000bfde0(FUN_101ac5ffc,puVar5,uVar12);
        func_0x000107c61574(puVar5);
        func_0x000107c61574(lVar6);
        func_0x000107c61170(lVar8);
        func_0x000107c615e8(lVar7);
      }
      func_0x000107c6142c(puVar11);
    }
    if (pcVar13 != (code *)0x0) {
      plVar10 = (long *)0x1;
      func_0x00010061b458();
      puVar5 = &UNK_11043e658;
      func_0x000107c613fc(&UNK_11043e658,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar2;
      *(undefined8 *)(puVar5 + 0x18) = param_1;
      pcVar14 = *(code **)(*plVar10 + 0x60);
      func_0x000107c61174(lVar2);
      func_0x000107c6157c(param_1);
      pcVar4 = FUN_101ac5c30;
      puVar9 = puVar5;
      (*pcVar14)(FUN_101ac5c30,puVar5);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(plVar10);
      uVar12 = *(undefined8 *)(lVar3 + _DAT_112df90d0);
      func_0x000107c615f0(pcVar4);
      func_0x000107c6157c(uVar12);
      func_0x000104885df4(pcVar4,puVar9);
      func_0x000107c61574(uVar12);
      func_0x000107c615f0(pcVar4);
      FUN_101ac4f70();
      func_0x000107c615ec(pcVar4,2);
      func_0x000107c61574(pcVar13);
      goto LAB_101ac5bd8;
    }
  }
LAB_101ac5bbc:
  uStack_88 = 0xf000000000000000;
  lStack_90 = 0;
  uStack_80 = 0;
  func_0x00010488e5d4(&lStack_90);
LAB_101ac5bd8:
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 101ac5c30; end: 101ac5cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac5c30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + _DAT_112df9120) & 1) == 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_40 = 0;
    uStack_50 = uVar1;
    uStack_48 = uVar2;
    func_0x000100de78a0(uVar1,uVar2);
    func_0x00010488e5d4(&uStack_50);
    func_0x0001000b44c0(uVar1,uVar2);
  }
  else {
    uStack_48 = 0xf000000000000000;
    uStack_50 = 0;
    uStack_40 = 0;
    func_0x00010488e5d4(&uStack_50);
  }
  return;
}



/* Entry: 101ac5cb4; end: 101ac5ffb;  */

/* WARNING: Removing unreachable block (ram,0x000101ac5e4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101ac5cb4(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  long extraout_x8;
  long lVar14;
  long lVar15;
  ulong uStack_70;
  long lStack_68;
  ulong uStack_60;
  
  lVar4 = 0;
  lVar8 = param_2;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c4a764();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5ff4);
    (*pcVar3)();
  }
  lVar5 = param_1;
  func_0x000107c42924();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c3f1e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 != 0) {
      lVar5 = lVar6;
      func_0x000107c4c948();
      func_0x000107c61180();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5ffc);
        (*pcVar3)();
      }
      lVar7 = lVar5;
      func_0x000107c40500();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar7 == 0) {
        func_0x000107c61170(lVar6);
      }
      else {
        lVar5 = lVar7;
        func_0x000107c5faec(lVar7);
        func_0x000107c61170(lVar7);
        uVar10 = 0;
        func_0x000107c5fbb4(0x2f2f3a7370747468,0xe800000000000000,lVar5,lVar8);
        if (((uVar10 & 1) == 0) && ((*(byte *)(param_2 + _DAT_112df9120) & 1) == 0)) {
          func_0x000107c5ed80(lVar14,lVar5,lVar8);
          func_0x000107c6142c(lVar8);
          uVar10 = 0;
          lVar8 = lVar14;
          func_0x000107c5ede8();
          bVar1 = 0xe < uVar10 >> 0x3c;
          if (bVar1) {
            func_0x000100de78a0(lVar8,uVar10);
            func_0x0001000b44c0(lVar8,uVar10);
          }
          else {
            func_0x000100de78a0(lVar8,uVar10);
            func_0x0001000b44c0(lVar8,uVar10);
            func_0x0001000b44c0(0,0xf000000000000000);
          }
          lStack_68 = 0;
          uStack_60 = 0xe000000000000000;
          func_0x000107c602fc(0x1d);
          func_0x000107c6142c(uStack_60);
          uStack_70 = 0;
          lStack_68 = -0x2fffffffffffffe5;
          uStack_60 = 0x800000010eff65f0;
          if (!bVar1) {
            uVar2 = (uint)(uVar10 >> 0x20);
            uVar12 = uVar2 >> 0x1e;
            if (uVar2 >> 0x1e < 2) {
              if (uVar12 == 0) {
                func_0x0001000b44c0(lVar8,uVar10);
                uStack_70 = uVar10 >> 0x30 & 0xff;
              }
              else {
                iVar13 = (int)((ulong)lVar8 >> 0x20);
                if (SBORROW4(iVar13,(int)lVar8)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5ff0);
                  (*pcVar3)();
                }
                uStack_70 = (ulong)(iVar13 - (int)lVar8);
              }
            }
            else if (uVar12 == 2) {
              uStack_70 = *(long *)(lVar8 + 0x18) - *(long *)(lVar8 + 0x10);
              if (SBORROW8(*(long *)(lVar8 + 0x18),*(long *)(lVar8 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5f98);
                (*pcVar3)();
              }
            }
            else {
              func_0x0001000b44c0(lVar8,uVar10);
              uStack_70 = 0;
            }
          }
          puVar11 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar11);
          func_0x000107c6142c(uStack_60);
          func_0x0001000285a8(0x112df9188,&UNK_10d9c9b70);
          plVar9 = &lStack_68;
          lStack_68 = lVar8;
          uStack_60 = uVar10;
          func_0x000100854cb0(plVar9);
          func_0x000107c61170(lVar6);
          (**(code **)(lVar15 + 8))(lVar14,lVar4);
          func_0x0001000b44c0(lVar8,uVar10);
          return plVar9;
        }
        func_0x000107c61170(lVar6);
        func_0x000107c6142c(lVar8);
      }
    }
    return (long *)0x0;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5ff8);
  (*pcVar3)();
}



/* Entry: 101ac5ffc; end: 101ac6003;  */

/* WARNING: Removing unreachable block (ram,0x000101ac52d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac5ffc(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  ulong auStack_b0 [2];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar9 = *(long *)(unaff_x20 + 0x10);
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)auStack_b0 - extraout_x8;
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar14 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(lVar9 + _DAT_112df9120) & 1) != 0) {
    param_1[1] = -0x1000000000000000;
    *param_1 = 0;
    return;
  }
  uVar13 = *param_2;
  uStack_70 = 0;
  lStack_68 = 0;
  puVar5 = &UNK_11043e6a8;
  func_0x000107c613fc(&UNK_11043e6a8,0x18,7);
  *(undefined8 **)(puVar5 + 0x10) = &uStack_70;
  puVar6 = &UNK_11043e6d0;
  func_0x000107c613fc(&UNK_11043e6d0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_101ac6004;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  uStack_80 = 0x101ac6050;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1011a6f3c;
  puStack_88 = &UNK_11043e6e8;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c754(uVar13);
  func_0x000107c60bd0(ppuVar7);
  lVar9 = lStack_68;
  uVar13 = uStack_70;
  if (lStack_68 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c61434(lStack_68);
    func_0x000107c5edd0(lVar12,uVar13,lVar9);
    func_0x000107c6142c(lVar9);
    lVar9 = lVar12;
    (**(code **)(lVar15 + 0x30))(lVar12,1,lVar4);
    if ((int)lVar9 != 1) {
      (**(code **)(lVar15 + 0x20))(lVar14,lVar12,lVar4);
      uVar8 = 0;
      lVar9 = lVar14;
      func_0x000107c5ede8();
      bVar1 = 0xe < uVar8 >> 0x3c;
      if (bVar1) {
        func_0x000100de78a0(lVar9,uVar8);
        func_0x0001000b44c0(lVar9,uVar8);
      }
      else {
        func_0x000100de78a0(lVar9,uVar8);
        func_0x0001000b44c0(lVar9,uVar8);
        func_0x0001000b44c0(0,0xf000000000000000);
      }
      puStack_a0 = (undefined *)0x0;
      uStack_98 = 0xe000000000000000;
      func_0x000107c602fc(0x23);
      func_0x000107c6142c(uStack_98);
      auStack_b0[0] = 0;
      puStack_a0 = (undefined *)0xd000000000000021;
      uStack_98 = 0x800000010eff6590;
      if (!bVar1) {
        uVar2 = (uint)(uVar8 >> 0x20);
        uVar10 = uVar2 >> 0x1e;
        if (uVar2 >> 0x1e < 2) {
          if (uVar10 == 0) {
            func_0x0001000b44c0(lVar9,uVar8);
            auStack_b0[0] = uVar8 >> 0x30 & 0xff;
          }
          else {
            iVar11 = (int)((ulong)lVar9 >> 0x20);
            if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5470);
              (*pcVar3)();
            }
            auStack_b0[0] = (ulong)(iVar11 - (int)lVar9);
          }
        }
        else if (uVar10 == 2) {
          auStack_b0[0] = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
          if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac5418);
            (*pcVar3)();
          }
        }
        else {
          func_0x0001000b44c0(lVar9,uVar8);
          auStack_b0[0] = 0;
        }
      }
      puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(uStack_98);
      (**(code **)(lVar15 + 8))(lVar14,lVar4);
      lVar4 = lStack_68;
      *param_1 = lVar9;
      param_1[1] = uVar8;
      func_0x000107c61574(puVar5);
      goto LAB_101ac53b8;
    }
    FUN_101ac608c(lVar12,0x112d36580,&UNK_10d9016d0);
    lVar4 = lStack_68;
  }
  param_1[1] = -0x1000000000000000;
  *param_1 = 0;
  func_0x000107c61574(puVar5);
LAB_101ac53b8:
  func_0x000107c6142c(lVar4);
  return;
}



/* Entry: 101ac6004; end: 101ac606f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac6004(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + _DAT_11301aff0);
    uVar1 = ((undefined8 *)(param_1 + _DAT_11301aff0))[1];
    func_0x000107c61434();
  }
  uVar2 = puVar3[1];
  *puVar3 = uVar4;
  puVar3[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 101ac6070; end: 101ac608b;  */

void FUN_101ac6070(long param_1,long param_2)

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



/* Entry: 101ac608c; end: 101ac60cb;  */

undefined8 FUN_101ac608c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101ac60cc; end: 101ac6283;  */

void FUN_101ac60cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *param_2;
  param_1[1] = 0xf000000000000000;
  *param_1 = 0;
  puVar4 = &UNK_11043e748;
  func_0x000107c613fc(&UNK_11043e748,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar10;
  *(undefined8 **)(puVar4 + 0x18) = param_1;
  puVar5 = &UNK_11043e770;
  func_0x000107c613fc(&UNK_11043e770,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101ac6284;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = (code *)0x101ac64cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x101ac64d4;
  puStack_78 = &UNK_11043e788;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(uVar10);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  pcStack_70 = FUN_101ac50b8;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_11043e7b0;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c754(uVar9);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x7b,0xb8,0x21,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac6280);
    (*pcVar3)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x7b,0xc3,0x19,1);
  if ((uVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac6284);
  (*pcVar3)();
}



/* Entry: 101ac6284; end: 101ac64bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac6284(ulong param_1,ulong param_2)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong *puVar10;
  
  if ((*(byte *)(*(long *)(unaff_x20 + 0x10) + _DAT_112df9120) & 1) != 0) {
    return;
  }
  puVar10 = *(ulong **)(unaff_x20 + 0x18);
  if (param_1 == 0) {
LAB_101ac6328:
    uVar9 = 0;
  }
  else {
    uVar6 = param_1;
    func_0x000107c45130();
    func_0x000107c61180();
    uVar9 = uVar6;
    func_0x000107c45034();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (uVar9 != 0) {
      uVar6 = uVar9;
      func_0x000107c60bb8();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      if (uVar6 != 0) {
        uVar9 = uVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(uVar6);
        goto LAB_101ac6330;
      }
      goto LAB_101ac6328;
    }
  }
  param_2 = 0xf000000000000000;
LAB_101ac6330:
  uVar6 = *puVar10;
  uVar1 = puVar10[1];
  *puVar10 = uVar9;
  puVar10[1] = param_2;
  func_0x0001000b44c0(uVar6,uVar1);
  uVar6 = *puVar10;
  uVar9 = puVar10[1];
  func_0x000100de78a0(uVar6,uVar9);
  func_0x0001000b44c0(uVar6,uVar9);
  if (uVar9 >> 0x3c < 0xf) {
    func_0x0001000b44c0(0,0xf000000000000000);
  }
  func_0x000107c602fc(0x34);
  func_0x000107c5fb78(0xd000000000000029,0x800000010eff6630);
  if ((param_1 == 0) || (func_0x000107c4b7b0(), (param_1 & 1) == 0)) {
    uVar8 = 0xe500000000000000;
    uVar4 = 0x65736c6166;
  }
  else {
    uVar8 = 0xe400000000000000;
    uVar4 = 0x65757274;
  }
  func_0x000107c5fb78(uVar4,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0x3d736574796220,0xe700000000000000);
  if (puVar10[1] >> 0x3c < 0xf) {
    uVar6 = *puVar10;
    uVar2 = (uint)(puVar10[1] >> 0x20);
    uVar7 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if ((uVar7 != 0) && (SBORROW4((int)(uVar6 >> 0x20),(int)uVar6))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac64bc);
        (*pcVar3)();
      }
    }
    else if ((uVar7 == 2) && (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101ac64a4);
      (*pcVar3)();
    }
  }
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(0xe000000000000000);
  return;
}



/* Entry: 101ac64bc; end: 101ac64d7;  */

void FUN_101ac64bc(long param_1,long param_2)

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



/* Entry: 101ac64d8; end: 101ac689f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac64d8(ulong param_1,ulong param_2,undefined *param_3)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 auStack_130 [7];
  undefined4 auStack_f8 [2];
  undefined8 auStack_f0 [6];
  undefined8 auStack_c0 [2];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined **ppuStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined *)((long)&puStack_b0 + lVar7);
  if ((param_1 != *(ulong *)(unaff_x20 + _DAT_112df91a0) ||
       param_2 != ((ulong *)(unaff_x20 + _DAT_112df91a0))[1]) &&
     (func_0x000107c605b8(), (param_1 & 1) == 0)) {
    return;
  }
  func_0x000107c5d9a4();
  func_0x000107c61180();
  puVar6 = PTR___sypN_11034f1a8;
  if (param_3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac68a0);
    (*pcVar1)();
  }
  puVar3 = param_3;
  puVar8 = PTR___ss11AnyHashableVN_11034e448;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_3);
  ppuVar4 = &PTR____CFConstantStringClassReference_110f9e8b8;
  func_0x000107c5faec();
  ppuStack_80 = ppuVar4;
  puStack_78 = puVar8;
  func_0x000107c61434(puVar8);
  puVar10 = PTR___sSSN_11034da80;
  func_0x000107c602d4(&puStack_b0,&ppuStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  if (*(long *)(puVar3 + 0x10) != 0) {
    func_0x000107c61434(puVar3);
    ppuVar4 = &puStack_b0;
    func_0x000100df95d0(ppuVar4);
    if (((ulong)puVar10 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar3 + 0x38) + (long)ppuVar4 * 0x20,&uStack_70);
      func_0x000107c6142c(puVar8);
      puVar8 = puVar3;
      goto LAB_101ac6638;
    }
    func_0x000107c6142c(puVar3);
  }
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_58 = 0;
  uStack_60 = 0;
LAB_101ac6638:
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar3);
  func_0x0001007bbff0(&puStack_b0);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_70);
  }
  else {
    pppuVar5 = &ppuStack_80;
    func_0x000107c6147c(pppuVar5,&uStack_70,puVar6 + 8,PTR___sSSN_11034da80,6);
    puVar6 = puStack_78;
    ppuVar4 = ppuStack_80;
    if (((ulong)pppuVar5 & 1) != 0) {
      puVar3 = PTR_PTR_1126b15c8;
      func_0x000107c610f8(PTR_PTR_1126b15c8);
      func_0x000107c5fadc(ppuVar4,puVar6);
      func_0x000107c6142c(puVar6);
      *(undefined1 *)((long)auStack_c0 + lVar7) = 0;
      *(undefined8 *)((long)auStack_f0 + lVar7 + 0x18) = 0;
      *(undefined8 *)((long)auStack_f0 + lVar7 + 0x10) = 0;
      *(undefined8 *)((long)auStack_f0 + lVar7 + 0x28) = 0;
      *(undefined8 *)((long)auStack_f0 + lVar7 + 0x20) = 0;
      *(undefined8 *)((long)auStack_f0 + lVar7 + 8) = 0;
      *(undefined8 *)((long)auStack_f0 + lVar7) = 0;
      *(undefined4 *)((long)auStack_f8 + lVar7) = 0;
      *(undefined8 *)((long)auStack_130 + lVar7 + 0x30) = 0;
      *(undefined8 *)((long)auStack_130 + lVar7 + 0x18) = 0;
      *(undefined8 *)((long)auStack_130 + lVar7 + 0x10) = 0;
      *(undefined8 *)((long)auStack_130 + lVar7 + 0x28) = 0;
      *(undefined8 *)((long)auStack_130 + lVar7 + 0x20) = 0;
      *(undefined8 *)((long)auStack_130 + lVar7 + 8) = 0;
      *(undefined8 *)((long)auStack_130 + lVar7) = 0;
      auStack_138[lVar7] = 0;
      *(undefined8 *)((long)&uStack_140 + lVar7) = 0;
      func_0x000107c49278(puVar3);
      func_0x000107c61170(ppuVar4);
      puVar6 = PTR_PTR_1126ae5c0;
      func_0x000107c61168(PTR_PTR_1126ae5c0);
      *(undefined8 *)((long)auStack_f0 + lVar7 + 0x28) = 0;
      *(undefined8 *)((long)auStack_f0 + lVar7 + 0x20) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar7 + 8) = 0;
      *(undefined8 *)((long)auStack_c0 + lVar7) = 0;
      func_0x000107c3d954();
      func_0x000107c61180();
      lVar7 = *(long *)(unaff_x20 + _DAT_112df9190);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar7 == 0) {
        func_0x000107c61170(puVar3);
      }
      else {
        func_0x000100c12528(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        (**(code **)(lVar11 + 0x68))
                  (puVar9,*(undefined4 *)
                           PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2)
        ;
        puVar8 = puVar9;
        func_0x000107c5fff0(puVar9);
        (**(code **)(lVar11 + 8))(puVar9,lVar2);
        puVar9 = &UNK_11043e868;
        func_0x000107c613fc(&UNK_11043e868,0x18,7);
        func_0x000107c61614(puVar9 + 0x10);
        pcStack_90 = FUN_101ac69d4;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_1013b7310;
        puStack_98 = &UNK_11043e880;
        ppuVar4 = &puStack_b0;
        puStack_88 = puVar9;
        func_0x000107c60bc4(ppuVar4);
        func_0x000107c61574(puStack_88);
        func_0x000107c3d6c4(lVar7);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar6);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c615e8(lVar7);
        puVar6 = puVar8;
      }
      func_0x000107c61170(puVar6);
    }
  }
  return;
}



/* Entry: 101ac68a0; end: 101ac6913; -[_TtC37SCAddFriendNotificationCategoryPlugin35AddFriendNotificationCategoryPlugin userDidAction:notification:] */

void FUN_101ac68a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_101ac64d8(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ac6914; end: 101ac6973; -[_TtC37SCAddFriendNotificationCategoryPlugin35AddFriendNotificationCategoryPlugin init] */

void FUN_101ac6914(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAddFriendNotificationCategoryPlugin.AddFriendNotificationCategoryPlugin",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac6940);
  (*pcVar1)();
}



/* Entry: 101ac6974; end: 101ac69d3; -[_TtC37SCAddFriendNotificationCategoryPlugin35AddFriendNotificationCategoryPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ac69a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ac69a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac6974(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112df9190));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112df9198 + 8))
  ;
  return;
}



/* Entry: 101ac69d4; end: 101ac6a13;  */

void FUN_101ac69d4(void)

{
  return;
}



/* Entry: 101ac6a14; end: 101ac6a7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac6a14(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101ac6e08();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112df91e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101ac6a80; end: 101ac6aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac6a80(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112df91e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ac6aec; end: 101ac6b4b; -[_TtC57StartupCompleteSnapcodeWidgetScopedFactoryServiceProvider45SCStartupCompleteSnapcodeWidgetScopedServices init] */

void FUN_101ac6aec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StartupCompleteSnapcodeWidgetScopedFactoryServiceProvider.SCStartupCompleteSnapcodeWidgetScopedServices"
                      ,0x67,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ac6b18);
  (*pcVar1)();
}



/* Entry: 101ac6b4c; end: 101ac6b5b; -[_TtC57StartupCompleteSnapcodeWidgetScopedFactoryServiceProvider45SCStartupCompleteSnapcodeWidgetScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac6b4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112df91e8));
  return;
}



/* Entry: 101ac6b5c; end: 101ac6bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ac6b5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11043ead8;
  func_0x000107c613fc(&UNK_11043ead8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101ac6ee4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101ac6bc8; end: 101ac6c63;  */

void FUN_101ac6bc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11043e9e8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11043e9e8;
  return;
}



/* Entry: 101ac6c64; end: 101ac6c9b;  */

void FUN_101ac6c64(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101ac6c9c; end: 101ac6ca3;  */

undefined8 FUN_101ac6c9c(void)

{
  return 0x1b;
}



/* Entry: 101ac6ca4; end: 101ac6dd7;  */

void FUN_101ac6ca4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11043eb00;
  func_0x000107c613fc(&UNK_11043eb00,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101ac6ebc;
  func_0x00010058fa64(FUN_101ac6ebc,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101ac6dd8; end: 101ac6e07;  */

undefined ** FUN_101ac6dd8(void)

{
  return &PTR_DAT_112f32a18;
}



/* Entry: 101ac6e08; end: 101ac6e27;  */

void FUN_101ac6e08(void)

{
  func_0x000107c61168(&PTR_PTR_1127f3a28);
  return;
}



/* Entry: 101ac6e28; end: 101ac6e77;  */

undefined1  [16] FUN_101ac6e28(void)

{
  return ZEXT816(0x11043ea38);
}



/* Entry: 101ac6e78; end: 101ac6ebb;  */

void FUN_101ac6e78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112df9250 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a88f8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112df9250 = puVar1;
  return;
}



/* Entry: 101ac6ebc; end: 101ac6ee3;  */

void FUN_101ac6ebc(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101ac6ee4; end: 101ac6ef7;  */

void FUN_101ac6ee4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


