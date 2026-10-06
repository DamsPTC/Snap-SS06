/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037a28d0; end: 1037a2937;  */

void FUN_1037a28d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61434(*(undefined8 *)(param_3 + 8));
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar2 = *param_1;
  func_0x00010379fe08(param_3,param_2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1037a2938; end: 1037a2967; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation pauseAsyncTrace:] */

void FUN_1037a2938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1037a276c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a2968; end: 1037a2ae7; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation resumeAsyncTrace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a2968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f92c08);
  puVar1 = &UNK_110692dd8;
  func_0x000107c613fc(&UNK_110692dd8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  func_0x0001048d8ee8(0x1037a470c,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a2ae8; end: 1037a2b17; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation cancelAsyncTrace:] */

void FUN_1037a2ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001037a29f4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a2b18; end: 1037a2d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a2b18(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar9 = _DAT_112f92c08;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f92c08);
  func_0x000107c6157c(uVar10);
  func_0x0001048d8e34(&uStack_90);
  func_0x000107c61574(uVar10);
  uVar1 = uStack_90;
  if ((*(long *)(uStack_90 + 0x10) == 0) ||
     (lVar3 = param_1, func_0x000100f89a68(), (param_2 & 1) == 0)) {
    func_0x000107c6142c(uVar1);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f92bf8);
    func_0x000107c6157c(uVar10);
    func_0x0001048d8e34(&uStack_90);
    func_0x000107c61574(uVar10);
    uVar7 = uStack_90;
    if ((*(long *)(uStack_90 + 0x10) == 0) ||
       (lVar9 = param_1, func_0x000100f89a68(), (param_2 & 1) == 0)) goto LAB_1037a2d34;
    lVar9 = *(long *)(uVar7 + 0x38) + lVar9 * 0x28;
    uVar11 = *(ulong *)(lVar9 + 8);
    uVar1 = *(ulong *)(lVar9 + 0x10);
    uVar12 = *(ulong *)(lVar9 + 0x18);
    uVar13 = *(ulong *)(lVar9 + 0x20);
    func_0x000107c61434(uVar1);
    func_0x000107c6142c(uVar7);
    uVar5 = 0;
    func_0x000107c60f0c();
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037a2d7c);
      (*pcVar2)();
    }
    uVar6 = 0xc;
    func_0x000107c60f0c();
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1037a2d80);
      (*pcVar2)();
    }
    uVar5 = uVar5 / 1000;
    uVar6 = uVar6 / 1000;
    uVar7 = uVar1;
  }
  else {
    puVar8 = (ulong *)(*(long *)(uVar1 + 0x38) + lVar3 * 0x30);
    uVar11 = *puVar8;
    uVar7 = puVar8[1];
    uVar12 = puVar8[2];
    uVar5 = puVar8[3];
    uVar13 = puVar8[4];
    uVar6 = puVar8[5];
    func_0x000107c61434(uVar7);
    func_0x000107c6142c(uVar1);
    uVar10 = *(undefined8 *)(unaff_x20 + lVar9);
    puVar4 = &UNK_110692d10;
    func_0x000107c613fc(&UNK_110692d10,0x18,7);
    *(long *)(puVar4 + 0x10) = param_1;
    func_0x000107c6157c(uVar10);
    func_0x0001048d8ee8(0x1037a40e4,puVar4);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(puVar4);
  }
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f92bf8);
  puVar4 = &UNK_110692ce8;
  uStack_90 = uVar11;
  uStack_88 = uVar7;
  uStack_80 = uVar12;
  uStack_78 = uVar5;
  uStack_70 = uVar13;
  uStack_68 = uVar6;
  func_0x000107c613fc(&UNK_110692ce8,0x18,7);
  *(long *)(puVar4 + 0x10) = param_1;
  func_0x000107c6157c(uVar10);
  func_0x0001048d8ee8(FUN_1037a40cc,puVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar4);
  lVar9 = unaff_x20 + _DAT_112f92c10;
  uVar10 = *(undefined8 *)(lVar9 + 0x18);
  lVar3 = *(long *)(lVar9 + 0x20);
  func_0x0001000a8868(lVar9,uVar10);
  (**(code **)(lVar3 + 8))(&uStack_90,uVar10,lVar3);
LAB_1037a2d34:
  func_0x000107c6142c();
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f92c00);
  func_0x000107c6015c();
  if ((uVar7 & 1) != 0) {
    func_0x000106cc5d54(uVar10,param_1);
  }
  return;
}



/* Entry: 1037a2d80; end: 1037a2e8f;  */

void FUN_1037a2d80(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_2;
  func_0x000100f89a68();
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*param_1;
    func_0x000107c61558();
    lVar3 = *param_1;
    if (iVar1 == 0) {
      func_0x0001037a037c();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x30 + 8));
    func_0x0001037a431c(param_2,lVar3);
    *param_1 = lVar3;
  }
  return;
}



/* Entry: 1037a2e90; end: 1037a2ebf; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation endAsyncTrace:] */

void FUN_1037a2e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1037a2b18(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a2ec0; end: 1037a307b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a2ec0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar5 = _DAT_112f92bf8;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f92bf8);
  func_0x000107c6157c(uVar11);
  func_0x0001048d8e34(&lStack_90);
  func_0x000107c61574(uVar11);
  lVar6 = lStack_90;
  lVar16 = 0;
  puVar15 = (ulong *)(lStack_90 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lStack_90 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lStack_90 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = unaff_x20 + _DAT_112f92c10;
  while( true ) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1 & uVar14) {
      uVar4 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      lVar13 = *(long *)(*(long *)(lVar6 + 0x30) + LZCOUNT(uVar4 >> 0x20 | uVar4 << 0x20) * 8 +
                        lVar16 * 0x200);
      uVar11 = *(undefined8 *)(unaff_x20 + lVar5);
      func_0x000107c6157c(uVar11);
      func_0x0001048d8e34(&lStack_98);
      func_0x000107c61574(uVar11);
      lVar3 = lStack_98;
      lVar12 = lVar3;
      if ((*(long *)(lStack_98 + 0x10) != 0) && (func_0x000100f89a68(), (param_2 & 1) != 0)) {
        lVar9 = *(long *)(lVar3 + 0x38) + lVar13 * 0x28;
        lVar13 = *(long *)(lVar9 + 8);
        lVar12 = *(long *)(lVar9 + 0x10);
        uVar11 = *(undefined8 *)(lVar9 + 0x18);
        uVar2 = *(undefined8 *)(lVar9 + 0x20);
        func_0x000107c61434(lVar12);
        func_0x000107c6142c(lVar3);
        uStack_78 = 0xffffffffffffffff;
        uStack_68 = 0xffffffffffffffff;
        param_2 = *(ulong *)(lVar1 + 0x18);
        lVar3 = *(long *)(lVar1 + 0x20);
        lStack_90 = lVar13;
        lStack_88 = lVar12;
        uStack_80 = uVar11;
        uStack_70 = uVar2;
        func_0x0001000a8868(lVar1,param_2);
        (**(code **)(lVar3 + 8))(&lStack_90,param_2,lVar3);
      }
      func_0x000107c6142c(lVar12);
    }
    bVar8 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar8) break;
    if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
      func_0x000107c61574(lVar6);
      return;
    }
    uVar14 = puVar15[lVar16];
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a307c);
  (*pcVar7)();
}



/* Entry: 1037a307c; end: 1037a30a3; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation emitUnclosedAsyncSpans] */

void FUN_1037a307c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037a2ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a30a4; end: 1037a3213; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation endAsyncTrace:withName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a30a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f92bf8);
  puVar1 = &UNK_110692db0;
  func_0x000107c613fc(&UNK_110692db0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61434(param_2);
  func_0x0001048d8ee8(FUN_1037a4700,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  FUN_1037a2b18(param_3);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a3214; end: 1037a33a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037a3214(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long *plStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long *plStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  plVar2 = (long *)(unaff_x20 + _DAT_112f92bf0);
  func_0x0001000a8868(plVar2,plVar2[3]);
  lVar5 = *plVar2;
  plVar2 = &lStack_90;
  func_0x000107c61428(lVar5 + 0x10,plVar2,0x21,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c60b24();
  func_0x000107c614a8(&lStack_90);
  uVar3 = 0;
  func_0x000107c60f0c();
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1037a33a0);
    (*pcVar1)();
  }
  uVar4 = 0x10;
  func_0x000107c60f0c();
  if (-1 < (long)uVar4) {
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f92c18);
    func_0x000107c6157c(uVar6);
    func_0x0001048d94f8(&lStack_90);
    func_0x000107c61574();
    FUN_10379a508();
    lStack_78 = lStack_90;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f92c20);
    lStack_a0 = lVar5;
    plStack_98 = &lStack_90;
    lStack_90 = lVar5;
    lStack_88 = param_1;
    uStack_80 = param_2;
    uStack_70 = uVar6;
    plStack_68 = plVar2;
    uStack_60 = uVar3 / 1000;
    uStack_58 = uVar4 / 1000;
    func_0x000107c61434(param_2);
    func_0x000107c6157c(uVar7);
    func_0x0001048d91b4(FUN_1037a4608,auStack_b0);
    func_0x000107c61574(uVar7);
    uVar3 = 0;
    FUN_1037a4610();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f92c28);
    func_0x000107c6015c();
    if ((uVar3 & 1) != 0) {
      func_0x000107c5fb28(param_1,param_2);
      func_0x000106cc5a30(param_1 + 0x20,uVar6,lVar5);
      func_0x000107c61574(param_1);
    }
    return lVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037a33a4);
  (*pcVar1)();
}



/* Entry: 1037a33a4; end: 1037a340f;  */

void FUN_1037a33a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 auStack_70 [8];
  
  FUN_1037a22a8(param_3,auStack_70);
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  auStack_70[0] = *param_1;
  func_0x00010379ff5c(param_3,param_2,uVar1);
  *param_1 = auStack_70[0];
  return;
}



/* Entry: 1037a3410; end: 1037a341b; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation beginSyncTrace:] */

undefined8 FUN_1037a3410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1037a3214(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 1037a341c; end: 1037a357b;  */

undefined8 FUN_1037a341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 1037a357c; end: 1037a35ab; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation cancelSyncTrace:] */

void FUN_1037a357c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x0001037a3484(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a35ac; end: 1037a3757;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a35ac(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [16];
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lVar1 = _DAT_112f92c20;
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f92c20);
  func_0x000107c6157c(uVar12);
  func_0x0001048d94f8(&uStack_a8);
  func_0x000107c61574(uVar12);
  uVar9 = uStack_a8;
  if ((*(long *)(uStack_a8 + 0x10) == 0) ||
     (lVar8 = param_1, func_0x000100f89a68(), (param_2 & 1) == 0)) {
    func_0x000107c6142c();
  }
  else {
    lVar8 = *(long *)(uVar9 + 0x38) + lVar8 * 0x40;
    uVar2 = *(ulong *)(lVar8 + 8);
    uVar4 = *(undefined8 *)(lVar8 + 0x10);
    uVar12 = *(undefined8 *)(lVar8 + 0x18);
    uVar5 = *(undefined8 *)(lVar8 + 0x20);
    uVar3 = *(undefined8 *)(lVar8 + 0x28);
    uVar6 = *(undefined8 *)(lVar8 + 0x30);
    uVar11 = *(undefined8 *)(lVar8 + 0x38);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(uVar3);
    func_0x000107c6142c(uVar9);
    uVar9 = 0;
    func_0x000107c60f0c();
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a3754);
      (*pcVar7)();
    }
    uVar10 = 0x10;
    func_0x000107c60f0c();
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a3758);
      (*pcVar7)();
    }
    uStack_78 = uVar9 / 1000;
    uStack_68 = uVar10 / 1000;
    uVar13 = *(undefined8 *)(unaff_x20 + lVar1);
    lStack_b0 = param_1;
    uStack_a8 = uVar2;
    uStack_a0 = uVar4;
    uStack_98 = uVar12;
    uStack_90 = uVar5;
    uStack_88 = uVar3;
    uStack_80 = uVar6;
    uStack_70 = uVar11;
    func_0x000107c6157c(uVar13);
    func_0x0001048d91b4(0x1037a464c,auStack_c0);
    func_0x000107c61574(uVar13);
    lVar1 = unaff_x20 + _DAT_112f92c10;
    uVar12 = *(undefined8 *)(lVar1 + 0x18);
    lVar8 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar12);
    (**(code **)(lVar8 + 0x10))(&uStack_a8,uVar12,lVar8);
    uVar9 = 0;
    FUN_10379c0dc();
  }
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f92c28);
  func_0x000107c6015c();
  if ((uVar9 & 1) != 0) {
    func_0x000106cc5b34(uVar12,param_1);
  }
  return;
}



/* Entry: 1037a3758; end: 1037a37eb;  */

void FUN_1037a3758(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2;
  func_0x000100f89a68();
  if ((uVar2 & 1) != 0) {
    uVar2 = *param_1;
    func_0x000107c61558();
    uVar3 = *param_1;
    if ((uVar2 & 1) == 0) {
      func_0x0001037a04f0();
    }
    lVar1 = *(long *)(uVar3 + 0x38) + param_2 * 0x40;
    uVar4 = *(undefined8 *)(lVar1 + 0x10);
    uVar5 = *(undefined8 *)(lVar1 + 0x28);
    func_0x0001037a4494(param_2,uVar3);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar4);
    *param_1 = uVar3;
  }
  return;
}



/* Entry: 1037a37ec; end: 1037a381b; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation endSyncTrace:] */

void FUN_1037a37ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1037a35ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a381c; end: 1037a3827; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation beginSyncTraceWithNameBlock:] */

long FUN_1037a381c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  func_0x000107c61174();
  (*pcVar2)(param_3);
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  FUN_1037a3214(lVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return lVar1;
}



/* Entry: 1037a3828; end: 1037a38b3;  */

long FUN_1037a3828(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  long lVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  func_0x000107c61174();
  (*pcVar2)(param_3);
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  (*param_4)(lVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return lVar1;
}



/* Entry: 1037a38b4; end: 1037a39bf;  */

/* WARNING: Possible PIC construction at 0x0001037a3998: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a38b4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  
  uVar3 = 0;
  func_0x000107c60f0c();
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1037a39c0);
    (*pcVar6)();
  }
  uVar4 = 0;
  func_0x0001037a7e98();
  func_0x000107c613fc();
  *(ulong *)(uVar4 + 0x10) = param_1;
  *(undefined8 *)(uVar4 + 0x18) = param_2;
  *(undefined8 *)(uVar4 + 0x20) = param_3;
  *(ulong *)(uVar4 + 0x28) = uVar3 / 1000;
  lVar1 = unaff_x20 + _DAT_112f92c10;
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar5);
  pcVar6 = *(code **)(lVar2 + 0x18);
  func_0x000107c61434(param_2);
  uVar3 = uVar4;
  (*pcVar6)(uVar4,uVar5,lVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f92c30);
  func_0x000107c6015c();
  if ((uVar3 & 1) != 0) {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000106cc5e74(param_1 + 0x20,param_3,uVar5);
    uVar4 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar4);
  return;
}



/* Entry: 1037a39c0; end: 1037a3a1f; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation traceCounter:value:] */

void FUN_1037a39c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1037a38b4(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1037a3a20; end: 1037a3bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a3a20(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_80;
  lVar1 = unaff_x20 + _DAT_112f92c10;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x20))(param_1,uVar2,lVar3);
  uVar5 = param_1;
  func_0x000107c44874();
  if (((int)uVar5 != 0) && (func_0x000107c6015c(), (uVar5 & 1) != 0)) {
    uVar5 = param_1;
    func_0x000107c4ce80();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a3bcc);
      (*pcVar4)();
    }
    puVar6 = &UNK_110692d38;
    func_0x000107c613fc(&UNK_110692d38,0x20,7);
    *(ulong *)(puVar6 + 0x10) = param_1;
    *(long *)(puVar6 + 0x18) = unaff_x20;
    puVar7 = &UNK_110692d60;
    func_0x000107c613fc(&UNK_110692d60,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x1037a4654;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    pcStack_60 = FUN_1037a465c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1037a3ca8;
    puStack_68 = &UNK_110692d78;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar9 = puStack_58;
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x000107c6157c(puVar7);
    func_0x000107c61574(puVar9);
    func_0x000107c429bc(uVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(uVar5);
    puVar9 = puVar7;
    func_0x000107c61544(puVar7,"",0x6d,0x180,0x38,1);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar6);
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a3bc8);
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1037a3bcc; end: 1037a3ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a3bcc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = param_3;
  func_0x000107c42acc();
  func_0x000107c61180();
  if (param_5 == 0) {
    lVar4 = 0;
    lVar2 = 0;
    uVar3 = *(undefined8 *)(param_6 + _DAT_112f92c38);
  }
  else {
    lVar2 = param_5;
    func_0x000107c5faec();
    func_0x000107c61170(param_5);
    uVar3 = *(undefined8 *)(param_6 + _DAT_112f92c38);
    func_0x000107c5fb28(lVar2,uVar1);
    func_0x000107c6142c(uVar1);
    lVar4 = lVar2 + 0x20;
  }
  func_0x000107c5fb28(param_2,param_3);
  func_0x000106cc5f44(param_1,lVar4,param_2 + 0x20,uVar3);
  func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 1037a3ca8; end: 1037a3cf7;  */

void FUN_1037a3ca8(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  func_0x000107c5faec(param_3);
  (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1037a3cf8; end: 1037a3d47; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation logPerfEvent:] */

/* WARNING: Possible PIC construction at 0x0001037a3d30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a3d34) */

void FUN_1037a3cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1037a3a20(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1037a3d48; end: 1037a3d83; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation currentTraceClockUs] */

ulong FUN_1037a3d48(void)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  func_0x000107c60f0c();
  if (-1 < (long)uVar2) {
    return uVar2 / 1000;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037a3d84);
  (*pcVar1)();
}



/* Entry: 1037a3d84; end: 1037a3ef3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a3d84(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f92c18);
  lVar4 = param_2;
  func_0x000107c6157c(uVar5);
  func_0x0001048d94f8(&lStack_a8);
  func_0x000107c61574();
  FUN_10379a508();
  lStack_98 = lStack_a8;
  lVar1 = unaff_x20 + _DAT_112f92c10;
  uVar6 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  lStack_a8 = param_3;
  uStack_a0 = param_4;
  uStack_90 = uVar5;
  lStack_88 = lVar4;
  lStack_80 = param_1;
  lStack_78 = param_2;
  lStack_70 = param_1;
  lStack_68 = param_2;
  func_0x0001000a8868(lVar1,uVar6);
  pcVar7 = *(code **)(lVar2 + 0x10);
  func_0x000107c61434(param_4);
  (*pcVar7)(&lStack_a8,uVar6,lVar2);
  uVar3 = 0;
  FUN_10379c0dc();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f92c28);
  func_0x000107c6015c();
  if (((uVar3 & 1) != 0) && (param_1 < param_2)) {
    uVar3 = 0;
    func_0x000107c60f0c();
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a3ee4);
      (*pcVar7)();
    }
    lVar1 = uVar3 / 1000 - param_1;
    if (SBORROW8(uVar3 / 1000,param_1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a3ee8);
      (*pcVar7)();
    }
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a3eec);
      (*pcVar7)();
    }
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a3ef0);
      (*pcVar7)();
    }
    if (param_2 - param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a3ef4);
      (*pcVar7)();
    }
    func_0x000107c5fb28(param_3,param_4);
    func_0x000106cc603c(param_3 + 0x20,uVar6,lVar1,param_2 - param_1);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 1037a3ef4; end: 1037a3eff; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation insertSyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:] */

void FUN_1037a3ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1037a3d84(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1037a3f00; end: 1037a403b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a3f00(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  uVar4 = 0;
  lVar1 = unaff_x20 + _DAT_112f92c10;
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  lVar2 = *(long *)(lVar1 + 0x20);
  lStack_80 = param_3;
  uStack_78 = param_4;
  lStack_70 = param_1;
  lStack_68 = param_2;
  lStack_60 = param_1;
  lStack_58 = param_2;
  func_0x0001000a8868(lVar1,uVar5);
  (**(code **)(lVar2 + 8))(&lStack_80,uVar5,lVar2);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f92c00);
  func_0x000107c6015c();
  if (((uVar4 & 1) == 0) || (param_2 <= param_1)) {
    return;
  }
  uVar4 = 0;
  func_0x000107c60f0c();
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037a402c);
    (*pcVar3)();
  }
  lVar1 = uVar4 / 1000 - param_1;
  if (!SBORROW8(uVar4 / 1000,param_1)) {
    if (lVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037a4034);
      (*pcVar3)();
    }
    if (!SBORROW8(param_2,param_1)) {
      if (-1 < param_2 - param_1) {
        func_0x000107c5fb28(param_3,param_4);
        func_0x000106cc6134(param_3 + 0x20,uVar5,lVar1,param_2 - param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(param_3);
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1037a403c);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1037a4038);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1037a4030);
  (*pcVar3)();
}



/* Entry: 1037a403c; end: 1037a4047; -[_TtC31SCTracingServicesImplementation29TracingServicesImplementation insertAsyncSpanWithSpanStartTimeUs:spanEndTimeUs:name:] */

void FUN_1037a403c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_1037a3f00(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1037a4048; end: 1037a40bf;  */

void FUN_1037a4048(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  (*param_6)(param_3,param_4,param_5,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1037a40c0; end: 1037a40cb;  */

void FUN_1037a40c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *param_1;
  func_0x000107c61558(uVar1);
  uVar3 = *param_1;
  func_0x00010379fe08(unaff_x20 + 0x18,uVar2,uVar1);
  *param_1 = uVar3;
  return;
}



/* Entry: 1037a40cc; end: 1037a40fb;  */

void FUN_1037a40cc(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001037a2e08(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037a40fc; end: 1037a4107;  */

void FUN_1037a40fc(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *param_1;
  if ((*(long *)(lVar8 + 0x10) != 0) &&
     (uVar3 = uVar1, uVar4 = uVar1, func_0x000100f89a68(), (uVar4 & 1) != 0)) {
    puVar6 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar3 * 0x28);
    uStack_68 = *puVar6;
    uStack_48 = puVar6[4];
    uStack_50 = puVar6[3];
    uStack_60 = uVar2;
    uStack_58 = uVar5;
    func_0x000107c61434(uVar5);
    lVar8 = *param_1;
    func_0x000107c61558(lVar8);
    lVar7 = *param_1;
    FUN_10379fcb4(&uStack_68,uVar1,lVar8);
    *param_1 = lVar7;
  }
  return;
}



/* Entry: 1037a4108; end: 1037a41a3;  */

void FUN_1037a4108(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000100f89a68();
  if ((param_3 & 1) == 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x0001037a04f0();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x40);
    uVar4 = *puVar1;
    uVar6 = puVar1[3];
    uVar5 = puVar1[2];
    param_1[1] = puVar1[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = puVar1[4];
    uVar6 = puVar1[7];
    uVar5 = puVar1[6];
    param_1[5] = puVar1[5];
    param_1[4] = uVar4;
    param_1[7] = uVar6;
    param_1[6] = uVar5;
    func_0x0001037a4494(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Entry: 1037a41a4; end: 1037a4607;  */

void FUN_1037a41a4(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = param_2 + 0x40;
  uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar4 = ~uVar4;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar4);
    uVar9 = uVar9 + 1 & uVar4;
    do {
      uVar5 = *(ulong *)(param_2 + 0x28);
      lVar2 = *(long *)(param_2 + 0x30);
      puVar6 = (undefined8 *)(lVar2 + uVar8 * 8);
      func_0x000107c60688(uVar5,*puVar6);
      uVar5 = uVar5 & uVar4;
      if ((long)param_1 < (long)uVar9) {
        if (uVar9 <= uVar5 || (long)uVar5 <= (long)param_1) {
LAB_1037a4278:
          puVar7 = (undefined8 *)(lVar2 + param_1 * 8);
          if (((long)param_1 < (long)uVar8) || (puVar6 + 1 <= puVar7 || param_1 != uVar8)) {
            *puVar7 = *puVar6;
          }
          puVar6 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x28);
          puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x28);
          if (((long)param_1 < (long)uVar8) || (puVar7 + 5 <= puVar6 || param_1 != uVar8)) {
            uVar11 = puVar7[1];
            uVar10 = *puVar7;
            uVar13 = puVar7[3];
            uVar12 = puVar7[2];
            puVar6[4] = puVar7[4];
            puVar6[1] = uVar11;
            *puVar6 = uVar10;
            puVar6[3] = uVar13;
            puVar6[2] = uVar12;
            param_1 = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar5 && (long)uVar5 <= (long)param_1) goto LAB_1037a4278;
      uVar8 = uVar8 + 1 & uVar4;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar4 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar4) = *(ulong *)(lVar1 + uVar4) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1037a431c);
  (*pcVar3)();
}



/* Entry: 1037a4608; end: 1037a460f;  */

void FUN_1037a4608(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_70 [8];
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1037a22a8(uVar2,auStack_70);
  uVar3 = *param_1;
  func_0x000107c61558(uVar3);
  auStack_70[0] = *param_1;
  func_0x00010379ff5c(uVar2,uVar1,uVar3);
  *param_1 = auStack_70[0];
  return;
}



/* Entry: 1037a4610; end: 1037a4643;  */

undefined8 FUN_1037a4610(undefined8 param_1)

{
  (*(code *)(undefined *)0x1037a7ee4)();
  return param_1;
}



/* Entry: 1037a4644; end: 1037a465b;  */

void FUN_1037a4644(long *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  byte bVar3;
  long unaff_x20;
  undefined1 auStack_70 [64];
  byte *pbVar4;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*(long *)(*param_1 + 0x10) == 0) {
    bVar3 = 0;
  }
  else {
    pbVar4 = pbVar1;
    func_0x000100f89a68(uVar2);
    bVar3 = (byte)pbVar4;
  }
  *pbVar1 = bVar3 & 1;
  FUN_1037a4108(auStack_70,uVar2);
  FUN_1037a46b8(auStack_70);
  return;
}



/* Entry: 1037a465c; end: 1037a467b;  */

void FUN_1037a465c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1037a467c; end: 1037a4697;  */

void FUN_1037a467c(long param_1,long param_2)

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



/* Entry: 1037a4698; end: 1037a46b7;  */

void FUN_1037a4698(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea268);
  return;
}



/* Entry: 1037a46b8; end: 1037a46ff;  */

undefined8 FUN_1037a46b8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f92c80;
  func_0x0001000285a8(0x112f92c80,&UNK_10dc0ba20);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1037a4700; end: 1037a470f;  */

void FUN_1037a4700(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *param_1;
  if ((*(long *)(lVar8 + 0x10) != 0) &&
     (uVar3 = uVar1, uVar4 = uVar1, func_0x000100f89a68(), (uVar4 & 1) != 0)) {
    puVar6 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar3 * 0x28);
    uStack_68 = *puVar6;
    uStack_48 = puVar6[4];
    uStack_50 = puVar6[3];
    uStack_60 = uVar2;
    uStack_58 = uVar5;
    func_0x000107c61434(uVar5);
    lVar8 = *param_1;
    func_0x000107c61558(lVar8);
    lVar7 = *param_1;
    FUN_10379fcb4(&uStack_68,uVar1,lVar8);
    *param_1 = lVar7;
  }
  return;
}



/* Entry: 1037a4710; end: 1037a4a4f;  */

undefined8 **** FUN_1037a4710(long param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 ***pppuVar3;
  code *pcVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  long lVar7;
  undefined8 ***pppuVar8;
  int iVar9;
  ulong uVar10;
  undefined8 ****unaff_x20;
  int iVar11;
  undefined8 ****ppppuVar12;
  long lVar13;
  uint uVar14;
  byte abStack_7e [4];
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  iVar11 = (int)param_1;
  ppppuVar12 = (undefined8 ****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar2 >> 0x1e < 2) {
    if (uVar14 == 0) {
      uVar10 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar9 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar9,iVar11)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a44);
        (*pcVar4)();
      }
      uVar10 = (ulong)(iVar9 - iVar11);
    }
  }
  else {
    if (uVar14 != 2) goto LAB_1037a49e4;
    uVar10 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4780);
      (*pcVar4)();
    }
  }
  if (uVar10 != 0) {
    pppuStack_70 = (undefined8 ***)PTR___swiftEmptyArrayStorage_11034f1c8;
    pppuVar5 = (undefined8 ***)0x0;
    func_0x000100403514(0,uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),0);
    if (uVar2 >> 0x1e == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (long)iVar11;
      if (uVar14 == 2) {
        lVar13 = *(long *)(param_1 + 0x10);
      }
    }
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a40);
      (*pcVar4)();
    }
    do {
      pppuVar3 = pppuStack_70;
      if (uVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a24);
        (*pcVar4)();
      }
      if (uVar14 == 2) {
        if (lVar13 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a28);
          (*pcVar4)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a34);
          (*pcVar4)();
        }
        func_0x000107c5ec30();
        if (pppuVar5 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a4c);
          (*pcVar4)();
        }
        pppuVar6 = pppuVar5;
        func_0x000107c5ec3c();
        if (SBORROW8(lVar13,(long)pppuVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a3c);
          (*pcVar4)();
        }
LAB_1037a48a4:
        bVar1 = *(byte *)((long)pppuVar5 + (lVar13 - (long)pppuVar6));
      }
      else {
        if (uVar2 >> 0x1e == 1) {
          if ((lVar13 < iVar11) || (param_1 >> 0x20 <= lVar13)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a30);
            (*pcVar4)();
          }
          func_0x000107c5ec30();
          if (pppuVar5 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a48);
            (*pcVar4)();
          }
          pppuVar6 = pppuVar5;
          func_0x000107c5ec3c();
          if (SBORROW8(lVar13,(long)pppuVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a38);
            (*pcVar4)();
          }
          goto LAB_1037a48a4;
        }
        if ((long)(param_2 >> 0x30 & 0xff) <= lVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a4a2c);
          (*pcVar4)();
        }
        abStack_7e[0] = (byte)param_1;
        abStack_7e[1] = (char)((ulong)param_1 >> 8);
        abStack_7e[2] = (char)((ulong)param_1 >> 0x10);
        abStack_7e[3] = (char)((ulong)param_1 >> 0x18);
        uStack_7a = (char)((ulong)param_1 >> 0x20);
        uStack_79 = (char)((ulong)param_1 >> 0x28);
        uStack_78 = (char)((ulong)param_1 >> 0x30);
        uStack_77 = (char)((ulong)param_1 >> 0x38);
        uStack_76 = (char)param_2;
        uStack_75 = (char)(param_2 >> 8);
        uStack_74 = (char)(param_2 >> 0x10);
        uStack_73 = (char)(param_2 >> 0x18);
        uStack_72 = (char)(param_2 >> 0x20);
        uStack_71 = (char)(param_2 >> 0x28);
        bVar1 = abStack_7e[lVar13];
      }
      unaff_x20 = (undefined8 ****)(ulong)bVar1;
      lVar7 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar7 + 0x18) = 2;
      *(undefined8 *)(lVar7 + 0x10) = 1;
      *(undefined **)(lVar7 + 0x38) = PTR___ss5UInt8VN_11034eef8;
      *(undefined **)(lVar7 + 0x40) = PTR___ss5UInt8Vs7CVarArgsWP_11034ef10;
      *(byte *)(lVar7 + 0x20) = bVar1;
      pppuVar5 = (undefined8 ***)0x78323025;
      pppuVar8 = (undefined8 ***)0xe400000000000000;
      func_0x000107c5fb00(0x78323025,0xe400000000000000,lVar7);
      pppuStack_70 = pppuVar3;
      pppuVar6 = (undefined8 ***)pppuVar3[2];
      if ((undefined8 ***)((ulong)pppuVar3[3] >> 1) <= pppuVar6) {
        unaff_x20 = &pppuStack_70;
        func_0x000100403514((undefined8 ***)0x1 < pppuVar3[3],(undefined8 ***)((long)pppuVar6 + 1U),
                            1);
      }
      pppuStack_70[2] = (undefined8 ***)((long)pppuVar6 + 1U);
      pppuStack_70[(long)pppuVar6 * 2 + 4] = pppuVar5;
      pppuStack_70[(long)pppuVar6 * 2 + 5] = pppuVar8;
      lVar13 = lVar13 + 1;
      uVar10 = uVar10 - 1;
      ppppuVar12 = (undefined8 ****)pppuStack_70;
    } while (uVar10 != 0);
  }
LAB_1037a49e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x00010006c090(unaff_x20[2],unaff_x20[3]);
    func_0x000107c6142c(unaff_x20[5]);
    func_0x0001000834e4(unaff_x20 + 10);
    func_0x000107c615e8(unaff_x20[0xf]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_deallocClassInstance_11034f290)(unaff_x20,0x80,7);
    return unaff_x20;
  }
  return ppppuVar12;
}



/* Entry: 1037a4a50; end: 1037a4a8b;  */

void FUN_1037a4a50(void)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000834e4(unaff_x20 + 0x50);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037a4a8c; end: 1037a4ac3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a4a8c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_112f92d98;
  if (*(char *)(unaff_x20 + _DAT_112f92d98) == '\x01') {
    FUN_1037a4ac4();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 1037a4ac4; end: 1037a4b8f;  */

/* WARNING: Possible PIC construction at 0x0001037a4b1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a4b20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a4ac4(long param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  puVar1 = (undefined *)(lRam000000011380bb38 + 0x20);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ded80;
    func_0x000107c61168(PTR_PTR_1126ded80);
    func_0x000107c5a9c8();
    func_0x000107c61180();
    func_0x000107c3d64c(*(undefined8 *)(param_1 + _DAT_112f92cc0));
    func_0x000107c615e8(0);
  }
  else {
    func_0x000107c615f0(*(undefined8 *)(puVar1 + _DAT_1130809c0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1037a4b90; end: 1037a4bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a4b90(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_112f92da0;
  if (*(char *)(unaff_x20 + _DAT_112f92da0) == '\x01') {
    FUN_1037a4bc8();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 1037a4bc8; end: 1037a4cf3;  */

/* WARNING: Possible PIC construction at 0x0001037a4c18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037a4c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037a4cbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a4c4c) */
/* WARNING: Removing unreachable block (ram,0x0001037a4c5c) */
/* WARNING: Removing unreachable block (ram,0x0001037a4c1c) */
/* WARNING: Removing unreachable block (ram,0x0001037a4cc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a4bc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  lVar1 = lRam000000011380bb38;
  lVar2 = lRam000000011380bb38 + 0x28;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = lVar1 + 0x30;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61168(PTR_PTR_1126ded88);
      func_0x000107c5aa08();
      func_0x000107c61180();
      func_0x000107c615e8(0);
      func_0x000107c3d64c(*(undefined8 *)(param_1 + _DAT_112f92cc0));
      lVar2 = 0;
    }
    else {
      func_0x000107c4cd14();
      func_0x000107c61180();
    }
  }
  else {
    func_0x000107c4cd00();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1037a4cf4; end: 1037a4d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a4cf4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _DAT_112f92da8;
  if (*(char *)(unaff_x20 + _DAT_112f92da8) == '\x01') {
    FUN_1037a4d2c();
    *(undefined1 *)(unaff_x20 + lVar1) = 0;
  }
  return;
}



/* Entry: 1037a4d2c; end: 1037a4ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a4d2c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  if (lRam0000000112f92608 != -1) {
    func_0x000107c61568(0x112f92608,&UNK_100996768);
  }
  lVar1 = lRam000000011380bb38 + 0x38;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uStack_38 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11307a4d8);
    func_0x000107c6157c(uVar3);
    func_0x000107c61170(lVar1);
    func_0x0001000d224c(&uStack_38);
    func_0x000107c61574(uVar3);
  }
  puVar2 = PTR_PTR_1126deda0;
  func_0x000107c61168(PTR_PTR_1126deda0);
  func_0x000107c5aa20();
  func_0x000107c61180();
  func_0x000107c3d64c(*(undefined8 *)(param_1 + _DAT_112f92cc0));
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1037a4ec8; end: 1037a4f7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1037a4ec8(long param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar3 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined1 *)(lVar3 + _DAT_112f92cc8);
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
    *(undefined2 *)(puVar1 + 0x10) = 0x100;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    bVar2 = true;
  }
  else {
    FUN_1037a51fc();
    lVar3 = *(long *)(param_1 + _DAT_112f92cb8);
    func_0x000107c61170(param_1);
    bVar2 = lVar3 == 0;
  }
  return bVar2;
}



/* Entry: 1037a4f80; end: 1037a5087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1037a4f80(long param_1,byte param_2,undefined8 param_3,undefined4 param_4)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_1037a56fc();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + _DAT_11309bfc0);
      uVar5 = ((undefined8 *)(lVar3 + _DAT_11309bfc0))[1];
      func_0x00010006c00c(uVar4,uVar5);
      func_0x000107c61170(lVar3);
      goto LAB_1037a5018;
    }
  }
  uVar4 = 0;
  uVar5 = 0xf000000000000000;
LAB_1037a5018:
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + _DAT_112f92cc8);
    *pbVar1 = param_2 & 1;
    *(undefined8 *)(pbVar1 + 8) = param_3;
    pbVar1[0x10] = (byte)param_4 & 1;
    pbVar1[0x11] = (byte)((uint)param_4 >> 8) & 1;
    func_0x000107c61170();
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Entry: 1037a5088; end: 1037a515f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a5088(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c614f0();
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x000107c61168(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  func_0x000107c41570();
  func_0x000107c61180();
  func_0x000107c4ffa0();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126d20c8;
  func_0x000107c61168(PTR_PTR_1126d20c8);
  puVar2 = puVar1;
  func_0x000107c5a9bc();
  func_0x000107c61180();
  func_0x000107c5d350();
  func_0x000107c61170(puVar2);
  func_0x000107c5a9bc(puVar1);
  func_0x000107c61180();
  func_0x000107c5d350();
  func_0x000107c61170(puVar1);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037a5160; end: 1037a5183; -[SCTracingSessionServicesImplementation dealloc] */

void FUN_1037a5160(void)

{
  func_0x000107c61174();
  FUN_1037a5088();
  return;
}



/* Entry: 1037a5184; end: 1037a51fb; -[SCTracingSessionServicesImplementation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a5184(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112f92c98);
  func_0x0001000834e4(param_1 + _DAT_112f92ca0);
  func_0x0001000834e4(param_1 + _DAT_112f92ca8);
  func_0x0001000834e4(param_1 + _DAT_112f92cb0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f92cb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f92cc0));
  return;
}



/* Entry: 1037a51fc; end: 1037a56fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a51fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined **ppuVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long alStack_100 [3];
  uint uStack_e8;
  uint uStack_e4;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  lVar8 = _DAT_112f92cb8;
  pcVar1 = (char *)(unaff_x20 + _DAT_112f92cc8);
  if (*pcVar1 == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_112f92cb8) == 0) {
      lVar17 = *(long *)(pcVar1 + 8);
      bVar2 = pcVar1[0x10];
      bVar3 = pcVar1[0x11];
      lVar5 = 0;
      func_0x0001009cd618();
      FUN_1037aa674();
      if (param_4 != 0) {
        uStack_e8 = (uint)bVar3;
        uStack_e4 = (uint)bVar2;
        uStack_c8 = param_3;
        func_0x00010006c00c();
        func_0x00010006c00c(lVar5,param_2);
        lStack_d8 = param_4;
        func_0x000107c61434(param_4);
        uStack_e0 = param_2;
        func_0x00010006c090(lVar5,param_2);
        if (lRam0000000112f92608 != -1) {
          func_0x000107c61568(0x112f92608,&UNK_100996768);
        }
        lVar10 = lRam000000011380bb38;
        lVar7 = lRam000000011380bb38 + 0x20;
        func_0x000107c61618();
        if (lVar7 != 0) {
          func_0x000107c61170();
          FUN_1037a4a8c();
        }
        lVar7 = lVar10 + 0x28;
        func_0x000107c61618();
        if (lVar7 != 0) {
          lVar6 = lVar7;
          func_0x000107c4cd00();
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
          if (lVar6 != 0) {
            func_0x000107c61170(lVar6);
            FUN_1037a4b90();
          }
        }
        lVar7 = lVar10 + 0x38;
        func_0x000107c61618();
        if (lVar7 != 0) {
          func_0x000107c61170();
          FUN_1037a4cf4();
        }
        lVar10 = lVar10 + 0x40;
        func_0x000107c61618();
        if (lVar10 != 0) {
          func_0x000107c61170();
          func_0x0001037a4e18();
        }
        alStack_100[2] = *(undefined8 *)(unaff_x20 + _DAT_112f92cc0);
        func_0x000107c4edcc();
        lVar7 = 0;
        func_0x00010379d42c();
        alStack_100[1] = lVar7;
        func_0x000107c613fc();
        alStack_100[0] = lVar8;
        lVar8 = 0;
        lStack_d0 = lVar5;
        if (lVar17 == -1) {
          func_0x0001037a7290();
          lVar5 = lVar8;
          func_0x000107c613fc();
          FUN_1037a6418();
          ppuVar15 = &PTR_DAT_110692df0;
        }
        else {
          func_0x00010379b040();
          func_0x000107c613fc();
          lVar5 = lVar17;
          FUN_10379a7c8();
          ppuVar15 = &PTR_DAT_110692b20;
        }
        *(long *)(lVar7 + 0x28) = lVar8;
        *(undefined ***)(lVar7 + 0x30) = ppuVar15;
        *(long *)(lVar7 + 0x10) = lVar5;
        FUN_1037a63d4(unaff_x20 + _DAT_112f92c98,alStack_90);
        FUN_1037a63d4(unaff_x20 + _DAT_112f92ca0,auStack_b8);
        func_0x0001000c6518(alStack_90,lStack_78);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_78 + -8) + 0x40))
        ;
        puVar18 = (undefined8 *)((long)alStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12 + 0x10))(puVar18);
        func_0x0001000c6518(auStack_b8,lStack_a0);
        (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_a0 + -8) + 0x40))
        ;
        puVar20 = (undefined8 *)((long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        (**(code **)(extraout_x12_00 + 0x10))(puVar20);
        uVar16 = *puVar18;
        uVar19 = *puVar20;
        func_0x000107c6157c(lVar7);
        FUN_1037a5d10(uVar16,uVar19,lVar7,lVar17);
        func_0x0001000834e4(auStack_b8);
        func_0x0001000834e4(alStack_90);
        lVar5 = lStack_d0;
        uVar19 = uStack_e0;
        func_0x00010006c00c(lStack_d0,uStack_e0);
        lVar8 = lStack_d8;
        func_0x000107c61434();
        uVar9 = 0;
        func_0x000107c60f0c();
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1037a56fc);
          (*pcVar4)();
        }
        lStack_78 = alStack_100[1];
        ppuStack_70 = &PTR_DAT_110692ba8;
        lVar10 = 0;
        alStack_90[0] = lVar7;
        FUN_1037a5e60();
        func_0x000107c613fc();
        *(long *)(lVar10 + 0x10) = lVar5;
        *(undefined8 *)(lVar10 + 0x18) = uVar19;
        *(undefined8 *)(lVar10 + 0x20) = uStack_c8;
        *(long *)(lVar10 + 0x28) = lVar8;
        *(undefined1 *)(lVar10 + 0x30) = 1;
        *(long *)(lVar10 + 0x38) = lVar17;
        *(char *)(lVar10 + 0x40) = (char)uStack_e4;
        *(char *)(lVar10 + 0x41) = (char)uStack_e8;
        *(ulong *)(lVar10 + 0x48) = uVar9 / 1000;
        FUN_1037a5e80(alStack_90,lVar10 + 0x50);
        *(undefined8 *)(lVar10 + 0x78) = uVar16;
        func_0x000107c6157c(lVar7);
        uVar11 = uVar16;
        func_0x000107c61174(uVar16);
        func_0x0001048d89d8(uVar16);
        uVar16 = *(undefined8 *)(unaff_x20 + alStack_100[0]);
        *(long *)(unaff_x20 + alStack_100[0]) = lVar10;
        func_0x000107c6157c(lVar10);
        func_0x000107c61574(uVar16);
        func_0x000107c5bab0(alStack_100[2]);
        lVar17 = lVar5;
        FUN_1037a4710(lVar5,uVar19);
        uVar16 = 0x112d38270;
        alStack_90[0] = lVar17;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar12 = uVar16;
        func_0x00010011d734();
        uVar13 = 0xe000000000000000;
        func_0x000107c5fa80(0,0xe000000000000000,uVar16,uVar12);
        func_0x000107c61170(uVar11);
        func_0x000107c61574(lVar10);
        func_0x000107c6142c(lVar8);
        func_0x000107c6142c(uVar13);
        func_0x00010006c090(lVar5,uVar19);
        func_0x000107c6142c(lVar17);
        func_0x000107c61574(lVar7);
        lVar17 = *(long *)(pcVar1 + 8);
        bVar2 = pcVar1[0x10];
        bVar3 = pcVar1[0x11];
        func_0x0001037a954c(0);
        uVar14 = 2;
        if ((lVar17 == -1 & (bVar2 ^ 1) & bVar3) != 0) {
          uVar14 = 3;
        }
        FUN_1037a8830(uVar14,4);
        FUN_1037a5e98(lVar5,uVar19,uStack_c8,lVar8);
      }
    }
  }
  return;
}



/* Entry: 1037a56fc; end: 1037a5b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037a56fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  
  lVar1 = _DAT_112f92cb8;
  if (*(long *)(unaff_x20 + _DAT_112f92cb8) != 0) {
    func_0x000107c424e4(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f92cb8) + 0x78));
  }
  func_0x000107c5be28(*(undefined8 *)(unaff_x20 + _DAT_112f92cc0));
  lVar4 = 0;
  func_0x0001048d89d8();
  func_0x0001037a5a38();
  if (lVar4 == 0) {
    lVar1 = unaff_x20 + _DAT_112f92cc8;
    lVar4 = *(long *)(lVar1 + 8);
    cVar2 = *(char *)(lVar1 + 0x10);
    bVar3 = *(byte *)(lVar1 + 0x11);
    func_0x0001037a954c();
    if (lVar4 == -1 && cVar2 == '\0') goto LAB_1037a59d4;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c44c68();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = lVar5;
      func_0x000107c52060();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 != 0) {
        lVar5 = lVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar6);
        lVar6 = lVar5;
        FUN_1037a4710(lVar5,param_2);
        func_0x00010006c090(lVar5,param_2);
        uVar7 = 0x112d38270;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar11 = uVar7;
        func_0x00010011d734();
        uVar12 = 0xe000000000000000;
        func_0x000107c5fa80(0,0xe000000000000000,uVar7,uVar11);
        param_2 = uVar12;
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(uVar12);
      }
    }
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61574(uVar7);
    lVar1 = unaff_x20 + _DAT_112f92cc8;
    if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
      pbVar8 = PTR_PTR_1126d20c8;
      func_0x000107c61168();
      func_0x000107c5a9bc();
      func_0x000107c61180();
      pbVar9 = pbVar8;
      func_0x000107c446e8();
      func_0x000107c61170();
      if ((((ulong)pbVar9 & 1) == 0) && (func_0x0001005e3364(), (*pbVar8 & 1) == 0)) {
        param_2 = *(undefined8 *)(unaff_x20 + _DAT_112f92cb0 + 0x18);
        func_0x0001000a8868(unaff_x20 + _DAT_112f92cb0,param_2);
        FUN_10379c5d4(lVar4);
        func_0x0001037a954c(0);
        func_0x0001037a880c();
      }
    }
    lVar5 = lVar4;
    func_0x000107c44c68();
    func_0x000107c61180();
    if (lVar5 == 0) {
LAB_1037a5978:
      func_0x000107c61170(lVar4);
    }
    else {
      lVar6 = lVar5;
      func_0x000107c52060();
      func_0x000107c61180();
      func_0x000107c61170(lVar5);
      if (lVar6 == 0) goto LAB_1037a5978;
      lVar5 = lVar6;
      func_0x000107c5ee30(lVar6);
      uVar7 = param_2;
      func_0x000107c61170(lVar6);
      lVar6 = lVar4;
      func_0x000107c41214();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar10 = lVar6;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar6);
        uVar11 = 0;
        func_0x0001048d8dac(0);
        func_0x000107c610f8();
        func_0x0001048d8c20(lVar5,param_2,lVar10,uVar7,uVar11);
        func_0x000107c61170(lVar4);
        lVar4 = *(long *)(lVar1 + 8);
        cVar2 = *(char *)(lVar1 + 0x10);
        bVar3 = *(byte *)(lVar1 + 0x11);
        func_0x0001037a954c(0);
        if (((lVar4 == -1) && (cVar2 == '\0')) && ((bVar3 & 1) != 0)) {
          uVar7 = 3;
        }
        else {
          uVar7 = 2;
        }
        FUN_1037a8830(uVar7,5);
        return lVar5;
      }
      func_0x000107c61170(lVar4);
      func_0x00010006c090(lVar5,param_2);
    }
    lVar4 = *(long *)(lVar1 + 8);
    cVar2 = *(char *)(lVar1 + 0x10);
    bVar3 = *(byte *)(lVar1 + 0x11);
    func_0x0001037a954c(0);
    if ((lVar4 == -1) && (cVar2 == '\0')) {
LAB_1037a59d4:
      if ((bVar3 & 1) != 0) {
        uVar7 = 3;
        goto LAB_1037a59e4;
      }
    }
  }
  uVar7 = 2;
LAB_1037a59e4:
  FUN_1037a8830(uVar7,5);
  return 0;
}



/* Entry: 1037a5b64; end: 1037a5b8f; -[SCTracingSessionServicesImplementation init] */

void FUN_1037a5b64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCTracingServicesImplementation.TracingSessionServicesImplementation",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037a5b90);
  (*pcVar1)();
}



/* Entry: 1037a5b90; end: 1037a5ba7; -[SCTracingSessionServicesImplementation isTracing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1037a5b90(long param_1)

{
  return *(long *)(param_1 + _DAT_112f92cb8) != 0;
}



/* Entry: 1037a5ba8; end: 1037a5c0f; -[SCTracingSessionServicesImplementation traceSessionID] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a5ba8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_1 + _DAT_112f92cb8);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x10);
    uVar2 = *(undefined8 *)(lVar3 + 0x18);
    func_0x00010006c00c(uVar1,uVar2);
    uVar4 = uVar1;
    func_0x000107c5ee20(uVar1,uVar2);
    func_0x00010006c090(uVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1037a5c10; end: 1037a5c37; -[SCTracingSessionServicesImplementation startTracing] */

void FUN_1037a5c10(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1037a51fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1037a5c38; end: 1037a5cdb; -[SCTracingSessionServicesImplementation stopTracingIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037a5c38(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + _DAT_112f92cb8) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126d20c8;
    func_0x000107c61168();
    func_0x000107c61174(param_1);
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar1 = puVar2;
    func_0x000107c446e8();
    func_0x000107c61170(puVar2);
    if ((int)puVar1 == 0) {
      FUN_1037a56fc();
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61170(param_1);
      puVar2 = (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1037a5cdc; end: 1037a5d0f; -[SCTracingSessionServicesImplementation stopTracing] */

void FUN_1037a5cdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037a56fc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037a5d10; end: 1037a5e5f;  */

undefined8 FUN_1037a5d10(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long alStack_90 [4];
  undefined **ppuStack_70;
  undefined8 auStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar1 = 0;
  FUN_10379fb20();
  ppuStack_48 = &PTR_DAT_110692c08;
  lVar2 = 0;
  auStack_68[0] = param_1;
  lStack_50 = lVar1;
  FUN_10379facc();
  ppuStack_70 = &PTR_DAT_110692be0;
  uVar3 = 0;
  alStack_90[0] = param_2;
  alStack_90[3] = lVar2;
  FUN_1037a4698(0);
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_68,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)alStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  func_0x0001000c6518(alStack_90,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar5);
  uVar4 = *puVar6;
  FUN_1037a5ee4(uVar4,*puVar5,param_3,param_4,uVar3);
  func_0x0001000834e4(alStack_90);
  func_0x0001000834e4(auStack_68);
  return uVar4;
}



/* Entry: 1037a5e60; end: 1037a5e7f;  */

void FUN_1037a5e60(void)

{
  func_0x000107c61168(&PTR_PTR_112f92d10);
  return;
}



/* Entry: 1037a5e80; end: 1037a5e97;  */

undefined8 * FUN_1037a5e80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1037a5e98; end: 1037a5ec3;  */

void FUN_1037a5e98(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    func_0x00010006c090();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(in_x3);
    return;
  }
  return;
}



/* Entry: 1037a5ec4; end: 1037a5ee3;  */

void FUN_1037a5ec4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea388);
  return;
}



/* Entry: 1037a5ee4; end: 1037a63d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1037a5ee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  code *pcVar10;
  long *plVar11;
  ulong uVar12;
  long extraout_x8;
  long lVar13;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 auStack_d8 [3];
  undefined8 uStack_c0;
  undefined **ppuStack_b8;
  undefined8 auStack_b0 [3];
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined **ppuStack_68;
  
  lVar3 = param_5;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c60164();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = (long)&lStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  func_0x00010379d42c();
  ppuStack_68 = &PTR_DAT_110692ba8;
  uVar6 = 0;
  auStack_88[0] = param_3;
  uStack_70 = uVar5;
  FUN_10379fb20();
  ppuStack_90 = &PTR_DAT_110692c08;
  uVar5 = 0;
  auStack_b0[0] = param_1;
  uStack_98 = uVar6;
  FUN_10379facc();
  lVar4 = _DAT_112f92bf8;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuStack_b8 = &PTR_DAT_110692be0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  auStack_d8[0] = param_2;
  uStack_c0 = uVar5;
  FUN_103798f5c();
  puStack_e0 = puVar7;
  func_0x0001000285a8(0x112f92be0,&UNK_10dc0b9f0);
  func_0x000107c613fc();
  ppuVar8 = &puStack_e0;
  func_0x000100029ad0();
  *(undefined ***)(param_5 + lVar4) = ppuVar8;
  lVar4 = _DAT_112f92c08;
  func_0x000103799088();
  puStack_e0 = puVar9;
  func_0x0001000285a8(0x112f92be8,&UNK_10dc0b9f8);
  func_0x000107c613fc();
  ppuVar8 = &puStack_e0;
  func_0x000100029ad0();
  *(undefined ***)(param_5 + lVar4) = ppuVar8;
  lVar4 = _DAT_112f92c20;
  func_0x0001000285a8(0x112f921b8,&UNK_10dc0b460);
  func_0x000107c613fc();
  uVar5 = 0x1037a2320;
  func_0x0001048d9674(0x1037a2320,0);
  *(undefined8 *)(param_5 + lVar4) = uVar5;
  lVar4 = _DAT_112f92c18;
  func_0x0001000285a8(0x112f921c0,&UNK_10dc0b468);
  func_0x000107c613fc();
  uVar5 = 0x1037a234c;
  func_0x0001048d9674(0x1037a234c,0);
  *(undefined8 *)(param_5 + lVar4) = uVar5;
  lVar4 = _DAT_112f92c40;
  func_0x0001000285a8(0x112f921c8,&UNK_10dc0b470);
  func_0x000107c613fc();
  pcVar10 = FUN_1037a23b4;
  func_0x0001048d9674(FUN_1037a23b4,0);
  *(code **)(param_5 + lVar4) = pcVar10;
  puVar1 = (undefined8 *)(param_5 + _DAT_112f92c48);
  *puVar1 = 0xd000000000000019;
  puVar1[1] = 0x800000010f164560;
  FUN_1037a63d4(auStack_b0,param_5 + _DAT_112f92bf0);
  FUN_1037a63d4(auStack_d8,param_5 + _DAT_112f92c50);
  FUN_1037a63d4(auStack_88,param_5 + _DAT_112f92c10);
  puVar9 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168();
  func_0x000107c4f2b0();
  func_0x000107c61180();
  puVar7 = puVar9;
  func_0x000107c429e8();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar9 = puVar7;
  func_0x000107c5f9e8(puVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(puVar7);
  if (*(long *)(puVar9 + 0x10) == 0) {
    func_0x000107c6142c(puVar9);
  }
  else {
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x000107c61434(uVar2);
    uVar12 = uVar2;
    func_0x000100029284(uVar5);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(uVar2);
    if ((uVar12 & 1) != 0) {
      func_0x00010002868c(0);
      func_0x000107c60160(lVar13);
      uVar5 = 0xd000000000000015;
      func_0x000107c6016c(0xd000000000000015,0x800000010f164610,lVar13);
      *(undefined8 *)(param_5 + _DAT_112f92c28) = uVar5;
      uVar5 = 0xd000000000000015;
      func_0x000107c60170(0xd000000000000015,0x800000010f164610,0x705320636e797341,
                          0xea00000000006e61);
      *(undefined8 *)(param_5 + _DAT_112f92c00) = uVar5;
      uVar5 = 0xd000000000000015;
      func_0x000107c60170(0xd000000000000015,0x800000010f164610,0x6576452066726550,
                          0xea0000000000746e);
      *(undefined8 *)(param_5 + _DAT_112f92c38) = uVar5;
      uVar5 = 0xd000000000000015;
      func_0x000107c60170(0xd000000000000015,0x800000010f164610,0x7265746e756f43,0xe700000000000000)
      ;
      goto LAB_1037a6308;
    }
  }
  uVar5 = 0;
  func_0x00010002868c();
  func_0x000107c60168();
  *(undefined8 *)(param_5 + _DAT_112f92c28) = uVar5;
  func_0x000107c60168();
  *(undefined8 *)(param_5 + _DAT_112f92c00) = uVar5;
  func_0x000107c60168();
  *(undefined8 *)(param_5 + _DAT_112f92c38) = uVar5;
  func_0x000107c60168();
LAB_1037a6308:
  *(undefined8 *)(param_5 + _DAT_112f92c30) = uVar5;
  plVar11 = &lStack_f0;
  lStack_f0 = param_5;
  lStack_e8 = lVar3;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  lVar4 = 10000;
  if (param_4 != -1) {
    lVar4 = param_4;
  }
  uVar6 = *(undefined8 *)((long)plVar11 + _DAT_112f92bf8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar6);
  func_0x0001048d8e34(&puStack_e0);
  uVar5 = 0x112f92de0;
  func_0x0001000285a8(0x112f92de0,&UNK_10dc0baa8);
  func_0x000107c5f9f8(lVar4,uVar5);
  func_0x0001048d8eac(&puStack_e0);
  func_0x000107c61170(plVar11);
  func_0x000107c61574(uVar6);
  func_0x0001000834e4(auStack_88);
  func_0x0001000834e4(auStack_d8);
  func_0x0001000834e4(auStack_b0);
  return plVar11;
}



/* Entry: 1037a63d4; end: 1037a6417;  */

long FUN_1037a63d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1037a6418; end: 1037a680f;  */

void FUN_1037a6418(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  char *pcStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  func_0x000107c5ffd8();
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  puVar8 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5ffc4();
  puVar2 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0;
  func_0x0001000295c4();
  pcStack_88 = "com.snapchat.tracesdk";
  uStack_80 = uVar5;
  func_0x000107c5f808(lVar4);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar5 = 0x112d4ac68;
  FUN_1037a73e4(0x112d4ac68,puVar2,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar6 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar7 = 0x112d4ac78;
  func_0x0001037a7424(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar9,&puStack_68,uVar6,uVar7,lVar3,uVar5);
  (**(code **)(lStack_78 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar5 = 0xd000000000000021;
  func_0x000107c5ffec(0xd000000000000021,(ulong)pcStack_88 | 0x8000000000000000,lVar4,lVar9,puVar8,0
                     );
  *(undefined8 *)(unaff_x20 + 0x10) = uVar5;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined **)(unaff_x20 + 0x28) = puVar1;
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  return;
}



/* Entry: 1037a6810; end: 1037a68f3;  */

void FUN_1037a6810(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x18,auStack_58,0x21,0);
  uVar4 = *(ulong *)(param_1 + 0x18);
  func_0x000107c61434(param_2[1]);
  uVar1 = uVar4;
  func_0x000107c61558();
  *(ulong *)(param_1 + 0x18) = uVar4;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    func_0x000103799e58(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_1 + 0x18) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    func_0x000103799e58(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar3 = uVar4 + uVar1 * 0x30;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar7 = param_2[2];
  uVar9 = param_2[5];
  uVar8 = param_2[4];
  *(undefined8 *)(lVar3 + 0x38) = param_2[3];
  *(undefined8 *)(lVar3 + 0x30) = uVar7;
  *(undefined8 *)(lVar3 + 0x48) = uVar9;
  *(undefined8 *)(lVar3 + 0x40) = uVar8;
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  *(ulong *)(param_1 + 0x18) = uVar4;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1037a68f4; end: 1037a6b1f;  */

void FUN_1037a68f4(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  long lStack_e0;
  undefined *apuStack_d8 [9];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_e0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  puVar6 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar4 = &UNK_110692ed0;
  func_0x000107c613fc(&UNK_110692ed0,0x60,7);
  uVar11 = param_1[1];
  uVar10 = *param_1;
  uVar9 = param_1[2];
  *(undefined8 *)(puVar4 + 0x30) = param_1[3];
  *(undefined8 *)(puVar4 + 0x28) = uVar9;
  uVar9 = param_1[4];
  uVar13 = param_1[7];
  uVar12 = param_1[6];
  *(undefined8 *)(puVar4 + 0x40) = param_1[5];
  *(undefined8 *)(puVar4 + 0x38) = uVar9;
  *(undefined8 *)(puVar4 + 0x50) = uVar13;
  *(undefined8 *)(puVar4 + 0x48) = uVar12;
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x58) = param_1[8];
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  *(undefined8 *)(puVar4 + 0x18) = uVar10;
  uStack_70 = 0x1037a73cc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110692ee8;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c();
  func_0x00010379b7c8(param_1,apuStack_d8);
  func_0x000107c5f808(lVar7);
  apuStack_d8[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar9 = 0x112d4af88;
  FUN_1037a73e4(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar10 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar11 = 0x112d4af98;
  func_0x0001037a7424(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar6,apuStack_d8,uVar10,uVar11,lVar2,uVar9);
  func_0x000107c5ffe8(0,lVar7,puVar6,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_e0 + 8))(puVar6,lVar2);
  (**(code **)(lVar8 + 8))(lVar7,lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1037a6b20; end: 1037a6c17;  */

void FUN_1037a6b20(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_a0 [72];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x20,auStack_58,0x21,0);
  uVar4 = *(ulong *)(param_1 + 0x20);
  func_0x00010379b7c8(param_2,auStack_a0);
  uVar1 = uVar4;
  func_0x000107c61558();
  *(ulong *)(param_1 + 0x20) = uVar4;
  uVar2 = uVar4;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_103799d34(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_1 + 0x20) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar4 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_103799d34(uVar4,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  lVar3 = uVar4 + uVar1 * 0x48;
  uVar5 = *param_2;
  *(undefined8 *)(lVar3 + 0x28) = param_2[1];
  *(undefined8 *)(lVar3 + 0x20) = uVar5;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar10 = param_2[7];
  uVar9 = param_2[6];
  *(undefined8 *)(lVar3 + 0x60) = param_2[8];
  *(undefined8 *)(lVar3 + 0x48) = uVar8;
  *(undefined8 *)(lVar3 + 0x40) = uVar7;
  *(undefined8 *)(lVar3 + 0x58) = uVar10;
  *(undefined8 *)(lVar3 + 0x50) = uVar9;
  *(undefined8 *)(lVar3 + 0x38) = uVar6;
  *(undefined8 *)(lVar3 + 0x30) = uVar5;
  *(ulong *)(param_1 + 0x20) = uVar4;
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1037a6c18; end: 1037a6e1f;  */

void FUN_1037a6c18(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar4 = &UNK_110692e80;
  func_0x000107c613fc(&UNK_110692e80,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  uStack_70 = 0x1037a73c4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110692e98;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c();
  func_0x000107c6157c(param_1);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_1037a73e4(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x0001037a7424(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar2);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1037a6e20; end: 1037a6ec3;  */

void FUN_1037a6e20(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x28,auStack_48,0x21,0);
  func_0x00010379b334();
  uVar2 = *(ulong *)(param_1 + 0x28);
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_103799bcc(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x28) = uVar2;
  func_0x000107c614a8(auStack_48);
  func_0x000107c6157c(param_2);
  return;
}



/* Entry: 1037a6ec4; end: 1037a70cb;  */

void FUN_1037a6ec4(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  puVar1 = PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8;
  lStack_a0 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar4 = &UNK_110692e30;
  func_0x000107c613fc(&UNK_110692e30,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcStack_70 = FUN_1037a73a0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_110692e48;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  func_0x000107c6157c();
  func_0x000107c61174(param_1);
  func_0x000107c5f808(lVar10);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar6 = 0x112d4af88;
  FUN_1037a73e4(0x112d4af88,puVar1,PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  func_0x0001037a7424(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(puVar9,&puStack_98,uVar7,uVar8,lVar2,uVar6);
  func_0x000107c5ffe8(0,lVar10,puVar9,ppuVar5);
  func_0x000107c60bd0(ppuVar5);
  (**(code **)(lStack_a0 + 8))(puVar9,lVar2);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1037a70cc; end: 1037a716b;  */

void FUN_1037a70cc(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x30,auStack_48,0x21,0);
  FUN_10379b328();
  uVar2 = *(ulong *)(param_1 + 0x30);
  uVar3 = uVar2 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
    uVar2 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_103799a84(uVar2,uVar1 + 1,1);
    uVar3 = uVar2 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar3 + uVar1 * 8 + 0x20) = param_2;
  *(ulong *)(param_1 + 0x30) = uVar2;
  func_0x000107c614a8(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 1037a716c; end: 1037a724b;  */

void FUN_1037a716c(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x18,auStack_58,0,0);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61428(param_2 + 0x20,auStack_70,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61428(param_2 + 0x28,auStack_88,0,0);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61428(param_2 + 0x30,auStack_a0,0,0);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar1 = 0;
  func_0x0001037a836c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar3;
  *(undefined8 *)(lVar1 + 0x18) = uVar4;
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  *param_1 = lVar1;
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 1037a724c; end: 1037a72af;  */

void FUN_1037a724c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037a72b0; end: 1037a732f;  */

void FUN_1037a72b0(void)

{
  func_0x0001037a65f0();
  return;
}



/* Entry: 1037a7330; end: 1037a7387;  */

undefined8 FUN_1037a7330(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_38;
  
  uVar2 = *unaff_x20;
  uVar1 = 0;
  func_0x0001037a836c(0);
  func_0x000107c5ffe4(&uStack_38,FUN_1037a7388,uVar2,uVar1);
  return uStack_38;
}



/* Entry: 1037a7388; end: 1037a739f;  */

void FUN_1037a7388(void)

{
  FUN_1037a716c();
  return;
}



/* Entry: 1037a73a0; end: 1037a73e3;  */

void FUN_1037a73a0(void)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x30,auStack_48,0x21,0);
  FUN_10379b328();
  uVar4 = *(ulong *)(lVar2 + 0x30);
  uVar5 = uVar4 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar5 + 0x10);
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_103799a84(uVar4,uVar1 + 1,1);
    uVar5 = uVar4 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
  *(undefined8 *)(uVar5 + uVar1 * 8 + 0x20) = uVar3;
  *(ulong *)(lVar2 + 0x30) = uVar4;
  func_0x000107c614a8(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 1037a73e4; end: 1037a7467;  */

void FUN_1037a73e4(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 1037a7468; end: 1037a747f;  */

void FUN_1037a7468(long param_1,long param_2)

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



/* Entry: 1037a7480; end: 1037a74b7;  */

undefined8 FUN_1037a7480(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  return uVar3;
}



/* Entry: 1037a74b8; end: 1037a752f;  */

void FUN_1037a74b8(long param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = uVar3;
  func_0x000107c6157c(uVar3);
  (*pcVar1)();
  func_0x000107c61574(uVar3);
  if (param_2 >> 0x3c < 0xf) {
    uVar3 = uVar2;
    func_0x000107c5ee20(uVar2,param_2);
    func_0x0001000b44c0(uVar2,param_2);
  }
  else {
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1037a7530; end: 1037a756b; -[SCTracingSessionServicesLoader init] */

void FUN_1037a7530(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037a756c; end: 1037a759f;  */

void FUN_1037a756c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037a75a0; end: 1037a7a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1037a75a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    byte param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long *plVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  long lStack_120;
  undefined8 auStack_118 [3];
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined8 auStack_f0 [3];
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
  undefined8 auStack_c8 [3];
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  
  lVar8 = param_8;
  func_0x000107c614f0();
  uVar9 = 0;
  FUN_10379fb20();
  ppuStack_80 = &PTR_DAT_110692c08;
  uVar10 = 0;
  auStack_a0[0] = param_1;
  uStack_88 = uVar9;
  FUN_10379facc();
  ppuStack_a8 = &PTR_DAT_110692be0;
  uVar9 = 0;
  auStack_c8[0] = param_2;
  uStack_b0 = uVar10;
  FUN_10379fb50();
  ppuStack_d0 = &PTR_DAT_110692c20;
  uVar10 = 0;
  auStack_f0[0] = param_3;
  uStack_d8 = uVar9;
  FUN_10379cf40();
  ppuStack_f8 = &PTR_DAT_110692b90;
  *(undefined8 *)(param_8 + _DAT_112f92cb8) = 0;
  *(undefined1 *)(param_8 + _DAT_112f92d98) = 1;
  *(undefined1 *)(param_8 + _DAT_112f92da0) = 1;
  *(undefined1 *)(param_8 + _DAT_112f92da8) = 1;
  *(undefined1 *)(param_8 + _DAT_112f92db0) = 1;
  auStack_118[0] = param_4;
  uStack_100 = uVar10;
  FUN_1037a7a70(auStack_a0,param_8 + _DAT_112f92c98);
  FUN_1037a7a70(auStack_c8,param_8 + _DAT_112f92ca0);
  FUN_1037a7a70(auStack_f0,param_8 + _DAT_112f92ca8);
  FUN_1037a7a70(auStack_118,param_8 + _DAT_112f92cb0);
  *(undefined4 *)(param_8 + _DAT_112f92c88) = 0;
  *(undefined4 *)(param_8 + _DAT_112f92c90) = 0;
  puVar11 = PTR_PTR_1126deda8;
  func_0x000107c61168();
  func_0x000107c5a9bc();
  func_0x000107c61180();
  if (puVar11 != (undefined *)0x0) {
    *(undefined **)(param_8 + _DAT_112f92cc0) = puVar11;
    pbVar1 = (byte *)(param_8 + _DAT_112f92cc8);
    *pbVar1 = param_5 & 1;
    *(undefined8 *)(pbVar1 + 8) = param_6;
    pbVar1[0x10] = (byte)param_7 & 1;
    pbVar1[0x11] = (byte)((ulong)param_7 >> 8) & 1;
    plVar12 = &lStack_128;
    lStack_128 = param_8;
    lStack_120 = lVar8;
    func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
    func_0x000107c61180();
    plVar13 = plVar12;
    func_0x0001000ad07c();
    if ((char)*plVar13 == '\x01') {
      pcVar2 = (char *)((long)plVar12 + _DAT_112f92cc8);
      bVar3 = pcVar2[0x11];
      func_0x000107c61170(plVar12);
      if ((bVar3 & 1) != 0) {
        cVar4 = *pcVar2;
        uVar9 = *(undefined8 *)(pcVar2 + 8);
        cVar5 = pcVar2[0x10];
        cVar6 = pcVar2[0x11];
        puVar14 = PTR_PTR_1126d20c8;
        func_0x000107c61168();
        puVar15 = puVar14;
        func_0x000107c5a9bc();
        func_0x000107c61180();
        puVar11 = &UNK_110692f78;
        puVar16 = puVar11;
        func_0x000107c613fc(&UNK_110692f78,0x18,7);
        func_0x000107c61614(puVar16 + 0x10,plVar12);
        pcStack_138 = FUN_1037a7ab4;
        puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_150 = 0x42000000;
        pcStack_148 = FUN_1037a7480;
        puStack_140 = &UNK_110692f90;
        ppuVar17 = &puStack_158;
        puStack_130 = puVar16;
        func_0x000107c60bc4(ppuVar17);
        puVar16 = puStack_130;
        plVar13 = plVar12;
        func_0x000107c61174();
        func_0x000107c61574(puVar16);
        puVar16 = puVar15;
        func_0x000107c4fc10();
        func_0x000107c60bd0(ppuVar17);
        func_0x000107c61170(puVar15);
        *(int *)((long)plVar13 + _DAT_112f92c88) = (int)puVar16;
        func_0x000107c5a9bc();
        func_0x000107c61180();
        func_0x000107c613fc(&UNK_110692f78,0x18,7);
        func_0x000107c61614(puVar11 + 0x10,plVar13);
        func_0x000107c61170(plVar13);
        puVar16 = &UNK_110692fc8;
        func_0x000107c613fc(&UNK_110692fc8,0x2a,7);
        *(undefined **)(puVar16 + 0x10) = puVar11;
        puVar16[0x18] = cVar4;
        *(undefined8 *)(puVar16 + 0x20) = uVar9;
        puVar16[0x28] = cVar5;
        puVar16[0x29] = cVar6;
        pcStack_138 = (code *)0x1037a7ad8;
        puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_150 = 0x42000000;
        pcStack_148 = FUN_1037a74b8;
        puStack_140 = &UNK_110692fe0;
        ppuVar17 = &puStack_158;
        puStack_130 = puVar16;
        func_0x000107c60bc4(ppuVar17);
        func_0x000107c61574(puStack_130);
        puVar11 = puVar14;
        func_0x000107c4fc14();
        func_0x000107c60bd0(ppuVar17);
        func_0x000107c61170(puVar14);
        *(int *)((long)plVar13 + _DAT_112f92c90) = (int)puVar11;
      }
    }
    else {
      func_0x000107c61170(plVar12);
    }
    puVar11 = PTR_PTR_1126ad728;
    func_0x000107c610f8(PTR_PTR_1126ad728);
    func_0x000107c453e4();
    lVar8 = _DAT_112f92cc0;
    func_0x000107c3d64c(*(undefined8 *)((long)plVar12 + _DAT_112f92cc0));
    uVar9 = *(undefined8 *)((long)plVar12 + lVar8);
    puVar16 = PTR_PTR_1126ded78;
    func_0x000107c61168(PTR_PTR_1126ded78);
    func_0x000107c61174(uVar9);
    func_0x000107c5aa14(puVar16);
    func_0x000107c61180();
    func_0x000107c3d64c(uVar9);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar16);
    puVar16 = PTR_PTR_1126ad730;
    func_0x000107c610f8(PTR_PTR_1126ad730);
    func_0x000107c453e4();
    func_0x000107c3d64c(*(undefined8 *)((long)plVar12 + lVar8));
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar16);
    func_0x0001000834e4(auStack_118);
    func_0x0001000834e4(auStack_f0);
    func_0x0001000834e4(auStack_c8);
    func_0x0001000834e4(auStack_a0);
    return plVar12;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1037a7a50);
  (*pcVar7)();
}



/* Entry: 1037a7a50; end: 1037a7a6f;  */

void FUN_1037a7a50(void)

{
  func_0x000107c61168(&PTR_PTR_1128ea4a8);
  return;
}



/* Entry: 1037a7a70; end: 1037a7ab3;  */

long FUN_1037a7a70(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1037a7ab4; end: 1037a7b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1037a7ab4(void)

{
  undefined1 *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined1 *)(lVar3 + _DAT_112f92cc8);
    *puVar1 = 1;
    *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
    *(undefined2 *)(puVar1 + 0x10) = 0x100;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    bVar2 = true;
  }
  else {
    FUN_1037a51fc();
    lVar4 = *(long *)(lVar3 + _DAT_112f92cb8);
    func_0x000107c61170(lVar3);
    bVar2 = lVar4 == 0;
  }
  return bVar2;
}



/* Entry: 1037a7b08; end: 1037a838b;  */

long FUN_1037a7b08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1037a838c; end: 1037a877f;  */

void FUN_1037a838c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  func_0x000107c5ffd8();
  lVar9 = *(long *)(lVar2 + -8);
  lStack_70 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ffc4();
  puVar1 = PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVMa_11034f918;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar3 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar4 = 0;
  func_0x0001000295c4();
  uStack_78 = uVar4;
  func_0x000107c5f808(lVar3);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar4 = 0x112d4ac68;
  FUN_1037a958c(0x112d4ac68,puVar1,
                PTR___sSo17OS_dispatch_queueC8DispatchE10AttributesVs10SetAlgebraACMc_11034f928);
  uVar5 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar6 = 0x112d4ac78;
  func_0x0001037a95cc(0x112d4ac78,0x112d4ac70,&UNK_10d911480);
  func_0x000107c60264(lVar8,&puStack_68,uVar5,uVar6,lVar2,uVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_70);
  uVar4 = 0xd000000000000016;
  func_0x000107c5ffec(0xd000000000000016,0x800000010f164710,lVar3,lVar8,puVar7,0);
  uRam0000000112f93040 = uVar4;
  return;
}



/* Entry: 1037a8780; end: 1037a87e7;  */

/* WARNING: Possible PIC construction at 0x0001037a87d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037a87d4) */

void FUN_1037a8780(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ad738;
  func_0x000107c610f8(PTR_PTR_1126ad738);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000106cc7208(puVar1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


