/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10136f108; end: 10136f163;  */

undefined8 * FUN_10136f108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_10136f08c(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_10136f0d8(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10136f164; end: 10136f1ab;  */

undefined8 * FUN_10136f164(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10136f1ac; end: 10136f1bf;  */

undefined8 * FUN_10136f1ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*(code *)0x10136ae70)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*(code *)0x10136f14c)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10136f1c0; end: 10136f21f;  */

undefined8 *
FUN_10136f1c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*param_5)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 10136f220; end: 10136f22b;  */

undefined8 * FUN_10136f220(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*(code *)0x10136f14c)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10136f22c; end: 10136f26f;  */

undefined8 * FUN_10136f22c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*param_4)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10136f270; end: 10136f377;  */

int FUN_10136f270(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10136f378; end: 10136f397;  */

void FUN_10136f378(void)

{
  func_0x000107c61168(&PTR_PTR_112d76010);
  return;
}



/* Entry: 10136f398; end: 10136f3bb;  */

void FUN_10136f398(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112d76070;
  plVar5 = (long *)&UNK_10d9360e8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101370a38(0,0x112d76068,&PTR_PTR_1126a6b58);
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



/* Entry: 10136f3bc; end: 10136f433;  */

void FUN_10136f3bc(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101370a38(0,param_1,param_2);
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



/* Entry: 10136f434; end: 10136f45b;  */

ulong FUN_10136f434(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f540);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f544);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126be098;
    func_0x000107c61168(PTR_PTR_1126be098);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126be098;
    func_0x000107c61168(PTR_PTR_1126be098);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101370a38(0,0x112d75618,&PTR_PTR_1126be098);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f618);
  (*pcVar2)();
}



/* Entry: 10136f45c; end: 10136f617;  */

ulong FUN_10136f45c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f540);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f544);
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
  FUN_101370a38(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f618);
  (*pcVar2)();
}



/* Entry: 10136f618; end: 10136f62b;  */

ulong FUN_10136f618(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f540);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f544);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126be0a0;
    func_0x000107c61168(PTR_PTR_1126be0a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126be0a0;
    func_0x000107c61168(PTR_PTR_1126be0a0);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101370a38(0,0x112d75610,&PTR_PTR_1126be0a0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10136f618);
  (*pcVar2)();
}



/* Entry: 10136f62c; end: 10136f6bb;  */

undefined *
FUN_10136f62c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_10136f3bc(param_3,param_4,param_5,param_6);
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



/* Entry: 10136f6bc; end: 10136fd07;  */

ulong FUN_10136f6bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136f804);
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
  FUN_10136f62c(uVar2,uVar4,0x112d75610,&PTR_PTR_1126be0a0,0x112d76078,&UNK_10d9360f0);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136f800);
      (*pcVar1)();
    }
    func_0x00010136f94c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10136fd08; end: 101370a37;  */

undefined * FUN_10136fd08(undefined *param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [40];
  
  puVar4 = param_1;
  func_0x000107c519c0();
  func_0x000107c61180();
  puVar2 = (undefined *)0x0;
  FUN_101370a38(0,0x112d75610,&PTR_PTR_1126be0a0);
  puVar3 = puVar4;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar4);
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar4 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar4 = puVar3;
    }
    func_0x000107c60480();
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar18;
  if (puVar4 != (undefined *)0x0) {
    ppuVar22 = (undefined **)0x0;
    puVar14 = puVar18;
    do {
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(undefined ***)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= ppuVar22) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013705cc);
          (*pcVar1)();
        }
        ppuVar5 = *(undefined ***)(puVar3 + (long)ppuVar22 * 8 + 0x20);
        func_0x000107c61174();
        puVar18 = puVar2;
      }
      else {
        ppuVar5 = ppuVar22;
        puVar18 = puVar3;
        FUN_10136f45c(ppuVar22,puVar3,&PTR_PTR_1126be0a0,0x112d75610);
      }
      puVar15 = (undefined *)((long)ppuVar22 + 1);
      if (SCARRY8((long)ppuVar22,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013705c8);
        (*pcVar1)();
      }
      ppuVar6 = ppuVar5;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013709ec);
        (*pcVar1)();
      }
      ppuVar7 = ppuVar6;
      func_0x000107c5faec();
      puVar2 = puVar18;
      func_0x000107c61174();
      ppuVar8 = ppuVar5;
      func_0x000107c44f7c();
      func_0x000107c61180();
      if (ppuVar8 == (undefined **)0x0) {
        func_0x000107c61170(ppuVar6);
        func_0x000107c61170(ppuVar6);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101370a00);
        (*pcVar1)();
      }
      ppuVar9 = &PTR____CFConstantStringClassReference_110da03b8;
      func_0x000107c5faec();
      if ((ppuVar7 == ppuVar9) && (puVar18 == puVar2)) {
        puVar17 = puVar2;
        func_0x000107c61174(ppuVar8);
        func_0x000107c61170(ppuVar6);
        func_0x000107c6142c(puVar2);
LAB_10136ff3c:
        uVar20 = param_2;
        func_0x000107c51d3c();
        func_0x000107c61180();
        uVar13 = uVar20;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar20);
        uVar20 = param_2;
        func_0x000107c51d00(param_2);
        func_0x000107c61180();
        uVar21 = uVar20;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(uVar20);
        if (uVar13 == 0) {
LAB_10137003c:
          func_0x000107c615e8(uVar21);
          uVar21 = 0;
        }
        else {
          uVar20 = uVar13;
          func_0x000107c51d04();
          func_0x000107c61180();
          if (uVar20 == 0) goto LAB_10137003c;
          uVar19 = uVar20;
          func_0x000107c5faec();
          puVar2 = puVar17;
          func_0x000107c61170(uVar20);
          func_0x000107c6142c(puVar17);
          uVar20 = uVar19 & 0xffffffffffff;
          if (((ulong)puVar17 & 0x2000000000000000) != 0) {
            uVar20 = (ulong)puVar17 >> 0x38 & 0xf;
          }
          if ((uVar20 == 0) || (param_3 == 0)) goto LAB_10137003c;
          uVar20 = param_3;
          func_0x000107c3e544();
          func_0x000107c61180();
          if (uVar20 == 0) goto LAB_10137003c;
          uVar19 = uVar20;
          func_0x000107c5faec();
          func_0x000107c61170(uVar20);
          func_0x000107c6142c(puVar2);
          uVar20 = uVar19 & 0xffffffffffff;
          if (((ulong)puVar2 & 0x2000000000000000) != 0) {
            uVar20 = (ulong)puVar2 >> 0x38 & 0xf;
          }
          if (uVar20 == 0) goto LAB_10137003c;
        }
        puVar2 = PTR_PTR_1126b08b0;
        func_0x000107c61168(PTR_PTR_1126b08b0);
        func_0x000107c3f71c();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar8);
        ppuVar9 = (undefined **)PTR_PTR_1126b08a8;
        func_0x000107c610f8(PTR_PTR_1126b08a8);
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c460f4(ppuVar9);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar17);
        lVar23 = param_4;
        func_0x000107c423b0();
        func_0x000107c61180();
        if (lVar23 == 0) {
          func_0x000107c61170(ppuVar8);
          func_0x000107c61170(ppuVar6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101370a28);
          (*pcVar1)();
        }
        lVar10 = lVar23;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar23);
        if (lVar10 == 0) {
          lVar23 = 0;
        }
        else {
          ppuVar7 = (undefined **)PTR_PTR_1126b08b8;
          func_0x000107c610f8(PTR_PTR_1126b08b8);
          func_0x000107c4766c();
          func_0x000107c61170(ppuVar8);
          lVar23 = lVar10;
          func_0x000107c409f4(lVar10);
          func_0x000107c61180();
          func_0x000107c615e8(lVar10);
          ppuVar8 = ppuVar7;
        }
        func_0x000107c61170(ppuVar8);
        ppuVar7 = ppuVar5;
        func_0x000107c5cb74();
        if ((int)ppuVar7 != 0) {
          func_0x000107c3e448(param_1);
        }
        ppuVar7 = ppuVar5;
        func_0x000107c417fc();
        func_0x000107c61180();
        if (ppuVar7 == (undefined **)0x0) {
          func_0x000107c61170(ppuVar6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101370a14);
          (*pcVar1)();
        }
        ppuVar8 = ppuVar7;
        func_0x000107c4d9a4();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar7);
        func_0x000107c60234(auStack_88,ppuVar8);
        func_0x000107c615e8(ppuVar8);
        puVar11 = &uStack_98;
        func_0x000107c6147c(puVar11,auStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        puVar17 = puStack_90;
        uVar12 = uStack_98;
        if ((int)puVar11 == 0) {
          uVar12 = 0;
          puVar17 = (undefined *)0xe000000000000000;
        }
        puVar16 = PTR_PTR_1126a6b58;
        func_0x000107c610f8();
        func_0x000107c615f0(uVar21);
        func_0x000107c615f0(lVar23);
        puVar2 = puVar17;
        func_0x000107c5fadc(uVar12);
        func_0x000107c6142c(puVar18);
        func_0x000107c6142c(puVar17);
        func_0x000107c47e58();
        func_0x000107c615e8(uVar21);
        func_0x000107c615e8(lVar23);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(ppuVar6);
        func_0x000107c61174();
        puVar18 = puVar14;
        func_0x000107c61550();
        if (((((ulong)puVar18 & 1) == 0) || ((long)puVar14 < 0)) ||
           (((ulong)puVar14 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar2 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar2 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar2 = puVar14;
            }
            func_0x000107c60480();
          }
          puVar2 = puVar2 + 1;
          puVar18 = (undefined *)0x0;
          func_0x00010136f804(0,puVar2,1,puVar14);
          puVar14 = puVar18;
        }
        uVar19 = (ulong)puVar14 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar19 + 0x10);
        puVar17 = (undefined *)(uVar20 + 1);
        puVar18 = puVar14;
        if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar20) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
          puVar2 = puVar17;
          func_0x00010136f804(puVar18,puVar17,1,puVar14);
          uVar19 = (ulong)puVar18 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar19 + 0x10) = puVar17;
        *(undefined **)(uVar19 + uVar20 * 8 + 0x20) = puVar16;
        func_0x000107c61170(puVar16);
        func_0x000107c615e8(uVar13);
        func_0x000107c615e8(uVar21);
        ppuVar7 = ppuVar5;
        ppuVar5 = ppuVar9;
      }
      else {
        puVar17 = puVar18;
        func_0x000107c605b8(ppuVar7,puVar18,ppuVar9,puVar2,0);
        ppuVar9 = ppuVar8;
        func_0x000107c61174(ppuVar8);
        func_0x000107c61170(ppuVar6);
        func_0x000107c6142c(puVar2);
        if (((ulong)ppuVar7 & 1) != 0) goto LAB_10136ff3c;
        puVar2 = PTR_PTR_1126b08b0;
        func_0x000107c61168(PTR_PTR_1126b08b0);
        func_0x000107c3f71c();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar9);
        ppuVar7 = (undefined **)PTR_PTR_1126b08a8;
        func_0x000107c610f8(PTR_PTR_1126b08a8);
        puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c460f4(ppuVar7);
        func_0x000107c61170(puVar2);
        func_0x000107c61170(puVar17);
        lVar23 = param_4;
        func_0x000107c423b0();
        func_0x000107c61180();
        if (lVar23 == 0) {
LAB_1013703a0:
          lVar23 = 0;
        }
        else {
          lVar10 = lVar23;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar23);
          if (lVar10 == 0) goto LAB_1013703a0;
          ppuVar8 = (undefined **)PTR_PTR_1126b08b8;
          func_0x000107c610f8(PTR_PTR_1126b08b8);
          func_0x000107c4766c();
          func_0x000107c61170(ppuVar9);
          lVar23 = lVar10;
          func_0x000107c409f4(lVar10);
          func_0x000107c61180();
          func_0x000107c615e8(lVar10);
          ppuVar9 = ppuVar8;
        }
        func_0x000107c61170(ppuVar9);
        ppuVar8 = ppuVar5;
        func_0x000107c417fc();
        func_0x000107c61180();
        if (ppuVar8 == (undefined **)0x0) {
          func_0x000107c61170(ppuVar6);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101370a38);
          (*pcVar1)();
        }
        ppuVar9 = ppuVar8;
        func_0x000107c4d9a4();
        func_0x000107c61180();
        func_0x000107c61170(ppuVar8);
        func_0x000107c60234(auStack_88,ppuVar9);
        func_0x000107c615e8(ppuVar9);
        puVar11 = &uStack_98;
        func_0x000107c6147c(puVar11,auStack_88,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        puVar17 = puStack_90;
        uVar12 = uStack_98;
        if ((int)puVar11 == 0) {
          uVar12 = 0;
          puVar17 = (undefined *)0xe000000000000000;
        }
        func_0x000107c615f0(lVar23);
        func_0x000107c5cb74(ppuVar5);
        puVar16 = PTR_PTR_1126a6b58;
        func_0x000107c610f8();
        puVar2 = puVar17;
        func_0x000107c5fadc(uVar12);
        func_0x000107c6142c(puVar18);
        func_0x000107c6142c(puVar17);
        func_0x000107c47e58();
        func_0x000107c615e8(lVar23);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(ppuVar6);
        func_0x000107c61174();
        puVar18 = puVar14;
        func_0x000107c61550();
        if (((((ulong)puVar18 & 1) == 0) || ((long)puVar14 < 0)) ||
           (((ulong)puVar14 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar14 >> 0x3e == 0) {
            puVar2 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar2 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar14) {
              puVar2 = puVar14;
            }
            func_0x000107c60480();
          }
          puVar2 = puVar2 + 1;
          puVar18 = (undefined *)0x0;
          func_0x00010136f804(0,puVar2,1,puVar14);
          puVar14 = puVar18;
        }
        uVar13 = (ulong)puVar14 & 0xffffffffffffff8;
        uVar20 = *(ulong *)(uVar13 + 0x10);
        puVar17 = (undefined *)(uVar20 + 1);
        puVar18 = puVar14;
        if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar20) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
          puVar2 = puVar17;
          func_0x00010136f804(puVar18,puVar17,1,puVar14);
          uVar13 = (ulong)puVar18 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar13 + 0x10) = puVar17;
        *(undefined **)(uVar13 + uVar20 * 8 + 0x20) = puVar16;
        func_0x000107c61170(puVar16);
      }
      func_0x000107c615e8(lVar23);
      func_0x000107c61170(ppuVar7);
      func_0x000107c61170(ppuVar5);
      ppuVar22 = (undefined **)((long)ppuVar22 + 1);
      puVar14 = puVar18;
    } while (puVar15 != puVar4);
  }
  func_0x000107c6142c(puVar3);
  puVar2 = param_1;
  func_0x000107c5b310();
  func_0x000107c61180();
  uVar12 = 0;
  FUN_101370a38(0,0x112d75618,&PTR_PTR_1126be098);
  puVar4 = puVar2;
  func_0x000107c5fc54(puVar2,uVar12);
  func_0x000107c61170(puVar2);
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar2 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar2 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar2 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar2 != (undefined *)0x0) {
    uVar20 = 0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013709a4);
          (*pcVar1)();
        }
        uVar13 = *(ulong *)(puVar4 + uVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar13 = uVar20;
        FUN_10136f45c(uVar20,puVar4,&PTR_PTR_1126be098,0x112d75618);
      }
      puVar3 = (undefined *)(uVar20 + 1);
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013709a0);
        (*pcVar1)();
      }
      uVar21 = uVar13;
      func_0x000107c44fb4();
      func_0x000107c61180();
      if (uVar21 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101370a04);
        (*pcVar1)();
      }
      puVar14 = PTR_PTR_1126b08b0;
      func_0x000107c61168(PTR_PTR_1126b08b0);
      func_0x000107c3f71c();
      func_0x000107c61180();
      func_0x000107c61170(uVar21);
      puVar15 = PTR_PTR_1126b08a8;
      func_0x000107c610f8();
      puVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar16 = PTR___sSSN_11034da80;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
      func_0x000107c460f4();
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar17);
      lVar23 = param_4;
      func_0x000107c423b0();
      func_0x000107c61180();
      if (lVar23 == 0) {
LAB_1013707c8:
        lVar23 = 0;
      }
      else {
        lVar10 = lVar23;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar23);
        if (lVar10 == 0) goto LAB_1013707c8;
        uVar21 = uVar13;
        func_0x000107c44fb4();
        func_0x000107c61180();
        if (uVar21 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101370a2c);
          (*pcVar1)();
        }
        puVar14 = PTR_PTR_1126b08b8;
        func_0x000107c610f8(PTR_PTR_1126b08b8);
        func_0x000107c4766c();
        func_0x000107c61170(uVar21);
        lVar23 = lVar10;
        func_0x000107c409f4(lVar10);
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(puVar14);
      }
      uVar21 = uVar13;
      func_0x00010136fb7c(uVar13);
      uVar19 = uVar13;
      func_0x000107c5cb74();
      if (((int)uVar19 != 0) &&
         (puVar14 = param_1, func_0x000107c3e448(), ((ulong)puVar14 & 1) == 0)) {
        func_0x000107c4c06c(param_1);
      }
      uVar19 = uVar13;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      if (uVar19 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101370a08);
        (*pcVar1)();
      }
      puVar14 = PTR_PTR_1126a6b58;
      func_0x000107c610f8();
      func_0x000107c615f0(lVar23);
      func_0x000107c5fadc(uVar21,puVar16);
      func_0x000107c6142c(puVar16);
      func_0x000107c47e58();
      func_0x000107c615e8(lVar23);
      func_0x000107c61170(uVar21);
      func_0x000107c61170(uVar19);
      func_0x000107c61174();
      puVar17 = puVar18;
      func_0x000107c61550();
      if ((((int)puVar17 == 0) || ((long)puVar18 < 0)) ||
         (puVar17 = puVar18, ((ulong)puVar18 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar18 >> 0x3e == 0) {
          puVar16 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar16 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar18) {
            puVar16 = puVar18;
          }
          func_0x000107c60480(puVar16);
        }
        puVar17 = (undefined *)0x0;
        func_0x00010136f804(0,puVar16 + 1,1,puVar18);
      }
      uVar19 = (ulong)puVar17 & 0xffffffffffffff8;
      uVar21 = *(ulong *)(uVar19 + 0x10);
      puVar18 = puVar17;
      if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar21) {
        puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
        func_0x00010136f804(puVar18,uVar21 + 1,1,puVar17);
        uVar19 = (ulong)puVar18 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar19 + 0x10) = uVar21 + 1;
      *(undefined **)(uVar19 + uVar21 * 8 + 0x20) = puVar14;
      func_0x000107c61170(puVar14);
      func_0x000107c615e8(lVar23);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(puVar15);
      uVar20 = uVar20 + 1;
    } while (puVar3 != puVar2);
  }
  func_0x000107c6142c(puVar4);
  return puVar18;
}



/* Entry: 101370a38; end: 101370a77;  */

void FUN_101370a38(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101370a78; end: 101370c3f;  */

undefined * FUN_101370a78(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  
  func_0x000107c5b310();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_1013710e8(0,0x112d75618,&PTR_PTR_1126be098);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar10 = uVar3;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar10 == 0) {
    func_0x000107c6142c(uVar3);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar7,0);
    if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101370c2c);
      (*pcVar1)();
    }
    uVar11 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
        uVar8 = uVar7;
      }
      else {
        uVar4 = uVar11;
        uVar8 = uVar3;
        FUN_10136f434();
      }
      func_0x000107c61174();
      uVar5 = uVar4;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      if (uVar5 == 0) {
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar4);
LAB_101370c3c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101370c40);
        (*pcVar1)();
      }
      uVar6 = uVar5;
      func_0x000107c5faec();
      uVar7 = uVar8;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      if (uVar8 == 0) goto LAB_101370c3c;
      uVar5 = *(ulong *)(puVar9 + 0x10);
      uVar4 = uVar5 + 1;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
        uVar7 = uVar4;
        func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar4,1);
      }
      uVar11 = uVar11 + 1;
      *(ulong *)(puVar9 + 0x10) = uVar4;
      *(ulong *)(puVar9 + uVar5 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puVar9 + uVar5 * 0x10 + 0x28) = uVar8;
    } while (uVar10 != uVar11);
    func_0x000107c6142c(uVar3);
  }
  return puVar9;
}



/* Entry: 101370c40; end: 101370c5f;  */

void FUN_101370c40(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Entry: 101370c60; end: 101370f43;  */

void FUN_101370c60(ulong param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5,
                  undefined8 param_6,undefined8 param_7,code *param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000108ed089c();
  if ((param_1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168();
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5ed90();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar4 = 0;
    FUN_100dfa6ec(0);
    uVar5 = uVar4;
    FUN_100f33384();
    puVar6 = puVar3;
    func_0x000107c5f9dc(puVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
    func_0x000107c6142c(puVar3);
    puVar3 = &UNK_1103a78f0;
    func_0x000107c613fc(&UNK_1103a78f0,0x40,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    puVar3[0x18] = param_3 & 1;
    puVar3[0x19] = param_4 & 1;
    puVar3[0x1a] = param_5 & 1;
    *(undefined8 *)(puVar3 + 0x20) = param_6;
    *(undefined8 *)(puVar3 + 0x28) = param_7;
    *(code **)(puVar3 + 0x30) = param_8;
    *(undefined8 *)(puVar3 + 0x38) = param_9;
    pcStack_70 = FUN_101371094;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100ab47f8;
    puStack_78 = &UNK_1103a7908;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar3;
    func_0x000107c60bc4(ppuVar7);
    puVar3 = puStack_68;
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_6);
    func_0x000107c61434(param_7);
    func_0x000107c6157c(param_9);
    func_0x000107c61574(puVar3);
    func_0x000107c4de70(puVar1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
  }
  else {
    FUN_101370a78(param_6);
    puVar3 = PTR___sSSN_11034da80;
    uVar5 = param_6;
    func_0x000107c5fc48();
    func_0x000107c6142c(param_6);
    func_0x000107c5fc48(param_7,puVar3);
    func_0x000107c4bf84(param_2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(param_7);
    (*param_8)();
  }
  return;
}



/* Entry: 101370f44; end: 101370f5f;  */

void FUN_101370f44(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101370f60();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101370f60; end: 101371093;  */

undefined * FUN_101370f60(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101371094);
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
    FUN_10136f398();
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
    FUN_1013710e8(0,0x112d76068,&PTR_PTR_1126a6b58);
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



/* Entry: 101371094; end: 1013710cb;  */

void FUN_101371094(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000101370e88(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                      *(undefined1 *)(unaff_x20 + 0x19),*(undefined1 *)(unaff_x20 + 0x1a),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 1013710cc; end: 1013710e7;  */

void FUN_1013710cc(long param_1,long param_2)

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



/* Entry: 1013710e8; end: 101371127;  */

void FUN_1013710e8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101371128; end: 101371137;  */

void FUN_101371128(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101371138; end: 101371157;  */

void FUN_101371138(void)

{
  func_0x000107c61168(&PTR_PTR_112d760c0);
  return;
}



/* Entry: 101371158; end: 1013714a3;  */

ulong FUN_101371158(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  func_0x000107c519c0();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_1013714a4();
  uVar4 = param_3;
  func_0x000107c5fc54();
  func_0x000107c61170(param_3);
  if (uVar4 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar8 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    lVar10 = 4;
    do {
      uVar9 = lVar10 - 4;
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1013712b8);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar4 + lVar10 * 8);
        func_0x000107c61174();
        uVar7 = uVar3;
      }
      else {
        uVar5 = uVar9;
        uVar7 = uVar4;
        FUN_10136f618();
      }
      uVar1 = lVar10 - 3;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1013712b4);
        (*pcVar2)();
      }
      uVar9 = uVar5;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      uVar3 = uVar7;
      if (uVar9 != 0) {
        uVar6 = uVar9;
        func_0x000107c5faec();
        func_0x000107c61170(uVar9);
        if ((uVar6 == param_1) && (uVar7 == param_2)) {
          func_0x000107c6142c(uVar4);
          uVar4 = uVar7;
LAB_1013712a4:
          func_0x000107c6142c(uVar4);
          return uVar5;
        }
        uVar3 = uVar7;
        func_0x000107c605b8(uVar6,uVar7,param_1,param_2,0);
        func_0x000107c6142c(uVar7);
        if ((uVar6 & 1) != 0) goto LAB_1013712a4;
      }
      func_0x000107c61170(uVar5);
      lVar10 = lVar10 + 1;
    } while (uVar1 != uVar8);
  }
  func_0x000107c6142c(uVar4);
  return 0;
}



/* Entry: 1013714a4; end: 1013714e7;  */

void FUN_1013714a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d75610 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126be0a0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d75610 = puVar1;
  return;
}



/* Entry: 1013714e8; end: 10137152b;  */

void FUN_1013714e8(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    func_0x000107c61174();
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10137152c; end: 10137157f;  */

void FUN_10137152c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101371580; end: 1013717a3;  */

void FUN_101371580(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar7 = &puStack_80;
  func_0x000107c3e544();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    puStack_80 = (undefined *)0x0;
    func_0x000100854cb0(&puStack_80);
  }
  else {
    uVar2 = 0x112d755f0;
    func_0x0001000285a8(0x112d755f0,&UNK_10d9358e8);
    func_0x000107c613fc();
    func_0x0001000c2754();
    puVar3 = PTR_PTR_1126b58e0;
    func_0x000107c610f8(PTR_PTR_1126b58e0);
    func_0x000107c453e4();
    puVar4 = puVar3;
    func_0x000107c5e458();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar4);
    uVar5 = 0x3835363632323031;
    func_0x000107c5fadc(0x3835363632323031,0xe800000000000000);
    puVar4 = puVar3;
    func_0x000107c5e820(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    puVar4 = puVar3;
    func_0x000107c3ecc8(puVar3);
    func_0x000107c61180();
    uVar5 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000107c5fc48();
    uVar6 = 0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    pcStack_60 = FUN_1013717a4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1010866ac;
    puStack_68 = &UNK_1103a7930;
    uStack_58 = uVar2;
    func_0x000107c60bc4(&puStack_80);
    uVar1 = uStack_58;
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(uVar1);
    func_0x000107c42fec(param_2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c61170(puVar3);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1013717a4; end: 1013717c7;  */

void FUN_1013717a4(long param_1)

{
  long lStack_28;
  
  if (param_1 != 0) {
    lStack_28 = param_1;
    func_0x000107c61174();
    func_0x0001002a64a8(&lStack_28);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1013717c8; end: 10137183b;  */

void FUN_1013717c8(long param_1)

{
  long lVar1;
  long lStack_38;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c45154();
    func_0x000107c61180();
    lStack_38 = lVar1;
    func_0x000107c61174();
    func_0x0001002a64a8(&lStack_38);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10137183c; end: 101371897;  */

void FUN_10137183c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101371898; end: 101371ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ** FUN_101371898(long param_1,long param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined **ppuStack_58;
  
  lVar10 = param_2;
  func_0x000107c3e544();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
    puStack_80 = (undefined *)0x0;
    ppuVar5 = &puStack_80;
    func_0x000100854cb0(ppuVar5);
    return ppuVar5;
  }
  lVar2 = param_3;
  func_0x000107c51d3c();
  func_0x000107c61180();
  lVar11 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar11 != 0) {
    lVar2 = lVar11;
    func_0x000107c51d04();
    func_0x000107c61180();
    func_0x000107c615e8(lVar11);
    if (lVar2 != 0) {
      lVar11 = lVar2;
      func_0x000107c5faec(lVar2);
      func_0x000107c61170(lVar2);
      goto LAB_101371948;
    }
  }
  lVar11 = 0;
  lVar10 = 0;
LAB_101371948:
  ppuVar5 = (undefined **)0x112d755f0;
  func_0x0001000285a8(0x112d755f0,&UNK_10d9358e8);
  uVar9 = (ulong)*(uint *)(ppuVar5 + 6);
  func_0x000107c613fc();
  func_0x0001000c2754();
  uVar3 = *(undefined8 *)(param_1 + _DAT_113091ad8);
  func_0x000107c5d984(uVar3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c5fadc(uVar4,uVar9);
  func_0x000107c6142c(uVar9);
  if (lVar10 == 0) {
    lVar11 = 0;
  }
  else {
    func_0x000107c5fadc(lVar11,lVar10);
    func_0x000107c6142c(lVar10);
  }
  puVar6 = PTR_PTR_1126b4bc0;
  func_0x000107c610f8(PTR_PTR_1126b4bc0);
  func_0x000107c491d0();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar11);
  func_0x000107c51d00();
  func_0x000107c61180();
  lVar10 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (lVar10 != 0) {
    uVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    func_0x000107c5fc48();
    puVar7 = (undefined *)0x0;
    func_0x0001000295c4(0);
    func_0x000107c5ffdc();
    pcStack_60 = FUN_101371ba8;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_1010a2bbc;
    puStack_68 = &UNK_1103a7958;
    ppuVar8 = &puStack_80;
    ppuStack_58 = ppuVar5;
    func_0x000107c60bc4(ppuVar8);
    ppuVar1 = ppuStack_58;
    func_0x000107c6157c(ppuVar5);
    func_0x000107c61574(ppuVar1);
    lVar2 = lVar10;
    func_0x000107c4329c(lVar10);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(uVar4);
    puVar6 = puVar7;
  }
  func_0x000107c61170(puVar6);
  return ppuVar5;
}



/* Entry: 101371ba8; end: 101371bcb;  */

void FUN_101371ba8(long param_1)

{
  long lVar1;
  long lStack_38;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c45154();
    func_0x000107c61180();
    lStack_38 = lVar1;
    func_0x000107c61174();
    func_0x0001002a64a8(&lStack_38);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101371bcc; end: 101371d3b;  */

void FUN_101371bcc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  
  puVar5 = &uStack_60;
  func_0x000107c5677c(*(undefined8 *)(unaff_x20 + 0x18),param_2,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c5d17c(uVar1);
  func_0x000107c61180();
  func_0x000107c3e2c0();
  func_0x000107c615e8(uVar1);
  plVar7 = *(long **)(unaff_x20 + 0x68);
  (**(code **)(*plVar7 + 0x98))();
  pcVar2 = FUN_101371d3c;
  func_0x0001000bfde0(FUN_101371d3c,0,&UNK_1103a7ab8);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_1103a79a0;
  func_0x000107c613fc(&UNK_1103a79a0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar4 = FUN_101373054;
  puVar6 = puVar3;
  (**(code **)(*(long *)pcVar2 + 0x60))(FUN_101373054);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(puVar3);
  pcVar2 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + 0x60),pcVar2,puVar6);
  func_0x000107c615e8(pcVar4);
  func_0x0001000285a8(0x112d764d0,&UNK_10d936258);
  uStack_58 = 0;
  uStack_60 = 1;
  uStack_50 = 3;
  func_0x000100854cb0(&uStack_60);
  (**(code **)(*plVar7 + 0xa8))();
  func_0x000107c61574(puVar5);
  return;
}



/* Entry: 101371d3c; end: 101371e7f;  */

/* WARNING: Possible PIC construction at 0x000101371d68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101371d6c) */

void FUN_101371d3c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar1);
  return;
}



/* Entry: 101371e80; end: 10137207b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101371e80(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long ****pppplVar5;
  code *pcVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long **pplVar11;
  undefined8 uVar12;
  undefined1 auStack_a0 [24];
  long ***ppplStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar2 = 0;
  FUN_10136cab8();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
  lVar3 = 0;
  FUN_10136a02c();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x40) = uVar1;
  *(undefined8 *)(lVar4 + 0x48) = uVar8;
  *(undefined8 *)(lVar4 + 0x50) = uVar7;
  *(undefined8 *)(lVar4 + 0x58) = uVar10;
  *(undefined8 *)(lVar4 + 0x60) = uVar12;
  ppplStack_88 = (long ***)((ulong)ppplStack_88 & 0xffffffffffffff00);
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_80 = 0;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(uVar7);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar12);
  pppplVar5 = &ppplStack_88;
  func_0x000103dbf4dc();
  lVar4 = _DAT_112d75e30;
  ppuStack_68 = &PTR_DAT_1103a7328;
  ppplStack_88 = (long ***)pppplVar5;
  lStack_70 = lVar3;
  func_0x000107c61428(lVar2 + _DAT_112d75e30,auStack_a0,0x21,0);
  func_0x000107c6157c(pppplVar5);
  FUN_10137300c(&ppplStack_88,lVar2 + lVar4,0x112d75e80,&UNK_10d935fd0);
  func_0x000107c614a8(auStack_a0);
  uVar8 = *(undefined8 *)(lVar2 + _DAT_112d75e38);
  pplVar11 = (*pppplVar5)[0x15];
  func_0x000107c6157c(pppplVar5);
  func_0x000107c6157c(uVar8);
  (*(code *)pplVar11)();
  func_0x000107c61574(uVar8);
  plVar9 = *(long **)(unaff_x20 + 0x68);
  (*(code *)(*pppplVar5)[0x13])();
  func_0x000107c61574(pppplVar5);
  pcVar6 = FUN_10137207c;
  func_0x0001000bfde0(FUN_10137207c,0,&UNK_1103a7a40);
  func_0x000107c61574(uVar8);
  FUN_101372fbc();
  func_0x0001000c2068();
  func_0x000107c61574(pcVar6);
  (**(code **)(*plVar9 + 0xa8))(uVar8);
  func_0x000107c61574(uVar8);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(pppplVar5);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = lVar2;
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 10137207c; end: 1013720e7;  */

void FUN_10137207c(long *param_1,char *param_2)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  
  cVar1 = *param_2;
  if (cVar1 == '\x06') {
    param_1[1] = 0;
    *param_1 = 3;
LAB_1013720d4:
    *(undefined1 *)(param_1 + 2) = 3;
    return;
  }
  lVar3 = *(long *)(param_2 + 0x18);
  if (cVar1 == '\x05') {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013720e4);
      (*pcVar2)();
    }
    *param_1 = lVar3;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 1;
  }
  else {
    if (cVar1 != '\x03') {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_1013720d4;
    }
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013720e8);
      (*pcVar2)();
    }
    *param_1 = lVar3;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1013720e8; end: 1013722e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013720e8(void)

{
  long lVar1;
  long lVar2;
  long ****pppplVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long **pplVar8;
  undefined1 auStack_90 [24];
  long ***appplStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  lVar1 = 0;
  FUN_101369cd4();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = 0;
  FUN_101367ca0();
  lVar4 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x28) = uVar5;
  appplStack_78[0] = (long ***)((ulong)appplStack_78[0] & 0xffffffffffffff00);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  pppplVar3 = appplStack_78;
  func_0x000103dbf4dc();
  func_0x000107c6157c();
  FUN_101367a3c();
  func_0x000107c61574(pppplVar3);
  lVar4 = _DAT_112d75c20;
  ppuStack_58 = &PTR_DAT_1103a70b0;
  appplStack_78[0] = (long ***)pppplVar3;
  lStack_60 = lVar2;
  func_0x000107c61428(lVar1 + _DAT_112d75c20,auStack_90,0x21,0);
  func_0x000107c6157c(pppplVar3);
  FUN_10137300c(appplStack_78,lVar1 + lVar4,0x112d75ca8,&UNK_10d935e60);
  func_0x000107c614a8(auStack_90);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_112d75c28);
  pplVar8 = (*pppplVar3)[0x15];
  func_0x000107c6157c(pppplVar3);
  func_0x000107c6157c(uVar6);
  (*(code *)pplVar8)();
  func_0x000107c61574(uVar6);
  plVar7 = *(long **)(unaff_x20 + 0x68);
  (*(code *)(*pppplVar3)[0x13])();
  func_0x000107c61574(pppplVar3);
  func_0x000107c6157c();
  uVar5 = 0x101373004;
  func_0x0001000bfde0(0x101373004);
  func_0x000107c61574(uVar6);
  lVar4 = unaff_x20;
  func_0x000107c61574();
  FUN_101372fbc();
  func_0x0001000c2068();
  func_0x000107c61574(uVar5);
  (**(code **)(*plVar7 + 0xa8))(lVar4);
  func_0x000107c61574(lVar4);
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 != 0) {
    func_0x000107c61174();
    FUN_10136b188(lVar1);
    func_0x000107c61170(lVar1);
    lVar1 = lVar4;
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61574(pppplVar3);
  return;
}



/* Entry: 1013722e8; end: 101372357;  */

void FUN_1013722e8(long *param_1,char *param_2,long param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 auStack_40 [8];
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    (**(code **)(**(long **)(param_3 + 0x68) + 0x78))(auStack_40);
    func_0x000107c61170(uStack_30);
    func_0x000107c6142c(uStack_28);
    if (lStack_38 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101372358);
      (*pcVar1)();
    }
    *param_1 = lStack_38;
    param_1[1] = 0;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}



/* Entry: 101372358; end: 1013727db;  */

void FUN_101372358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long ***ppplVar5;
  long ***ppplVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long ****pppplVar13;
  long lVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  long unaff_x20;
  long *plVar18;
  long ***ppplVar19;
  undefined8 uVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  undefined1 auStack_b0 [24];
  long ***ppplStack_98;
  long **pplStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar18 = *(long **)(unaff_x20 + 0x68);
  (**(code **)(*plVar18 + 0x78))(&ppplStack_98);
  func_0x000107c61170(uStack_88);
  func_0x000107c6142c(lStack_80);
  if ((long ***)pplStack_90 != (long ***)0x0) {
    lVar22 = *(long *)(unaff_x20 + 0x70);
    lVar14 = lVar22;
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1013727d8);
      (*pcVar21)();
    }
    lVar7 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    lVar4 = lVar7;
    func_0x000100111634();
    uVar15 = 2;
    func_0x000107c61408(lVar7 + 0x20,2,PTR___sSSN_11034da80);
    ppplVar5 = (long ***)pplStack_90;
    func_0x000107c3fb8c();
    func_0x000107c61180();
    ppplVar6 = ppplVar5;
    func_0x000107c5faec();
    func_0x000107c61170(ppplVar5);
    func_0x0001000f66f0(ppplVar6,uVar15,lVar4);
    func_0x000107c615e8(lVar14);
    func_0x000107c6142c(uVar15);
    func_0x000107c6142c(lVar4);
    uVar15 = 0;
    if (((ulong)ppplVar6 & 1) == 0) {
      FUN_10135f0ec();
      ppuVar16 = &PTR_DAT_1103a68e8;
    }
    else {
      FUN_101362700();
      ppuVar16 = &PTR_DAT_1103a6ae8;
    }
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar20 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar23 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x90);
    lVar7 = 0;
    func_0x0001013588c8();
    lVar14 = lVar7;
    func_0x000107c613fc();
    *(undefined8 *)(lVar14 + 0x98) = 0;
    ppplVar5 = (long ***)pplStack_90;
    func_0x000107c61174();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101372dc4();
    *(undefined **)(lVar14 + 0xa0) = puVar8;
    puVar8 = puVar3;
    func_0x000101372ec0();
    *(undefined **)(lVar14 + 0xa8) = puVar8;
    *(undefined **)(lVar14 + 0xd0) = puVar3;
    *(long ****)(lVar14 + 0x58) = ppplVar5;
    *(undefined8 *)(lVar14 + 0x60) = uVar23;
    *(undefined8 *)(lVar14 + 0x68) = uVar9;
    func_0x000107c61174();
    func_0x000107c6157c(uVar23);
    func_0x000107c61174(uVar9);
    uVar9 = uVar10;
    func_0x000107c3e550();
    func_0x000107c61180();
    uVar23 = uVar9;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar14 + 0x70) = uVar23;
    func_0x000107c45070();
    func_0x000107c61180();
    uVar9 = uVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar10);
    *(undefined8 *)(lVar14 + 0x78) = uVar9;
    *(undefined8 *)(lVar14 + 0x80) = uVar11;
    *(undefined8 *)(lVar14 + 0x88) = uVar20;
    *(undefined8 *)(lVar14 + 0x90) = uVar12;
    func_0x000107c61174(uVar11);
    func_0x000107c61174(uVar20);
    func_0x000107c61174(uVar12);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar22 == 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x1013727dc);
      (*pcVar21)();
    }
    *(long *)(lVar14 + 0xb0) = lVar22;
    *(undefined8 *)(lVar14 + 0xb8) = uVar1;
    *(undefined8 *)(lVar14 + 0xc0) = uVar2;
    *(undefined8 *)(lVar14 + 200) = uVar17;
    ppplStack_98 = (long ***)((ulong)ppplStack_98 & 0xffffffffffffff00);
    uStack_88 = 0;
    pplStack_90 = (long **)0x0;
    ppuStack_78 = (undefined **)0x0;
    lStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    func_0x000107c61174();
    func_0x000107c61174(uVar2);
    func_0x000107c61174(uVar17);
    pppplVar13 = &ppplStack_98;
    func_0x000103dbf4dc();
    ppplVar19 = pppplVar13[0xe];
    func_0x000107c615f0(ppplVar19);
    func_0x000107c6157c(pppplVar13);
    ppplVar6 = ppplVar5;
    FUN_10136fd08(ppplVar5,uVar11,ppplVar19,uVar12);
    func_0x000107c615e8(ppplVar19);
    func_0x000107c61428(pppplVar13 + 0x1a,auStack_b0,1,0);
    ppplVar19 = pppplVar13[0x1a];
    pppplVar13[0x1a] = ppplVar6;
    func_0x000107c6142c(ppplVar19);
    FUN_101356c20();
    func_0x000107c61574(pppplVar13);
    func_0x000107c61170(ppplVar5);
    uVar9 = uVar15;
    func_0x000107c614f0(uVar15);
    ppuStack_78 = &PTR_DAT_1103a6528;
    pcVar21 = (code *)ppuVar16[3];
    ppplStack_98 = (long ***)pppplVar13;
    lStack_80 = lVar7;
    func_0x000107c6157c(pppplVar13);
    (*pcVar21)(&ppplStack_98,uVar9,ppuVar16);
    pcVar21 = (code *)ppuVar16[1];
    func_0x000107c6157c(pppplVar13);
    (*pcVar21)(uVar9,ppuVar16);
    (*(code *)(*pppplVar13)[0x15])();
    func_0x000107c61574(uVar9);
    (*(code *)(*pppplVar13)[0x13])();
    func_0x000107c61574(pppplVar13);
    func_0x000107c6157c();
    pcVar21 = FUN_101372ffc;
    func_0x0001000bfde0(FUN_101372ffc);
    func_0x000107c61574(uVar9);
    lVar14 = unaff_x20;
    func_0x000107c61574();
    FUN_101372fbc();
    func_0x0001000c2068();
    func_0x000107c61574(pcVar21);
    (**(code **)(*plVar18 + 0xa8))(lVar14);
    func_0x000107c61574(lVar14);
    lVar14 = *(long *)(unaff_x20 + 0x10);
    if (lVar14 != 0) {
      func_0x000107c61174();
      func_0x000107c61174(uVar15);
      FUN_10136b188();
      func_0x000107c61170(lVar14);
      func_0x000107c61170(uVar15);
    }
    func_0x000107c61170(uVar15);
    func_0x000107c61574(pppplVar13);
    func_0x000107c61170(ppplVar5);
  }
  return;
}



/* Entry: 1013727dc; end: 101372883;  */

void FUN_1013727dc(long *param_1,char *param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 == '\n') {
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) {
      pcVar2 = *(code **)(**(long **)(param_3 + 0x68) + 0x78);
      func_0x000107c61174(lVar1);
      (*pcVar2)(auStack_50);
      func_0x000107c61170(uStack_40);
      func_0x000107c6142c(uStack_38);
      if (lStack_48 != 0) {
        *param_1 = lStack_48;
        param_1[1] = lVar1;
        *(undefined1 *)(param_1 + 2) = 2;
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101372884);
      (*pcVar2)();
    }
  }
  else if (*param_2 != '\f') {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_101372864;
  }
  param_1[1] = 0;
  *param_1 = 2;
LAB_101372864:
  *(undefined1 *)(param_1 + 2) = 3;
  return;
}



/* Entry: 101372884; end: 101372c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101372884(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long ****pppplVar10;
  long lVar11;
  undefined8 uVar12;
  long unaff_x20;
  long *plVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long **pplVar17;
  undefined8 uVar18;
  undefined1 auStack_a0 [24];
  long ***ppplStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  
  plVar13 = *(long **)(unaff_x20 + 0x68);
  pcVar14 = *(code **)(*plVar13 + 0x78);
  (*pcVar14)(&ppplStack_88);
  lVar6 = lStack_80;
  func_0x000107c61170(lStack_78);
  func_0x000107c6142c(lStack_70);
  if (lVar6 != 0) {
    (*pcVar14)(&ppplStack_88);
    func_0x000107c61170(lStack_80);
    func_0x000107c6142c(lStack_70);
    if (lStack_78 != 0) {
      lVar3 = 0;
      FUN_1013677a4();
      func_0x000107c614e8();
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
      uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
      uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
      uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
      uVar12 = *(undefined8 *)(unaff_x20 + 0x90);
      lVar4 = 0;
      func_0x000101365338();
      lVar11 = lVar4;
      func_0x000107c613fc();
      puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
      *(undefined8 *)(lVar11 + 0x40) = uVar16;
      *(undefined8 *)(lVar11 + 0x48) = 0;
      *(undefined8 *)(lVar11 + 0x50) = uVar7;
      *(long *)(lVar11 + 0x30) = lVar6;
      *(undefined8 *)(lVar11 + 0x38) = uVar18;
      *(long *)(lVar11 + 0x60) = lStack_78;
      *(undefined **)(lVar11 + 0x68) = puVar2;
      lVar5 = lStack_78;
      func_0x000107c61174(lStack_78);
      func_0x000107c61174();
      func_0x000107c61174(lVar5);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174(uVar7);
      func_0x000107c6157c(uVar18);
      func_0x000107c3e994();
      func_0x000107c61180();
      uVar18 = uVar15;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar15);
      *(undefined8 *)(lVar11 + 0x58) = uVar18;
      func_0x000107c3e550();
      func_0x000107c61180();
      uVar18 = uVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      *(undefined8 *)(lVar11 + 0x70) = uVar18;
      func_0x000107c615f0(uVar18);
      lVar9 = lVar6;
      FUN_10136fd08(lVar6,uVar1,uVar18,uVar7);
      func_0x000107c615e8(uVar18);
      *(long *)(lVar11 + 0x68) = lVar9;
      func_0x000107c6142c(PTR___swiftEmptyArrayStorage_11034f1c8);
      *(undefined8 *)(lVar11 + 0x78) = uVar12;
      ppplStack_88 = (long ***)((ulong)ppplStack_88 & 0xffffffffffffff00);
      lStack_80 = 0;
      func_0x000107c61174();
      pppplVar10 = &ppplStack_88;
      func_0x000103dbf4dc();
      func_0x000107c6157c();
      FUN_101364354();
      func_0x000107c4bab8(uVar16);
      func_0x000107c61574(pppplVar10);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      lVar11 = _DAT_112d75a28;
      ppuStack_68 = &PTR_DAT_1103a6d40;
      ppplStack_88 = (long ***)pppplVar10;
      lStack_70 = lVar4;
      func_0x000107c61428(lVar3 + _DAT_112d75a28,auStack_a0,0x21,0);
      func_0x000107c6157c(pppplVar10);
      FUN_10137300c(&ppplStack_88,lVar3 + lVar11,0x112d75a90,&UNK_10d935c58);
      func_0x000107c614a8(auStack_a0);
      func_0x000107c5677c(lVar3);
      uVar16 = *(undefined8 *)(lVar3 + _DAT_112d75a30);
      pplVar17 = (*pppplVar10)[0x15];
      func_0x000107c6157c(pppplVar10);
      func_0x000107c6157c(uVar16);
      (*(code *)pplVar17)();
      func_0x000107c61574(uVar16);
      (*(code *)(*pppplVar10)[0x13])();
      func_0x000107c61574(pppplVar10);
      pcVar14 = FUN_101372c18;
      func_0x0001000bfde0(FUN_101372c18,0,&UNK_1103a7a40);
      func_0x000107c61574(uVar16);
      FUN_101372fbc();
      func_0x0001000c2068();
      func_0x000107c61574(pcVar14);
      (**(code **)(*plVar13 + 0xa8))(uVar16);
      func_0x000107c61574(uVar16);
      lVar11 = *(long *)(unaff_x20 + 0x10);
      if (lVar11 != 0) {
        func_0x000107c61174();
        FUN_10136b188(lVar3);
        func_0x000107c61170(lVar3);
        lVar3 = lVar11;
      }
      func_0x000107c61170(lVar3);
      func_0x000107c61574(pppplVar10);
      func_0x000107c61170(lVar5);
    }
    func_0x000107c61170(lVar6);
  }
  return;
}



/* Entry: 101372c18; end: 101372c37;  */

void FUN_101372c18(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (*param_2 != '\x04') {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 3;
  return;
}



/* Entry: 101372c38; end: 101372d13;  */

void FUN_101372c38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Entry: 101372d14; end: 101372d33;  */

void FUN_101372d14(void)

{
  FUN_101371bcc();
  return;
}



/* Entry: 101372d34; end: 101372dc3;  */

void FUN_101372d34(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  *(undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 8) = param_4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101372d7c);
  (*pcVar3)();
}



/* Entry: 101372dc4; end: 101372fbb;  */

undefined * FUN_101372dc4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d755e0,&UNK_10d9358d8);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c615f0(uVar9);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101372ebc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101372ec0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101372fbc; end: 101372ffb;  */

void FUN_101372fbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d76480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9362ac;
  func_0x000107c61520(&UNK_10d9362ac,&UNK_1103a7a40);
  puRam0000000112d76480 = puVar1;
  return;
}



/* Entry: 101372ffc; end: 10137300b;  */

void FUN_101372ffc(long *param_1,char *param_2)

{
  long lVar1;
  long unaff_x20;
  code *pcVar2;
  undefined1 auStack_50 [8];
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*param_2 == '\n') {
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) {
      pcVar2 = *(code **)(**(long **)(unaff_x20 + 0x68) + 0x78);
      func_0x000107c61174(lVar1);
      (*pcVar2)(auStack_50);
      func_0x000107c61170(uStack_40);
      func_0x000107c6142c(uStack_38);
      if (lStack_48 != 0) {
        *param_1 = lStack_48;
        param_1[1] = lVar1;
        *(undefined1 *)(param_1 + 2) = 2;
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101372884);
      (*pcVar2)();
    }
  }
  else if (*param_2 != '\f') {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_101372864;
  }
  param_1[1] = 0;
  *param_1 = 2;
LAB_101372864:
  *(undefined1 *)(param_1 + 2) = 3;
  return;
}



/* Entry: 10137300c; end: 101373053;  */

undefined8 FUN_10137300c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101373054; end: 10137308b;  */

void FUN_101373054(byte *param_1)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    if (bVar1 == 1) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
      lVar2 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar2 == 0) {
        return;
      }
      FUN_101371e80();
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
      lVar2 = unaff_x20 + 0x10;
      func_0x000107c61648();
      if (lVar2 == 0) {
        return;
      }
      FUN_1013720e8();
    }
  }
  else if (bVar1 == 3) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      return;
    }
    FUN_101372358();
  }
  else {
    if (bVar1 != 4) {
      return;
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      return;
    }
    FUN_101372884();
  }
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 10137308c; end: 101373137;  */

void FUN_10137308c(void)

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



/* Entry: 101373138; end: 10137313f;  */

void FUN_101373138(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101373140; end: 101373173;  */

void FUN_101373140(long param_1)

{
  func_0x000103dbf870();
  func_0x000107c615e8(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x48,7);
  return;
}



/* Entry: 101373174; end: 101373217;  */

void FUN_101373174(undefined8 param_1)

{
  if (lRam0000000112d76500 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e630cc8);
  return;
}



/* Entry: 101373218; end: 101373257;  */

void FUN_101373218(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = (undefined1)*param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined8 *)(param_3 + 8);
  uVar3 = (ulong)*(byte *)(param_2 + 2);
  FUN_10137382c();
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(ulong *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  return;
}



/* Entry: 101373258; end: 101373267;  */

void FUN_101373258(long *param_1)

{
  long unaff_x20;
  
  if (((char)param_1[2] == '\x03') &&
     (((*param_1 == 3 && param_1[1] == 0 || (*param_1 == 2 && param_1[1] == 0)) &&
      (*(long *)(unaff_x20 + 0x40) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00010c0df9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x40),PTR_s_oAuth2PermissionPresenterWorkflo_112615888);
    return;
  }
  return;
}



/* Entry: 101373268; end: 10137329f;  */

/* WARNING: Possible PIC construction at 0x000101373288: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010137328c) */

void FUN_101373268(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if ((1 < param_3) && (param_3 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1013732a0; end: 1013732af;  */

/* WARNING: Possible PIC construction at 0x0001013732d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013732d4) */

void FUN_1013732a0(undefined8 *param_1)

{
  if ((1 < *(byte *)(param_1 + 2)) && (*(byte *)(param_1 + 2) != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1,param_1[1]);
  return;
}



/* Entry: 1013732b0; end: 1013732e7;  */

/* WARNING: Possible PIC construction at 0x0001013732d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013732d4) */

void FUN_1013732b0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if ((1 < param_3) && (param_3 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1013732e8; end: 101373383;  */

undefined8 * FUN_1013732e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101373268(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101373384; end: 1013733c7;  */

undefined8 * FUN_101373384(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1013732b0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1013733c8; end: 101373497;  */

int FUN_1013733c8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101373498; end: 1013734f3;  */

long FUN_101373498(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1013734f4; end: 1013735c3;  */

undefined1 * FUN_1013734f4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1013735c4; end: 101373617;  */

undefined1 * FUN_1013735c4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c61170(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101373618; end: 1013736d7;  */

int FUN_101373618(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1013736d8; end: 10137382b;  */

uint FUN_1013736d8(ulong param_1,ulong param_2,byte param_3,long param_4,long param_5,char param_6)

{
  ulong uVar1;
  uint uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 != '\0') goto LAB_101373814;
    }
    else if (param_6 != '\x01') goto LAB_101373814;
    func_0x0001007bbbf8(0);
    param_2 = param_1;
    param_5 = param_4;
LAB_10137377c:
    func_0x000107c60118(param_2,param_5);
    uVar2 = (uint)param_2 & 1;
  }
  else {
    if (param_3 == 2) {
      if (param_6 == '\x02') {
        func_0x0001007bbbf8(0);
        func_0x000107c60118(param_1,param_4);
        if ((param_1 & 1) != 0) goto LAB_10137377c;
      }
    }
    else {
      uVar1 = param_2 + (param_1 >= 2);
      if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
        if (param_1 == 0 && param_2 == 0) {
          if ((param_6 == '\x03') && (param_5 == 0 && param_4 == 0)) {
            return 1;
          }
        }
        else if ((param_6 == '\x03') && (param_4 == 1)) goto LAB_101373808;
      }
      else if (param_1 == 2 && param_2 == 0) {
        if ((param_6 == '\x03') && (param_4 == 2)) {
LAB_101373808:
          if (param_5 == 0) {
            return 1;
          }
        }
      }
      else if ((param_6 == '\x03') && (param_4 == 3)) goto LAB_101373808;
    }
LAB_101373814:
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 10137382c; end: 101373903;  */

undefined1 FUN_10137382c(ulong param_1,long param_2,byte param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      func_0x000107c61174(param_1);
      uVar2 = 2;
    }
    else {
      func_0x000107c61174(param_1);
      uVar2 = 3;
    }
  }
  else if (param_3 == 2) {
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    uVar2 = 4;
  }
  else {
    uVar1 = param_2 + (ulong)(param_1 >= 2);
    if ((long)-uVar1 < 0 == SCARRY8(~uVar1,(ulong)(param_1 < 2))) {
      uVar2 = param_1 != 0 || param_2 != 0;
      if (param_1 == 0 && param_2 == 0) {
        func_0x000107c61174(param_4);
      }
    }
    else {
      uVar2 = 5;
      if (param_1 != 2 || param_2 != 0) {
        uVar2 = 6;
      }
    }
  }
  return uVar2;
}



/* Entry: 101373904; end: 101373a9f;  */

void FUN_101373904(long param_1,long param_2,char param_3)

{
  long unaff_x20;
  
  if ((param_3 == '\x03') &&
     (((param_1 == 3 && param_2 == 0 || (param_1 == 2 && param_2 == 0)) &&
      (*(long *)(unaff_x20 + 0x40) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x00010c0df9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(unaff_x20 + 0x40),PTR_s_oAuth2PermissionPresenterWorkflo_112615888);
    return;
  }
  return;
}



/* Entry: 101373aa0; end: 101373adf;  */

void FUN_101373aa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d76628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d93631c;
  func_0x000107c61520(&UNK_10d93631c,&UNK_1103a7b58);
  puRam0000000112d76628 = puVar1;
  return;
}



/* Entry: 101373ae0; end: 101373ae7;  */

undefined8 * FUN_101373ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_101373268(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 101373ae8; end: 101373af3; -[SCOAuth2EntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373ae8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76630;
  func_0x000107c61428(param_1 + _DAT_112d76630,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373af4; end: 101373aff; -[SCOAuth2EntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76630;
  func_0x000107c61428(param_1 + _DAT_112d76630,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373b00; end: 101373b0b; -[SCOAuth2EntryPoint canvasConnectionManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76638;
  func_0x000107c61428(param_1 + _DAT_112d76638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373b0c; end: 101373b17; -[SCOAuth2EntryPoint setCanvasConnectionManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76638;
  func_0x000107c61428(param_1 + _DAT_112d76638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373b18; end: 101373b23; -[SCOAuth2EntryPoint blizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76640;
  func_0x000107c61428(param_1 + _DAT_112d76640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373b24; end: 101373b2f; -[SCOAuth2EntryPoint setBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76640;
  func_0x000107c61428(param_1 + _DAT_112d76640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373b30; end: 101373b3b; -[SCOAuth2EntryPoint dynamicImageSourceProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76648;
  func_0x000107c61428(param_1 + _DAT_112d76648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373b3c; end: 101373b47; -[SCOAuth2EntryPoint setDynamicImageSourceProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76648;
  func_0x000107c61428(param_1 + _DAT_112d76648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373b48; end: 101373b53; -[SCOAuth2EntryPoint bitmojiFetchServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76650;
  func_0x000107c61428(param_1 + _DAT_112d76650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373b54; end: 101373b5f; -[SCOAuth2EntryPoint setBitmojiFetchServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76650;
  func_0x000107c61428(param_1 + _DAT_112d76650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373b60; end: 101373b6b; -[SCOAuth2EntryPoint bitmojiSelfieServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76658;
  func_0x000107c61428(param_1 + _DAT_112d76658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373b6c; end: 101373b77; -[SCOAuth2EntryPoint setBitmojiSelfieServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76658;
  func_0x000107c61428(param_1 + _DAT_112d76658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373b78; end: 101373b83; -[SCOAuth2EntryPoint userSessionScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76660;
  func_0x000107c61428(param_1 + _DAT_112d76660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373b84; end: 101373b8f; -[SCOAuth2EntryPoint setUserSessionScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76660;
  func_0x000107c61428(param_1 + _DAT_112d76660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373b90; end: 101373b9b; -[SCOAuth2EntryPoint featureSettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76668;
  func_0x000107c61428(param_1 + _DAT_112d76668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373b9c; end: 101373ba7; -[SCOAuth2EntryPoint setFeatureSettingsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373b9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76668;
  func_0x000107c61428(param_1 + _DAT_112d76668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373ba8; end: 101373bb3; -[SCOAuth2EntryPoint userNetworkServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373ba8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76670;
  func_0x000107c61428(param_1 + _DAT_112d76670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373bb4; end: 101373bbf; -[SCOAuth2EntryPoint setUserNetworkServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76670;
  func_0x000107c61428(param_1 + _DAT_112d76670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373bc0; end: 101373bcb; -[SCOAuth2EntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373bc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76678;
  func_0x000107c61428(param_1 + _DAT_112d76678,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373bcc; end: 101373bd7; -[SCOAuth2EntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373bcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76678;
  func_0x000107c61428(param_1 + _DAT_112d76678,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373bd8; end: 101373be3; -[SCOAuth2EntryPoint bitmojiAvatarBuilderPresentingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373bd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76680;
  func_0x000107c61428(param_1 + _DAT_112d76680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373be4; end: 101373bef; -[SCOAuth2EntryPoint setBitmojiAvatarBuilderPresentingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76680;
  func_0x000107c61428(param_1 + _DAT_112d76680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101373bf0; end: 101373bfb; -[SCOAuth2EntryPoint appStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373bf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d76688;
  func_0x000107c61428(param_1 + _DAT_112d76688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101373bfc; end: 101373c07; -[SCOAuth2EntryPoint setAppStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101373bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d76688;
  func_0x000107c61428(param_1 + _DAT_112d76688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


