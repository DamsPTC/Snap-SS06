/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103222660; end: 1032226c3;  */

long FUN_103222660(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1032226c4; end: 1032227a3;  */

undefined8 * FUN_1032226c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  func_0x000107c6157c();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c615f0(uVar3);
  return param_1;
}



/* Entry: 1032227a4; end: 1032227f7;  */

undefined8 * FUN_1032227a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c615e8(uVar1);
  return param_1;
}



/* Entry: 1032227f8; end: 103222897;  */

int FUN_1032227f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103222898; end: 10322290f;  */

undefined8 * FUN_103222898(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  return param_1;
}



/* Entry: 103222910; end: 1032229d3;  */

int FUN_103222910(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1032229d4; end: 103222b8f;  */

ulong FUN_1032229d4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103222ab8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103222abc);
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
  func_0x000103223a34(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103222b90);
  (*pcVar2)();
}



/* Entry: 103222b90; end: 103222bb3;  */

void FUN_103222b90(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f4d5e8;
  plVar5 = (long *)&UNK_10db9f780;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000103223a34(0,0x112f4d158,&PTR_PTR_1126d4b28);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103222bb4; end: 103222c2b;  */

void FUN_103222bb4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000103223a34(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 103222c2c; end: 103222ebb;  */

ulong FUN_103222c2c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103222d74);
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
  FUN_103222ebc(uVar2,uVar4,0x112f4d150,&PTR_PTR_1126acdc0,0x112f4d5e0,&UNK_10db9f778);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103222d70);
      (*pcVar1)();
    }
    FUN_103222f4c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103222ebc; end: 103222f4b;  */

undefined *
FUN_103222ebc(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_103222bb4(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 103222f4c; end: 10322317b;  */

long FUN_103222f4c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103223060);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103223064);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000103223a34(0,0x112f4d150,&PTR_PTR_1126acdc0);
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
      func_0x000103223a34(0,0x112f4d150,&PTR_PTR_1126acdc0);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10322305c);
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



/* Entry: 10322317c; end: 1032232f7;  */

undefined1  [16] FUN_10322317c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  
  lVar3 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  uVar10 = param_2;
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5faec();
    uVar8 = param_2;
    func_0x000107c61170(lVar3);
    lVar3 = param_1;
    func_0x000107c5c26c();
    func_0x000107c61180();
    uVar10 = uVar8;
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      lVar3 = lVar5;
      uVar9 = uVar8;
      func_0x000107c5fb5c(lVar5,uVar8);
      if (0 < lVar3) {
        FUN_1032273b8();
        lVar6 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar6 + 0x18) = 4;
        *(undefined8 *)(lVar6 + 0x10) = 2;
        puVar1 = PTR___sSSN_11034da80;
        *(undefined **)(lVar6 + 0x38) = PTR___sSSN_11034da80;
        lVar7 = lVar6;
        func_0x00010075bbf0();
        *(long *)(lVar6 + 0x20) = lVar4;
        *(undefined8 *)(lVar6 + 0x28) = param_2;
        *(undefined **)(lVar6 + 0x60) = puVar1;
        *(long *)(lVar6 + 0x68) = lVar7;
        *(long *)(lVar6 + 0x40) = lVar7;
        *(long *)(lVar6 + 0x48) = lVar5;
        *(undefined8 *)(lVar6 + 0x50) = uVar8;
        uVar10 = uVar9;
        func_0x000107c5fae0(lVar3,uVar9,lVar6);
        func_0x000107c6142c(uVar9);
        func_0x000107c61574(lVar6);
        goto LAB_1032232dc;
      }
      func_0x000107c6142c(param_2);
      uVar10 = uVar9;
      param_2 = uVar8;
    }
    func_0x000107c6142c(param_2);
  }
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1032232f8);
    (*pcVar2)();
  }
  lVar3 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
LAB_1032232dc:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = lVar3;
  return auVar11;
}



/* Entry: 1032232f8; end: 10322337b;  */

undefined1  [16] FUN_1032232f8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    return ZEXT816(0xe000000000000000) << 0x40;
  }
  puVar4 = (ulong *)(param_1 + 0x28);
  do {
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      uVar5 = puVar4[-1];
      uVar1 = uVar5 & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        func_0x000107c61434();
        goto LAB_103223364;
      }
    }
    lVar3 = lVar3 + -1;
    puVar4 = puVar4 + 2;
    if (lVar3 == 0) {
      uVar5 = 0;
      uVar2 = 0xe000000000000000;
LAB_103223364:
      auVar6._8_8_ = uVar2;
      auVar6._0_8_ = uVar5;
      return auVar6;
    }
  } while( true );
}



/* Entry: 10322337c; end: 103223693;  */

undefined1  [16] FUN_10322337c(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  lVar12 = param_1;
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar3 = lVar12;
    func_0x000107c5b608();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    uVar4 = 0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    puVar10 = auStack_a0;
    uVar5 = uVar4;
    func_0x000107c61534();
    *(undefined8 *)(uVar5 + 0x18) = 4;
    *(undefined8 *)(uVar5 + 0x10) = 2;
    if (lVar3 == 0) {
      *(undefined8 *)(uVar5 + 0x20) = 0;
      *(undefined8 *)(uVar5 + 0x28) = 0;
    }
    else {
      lVar12 = lVar3;
      func_0x000107c5cab0();
      func_0x000107c61180();
      if (lVar12 == 0) {
        lVar13 = 0;
        puVar11 = (undefined1 *)0x0;
        puVar9 = puVar10;
      }
      else {
        lVar13 = lVar12;
        func_0x000107c5faec();
        puVar9 = puVar10;
        func_0x000107c61170(lVar12);
        puVar11 = puVar10;
      }
      *(long *)(uVar5 + 0x20) = lVar13;
      *(undefined1 **)(uVar5 + 0x28) = puVar11;
      puVar10 = puVar9;
    }
    lVar12 = param_1;
    func_0x000107c5cab0();
    func_0x000107c61180();
    if (lVar12 == 0) {
      lVar13 = 0;
      puVar11 = (undefined1 *)0x0;
      puVar9 = puVar10;
    }
    else {
      lVar13 = lVar12;
      func_0x000107c5faec();
      puVar9 = puVar10;
      func_0x000107c61170(lVar12);
      puVar11 = puVar10;
    }
    *(long *)(uVar5 + 0x30) = lVar13;
    *(undefined1 **)(uVar5 + 0x38) = puVar11;
    uVar6 = uVar5;
    FUN_1032232f8();
    func_0x000107c61588(uVar5);
    uVar7 = 0x112d35ff8;
    func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
    func_0x000107c61408(uVar5 + 0x20,2,uVar7);
    puVar10 = auStack_e0;
    func_0x000107c61534();
    *(undefined8 *)(uVar4 + 0x18) = 4;
    *(undefined8 *)(uVar4 + 0x10) = 2;
    if (lVar3 == 0) {
      *(undefined8 *)(uVar4 + 0x20) = 0;
      *(undefined8 *)(uVar4 + 0x28) = 0;
    }
    else {
      lVar12 = lVar3;
      func_0x000107c3e1a4();
      func_0x000107c61180();
      if (lVar12 == 0) {
        lVar13 = 0;
        puVar14 = (undefined1 *)0x0;
        puVar11 = puVar10;
      }
      else {
        lVar13 = lVar12;
        func_0x000107c5faec();
        puVar11 = puVar10;
        func_0x000107c61170(lVar12);
        puVar14 = puVar10;
      }
      *(long *)(uVar4 + 0x20) = lVar13;
      *(undefined1 **)(uVar4 + 0x28) = puVar14;
      puVar10 = puVar11;
    }
    func_0x000107c5c38c();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar12 = 0;
      puVar14 = (undefined1 *)0x0;
      puVar11 = puVar10;
    }
    else {
      lVar12 = param_1;
      func_0x000107c5faec();
      puVar11 = puVar10;
      func_0x000107c61170(param_1);
      puVar14 = puVar10;
    }
    *(long *)(uVar4 + 0x30) = lVar12;
    *(undefined1 **)(uVar4 + 0x38) = puVar14;
    uVar8 = uVar4;
    FUN_1032232f8();
    func_0x000107c61588(uVar4);
    uVar4 = uVar4 + 0x20;
    puVar10 = (undefined1 *)0x2;
    func_0x000107c61408(uVar4,2,uVar7);
    uVar5 = uVar6 & 0xffffffffffff;
    if (((ulong)puVar9 & 0x2000000000000000) != 0) {
      uVar5 = (ulong)puVar9 >> 0x38 & 0xf;
    }
    if (uVar5 == 0) {
      func_0x000107c6142c(puVar9);
      func_0x000107c61170(lVar3);
    }
    else {
      uVar5 = uVar8 & 0xffffffffffff;
      if (((ulong)puVar11 & 0x2000000000000000) != 0) {
        uVar5 = (ulong)puVar11 >> 0x38 & 0xf;
      }
      if (uVar5 == 0) {
        func_0x000107c6142c(puVar11);
        func_0x000107c61170(lVar3);
        puVar11 = puVar9;
        uVar8 = uVar6;
      }
      else {
        FUN_1032273b8();
        lVar12 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar12 + 0x18) = 4;
        *(undefined8 *)(lVar12 + 0x10) = 2;
        puVar1 = PTR___sSSN_11034da80;
        *(undefined **)(lVar12 + 0x38) = PTR___sSSN_11034da80;
        lVar13 = lVar12;
        func_0x00010075bbf0();
        *(ulong *)(lVar12 + 0x20) = uVar6;
        *(undefined1 **)(lVar12 + 0x28) = puVar9;
        *(undefined **)(lVar12 + 0x60) = puVar1;
        *(long *)(lVar12 + 0x68) = lVar13;
        *(long *)(lVar12 + 0x40) = lVar13;
        *(ulong *)(lVar12 + 0x48) = uVar8;
        *(undefined1 **)(lVar12 + 0x50) = puVar11;
        puVar11 = puVar10;
        func_0x000107c5fae0(uVar4,puVar10,lVar12);
        func_0x000107c61170(lVar3);
        func_0x000107c6142c(puVar10);
        func_0x000107c61574(lVar12);
        uVar8 = uVar4;
      }
    }
    auVar15._8_8_ = puVar11;
    auVar15._0_8_ = uVar8;
    return auVar15;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103223694);
  (*pcVar2)();
}



/* Entry: 103223694; end: 1032236c7;  */

void FUN_103223694(void)

{
  return;
}



/* Entry: 1032236c8; end: 10322396b;  */

void FUN_1032236c8(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  long lStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1cf;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_11f;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  
  lVar2 = param_1;
  func_0x000107c3e214();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103223960);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5b9c4();
  func_0x000107c61170(lVar2);
  iVar7 = (int)lVar3;
  if (iVar7 != 0) {
    if (iVar7 == 2) {
      func_0x000107c3e214();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103223964);
        (*pcVar1)();
      }
      lVar2 = param_1;
      func_0x000107c4fe14();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar2 != 0) {
        puVar6 = &UNK_10db9f710;
        func_0x0001000285a8(0x112f4d5d0);
        lVar3 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        lStack_1c0 = lVar3;
        puStack_1b8 = puVar6;
        FUN_1032239e0(&lStack_1c0);
        uStack_88 = uStack_138;
        uStack_90 = uStack_140;
        uStack_80 = uStack_130;
        uStack_6f = uStack_11f;
        uStack_c8 = uStack_178;
        uStack_d0 = uStack_180;
        uStack_b8 = uStack_168;
        uStack_c0 = uStack_170;
        uStack_a8 = uStack_158;
        uStack_b0 = uStack_160;
        uStack_98 = uStack_148;
        uStack_a0 = uStack_150;
        puStack_108 = puStack_1b8;
        lStack_110 = lStack_1c0;
        uStack_f8 = uStack_1a8;
        uStack_100 = uStack_1b0;
        uStack_e8 = uStack_198;
        uStack_f0 = uStack_1a0;
        uStack_d8 = uStack_188;
        uStack_e0 = uStack_190;
        func_0x0001031e6100(&lStack_110);
        uStack_1e8 = uStack_88;
        uStack_1f0 = uStack_90;
        uStack_1e0 = uStack_80;
        uStack_1cf = uStack_6f;
        uStack_228 = uStack_c8;
        uStack_230 = uStack_d0;
        uStack_218 = uStack_b8;
        uStack_220 = uStack_c0;
        uStack_208 = uStack_a8;
        uStack_210 = uStack_b0;
        uStack_1f8 = uStack_98;
        uStack_200 = uStack_a0;
        puStack_268 = puStack_108;
        lStack_270 = lStack_110;
        uStack_258 = uStack_f8;
        uStack_260 = uStack_100;
        uStack_248 = uStack_e8;
        uStack_250 = uStack_f0;
        uStack_238 = uStack_d8;
        uStack_240 = uStack_e0;
        func_0x000100854cb0(&lStack_270);
        FUN_1032239f4(&lStack_270,0x112f4d5c8,&UNK_10db9f700);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10322396c);
      (*pcVar1)();
    }
    if (iVar7 == 1) {
      func_0x000107c3e214();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103223968);
        (*pcVar1)();
      }
      lVar2 = param_1;
      FUN_10326ca04();
      if (lVar2 != 0) {
        lStack_110 = 0;
        plVar4 = &lStack_110;
        func_0x0001006c71a4(plVar4);
        func_0x000107c61574(lVar2);
        func_0x000100de1ee8();
        func_0x0001000c2068();
        func_0x000107c61170(param_1);
        func_0x000107c61574(plVar4);
        uVar5 = 0x112f4d5c8;
        func_0x0001000285a8(0x112f4d5c8,&UNK_10db9f700);
        func_0x0001000bfde0(FUN_103222484,0,uVar5);
        func_0x000107c61574(lVar2);
        return;
      }
      func_0x000107c61170(param_1);
    }
  }
  func_0x0001000285a8(0x112f4d5d0,&UNK_10db9f710);
  func_0x0001031e60c4(&lStack_110);
  uStack_138 = uStack_88;
  uStack_140 = uStack_90;
  uStack_130 = uStack_80;
  uStack_11f = uStack_6f;
  uStack_178 = uStack_c8;
  uStack_180 = uStack_d0;
  uStack_168 = uStack_b8;
  uStack_170 = uStack_c0;
  uStack_158 = uStack_a8;
  uStack_160 = uStack_b0;
  uStack_148 = uStack_98;
  uStack_150 = uStack_a0;
  puStack_1b8 = puStack_108;
  lStack_1c0 = lStack_110;
  uStack_1a8 = uStack_f8;
  uStack_1b0 = uStack_100;
  uStack_198 = uStack_e8;
  uStack_1a0 = uStack_f0;
  uStack_188 = uStack_d8;
  uStack_190 = uStack_e0;
  func_0x000100854cb0(&lStack_1c0);
  return;
}



/* Entry: 10322396c; end: 10322398f;  */

void FUN_10322396c(undefined8 param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined2 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x30);
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_60 = param_2[0x12];
  uStack_58 = (undefined1)param_2[0x13];
  uStack_4f = *(undefined8 *)((long)param_2 + 0xa1);
  uStack_57 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
  uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  lVar2 = lVar4;
  FUN_10322317c(lVar4,uVar3,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  FUN_103223990(&uStack_f0,&uStack_218);
  func_0x000107c3cf80();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uStack_178 = param_2[0xd];
    uStack_180 = param_2[0xc];
    uStack_168 = param_2[0xf];
    uStack_170 = param_2[0xe];
    uStack_158 = param_2[0x11];
    uStack_160 = param_2[0x10];
    uStack_150 = param_2[0x12];
    uStack_148 = (undefined1)param_2[0x13];
    uStack_13f = *(undefined8 *)((long)param_2 + 0xa1);
    uStack_147 = (undefined7)*(undefined8 *)((long)param_2 + 0x99);
    uStack_140 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 0x99) >> 0x38);
    uStack_1b8 = param_2[5];
    uStack_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    uStack_1d8 = param_2[1];
    uStack_1e0 = *param_2;
    uStack_1c8 = param_2[3];
    uStack_1d0 = param_2[2];
    uStack_218 = 0;
    uStack_210 = 0;
    uStack_208 = 0xd000000000000014;
    uStack_200 = 0x800000010f131590;
    uStack_1e8 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0x100;
    uStack_100 = 0;
    uStack_f8 = 1;
    lStack_1f8 = lVar2;
    uStack_1f0 = uVar3;
    lStack_120 = lVar4;
    FUN_103223694(&uStack_218);
    func_0x000107c610b4(param_1,&uStack_218,0x128);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103222484);
  (*pcVar1)();
}



/* Entry: 103223990; end: 1032239df;  */

undefined8 FUN_103223990(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4d5c8;
  func_0x0001000285a8(0x112f4d5c8,&UNK_10db9f700);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1032239e0; end: 1032239f3;  */

void FUN_1032239e0(long param_1)

{
  *(byte *)(param_1 + 0xa8) = *(byte *)(param_1 + 0xa8) & 1 | 0xc0;
  return;
}



/* Entry: 1032239f4; end: 103223a73;  */

undefined8 FUN_1032239f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103223a74; end: 103223a7b;  */

undefined8 * FUN_103223a74(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000107c61174();
  return param_1;
}



/* Entry: 103223a7c; end: 103223aab;  */

void FUN_103223a7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0dad8;
  func_0x000107c5faec();
  *param_1 = ppuVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 103223aac; end: 103223b2f;  */

long FUN_103223aac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4b528;
  func_0x0001000285a8(0x112f4b528,&UNK_10db9ab20);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 103223b30; end: 103223c57;  */

void FUN_103223b30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = param_2[1];
  if (lVar1 == 0) {
    uVar5 = 0;
    lVar4 = 0;
  }
  else {
    uVar2 = *param_3;
    uVar3 = param_2[2];
    uVar5 = *param_2;
    func_0x000107c61434(lVar1);
    lVar4 = lVar1;
    FUN_103226b9c(uVar5,lVar1,uVar3,uVar2);
    func_0x000107c6142c(lVar1);
  }
  *param_1 = uVar5;
  param_1[1] = lVar4;
  return;
}



/* Entry: 103223c58; end: 103223c5f;  */

void FUN_103223c58(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = *(undefined1 *)(param_2 + 3);
  uVar3 = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_60 = uVar2;
  uStack_50 = uVar3;
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c614bc(param_1,&uStack_70);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 103223c60; end: 103223da7;  */

void FUN_103223c60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_187;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 *puStack_150;
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined2 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 == (undefined8 *)0x0) {
    func_0x000103224098(&uStack_178);
  }
  else {
    uVar6 = *param_2;
    func_0x0001031e60c4(&uStack_228);
    uStack_c8 = uStack_1b0;
    uStack_d0 = uStack_1b8;
    uStack_b8 = uStack_1a0;
    uStack_c0 = uStack_1a8;
    uStack_b0 = uStack_198;
    uStack_9f = uStack_187;
    uStack_108 = uStack_1f0;
    uStack_110 = uStack_1f8;
    uStack_f8 = uStack_1e0;
    uStack_100 = uStack_1e8;
    uStack_e8 = uStack_1d0;
    uStack_f0 = uStack_1d8;
    uStack_d8 = uStack_1c0;
    uStack_e0 = uStack_1c8;
    uStack_138 = uStack_220;
    uStack_140 = uStack_228;
    uStack_128 = uStack_210;
    uStack_130 = uStack_218;
    uStack_118 = uStack_200;
    uStack_120 = uStack_208;
    puVar3 = puVar5;
    func_0x000107c61434();
    func_0x000103bad56c();
    uVar1 = *puVar3;
    uVar2 = puVar3[1];
    func_0x000101c68d90(0);
    func_0x000107c61434(uVar2);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5ff4c();
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0x726f736e6f7073;
    uStack_160 = 0xe700000000000000;
    uStack_88 = 3;
    uStack_90 = 0;
    uStack_148 = 0;
    uStack_68 = 0x102;
    uStack_60 = 0;
    uStack_58 = 1;
    uStack_158 = uVar6;
    puStack_150 = puVar5;
    uStack_80 = uVar1;
    uStack_78 = uVar2;
    puStack_70 = puVar4;
    func_0x0001032240c8(&uStack_178);
  }
  func_0x000107c610b4(param_1,&uStack_178,0x128);
  return;
}



/* Entry: 103223da8; end: 103223e97;  */

code * FUN_103223da8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *apuStack_30 [2];
  
  puVar1 = &UNK_10db9f790;
  func_0x000107c614e0();
  puVar2 = &UNK_10db9f7b0;
  apuStack_30[0] = puVar1;
  func_0x000107c614e0(&UNK_10db9f7b0,apuStack_30);
  uVar3 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar4 = 0x1032240d4;
  func_0x0001000bfde0(0x1032240d4,puVar2,uVar3);
  func_0x000107c61574(puVar2);
  func_0x000100dd41f8();
  func_0x0001000c2068();
  func_0x000107c61574(uVar4);
  uVar3 = 0x112f4d5f0;
  func_0x0001000285a8(0x112f4d5f0,&UNK_10db9f808);
  pcVar5 = FUN_103223c60;
  func_0x0001000bfde0(FUN_103223c60,0,uVar3);
  func_0x000107c61574(puVar2);
  return pcVar5;
}



/* Entry: 103223e98; end: 103223ed7;  */

void FUN_103223e98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d5f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f848;
  func_0x000107c61520(&DAT_10db9f848,&UNK_1106283f0);
  puRam0000000112f4d5f8 = puVar1;
  return;
}



/* Entry: 103223ed8; end: 103223edb;  */

void FUN_103223ed8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d600 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d608;
  func_0x00010002969c(0x112f4d608,&UNK_10db9f840);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d600 = puVar2;
  return;
}



/* Entry: 103223edc; end: 103223f2b;  */

void FUN_103223edc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d600 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d608;
  func_0x00010002969c(0x112f4d608,&UNK_10db9f840);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d600 = puVar2;
  return;
}



/* Entry: 103223f2c; end: 103223f43;  */

undefined ** FUN_103223f2c(void)

{
  return &PTR_DAT_1106283b0;
}



/* Entry: 103223f44; end: 103223f7b;  */

undefined * FUN_103223f44(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x0001032172f0();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103223f7c; end: 103223f93;  */

undefined1  [16] FUN_103223f7c(void)

{
  return ZEXT816(0x1106283f0);
}



/* Entry: 103223f94; end: 103224003;  */

undefined8 * FUN_103223f94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103224004; end: 1032240d7;  */

int FUN_103224004(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032240d8; end: 1032241af;  */

code * FUN_1032240d8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000107c43138();
  func_0x000107c61180();
  uVar1 = unaff_x20;
  func_0x0001000b637c();
  func_0x000107c61170(unaff_x20);
  pcVar2 = FUN_1032241b0;
  func_0x0001000bfde0(FUN_1032241b0,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  puVar3 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar2);
  uVar1 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar2 = FUN_1032241d8;
  func_0x0001000bfde0(FUN_1032241d8,0,uVar1);
  func_0x000107c61574(puVar3);
  return pcVar2;
}



/* Entry: 1032241b0; end: 1032241d7;  */

void FUN_1032241b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c3ebcc();
  *param_1 = uVar1;
  return;
}



/* Entry: 1032241d8; end: 1032241e3;  */

void FUN_1032241d8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Entry: 1032241e4; end: 10322431b;  */

long FUN_1032241e4(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uVar2 = 0x112f4d658;
  func_0x0001000285a8(0x112f4d658,&UNK_10dba3140);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar3 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_78;
  *(undefined8 *)(lVar1 + 0x70) = uStack_80;
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_88;
  *(undefined8 *)(lVar1 + 0x98) = uStack_90;
  FUN_103224e38(&uStack_60,auStack_a0,0x112f4d658,&UNK_10dba3140);
  FUN_103224e38(&uStack_70,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103224e38(&uStack_80,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103224e38(&uStack_90,auStack_a0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10322431c; end: 103224357;  */

void FUN_10322431c(undefined8 *param_1)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_103224d9c(&uStack_60);
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[5] = uStack_38;
  param_1[4] = uStack_40;
  param_1[7] = uStack_28;
  param_1[6] = uStack_30;
  return;
}



/* Entry: 103224358; end: 10322435b;  */

long FUN_103224358(void)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 8;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uVar2 = 0x112f4d658;
  func_0x0001000285a8(0x112f4d658,&UNK_10dba3140);
  *(undefined8 *)(lVar1 + 0x38) = uVar2;
  *(undefined ***)(lVar1 + 0x40) = &PTR_DAT_11076bd60;
  uVar2 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  *(undefined8 *)(lVar1 + 0x28) = unaff_x20[1];
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  uVar3 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  *(undefined8 *)(lVar1 + 0x50) = unaff_x20[3];
  *(undefined8 *)(lVar1 + 0x48) = uVar3;
  *(undefined8 *)(lVar1 + 0x60) = uVar2;
  *(undefined ***)(lVar1 + 0x68) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x88) = uVar2;
  *(undefined ***)(lVar1 + 0x90) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0x78) = uStack_78;
  *(undefined8 *)(lVar1 + 0x70) = uStack_80;
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined ***)(lVar1 + 0xb8) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_88;
  *(undefined8 *)(lVar1 + 0x98) = uStack_90;
  FUN_103224e38(&uStack_60,auStack_a0,0x112f4d658,&UNK_10dba3140);
  FUN_103224e38(&uStack_70,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103224e38(&uStack_80,auStack_a0,0x112f4b520,&UNK_10db9b280);
  FUN_103224e38(&uStack_90,auStack_a0,0x112f4b520,&UNK_10db9b280);
  return lVar1;
}



/* Entry: 10322435c; end: 103224423;  */

undefined * FUN_10322435c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1315d0);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 103224424; end: 1032244ff;  */

uint FUN_103224424(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_180 [64];
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_98 = param_1[5];
  uStack_a0 = param_1[4];
  uStack_88 = param_1[7];
  uStack_90 = param_1[6];
  uStack_80 = param_1[8];
  uStack_b8 = param_1[1];
  uStack_c0 = *param_1;
  uStack_a8 = param_1[3];
  uStack_b0 = param_1[2];
  puVar1 = &UNK_10db9f9f8;
  func_0x000107c614e0(&UNK_10db9f9f8);
  lStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  if (lStack_68 == 0) {
    func_0x000107c61574();
  }
  else {
    uStack_138 = param_1[1];
    uStack_140 = *param_1;
    uStack_128 = param_1[3];
    uStack_130 = param_1[2];
    uStack_118 = param_1[5];
    uStack_120 = param_1[4];
    uStack_108 = param_1[7];
    uStack_110 = param_1[6];
    uStack_100 = uStack_140;
    uStack_f8 = uStack_138;
    uStack_f0 = uStack_130;
    uStack_e8 = uStack_128;
    uStack_e0 = uStack_120;
    uStack_d8 = uStack_118;
    uStack_d0 = uStack_110;
    uStack_c8 = uStack_108;
    func_0x00010322542c(&uStack_140,auStack_180);
    puVar2 = &uStack_100;
    FUN_103226df4(puVar2,&uStack_c0,puVar1);
    func_0x000103225460(&uStack_70);
    func_0x000107c61574(puVar1);
    if (((uint)puVar2 & 0xff) != 2) {
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_1032244e8;
    }
  }
  uVar3 = 1;
LAB_1032244e8:
  return uVar3 & 1;
}



/* Entry: 103224500; end: 10322460f;  */

void FUN_103224500(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 auStack_200 [64];
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  lStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  FUN_103224610();
  *param_1 = (long)param_2;
  uStack_118 = uStack_c8;
  uStack_120 = uStack_d0;
  uStack_108 = uStack_b8;
  uStack_110 = uStack_c0;
  uStack_100 = uStack_b0;
  lStack_138 = lStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  puVar1 = &UNK_10db9f970;
  func_0x000107c614e0(&UNK_10db9f970);
  lStack_78 = lStack_e8;
  uStack_80 = uStack_f0;
  uStack_68 = uStack_d8;
  uStack_70 = uStack_e0;
  uStack_58 = uStack_c8;
  uStack_60 = uStack_d0;
  uStack_48 = uStack_b8;
  uStack_50 = uStack_c0;
  if (lStack_e8 == 0) {
    func_0x000107c61574();
  }
  else {
    lStack_1b8 = lStack_e8;
    uStack_1c0 = uStack_f0;
    uStack_1a8 = uStack_d8;
    uStack_1b0 = uStack_e0;
    uStack_198 = uStack_c8;
    uStack_1a0 = uStack_d0;
    uStack_188 = uStack_b8;
    uStack_190 = uStack_c0;
    lStack_178 = lStack_e8;
    uStack_180 = uStack_f0;
    uStack_168 = uStack_d8;
    uStack_170 = uStack_e0;
    uStack_158 = uStack_c8;
    uStack_160 = uStack_d0;
    uStack_148 = uStack_b8;
    uStack_150 = uStack_c0;
    func_0x00010322542c(&uStack_1c0,auStack_200);
    puVar2 = &uStack_180;
    FUN_103226df4(puVar2,&uStack_140,puVar1);
    bVar3 = (byte)puVar2;
    func_0x000103225460(&uStack_80);
    func_0x000107c61574(puVar1);
    if (((uint)puVar2 & 0xff) != 2) goto LAB_1032245f0;
  }
  bVar3 = 0;
LAB_1032245f0:
  *(byte *)(param_1 + 1) = bVar3 & 1;
  return;
}



/* Entry: 103224610; end: 1032247af;  */

undefined8 * FUN_103224610(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_1a0 [64];
  undefined8 uStack_160;
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
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_e0 = unaff_x20[8];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  puVar4 = &UNK_10db9f998;
  func_0x000107c614e0(&UNK_10db9f998);
  lStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  if (lStack_88 == 0) {
LAB_10322478c:
    func_0x000107c61574();
    return (undefined8 *)0x0;
  }
  uStack_158 = unaff_x20[1];
  uStack_160 = *unaff_x20;
  uStack_148 = unaff_x20[3];
  uStack_150 = unaff_x20[2];
  uStack_138 = unaff_x20[5];
  uStack_140 = unaff_x20[4];
  uStack_128 = unaff_x20[7];
  uStack_130 = unaff_x20[6];
  uStack_d0 = uStack_160;
  uStack_c8 = uStack_158;
  uStack_c0 = uStack_150;
  uStack_b8 = uStack_148;
  uStack_b0 = uStack_140;
  uStack_a8 = uStack_138;
  uStack_a0 = uStack_130;
  uStack_98 = uStack_128;
  func_0x00010322542c(&uStack_160,auStack_1a0);
  puVar5 = &uStack_d0;
  FUN_103226df4(puVar5,&uStack_120,puVar4);
  func_0x000103225460(&uStack_90);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar5 & 1) != 0) {
    uVar6 = unaff_x20[9];
    lVar2 = unaff_x20[10];
    uVar1 = unaff_x20[0xb];
    uVar3 = unaff_x20[0xc];
    uVar8 = unaff_x20[0xd];
    puVar4 = &UNK_10db9f9d8;
    func_0x000107c614e0(&UNK_10db9f9d8);
    if (lVar2 == 0) goto LAB_10322478c;
    func_0x000107c61434(lVar2);
    func_0x000107c61434(uVar3);
    func_0x00010322681c(uVar6,lVar2,uVar1,uVar3,uVar8,puVar4);
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c6142c(lVar2);
    if (uVar6 == 0) {
      return (undefined8 *)0x0;
    }
    uVar7 = uVar6;
    func_0x000107c44b60();
    func_0x000107c61170(uVar6);
    if ((uVar7 & 1) == 0) {
      return (undefined8 *)0x0;
    }
  }
  puVar4 = &UNK_10db9f9b8;
  func_0x000107c614e0(&UNK_10db9f9b8);
  func_0x00010322542c(&uStack_160,auStack_1a0);
  puVar5 = &uStack_d0;
  FUN_1032266a4(puVar5,&uStack_120,puVar4);
  func_0x000103225460(&uStack_90);
  func_0x000107c61574(puVar4);
  return puVar5;
}



/* Entry: 1032247b0; end: 1032248ab;  */

byte FUN_1032247b0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_1;
  uVar1 = param_1[1];
  uVar5 = *param_2;
  uVar2 = param_2[1];
  if (uVar6 == 0) {
    uVar4 = 0;
    if (uVar5 != 0) goto LAB_103224804;
LAB_10322486c:
    uVar6 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar4 = uVar6;
    func_0x000107c6148c(uVar6,puVar3);
    if (uVar4 != 0) {
      func_0x000107c615f0(uVar6);
    }
    if (uVar5 == 0) goto LAB_10322486c;
LAB_103224804:
    puVar3 = PTR__OBJC_CLASS___NSObject_1126b1300;
    func_0x000107c61168(PTR__OBJC_CLASS___NSObject_1126b1300);
    uVar6 = uVar5;
    func_0x000107c6148c(uVar5,puVar3);
    if (uVar6 != 0) {
      func_0x000107c615f0(uVar5);
    }
  }
  if (uVar4 == 0) {
    uVar4 = uVar6;
    if (uVar6 == 0) goto LAB_103224880;
  }
  else if (uVar6 != 0) {
    func_0x0001007bbbf8(0);
    uVar5 = uVar4;
    func_0x000107c60118(uVar4,uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
LAB_103224880:
    return (byte)uVar1 ^ (byte)uVar2 ^ 1;
  }
  func_0x000107c61170(uVar4);
  return 0;
}



/* Entry: 1032248ac; end: 1032249b7;  */

void FUN_1032248ac(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  lVar6 = *param_1;
  lVar1 = param_1[1];
  if (lVar6 == 0) {
    func_0x0001000285a8(0x112f4d6d0,&UNK_10db9f968);
    uStack_32 = 2;
    uStack_31 = (char)lVar1;
    func_0x000100854cb0(&uStack_32);
  }
  else {
    lVar2 = lVar6;
    func_0x000107c615f0(lVar6);
    FUN_1032240d8();
    puVar3 = &UNK_110628588;
    func_0x000107c613fc(&UNK_110628588,0x19,7);
    *(long *)(puVar3 + 0x10) = lVar6;
    puVar3[0x18] = (char)lVar1;
    puVar4 = &UNK_1106285b0;
    func_0x000107c613fc(&UNK_1106285b0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x1032253dc;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    func_0x000107c615f0(lVar6);
    uVar5 = 0x112f4d6c0;
    func_0x0001000285a8(0x112f4d6c0,&UNK_10db9f958);
    func_0x0001000bfde0(FUN_1032253f8,puVar4,uVar5);
    func_0x000107c615e8(lVar6);
    func_0x000107c61574(lVar2);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 1032249b8; end: 1032249ff;  */

byte FUN_1032249b8(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  bVar1 = *param_2;
  if (*param_1 == 2) {
    if (bVar1 == 2) {
LAB_1032249f4:
      return param_1[1] ^ param_2[1] ^ 1;
    }
  }
  else if ((bVar1 != 2) && (((*param_1 ^ bVar1) & 1) == 0)) goto LAB_1032249f4;
  return 0;
}



/* Entry: 103224a00; end: 103224d17;  */

void FUN_103224a00(undefined8 param_1,uint param_2,undefined *param_3,undefined **param_4,
                  undefined **param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  ulong uVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuStack_378;
  undefined *puStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined **ppuStack_358;
  undefined *puStack_350;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined *puStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined **ppuStack_2e8;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 uStack_2cf;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_29f;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  undefined *puStack_270;
  undefined2 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined **ppuStack_250;
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  undefined **ppuStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined8 uStack_1af;
  undefined **ppuStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined8 uStack_ff;
  
  if (((param_2 & 0xff) == 2) || (((param_2 & 1) != 0 && (((ulong)param_3 & 1) != 0)))) {
    func_0x0001032253a8(&ppuStack_1a0);
  }
  else {
    ppuVar3 = &PTR_PTR_1109fe438;
    if ((param_2 & 1) == 0) {
      ppuVar3 = &PTR_PTR_1109fe428;
    }
    puVar1 = *ppuVar3;
    func_0x000107c5faec();
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    puVar6 = param_3;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar3 = &PTR____CFConstantStringClassReference_110eb0238;
    func_0x000107c5faec();
    uVar4 = (ulong)((param_2 ^ 0xffffffff) & 1);
    func_0x000107c5fca0(uVar4);
    ppuStack_1a0 = ppuVar3;
    puStack_198 = puVar6;
    func_0x000107c61434(puVar6);
    pppuVar5 = &ppuStack_1a0;
    puVar7 = PTR___sSSN_11034da80;
    func_0x000107c6061c();
    func_0x000107c3ac78(puVar2);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8();
    if ((~param_2 & 1) == 0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110eb0278;
      func_0x000107c5faec();
      ppuVar8 = &PTR____CFConstantStringClassReference_110eb0218;
      ppuStack_1a0 = ppuVar3;
      puStack_198 = puVar7;
      func_0x000107c61174(&PTR____CFConstantStringClassReference_110eb0218);
      func_0x000107c61434(puVar7);
      pppuVar5 = &ppuStack_1a0;
      puVar6 = PTR___sSSN_11034da80;
      func_0x000107c6061c();
      func_0x000107c3ac78(puVar2);
      func_0x000107c6142c(puVar7);
      func_0x000107c61170(ppuVar8);
      func_0x000107c615e8();
      func_0x0001032273dc();
      param_4 = param_5;
      puVar7 = puVar6;
    }
    else {
      func_0x0001032273f0();
    }
    if (param_4 == (undefined **)0x0) {
      func_0x0001031e60c4(&ppuStack_250);
    }
    else {
      ppuStack_378 = param_4;
      func_0x0001031e60f0(&ppuStack_378);
      puStack_128 = puStack_300;
      ppuStack_130 = ppuStack_308;
      uStack_118 = uStack_2f0;
      uStack_120 = uStack_2f8;
      ppuStack_110 = ppuStack_2e8;
      uStack_ff = CONCAT17(uStack_2d0,uStack_2d7);
      uStack_158 = uStack_330;
      puStack_160 = puStack_338;
      ppuStack_148 = ppuStack_320;
      uStack_150 = uStack_328;
      uStack_138 = uStack_310;
      puStack_140 = puStack_318;
      puStack_198 = puStack_370;
      ppuStack_1a0 = ppuStack_378;
      uStack_188 = uStack_360;
      uStack_190 = uStack_368;
      puStack_178 = puStack_350;
      ppuStack_180 = ppuStack_358;
      ppuStack_168 = ppuStack_340;
      uStack_170 = uStack_348;
      func_0x0001031e6100(&ppuStack_1a0);
      uStack_1c8 = uStack_118;
      uStack_1d0 = uStack_120;
      ppuStack_1c0 = ppuStack_110;
      uStack_1af = uStack_ff;
      uStack_208 = uStack_158;
      puStack_210 = puStack_160;
      ppuStack_1f8 = ppuStack_148;
      uStack_200 = uStack_150;
      uStack_1e8 = uStack_138;
      puStack_1f0 = puStack_140;
      puStack_1d8 = puStack_128;
      ppuStack_1e0 = ppuStack_130;
      puStack_248 = puStack_198;
      ppuStack_250 = ppuStack_1a0;
      uStack_238 = uStack_188;
      uStack_240 = uStack_190;
      puStack_228 = puStack_178;
      ppuStack_230 = ppuStack_180;
      ppuStack_218 = ppuStack_168;
      uStack_220 = uStack_170;
    }
    puStack_2c8 = puStack_1d8;
    uStack_2d0 = SUB81(ppuStack_1e0,0);
    uStack_2cf = (undefined7)((ulong)ppuStack_1e0 >> 8);
    uStack_2b8 = uStack_1c8;
    uStack_2c0 = uStack_1d0;
    ppuStack_2b0 = ppuStack_1c0;
    uStack_29f = uStack_1af;
    ppuStack_308 = ppuStack_218;
    uStack_310 = uStack_220;
    uStack_2f8 = uStack_208;
    puStack_300 = puStack_210;
    ppuStack_2e8 = ppuStack_1f8;
    uStack_2f0 = uStack_200;
    uStack_2d8 = (undefined1)uStack_1e8;
    uStack_2d7 = (undefined7)((ulong)uStack_1e8 >> 8);
    uStack_2e0 = SUB81(puStack_1f0,0);
    uStack_2df = (undefined7)((ulong)puStack_1f0 >> 8);
    puStack_338 = puStack_248;
    ppuStack_340 = ppuStack_250;
    uStack_328 = uStack_238;
    uStack_330 = uStack_240;
    puStack_318 = puStack_228;
    ppuStack_320 = ppuStack_230;
    uStack_258 = 1;
    if ((param_2 & 1) != 0) {
      uStack_258 = 2;
    }
    ppuStack_378 = (undefined **)0x0;
    puStack_370 = (undefined *)0x0;
    uStack_368 = 0x6269726373627573;
    uStack_360 = 0xe900000000000065;
    uStack_348 = 0;
    uStack_288 = 1;
    uStack_290 = 0;
    uStack_268 = 0x102;
    uStack_260 = 0;
    ppuStack_358 = (undefined **)pppuVar5;
    puStack_350 = puVar7;
    puStack_280 = puVar1;
    puStack_278 = param_3;
    puStack_270 = puVar2;
    func_0x0001032253d8(&ppuStack_378);
    func_0x000107c610b4(&ppuStack_1a0,&ppuStack_378,0x128);
    func_0x000107c61174(param_4);
  }
  func_0x000107c610b4(param_1,&ppuStack_1a0,0x128);
  return;
}



/* Entry: 103224d18; end: 103224d5f;  */

void FUN_103224d18(undefined8 param_1,undefined1 *param_2)

{
  undefined1 auStack_148 [296];
  
  FUN_103224a00(auStack_148,*param_2,param_2[1],*(undefined8 *)(param_2 + 8),
                *(undefined8 *)(param_2 + 0x10));
  func_0x000107c610b4(param_1,auStack_148,0x128);
  return;
}



/* Entry: 103224d60; end: 103224d63;  */

code * FUN_103224d60(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  
  puVar1 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  pcVar3 = FUN_10322435c;
  FUN_10326d7dc(FUN_10322435c,0,uVar2);
  func_0x000107c61170(uVar2);
  uVar4 = *puVar1;
  func_0x000107c61174(uVar4);
  uVar2 = 0x1032243c0;
  FUN_10326d7dc(0x1032243c0,0,uVar4);
  func_0x000107c61170(uVar4);
  pcVar5 = FUN_103224424;
  func_0x0001000c0ebc(FUN_103224424,0);
  uVar4 = 0x112f4d6b8;
  func_0x0001000285a8(0x112f4d6b8,&UNK_10db9f950);
  pcVar6 = FUN_103224500;
  func_0x0001000bfde0(FUN_103224500,0,uVar4);
  func_0x000107c61574(pcVar5);
  pcVar5 = FUN_1032247b0;
  func_0x00010487de38(FUN_1032247b0,0);
  func_0x000107c61574(pcVar6);
  uVar4 = 0x112f4d6c0;
  func_0x0001000285a8(0x112f4d6c0,&UNK_10db9f958);
  pcVar6 = FUN_1032248ac;
  func_0x00010068b194(FUN_1032248ac,0,uVar4);
  func_0x000107c61574(pcVar5);
  pcVar5 = FUN_1032249b8;
  func_0x00010487de38(FUN_1032249b8,0);
  func_0x000107c61574(pcVar6);
  pcVar6 = pcVar3;
  func_0x00010061da28(pcVar3,uVar2);
  func_0x000107c61574(pcVar5);
  uVar4 = 0x112f4d6c8;
  func_0x0001000285a8(0x112f4d6c8,&UNK_10db9f960);
  pcVar5 = FUN_103224d18;
  func_0x0001000bfde0(FUN_103224d18,0,uVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar6);
  return pcVar5;
}



/* Entry: 103224d64; end: 103224d9b;  */

undefined * FUN_103224d64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x000103217430();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 103224d9c; end: 103224e37;  */

void FUN_103224d9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f0e558;
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f0ea78;
  uVar5 = param_3;
  func_0x000107c5faec();
  ppuVar3 = &PTR____CFConstantStringClassReference_110f0ead8;
  uVar6 = uVar5;
  func_0x000107c5faec();
  ppuVar4 = &PTR____CFConstantStringClassReference_110ebe918;
  uVar7 = uVar6;
  func_0x000107c5faec();
  *param_1 = ppuVar1;
  param_1[1] = param_3;
  param_1[2] = ppuVar2;
  param_1[3] = uVar5;
  param_1[4] = ppuVar3;
  param_1[5] = uVar6;
  param_1[6] = ppuVar4;
  param_1[7] = uVar7;
  return;
}



/* Entry: 103224e38; end: 103224e7f;  */

undefined8 FUN_103224e38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103224e80; end: 103225047;  */

code * FUN_103224e80(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  
  puVar1 = (undefined8 *)0x112e15788;
  func_0x0001000285a8(0x112e15788,&UNK_10d9f2770);
  FUN_10326da44();
  uVar2 = *puVar1;
  func_0x000107c61174(uVar2);
  pcVar3 = FUN_10322435c;
  FUN_10326d7dc(FUN_10322435c,0,uVar2);
  func_0x000107c61170(uVar2);
  uVar4 = *puVar1;
  func_0x000107c61174(uVar4);
  uVar2 = 0x1032243c0;
  FUN_10326d7dc(0x1032243c0,0,uVar4);
  func_0x000107c61170(uVar4);
  pcVar5 = FUN_103224424;
  func_0x0001000c0ebc(FUN_103224424,0);
  uVar4 = 0x112f4d6b8;
  func_0x0001000285a8(0x112f4d6b8,&UNK_10db9f950);
  pcVar6 = FUN_103224500;
  func_0x0001000bfde0(FUN_103224500,0,uVar4);
  func_0x000107c61574(pcVar5);
  pcVar5 = FUN_1032247b0;
  func_0x00010487de38(FUN_1032247b0,0);
  func_0x000107c61574(pcVar6);
  uVar4 = 0x112f4d6c0;
  func_0x0001000285a8(0x112f4d6c0,&UNK_10db9f958);
  pcVar6 = FUN_1032248ac;
  func_0x00010068b194(FUN_1032248ac,0,uVar4);
  func_0x000107c61574(pcVar5);
  pcVar5 = FUN_1032249b8;
  func_0x00010487de38(FUN_1032249b8,0);
  func_0x000107c61574(pcVar6);
  pcVar6 = pcVar3;
  func_0x00010061da28(pcVar3,uVar2);
  func_0x000107c61574(pcVar5);
  uVar4 = 0x112f4d6c8;
  func_0x0001000285a8(0x112f4d6c8,&UNK_10db9f960);
  pcVar5 = FUN_103224d18;
  func_0x0001000bfde0(FUN_103224d18,0,uVar4);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(pcVar6);
  return pcVar5;
}



/* Entry: 103225048; end: 10322506b;  */

void FUN_103225048(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10322506c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10322506c; end: 1032250ab;  */

void FUN_10322506c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9f8f0;
  func_0x000107c61520(&DAT_10db9f8f0,&UNK_1106284e0);
  puRam0000000112f4d660 = puVar1;
  return;
}



/* Entry: 1032250ac; end: 1032250af;  */

void FUN_1032250ac(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d668 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d670;
  func_0x00010002969c(0x112f4d670,&UNK_10db9f8e8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d668 = puVar2;
  return;
}



/* Entry: 1032250b0; end: 1032250ff;  */

void FUN_1032250b0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d668 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d670;
  func_0x00010002969c(0x112f4d670,&UNK_10db9f8e8);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d668 = puVar2;
  return;
}



/* Entry: 103225100; end: 103225127;  */

undefined ** FUN_103225100(void)

{
  return &PTR_DAT_1106284a0;
}



/* Entry: 103225128; end: 10322518b;  */

long FUN_103225128(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10322518c; end: 10322529b;  */

undefined8 * FUN_10322518c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 10322529c; end: 1032252ff;  */

undefined8 * FUN_10322529c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103225300; end: 1032253f7;  */

int FUN_103225300(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032253f8; end: 1032254d7;  */

void FUN_1032253f8(undefined1 *param_1,byte *param_2)

{
  ushort uVar1;
  long unaff_x20;
  
  uVar1 = (ushort)*param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = (char)uVar1;
  param_1[1] = (byte)(uVar1 >> 8) & 1;
  return;
}



/* Entry: 1032254d8; end: 10322555b;  */

long FUN_1032254d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar3 = 0x112f4b518;
  func_0x0001000285a8(0x112f4b518,&UNK_10db9ab10);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uVar4 = 0x112f4b520;
  func_0x0001000285a8(0x112f4b520,&UNK_10db9b280);
  *(undefined8 *)(lVar3 + 0x38) = uVar4;
  *(undefined ***)(lVar3 + 0x40) = &PTR_DAT_11076bd60;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
  func_0x000107c61434(uVar2);
  return lVar3;
}



/* Entry: 10322555c; end: 1032255f3;  */

void FUN_10322555c(byte *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  lVar1 = param_2[1];
  uVar5 = param_2[2];
  puVar2 = &UNK_10db9fab8;
  func_0x000107c614e0(&UNK_10db9fab8);
  if (lVar1 == 0) {
    func_0x000107c61574();
    bVar4 = 0;
  }
  else {
    func_0x000107c61434(lVar1);
    FUN_103226ca8(uVar3,lVar1,uVar5,puVar2);
    bVar4 = (byte)uVar3;
    func_0x000107c61574(puVar2);
    func_0x000107c6142c(lVar1);
  }
  *param_1 = bVar4 & 1;
  return;
}



/* Entry: 1032255f4; end: 10322570b;  */

void FUN_1032255f4(undefined8 param_1,char *param_2)

{
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_167;
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
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7f;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined2 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 == '\x01') {
    func_0x0001031e60c4(&uStack_208);
    uStack_a8 = uStack_190;
    uStack_b0 = uStack_198;
    uStack_98 = uStack_180;
    uStack_a0 = uStack_188;
    uStack_90 = uStack_178;
    uStack_7f = uStack_167;
    uStack_e8 = uStack_1d0;
    uStack_f0 = uStack_1d8;
    uStack_d8 = uStack_1c0;
    uStack_e0 = uStack_1c8;
    uStack_c8 = uStack_1b0;
    uStack_d0 = uStack_1b8;
    uStack_b8 = uStack_1a0;
    uStack_c0 = uStack_1a8;
    uStack_118 = uStack_200;
    uStack_120 = uStack_208;
    uStack_108 = uStack_1f0;
    uStack_110 = uStack_1f8;
    uStack_f8 = uStack_1e0;
    uStack_100 = uStack_1e8;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_148 = 0x747441656c746974;
    uStack_140 = 0xef746e656d686361;
    uStack_138 = 0;
    uStack_130 = 0xe000000000000000;
    uStack_68 = 3;
    uStack_70 = 0;
    uStack_128 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0x103;
    uStack_40 = 0;
    uStack_38 = 1;
    func_0x0001032259ec(&uStack_158);
  }
  else {
    func_0x0001032259bc(&uStack_158);
  }
  func_0x000107c610b4(param_1,&uStack_158,0x128);
  return;
}



/* Entry: 10322570c; end: 1032257bb;  */

code * FUN_10322570c(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  pcVar1 = FUN_10322555c;
  func_0x0001000bfde0(FUN_10322555c,0,PTR___sSbN_11034dd40);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar1);
  uVar3 = 0x112f4d6e0;
  func_0x0001000285a8(0x112f4d6e0,&UNK_10db9fa20);
  pcVar1 = FUN_1032255f4;
  func_0x0001000bfde0(FUN_1032255f4,0,uVar3);
  func_0x000107c61574(puVar2);
  return pcVar1;
}



/* Entry: 1032257bc; end: 1032257fb;  */

void FUN_1032257bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10db9fa60;
  func_0x000107c61520(&DAT_10db9fa60,&UNK_110628620);
  puRam0000000112f4d6e8 = puVar1;
  return;
}



/* Entry: 1032257fc; end: 1032257ff;  */

void FUN_1032257fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d6f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d6f8;
  func_0x00010002969c(0x112f4d6f8,&UNK_10db9fa58);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d6f0 = puVar2;
  return;
}



/* Entry: 103225800; end: 10322584f;  */

void FUN_103225800(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f4d6f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f4d6f8;
  func_0x00010002969c(0x112f4d6f8,&UNK_10db9fa58);
  puVar2 = &DAT_10dcf9f88;
  func_0x000107c61520(&DAT_10dcf9f88,uVar1);
  puRam0000000112f4d6f0 = puVar2;
  return;
}



/* Entry: 103225850; end: 103225867;  */

undefined ** FUN_103225850(void)

{
  return &PTR_DAT_1106285e0;
}



/* Entry: 103225868; end: 10322589f;  */

undefined * FUN_103225868(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  lVar1 = param_1;
  func_0x000103217270();
  (**(code **)(lVar1 + 0x10))();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar2 = &UNK_11076a4b8;
    _swift_allocObject(&UNK_11076a4b8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = lVar1;
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(lVar1 + 8),param_2,&UNK_10e804a1c,&UNK_10e804a4c);
    uVar4 = 0;
    __sSaMa(0,uVar3);
    puVar5 = &UNK_104414c94;
    func_0x0001000bfde0(&UNK_104414c94,puVar2,uVar4);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  return puVar5;
}



/* Entry: 1032258a0; end: 1032258b7;  */

undefined1  [16] FUN_1032258a0(void)

{
  return ZEXT816(0x110628620);
}



/* Entry: 1032258b8; end: 103225927;  */

undefined8 * FUN_1032258b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 103225928; end: 1032259ef;  */

int FUN_103225928(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1032259f0; end: 103225a5b;  */

void FUN_1032259f0(void)

{
  FUN_1032266c8();
  return;
}



/* Entry: 103225a5c; end: 103225b97;  */

undefined8
FUN_103225a5c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_e0 [4];
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
  
  iVar1 = (int)auStack_e0;
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  lVar5 = *(long *)(param_2 + 0x50);
  func_0x000107c614bc(&uStack_a0,&uStack_90,param_3);
  uStack_c0 = uStack_a0;
  uStack_b8 = uStack_98;
  func_0x000107c61434(uStack_98);
  puVar2 = &uStack_c0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_98);
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x000107c60234(auStack_e0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_98);
    func_0x000100102924(auStack_e0,&uStack_c0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_103226db4(0,param_4,param_5);
  func_0x000107c6147c(auStack_e0,&uStack_c0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_e0[0] = 0;
  }
  return auStack_e0[0];
}



/* Entry: 103225b98; end: 103225cb7;  */

undefined1 FUN_103225b98(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_d0 [32];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_d0;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  lVar4 = *(long *)(param_2 + 0x50);
  func_0x000107c614bc(&uStack_90,&uStack_80,param_3);
  uStack_b0 = uStack_90;
  uStack_a8 = uStack_88;
  func_0x000107c61434(uStack_88);
  puVar2 = &uStack_b0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_88);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(auStack_d0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_88);
    func_0x000100102924(auStack_d0,&uStack_b0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_d0,&uStack_b0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_d0[0] = 2;
  }
  return auStack_d0[0];
}



/* Entry: 103225cb8; end: 103225def;  */

undefined1  [16] FUN_103225cb8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  iVar1 = (int)&uStack_130;
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  lVar4 = *(long *)(param_2 + 0xa0);
  func_0x000107c614bc(&uStack_f0,&uStack_e0,param_3);
  uStack_110 = uStack_f0;
  uStack_108 = uStack_e8;
  func_0x000107c61434(uStack_e8);
  puVar2 = &uStack_110;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_e8);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x000107c60234(&uStack_130,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_e8);
    func_0x000100102924(&uStack_130,&uStack_110);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_130,&uStack_110,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_128 = 0;
    uStack_130 = 0;
  }
  auVar5._8_8_ = uStack_128;
  auVar5._0_8_ = uStack_130;
  return auVar5;
}



/* Entry: 103225df0; end: 103225f27;  */

undefined1 FUN_103225df0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_130 [32];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  
  iVar1 = (int)auStack_130;
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  lVar4 = *(long *)(param_2 + 0xa0);
  func_0x000107c614bc(&uStack_f0,&uStack_e0,param_3);
  uStack_110 = uStack_f0;
  uStack_108 = uStack_e8;
  func_0x000107c61434(uStack_e8);
  puVar2 = &uStack_110;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_e8);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    func_0x000107c60234(auStack_130,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_e8);
    func_0x000100102924(auStack_130,&uStack_110);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_130,&uStack_110,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_130[0] = 2;
  }
  return auStack_130[0];
}



/* Entry: 103225f28; end: 103225f6f;  */

void FUN_103225f28(void)

{
  FUN_103225f70();
  return;
}



/* Entry: 103225f70; end: 1032260c3;  */

undefined8
FUN_103225f70(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_140 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = (int)auStack_140;
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  lVar5 = *(long *)(param_2 + 0xa0);
  func_0x000107c614bc(&uStack_100,&uStack_f0,param_3);
  uStack_120 = uStack_100;
  uStack_118 = uStack_f8;
  func_0x000107c61434(uStack_f8);
  puVar2 = &uStack_120;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_f8);
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x000107c60234(auStack_140,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_f8);
    func_0x000100102924(auStack_140,&uStack_120);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_103226db4(0,param_4,param_5);
  func_0x000107c6147c(auStack_140,&uStack_120,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_140[0] = 0;
  }
  return auStack_140[0];
}



/* Entry: 1032260c4; end: 1032261df;  */

undefined1  [16] FUN_1032260c4(undefined8 *param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 auStack_b0 [4];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = (uint)auStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,PTR___sSiN_11034deb0,6);
  if (uVar1 == 0) {
    auStack_b0[0] = 0;
  }
  auVar5._8_4_ = uVar1 ^ 1;
  auVar5._0_8_ = auStack_b0[0];
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Entry: 1032261e0; end: 1032262f7;  */

undefined1  [16] FUN_1032261e0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_b0;
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  lVar4 = *(long *)(param_2 + 0x30);
  func_0x000107c614bc(&uStack_70,&uStack_60,param_3);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(&uStack_b0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(&uStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_b0,&uStack_90,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  auVar5._8_8_ = uStack_a8;
  auVar5._0_8_ = uStack_b0;
  return auVar5;
}



/* Entry: 1032262f8; end: 10322640f;  */

undefined1  [16] FUN_1032262f8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(&uStack_c0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(&uStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_c0,&uStack_a0,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  auVar5._8_8_ = uStack_b8;
  auVar5._0_8_ = uStack_c0;
  return auVar5;
}



/* Entry: 103226410; end: 103226457;  */

void FUN_103226410(void)

{
  FUN_103226458();
  return;
}



/* Entry: 103226458; end: 10322658b;  */

undefined8
FUN_103226458(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 auStack_d0 [4];
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
  
  iVar1 = (int)auStack_d0;
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  lVar5 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_90,&uStack_80,param_3);
  uStack_b0 = uStack_90;
  uStack_a8 = uStack_88;
  func_0x000107c61434(uStack_88);
  puVar2 = &uStack_b0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar5 == 0) {
    func_0x000107c6142c(uStack_88);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(auStack_d0,lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c6142c(uStack_88);
    func_0x000100102924(auStack_d0,&uStack_b0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_103226db4(0,param_4,param_5);
  func_0x000107c6147c(auStack_d0,&uStack_b0,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_d0[0] = 0;
  }
  return auStack_d0[0];
}



/* Entry: 10322658c; end: 1032266a3;  */

undefined1 FUN_10322658c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_c0 [32];
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
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_c0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_80,&uStack_70,param_3);
  uStack_a0 = uStack_80;
  uStack_98 = uStack_78;
  func_0x000107c61434(uStack_78);
  puVar2 = &uStack_a0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_78);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x000107c60234(auStack_c0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_78);
    func_0x000100102924(auStack_c0,&uStack_a0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_c0,&uStack_a0,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_c0[0] = 2;
  }
  return auStack_c0[0];
}



/* Entry: 1032266a4; end: 1032266c7;  */

void FUN_1032266a4(void)

{
  FUN_1032266c8();
  return;
}



/* Entry: 1032266c8; end: 1032267f7;  */

undefined8
FUN_1032266c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 auStack_d0 [4];
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
  
  iVar1 = (int)auStack_d0;
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  lVar4 = *(long *)(param_2 + 0x40);
  func_0x000107c614bc(&uStack_90,&uStack_80,param_3);
  uStack_b0 = uStack_90;
  uStack_a8 = uStack_88;
  func_0x000107c61434(uStack_88);
  puVar2 = &uStack_b0;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (lVar4 == 0) {
    func_0x000107c6142c(uStack_88);
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x000107c60234(auStack_d0,lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c6142c(uStack_88);
    func_0x000100102924(auStack_d0,&uStack_b0);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x0001000285a8(param_4,param_5);
  func_0x000107c6147c(auStack_d0,&uStack_b0,uVar3,param_4,6);
  if (iVar1 == 0) {
    auStack_d0[0] = 0;
  }
  return auStack_d0[0];
}



/* Entry: 1032267f8; end: 10322683f;  */

void FUN_1032267f8(void)

{
  FUN_103226840();
  return;
}



/* Entry: 103226840; end: 10322696b;  */

undefined8
FUN_103226840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_b0 [4];
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
  
  iVar1 = (int)auStack_b0;
  uStack_60 = param_1;
  uStack_58 = param_2;
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x000107c614bc(&uStack_70,&uStack_60,param_6);
  uStack_90 = uStack_70;
  uStack_88 = uStack_68;
  func_0x000107c61434(uStack_68);
  puVar2 = &uStack_90;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_5 == 0) {
    func_0x000107c6142c(uStack_68);
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x000107c60234(auStack_b0,param_5);
    func_0x000107c615e8(param_5);
    func_0x000107c6142c(uStack_68);
    func_0x000100102924(auStack_b0,&uStack_90);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_103226db4(0,param_7,param_8);
  func_0x000107c6147c(auStack_b0,&uStack_90,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_b0[0] = 0;
  }
  return auStack_b0[0];
}



/* Entry: 10322696c; end: 103226a8b;  */

undefined8 FUN_10322696c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 auStack_90 [4];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  uVar4 = 0;
  FUN_103226db4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,uVar4,6);
  if (iVar1 == 0) {
    auStack_90[0] = 0;
  }
  return auStack_90[0];
}



/* Entry: 103226a8c; end: 103226b9b;  */

undefined1  [16]
FUN_103226a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_a0;
  uStack_50 = param_1;
  uStack_48 = param_2;
  uStack_40 = param_3;
  uStack_38 = param_4;
  func_0x000107c614bc(&uStack_60,&uStack_50,param_6);
  uStack_80 = uStack_60;
  uStack_78 = uStack_58;
  func_0x000107c61434(uStack_58);
  puVar2 = &uStack_80;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_5 == 0) {
    func_0x000107c6142c(uStack_58);
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_a0,param_5);
    func_0x000107c615e8(param_5);
    func_0x000107c6142c(uStack_58);
    func_0x000100102924(&uStack_a0,&uStack_80);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_a0,&uStack_80,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  auVar4._8_8_ = uStack_98;
  auVar4._0_8_ = uStack_a0;
  return auVar4;
}



/* Entry: 103226b9c; end: 103226ca7;  */

undefined1  [16]
FUN_103226b9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)&uStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(&uStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(&uStack_90,&uStack_70,uVar3,PTR___sSSN_11034da80,6);
  if (iVar1 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
  }
  auVar4._8_8_ = uStack_88;
  auVar4._0_8_ = uStack_90;
  return auVar4;
}



/* Entry: 103226ca8; end: 103226db3;  */

undefined1 FUN_103226ca8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  iVar1 = (int)auStack_90;
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c614bc(&uStack_50,&uStack_40,param_4);
  uStack_70 = uStack_50;
  uStack_68 = uStack_48;
  func_0x000107c61434(uStack_48);
  puVar2 = &uStack_70;
  func_0x000107c6061c(puVar2,PTR___sSSN_11034da80);
  func_0x000107c3ac74();
  func_0x000107c61180();
  func_0x000107c615e8(puVar2);
  if (param_3 == 0) {
    func_0x000107c6142c(uStack_48);
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(auStack_90,param_3);
    func_0x000107c615e8(param_3);
    func_0x000107c6142c(uStack_48);
    func_0x000100102924(auStack_90,&uStack_70);
  }
  uVar3 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  func_0x000107c6147c(auStack_90,&uStack_70,uVar3,PTR___sSbN_11034dd40,6);
  if (iVar1 == 0) {
    auStack_90[0] = 2;
  }
  return auStack_90[0];
}



/* Entry: 103226db4; end: 103226df3;  */

void FUN_103226db4(undefined8 param_1,long *param_2,long *param_3)

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


