/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f6e77c; end: 100f6e79f;  */

int FUN_100f6e77c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x78);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100f6e7a0; end: 100f6e7df;  */

void FUN_100f6e7a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9150f0;
  func_0x000107c61520(&UNK_10d9150f0,&UNK_11036eb40);
  puRam0000000112d4f210 = puVar1;
  return;
}



/* Entry: 100f6e7e0; end: 100f6e803;  */

void FUN_100f6e7e0(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 != 0) {
    func_0x000107c4a77c();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      goto LAB_100f6e0e8;
    }
  }
  lVar3 = 0;
  param_2 = 0;
LAB_100f6e0e8:
  plVar2 = *(long **)(*(long *)(lVar1 + 0x40) + 0x28);
  *plVar2 = lVar3;
  plVar2[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 100f6e804; end: 100f6e91b;  */

undefined * FUN_100f6e804(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f6e91c);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112d4f218;
    func_0x0001000285a8(0x112d4f218,&UNK_10d9151c0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106df058);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar2;
}



/* Entry: 100f6e91c; end: 100f6e97f;  */

void FUN_100f6e91c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100f6e980;
  plVar3[3] = lVar1;
  plVar3[4] = lVar2;
  plVar3[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f6d9dc,0,0);
  return;
}



/* Entry: 100f6e980; end: 100f6e9bb;  */

void FUN_100f6e980(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f6e9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f6e9bc; end: 100f6eb47;  */

int FUN_100f6e9bc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100f6ea38;
        goto LAB_100f6ea1c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100f6ea1c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100f6ea38:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100f6eb48; end: 100f6eb8b;  */

void FUN_100f6eb48(long param_1,long *param_2,long param_3)

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



/* Entry: 100f6eb8c; end: 100f6eb8f;  */

void FUN_100f6eb8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9150c8;
  func_0x000107c61520(&UNK_10d9150c8,&UNK_11036eb40);
  puRam0000000112d4f238 = puVar1;
  return;
}



/* Entry: 100f6eb90; end: 100f6ebcf;  */

void FUN_100f6eb90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9150c8;
  func_0x000107c61520(&UNK_10d9150c8,&UNK_11036eb40);
  puRam0000000112d4f238 = puVar1;
  return;
}



/* Entry: 100f6ebd0; end: 100f6ebeb;  */

long FUN_100f6ebd0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100f6ebec; end: 100f6edb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_100f6ebec(undefined8 param_1,double param_2)

{
  double *pdVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [48];
  
  pdVar1 = (double *)(unaff_x20 + _DAT_112d4f310);
  if (*(char *)(pdVar1 + 2) == '\x01') {
    puVar2 = (ulong *)(*(long *)(unaff_x20 + _DAT_112d4f250) + _DAT_112ff2278);
    dVar8 = 0.0;
    if ((char)puVar2[1] == '\x01') {
      uVar7 = *puVar2;
      uVar6 = uVar7;
      func_0x000107c61174();
      func_0x000107c5ce80();
      func_0x000107c61180();
      uVar4 = 0;
      FUN_100f7416c(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
      uVar5 = uVar6;
      func_0x000107c5fc54(uVar6,uVar4);
      func_0x000107c61170(uVar6);
      if (uVar5 >> 0x3e == 0) {
        uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar6 = uVar5;
        }
        func_0x000107c60480();
      }
      if (uVar6 == 0) {
        FUN_100f72e4c(uVar7,1);
        func_0x000107c6142c(uVar5);
        param_2 = 0.0;
        dVar8 = 0.0;
      }
      else {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(long *)((uVar5 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100f6edb8);
            (*pcVar3)();
          }
          uVar4 = *(undefined8 *)(uVar5 + 0x20);
          func_0x000107c61174(uVar4);
        }
        else {
          uVar4 = 0;
          func_0x000100f95fe8(0,uVar5);
        }
        func_0x000107c6142c(uVar5);
        func_0x000107c4d49c(uVar4);
        func_0x000107c4ecc4(auStack_70,uVar4);
        func_0x000107c609f8(auStack_70);
        FUN_100f72e4c(uVar7,1);
        func_0x000107c61170(uVar4);
        dVar8 = ABS(dVar8);
        param_2 = ABS(param_2);
      }
    }
    else {
      param_2 = 0.0;
    }
    *pdVar1 = dVar8;
    pdVar1[1] = param_2;
    *(undefined1 *)(pdVar1 + 2) = 0;
  }
  else {
    dVar8 = *pdVar1;
    param_2 = pdVar1[1];
  }
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = dVar8;
  return auVar9;
}



/* Entry: 100f6edb8; end: 100f6f34b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100f6edb8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  func_0x000107c614f0();
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f240);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f248);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f278) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d4f290) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f298);
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 3) = 1;
  lVar8 = _DAT_112d4f2a0;
  puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar8) = puVar14;
  lVar8 = _DAT_112d4f2a8;
  puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar8) = puVar14;
  lVar8 = _DAT_112d4f2b0;
  puVar14 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar8) = puVar14;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f2b8) = 0;
  *(undefined **)(unaff_x20 + _DAT_112d4f2c0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f2c8) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f2d0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f2d8) = 0;
  lVar8 = _DAT_112d4f2e0;
  puVar14 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar8) = puVar14;
  lVar8 = _DAT_112d4f2e8;
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar6 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  puVar12 = puVar14;
  func_0x000107c49470();
  func_0x000107c61170(puVar14);
  *(undefined **)(unaff_x20 + lVar8) = puVar6;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f2f0);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  lVar8 = _DAT_112d4f2f8;
  puVar14 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar8) = puVar14;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f300);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f308);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 4) = 1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f310);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(long *)(unaff_x20 + _DAT_112d4f250) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f258) = param_3;
  *(double *)(unaff_x20 + _DAT_112d4f260) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f268) = param_5;
  if (*(char *)((undefined8 *)(param_2 + _DAT_112ff2278) + 1) == '\x01') {
    if (param_4 != 0) {
      uVar13 = *(undefined8 *)(param_2 + _DAT_112ff2278);
      func_0x000107c615f0(param_3);
      func_0x000107c6157c(param_5);
      func_0x000107c61174(param_2);
      uVar11 = 1;
      func_0x000100f74158(uVar13,1);
      func_0x000107c42378(&uStack_a8,uVar13);
      dVar16 = dStack_a0;
      func_0x000107c60a3c(&uStack_a8);
      if (dVar16 <= param_1) {
        param_1 = dVar16;
      }
      if ((0x7fffffffffffffff < (ulong)dVar16 ||
          0x3fe < (long)ABS(dVar16) + 0xfff0000000000000U >> 0x35) &&
          0xffffffffffffe < (long)dVar16 - 1U) {
        param_1 = 0.0;
      }
      uVar3 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uVar4 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      uVar15 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uVar7 = 600;
      func_0x000107c600d0(param_1,600);
      func_0x000107c5ff30(&uStack_a8,uVar3,uVar4,uVar15,uVar7,uVar11,puVar12);
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f288);
      puVar2[1] = dStack_a0;
      *puVar2 = uStack_a8;
      puVar2[3] = uStack_90;
      puVar2[2] = uStack_98;
      puVar2[5] = uStack_80;
      puVar2[4] = uStack_88;
      puVar14 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      func_0x000107c610f8(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      func_0x000107c457a0();
      uVar11 = 0xd00000000000001d;
      func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1cd00);
      lVar8 = param_4;
      func_0x000107c4f7ec();
      func_0x000107c61180();
      func_0x000107c61170(uVar11);
      *(long *)(unaff_x20 + _DAT_112d4f270) = lVar8;
      puVar6 = PTR__OBJC_CLASS___AVPlayerLayer_1126c1f00;
      func_0x000107c61168();
      func_0x000107c4e998();
      func_0x000107c61180();
      *(undefined **)(unaff_x20 + _DAT_112d4f280) = puVar6;
      puVar9 = &stack0xffffffffffffff48;
      func_0x000107c61154(puVar9,PTR_s_initWithNibName_bundle__1125e9850,0,0);
      if (param_1 <= 0.0) {
        FUN_100f72e4c(uVar13,1);
        func_0x000107c615e8(param_4);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(param_3);
        func_0x000107c61574(param_5);
      }
      else {
        uVar11 = *(undefined8 *)(puVar9 + _DAT_112d4f270);
        puVar6 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
        func_0x000107c610f8();
        puVar10 = puVar9;
        func_0x000107c61174();
        func_0x000107c61174(uVar11);
        func_0x000107c47f50();
        func_0x000107c61170(uVar11);
        func_0x000107c61170(puVar14);
        FUN_100f72e4c(uVar13,1);
        func_0x000107c615e8(param_4);
        func_0x000107c61170(param_2);
        func_0x000107c615e8(param_3);
        func_0x000107c61574(param_5);
        puVar14 = *(undefined **)(puVar10 + _DAT_112d4f278);
        *(undefined **)(puVar10 + _DAT_112d4f278) = puVar6;
        func_0x000107c61170(puVar10);
      }
      func_0x000107c61170(puVar14);
      return puVar9;
    }
    pcVar1 = "AnimatedStickerEditingViewController requires an SCPlayerProviding";
    uVar13 = 0x5d;
    uVar11 = 0xd000000000000042;
  }
  else {
    pcVar1 = 
    "AnimatedStickerEditingViewController requires a sourceVideoAsset on ModularStickerCutoutScope";
    uVar13 = 0x5a;
    uVar11 = 0xd00000000000005d;
  }
  func_0x000107c60450("Fatal error",0xb,2,uVar11,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                      "ModularStickerCutout/AnimatedStickerEditingViewController.swift",0x3f,2,
                      uVar13,0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100f6f34c);
  (*pcVar5)();
}



/* Entry: 100f6f34c; end: 100f6f373; -[_TtC20ModularStickerCutout36AnimatedStickerEditingViewController initWithCoder:] */

void FUN_100f6f34c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100f73e30();
  return;
}



/* Entry: 100f6f374; end: 100f6f4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6f374(void)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_d8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112d4f2b8) != 0) {
    func_0x000107c3f480();
  }
  lVar1 = _DAT_112d4f2f0;
  func_0x000107c61428(unaff_x20 + _DAT_112d4f2f0,auStack_88,0,0);
  func_0x000100672b50(unaff_x20 + lVar1,&uStack_b0);
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_b0);
  }
  else {
    func_0x000100102924(&uStack_b0,auStack_70);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d4f270);
    puVar2 = auStack_70;
    func_0x0001006732c8(puVar2,uStack_58);
    func_0x000107c61174(uVar3);
    func_0x000107c605b0(puVar2,uStack_58);
    func_0x000107c50034(uVar3);
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(puVar2);
    func_0x000100183ab8(auStack_70);
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
    func_0x000107c61428(unaff_x20 + lVar1,auStack_d8,0x21,0);
    FUN_100f72e88(&uStack_b0,unaff_x20 + lVar1);
    func_0x000107c614a8(auStack_d8);
  }
  lVar1 = _DAT_112d4f270;
  func_0x000107c4e454(*(undefined8 *)(unaff_x20 + _DAT_112d4f270));
  if (*(long *)(unaff_x20 + _DAT_112d4f278) != 0) {
    func_0x000107c41ef0();
  }
  func_0x000107c4fe74(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61154(&stack0xffffffffffffff40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f6f4dc; end: 100f6f4ff; -[_TtC20ModularStickerCutout36AnimatedStickerEditingViewController dealloc] */

void FUN_100f6f4dc(void)

{
  func_0x000107c61174();
  FUN_100f6f374();
  return;
}



/* Entry: 100f6f500; end: 100f6f62f; -[_TtC20ModularStickerCutout36AnimatedStickerEditingViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f6f544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f574: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f5b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f5d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f5f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f6f5d8) */
/* WARNING: Removing unreachable block (ram,0x000100f6f5b8) */
/* WARNING: Removing unreachable block (ram,0x000100f6f598) */
/* WARNING: Removing unreachable block (ram,0x000100f6f578) */
/* WARNING: Removing unreachable block (ram,0x000100f6f548) */
/* WARNING: Removing unreachable block (ram,0x000100f6f5f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6f500(long param_1)

{
  FUN_100c9c844(*(undefined8 *)(param_1 + _DAT_112d4f240),
                ((undefined8 *)(param_1 + _DAT_112d4f240))[1]);
  FUN_100c9c844(*(undefined8 *)(param_1 + _DAT_112d4f248),
                ((undefined8 *)(param_1 + _DAT_112d4f248))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4f250));
  return;
}



/* Entry: 100f6f630; end: 100f6f6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6f630(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3ea80();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    FUN_100f6f6e8();
    func_0x000100f6fa5c();
    FUN_100f6fd84();
    func_0x000100f7061c();
    func_0x000107c4e868(*(undefined8 *)(unaff_x20 + _DAT_112d4f270));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f6f6e8);
  (*pcVar1)();
}



/* Entry: 100f6f6e8; end: 100f6fd83;  */

/* WARNING: Possible PIC construction at 0x000100f6f740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f83c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f85c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f91c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f9a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f6f9e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f6f9c4) */
/* WARNING: Removing unreachable block (ram,0x000100f6f9a8) */
/* WARNING: Removing unreachable block (ram,0x000100f6f940) */
/* WARNING: Removing unreachable block (ram,0x000100f6fa58) */
/* WARNING: Removing unreachable block (ram,0x000100f6f974) */
/* WARNING: Removing unreachable block (ram,0x000100f6f920) */
/* WARNING: Removing unreachable block (ram,0x000100f6f8d0) */
/* WARNING: Removing unreachable block (ram,0x000100f6fa54) */
/* WARNING: Removing unreachable block (ram,0x000100f6f904) */
/* WARNING: Removing unreachable block (ram,0x000100f6f8b0) */
/* WARNING: Removing unreachable block (ram,0x000100f6f860) */
/* WARNING: Removing unreachable block (ram,0x000100f6fa50) */
/* WARNING: Removing unreachable block (ram,0x000100f6f894) */
/* WARNING: Removing unreachable block (ram,0x000100f6f840) */
/* WARNING: Removing unreachable block (ram,0x000100f6f824) */
/* WARNING: Removing unreachable block (ram,0x000100f6f7b0) */
/* WARNING: Removing unreachable block (ram,0x000100f6fa4c) */
/* WARNING: Removing unreachable block (ram,0x000100f6f808) */
/* WARNING: Removing unreachable block (ram,0x000100f6f76c) */
/* WARNING: Removing unreachable block (ram,0x000100f6f744) */
/* WARNING: Removing unreachable block (ram,0x000100f6fa48) */
/* WARNING: Removing unreachable block (ram,0x000100f6f758) */
/* WARNING: Removing unreachable block (ram,0x000100f6f9ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6f6e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d4f2a0);
  func_0x000107c5a050(uVar2,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c52b50(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100f6fd84; end: 100f70843;  */

/* WARNING: Possible PIC construction at 0x000100f705d0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f6fd84(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  double dVar14;
  undefined *puStack_a0;
  double dStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d4f258);
  if (lVar2 != 0) {
    func_0x000107c509b4();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f250) + _DAT_112ff2278);
      if (*(char *)(puVar1 + 1) == '\x01') {
        uVar3 = *puVar1;
        func_0x000107c61174();
        func_0x000107c42378(&puStack_a0);
        dVar14 = dStack_98;
        func_0x000107c60a3c(&puStack_a0);
        puVar4 = PTR_PTR_1126a60f0;
        func_0x000107c610f8(PTR_PTR_1126a60f0);
        func_0x000107c453e4();
        puVar7 = &UNK_11036eca8;
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        puVar9 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_80 = FUN_100f72ed8;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = FUN_100f70bd8;
        puStack_88 = &UNK_11036ed10;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56f30(puVar4);
        func_0x000107c60bd0(ppuVar6);
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_80 = (code *)0x100f72f08;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = FUN_100f70bd8;
        puStack_88 = &UNK_11036ed38;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56f34(puVar4);
        func_0x000107c60bd0(ppuVar6);
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_80 = (code *)0x100f72f38;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = FUN_100f71478;
        puStack_88 = &UNK_11036ed60;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56d78(puVar4);
        func_0x000107c60bd0(ppuVar6);
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_80 = FUN_100f72f68;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = FUN_100f7177c;
        puStack_88 = &UNK_11036ed88;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56e08(puVar4);
        func_0x000107c60bd0(ppuVar6);
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_80 = FUN_100f72f70;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = (code *)&UNK_1000f6b44;
        puStack_88 = &UNK_11036edb0;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56e04(puVar4);
        func_0x000107c60bd0(ppuVar6);
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_80 = (code *)0x100f72f98;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = (code *)&UNK_1000f6b44;
        puStack_88 = &UNK_11036edd8;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56cb8(puVar4);
        func_0x000107c60bd0(ppuVar6);
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_80 = (code *)0x100f72fc0;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = (code *)&UNK_1000f6b44;
        puStack_88 = &UNK_11036ee00;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56c68(puVar4);
        func_0x000107c60bd0(ppuVar6);
        puVar5 = puVar7;
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_80 = (code *)0x100f72fe8;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = FUN_100f71478;
        puStack_88 = &UNK_11036ee28;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56cdc(puVar4);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c613fc(&UNK_11036eca8,0x18,7);
        func_0x000107c61614(puVar7 + 0x10);
        pcStack_80 = (code *)0x100f73018;
        puStack_a0 = puVar9;
        dStack_98 = 5.47077039858234e-315;
        pcStack_90 = (code *)&UNK_1000f6b44;
        puStack_88 = &UNK_11036ee50;
        ppuVar6 = &puStack_a0;
        puStack_78 = puVar7;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_78);
        func_0x000107c56cd8(puVar4);
        func_0x000107c60bd0(ppuVar6);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4f2b0);
        func_0x000107c5cb24();
        func_0x000107c61180();
        func_0x000107c549c0(puVar4);
        func_0x000107c61170(uVar8);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4f2f8);
        func_0x000107c5cb24(uVar8);
        func_0x000107c61180();
        func_0x000107c5a500(puVar4);
        func_0x000107c61170(uVar8);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4f2e0);
        func_0x000107c5cb24(uVar8);
        func_0x000107c61180();
        func_0x000107c57520(puVar4);
        func_0x000107c61170(uVar8);
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4f2e8);
        func_0x000107c5cb24(uVar8);
        func_0x000107c61180();
        func_0x000107c574e4(puVar4);
        func_0x000107c61170(uVar8);
        puVar9 = PTR_PTR_1126a60f8;
        func_0x000107c610f8(PTR_PTR_1126a60f8);
        func_0x000107c453e4();
        func_0x000107c54368(dVar14 * 1000.0);
        func_0x000107c5637c(*(double *)(unaff_x20 + _DAT_112d4f260) * 1000.0,puVar9);
        func_0x0001000d224c(&puStack_a0);
        puVar7 = puStack_a0;
        if (puStack_a0 != (undefined *)0x0) {
          puVar5 = puStack_a0;
          func_0x000107c41050(puStack_a0);
          func_0x000107c61180();
          func_0x000107c61170(puVar7);
          func_0x000107c4a564(puVar5);
          func_0x000107c61170(puVar5);
        }
        func_0x000107c54ff0(puVar9);
        puVar7 = PTR_PTR_1126a6100;
        func_0x000107c610f8();
        func_0x000107c49520();
        func_0x000107c61180();
        func_0x000107c5a050();
        uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d4f2a8);
        func_0x000107c3d89c(uVar13);
        puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168();
        puVar10 = puVar5;
        func_0x0001008478a8();
        func_0x000107c613fc();
        *(undefined8 *)(puVar10 + 0x18) = 9;
        *(undefined8 *)(puVar10 + 0x10) = 4;
        puVar11 = puVar7;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        uVar8 = uVar13;
        func_0x000107c5cbe4(uVar13);
        func_0x000107c61180();
        puVar12 = puVar11;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(uVar8);
        *(undefined **)(puVar10 + 0x20) = puVar12;
        puVar11 = puVar7;
        func_0x000107c4acb0();
        func_0x000107c61180();
        uVar8 = uVar13;
        func_0x000107c4acb0(uVar13);
        func_0x000107c61180();
        puVar12 = puVar11;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(uVar8);
        *(undefined **)(puVar10 + 0x28) = puVar12;
        puVar11 = puVar7;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        uVar8 = uVar13;
        func_0x000107c5ce8c(uVar13);
        func_0x000107c61180();
        puVar12 = puVar11;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(uVar8);
        *(undefined **)(puVar10 + 0x30) = puVar12;
        puVar11 = puVar7;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        func_0x000107c3ec1c(uVar13);
        func_0x000107c61180();
        puVar12 = puVar11;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(uVar13);
        *(undefined **)(puVar10 + 0x38) = puVar12;
        uVar8 = 0;
        FUN_100f7416c(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        puVar11 = puVar10;
        func_0x000107c5fc48(puVar10,uVar8);
        func_0x000107c61574(puVar10);
        func_0x000107c3d048(puVar5);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar11);
        FUN_100f72e4c(uVar3,1);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
      return;
    }
  }
  return;
}



/* Entry: 100f70844; end: 100f7086b; -[_TtC20ModularStickerCutout36AnimatedStickerEditingViewController viewDidLoad] */

void FUN_100f70844(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f6f630();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f7086c; end: 100f709df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f7086c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x20;
  double dVar4;
  double dVar5;
  double dVar6;
  
  FUN_100f6ebec();
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112d4f2a0);
  dVar4 = param_1;
  dVar6 = param_2;
  func_0x000107c3ec60();
  if ((((0.0 < param_1) && (0.0 < param_2)) && (dVar5 = dVar4, func_0x000107c609cc(), 0.0 < dVar5))
     && (dVar5 = dVar4, func_0x000107c609b0(dVar4,dVar6,param_3,param_4), 0.0 < dVar5)) {
    func_0x000107c60718();
    pdVar1 = (double *)(unaff_x20 + _DAT_112d4f300);
    func_0x000107c609ac();
    if ((uVar2 & 1) == 0) {
      *pdVar1 = param_1;
      pdVar1[1] = param_2;
      pdVar1[2] = dVar4;
      pdVar1[3] = dVar6;
      puVar3 = PTR_PTR_1126a60d8;
      func_0x000107c610f8(PTR_PTR_1126a60d8);
      func_0x000107c453e4();
      func_0x000107c5a7f0(param_1);
      func_0x000107c5a804(param_2,puVar3);
      func_0x000107c609cc(param_1,param_2,dVar4,dVar6);
      func_0x000107c5a724(puVar3);
      func_0x000107c609b0(param_1,param_2,dVar4,dVar6);
      func_0x000107c550b8(puVar3);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112d4f2f8),param_6,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
  }
  return;
}



/* Entry: 100f709e0; end: 100f70a5f; -[_TtC20ModularStickerCutout36AnimatedStickerEditingViewController viewDidLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f709e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLayoutSubviews_112684cc8;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d4f280);
  func_0x000107c3ec60(*(undefined8 *)(param_1 + _DAT_112d4f2a0));
  func_0x000107c54b80(uVar3);
  FUN_100f7086c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100f70a60; end: 100f70bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f70a60(double param_1,double param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar5 = auStack_b8;
  uVar7 = 0;
  func_0x000107c61428(param_3 + 0x10,puVar5,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar3 = 600;
    func_0x000107c600d0(param_1 / 1000.0);
    uVar4 = 600;
    puVar6 = puVar5;
    uVar8 = uVar7;
    func_0x000107c600d0(param_2 / 1000.0,600);
    func_0x000107c5ff30(&uStack_a0,uVar3,puVar5,uVar7,uVar4,puVar6,uVar8);
    puVar1 = (undefined8 *)(param_3 + _DAT_112d4f288);
    puVar1[3] = uStack_88;
    puVar1[2] = uStack_90;
    puVar1[5] = uStack_78;
    puVar1[4] = uStack_80;
    puVar1[1] = uStack_98;
    *puVar1 = uStack_a0;
    puVar1 = (undefined8 *)(param_3 + _DAT_112d4f298);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    lVar2 = _DAT_112d4f270;
    uVar7 = *(undefined8 *)(param_3 + _DAT_112d4f270);
    func_0x000107c40f5c(uVar7);
    func_0x000107c61180();
    func_0x000107c3f4c8();
    func_0x000107c61170(uVar7);
    func_0x000107c51be8(*(undefined8 *)(param_3 + lVar2));
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100f70bd8; end: 100f70c1b;  */

void FUN_100f70bd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_3 + 0x20);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100f70c1c; end: 100f70cd7;  */

void FUN_100f70c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c613fc(param_4,0x28,7);
  *(undefined8 *)(param_4 + 0x10) = param_3;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  uStack_58 = param_6;
  uStack_50 = param_5;
  lStack_48 = param_4;
  func_0x000107c60bc4(&puStack_70);
  lVar1 = lStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(lVar1);
  func_0x0001000d76cc("AnimatedStickerEditing",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f70cd8; end: 100f70d43;  */

void FUN_100f70cd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_100f70d44(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 100f70d44; end: 100f70f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f70d44(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f250) + _DAT_112ff2278);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar9 = *puVar1;
    func_0x000107c61174(uVar9);
    uVar4 = 600;
    func_0x000107c600d0(param_1 / 1000.0);
    uVar5 = 600;
    uVar8 = param_4;
    uVar10 = param_5;
    func_0x000107c600d0(param_2 / 1000.0,600);
    func_0x000107c5ff30(&uStack_b8,uVar4,param_4,param_5,uVar5,uVar8,uVar10);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f288);
    puVar1[3] = uStack_a0;
    puVar1[2] = uStack_a8;
    puVar1[5] = uStack_90;
    puVar1[4] = uStack_98;
    puVar1[1] = uStack_b0;
    *puVar1 = uStack_b8;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f298);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 1;
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d4f270);
    uVar8 = uVar10;
    func_0x000107c40f5c(uVar10);
    func_0x000107c61180();
    func_0x000107c3f4c8();
    func_0x000107c61170(uVar8);
    func_0x000107c51be8(uVar10);
    lVar3 = _DAT_112d4f278;
    bVar2 = *(byte *)(unaff_x20 + _DAT_112d4f290);
    if (*(long *)(unaff_x20 + _DAT_112d4f278) != 0) {
      func_0x000107c41ef0();
    }
    func_0x000107c4fe74(uVar10);
    puVar6 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
    func_0x000107c610f8(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
    func_0x000107c457a0();
    puVar7 = PTR__OBJC_CLASS___AVPlayerLooper_1126dbce0;
    func_0x000107c610f8();
    func_0x000107c47f50();
    uVar8 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puVar7;
    func_0x000107c61170(uVar8);
    if ((bVar2 & 1) == 0) {
      func_0x000107c4e868(uVar10);
    }
    FUN_100f72e4c(uVar9,1);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 100f70f74; end: 100f710bb;  */

void FUN_100f70f74(double param_1,double param_2,double param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f710a4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f710a8);
      (*pcVar1)();
    }
    if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f710ac);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f710b0);
      (*pcVar1)();
    }
    if (((0x7fefffffffffffff < (ulong)ABS(param_1)) || (0x7fefffffffffffff < (ulong)ABS(param_2)))
       || (0x7fefffffffffffff < (ulong)ABS(param_3))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f710b4);
      (*pcVar1)();
    }
    if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f710b8);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f710bc);
      (*pcVar1)();
    }
    FUN_100f710bc(param_4,(long)param_1,(long)param_2,(long)param_3);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 100f710bc; end: 100f71477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f710bc(double param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_c0 [8];
  undefined *apuStack_b8 [3];
  undefined1 auStack_a0 [24];
  ulong uStack_88;
  double dStack_80;
  undefined8 uStack_78;
  
  puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112d4f250) + _DAT_112ff2278);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uVar13 = *puVar1;
    uVar5 = uVar13;
    func_0x000107c61174(uVar13);
    func_0x000107c42378(&uStack_88);
    dVar14 = dStack_80;
    func_0x000107c60a3c(&uStack_88);
    func_0x000107c42378(&uStack_88,uVar5);
    func_0x000107c600cc(uStack_88,dStack_80,uStack_78);
    lVar10 = _DAT_112d4f2d8;
    lVar11 = _DAT_112d4f2b8;
    if (((((uStack_88 & 1) != 0) && ((ulong)ABS(dVar14) < 0x7ff0000000000000)) && (0.0 < dVar14)) &&
       (((ulong)ABS(param_1) < 0x7ff0000000000000 && (0.0 < param_1)))) {
      dVar15 = (double)(long)((dVar14 * 1000.0) / param_1);
      if (0x7fe < (ulong)dVar15 >> 0x34) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f7146c);
        (*pcVar4)();
      }
      if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f71470);
        (*pcVar4)();
      }
      if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f71474);
        (*pcVar4)();
      }
      uVar8 = (ulong)dVar15;
      if ((long)uVar8 <= (long)param_3) {
        param_3 = uVar8;
      }
      param_3 = param_3 & ((long)param_3 >> 0x3f ^ 0xffffffffffffffffU);
      if (SCARRY8(param_3,0x20)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100f71478);
        (*pcVar4)();
      }
      uVar3 = param_3 + 0x20;
      if ((long)uVar8 <= (long)(param_3 + 0x20)) {
        uVar3 = uVar8;
      }
      if ((long)param_4 <= (long)uVar3) {
        uVar3 = param_4;
      }
      if ((long)param_3 < (long)uVar3) {
        if (*(double *)(unaff_x20 + _DAT_112d4f2d8) != param_1) {
          uVar6 = 0;
          if (*(long *)(unaff_x20 + _DAT_112d4f2b8) != 0) {
            func_0x000107c3f480();
            uVar6 = *(undefined8 *)(unaff_x20 + lVar11);
          }
          *(undefined8 *)(unaff_x20 + lVar11) = 0;
          func_0x000107c61170(uVar6);
          lVar11 = _DAT_112d4f2c0;
          func_0x000107c61428(unaff_x20 + _DAT_112d4f2c0,&uStack_88,1,0);
          uVar6 = *(undefined8 *)(unaff_x20 + lVar11);
          *(undefined **)(unaff_x20 + lVar11) = PTR___swiftEmptySetSingleton_11034f1d8;
          func_0x000107c6142c(uVar6);
        }
        *(undefined8 *)(unaff_x20 + _DAT_112d4f2c8) = param_2;
        puVar2 = (ulong *)(unaff_x20 + _DAT_112d4f2d0);
        *puVar2 = param_3;
        puVar2[1] = uVar3;
        *(double *)(unaff_x20 + lVar10) = param_1;
        lVar11 = _DAT_112d4f2c0;
        func_0x000107c61428(unaff_x20 + _DAT_112d4f2c0,auStack_a0,0,0);
        puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          if (uVar3 <= param_3) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100f71468);
            (*pcVar4)();
          }
          lVar10 = *(long *)(unaff_x20 + lVar11);
          if (*(long *)(lVar10 + 0x10) != 0) {
            uVar8 = *(ulong *)(lVar10 + 0x28);
            func_0x000107c60688(uVar8,param_3);
            uVar9 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
            uVar8 = uVar8 & (uVar9 ^ 0xffffffffffffffff);
            if ((*(ulong *)(lVar10 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
              do {
                if (*(ulong *)(*(long *)(lVar10 + 0x30) + uVar8 * 8) == param_3) goto LAB_100f712fc;
                uVar8 = uVar8 + 1 & ~uVar9;
              } while ((*(ulong *)(lVar10 + 0x38 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
            }
          }
          puVar7 = puVar12;
          func_0x000107c61558();
          apuStack_b8[0] = puVar12;
          if (((ulong)puVar7 & 1) == 0) {
            func_0x000100dd4260(0,*(long *)(puVar12 + 0x10) + 1,1);
          }
          uVar8 = *(ulong *)(apuStack_b8[0] + 0x10);
          if (*(ulong *)(apuStack_b8[0] + 0x18) >> 1 <= uVar8) {
            func_0x000100dd4260(1 < *(ulong *)(apuStack_b8[0] + 0x18),uVar8 + 1,1);
          }
          *(ulong *)(apuStack_b8[0] + 0x10) = uVar8 + 1;
          *(ulong *)(apuStack_b8[0] + uVar8 * 8 + 0x20) = param_3;
          puVar12 = apuStack_b8[0];
LAB_100f712fc:
          param_3 = param_3 + 1;
        } while (param_3 != uVar3);
        lVar11 = *(long *)(puVar12 + 0x10);
        if (lVar11 != 0) {
          func_0x000107c61428(unaff_x20 + _DAT_112d4f2c0,apuStack_b8,0x21,0);
          lVar10 = 0x20;
          do {
            FUN_100f73104(auStack_c0,*(undefined8 *)(puVar12 + lVar10));
            lVar10 = lVar10 + 8;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
          func_0x000107c614a8(apuStack_b8);
          FUN_100f71eb0(param_1,dVar14,uVar5,puVar12);
        }
        func_0x000107c61574(puVar12);
      }
    }
    FUN_100f72e4c(uVar13,1);
  }
  return;
}



/* Entry: 100f71478; end: 100f714d3;  */

void FUN_100f71478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_5 + 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100f714d4; end: 100f71597;  */

void FUN_100f714d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11036efa0;
  func_0x000107c613fc(&UNK_11036efa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  uStack_50 = 0x100f730d8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11036efb8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("AnimatedStickerEditing",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f71598; end: 100f7177b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f71598(double param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  puVar4 = auStack_78;
  uVar5 = 0;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((*(char *)(param_2 + _DAT_112d4f290) == '\x01') &&
       (puVar1 = (undefined8 *)(*(long *)(param_2 + _DAT_112d4f250) + _DAT_112ff2278),
       *(char *)(puVar1 + 1) == '\x01')) {
      uVar6 = *puVar1;
      func_0x000107c61174(uVar6);
      func_0x000107c42378(&uStack_90);
      puVar8 = puStack_88;
      func_0x000107c60a3c(&uStack_90);
      if (-1 < (long)puVar8 &&
          ((ulong)puVar8 & 0x7fffffffffffffff) + 0xfff0000000000000 >> 0x35 < 0x3ff ||
          puVar8 + -1 < (undefined1 *)0xfffffffffffff) {
        puVar9 = (undefined1 *)(param_1 / 1000.0);
        if ((double)puVar8 <= param_1 / 1000.0) {
          puVar9 = puVar8;
        }
        if ((double)puVar9 < 0.0) {
          puVar9 = (undefined1 *)0x0;
        }
        uVar2 = 600;
        func_0x000107c600d0(puVar9);
        puVar1 = (undefined8 *)(param_2 + _DAT_112d4f298);
        *puVar1 = uVar2;
        puVar1[1] = puVar4;
        puVar1[2] = uVar5;
        *(undefined1 *)(puVar1 + 3) = 0;
        uVar7 = *(undefined8 *)(param_2 + _DAT_112d4f270);
        uVar3 = uVar7;
        func_0x000107c40f5c(uVar7);
        func_0x000107c61180();
        func_0x000107c3f4c8();
        func_0x000107c61170(uVar3);
        uStack_90 = uVar2;
        puStack_88 = puVar4;
        uStack_80 = uVar5;
        func_0x000107c51be8(uVar7);
      }
      FUN_100f72e4c(uVar6,1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100f7177c; end: 100f717b7;  */

void FUN_100f7177c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 100f717b8; end: 100f719ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f717b8(void)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  bVar2 = *(byte *)(unaff_x20 + _DAT_112d4f290);
  *(byte *)(unaff_x20 + _DAT_112d4f290) = bVar2 ^ 1;
  if ((bVar2 & 1) == 0) {
    func_0x000107c4e454(*(undefined8 *)(unaff_x20 + _DAT_112d4f270));
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f298);
    if (*(char *)(puVar1 + 3) == '\x01') {
      func_0x000107c4e868(*(undefined8 *)(unaff_x20 + _DAT_112d4f270));
    }
    else {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 3) = 1;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d4f270);
      uVar6 = uVar3;
      func_0x000107c40f5c();
      func_0x000107c61180();
      func_0x000107c3f4c8();
      func_0x000107c61170(uVar6);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f288);
      puVar7 = (undefined *)*puVar1;
      uVar6 = puVar1[2];
      puVar4 = &UNK_11036eca8;
      func_0x000107c613fc(&UNK_11036eca8,0x18,7);
      uVar8 = puVar1[1];
      func_0x000107c61614(puVar4 + 0x10);
      pcStack_80 = FUN_100f730d0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_100ab47f8;
      puStack_88 = &UNK_11036ef68;
      ppuVar5 = &puStack_a0;
      puStack_78 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_78);
      puStack_a0 = puVar7;
      uStack_98 = uVar8;
      puStack_90 = (undefined *)uVar6;
      func_0x000107c51bec(uVar3);
      func_0x000107c60bd0(ppuVar5);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d4f2e8);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4d664(uVar6);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100f719ac; end: 100f71a03;  */

void FUN_100f719ac(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f71a04; end: 100f71bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f71a04(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d4f270);
  func_0x000107c4e454(uVar7);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f240);
  pcVar5 = (code *)*puVar1;
  if (*(char *)(unaff_x20 + _DAT_112d4f290) == '\x01') {
    if (pcVar5 == (code *)0x0) {
      return;
    }
    uVar6 = puVar1[1];
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f288);
    uVar13 = puVar1[1];
    uVar10 = *puVar1;
    uVar18 = puVar1[3];
    uVar16 = puVar1[2];
    uVar14 = puVar1[5];
    uVar11 = puVar1[4];
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f308);
    uVar15 = puVar1[1];
    uVar12 = *puVar1;
    uVar19 = puVar1[3];
    uVar17 = puVar1[2];
    uVar4 = *(undefined1 *)(puVar1 + 4);
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f298);
    if (*(char *)(puVar1 + 3) == '\x01') {
      func_0x000107c6157c(uVar6);
      func_0x000107c41014(&uStack_e0,uVar7);
      uVar7 = uStack_e0;
      uVar8 = uStack_d0;
      uVar9 = (undefined4)uStack_d8;
      uVar3 = uStack_d8._4_4_;
    }
    else {
      uVar8 = puVar1[2];
      uVar9 = *(undefined4 *)(puVar1 + 1);
      uVar3 = *(undefined4 *)((long)puVar1 + 0xc);
      uVar7 = *puVar1;
      func_0x000107c6157c(uVar6);
    }
    uStack_84 = CONCAT44(uVar3,uVar9);
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_e0 = uVar10;
    uStack_d8 = uVar13;
    uStack_d0 = uVar16;
    uStack_c8 = uVar18;
    uStack_c0 = uVar11;
    uStack_b8 = uVar14;
    uStack_b0 = uVar12;
    uStack_a8 = uVar15;
    uStack_a0 = uVar17;
    uStack_98 = uVar19;
    uStack_90 = uVar4;
    uStack_8c = uVar7;
    uStack_7c = uVar8;
  }
  else {
    if (pcVar5 == (code *)0x0) {
      return;
    }
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f288);
    uStack_d8 = puVar2[1];
    uStack_e0 = *puVar2;
    uStack_c8 = puVar2[3];
    uStack_d0 = puVar2[2];
    uStack_b8 = puVar2[5];
    uStack_c0 = puVar2[4];
    puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d4f308);
    uStack_a8 = puVar2[1];
    uStack_b0 = *puVar2;
    uStack_98 = puVar2[3];
    uStack_a0 = puVar2[2];
    uVar6 = puVar1[1];
    uStack_90 = *(undefined1 *)(puVar2 + 4);
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_7c = 0;
    uStack_74 = 1;
    uStack_70 = 0;
    uStack_68 = 0;
    func_0x000107c6157c(uVar6);
  }
  (*pcVar5)(&uStack_e0);
  FUN_100f7307c(&uStack_e0);
  FUN_100c9c844(pcVar5,uVar6);
  return;
}



/* Entry: 100f71bcc; end: 100f71c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f71bcc(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4e454(*(undefined8 *)(param_1 + _DAT_112d4f270));
    pcVar2 = *(code **)(param_1 + _DAT_112d4f248);
    if (pcVar2 == (code *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar1 = ((undefined8 *)(param_1 + _DAT_112d4f248))[1];
      func_0x000107c6157c(uVar1);
      (*pcVar2)();
      func_0x000107c61170(param_1);
      FUN_100c9c844(pcVar2,uVar1);
    }
  }
  return;
}



/* Entry: 100f71c70; end: 100f71d3f;  */

void FUN_100f71c70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c613fc(param_6,0x38,7);
  *(undefined8 *)(param_6 + 0x10) = param_5;
  *(undefined8 *)(param_6 + 0x18) = param_1;
  *(undefined8 *)(param_6 + 0x20) = param_2;
  *(undefined8 *)(param_6 + 0x28) = param_3;
  *(undefined8 *)(param_6 + 0x30) = param_4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  uStack_68 = param_8;
  uStack_60 = param_7;
  lStack_58 = param_6;
  func_0x000107c60bc4(&puStack_80);
  lVar1 = lStack_58;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(lVar1);
  func_0x0001000d76cc("AnimatedStickerEditing",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f71d40; end: 100f71dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f71d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_58,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    puVar1 = (undefined8 *)(param_5 + _DAT_112d4f308);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
    *(undefined1 *)(puVar1 + 4) = 0;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100f71dc0; end: 100f71e4b;  */

void FUN_100f71dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  uStack_48 = param_3;
  uStack_40 = param_2;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x0001000d76cc("AnimatedStickerEditing",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f71e4c; end: 100f71eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f71e4c(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112d4f308);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100f71eb0; end: 100f7235b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f71eb0(double param_1,double param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long unaff_x20;
  undefined *puVar13;
  long *plVar14;
  undefined *puVar15;
  long lVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined **ppuStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  
  lVar16 = _DAT_112d4f2b8;
  puVar17 = *(undefined **)(unaff_x20 + _DAT_112d4f2b8);
  puVar2 = puVar17;
  if (puVar17 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
    dVar18 = param_1;
    func_0x000107c610f8();
    func_0x000107c457a0();
    func_0x000107c61180();
    func_0x000107c52860();
    puVar15 = *(undefined **)PTR__kCMTimePositiveInfinity_110348658;
    puVar3 = *(undefined **)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    puStack_b0 = *(undefined **)(PTR__kCMTimePositiveInfinity_110348658 + 8);
    ppuVar10 = *(undefined ***)(PTR__kCMTimePositiveInfinity_110348658 + 0x10);
    puStack_b8 = puVar15;
    ppuStack_a8 = ppuVar10;
    func_0x000107c57e18(puVar2);
    puStack_b8 = puVar15;
    puStack_b0 = puVar3;
    ppuStack_a8 = ppuVar10;
    func_0x000107c57e14(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c4c194();
    func_0x000107c61180();
    func_0x000107c51820();
    func_0x000107c61170(puVar3);
    func_0x000107c61174();
    func_0x000107c563a0(dVar18 * 60.0,dVar18 * 60.0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar16);
    *(undefined **)(unaff_x20 + lVar16) = puVar2;
    func_0x000107c61170(uVar7);
  }
  puVar3 = &UNK_11036f040;
  func_0x000107c613fc(&UNK_11036f040,0x18,7);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100f89afc();
  *(undefined **)(puVar3 + 0x10) = puVar4;
  puVar15 = *(undefined **)(param_4 + 0x10);
  if (puVar15 == (undefined *)0x0) {
    func_0x000107c61174(puVar17);
    func_0x000107c61174();
    puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_88 = puVar8;
    func_0x000107c61174(puVar17);
    func_0x000107c61174();
    ppuVar10 = (undefined **)0x0;
    puVar8 = puVar15;
    func_0x000100f72b90(0);
    plVar14 = (long *)(param_4 + 0x20);
    do {
      puVar17 = puStack_88;
      lVar16 = *plVar14;
      dVar19 = param_1 * ((double)lVar16 + 0.5);
      dVar18 = param_2 * 1000.0;
      if (dVar19 <= param_2 * 1000.0) {
        dVar18 = dVar19;
      }
      puVar5 = (undefined *)0x258;
      func_0x000107c600d0(dVar18 / 1000.0);
      puVar9 = puVar8;
      func_0x000107c61558();
      puVar13 = *(undefined **)(puVar3 + 0x10);
      *(undefined8 *)(puVar3 + 0x10) = 0x8000000000000000;
      puVar6 = puVar5;
      puStack_b8 = puVar13;
      FUN_100f89a68();
      uVar12 = (ulong)~(uint)puVar9 & 1;
      if (SCARRY8(*(long *)(puVar13 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f72348);
        (*pcVar1)();
      }
      if (*(long *)(puVar13 + 0x18) < (long)(*(long *)(puVar13 + 0x10) + uVar12)) {
        FUN_100f73980();
        puVar6 = puVar5;
        FUN_100f89a68();
        if (((uint)puVar9 & 1) != ((uint)puVar4 & 1)) {
          func_0x000107c60624(PTR___ss5Int64VN_11034ee50);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7235c);
          (*pcVar1)();
        }
joined_r0x000100f72128:
        uVar12 = (ulong)puVar9 & 1;
        puVar9 = puVar4;
        if (uVar12 != 0) goto LAB_100f72110;
LAB_100f7212c:
        *(ulong *)(puStack_b8 + ((ulong)puVar6 >> 6) * 8 + 0x40) =
             *(ulong *)(puStack_b8 + ((ulong)puVar6 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar6 & 0x3f)
        ;
        *(undefined **)(*(long *)(puStack_b8 + 0x30) + (long)puVar6 * 8) = puVar5;
        *(long *)(*(long *)(puStack_b8 + 0x38) + (long)puVar6 * 8) = lVar16;
        if (SCARRY8(*(long *)(puStack_b8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f7234c);
          (*pcVar1)();
        }
        *(long *)(puStack_b8 + 0x10) = *(long *)(puStack_b8 + 0x10) + 1;
        puVar9 = puVar4;
      }
      else {
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = puVar9;
          FUN_100f73834();
          goto joined_r0x000100f72128;
        }
        puVar4 = puVar9;
        if (((ulong)puVar9 & 1) == 0) goto LAB_100f7212c;
LAB_100f72110:
        *(long *)(*(long *)(puStack_b8 + 0x38) + (long)puVar6 * 8) = lVar16;
      }
      puVar4 = puStack_b8;
      *(undefined **)(puVar3 + 0x10) = puStack_b8;
      func_0x000107c6142c(0x8000000000000000);
      puVar6 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x000107c61168();
      ppuVar11 = &puStack_b8;
      puStack_b8 = puVar5;
      puStack_b0 = puVar8;
      ppuStack_a8 = ppuVar10;
      func_0x000107c5dc5c();
      func_0x000107c61180();
      uVar12 = *(ulong *)(puVar17 + 0x10);
      puStack_88 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar12) {
        ppuVar11 = (undefined **)0x1;
        puVar9 = (undefined *)(uVar12 + 1);
        func_0x000100f72b90(1 < *(ulong *)(puVar17 + 0x18));
      }
      *(undefined **)(puStack_88 + 0x10) = (undefined *)(uVar12 + 1);
      *(undefined **)(puStack_88 + uVar12 * 8 + 0x20) = puVar6;
      puVar15 = puVar15 + -1;
      puVar8 = puVar9;
      ppuVar10 = ppuVar11;
      plVar14 = plVar14 + 1;
      puVar17 = puStack_88;
    } while (puVar15 != (undefined *)0x0);
  }
  uVar7 = 0;
  FUN_100f7416c(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  puVar4 = puVar17;
  func_0x000107c5fc48(puVar17,uVar7);
  func_0x000107c6142c(puVar17);
  puVar17 = &UNK_11036eca8;
  func_0x000107c613fc(&UNK_11036eca8,0x18,7);
  func_0x000107c61614(puVar17 + 0x10,unaff_x20);
  puVar15 = &UNK_11036f068;
  func_0x000107c613fc(&UNK_11036f068,0x28,7);
  *(undefined **)(puVar15 + 0x10) = puVar3;
  *(undefined **)(puVar15 + 0x18) = puVar17;
  *(double *)(puVar15 + 0x20) = param_1;
  pcStack_98 = FUN_100f74040;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = (undefined *)0x42000000;
  ppuStack_a8 = (undefined **)FUN_100f728b4;
  puStack_a0 = &UNK_11036f080;
  ppuVar10 = &puStack_b8;
  puStack_90 = puVar15;
  func_0x000107c60bc4(ppuVar10);
  puVar17 = puStack_90;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar17);
  func_0x000107c43d9c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 100f7235c; end: 100f724d7;  */

void FUN_100f7235c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long in_x7;
  long lVar4;
  undefined8 uVar5;
  long in_stack_00000008;
  long in_stack_00000010;
  undefined1 auStack_78 [24];
  
  puVar3 = auStack_78;
  func_0x000107c61428(in_stack_00000008 + 0x10,puVar3,0x20,0);
  lVar4 = *(long *)(in_stack_00000008 + 0x10);
  if ((*(long *)(lVar4 + 0x10) == 0) || (FUN_100f89a68(), ((ulong)puVar3 & 1) == 0)) {
    func_0x000107c614a8(auStack_78);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_2 * 8);
    func_0x000107c614a8(auStack_78);
    puVar1 = &UNK_11036eca8;
    func_0x000107c613fc(&UNK_11036eca8,0x18,7);
    func_0x000107c61428(in_stack_00000010 + 0x10,auStack_78,0,0);
    in_stack_00000010 = in_stack_00000010 + 0x10;
    func_0x000107c61618(in_stack_00000010);
    func_0x000107c61614(puVar1 + 0x10,in_stack_00000010);
    func_0x000107c61170(in_stack_00000010);
    puVar2 = &UNK_11036f0b8;
    func_0x000107c613fc(&UNK_11036f0b8,0x39,7);
    puVar2[0x10] = in_x7 == 0;
    *(undefined8 *)(puVar2 + 0x18) = param_5;
    *(undefined **)(puVar2 + 0x20) = puVar1;
    *(undefined8 *)(puVar2 + 0x28) = uVar5;
    *(undefined8 *)(puVar2 + 0x30) = param_1;
    puVar2[0x38] = in_x7 == 2;
    func_0x000107c61174(param_5);
    uVar5 = 0x10;
    func_0x0001009548b0(0x10,3,0x2c,3,0,0,&UNK_10d9151a0,puVar2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 100f724d8; end: 100f724ff;  */

void FUN_100f724d8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x99) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined1 *)(unaff_x22 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f72500,0,0);
  return;
}



/* Entry: 100f72500; end: 100f726b3;  */

void FUN_100f72500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x98) == '\x01' && lVar5 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c61174(lVar5);
    func_0x000107c45af0();
    puVar2 = puVar1;
    func_0x000107c60bb4(0x3fe0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    if (puVar2 != (undefined *)0x0) {
      puVar1 = puVar2;
      func_0x000107c5ee30(puVar2);
      func_0x000107c61170(puVar2);
      func_0x000107c602fc(0x19);
      func_0x000107c6142c(0xe000000000000000);
      puVar2 = puVar1;
      func_0x000107c5ee24(0,puVar1,param_2);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar2);
      func_0x000107c61170(lVar5);
      func_0x00010006c090(puVar1,param_2);
      uVar4 = 0xd000000000000017;
      uVar3 = 0x800000010ef1cbf0;
      goto LAB_100f7261c;
    }
    func_0x000107c61170(lVar5);
  }
  uVar4 = 0;
  uVar3 = 0xe000000000000000;
LAB_100f7261c:
  *(undefined8 *)(unaff_x22 + 0x80) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  lVar5 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618(lVar5);
  func_0x000107c61614(unaff_x22 + 0x58,lVar5);
  func_0x000107c61170(lVar5);
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f726b4,uVar3,uVar4);
  return;
}



/* Entry: 100f726b4; end: 100f72883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f726b4(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c61428(unaff_x22 + 0x58,unaff_x22 + 0x28,0,0);
  lVar3 = unaff_x22 + 0x58;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (*(double *)(unaff_x22 + 0x78) == *(double *)(lVar3 + _DAT_112d4f2d8)) {
      bVar2 = *(byte *)(unaff_x22 + 0x99);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c61428(lVar3 + _DAT_112d4f2c0,unaff_x22 + 0x40,0x21,0);
      FUN_100f73bdc(uVar6);
      func_0x000107c614a8(unaff_x22 + 0x40);
      if ((bVar2 & 1) == 0) {
        lVar7 = *(long *)(unaff_x22 + 0x70);
        if ((*(long *)(lVar3 + _DAT_112d4f2d0) <= lVar7) &&
           (lVar7 < ((long *)(lVar3 + _DAT_112d4f2d0))[1])) {
          uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
          puVar4 = PTR_PTR_1126a6108;
          func_0x000107c610f8(PTR_PTR_1126a6108);
          func_0x000107c453e4();
          func_0x000107c57dd8((double)*(long *)(lVar3 + _DAT_112d4f2c8));
          func_0x000107c597b8((double)lVar7,puVar4);
          lVar7 = 0x112d38280;
          func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x18) = 2;
          *(undefined8 *)(lVar7 + 0x10) = 1;
          *(undefined8 *)(lVar7 + 0x20) = uVar6;
          *(undefined8 *)(lVar7 + 0x28) = uVar1;
          func_0x000107c61434(uVar1);
          lVar5 = lVar7;
          func_0x000107c5fc48(lVar7,PTR___sSSN_11034da80);
          func_0x000107c61574(lVar7);
          func_0x000107c54ba0(puVar4);
          func_0x000107c61170(lVar5);
          func_0x000107c4d664(*(undefined8 *)(lVar3 + _DAT_112d4f2b0));
          func_0x000107c61170(puVar4);
          func_0x000107c61610(unaff_x22 + 0x58);
          func_0x000107c61170(lVar3);
          goto LAB_100f7285c;
        }
      }
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61610(unaff_x22 + 0x58);
LAB_100f7285c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f72884,0,0);
  return;
}



/* Entry: 100f72884; end: 100f728b3;  */

void FUN_100f72884(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000100f728b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100f728b4; end: 100f72977;  */

/* WARNING: Possible PIC construction at 0x000100f72950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f72954) */

void FUN_100f728b4(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar8 = param_2[2];
  uVar2 = *param_4;
  uVar5 = param_4[1];
  uVar9 = param_4[2];
  pcVar3 = *(code **)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar6);
  uVar7 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  (*pcVar3)(uVar1,uVar4,uVar8,param_3,uVar2,uVar5,uVar9,param_5,param_6);
  func_0x000107c61574(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 100f72978; end: 100f72a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f72978(double param_1)

{
  undefined *puVar1;
  long in_x3;
  double dVar2;
  undefined1 auStack_60 [8];
  double dStack_58;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(in_x3 + 0x10,auStack_48,0,0);
  in_x3 = in_x3 + 0x10;
  func_0x000107c61618();
  if (in_x3 != 0) {
    func_0x000107c41014(auStack_60,*(undefined8 *)(in_x3 + _DAT_112d4f270));
    func_0x000107c60a3c(auStack_60);
    dVar2 = (double)NEON_fminnm(dStack_58 / param_1,0x3ff0000000000000);
    if (dVar2 < 0.0) {
      dVar2 = 0.0;
    }
    puVar1 = PTR_PTR_1126a60e8;
    func_0x000107c610f8(PTR_PTR_1126a60e8);
    func_0x000107c453e4();
    func_0x000107c575ec(dVar2);
    func_0x000107c4d664(*(undefined8 *)(in_x3 + _DAT_112d4f2e0));
    func_0x000107c61170(in_x3);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 100f72a5c; end: 100f72aaf;  */

void FUN_100f72a5c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = param_2[2];
  pcVar2 = *(code **)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar4);
  (*pcVar2)(uVar1,uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4);
  return;
}



/* Entry: 100f72ab0; end: 100f72b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f72ab0(ulong param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      if ((*(byte *)(param_2 + _DAT_112d4f290) & 1) == 0) {
        func_0x000107c4e868(*(undefined8 *)(param_2 + _DAT_112d4f270));
      }
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 100f72b28; end: 100f72bf7; -[_TtC20ModularStickerCutout36AnimatedStickerEditingViewController initWithNibName:bundle:] */

void FUN_100f72b28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ModularStickerCutout.AnimatedStickerEditingViewController",0x39,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f72b54);
  (*pcVar1)();
}



/* Entry: 100f72bf8; end: 100f72d0f;  */

undefined * FUN_100f72bf8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100f72d10);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    puVar2 = (undefined *)0x112d4f218;
    func_0x0001000285a8(0x112d4f218,&UNK_10d9151c0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar2 + 0x20,param_4 + 0x20,uVar5,&UNK_1106df058);
  }
  else {
    if (puVar2 != param_4 || param_4 + 0x20 + uVar5 * 0x18 <= puVar2 + 0x20) {
      func_0x000107c610b8();
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar2;
}



/* Entry: 100f72d10; end: 100f72e4b;  */

undefined *
FUN_100f72d10(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100f72e4c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    (*param_5)();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_100f7416c(0,param_6,param_7);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100f72e4c; end: 100f72e87;  */

void FUN_100f72e4c(undefined8 param_1,byte param_2)

{
  if (param_2 < 3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 100f72e88; end: 100f72ed7;  */

undefined8 FUN_100f72e88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100f72ed8; end: 100f72f67;  */

void FUN_100f72ed8(void)

{
  FUN_100f70c1c();
  return;
}



/* Entry: 100f72f68; end: 100f72f6f;  */

void FUN_100f72f68(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_11036efa0;
  func_0x000107c613fc(&UNK_11036efa0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  uStack_50 = 0x100f730d8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11036efb8;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc("AnimatedStickerEditing",ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100f72f70; end: 100f7303f;  */

void FUN_100f72f70(void)

{
  FUN_100f71dc0();
  return;
}



/* Entry: 100f73040; end: 100f7305b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f73040(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(lVar2 + _DAT_112d4f308);
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 4) = 1;
    func_0x000107c61170();
  }
  return;
}



/* Entry: 100f7305c; end: 100f7307b;  */

void FUN_100f7305c(void)

{
  FUN_100f719ac();
  return;
}



/* Entry: 100f7307c; end: 100f730af;  */

undefined8 FUN_100f7307c(undefined8 param_1)

{
  (*(code *)&DAT_103ba53a0)();
  return param_1;
}



/* Entry: 100f730b0; end: 100f730cf;  */

void FUN_100f730b0(void)

{
  FUN_100f719ac();
  return;
}



/* Entry: 100f730d0; end: 100f73103;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f730d0(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((param_1 & 1) != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      if ((*(byte *)(lVar1 + _DAT_112d4f290) & 1) == 0) {
        func_0x000107c4e868(*(undefined8 *)(lVar1 + _DAT_112d4f270));
      }
      func_0x000107c61170();
    }
  }
  return;
}



/* Entry: 100f73104; end: 100f731d7;  */

undefined8 FUN_100f73104(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = *(ulong *)(lVar5 + 0x28);
  func_0x000107c60688();
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(lVar5 + 0x30) + uVar1 * 8) == param_2) {
        uVar2 = 0;
        goto LAB_100f731bc;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  func_0x000107c61558(lVar5);
  lVar3 = *unaff_x20;
  FUN_100f731d8(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_100f731bc:
  *param_1 = param_2;
  return uVar2;
}



/* Entry: 100f731d8; end: 100f732df;  */

void FUN_100f731d8(long param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_100f734d0();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_100f732e0(uVar3 + 1);
    }
    else {
      FUN_100f73610();
    }
    lVar4 = *unaff_x20;
    param_2 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(param_2,param_1);
    uVar3 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(long *)(*(long *)(lVar4 + 0x30) + param_2 * 8) == param_1) {
          func_0x000107c60620(PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100f732e0);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar4 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar2 = *unaff_x20;
  lVar4 = lVar2 + (param_2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x38) = *(ulong *)(lVar4 + 0x38) | 1L << (param_2 & 0x3f);
  *(long *)(*(long *)(lVar2 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar2 + 0x10),1)) {
    *(long *)(lVar2 + 0x10) = *(long *)(lVar2 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f732d0);
  (*pcVar1)();
}



/* Entry: 100f732e0; end: 100f734cf;  */

void FUN_100f732e0(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar12 = 0x112d4f358;
  func_0x0001000285a8(0x112d4f358,&UNK_10d9151b0);
  lVar4 = lVar11;
  func_0x000107c602e0(lVar11,lVar1,0,uVar12);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_100f734a0:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar14 = uVar14 & *(ulong *)(lVar11 + 0x38);
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f734cc);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_100f734a0;
        uVar14 = ((ulong *)(lVar11 + 0x38))[lVar13];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar13 = lVar7;
    }
    uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar12);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f734d0);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar12;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Entry: 100f734d0; end: 100f7360f;  */

void FUN_100f734d0(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  func_0x0001000285a8(0x112d4f358,&UNK_10d9151b0);
  lVar9 = *unaff_x20;
  lVar3 = lVar9;
  func_0x000107c602dc();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x38;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar9 || lVar1 + uVar4 * 8 <= lVar3 + 0x38U) {
      func_0x000107c610b8(lVar3 + 0x38U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar9 + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f73610);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_100f735f0;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_100f735f0:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 100f73610; end: 100f73833;  */

void FUN_100f73610(long param_1)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar15 = 0x112d4f358;
  func_0x0001000285a8(0x112d4f358,&UNK_10d9151b0);
  lVar4 = lVar13;
  func_0x000107c602e0(lVar13,lVar1,1,uVar15);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_100f73800:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x38);
  bVar10 = *(byte *)(lVar13 + 0x20) & 0x3f;
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar12 = -1L << (uVar9 & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (bVar10 < 6) {
    uVar17 = ~uVar12;
  }
  uVar17 = uVar17 & *puVar14;
  uVar9 = uVar9 + 0x3f >> 6;
  lVar1 = lVar4 + 0x38;
  lVar7 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f73830);
          (*pcVar3)();
        }
        if ((long)uVar9 <= lVar16) {
          if (bVar10 < 6) {
            *puVar14 = uVar12;
          }
          else {
            func_0x000107c60ee4(puVar14,uVar9 << 3);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_100f73800;
        }
        uVar17 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar17 == 0);
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar16 = lVar7;
    }
    uVar15 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + (LZCOUNT(uVar6) | lVar16 << 6) * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar15);
    uVar11 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f73834);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar15;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 100f73834; end: 100f7397f;  */

void FUN_100f73834(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112d4f350,&UNK_10d915190);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_100f7390c;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(lVar10 + 0x30) + uVar8 * 8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_100f7390c:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100f73980);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_100f73960;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_100f73960:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 100f73980; end: 100f73bdb;  */

void FUN_100f73980(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  undefined8 uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar13 = 0x112d4f350;
  func_0x0001000285a8(0x112d4f350,&UNK_10d915190);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar13);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_100f73ba8:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *puVar14;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f73bd8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_100f73ba8;
        }
        uVar11 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar16 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar16 << 6;
    uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar13 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60688(uVar5,uVar15);
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100f73bdc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar13;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 100f73bdc; end: 100f73cc3;  */

undefined1  [16] FUN_100f73bdc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar5 = *unaff_x20;
  uVar1 = *(ulong *)(uVar5 + 0x28);
  func_0x000107c60688(uVar1,param_1);
  uVar4 = -1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(long *)(*(long *)(uVar5 + 0x30) + uVar1 * 8) == param_1) {
        uVar4 = *unaff_x20;
        func_0x000107c61558();
        uVar5 = *unaff_x20;
        if ((uVar4 & 1) == 0) {
          FUN_100f734d0();
        }
        uVar2 = *(undefined8 *)(*(long *)(uVar5 + 0x30) + uVar1 * 8);
        FUN_100f73cc4(uVar1);
        uVar3 = 0;
        *unaff_x20 = uVar5;
        goto LAB_100f73c9c;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(uVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  uVar2 = 0;
  uVar3 = 1;
LAB_100f73c9c:
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Entry: 100f73cc4; end: 100f73e2f;  */

void FUN_100f73cc4(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar8 = *unaff_x20;
  lVar1 = lVar8 + 0x38;
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  uVar10 = 1L << (uVar9 & 0x3f);
  if ((uVar10 & *(ulong *)(lVar1 + (uVar9 >> 6) * 8)) == 0) {
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  }
  else {
    uVar7 = ~uVar7;
    uVar6 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) & uVar10) != 0) {
      uVar10 = uVar6 + 1 & uVar7;
      do {
        uVar6 = *(ulong *)(lVar8 + 0x28);
        lVar4 = *(long *)(lVar8 + 0x30);
        puVar2 = (undefined8 *)(lVar4 + uVar9 * 8);
        func_0x000107c60688(uVar6,*puVar2);
        uVar6 = uVar6 & uVar7;
        if ((long)param_1 < (long)uVar10) {
          if (uVar10 <= uVar6 || (long)uVar6 <= (long)param_1) {
LAB_100f73d9c:
            puVar3 = (undefined8 *)(lVar4 + param_1 * 8);
            if ((param_1 != uVar9) || (puVar2 + 1 <= puVar3)) {
              *puVar3 = *puVar2;
              param_1 = uVar9;
            }
          }
        }
        else if (uVar10 <= uVar6 && (long)uVar6 <= (long)param_1) goto LAB_100f73d9c;
        uVar9 = uVar9 + 1 & uVar7;
      } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
    }
    uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = (-1L << (param_1 & 0x3f)) - 1U & *(ulong *)(lVar1 + uVar7);
  }
  if (!SBORROW8(*(long *)(lVar8 + 0x10),1)) {
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100f73e30);
  (*pcVar5)();
}



/* Entry: 100f73e30; end: 100f7403f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f73e30(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f240);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f248);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f278) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d4f290) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f298);
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 3) = 1;
  lVar2 = _DAT_112d4f2a0;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d4f2a8;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d4f2b0;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f2b8) = 0;
  *(undefined **)(unaff_x20 + _DAT_112d4f2c0) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f2c8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f2d0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4f2d8) = 0;
  lVar2 = _DAT_112d4f2e0;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d4f2e8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  puVar5 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c49470();
  func_0x000107c61170(puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f2f0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  lVar2 = _DAT_112d4f2f8;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f300);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f308);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 4) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d4f310);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ModularStickerCutout/AnimatedStickerEditingViewController.swift",0x3f,2,0x70,
                      0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100f74040);
  (*pcVar3)();
}



/* Entry: 100f74040; end: 100f7406f;  */

void FUN_100f74040(void)

{
  long unaff_x20;
  
  FUN_100f7235c(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 100f74070; end: 100f74103;  */

void FUN_100f74070(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  long lVar7;
  
  uVar3 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x38);
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100f74104;
  *(undefined1 *)((long)plVar5 + 0x99) = uVar4;
  plVar5[0xf] = lVar7;
  plVar5[0xd] = lVar2;
  plVar5[0xe] = lVar6;
  plVar5[0xc] = lVar1;
  *(undefined1 *)(plVar5 + 0x13) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100f72500,0,0);
  return;
}



/* Entry: 100f74104; end: 100f7413f;  */

void FUN_100f74104(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100f7413c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100f74140; end: 100f7416b;  */

void FUN_100f74140(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100f70d44(uVar2,uVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100f7416c; end: 100f741ab;  */

void FUN_100f7416c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100f741ac; end: 100f7424b;  */

void FUN_100f741ac(long param_1,long param_2)

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



/* Entry: 100f7424c; end: 100f74273;  */

void FUN_100f7424c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[1]);
  return;
}



/* Entry: 100f74274; end: 100f742cf;  */

undefined8 * FUN_100f74274(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100f742d0; end: 100f7430b;  */

undefined8 * FUN_100f742d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 100f7430c; end: 100f743c3;  */

int FUN_100f7430c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 100f743c4; end: 100f74453;  */

void FUN_100f743c4(undefined8 param_1,undefined8 param_2)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 != 0) {
    func_0x000107c4bac8(lStack_28,param_2,0);
    func_0x000107c615e8(lStack_28);
  }
  return;
}



/* Entry: 100f74454; end: 100f74553;  */

void FUN_100f74454(char param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_48;
  
  if (param_1 == '\0') {
    uVar1 = 0x635f636974617473;
    uVar2 = 0xed000074756f7475;
  }
  else {
    uVar1 = 0x646574616d696e61;
    uVar2 = 0xef74756f7475635f;
    if (param_1 != '\x01') {
      uVar1 = 0xd000000000000010;
      uVar2 = 0x800000010ef1cd20;
    }
  }
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000104e17780(param_2,uVar1,1);
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c4bacc(lStack_48);
    func_0x000107c615e8(lStack_48);
  }
  return;
}



/* Entry: 100f74554; end: 100f746af;  */

void FUN_100f74554(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_68;
  
  lVar6 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100f72bc4(0,lVar6,0);
    do {
      puVar5 = puStack_68;
      puVar2 = PTR_PTR_1126a6110;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c598b4();
      func_0x000107c57e94(puVar2);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x000100f72bc4(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_68 + uVar1 * 8 + 0x20) = puVar2;
      lVar6 = lVar6 + -1;
      puVar5 = puStack_68;
    } while (lVar6 != 0);
  }
  func_0x0001000d224c(&puStack_68);
  puVar2 = puStack_68;
  if (puStack_68 == (undefined *)0x0) {
    func_0x000107c6142c(puVar5);
  }
  else {
    uVar3 = 0;
    FUN_100f746b0(0);
    puVar4 = puVar5;
    func_0x000107c5fc48(puVar5,uVar3);
    func_0x000107c6142c(puVar5);
    func_0x000107c4bac4(puVar2);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 100f746b0; end: 100f746f3;  */

void FUN_100f746b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d4f360 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6110;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d4f360 = puVar1;
  return;
}



/* Entry: 100f746f4; end: 100f746fb;  */

undefined8 * FUN_100f746f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  return param_1;
}



/* Entry: 100f746fc; end: 100f748db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f746fc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [24];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61428(param_2 + 0x10,auStack_d8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d4f368);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_2);
    uStack_158 = param_1;
    func_0x000100f75be4(&uStack_158);
    uStack_78 = uStack_110;
    uStack_80 = uStack_118;
    uStack_68 = uStack_100;
    uStack_70 = uStack_108;
    uStack_58 = uStack_f0;
    uStack_60 = uStack_f8;
    uStack_48 = uStack_e0;
    uStack_50 = uStack_e8;
    uStack_b8 = uStack_150;
    uStack_c0 = uStack_158;
    uStack_a8 = uStack_140;
    uStack_b0 = uStack_148;
    uStack_98 = uStack_130;
    uStack_a0 = uStack_138;
    uStack_88 = uStack_120;
    uStack_90 = uStack_128;
    func_0x000103ba1ea0(&uStack_c0);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 100f748dc; end: 100f749e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f748dc(long param_1)

{
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100f75b80(param_1 + _DAT_112d4f370,auStack_70);
    func_0x000107c61170(param_1);
    func_0x0001000a8868(auStack_70,uStack_58);
    (**(code **)(lStack_50 + 0x48))(uStack_58,lStack_50);
    func_0x0001000834e4(auStack_70);
  }
  return;
}



/* Entry: 100f749e4; end: 100f74b4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f749e4(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d4f388);
  puVar2 = &UNK_10d915220;
  func_0x000107c614e0(&UNK_10d915220);
  puVar3 = &UNK_10d915248;
  func_0x000107c614e0(&UNK_10d915248);
  uStack_48 = (undefined1)param_2;
  lStack_50 = param_1;
  func_0x000107c6157c(uVar4);
  FUN_100f75b4c(param_1,param_2);
  func_0x000107c5f210(&lStack_50,uVar4,puVar2,puVar3);
  uVar1 = (uint)param_2 & 0xff;
  if (1 < uVar1) {
    if (uVar1 == 2) {
      puVar2 = &UNK_11036f260;
      func_0x000107c613fc(&UNK_11036f260,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_11036f328;
      func_0x000107c613fc(&UNK_11036f328,0x19,7);
      *(undefined **)(puVar3 + 0x10) = puVar2;
      puVar3[0x18] = (byte)param_1 & 1;
      func_0x000107c6157c(puVar2);
      FUN_100f75020(0x100f75b60,puVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(puVar3);
      return;
    }
    if (param_1 == 0) {
      puVar2 = &UNK_11036f260;
      func_0x000107c613fc(&UNK_11036f260,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      func_0x000107c6157c(puVar2);
      FUN_100f75020(0x100f75b6c,puVar2);
      func_0x000107c61578(puVar2,2);
      return;
    }
  }
  FUN_100f74d4c();
  return;
}



/* Entry: 100f74b50; end: 100f74b53;  */

void FUN_100f74b50(void)

{
  return;
}



/* Entry: 100f74b54; end: 100f74d4b;  */

/* WARNING: Possible PIC construction at 0x000100f74c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f74ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f74cf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f74d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f74cfc) */
/* WARNING: Removing unreachable block (ram,0x000100f74ca4) */
/* WARNING: Removing unreachable block (ram,0x000100f74c48) */
/* WARNING: Removing unreachable block (ram,0x000100f74d0c) */
/* WARNING: Removing unreachable block (ram,0x000100c9c958) */
/* WARNING: Removing unreachable block (ram,0x000100c9c964) */
/* WARNING: Removing unreachable block (ram,0x000100c9c95c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f74b54(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  
  lVar4 = unaff_x20 + _DAT_112d4f390;
  func_0x000107c61618();
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  pcVar6 = *(code **)(unaff_x20 + _DAT_112d4f378);
  if (pcVar6 != (code *)0x0) {
    lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112d4f378))[1];
    lVar4 = unaff_x20 + _DAT_112d4f398;
    func_0x000107c61618();
    if (lVar4 != 0) {
      func_0x000107c6157c();
      (*pcVar6)();
      puVar5 = &UNK_11036f260;
      func_0x000107c613fc(&UNK_11036f260,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar1 = (undefined8 *)(lVar7 + _DAT_112d4f240);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = FUN_100f759d8;
      puVar1[1] = puVar5;
      func_0x000107c6157c(puVar5);
      FUN_100c9c958(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar5);
      return;
    }
  }
  return;
}



/* Entry: 100f74d4c; end: 100f74fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f74d4c(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar1 = _DAT_112d4f3a8;
  ppuVar12 = &puStack_90;
  if (*(long *)(unaff_x20 + _DAT_112d4f3a8) == 0) {
    lVar3 = unaff_x20 + _DAT_112d4f390;
    func_0x000107c61618();
    if (lVar3 == 0) {
      lVar3 = unaff_x20 + _DAT_112d4f398;
      func_0x000107c61618();
      if (lVar3 == 0) {
        return;
      }
    }
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d4f388);
    lVar4 = 0;
    FUN_100f7a130();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112d4f6f0) = uVar13;
    puVar7 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_60 = lVar5;
    lStack_58 = lVar4;
    func_0x000107c6157c(uVar13);
    plVar6 = &lStack_60;
    func_0x000107c61154(plVar6,puVar7,0,0);
    puVar7 = PTR__OBJC_CLASS___UIViewController_1126af898;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5677c();
    puVar8 = puVar7;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100f74fcc);
      (*pcVar2)();
    }
    func_0x000107c52b50();
    func_0x000107c61170(puVar8);
    puVar9 = PTR_PTR_1126b0a08;
    func_0x000107c610f8();
    func_0x000107c48e88();
    func_0x000107c5a070();
    func_0x000107c5921c(puVar9);
    func_0x000107c5a074(puVar9);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d4f3a0);
    *(undefined **)(unaff_x20 + _DAT_112d4f3a0) = puVar7;
    func_0x000107c61174(puVar7);
    func_0x000107c61174();
    func_0x000107c61170(uVar13);
    uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar9;
    func_0x000107c61174(puVar9);
    func_0x000107c61170(uVar13);
    puVar8 = &UNK_11036f260;
    func_0x000107c613fc(&UNK_11036f260,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    puVar10 = &UNK_11036f2b0;
    func_0x000107c613fc(&UNK_11036f2b0,0x18,7);
    func_0x000107c61614(puVar10 + 0x10,puVar7);
    func_0x000107c61170(puVar7);
    puVar11 = &UNK_11036f2d8;
    func_0x000107c613fc(&UNK_11036f2d8,0x20,7);
    *(undefined **)(puVar11 + 0x10) = puVar10;
    *(undefined **)(puVar11 + 0x18) = puVar8;
    uStack_70 = 0x100f75a50;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11036f2f0;
    puStack_68 = puVar11;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c4f018(lVar3);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(plVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar9);
  }
  return;
}



/* Entry: 100f74fcc; end: 100f7501f;  */

void FUN_100f74fcc(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100f74b54();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f75020; end: 100f7516f;  */

/* WARNING: Possible PIC construction at 0x000100f75070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f750a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f7511c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f750a4) */
/* WARNING: Removing unreachable block (ram,0x000100f750b0) */
/* WARNING: Removing unreachable block (ram,0x000100f75100) */
/* WARNING: Removing unreachable block (ram,0x000100f75074) */
/* WARNING: Removing unreachable block (ram,0x000100f75084) */
/* WARNING: Removing unreachable block (ram,0x000100f7513c) */
/* WARNING: Removing unreachable block (ram,0x000100f75144) */
/* WARNING: Removing unreachable block (ram,0x000100f75148) */
/* WARNING: Removing unreachable block (ram,0x000100f75150) */
/* WARNING: Removing unreachable block (ram,0x000100f750a0) */
/* WARNING: Removing unreachable block (ram,0x000100f75120) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f75020(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d4f3a0);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d4f3a8);
  *(undefined8 *)(unaff_x20 + _DAT_112d4f3a8) = 0;
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100f75170; end: 100f751cb;  */

void FUN_100f75170(long param_1,uint param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_100f751cc(param_2 & 1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 100f751cc; end: 100f75307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f751cc(byte param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20 + _DAT_112d4f390;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4f090();
    func_0x000107c61180();
    if (lVar2 != 0) {
      puVar3 = &UNK_11036f260;
      func_0x000107c613fc(&UNK_11036f260,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_11036f350;
      func_0x000107c613fc(&UNK_11036f350,0x19,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      puVar4[0x18] = param_1 & 1;
      uStack_50 = 0x100f75b74;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_1000f6b44;
      puStack_58 = &UNK_11036f368;
      puStack_48 = puVar4;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      func_0x000107c420a8(lVar2);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      return;
    }
    func_0x000107c61170(lVar1);
  }
  (**(code **)(unaff_x20 + _DAT_112d4f380))(param_1 & 1);
  return;
}


