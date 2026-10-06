/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d93fa8; end: 101d93ffb;  */

void FUN_101d93fa8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd0) = param_1;
  *(undefined1 *)(lVar1 + 0xec) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d93ffc,0,0);
  return;
}



/* Entry: 101d93ffc; end: 101d9413b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d93ffc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0xd0);
  if (*(char *)(unaff_x22 + 0xec) == '\x01') {
    *(long *)(unaff_x22 + 0x48) = lVar6;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x48,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar6 = *(long *)(unaff_x22 + 0x78);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    (**(code **)(lVar6 + 8))(uVar4,uVar1);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101d940c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xc0));
  plVar5 = (long *)(lVar8 + _DAT_112e2aea0);
  func_0x0001000a8868(plVar5,plVar5[3]);
  lVar9 = *plVar5;
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101d9413c;
  lVar8 = *(long *)(unaff_x22 + 0xa0);
  plVar5[7] = 0;
  plVar5[8] = lVar9;
  plVar5[5] = lVar6;
  plVar5[6] = (long)FUN_101d94f98;
  plVar5[4] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d95790,0,0);
  return;
}



/* Entry: 101d9413c; end: 101d94197;  */

void FUN_101d9413c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xe0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d94198;
  }
  else {
    pcVar1 = FUN_101d94200;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d94198; end: 101d941ff;  */

void FUN_101d94198(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61170(uVar4);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d941fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xd0));
  return;
}



/* Entry: 101d94200; end: 101d9427f;  */

void FUN_101d94200(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  uVar4 = *(undefined1 *)(unaff_x22 + 0xec);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c61170(uVar5);
  FUN_101d9449c(uVar6,uVar4);
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101d9427c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d94280; end: 101d942df;  */

void FUN_101d94280(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  (**(code **)(lVar3 + 8))(uVar1,uVar2);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101d942dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d942e0; end: 101d9449b;  */

ulong FUN_101d942e0(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d943c4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d943c8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
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
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101d931e0(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d9449c);
  (*pcVar2)();
}



/* Entry: 101d9449c; end: 101d94613;  */

void FUN_101d9449c(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101d94614; end: 101d9473b;  */

void FUN_101d94614(void)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_98 [72];
  
  func_0x0001000285a8(0x112e2af98,&UNK_10da13c30);
  lVar4 = 7;
  func_0x000107c602e8();
  lVar11 = 0;
  lVar1 = lVar4 + 0x38;
  do {
    bVar2 = *(byte *)(lVar11 + 0x112e2af90);
    uVar10 = (ulong)bVar2;
    func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar4 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
    uVar6 = uVar10 >> 6;
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
    uVar8 = 1L << (uVar10 & 0x3f);
    lVar5 = *(long *)(lVar4 + 0x30);
    if ((uVar8 & uVar7) != 0) {
      do {
        if (*(byte *)(lVar5 + uVar10) == bVar2) goto LAB_101d9468c;
        uVar10 = uVar10 + 1 & ~uVar9;
        uVar6 = uVar10 >> 6;
        uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
        uVar8 = 1L << (uVar10 & 0x3f);
      } while ((uVar8 & uVar7) != 0);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
    *(byte *)(lVar5 + uVar10) = bVar2;
    if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101d9473c);
      (*pcVar3)();
    }
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
LAB_101d9468c:
    lVar11 = lVar11 + 1;
    if (lVar11 == 7) {
      lRam0000000113804538 = lVar4;
      return;
    }
  } while( true );
}



/* Entry: 101d9473c; end: 101d947f7;  */

undefined1 FUN_101d9473c(uint param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  uVar2 = (ulong)(param_1 & 0xff);
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar1 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(param_2 + 0x30) + uVar2) == (param_1 & 0xff)) {
        return 1;
      }
      uVar2 = uVar2 + 1 & ~uVar1;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101d947f8; end: 101d9481f;  */

undefined4 FUN_101d947f8(ulong param_1)

{
  return *(undefined4 *)(&UNK_10da13c3c + (param_1 & 0xff) * 4);
}



/* Entry: 101d94820; end: 101d948cb;  */

void FUN_101d94820(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d948cc; end: 101d948db;  */

void FUN_101d948cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d948dc; end: 101d94943;  */

void FUN_101d948dc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e2af58;
  func_0x0001000285a8(0x112e2af58,&UNK_10da13c28);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d94944; end: 101d9494b;  */

undefined8 FUN_101d94944(void)

{
  return 0;
}



/* Entry: 101d9494c; end: 101d949a3;  */

undefined1 FUN_101d9494c(void)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte *unaff_x20;
  undefined1 auStack_78 [72];
  
  bVar1 = *unaff_x20;
  uVar3 = (ulong)bVar1;
  if (lRam0000000112e2af60 != -1) {
    func_0x000107c61568(0x112e2af60,FUN_101d94614);
  }
  lVar2 = lRam0000000113804538;
  if (*(long *)(lRam0000000113804538 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lRam0000000113804538 + 0x28));
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar4 = -1L << ((ulong)*(byte *)(lVar2 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(byte *)(*(long *)(lVar2 + 0x30) + uVar3) == bVar1) {
        return 1;
      }
      uVar3 = uVar3 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 101d949a4; end: 101d949a7;  */

void FUN_101d949a4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e2af08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e2af10;
  func_0x00010002969c(0x112e2af10,&UNK_10da13b40);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e2af08 = puVar2;
  return;
}



/* Entry: 101d949a8; end: 101d949f7;  */

void FUN_101d949a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e2af08 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e2af10;
  func_0x00010002969c(0x112e2af10,&UNK_10da13b40);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e2af08 = puVar2;
  return;
}



/* Entry: 101d949f8; end: 101d949fb;  */

void FUN_101d949f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2af18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13bc0;
  func_0x000107c61520(&UNK_10da13bc0,&UNK_110481bd8);
  puRam0000000112e2af18 = puVar1;
  return;
}



/* Entry: 101d949fc; end: 101d94a87;  */

void FUN_101d949fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2af18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13bc0;
  func_0x000107c61520(&UNK_10da13bc0,&UNK_110481bd8);
  puRam0000000112e2af18 = puVar1;
  return;
}



/* Entry: 101d94a88; end: 101d94aa3;  */

void FUN_101d94a88(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d94aa4,0,0);
  return;
}



/* Entry: 101d94aa4; end: 101d94bef;  */

void FUN_101d94aa4(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar1 = *(ulong *)(unaff_x22 + 0x50);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar3 = uVar1;
  func_0x000107c614f0();
  *(ulong *)(unaff_x22 + 0x90) = uVar1;
  (**(code **)(*(long *)(lVar2 + 8) + 0x10))();
  func_0x000107c615e8(uVar1);
  if (((uVar3 & 1) == 0) && (lVar4 == 2)) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x0001000d224c((ulong *)(unaff_x22 + 0x90));
    uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
    func_0x000107c43c78();
    func_0x000107c61180();
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar5;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x98;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101d94bf0;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,1);
    uVar5 = 0x112e2b048;
    func_0x0001000285a8(0x112e2b048,&UNK_10da13cc0);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(long *)(unaff_x22 + 0x70) = lVar4;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_101d94de0;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110481c80;
    func_0x000107c427c4(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101d94bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 101d94bf0; end: 101d94c47;  */

void FUN_101d94bf0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101d94c48;
  }
  else {
    pcVar1 = FUN_101d94d90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d94c48; end: 101d94d8f;  */

void FUN_101d94c48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar5 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c615e8(uVar1);
  lVar6 = lVar5;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (lVar6 == 0) {
    uVar1 = 0;
    lVar6 = 0;
  }
  else {
    lVar7 = lVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar6);
    uVar1 = 0;
    lVar6 = lVar7;
    func_0x000107c5ee24(0,lVar7,param_2);
    func_0x00010006c090(lVar7,param_2);
  }
  lVar7 = lVar5;
  func_0x000107c3ab84();
  func_0x000107c61180();
  if (lVar7 == 0) {
    uVar3 = 0;
    lVar7 = 0;
  }
  else {
    lVar2 = lVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar7);
    uVar3 = 0;
    lVar7 = lVar2;
    func_0x000107c5ee24(0,lVar2,param_2);
    func_0x00010006c090(lVar2,param_2);
  }
  uVar4 = 0;
  func_0x0001044d64d8(0);
  func_0x000107c610f8();
  func_0x0001044d5bec(uVar1,lVar6,uVar3,lVar7,uVar4);
  func_0x000107c61170(lVar5);
                    /* WARNING: Could not recover jumptable at 0x000101d94d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101d94d90; end: 101d94ddf;  */

void FUN_101d94d90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d94ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d94de0; end: 101d94e8b;  */

void FUN_101d94de0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d94e8c);
  (*pcVar1)();
}



/* Entry: 101d94e8c; end: 101d94eeb;  */

void FUN_101d94e8c(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101d94eec;
  plVar1[0x15] = param_2;
  plVar1[0x16] = lVar2;
  plVar1[0x14] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d94aa4,0,0);
  return;
}



/* Entry: 101d94eec; end: 101d94f33;  */

void FUN_101d94eec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d94f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d94f34; end: 101d94f4b;  */

long FUN_101d94f34(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 101d94f4c; end: 101d94f97;  */

uint FUN_101d94f4c(uint param_1,long param_2)

{
  func_0x000107c614f0();
  (**(code **)(*(long *)(param_2 + 8) + 0x20))();
  return param_1 & 1;
}



/* Entry: 101d94f98; end: 101d94fdf;  */

uint FUN_101d94f98(uint param_1)

{
  func_0x000100cd06d4();
  return param_1 & 1;
}



/* Entry: 101d94fe0; end: 101d95147;  */

int FUN_101d94fe0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d9505c;
        goto LAB_101d95040;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d95040:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101d9505c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d95148; end: 101d95187;  */

void FUN_101d95148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b050 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13d70;
  func_0x000107c61520(&UNK_10da13d70,&UNK_110481d30);
  puRam0000000112e2b050 = puVar1;
  return;
}



/* Entry: 101d95188; end: 101d9519b;  */

bool FUN_101d95188(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d9519c; end: 101d95247;  */

void FUN_101d9519c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d95248; end: 101d95257;  */

void FUN_101d95248(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d95258; end: 101d9529b;  */

void FUN_101d95258(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d9529c; end: 101d952b7;  */

void FUN_101d9529c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d952b8,0,0);
  return;
}



/* Entry: 101d952b8; end: 101d95347;  */

void FUN_101d952b8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d95348;
                    /* WARNING: Could not recover jumptable at 0x000101d95344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),uVar3,lVar2);
  return;
}



/* Entry: 101d95348; end: 101d953bf;  */

void FUN_101d95348(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(long *)(lVar3 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x58) = param_1 & 1;
    pcVar2 = FUN_101d953c0;
  }
  else {
    pcVar2 = FUN_101d95528;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d953c0; end: 101d95527;  */

void FUN_101d953c0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    puVar4 = *(undefined1 **)(unaff_x22 + 0x20);
    func_0x000107c60ea0();
    func_0x000107c4127c();
    func_0x000107c61180();
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x101d95528);
      (*UNRECOVERED_JUMPTABLE)();
    }
    puVar2 = puVar4;
    FUN_101d917b4();
    func_0x000107c61170();
    if (param_2 >> 0x3c < 0xf) {
      uVar1 = (uint)(param_2 >> 0x20);
      uVar3 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar3 == 0) {
          if ((param_2 & 0xff000000000000) == 0) {
LAB_101d954c0:
            func_0x0001000b44c0(puVar2,param_2);
            puVar4 = puVar2;
            goto LAB_101d954cc;
          }
        }
        else if ((long)(int)puVar2 == (long)puVar2 >> 0x20) goto LAB_101d954c0;
      }
      else if ((uVar3 != 2) || (*(long *)(puVar2 + 0x10) == *(long *)(puVar2 + 0x18)))
      goto LAB_101d954c0;
      lVar5 = *(long *)(unaff_x22 + 0x50);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
      puVar4 = puVar2;
      func_0x000102e8549c(puVar2,param_2);
      func_0x0001000b44c0(puVar2,param_2);
      func_0x000107c60e9c(param_1);
      FUN_101d958fc((uint)puVar4 & 1,uVar6);
      if (lVar5 == 0) goto LAB_101d954a4;
    }
    else {
LAB_101d954cc:
      FUN_101d95730();
      func_0x000107c613f8(&UNK_110481d30,puVar4,0,0);
      *puVar4 = 3;
      func_0x000107c61654();
      func_0x000107c60e9c(param_1);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
LAB_101d954a4:
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d95520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d95528; end: 101d95553;  */

void FUN_101d95528(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d95530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d95554; end: 101d955e3;  */

void FUN_101d95554(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d955e4;
                    /* WARNING: Could not recover jumptable at 0x000101d955e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),uVar3,lVar2);
  return;
}



/* Entry: 101d955e4; end: 101d9565b;  */

void FUN_101d955e4(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x60) = param_1 & 1;
    pcVar2 = FUN_101d9565c;
  }
  else {
    pcVar2 = FUN_101d95724;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d9565c; end: 101d95723;  */

void FUN_101d9565c(undefined1 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x60) == '\x01') {
    if (*(long *)(unaff_x22 + 0x20) - 3U < 2) {
      lVar1 = *(long *)(unaff_x22 + 0x58);
      FUN_101d959ec(*(undefined8 *)(unaff_x22 + 0x28),&SUB_102e8523c);
joined_r0x000101d956cc:
      if (lVar1 == 0) goto LAB_101d956d0;
    }
    else {
      if (*(long *)(unaff_x22 + 0x20) == 1) {
        lVar1 = *(long *)(unaff_x22 + 0x58);
        FUN_101d959ec(*(undefined8 *)(unaff_x22 + 0x28),&UNK_102e8536c);
        goto joined_r0x000101d956cc;
      }
      FUN_101d95730();
      func_0x000107c613f8(&UNK_110481d30,param_1,0,0);
      *param_1 = 2;
      func_0x000107c61654();
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
LAB_101d956d0:
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d95720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d95724; end: 101d9572f;  */

void FUN_101d95724(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d9572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d95730; end: 101d9576f;  */

void FUN_101d95730(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b0f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13d98;
  func_0x000107c61520(&UNK_10da13d98,&UNK_110481d30);
  puRam0000000112e2b0f8 = puVar1;
  return;
}



/* Entry: 101d95770; end: 101d9578f;  */

void FUN_101d95770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d95790,0,0);
  return;
}



/* Entry: 101d95790; end: 101d9581f;  */

void FUN_101d95790(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  func_0x000107c614f0(uVar3);
  piVar5 = *(int **)(lVar2 + 0x30);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d95820;
                    /* WARNING: Could not recover jumptable at 0x000101d9581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),uVar3,lVar2);
  return;
}



/* Entry: 101d95820; end: 101d95897;  */

void FUN_101d95820(byte param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x50));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(byte *)(lVar3 + 0x60) = param_1 & 1;
    pcVar2 = FUN_101d95898;
  }
  else {
    pcVar2 = FUN_101d95b34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d95898; end: 101d958fb;  */

void FUN_101d95898(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long unaff_x22;
  
  if ((*(char *)(unaff_x22 + 0x60) == '\x01') &&
     (lVar1 = *(long *)(unaff_x22 + 0x58),
     FUN_101d958fc(*(long *)(unaff_x22 + 0x20) == 2,*(undefined8 *)(unaff_x22 + 0x28)), lVar1 != 0))
  {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000101d958f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d958fc; end: 101d959eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d958fc(ulong param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  ulong uVar3;
  
  func_0x000107c427c0();
  func_0x000107c61180();
  if ((param_1 & 1) == 0) {
    if (param_2 == (undefined1 *)0x0) {
      return;
    }
    uVar2 = 1;
  }
  else {
    if (param_2 == (undefined1 *)0x0) {
LAB_101d95990:
      uVar2 = 0;
      goto LAB_101d959ac;
    }
    uVar1 = *(ulong *)((long)(param_2 + _DAT_113080550) + 8);
    if (uVar1 != 0) {
      uVar3 = *(ulong *)(param_2 + _DAT_113080550) & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar3 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar3 != 0) {
        uVar1 = *(ulong *)((long)(param_2 + _DAT_113080558) + 8);
        uVar2 = 0;
        if (uVar1 == 0) goto LAB_101d959a8;
        uVar3 = *(ulong *)(param_2 + _DAT_113080558);
        func_0x000107c61170();
        uVar3 = uVar3 & 0xffffffffffff;
        if ((uVar1 & 0x2000000000000000) != 0) {
          uVar3 = uVar1 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          return;
        }
        goto LAB_101d95990;
      }
    }
    uVar2 = 0;
  }
LAB_101d959a8:
  func_0x000107c61170();
LAB_101d959ac:
  FUN_101d95730();
  func_0x000107c613f8(&UNK_110481d30,param_2,0,0);
  *param_2 = uVar2;
  func_0x000107c61654();
  return;
}



/* Entry: 101d959ec; end: 101d95b33;  */

void FUN_101d959ec(undefined1 *param_1,code *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar3 = param_1;
  pcVar2 = param_2;
  func_0x000107c60ea0();
  puVar4 = param_1;
  func_0x000107c4127c();
  func_0x000107c61180();
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101d95b34);
    (*pcVar2)();
  }
  puVar5 = puVar4;
  FUN_101d917b4();
  func_0x000107c61170();
  if ((ulong)pcVar2 >> 0x3c < 0xf) {
    uVar1 = (uint)((ulong)pcVar2 >> 0x20);
    uVar6 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar6 == 0) {
        if (((ulong)pcVar2 & 0xff000000000000) != 0) {
LAB_101d95a84:
          puVar4 = puVar5;
          (*param_2)(puVar5,pcVar2);
          func_0x0001000b44c0(puVar5,pcVar2);
          func_0x000107c60e9c(puVar3);
          FUN_101d958fc((uint)puVar4 & 1,param_1);
          return;
        }
      }
      else if ((long)(int)puVar5 != (long)puVar5 >> 0x20) goto LAB_101d95a84;
    }
    else if ((uVar6 == 2) && (*(long *)(puVar5 + 0x10) != *(long *)(puVar5 + 0x18)))
    goto LAB_101d95a84;
    func_0x0001000b44c0(puVar5,pcVar2);
    puVar4 = puVar5;
  }
  FUN_101d95730();
  func_0x000107c613f8(&UNK_110481d30,puVar4,0,0);
  *puVar4 = 3;
  func_0x000107c61654();
  func_0x000107c60e9c(puVar3);
  return;
}



/* Entry: 101d95b34; end: 101d95b37;  */

void FUN_101d95b34(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d9572c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d95b38; end: 101d95b83;  */

void FUN_101d95b38(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d95b84; end: 101d95cb3;  */

undefined8 FUN_101d95b84(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e2b1a8,&UNK_10da13f80);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_58);
  uVar4 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puVar2 = &UNK_110481df0;
  func_0x000107c613fc(&UNK_110481df0,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puVar3 = &UNK_110481e18;
  func_0x000107c613fc(&UNK_110481e18,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(long *)(puVar3 + 0x28) = lVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(lVar1);
  func_0x00010090569c(FUN_101d95f48,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_58);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101d95cb4; end: 101d95f47;  */

void FUN_101d95cb4(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  undefined1 *unaff_x22;
  long lVar6;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    lVar5 = param_4;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c61428(param_1 + 0x10,(undefined1 *)((long)register0x00000008 + -0x60),0,0);
    puVar2 = param_1 + 0x10;
    func_0x000107c61648();
    puVar4 = (undefined1 *)0x0;
    if (puVar2 == (undefined1 *)0x0) {
LAB_101d95e4c:
      FUN_101d95f54();
      unaff_x21 = &UNK_110481eb8;
      func_0x000107c613f8(&UNK_110481eb8,puVar4,0,0);
      *puVar4 = 0;
LAB_101d95f04:
      func_0x00010488ade0();
      func_0x000107c614ac(unaff_x21);
      unaff_x22 = param_1;
    }
    else {
      lVar6 = *(long *)(puVar2 + 0x10);
      func_0x000107c615f0(lVar6);
      func_0x000107c61574(puVar2);
      func_0x000107c5fadc(param_2,param_3);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      lVar3 = lVar6;
      func_0x000107c3e388();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(param_2);
      puVar1 = PTR___sypN_11034f1a8;
      param_1 = *(undefined1 **)((long)register0x00000008 + -0xa8);
      if (lVar3 == 0) {
        puVar4 = param_1;
        func_0x000107c61174(param_1);
        func_0x000107c5ed30();
        func_0x000107c61170(puVar4);
        func_0x000107c61654();
        puVar4 = param_1;
        func_0x000107c614ac();
        unaff_x23 = puVar2;
        goto LAB_101d95e4c;
      }
      lVar6 = lVar3;
      func_0x000107c5f9e8(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      func_0x000107c61174(param_1);
      func_0x000107c61170(lVar3);
      unaff_x21 = *(undefined **)PTR__NSFileSize_110345448;
      *(undefined **)((long)register0x00000008 + -0xb8) = unaff_x21;
      param_1 = (undefined1 *)0x0;
      FUN_101a64068();
      unaff_x23 = param_1;
      FUN_101d58c78();
      func_0x000107c61174(unaff_x21);
      puVar2 = param_1;
      func_0x000107c602d4((undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0xb8),param_1,unaff_x23);
      if (*(long *)(lVar6 + 0x10) == 0) {
LAB_101d95e7c:
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      }
      else {
        func_0x000107c61434(lVar6);
        puVar4 = (undefined1 *)((long)register0x00000008 + -0xa8);
        func_0x000100df95d0(puVar4);
        if (((ulong)puVar2 & 1) == 0) {
          func_0x000107c6142c(lVar6);
          goto LAB_101d95e7c;
        }
        func_0x0001000bb420(*(long *)(lVar6 + 0x38) + (long)puVar4 * 0x20,
                            (undefined1 *)((long)register0x00000008 + -0x80));
        func_0x000107c6142c(lVar6);
      }
      func_0x000107c6142c(lVar6);
      func_0x0001007bbff0((undefined1 *)((long)register0x00000008 + -0xa8));
      unaff_x24 = puVar1;
      if (*(long *)((long)register0x00000008 + -0x68) == 0) {
        puVar2 = (undefined1 *)((long)register0x00000008 + -0x80);
        func_0x00010006e7f4();
LAB_101d95edc:
        FUN_101d95f54();
        unaff_x21 = &UNK_110481eb8;
        func_0x000107c613f8(&UNK_110481eb8,puVar2,0,0);
        *puVar2 = 1;
        goto LAB_101d95f04;
      }
      puVar2 = (undefined1 *)((long)register0x00000008 + -0xb8);
      func_0x000107c6147c(puVar2,(undefined1 *)((long)register0x00000008 + -0x80),puVar1 + 8,
                          PTR___sSiN_11034deb0,6);
      if (((ulong)puVar2 & 1) == 0) goto LAB_101d95edc;
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      func_0x000100b60084((undefined1 *)((long)register0x00000008 + -0xa8));
      unaff_x22 = param_1;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_101d95f48;
    func_0x000107c60e78();
    param_1 = *(undefined1 **)(lVar5 + 0x10);
    param_2 = *(undefined8 *)(lVar5 + 0x18);
    param_3 = *(undefined8 *)(lVar5 + 0x20);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    param_4 = *(long *)(lVar5 + 0x28);
    unaff_x19 = lVar5;
    unaff_x20 = lVar5;
  } while( true );
}



/* Entry: 101d95f48; end: 101d95f53;  */

void FUN_101d95f48(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puVar7;
  long unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  do {
    puVar9 = *(undefined1 **)(unaff_x20 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    lVar2 = *(long *)(unaff_x20 + 0x28);
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(undefined1 **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(undefined1 **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x48) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c61428(puVar9 + 0x10,(undefined1 *)((long)register0x00000008 + -0x60),0,0);
    puVar4 = puVar9 + 0x10;
    func_0x000107c61648();
    puVar7 = (undefined1 *)0x0;
    if (puVar4 == (undefined1 *)0x0) {
LAB_101d95e4c:
      FUN_101d95f54();
      unaff_x21 = &UNK_110481eb8;
      func_0x000107c613f8(&UNK_110481eb8,puVar7,0,0);
      *puVar7 = 0;
LAB_101d95f04:
      func_0x00010488ade0();
      func_0x000107c614ac(unaff_x21);
    }
    else {
      lVar8 = *(long *)(puVar4 + 0x10);
      func_0x000107c615f0(lVar8);
      func_0x000107c61574(puVar4);
      func_0x000107c5fadc(uVar5,uVar1);
      *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
      lVar6 = lVar8;
      func_0x000107c3e388();
      func_0x000107c61180();
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(uVar5);
      puVar3 = PTR___sypN_11034f1a8;
      puVar9 = *(undefined1 **)((long)register0x00000008 + -0xa8);
      if (lVar6 == 0) {
        puVar7 = puVar9;
        func_0x000107c61174(puVar9);
        func_0x000107c5ed30();
        func_0x000107c61170(puVar7);
        func_0x000107c61654();
        puVar7 = puVar9;
        func_0x000107c614ac();
        unaff_x23 = puVar4;
        goto LAB_101d95e4c;
      }
      lVar8 = lVar6;
      func_0x000107c5f9e8(lVar6,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                          PTR___ss11AnyHashableVSHsWP_11034e450);
      func_0x000107c61174(puVar9);
      func_0x000107c61170(lVar6);
      unaff_x21 = *(undefined **)PTR__NSFileSize_110345448;
      *(undefined **)((long)register0x00000008 + -0xb8) = unaff_x21;
      puVar9 = (undefined1 *)0x0;
      FUN_101a64068();
      unaff_x23 = puVar9;
      FUN_101d58c78();
      func_0x000107c61174(unaff_x21);
      puVar4 = puVar9;
      func_0x000107c602d4((undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0xb8),puVar9,unaff_x23);
      if (*(long *)(lVar8 + 0x10) == 0) {
LAB_101d95e7c:
        *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
      }
      else {
        func_0x000107c61434(lVar8);
        puVar7 = (undefined1 *)((long)register0x00000008 + -0xa8);
        func_0x000100df95d0(puVar7);
        if (((ulong)puVar4 & 1) == 0) {
          func_0x000107c6142c(lVar8);
          goto LAB_101d95e7c;
        }
        func_0x0001000bb420(*(long *)(lVar8 + 0x38) + (long)puVar7 * 0x20,
                            (undefined1 *)((long)register0x00000008 + -0x80));
        func_0x000107c6142c(lVar8);
      }
      func_0x000107c6142c(lVar8);
      func_0x0001007bbff0((undefined1 *)((long)register0x00000008 + -0xa8));
      unaff_x24 = puVar3;
      if (*(long *)((long)register0x00000008 + -0x68) == 0) {
        puVar4 = (undefined1 *)((long)register0x00000008 + -0x80);
        func_0x00010006e7f4();
LAB_101d95edc:
        FUN_101d95f54();
        unaff_x21 = &UNK_110481eb8;
        func_0x000107c613f8(&UNK_110481eb8,puVar4,0,0);
        *puVar4 = 1;
        goto LAB_101d95f04;
      }
      puVar4 = (undefined1 *)((long)register0x00000008 + -0xb8);
      func_0x000107c6147c(puVar4,(undefined1 *)((long)register0x00000008 + -0x80),puVar3 + 8,
                          PTR___sSiN_11034deb0,6);
      if (((ulong)puVar4 & 1) == 0) goto LAB_101d95edc;
      *(undefined8 *)((long)register0x00000008 + -0xa8) =
           *(undefined8 *)((long)register0x00000008 + -0xb8);
      func_0x000100b60084((undefined1 *)((long)register0x00000008 + -0xa8));
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
      return;
    }
    unaff_x30 = FUN_101d95f48;
    func_0x000107c60e78();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xc0);
    unaff_x19 = lVar2;
    unaff_x20 = lVar2;
    unaff_x22 = puVar9;
  } while( true );
}



/* Entry: 101d95f54; end: 101d95f93;  */

void FUN_101d95f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b1b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13ef4;
  func_0x000107c61520(&UNK_10da13ef4,&UNK_110481eb8);
  puRam0000000112e2b1b0 = puVar1;
  return;
}



/* Entry: 101d95f94; end: 101d960fb;  */

int FUN_101d95f94(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101d96010;
        goto LAB_101d95ff4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101d95ff4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_101d96010:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101d960fc; end: 101d9613b;  */

void FUN_101d960fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b1b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13ecc;
  func_0x000107c61520(&UNK_10da13ecc,&UNK_110481eb8);
  puRam0000000112e2b1b8 = puVar1;
  return;
}



/* Entry: 101d9613c; end: 101d9614f;  */

bool FUN_101d9613c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101d96150; end: 101d961fb;  */

void FUN_101d96150(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d961fc; end: 101d9620b;  */

void FUN_101d961fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d9620c; end: 101d9622b;  */

void FUN_101d9620c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Entry: 101d9622c; end: 101d9628b; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl15UploadingHelper init] */

void FUN_101d9622c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupUploadMediaStepServicesImpl.UploadingHelper",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d96258);
  (*pcVar1)();
}



/* Entry: 101d9628c; end: 101d962f3; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl15UploadingHelper .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d962a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d962d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d962ac) */
/* WARNING: Removing unreachable block (ram,0x000101d962dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9628c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2b1c0));
  return;
}



/* Entry: 101d962f4; end: 101d96313;  */

void FUN_101d962f4(void)

{
  func_0x000107c61168(&PTR_PTR_112803ad0);
  return;
}



/* Entry: 101d96314; end: 101d96403;  */

undefined8
FUN_101d96314(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112e2b220,&UNK_10da13f90);
  puVar1 = &UNK_1104821a8;
  func_0x000107c613fc(&UNK_1104821a8,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined4 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(int *)(puVar1 + 0x38) = (int)param_7;
  puVar1[0x3c] = (char)((ulong)param_7 >> 0x20);
  *(undefined4 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = unaff_x20;
  func_0x000107c61174(param_6);
  func_0x000107c61434(param_3);
  func_0x000107c61174(param_5);
  uVar2 = 0;
  func_0x000104889654(0,1,FUN_101d97830,puVar1);
  func_0x000107c61574(puVar1);
  return uVar2;
}



/* Entry: 101d96404; end: 101d96747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d96404(undefined8 *param_1,float param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,ulong param_8)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  ulong uVar7;
  
  if (param_7 == 0) {
LAB_101d964a0:
    puVar3 = PTR_PTR_1126b5980;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5fadc(param_3,param_4);
    puVar4 = puVar3;
    func_0x000107c5e4cc();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_3);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d96730);
      (*pcVar2)();
    }
    puVar5 = puVar4;
    func_0x000107c5e860();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d96734);
      (*pcVar2)();
    }
    puVar4 = puVar5;
    func_0x000107c5e44c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d96738);
      (*pcVar2)();
    }
    puVar5 = puVar4;
    func_0x000107c5e6a4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d9673c);
      (*pcVar2)();
    }
    puVar4 = puVar5;
    func_0x000107c5e4f8();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d96740);
      (*pcVar2)();
    }
    puVar5 = puVar4;
    func_0x000107c5e7b4();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d96744);
      (*pcVar2)();
    }
    puVar4 = puVar5;
    func_0x000107c5e530();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d96748);
      (*pcVar2)();
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46978(param_2 * 1000.0);
    puVar5 = puVar4;
    func_0x000107c5e524();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    if ((param_8 & 0xff00000000) != 0x100000000) {
      func_0x000107c5e85c(puVar5);
      func_0x000107c61180();
      func_0x000107c61170();
    }
    puVar4 = puVar5;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    if (puVar4 != (undefined1 *)0x0) {
      func_0x000107c61170(puVar5);
      *param_1 = puVar4;
      return;
    }
    FUN_101d976f4();
    func_0x000107c613f8(&UNK_110482248,puVar4,0,0);
    *puVar4 = 1;
    func_0x000107c61654();
    func_0x000107c61170(puVar5);
    return;
  }
  uVar7 = ((ulong *)(param_7 + _DAT_113080550))[1];
  if (uVar7 != 0) {
    uVar1 = *(ulong *)(param_7 + _DAT_113080550) & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar1 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar7 = ((ulong *)(param_7 + _DAT_113080558))[1];
      if (uVar7 != 0) {
        uVar1 = *(ulong *)(param_7 + _DAT_113080558) & 0xffffffffffff;
        if ((uVar7 & 0x2000000000000000) != 0) {
          uVar1 = uVar7 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) goto LAB_101d964a0;
      }
      FUN_101d976f4();
      func_0x000107c613f8(&UNK_110482248,param_3,0,0);
      uVar6 = 6;
      goto LAB_101d966fc;
    }
  }
  FUN_101d976f4();
  func_0x000107c613f8(&UNK_110482248,param_3,0,0);
  uVar6 = 5;
LAB_101d966fc:
  *param_3 = uVar6;
  func_0x000107c61654();
  return;
}



/* Entry: 101d96748; end: 101d96933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d96748(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  
  lVar2 = param_3;
  func_0x000107c4127c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    FUN_101d96934();
    func_0x000107c61170(lVar2);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e2b1d8);
    puVar4 = &UNK_110481f50;
    func_0x000107c613fc(&UNK_110481f50,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    func_0x000107c6157c(uVar8);
    func_0x000107c61434(param_2);
    uVar8 = 0;
    func_0x000100775264(0,1,FUN_101d97684,puVar4,PTR___sSiN_11034deb0);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110481f78;
    puVar5 = puVar4;
    func_0x000107c613fc(&UNK_110481f78,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    uVar6 = 0;
    func_0x0001048898b8(0,1,0x101d976a0,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(puVar5);
    func_0x000107c613fc(&UNK_110481f78,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_110481fa0;
    func_0x000107c613fc(&UNK_110481fa0,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = param_3;
    puVar4 = &UNK_110481fc8;
    func_0x000107c613fc(&UNK_110481fc8,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_101d976b8;
    *(undefined **)(puVar4 + 0x18) = puVar5;
    uVar8 = 0;
    func_0x000107c5ede0(0);
    func_0x000107c61174(param_3);
    uVar7 = 0;
    func_0x0001048898b8(0,1,FUN_101d976c0,puVar4,uVar8);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar4);
    return uVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d96934);
  (*pcVar1)();
}



/* Entry: 101d96934; end: 101d96a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d96934(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e2b1a8,&UNK_10da13f80);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e2b1d0);
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar2 = &UNK_1104820b8;
  func_0x000107c613fc(&UNK_1104820b8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(long *)(puVar2 + 0x18) = lVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(lVar1);
  func_0x000107c615f0(uVar4);
  func_0x00010090569c(0x101d977a4,puVar2,uVar3);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar3);
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 101d96a40; end: 101d96ae3;  */

void FUN_101d96a40(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  uVar2 = *param_2;
  func_0x0001000d224c(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar1 = 0;
  func_0x000101d925f0(0);
  FUN_101d927b4(param_4,param_5,uVar2,uVar1,&PTR_DAT_110481a98);
  func_0x0001000834e4(auStack_78);
  *param_1 = uVar2;
  return;
}



/* Entry: 101d96ae4; end: 101d96c2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d96ae4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  uVar5 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
    func_0x000107c613fc();
    lVar1 = 0;
    func_0x00010095c380();
    uVar4 = *(undefined8 *)(param_2 + _DAT_112e2b1c8);
    func_0x0001000d224c(&uStack_70);
    uVar2 = uStack_70;
    func_0x000107c614f0(uStack_70);
    puVar3 = &UNK_110482090;
    func_0x000107c613fc(&UNK_110482090,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar4;
    *(undefined8 *)(puVar3 + 0x18) = uVar5;
    *(long *)(puVar3 + 0x20) = lVar1;
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(lVar1);
    func_0x00010090569c(FUN_101d97798,puVar3,uVar2);
    func_0x000107c615e8(uStack_70);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(param_2);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c6157c(uVar5);
    func_0x000107c61574(lVar1);
  }
  return uVar5;
}



/* Entry: 101d96c2c; end: 101d96c97;  */

undefined8 FUN_101d96c2c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    FUN_101d96c98(param_2);
    func_0x000107c61170(param_1);
  }
  return param_2;
}



/* Entry: 101d96c98; end: 101d96dc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d96c98(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  
  func_0x0001000285a8(0x112e2b210,&UNK_10da13f70);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  func_0x0001000d224c(&uStack_48);
  uVar4 = uStack_48;
  func_0x000107c614f0(uStack_48);
  puVar2 = &UNK_110481f78;
  func_0x000107c613fc(&UNK_110481f78,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110481ff0;
  func_0x000107c613fc(&UNK_110481ff0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = lVar1;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(lVar1);
  func_0x000107c61174(param_1);
  func_0x00010090569c(FUN_101d976e8,puVar3,uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uStack_48);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(lVar1);
  return uVar4;
}



/* Entry: 101d96dc4; end: 101d96fcb;  */

void FUN_101d96dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar3 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  puVar2 = &UNK_1104820e0;
  func_0x000107c613fc(&UNK_1104820e0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x101d977b0;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101d977b8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101380a90;
  puStack_88 = &UNK_1104820f8;
  puStack_78 = puVar2;
  func_0x000107c60bc4(&puStack_a0);
  puVar4 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110482130;
  func_0x000107c613fc(&UNK_110482130,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  puVar5 = &UNK_110482158;
  func_0x000107c613fc(&UNK_110482158,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_101d97808;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_80 = FUN_101d97810;
  puStack_a0 = puVar7;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10130d598;
  puStack_88 = &UNK_110482170;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar7 = puStack_78;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  func_0x000107c4c670(param_1);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar7 = puVar2;
  func_0x000107c61544(puVar2,"",0x83,0xa5,0x20,1);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101d96fc8);
    (*pcVar1)();
  }
  puVar2 = puVar5;
  func_0x000107c61544(puVar5,"",0x83,0xa7,0x21,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar2 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d96fcc);
  (*pcVar1)();
}



/* Entry: 101d96fcc; end: 101d97047;  */

void FUN_101d96fcc(long param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  ulong uStack_28;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      uStack_28 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar4 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar4,(int)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d97048);
        (*pcVar2)();
      }
      uStack_28 = (ulong)(iVar4 - (int)param_1);
    }
  }
  else if (uVar3 == 2) {
    uStack_28 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101d96ffc);
      (*pcVar2)();
    }
  }
  else {
    uStack_28 = 0;
  }
  func_0x000100b60084(&uStack_28);
  return;
}



/* Entry: 101d97048; end: 101d9727b;  */

void FUN_101d97048(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 **appuStack_a8 [2];
  undefined8 **appuStack_98 [5];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_2;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar3);
  appuStack_98[0] = (undefined8 ***)0x0;
  func_0x000107c3e388();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  pppuVar4 = (undefined8 ***)appuStack_98[0];
  puVar1 = PTR___sypN_11034f1a8;
  if (param_2 == 0) {
    pppuVar5 = (undefined8 ***)appuStack_98[0];
    func_0x000107c61174(appuStack_98[0]);
    func_0x000107c5ed30();
    func_0x000107c61170(pppuVar5);
    func_0x000107c61654();
    pppuVar5 = pppuVar4;
    func_0x000107c614ac();
  }
  else {
    lVar3 = param_2;
    func_0x000107c5f9e8(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c61174(pppuVar4);
    func_0x000107c61170(param_2);
    pppuVar7 = *(undefined8 ****)PTR__NSFileSize_110345448;
    pppuVar4 = (undefined8 ***)0x0;
    appuStack_a8[0] = pppuVar7;
    FUN_101a64068();
    pppuVar5 = pppuVar4;
    FUN_101d58c78();
    func_0x000107c61174(pppuVar7);
    pppuVar6 = pppuVar4;
    func_0x000107c602d4(appuStack_98,appuStack_a8,pppuVar4,pppuVar5);
    if (*(long *)(lVar3 + 0x10) == 0) {
LAB_101d971b0:
      uStack_68 = 0;
      puStack_70 = (undefined8 **)0x0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c61434(lVar3);
      pppuVar5 = appuStack_98;
      func_0x000100df95d0(pppuVar5);
      if (((ulong)pppuVar6 & 1) == 0) {
        func_0x000107c6142c(lVar3);
        goto LAB_101d971b0;
      }
      func_0x0001000bb420(*(long *)(lVar3 + 0x38) + (long)pppuVar5 * 0x20,&puStack_70);
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c6142c(lVar3);
    func_0x0001007bbff0(appuStack_98);
    if (lStack_58 == 0) {
      pppuVar5 = (undefined8 ***)&puStack_70;
      func_0x00010006e7f4();
    }
    else {
      pppuVar5 = appuStack_a8;
      pppuVar6 = (undefined8 ***)&puStack_70;
      func_0x000107c6147c(pppuVar5,pppuVar6,puVar1 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)pppuVar5 & 1) != 0) {
        appuStack_98[0] = appuStack_a8[0];
        func_0x000100b60084(appuStack_98);
        pppuVar5 = pppuVar6;
        goto LAB_101d97248;
      }
    }
  }
  FUN_101d976f4();
  pppuVar7 = (undefined8 ***)&UNK_110482248;
  func_0x000107c613f8(&UNK_110482248,pppuVar5,0,0);
  *(undefined1 *)pppuVar5 = 4;
  func_0x00010488ade0();
  func_0x000107c614ac(pppuVar7);
LAB_101d97248:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_101d9727c;
  ppuStack_e0 = pppuVar4;
  ppuStack_d8 = pppuVar7;
  uStack_d0 = param_3;
  uStack_c8 = param_3;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001000d224c(&uStack_e8);
  if (-1 < (long)pppuVar5) {
    func_0x000107c419e4(uStack_e8);
    func_0x000107c615e8(uStack_e8);
    func_0x000100b60084();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d972e0);
  (*pcVar2)();
}



/* Entry: 101d9727c; end: 101d972df;  */

void FUN_101d9727c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  if (-1 < param_2) {
    func_0x000107c419e4(uStack_38);
    func_0x000107c615e8(uStack_38);
    func_0x000100b60084();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d972e0);
  (*pcVar1)();
}



/* Entry: 101d972e0; end: 101d9750f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d972e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 **ppuVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar3 = &puStack_c0;
  ppuVar4 = &puStack_c0;
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  lVar2 = param_1 + 0x10;
  func_0x000107c61618();
  puVar7 = (undefined1 *)0x0;
  if (lVar2 != 0) {
    puVar7 = *(undefined1 **)(lVar2 + _DAT_112e2b1c0);
    func_0x000107c6157c(puVar7);
    func_0x000107c61170(lVar2);
    func_0x0001000d224c(&puStack_c0);
    func_0x000107c61574();
    puVar5 = puStack_c0;
    if (puStack_c0 != (undefined1 *)0x0) {
      func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
      lVar2 = param_1 + 0x10;
      func_0x000107c61618();
      if (lVar2 != 0) {
        uVar8 = *(undefined8 *)(lVar2 + _DAT_112e2b1e0);
        func_0x000107c6157c(uVar8);
        func_0x000107c61170(lVar2);
        func_0x0001000d224c(&puStack_c0);
        func_0x000107c61574(uVar8);
        puVar7 = puStack_c0;
        puVar1 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a0 = FUN_101d97734;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        uStack_b0 = 0x10193dfcc;
        puStack_a8 = &UNK_110482008;
        puStack_98 = (undefined *)param_2;
        func_0x000107c60bc4(&puStack_c0);
        puVar6 = puStack_98;
        func_0x000107c6157c(param_2);
        func_0x000107c61574(puVar6);
        puVar6 = &UNK_110482040;
        func_0x000107c613fc(&UNK_110482040,0x20,7);
        *(long *)(puVar6 + 0x10) = param_1;
        *(undefined8 *)(puVar6 + 0x18) = param_2;
        pcStack_a0 = (code *)0x101d97758;
        puStack_c0 = puVar1;
        uStack_b8 = 0x42000000;
        uStack_b0 = 0x10193dfc8;
        puStack_a8 = &UNK_110482058;
        puStack_98 = puVar6;
        func_0x000107c60bc4(&puStack_c0);
        puVar6 = puStack_98;
        func_0x000107c6157c(param_2);
        func_0x000107c6157c(param_1);
        func_0x000107c61574(puVar6);
        func_0x000107c5d788(puVar5);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c60bd0(ppuVar3);
        func_0x000107c615e8(puVar5);
        func_0x000107c615e8(puVar7);
        return;
      }
      func_0x000107c615e8();
      puVar7 = puVar5;
    }
  }
  FUN_101d976f4();
  puVar6 = &UNK_110482248;
  func_0x000107c613f8(&UNK_110482248,puVar7,0,0);
  *puVar7 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar6);
  return;
}



/* Entry: 101d97510; end: 101d975b7;  */

void FUN_101d97510(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40500(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000100b60084(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101d975b8; end: 101d97603;  */

void FUN_101d975b8(undefined1 *param_1)

{
  undefined *puVar1;
  
  FUN_101d976f4();
  puVar1 = &UNK_110482248;
  func_0x000107c613f8(&UNK_110482248,param_1,0,0);
  *param_1 = 2;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar1);
  return;
}



/* Entry: 101d97604; end: 101d97683;  */

void FUN_101d97604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  func_0x000107c614f0();
  FUN_101d96314(param_1,param_2,param_3,param_4,param_5,param_6,param_7 & 0xffffffffff);
  return;
}



/* Entry: 101d97684; end: 101d976b7;  */

void FUN_101d97684(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d96a40(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d976b8; end: 101d976bf;  */

undefined8 FUN_101d976b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_101d96c98(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 101d976c0; end: 101d976e7;  */

void FUN_101d976c0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d976e8; end: 101d976f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d976e8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_c0;
  ppuVar6 = &puStack_c0;
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar4 = lVar1 + 0x10;
  func_0x000107c61618();
  puVar9 = (undefined1 *)0x0;
  if (lVar4 != 0) {
    puVar9 = *(undefined1 **)(lVar4 + _DAT_112e2b1c0);
    func_0x000107c6157c(puVar9);
    func_0x000107c61170(lVar4);
    func_0x0001000d224c(&puStack_c0);
    func_0x000107c61574();
    puVar7 = puStack_c0;
    if (puStack_c0 != (undefined1 *)0x0) {
      func_0x000107c61428(lVar1 + 0x10,auStack_90,0,0);
      lVar4 = lVar1 + 0x10;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uVar10 = *(undefined8 *)(lVar4 + _DAT_112e2b1e0);
        func_0x000107c6157c(uVar10);
        func_0x000107c61170(lVar4);
        func_0x0001000d224c(&puStack_c0);
        func_0x000107c61574(uVar10);
        puVar9 = puStack_c0;
        puVar3 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a0 = FUN_101d97734;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        uStack_b0 = 0x10193dfcc;
        puStack_a8 = &UNK_110482008;
        puStack_98 = (undefined *)uVar2;
        func_0x000107c60bc4(&puStack_c0);
        puVar8 = puStack_98;
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_110482040;
        func_0x000107c613fc(&UNK_110482040,0x20,7);
        *(long *)(puVar8 + 0x10) = lVar1;
        *(undefined8 *)(puVar8 + 0x18) = uVar2;
        pcStack_a0 = (code *)0x101d97758;
        puStack_c0 = puVar3;
        uStack_b8 = 0x42000000;
        uStack_b0 = 0x10193dfc8;
        puStack_a8 = &UNK_110482058;
        puStack_98 = puVar8;
        func_0x000107c60bc4(&puStack_c0);
        puVar8 = puStack_98;
        func_0x000107c6157c(uVar2);
        func_0x000107c6157c(lVar1);
        func_0x000107c61574(puVar8);
        func_0x000107c5d788(puVar7);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(puVar7);
        func_0x000107c615e8(puVar9);
        return;
      }
      func_0x000107c615e8();
      puVar9 = puVar7;
    }
  }
  FUN_101d976f4();
  puVar8 = &UNK_110482248;
  func_0x000107c613f8(&UNK_110482248,puVar9,0,0);
  *puVar9 = 0;
  func_0x00010488ade0();
  func_0x000107c614ac(puVar8);
  return;
}



/* Entry: 101d976f4; end: 101d97733;  */

void FUN_101d976f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2b218 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da14030;
  func_0x000107c61520(&UNK_10da14030,&UNK_110482248);
  puRam0000000112e2b218 = puVar1;
  return;
}



/* Entry: 101d97734; end: 101d9775f;  */

void FUN_101d97734(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40500(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar2);
  func_0x000107c61170(param_1);
  func_0x000100b60084(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 101d97760; end: 101d97797;  */

void FUN_101d97760(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d97798; end: 101d977b7;  */

void FUN_101d97798(void)

{
  long lVar1;
  code *pcVar2;
  long unaff_x20;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x0001000d224c(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),lVar1,
                      *(undefined8 *)(unaff_x20 + 0x20));
  if (-1 < lVar1) {
    func_0x000107c419e4(uStack_38);
    func_0x000107c615e8(uStack_38);
    func_0x000100b60084();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101d972e0);
  (*pcVar2)();
}



/* Entry: 101d977b8; end: 101d977d7;  */

void FUN_101d977b8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d977d8; end: 101d97807;  */

void FUN_101d977d8(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d97808; end: 101d9780f;  */

void FUN_101d97808(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  long unaff_x20;
  undefined8 ***pppuVar9;
  undefined8 uStack_e8;
  undefined8 **ppuStack_e0;
  undefined8 **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 **appuStack_a8 [2];
  undefined8 **appuStack_98 [5];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_48;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = lVar4;
  func_0x000107c5edc4();
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar5);
  appuStack_98[0] = (undefined8 ***)0x0;
  func_0x000107c3e388();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  pppuVar6 = (undefined8 ***)appuStack_98[0];
  puVar2 = PTR___sypN_11034f1a8;
  if (lVar4 == 0) {
    pppuVar7 = (undefined8 ***)appuStack_98[0];
    func_0x000107c61174(appuStack_98[0]);
    func_0x000107c5ed30();
    func_0x000107c61170(pppuVar7);
    func_0x000107c61654();
    pppuVar7 = pppuVar6;
    func_0x000107c614ac();
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5f9e8(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c61174(pppuVar6);
    func_0x000107c61170(lVar4);
    pppuVar9 = *(undefined8 ****)PTR__NSFileSize_110345448;
    pppuVar6 = (undefined8 ***)0x0;
    appuStack_a8[0] = pppuVar9;
    FUN_101a64068();
    pppuVar7 = pppuVar6;
    FUN_101d58c78();
    func_0x000107c61174(pppuVar9);
    pppuVar8 = pppuVar6;
    func_0x000107c602d4(appuStack_98,appuStack_a8,pppuVar6,pppuVar7);
    if (*(long *)(lVar5 + 0x10) == 0) {
LAB_101d971b0:
      uStack_68 = 0;
      puStack_70 = (undefined8 **)0x0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c61434(lVar5);
      pppuVar7 = appuStack_98;
      func_0x000100df95d0(pppuVar7);
      if (((ulong)pppuVar8 & 1) == 0) {
        func_0x000107c6142c(lVar5);
        goto LAB_101d971b0;
      }
      func_0x0001000bb420(*(long *)(lVar5 + 0x38) + (long)pppuVar7 * 0x20,&puStack_70);
      func_0x000107c6142c(lVar5);
    }
    func_0x000107c6142c(lVar5);
    func_0x0001007bbff0(appuStack_98);
    if (lStack_58 == 0) {
      pppuVar7 = (undefined8 ***)&puStack_70;
      func_0x00010006e7f4();
    }
    else {
      pppuVar7 = appuStack_a8;
      pppuVar8 = (undefined8 ***)&puStack_70;
      func_0x000107c6147c(pppuVar7,pppuVar8,puVar2 + 8,PTR___sSiN_11034deb0,6);
      if (((ulong)pppuVar7 & 1) != 0) {
        appuStack_98[0] = appuStack_a8[0];
        func_0x000100b60084(appuStack_98);
        pppuVar7 = pppuVar8;
        goto LAB_101d97248;
      }
    }
  }
  FUN_101d976f4();
  pppuVar9 = (undefined8 ***)&UNK_110482248;
  func_0x000107c613f8(&UNK_110482248,pppuVar7,0,0);
  *(undefined1 *)pppuVar7 = 4;
  func_0x00010488ade0();
  func_0x000107c614ac(pppuVar9);
LAB_101d97248:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_101d9727c;
  ppuStack_e0 = pppuVar6;
  ppuStack_d8 = pppuVar9;
  uStack_d0 = uVar1;
  uStack_c8 = uVar1;
  puStack_c0 = &stack0xfffffffffffffff0;
  func_0x0001000d224c(&uStack_e8);
  if (-1 < (long)pppuVar7) {
    func_0x000107c419e4(uStack_e8);
    func_0x000107c615e8(uStack_e8);
    func_0x000100b60084();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101d972e0);
  (*pcVar3)();
}



/* Entry: 101d97810; end: 101d9782f;  */

void FUN_101d97810(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d97830; end: 101d97863;  */

void FUN_101d97830(void)

{
  long unaff_x20;
  
  FUN_101d96404(*(undefined4 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined4 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                (ulong)*(uint5 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101d97864; end: 101d979f3;  */

void FUN_101d97864(long param_1,long param_2)

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



/* Entry: 101d979f4; end: 101d97a9f;  */

void FUN_101d979f4(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101d97aa0; end: 101d97adb;  */

void FUN_101d97aa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}


