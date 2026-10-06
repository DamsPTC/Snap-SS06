/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018821c4; end: 101882273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1018821c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar3 = param_1;
  func_0x000101881c14();
  func_0x000107c6142c(param_2);
  lVar5 = *(long *)(lVar3 + 0x10);
  func_0x000107c6142c(lVar3);
  if ((param_1 < 0) || (lVar5 <= param_1)) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dcc910);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dcc910))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x00010188244c();
    func_0x000107c6142c();
    uVar4 = param_2;
    FUN_101886368(param_2,param_1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(param_2);
  }
  return uVar4;
}



/* Entry: 101882274; end: 101882287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101882274(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  pcVar5 = FUN_101882460;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc940);
  lVar2 = *plVar1;
  pcVar3 = (code *)plVar1[1];
  lVar6 = lVar2;
  pcVar7 = pcVar3;
  if (lVar2 == 0) {
    FUN_101882460();
    lVar6 = *plVar1;
    lVar4 = plVar1[1];
    *plVar1 = unaff_x20;
    plVar1[1] = (long)pcVar5;
    func_0x000107c61434();
    func_0x000107c61434(pcVar5);
    func_0x000101885560(lVar6,lVar4);
    lVar6 = unaff_x20;
    pcVar7 = pcVar5;
  }
  FUN_1018859f0(lVar2,pcVar3);
  auVar8._8_8_ = pcVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 101882288; end: 101882393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101882288(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (*(int *)(unaff_x20 + _DAT_113803438) == 4) {
    lVar5 = param_1;
    func_0x000101881c14();
    func_0x000107c6142c(param_2);
    lVar6 = *(long *)(lVar5 + 0x10);
    func_0x000107c6142c(lVar5);
    lVar3 = 0;
    lVar4 = 0;
    lVar5 = lVar4;
    if ((param_1 < 0) || (lVar6 <= param_1)) goto LAB_101882380;
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112dcc910);
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112dcc910))[1];
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    FUN_101882394();
    func_0x000107c6142c();
    lVar5 = lVar4;
    FUN_101886614(lVar4,param_1,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
    func_0x000107c6142c(lVar4);
    if (lVar5 != 0) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        lVar3 = lVar5;
        func_0x000107c61434(lVar5);
        FUN_1018852e4();
        func_0x000107c6142c(lVar5);
        goto LAB_101882380;
      }
      func_0x000107c6142c(lVar5);
    }
  }
  lVar3 = 0;
  lVar5 = 0;
LAB_101882380:
  auVar7._8_8_ = lVar5;
  auVar7._0_8_ = lVar3;
  return auVar7;
}



/* Entry: 101882394; end: 1018823a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101882394(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar4 = 0x101882654;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc948);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  lVar5 = lVar2;
  lVar6 = lVar3;
  if (lVar2 == 0) {
    (*(code *)0x101882654)();
    lVar5 = *plVar1;
    lVar6 = plVar1[1];
    *plVar1 = unaff_x20;
    plVar1[1] = lVar4;
    func_0x000107c61434();
    func_0x000107c61434(lVar4);
    func_0x000101885560(lVar5,lVar6);
    lVar5 = unaff_x20;
    lVar6 = lVar4;
  }
  FUN_1018859f0(lVar2,lVar3);
  auVar7._8_8_ = lVar6;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 1018823a8; end: 101882437;  */

undefined1  [16] FUN_1018823a8(long *param_1,code *param_2)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  
  plVar1 = (long *)(unaff_x20 + *param_1);
  lVar2 = *plVar1;
  pcVar3 = (code *)plVar1[1];
  lVar5 = lVar2;
  pcVar6 = pcVar3;
  if (lVar2 == 0) {
    (*param_2)();
    lVar5 = *plVar1;
    lVar4 = plVar1[1];
    *plVar1 = unaff_x20;
    plVar1[1] = (long)param_2;
    func_0x000107c61434();
    func_0x000107c61434(param_2);
    func_0x000101885560(lVar5,lVar4);
    lVar5 = unaff_x20;
    pcVar6 = param_2;
  }
  FUN_1018859f0(lVar2,pcVar3);
  auVar7._8_8_ = pcVar6;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Entry: 101882438; end: 10188245f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101882438(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  
  pcVar5 = FUN_101882d18;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc968);
  lVar2 = *plVar1;
  pcVar3 = (code *)plVar1[1];
  lVar6 = lVar2;
  pcVar7 = pcVar3;
  if (lVar2 == 0) {
    FUN_101882d18();
    lVar6 = *plVar1;
    lVar4 = plVar1[1];
    *plVar1 = unaff_x20;
    plVar1[1] = (long)pcVar5;
    func_0x000107c61434();
    func_0x000107c61434(pcVar5);
    func_0x000101885560(lVar6,lVar4);
    lVar6 = unaff_x20;
    pcVar7 = pcVar5;
  }
  FUN_1018859f0(lVar2,pcVar3);
  auVar8._8_8_ = pcVar7;
  auVar8._0_8_ = lVar6;
  return auVar8;
}



/* Entry: 101882460; end: 101882847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101882460(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  
  uVar6 = *(ulong *)(param_1 + _DAT_112dcc9b0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c3d2bc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  func_0x000104681c70(0);
  uVar3 = uVar6;
  func_0x000107c5fc54(uVar6,uVar2);
  func_0x000107c61170(uVar6);
  if (uVar3 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar6 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar6 = uVar3;
    }
    func_0x000107c60480();
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar7;
  if (uVar6 == 0) {
    func_0x000107c6142c(uVar3);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_101887734(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101882654);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar8;
        func_0x000101887ce8(uVar8,uVar3);
      }
      uVar2 = *(undefined8 *)(uVar4 + _DAT_11308bea0);
      uVar9 = *(undefined8 *)(uVar4 + _DAT_11308bea8);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar7 + 0x10);
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        FUN_101887734(1 < *(ulong *)(puVar7 + 0x18),uVar4 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar7 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar7 + uVar4 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar7 + uVar4 * 0x10 + 0x28) = uVar9;
    } while (uVar6 != uVar8);
    func_0x000107c6142c(uVar3);
  }
  puVar5 = puVar7;
  func_0x000107c61434(puVar7);
  FUN_101884c2c();
  func_0x000107c6142c(puVar7);
  auVar10._8_8_ = puVar7;
  auVar10._0_8_ = puVar5;
  return auVar10;
}



/* Entry: 101882848; end: 10188285b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101882848(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc950;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc950);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10188285c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 10188285c; end: 101882a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10188285c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar5 = *(ulong *)(param_1 + _DAT_112dcc9b0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c3d46c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  func_0x00010468ff14(0);
  uVar3 = uVar5;
  func_0x000107c5fc54(uVar5,uVar2);
  func_0x000107c61170(uVar5);
  if (uVar3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar5 = uVar3;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar5 == 0) {
    func_0x000107c6142c(uVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101887804(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101882a30);
      (*pcVar1)();
    }
    uVar7 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        func_0x00010188850c(uVar7,uVar3);
      }
      uVar2 = *(undefined8 *)(uVar4 + _DAT_11308c488);
      uVar8 = *(undefined8 *)(uVar4 + _DAT_11308c490);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
        func_0x000101887804(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar6 + uVar4 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + uVar4 * 0x10 + 0x28) = uVar8;
    } while (uVar5 != uVar7);
    func_0x000107c6142c(uVar3);
  }
  return puVar6;
}



/* Entry: 101882a30; end: 101882a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101882a30(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc958;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc958);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_101882aa4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 101882a44; end: 101882aa3;  */

long FUN_101882a44(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar2;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar1 = 0;
  }
  func_0x000107c61434(lVar1);
  return lVar2;
}



/* Entry: 101882aa4; end: 101882c77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101882aa4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar5 = *(ulong *)(param_1 + _DAT_112dcc9b0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c3d318();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  func_0x000104684570(0);
  uVar3 = uVar5;
  func_0x000107c5fc54(uVar5,uVar2);
  func_0x000107c61170(uVar5);
  if (uVar3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar5 = uVar3;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar5 == 0) {
    func_0x000107c6142c(uVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101887838(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101882c78);
      (*pcVar1)();
    }
    uVar7 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        func_0x0001018886a8(uVar7,uVar3);
      }
      uVar2 = *(undefined8 *)(uVar4 + _DAT_11308c048);
      uVar8 = *(undefined8 *)(uVar4 + _DAT_11308c050);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
        func_0x000101887838(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar6 + uVar4 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + uVar4 * 0x10 + 0x28) = uVar8;
    } while (uVar5 != uVar7);
    func_0x000107c6142c(uVar3);
  }
  return puVar6;
}



/* Entry: 101882c78; end: 101882d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101882c78(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc960;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc960);
  lVar3 = lVar2;
  if (lVar2 == 1) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112dcc9b0);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x20 + 0x20));
    func_0x000107c5e288();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174(lVar3);
    FUN_10188558c(uVar4);
  }
  FUN_1018859e0(lVar2);
  return lVar3;
}



/* Entry: 101882d18; end: 1018832c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101882d18(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  
  FUN_101882c78();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    puVar6 = *(undefined **)(param_1 + _DAT_11308b800);
    func_0x000107c61434(puVar6);
    func_0x000107c61170(param_1);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar8 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101887768(0,(ulong)puVar8 & ((long)puVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101882f64);
      (*pcVar3)();
    }
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      plVar11 = (long *)(puVar6 + 0x20);
      do {
        uVar5 = *(undefined8 *)(*plVar11 + _DAT_11308cf00);
        uVar10 = *(undefined8 *)(*plVar11 + _DAT_11308cf08);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        uVar2 = *(ulong *)(puVar7 + 0x18);
        func_0x000107c61174();
        func_0x000107c61174();
        if (uVar2 >> 1 <= uVar1) {
          func_0x000101887768(1 < uVar2,uVar1 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
        puVar8 = puVar8 + -1;
        plVar11 = plVar11 + 1;
      } while (puVar8 != (undefined *)0x0);
    }
    else {
      puVar9 = (undefined *)0x0;
      do {
        puVar4 = puVar9;
        func_0x000101887e84(puVar9,puVar6);
        uVar5 = *(undefined8 *)(puVar4 + _DAT_11308cf00);
        uVar10 = *(undefined8 *)(puVar4 + _DAT_11308cf08);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c615e8(puVar4);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x000101887768(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puVar9 + 1;
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
      } while (puVar8 != puVar9);
    }
    func_0x000107c6142c(puVar6);
  }
  puVar6 = puVar7;
  func_0x000107c61434(puVar7);
  FUN_101884e6c();
  func_0x000107c6142c(puVar7);
  auVar12._8_8_ = puVar7;
  auVar12._0_8_ = puVar6;
  return auVar12;
}



/* Entry: 1018832c8; end: 1018832db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1018832c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc978;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc978);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_1018832dc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 1018832dc; end: 101883507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1018832dc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  
  FUN_101882c78();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    puVar6 = *(undefined **)(param_1 + _DAT_11308b7f0);
    func_0x000107c61434(puVar6);
    func_0x000107c61170(param_1);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar8 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x00010188786c(0,(ulong)puVar8 & ((long)puVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101883508);
      (*pcVar3)();
    }
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      plVar11 = (long *)(puVar6 + 0x20);
      do {
        uVar5 = *(undefined8 *)(*plVar11 + _DAT_11308ce90);
        uVar10 = *(undefined8 *)(*plVar11 + _DAT_11308ce98);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        uVar2 = *(ulong *)(puVar7 + 0x18);
        func_0x000107c61174();
        func_0x000107c61174();
        if (uVar2 >> 1 <= uVar1) {
          func_0x00010188786c(1 < uVar2,uVar1 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
        puVar8 = puVar8 + -1;
        plVar11 = plVar11 + 1;
      } while (puVar8 != (undefined *)0x0);
    }
    else {
      puVar9 = (undefined *)0x0;
      do {
        puVar4 = puVar9;
        func_0x000101888844(puVar9,puVar6);
        uVar5 = *(undefined8 *)(puVar4 + _DAT_11308ce90);
        uVar10 = *(undefined8 *)(puVar4 + _DAT_11308ce98);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c615e8(puVar4);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x00010188786c(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puVar9 + 1;
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
      } while (puVar8 != puVar9);
    }
    func_0x000107c6142c(puVar6);
  }
  return puVar7;
}



/* Entry: 101883508; end: 10188351b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101883508(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc980;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc980);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10188351c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 10188351c; end: 101883747;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10188351c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  
  FUN_101882c78();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    puVar6 = *(undefined **)(param_1 + _DAT_11308b7f8);
    func_0x000107c61434(puVar6);
    func_0x000107c61170(param_1);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar8 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001018878a0(0,(ulong)puVar8 & ((long)puVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101883748);
      (*pcVar3)();
    }
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      plVar11 = (long *)(puVar6 + 0x20);
      do {
        uVar5 = *(undefined8 *)(*plVar11 + _DAT_11308cec8);
        uVar10 = *(undefined8 *)(*plVar11 + _DAT_11308ced0);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        uVar2 = *(ulong *)(puVar7 + 0x18);
        func_0x000107c61174();
        func_0x000107c61174();
        if (uVar2 >> 1 <= uVar1) {
          func_0x0001018878a0(1 < uVar2,uVar1 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
        puVar8 = puVar8 + -1;
        plVar11 = plVar11 + 1;
      } while (puVar8 != (undefined *)0x0);
    }
    else {
      puVar9 = (undefined *)0x0;
      do {
        puVar4 = puVar9;
        func_0x0001018889e0(puVar9,puVar6);
        uVar5 = *(undefined8 *)(puVar4 + _DAT_11308cec8);
        uVar10 = *(undefined8 *)(puVar4 + _DAT_11308ced0);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c615e8(puVar4);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x0001018878a0(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puVar9 + 1;
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
      } while (puVar8 != puVar9);
    }
    func_0x000107c6142c(puVar6);
  }
  return puVar7;
}



/* Entry: 101883748; end: 10188375b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101883748(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc988;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc988);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10188375c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 10188375c; end: 101883987;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10188375c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  
  FUN_101882c78();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    puVar6 = *(undefined **)(param_1 + _DAT_11308b810);
    func_0x000107c61434(puVar6);
    func_0x000107c61170(param_1);
  }
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar8 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar8 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar8 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001018878d4(0,(ulong)puVar8 & ((long)puVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101883988);
      (*pcVar3)();
    }
    if (((ulong)puVar6 & 0xc000000000000001) == 0) {
      plVar11 = (long *)(puVar6 + 0x20);
      do {
        uVar5 = *(undefined8 *)(*plVar11 + _DAT_11308cf38);
        uVar10 = *(undefined8 *)(*plVar11 + _DAT_11308cf40);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        uVar2 = *(ulong *)(puVar7 + 0x18);
        func_0x000107c61174();
        func_0x000107c61174();
        if (uVar2 >> 1 <= uVar1) {
          func_0x0001018878d4(1 < uVar2,uVar1 + 1,1);
        }
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
        puVar8 = puVar8 + -1;
        plVar11 = plVar11 + 1;
      } while (puVar8 != (undefined *)0x0);
    }
    else {
      puVar9 = (undefined *)0x0;
      do {
        puVar4 = puVar9;
        func_0x000101888b7c(puVar9,puVar6);
        uVar5 = *(undefined8 *)(puVar4 + _DAT_11308cf38);
        uVar10 = *(undefined8 *)(puVar4 + _DAT_11308cf40);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c615e8(puVar4);
        uVar1 = *(ulong *)(puVar7 + 0x10);
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          func_0x0001018878d4(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
        }
        puVar9 = puVar9 + 1;
        *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x20) = uVar5;
        *(undefined8 *)(puVar7 + uVar1 * 0x10 + 0x28) = uVar10;
      } while (puVar8 != puVar9);
    }
    func_0x000107c6142c(puVar6);
  }
  return puVar7;
}



/* Entry: 101883988; end: 10188399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101883988(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc990;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc990);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10188399c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 10188399c; end: 101883b6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10188399c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar5 = *(ulong *)(param_1 + _DAT_112dcc9b0);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5fadc(uVar2,*(undefined8 *)(param_1 + 0x20));
  func_0x000107c422a8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = 0;
  func_0x00010469e0dc(0);
  uVar3 = uVar5;
  func_0x000107c5fc54(uVar5,uVar2);
  func_0x000107c61170(uVar5);
  if (uVar3 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar5 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar5 = uVar3;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar5 == 0) {
    func_0x000107c6142c(uVar3);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000101887908(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101883b70);
      (*pcVar1)();
    }
    uVar7 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        func_0x000101888d18(uVar7,uVar3);
      }
      uVar2 = *(undefined8 *)(uVar4 + _DAT_11308ca68);
      uVar8 = *(undefined8 *)(uVar4 + _DAT_11308ca70);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61170(uVar4);
      uVar4 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar4) {
        func_0x000101887908(1 < *(ulong *)(puVar6 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar4 + 1;
      *(undefined8 *)(puVar6 + uVar4 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar6 + uVar4 * 0x10 + 0x28) = uVar8;
    } while (uVar5 != uVar7);
    func_0x000107c6142c(uVar3);
  }
  return puVar6;
}



/* Entry: 101883b70; end: 101883c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101883b70(void)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar1 = (long *)(unaff_x20 + _DAT_112dcc998);
  puVar2 = (undefined *)*plVar1;
  puVar4 = (undefined *)plVar1[1];
  puVar8 = puVar4;
  puVar6 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    if (*(ulong *)(unaff_x20 + 0x28) < 2) {
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_101888eb4();
    }
    else {
      puVar6 = *(undefined **)(unaff_x20 + 0x18);
      puVar7 = *(undefined **)(unaff_x20 + 0x20);
      FUN_101886c6c(*(undefined8 *)(unaff_x20 + _DAT_112dcc9b8),puVar6,puVar7,
                    *(undefined8 *)(unaff_x20 + 0x30),*(ulong *)(unaff_x20 + 0x28) - 1);
    }
    lVar3 = *plVar1;
    lVar5 = plVar1[1];
    *plVar1 = (long)puVar6;
    plVar1[1] = (long)puVar7;
    func_0x000107c61434(puVar6);
    func_0x000107c61434(puVar7);
    func_0x000101885560(lVar3,lVar5);
    puVar8 = puVar7;
  }
  FUN_1018859f0(puVar2,puVar4);
  auVar9._8_8_ = puVar8;
  auVar9._0_8_ = puVar6;
  return auVar9;
}



/* Entry: 101883c50; end: 101883c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101883c50(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc9a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc9a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_101883c64();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 101883c64; end: 101883e33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101883c64(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (1 < *(ulong *)(param_1 + 0x28)) {
    uVar6 = *(ulong *)(param_1 + _DAT_112dcc9b0);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c3d2bc();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x000104681c70(0);
    uVar4 = uVar6;
    func_0x000107c5fc54(uVar6,uVar3);
    func_0x000107c61170(uVar6);
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar6 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      FUN_101887734(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101883e34);
        (*pcVar2)();
      }
      uVar8 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          uVar5 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar8;
          func_0x000101887ce8(uVar8,uVar4);
        }
        uVar3 = *(undefined8 *)(uVar5 + _DAT_11308bea0);
        uVar7 = *(undefined8 *)(uVar5 + _DAT_11308bea8);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61170(uVar5);
        uVar5 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
          FUN_101887734(1 < *(ulong *)(puVar1 + 0x18),uVar5 + 1,1);
        }
        uVar8 = uVar8 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar5 + 1;
        *(undefined8 *)(puVar1 + uVar5 * 0x10 + 0x20) = uVar3;
        *(undefined8 *)(puVar1 + uVar5 * 0x10 + 0x28) = uVar7;
      } while (uVar6 != uVar8);
    }
    func_0x000107c6142c(uVar4);
  }
  return puVar1;
}



/* Entry: 101883e34; end: 101883e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101883e34(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112dcc9a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112dcc9a8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_101883e48();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 101883e48; end: 101884017;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101883e48(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (1 < *(ulong *)(param_1 + 0x28)) {
    uVar6 = *(ulong *)(param_1 + _DAT_112dcc9b0);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(param_1 + 0x20));
    func_0x000107c5e294();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x0001046a9c0c(0);
    uVar4 = uVar6;
    func_0x000107c5fc54(uVar6,uVar3);
    func_0x000107c61170(uVar6);
    if (uVar4 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar6 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar6 != 0) {
      func_0x000101887768(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101884018);
        (*pcVar2)();
      }
      uVar8 = 0;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          uVar5 = *(ulong *)(uVar4 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar8;
          func_0x000101887e84(uVar8,uVar4);
        }
        uVar3 = *(undefined8 *)(uVar5 + _DAT_11308cf00);
        uVar7 = *(undefined8 *)(uVar5 + _DAT_11308cf08);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61170(uVar5);
        uVar5 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
          func_0x000101887768(1 < *(ulong *)(puVar1 + 0x18),uVar5 + 1,1);
        }
        uVar8 = uVar8 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar5 + 1;
        *(undefined8 *)(puVar1 + uVar5 * 0x10 + 0x20) = uVar3;
        *(undefined8 *)(puVar1 + uVar5 * 0x10 + 0x28) = uVar7;
      } while (uVar6 != uVar8);
    }
    func_0x000107c6142c(uVar4);
  }
  return puVar1;
}



/* Entry: 101884018; end: 10188420f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101884018(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_101885524(unaff_x20 + _DAT_113803410,&SUB_100b91d00);
  FUN_101885524(unaff_x20 + _DAT_113803418,&SUB_1046d90b0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + _DAT_112dcc9b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112dcc9b8));
  func_0x000101885560(*(undefined8 *)(unaff_x20 + _DAT_112dcc908),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc908))[1]);
  func_0x000101885560(*(undefined8 *)(unaff_x20 + _DAT_112dcc910),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc910))[1]);
  func_0x000100cbd574(*(undefined8 *)(unaff_x20 + _DAT_112dcc920),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc920))[1]);
  func_0x000100cbd574(*(undefined8 *)(unaff_x20 + _DAT_112dcc928),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc928))[1]);
  func_0x000100cbd574(*(undefined8 *)(unaff_x20 + _DAT_112dcc930),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc930))[1]);
  FUN_1018850ac(*(undefined8 *)(unaff_x20 + _DAT_112dcc938));
  func_0x000101885560(*(undefined8 *)(unaff_x20 + _DAT_112dcc940),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc940))[1]);
  func_0x000101885560(*(undefined8 *)(unaff_x20 + _DAT_112dcc948),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc948))[1]);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc950));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc958));
  FUN_10188558c(*(undefined8 *)(unaff_x20 + _DAT_112dcc960));
  func_0x000101885560(*(undefined8 *)(unaff_x20 + _DAT_112dcc968),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc968))[1]);
  func_0x000101885560(*(undefined8 *)(unaff_x20 + _DAT_112dcc970),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc970))[1]);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc978));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc980));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc988));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc990));
  func_0x000101885560(*(undefined8 *)(unaff_x20 + _DAT_112dcc998),
                      ((undefined8 *)(unaff_x20 + _DAT_112dcc998))[1]);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc9a0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + _DAT_112dcc9a8));
  return;
}



/* Entry: 101884210; end: 10188425f;  */

void FUN_101884210(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  
  lVar1 = param_8 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar2 = (undefined8 *)(*(long *)(param_8 + 0x30) + param_1 * 0x20);
  *puVar2 = param_2;
  puVar2[1] = param_3;
  puVar2[2] = param_4;
  puVar2[3] = param_5;
  puVar2 = (undefined8 *)(*(long *)(param_8 + 0x38) + param_1 * 0x10);
  *puVar2 = param_6;
  puVar2[1] = param_7;
  if (!SCARRY8(*(long *)(param_8 + 0x10),1)) {
    *(long *)(param_8 + 0x10) = *(long *)(param_8 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101884260);
  (*pcVar3)();
}



/* Entry: 101884260; end: 10188453f;  */

void FUN_101884260(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x20;
  ulong *puVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined1 auStack_a8 [72];
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112dccb80;
  func_0x0001000285a8(0x112dccb80,&UNK_10d98faa0);
  lVar8 = lVar19;
  func_0x000107c60490(lVar19,lVar1,param_2,uVar7);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_10188450c:
    func_0x000107c61574(lVar19);
    *unaff_x20 = lVar8;
    return;
  }
  puVar17 = (ulong *)(lVar19 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *puVar17;
  lVar1 = lVar8 + 0x40;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar16 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10188453c);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
            if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar19 + 0x10) = 0;
          }
          goto LAB_10188450c;
        }
        uVar18 = puVar17[lVar16];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar9 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = lVar10;
    }
    uVar11 = LZCOUNT(uVar9) | lVar16 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + uVar11 * 0x20);
    uVar7 = *puVar2;
    uVar4 = puVar2[1];
    uVar3 = puVar2[2];
    uVar9 = puVar2[3];
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x38) + uVar11 * 0x10);
    uVar21 = puVar2[1];
    uVar20 = *puVar2;
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar20);
      func_0x000107c61434(uVar20,uVar21);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    func_0x000107c5fb58(auStack_a8,uVar7,uVar4);
    func_0x000107c60690(uVar3);
    uVar14 = uVar9;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = uVar14 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar14 >> 6;
    uVar11 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar5 = false;
      uVar11 = 0x3f - uVar15 >> 6;
      do {
        uVar14 = uVar12 + 1;
        if ((uVar14 == uVar11) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101884540);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar14 != uVar11) {
          uVar12 = uVar14;
        }
        bVar5 = (bool)(uVar14 == uVar11 | bVar5);
        uVar14 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar11 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar11 * 0x20);
    *puVar2 = uVar7;
    puVar2[1] = uVar4;
    puVar2[2] = uVar3;
    puVar2[3] = uVar9;
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar11 * 0x10);
    puVar2[1] = uVar21;
    *puVar2 = uVar20;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar10 = lVar16;
  } while( true );
}



/* Entry: 101884540; end: 101884553;  */

void FUN_101884540(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  uVar14 = 0x112dccbd8;
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112dccbd8,&UNK_10d98f8d8);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,uVar14);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10188479c:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018847cc);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10188479c;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018847d0);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 101884554; end: 1018847cf;  */

void FUN_101884554(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar11 = *unaff_x20;
  lVar1 = *(long *)(lVar11 + 0x18);
  if (*(long *)(lVar11 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar4 = lVar11;
  func_0x000107c60490(lVar11,lVar1,param_2,param_3);
  if (*(long *)(lVar11 + 0x10) == 0) {
LAB_10188479c:
    func_0x000107c61574(lVar11);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar11 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar12 = uVar12 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar6 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar16 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018847cc);
          (*pcVar3)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
            if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar12 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar11 + 0x10) = 0;
          }
          goto LAB_10188479c;
        }
        uVar12 = puVar13[lVar16];
        lVar6 = lVar6 + 1;
      } while (uVar12 == 0);
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar5 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar16 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar16 << 6;
    uVar15 = *(ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar14);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar4 + 0x28));
    uVar9 = uVar15;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = uVar9 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar9 >> 6;
    uVar5 = -1L << (uVar9 & 0x3f) & (*(ulong *)(lVar1 + uVar7 * 8) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar2 = false;
      uVar5 = 0x3f - uVar10 >> 6;
      do {
        uVar9 = uVar7 + 1;
        if ((uVar9 == uVar5) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1018847d0);
          (*pcVar3)();
        }
        uVar7 = 0;
        if (uVar9 != uVar5) {
          uVar7 = uVar9;
        }
        bVar2 = (bool)(uVar9 == uVar5 | bVar2);
        uVar9 = *(ulong *)(lVar1 + uVar7 * 8);
      } while (uVar9 == 0xffffffffffffffff);
      uVar9 = ~uVar9;
      uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = 1L << (uVar5 & 0x3f) | *(ulong *)(lVar1 + uVar7);
    *(ulong *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = uVar15;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar6 = lVar16;
  } while( true );
}



/* Entry: 1018847d0; end: 1018848eb;  */

undefined * FUN_1018847d0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018848ec);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dcc448;
    func_0x0001000285a8(0x112dcc448,&UNK_10d98f8d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11040a888);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1018848ec; end: 101884a1b;  */

undefined * FUN_1018848ec(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101884a1c);
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
    puVar3 = (undefined *)0x112dccbc8;
    func_0x0001000285a8(0x112dccbc8,&UNK_10d98f8c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dccbd0;
    func_0x0001000285a8(0x112dccbd0,&UNK_10d98f8c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101884a1c; end: 101884b23;  */

undefined * FUN_101884a1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101884b24);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112dccb88;
    func_0x0001000285a8(0x112dccb88,&UNK_10d98f880);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_11040ab08);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 101884b24; end: 101884c2b;  */

undefined *
FUN_101884b24(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101884c2c);
        (*pcVar2)();
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
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar6;
}



/* Entry: 101884c2c; end: 101884e6b;  */

undefined * FUN_101884c2c(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      while( true ) {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        func_0x000107c61174(uVar11);
        uVar3 = uVar12;
        func_0x000107c61174(uVar11);
        func_0x000107c30b48();
        uVar4 = uVar3;
        func_0x0001018815d0();
        uVar6 = (ulong)~(uint)param_2 & 1;
        lVar9 = *(long *)(puVar1 + 0x10) + uVar6;
        if (SCARRY8(*(long *)(puVar1 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101884e58);
          (*pcVar2)();
        }
        uVar6 = param_2;
        if (*(long *)(puVar1 + 0x18) < lVar9) {
          uVar6 = 1;
          FUN_101884554(lVar9,1,0x112dccbc0,&UNK_10d98f8b8);
          uVar4 = uVar3;
          func_0x0001018815d0();
          if (((uint)param_2 & 1) != ((uint)uVar6 & 1)) {
            func_0x000107c60624(&UNK_110799da0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101884e6c);
            (*pcVar2)();
          }
        }
        if ((param_2 & 1) == 0) break;
        lVar9 = *(long *)(puVar1 + 0x38);
        uVar10 = *(ulong *)(lVar9 + uVar4 * 8);
        uVar3 = uVar10;
        func_0x000107c61558();
        *(ulong *)(lVar9 + uVar4 * 8) = uVar10;
        param_2 = uVar6;
        uVar6 = uVar10;
        if ((uVar3 & 1) == 0) {
          param_2 = *(long *)(uVar10 + 0x10) + 1;
          uVar6 = 0;
          FUN_101884b24(0,param_2,1,uVar10,0x112dccbb8,&UNK_10d98f8b0,&UNK_11040a908);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar6;
        }
        uVar10 = *(ulong *)(uVar6 + 0x10);
        uVar3 = uVar10 + 1;
        uVar5 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          param_2 = uVar3;
          FUN_101884b24(uVar5,uVar3,1,uVar6,0x112dccbb8,&UNK_10d98f8b0,&UNK_11040a908);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar5;
        }
        *(ulong *)(uVar5 + 0x10) = uVar3;
        lVar9 = uVar5 + uVar10 * 0x10;
        *(ulong *)(lVar9 + 0x28) = uVar12;
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 2;
        if (lVar7 == 0) {
          return puVar1;
        }
      }
      lVar9 = 0x112dccbb8;
      func_0x0001000285a8(0x112dccbb8,&UNK_10d98f8b0);
      param_2 = 0;
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(ulong *)(lVar9 + 0x28) = uVar12;
      *(undefined8 *)(lVar9 + 0x20) = uVar11;
      *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar3;
      *(long *)(*(long *)(puVar1 + 0x38) + uVar4 * 8) = lVar9;
      if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101884e5c);
        (*pcVar2)();
      }
      *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar7 != 0);
  }
  return puVar1;
}



/* Entry: 101884e6c; end: 1018850ab;  */

undefined * FUN_101884e6c(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      while( true ) {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        func_0x000107c61174(uVar11);
        uVar3 = uVar12;
        func_0x000107c61174(uVar11);
        func_0x000107c30c30();
        uVar4 = uVar3;
        func_0x0001018815c8();
        uVar6 = (ulong)~(uint)param_2 & 1;
        lVar9 = *(long *)(puVar1 + 0x10) + uVar6;
        if (SCARRY8(*(long *)(puVar1 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101885098);
          (*pcVar2)();
        }
        uVar6 = param_2;
        if (*(long *)(puVar1 + 0x18) < lVar9) {
          uVar6 = 1;
          FUN_101884554(lVar9,1,0x112dccbb0,&UNK_10d98f8a8);
          uVar4 = uVar3;
          func_0x0001018815c8();
          if (((uint)param_2 & 1) != ((uint)uVar6 & 1)) {
            func_0x000107c60624(&UNK_110798ce0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018850ac);
            (*pcVar2)();
          }
        }
        if ((param_2 & 1) == 0) break;
        lVar9 = *(long *)(puVar1 + 0x38);
        uVar10 = *(ulong *)(lVar9 + uVar4 * 8);
        uVar3 = uVar10;
        func_0x000107c61558();
        *(ulong *)(lVar9 + uVar4 * 8) = uVar10;
        param_2 = uVar6;
        uVar6 = uVar10;
        if ((uVar3 & 1) == 0) {
          param_2 = *(long *)(uVar10 + 0x10) + 1;
          uVar6 = 0;
          FUN_101884b24(0,param_2,1,uVar10,0x112dccba8,&UNK_10d98f8a0,&UNK_11040aa08);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar6;
        }
        uVar10 = *(ulong *)(uVar6 + 0x10);
        uVar3 = uVar10 + 1;
        uVar5 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          param_2 = uVar3;
          FUN_101884b24(uVar5,uVar3,1,uVar6,0x112dccba8,&UNK_10d98f8a0,&UNK_11040aa08);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar5;
        }
        *(ulong *)(uVar5 + 0x10) = uVar3;
        lVar9 = uVar5 + uVar10 * 0x10;
        *(ulong *)(lVar9 + 0x28) = uVar12;
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 2;
        if (lVar7 == 0) {
          return puVar1;
        }
      }
      lVar9 = 0x112dccba8;
      func_0x0001000285a8(0x112dccba8,&UNK_10d98f8a0);
      param_2 = 0;
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(ulong *)(lVar9 + 0x28) = uVar12;
      *(undefined8 *)(lVar9 + 0x20) = uVar11;
      *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar3;
      *(long *)(*(long *)(puVar1 + 0x38) + uVar4 * 8) = lVar9;
      if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10188509c);
        (*pcVar2)();
      }
      *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar7 != 0);
  }
  return puVar1;
}



/* Entry: 1018850ac; end: 1018850cb;  */

void FUN_1018850ac(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1018850cc; end: 1018852e3;  */

undefined * FUN_1018850cc(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      while( true ) {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        func_0x000107c61174(uVar11);
        uVar3 = uVar12;
        func_0x000107c61174(uVar11);
        func_0x000107c30cb8();
        uVar4 = uVar3;
        func_0x0001018815d8();
        uVar6 = (ulong)~(uint)param_2 & 1;
        lVar9 = *(long *)(puVar1 + 0x10) + uVar6;
        if (SCARRY8(*(long *)(puVar1 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018852d0);
          (*pcVar2)();
        }
        uVar6 = param_2;
        if (*(long *)(puVar1 + 0x18) < lVar9) {
          uVar6 = 1;
          FUN_101884554(lVar9,1,0x112dccb90,&UNK_10d98f888);
          uVar4 = uVar3;
          func_0x0001018815d8();
          if (((uint)param_2 & 1) != ((uint)uVar6 & 1)) {
            func_0x000107c60624(&UNK_110799eb0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1018852e4);
            (*pcVar2)();
          }
        }
        if ((param_2 & 1) == 0) break;
        lVar9 = *(long *)(puVar1 + 0x38);
        uVar10 = *(ulong *)(lVar9 + uVar4 * 8);
        uVar3 = uVar10;
        func_0x000107c61558();
        *(ulong *)(lVar9 + uVar4 * 8) = uVar10;
        param_2 = uVar6;
        uVar6 = uVar10;
        if ((uVar3 & 1) == 0) {
          param_2 = *(long *)(uVar10 + 0x10) + 1;
          uVar6 = 0;
          FUN_101884a1c(0,param_2,1,uVar10);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar6;
        }
        uVar10 = *(ulong *)(uVar6 + 0x10);
        uVar3 = uVar10 + 1;
        uVar5 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          param_2 = uVar3;
          FUN_101884a1c(uVar5,uVar3,1,uVar6);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar5;
        }
        *(ulong *)(uVar5 + 0x10) = uVar3;
        lVar9 = uVar5 + uVar10 * 0x10;
        *(ulong *)(lVar9 + 0x28) = uVar12;
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 2;
        if (lVar7 == 0) {
          return puVar1;
        }
      }
      lVar9 = 0x112dccb88;
      func_0x0001000285a8(0x112dccb88,&UNK_10d98f880);
      param_2 = 0;
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(ulong *)(lVar9 + 0x28) = uVar12;
      *(undefined8 *)(lVar9 + 0x20) = uVar11;
      *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar3;
      *(long *)(*(long *)(puVar1 + 0x38) + uVar4 * 8) = lVar9;
      if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018852d4);
        (*pcVar2)();
      }
      *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar7 != 0);
  }
  return puVar1;
}



/* Entry: 1018852e4; end: 101885523;  */

undefined * FUN_1018852e4(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      while( true ) {
        uVar12 = puVar8[1];
        uVar11 = *puVar8;
        func_0x000107c61174(uVar11);
        uVar3 = uVar12;
        func_0x000107c61174(uVar11);
        func_0x000107c30b5c();
        uVar4 = uVar3;
        func_0x0001018815cc();
        uVar6 = (ulong)~(uint)param_2 & 1;
        lVar9 = *(long *)(puVar1 + 0x10) + uVar6;
        if (SCARRY8(*(long *)(puVar1 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101885510);
          (*pcVar2)();
        }
        uVar6 = param_2;
        if (*(long *)(puVar1 + 0x18) < lVar9) {
          uVar6 = 1;
          FUN_101884554(lVar9,1,0x112dccba0,&UNK_10d98f898);
          uVar4 = uVar3;
          func_0x0001018815cc();
          if (((uint)param_2 & 1) != ((uint)uVar6 & 1)) {
            func_0x000107c60624(&UNK_110799d18);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101885524);
            (*pcVar2)();
          }
        }
        if ((param_2 & 1) == 0) break;
        lVar9 = *(long *)(puVar1 + 0x38);
        uVar10 = *(ulong *)(lVar9 + uVar4 * 8);
        uVar3 = uVar10;
        func_0x000107c61558();
        *(ulong *)(lVar9 + uVar4 * 8) = uVar10;
        param_2 = uVar6;
        uVar6 = uVar10;
        if ((uVar3 & 1) == 0) {
          param_2 = *(long *)(uVar10 + 0x10) + 1;
          uVar6 = 0;
          FUN_101884b24(0,param_2,1,uVar10,0x112dccb98,&UNK_10d98f890,&UNK_11040a988);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar6;
        }
        uVar10 = *(ulong *)(uVar6 + 0x10);
        uVar3 = uVar10 + 1;
        uVar5 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar10) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          param_2 = uVar3;
          FUN_101884b24(uVar5,uVar3,1,uVar6,0x112dccb98,&UNK_10d98f890,&UNK_11040a988);
          *(ulong *)(lVar9 + uVar4 * 8) = uVar5;
        }
        *(ulong *)(uVar5 + 0x10) = uVar3;
        lVar9 = uVar5 + uVar10 * 0x10;
        *(ulong *)(lVar9 + 0x28) = uVar12;
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 2;
        if (lVar7 == 0) {
          return puVar1;
        }
      }
      lVar9 = 0x112dccb98;
      func_0x0001000285a8(0x112dccb98,&UNK_10d98f890);
      param_2 = 0;
      func_0x000107c613fc();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(ulong *)(lVar9 + 0x28) = uVar12;
      *(undefined8 *)(lVar9 + 0x20) = uVar11;
      *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) =
           *(ulong *)(puVar1 + (uVar4 >> 6) * 8 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar1 + 0x30) + uVar4 * 8) = uVar3;
      *(long *)(*(long *)(puVar1 + 0x38) + uVar4 * 8) = lVar9;
      if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101885514);
        (*pcVar2)();
      }
      *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar7 != 0);
  }
  return puVar1;
}



/* Entry: 101885524; end: 10188558b;  */

undefined8 FUN_101885524(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10188558c; end: 10188559b;  */

void FUN_10188558c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10188559c; end: 1018856cf;  */

undefined * FUN_10188559c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar11 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar11 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dccb80,&UNK_10d98faa0);
    puVar8 = puVar11;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar12 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = puVar12[-4];
      uVar4 = puVar12[-3];
      uVar3 = puVar12[-2];
      uVar5 = puVar12[-1];
      uVar14 = puVar12[1];
      uVar13 = *puVar12;
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar13);
      func_0x000107c61434(uVar13,uVar14);
      uVar9 = uVar2;
      uVar10 = uVar4;
      FUN_101887214(uVar2,uVar4,uVar3,uVar5);
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1018856cc);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x20);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = uVar5;
      puVar6 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      puVar6[1] = uVar14;
      *puVar6 = uVar13;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1018856d0);
        (*pcVar7)();
      }
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      puVar11 = puVar11 + -1;
      puVar12 = puVar12 + 6;
    } while (puVar11 != (undefined *)0x0);
    func_0x000107c61574(puVar8);
  }
  return puVar8;
}



/* Entry: 1018856d0; end: 1018856d3;  */

void FUN_1018856d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98f6d0;
  func_0x000107c61520(&UNK_10d98f6d0,&UNK_11040a758);
  puRam0000000112dcc9c0 = puVar1;
  return;
}



/* Entry: 1018856d4; end: 101885713;  */

void FUN_1018856d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dcc9c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98f6d0;
  func_0x000107c61520(&UNK_10d98f6d0,&UNK_11040a758);
  puRam0000000112dcc9c0 = puVar1;
  return;
}



/* Entry: 101885714; end: 10188587f;  */

int FUN_101885714(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101885790;
        goto LAB_101885774;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101885774:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_101885790:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101885880; end: 1018858b7;  */

void FUN_101885880(undefined8 param_1)

{
  if (lRam0000000112dcc9f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6550d4);
  return;
}



/* Entry: 1018858b8; end: 1018859df;  */

void FUN_1018858b8(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  long lStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670;
  puStack_140 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_138 = &UNK_10d98f7b8;
  lVar2 = 0x13f;
  puStack_130 = puStack_140;
  puStack_128 = puStack_140;
  func_0x000100b91d00();
  if (param_2 < 0x40) {
    lStack_120 = *(long *)(lVar2 + -8) + 0x40;
    lVar2 = 0x13f;
    func_0x0001046d90b0();
    if (param_2 < 0x40) {
      lStack_118 = *(long *)(lVar2 + -8) + 0x40;
      puStack_110 = puVar1 + 0x40;
      puStack_f0 = &UNK_10d98f7d0;
      puStack_e0 = PTR___sBoWV_11034d678 + 0x40;
      puStack_e8 = &UNK_10d98f7e8;
      puStack_d8 = &UNK_10d98f800;
      puStack_d0 = &UNK_10d98f800;
      puStack_c8 = &UNK_10d98f818;
      puStack_c0 = &UNK_10d98f830;
      puStack_b8 = &UNK_10d98f830;
      puStack_b0 = &UNK_10d98f830;
      puStack_a8 = &UNK_10d98f848;
      puStack_a0 = &UNK_10d98f800;
      puStack_98 = &UNK_10d98f800;
      puStack_90 = &UNK_10d98f860;
      puStack_88 = &UNK_10d98f860;
      puStack_80 = &UNK_10d98f848;
      puStack_78 = &UNK_10d98f800;
      puStack_70 = &UNK_10d98f800;
      puStack_68 = &UNK_10d98f860;
      puStack_60 = &UNK_10d98f860;
      puStack_58 = &UNK_10d98f860;
      puStack_50 = &UNK_10d98f860;
      puStack_48 = &UNK_10d98f800;
      puStack_40 = &UNK_10d98f860;
      puStack_38 = &UNK_10d98f860;
      puStack_108 = puStack_110;
      puStack_100 = puStack_110;
      puStack_f8 = puStack_110;
      func_0x000107c61630(param_1,0x100,0x22,&puStack_140,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 1018859e0; end: 1018859ef;  */

void FUN_1018859e0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1018859f0; end: 101885a1b;  */

/* WARNING: Possible PIC construction at 0x000101885a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101885a08) */

void FUN_1018859f0(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
    return;
  }
  return;
}



/* Entry: 101885a1c; end: 101885a33;  */

void FUN_101885a1c(long param_1)

{
  if (param_1 != 1) {
    func_0x000101885560();
  }
  return;
}



/* Entry: 101885a34; end: 101885a8f;  */

/* WARNING: Possible PIC construction at 0x000101885a48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101885a4c) */

void FUN_101885a34(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101885a90; end: 101885aeb;  */

undefined8 * FUN_101885a90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101885aec; end: 101885b27;  */

undefined8 * FUN_101885aec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101885b28; end: 101885bbb;  */

int FUN_101885b28(ulong *param_1,int param_2)

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



/* Entry: 101885bbc; end: 101885ce3;  */

void FUN_101885bbc(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_98 [72];
  
  func_0x0001000285a8(0x112dccc38,&UNK_10d98f900);
  lVar3 = 4;
  func_0x000107c602e8();
  lVar11 = 0;
  lVar1 = lVar3 + 0x38;
  do {
    uVar10 = *(ulong *)(lVar11 * 8 + 0x112dccc18);
    func_0x000107c6068c(auStack_98,*(undefined8 *)(lVar3 + 0x28));
    uVar4 = uVar10;
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar9 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar6 = uVar4 >> 6;
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
    uVar8 = 1L << (uVar4 & 0x3f);
    lVar5 = *(long *)(lVar3 + 0x30);
    if ((uVar8 & uVar7) != 0) {
      do {
        if ((int)*(undefined8 *)(lVar5 + uVar4 * 8) == (int)uVar10) goto LAB_101885c34;
        uVar4 = uVar4 + 1 & ~uVar9;
        uVar6 = uVar4 >> 6;
        uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
        uVar8 = 1L << (uVar4 & 0x3f);
      } while ((uVar8 & uVar7) != 0);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
    *(ulong *)(lVar5 + uVar4 * 8) = uVar10;
    if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101885ce4);
      (*pcVar2)();
    }
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_101885c34:
    lVar11 = lVar11 + 1;
    if (lVar11 == 4) {
      lRam0000000112dccbe8 = lVar3;
      return;
    }
  } while( true );
}



/* Entry: 101885ce4; end: 101885cf7;  */

/* WARNING: Removing unreachable block (ram,0x00010188490c) */
/* WARNING: Removing unreachable block (ram,0x00010188491c) */
/* WARNING: Removing unreachable block (ram,0x000101884a18) */
/* WARNING: Removing unreachable block (ram,0x000101884928) */
/* WARNING: Removing unreachable block (ram,0x000101884930) */
/* WARNING: Removing unreachable block (ram,0x0001018849a8) */
/* WARNING: Removing unreachable block (ram,0x0001018849b0) */
/* WARNING: Removing unreachable block (ram,0x0001018849b4) */
/* WARNING: Removing unreachable block (ram,0x0001018849b8) */
/* WARNING: Removing unreachable block (ram,0x0001018849c8) */

undefined * FUN_101885ce4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar6) {
    lVar1 = lVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112dccbc8;
    func_0x0001000285a8(0x112dccbc8,&UNK_10d98f8c0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 3) << 1;
  }
  uVar5 = 0x112dccbd0;
  func_0x0001000285a8(0x112dccbd0,&UNK_10d98f8c8);
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar6,uVar5);
  func_0x000107c6142c(param_1);
  return puVar3;
}



/* Entry: 101885cf8; end: 10188634f;  */

undefined1  [16] FUN_101885cf8(undefined8 param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined1 auVar23 [16];
  ulong uStack_d0;
  undefined *apuStack_c0 [10];
  
  uVar21 = *(ulong *)(param_2 + 0x10);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar21 != 0) {
    uVar20 = 0;
    do {
      puVar14 = (undefined8 *)(param_2 + 0x30 + uVar20 * 0x18);
      uVar10 = uVar20;
      while( true ) {
        if (*(ulong *)(param_2 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x101886344);
          (*pcVar4)();
        }
        uVar6 = puVar14[-2];
        uVar7 = puVar14[-1];
        uVar20 = uVar10 + 1;
        uVar16 = *puVar14;
        uVar19 = uVar16;
        func_0x000107c61174(uVar16);
        func_0x000107c61174();
        func_0x000107c61174();
        uVar8 = uVar7;
        func_0x000107c30b1c();
        if ((int)uVar8 == 3) break;
        func_0x000107c61170(uVar19);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar6);
        puVar14 = puVar14 + 3;
        uVar10 = uVar20;
        if (uVar21 == uVar20) goto LAB_101885e44;
      }
      puVar9 = puVar13;
      func_0x000107c61558();
      apuStack_c0[0] = puVar13;
      if (((ulong)puVar9 & 1) == 0) {
        func_0x0001018740dc(0,*(long *)(puVar13 + 0x10) + 1,1);
      }
      uVar11 = *(ulong *)(apuStack_c0[0] + 0x10);
      if (*(ulong *)(apuStack_c0[0] + 0x18) >> 1 <= uVar11) {
        func_0x0001018740dc(1 < *(ulong *)(apuStack_c0[0] + 0x18),uVar11 + 1,1);
      }
      *(ulong *)(apuStack_c0[0] + 0x10) = uVar11 + 1;
      *(undefined8 *)(apuStack_c0[0] + uVar11 * 0x18 + 0x20) = uVar6;
      *(undefined8 *)(apuStack_c0[0] + uVar11 * 0x18 + 0x28) = uVar7;
      *(undefined8 *)(apuStack_c0[0] + uVar11 * 0x18 + 0x30) = uVar16;
      puVar13 = apuStack_c0[0];
    } while (uVar21 - 1 != uVar10);
  }
LAB_101885e44:
  lVar17 = *(long *)(puVar13 + 0x10);
  if (lVar17 == 0) {
    func_0x000107c61574(puVar13);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    apuStack_c0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010134166c(0,lVar17,0);
    lVar18 = 0x20;
    do {
      puVar9 = apuStack_c0[0];
      func_0x000107c30b10(*(undefined8 *)(puVar13 + lVar18));
      uVar20 = *(ulong *)(puVar9 + 0x10);
      apuStack_c0[0] = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar20) {
        func_0x00010134166c(1 < *(ulong *)(puVar9 + 0x18),uVar20 + 1,1);
      }
      puVar9 = apuStack_c0[0];
      *(ulong *)(apuStack_c0[0] + 0x10) = uVar20 + 1;
      *(undefined8 *)(apuStack_c0[0] + uVar20 * 8 + 0x20) = param_1;
      lVar18 = lVar18 + 0x18;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    func_0x000107c61574(puVar13);
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(puVar9 + 0x10) != 0 && uVar21 != 0) {
    bVar3 = false;
    bVar2 = 0;
    bVar1 = 0;
    uStack_d0 = 0;
    do {
      if (*(ulong *)(param_2 + 0x10) <= uStack_d0) {
LAB_101886344:
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101886348);
        (*pcVar4)();
      }
      puVar14 = (undefined8 *)(param_2 + 0x20 + uStack_d0 * 0x18);
      uVar6 = *puVar14;
      uVar10 = puVar14[1];
      uVar19 = puVar14[2];
      uVar20 = uStack_d0 + 1;
      uVar7 = uVar19;
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      uVar11 = uVar10;
      func_0x000107c30b1c();
      bVar5 = (int)uVar11 == 3;
      if (!(bool)(bVar2 | bVar5 & bVar1 ^ 1)) {
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(uVar6);
        if (uVar20 == uVar21) break;
        puVar14 = (undefined8 *)(param_2 + 0x48 + uStack_d0 * 0x18);
        while( true ) {
          if (*(ulong *)(param_2 + 0x10) <= uVar20) goto LAB_101886344;
          uVar6 = puVar14[-2];
          uVar10 = puVar14[-1];
          uVar20 = uVar20 + 1;
          uVar19 = *puVar14;
          uVar7 = uVar19;
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          uVar11 = uVar10;
          func_0x000107c30b1c();
          if ((int)uVar11 != 3) break;
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(uVar6);
          puVar14 = puVar14 + 3;
          if (uVar21 == uVar20) goto LAB_10188630c;
        }
        bVar5 = false;
        bVar2 = 0;
        bVar3 = true;
        bVar1 = 1;
      }
      uStack_d0 = uVar20;
      lVar17 = *(long *)(puVar13 + 0x10);
      if ((lVar17 == 0) || ((bool)(bVar5 & (bVar1 | bVar2)))) {
        puVar12 = puVar13;
        func_0x000107c61558();
        if (((ulong)puVar12 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_1018848ec(0,lVar17 + 1,1,puVar13);
          puVar13 = puVar12;
        }
        uVar20 = *(ulong *)(puVar13 + 0x10);
        if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar20) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
          FUN_1018848ec(puVar13,uVar20 + 1,1);
        }
        bVar2 = 0;
        *(ulong *)(puVar13 + 0x10) = uVar20 + 1;
        *(undefined **)(puVar13 + uVar20 * 8 + 0x20) = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (bVar5) {
          bVar1 = 1;
          goto LAB_1018860d8;
        }
        bVar3 = false;
        bVar2 = 0;
        bVar1 = 0;
      }
      else if (bVar3 || bVar5) {
        bVar1 = bVar5 | bVar1;
LAB_1018860d8:
        if (lRam0000000112dccbe0 != -1) {
          func_0x000107c61568(0x112dccbe0,FUN_101885bbc);
        }
        lVar17 = lRam0000000112dccbe8;
        if (*(long *)(lRam0000000112dccbe8 + 0x10) != 0) {
          func_0x000107c6068c(apuStack_c0,*(undefined8 *)(lRam0000000112dccbe8 + 0x28));
          uVar20 = uVar11;
          func_0x000107c60690();
          func_0x000107c606a8();
          uVar15 = -1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
          uVar20 = uVar20 & (uVar15 ^ 0xffffffffffffffff);
          if ((*(ulong *)(lVar17 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0) {
            do {
              if ((int)uVar11 == (int)*(undefined8 *)(*(long *)(lVar17 + 0x30) + uVar20 * 8)) {
                bVar2 = 1;
                break;
              }
              uVar20 = uVar20 + 1 & ~uVar15;
            } while ((*(ulong *)(lVar17 + 0x38 + (uVar20 >> 6) * 8) >> (uVar20 & 0x3f) & 1) != 0);
          }
        }
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      uVar20 = *(ulong *)(puVar13 + 0x10);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      puVar12 = puVar13;
      func_0x000107c61558();
      if (((ulong)puVar12 & 1) == 0) {
        FUN_101885ce4();
      }
      if (uVar20 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10188634c);
        (*pcVar4)();
      }
      if (*(ulong *)(puVar13 + 0x10) < uVar20) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101886350);
        (*pcVar4)();
      }
      uVar22 = *(ulong *)(puVar13 + uVar20 * 8 + 0x18);
      uVar11 = uVar22;
      func_0x000107c61558();
      *(ulong *)(puVar13 + uVar20 * 8 + 0x18) = uVar22;
      uVar15 = uVar22;
      if ((uVar11 & 1) == 0) {
        uVar15 = 0;
        FUN_1018847d0(0,*(long *)(uVar22 + 0x10) + 1,1,uVar22);
        *(ulong *)(puVar13 + uVar20 * 8 + 0x18) = uVar15;
      }
      uVar11 = *(ulong *)(uVar15 + 0x10);
      uVar22 = uVar15;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar11) {
        uVar22 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
        FUN_1018847d0(uVar22,uVar11 + 1,1,uVar15);
        *(ulong *)(puVar13 + uVar20 * 8 + 0x18) = uVar22;
      }
      *(ulong *)(uVar22 + 0x10) = uVar11 + 1;
      lVar17 = uVar22 + uVar11 * 0x18;
      *(undefined8 *)(lVar17 + 0x20) = uVar6;
      *(ulong *)(lVar17 + 0x28) = uVar10;
      *(undefined8 *)(lVar17 + 0x30) = uVar19;
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar6);
    } while (uStack_d0 != uVar21);
  }
LAB_10188630c:
  func_0x000107c6142c(param_2);
  auVar23._8_8_ = puVar9;
  auVar23._0_8_ = puVar13;
  return auVar23;
}



/* Entry: 101886350; end: 101886367;  */

undefined * FUN_101886350(long param_1,long param_2,long param_3)

{
  double *pdVar1;
  undefined *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = (undefined *)0x0;
  if ((-1 < param_2) && (param_2 < *(long *)(param_3 + 0x10))) {
    dVar15 = *(double *)(param_3 + 0x20 + param_2 * 8);
    puVar8 = puVar2;
    if (param_2 + 1 < *(long *)(param_3 + 0x10)) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        dVar16 = *(double *)(param_3 + 0x20 + (param_2 + 1) * 8);
        do {
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar7 = uVar9;
          }
          while( true ) {
            if (uVar7 == uVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1018868c0);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar10 * 0x10);
            dVar14 = pdVar1[1];
            dVar12 = *pdVar1;
            dVar5 = dVar12;
            func_0x000107c61174(dVar12);
            dVar4 = dVar14;
            dVar13 = dVar12;
            func_0x000107c61174(dVar14);
            func_0x000107c30b10(dVar5);
            if ((dVar15 <= dVar13) && (func_0x000107c30b10(dVar5), dVar13 < dVar16)) break;
            uVar10 = uVar10 + 1;
            func_0x000107c61170(dVar4);
            func_0x000107c61170(dVar5);
            if (uVar9 == uVar10) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_101887734(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar11 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
            FUN_101887734(1 < *(ulong *)(puVar2 + 0x18),uVar11 + 1,1);
          }
          uVar7 = uVar10 + 1;
          *(ulong *)(puVar2 + 0x10) = uVar11 + 1;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x28) = dVar14;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x20) = dVar12;
        } while (uVar9 - 1 != uVar10);
      }
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          uVar11 = uVar7;
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar10 = uVar9;
          }
          while( true ) {
            if (uVar10 == uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1018868bc);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar11 * 0x10);
            dVar12 = pdVar1[1];
            dVar13 = *pdVar1;
            uVar7 = uVar11 + 1;
            dVar16 = dVar13;
            func_0x000107c61174(dVar13);
            dVar5 = dVar12;
            dVar4 = dVar13;
            func_0x000107c61174(dVar12);
            func_0x000107c30b10(dVar16);
            if (dVar15 <= dVar4) break;
            func_0x000107c61170(dVar5);
            func_0x000107c61170(dVar16);
            uVar11 = uVar7;
            if (uVar9 == uVar7) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            FUN_101887734(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar10 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
            FUN_101887734(1 < *(ulong *)(puVar2 + 0x18),uVar10 + 1,1);
          }
          *(ulong *)(puVar2 + 0x10) = uVar10 + 1;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x28) = dVar12;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x20) = dVar13;
        } while (uVar9 - 1 != uVar11);
      }
    }
  }
  return puVar8;
}



/* Entry: 101886368; end: 101886613;  */

undefined * FUN_101886368(long param_1,long param_2,long param_3)

{
  double *pdVar1;
  undefined *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = (undefined *)0x0;
  if ((-1 < param_2) && (param_2 < *(long *)(param_3 + 0x10))) {
    dVar15 = *(double *)(param_3 + 0x20 + param_2 * 8);
    puVar8 = puVar2;
    if (param_2 + 1 < *(long *)(param_3 + 0x10)) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        dVar16 = *(double *)(param_3 + 0x20 + (param_2 + 1) * 8);
        do {
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar7 = uVar9;
          }
          while( true ) {
            if (uVar7 == uVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101886614);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar10 * 0x10);
            dVar14 = pdVar1[1];
            dVar12 = *pdVar1;
            dVar5 = dVar12;
            func_0x000107c61174(dVar12);
            dVar4 = dVar14;
            dVar13 = dVar12;
            func_0x000107c61174(dVar14);
            func_0x000107c30b10(dVar5);
            if ((dVar15 <= dVar13) && (func_0x000107c30b10(dVar5), dVar13 < dVar16)) break;
            uVar10 = uVar10 + 1;
            func_0x000107c61170(dVar4);
            func_0x000107c61170(dVar5);
            if (uVar9 == uVar10) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010188779c(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar11 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
            func_0x00010188779c(1 < *(ulong *)(puVar2 + 0x18),uVar11 + 1,1);
          }
          uVar7 = uVar10 + 1;
          *(ulong *)(puVar2 + 0x10) = uVar11 + 1;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x28) = dVar14;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x20) = dVar12;
        } while (uVar9 - 1 != uVar10);
      }
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          uVar11 = uVar7;
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar10 = uVar9;
          }
          while( true ) {
            if (uVar10 == uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x101886610);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar11 * 0x10);
            dVar12 = pdVar1[1];
            dVar13 = *pdVar1;
            uVar7 = uVar11 + 1;
            dVar16 = dVar13;
            func_0x000107c61174(dVar13);
            dVar5 = dVar12;
            dVar4 = dVar13;
            func_0x000107c61174(dVar12);
            func_0x000107c30b10(dVar16);
            if (dVar15 <= dVar4) break;
            func_0x000107c61170(dVar5);
            func_0x000107c61170(dVar16);
            uVar11 = uVar7;
            if (uVar9 == uVar7) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            func_0x00010188779c(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar10 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
            func_0x00010188779c(1 < *(ulong *)(puVar2 + 0x18),uVar10 + 1,1);
          }
          *(ulong *)(puVar2 + 0x10) = uVar10 + 1;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x28) = dVar12;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x20) = dVar13;
        } while (uVar9 - 1 != uVar11);
      }
    }
  }
  return puVar8;
}



/* Entry: 101886614; end: 10188661f;  */

undefined * FUN_101886614(long param_1,long param_2,long param_3)

{
  double *pdVar1;
  undefined *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = (undefined *)0x0;
  if ((-1 < param_2) && (param_2 < *(long *)(param_3 + 0x10))) {
    dVar15 = *(double *)(param_3 + 0x20 + param_2 * 8);
    puVar8 = puVar2;
    if (param_2 + 1 < *(long *)(param_3 + 0x10)) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        dVar16 = *(double *)(param_3 + 0x20 + (param_2 + 1) * 8);
        do {
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar7 = uVar9;
          }
          while( true ) {
            if (uVar7 == uVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1018868c0);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar10 * 0x10);
            dVar14 = pdVar1[1];
            dVar12 = *pdVar1;
            dVar5 = dVar12;
            func_0x000107c61174(dVar12);
            dVar4 = dVar14;
            dVar13 = dVar12;
            func_0x000107c61174(dVar14);
            func_0x000107c30b10(dVar5);
            if ((dVar15 <= dVar13) && (func_0x000107c30b10(dVar5), dVar13 < dVar16)) break;
            uVar10 = uVar10 + 1;
            func_0x000107c61170(dVar4);
            func_0x000107c61170(dVar5);
            if (uVar9 == uVar10) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            (*(code *)0x1018877d0)(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar11 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
            (*(code *)0x1018877d0)(1 < *(ulong *)(puVar2 + 0x18),uVar11 + 1,1);
          }
          uVar7 = uVar10 + 1;
          *(ulong *)(puVar2 + 0x10) = uVar11 + 1;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x28) = dVar14;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x20) = dVar12;
        } while (uVar9 - 1 != uVar10);
      }
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          uVar11 = uVar7;
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar10 = uVar9;
          }
          while( true ) {
            if (uVar10 == uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1018868bc);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar11 * 0x10);
            dVar12 = pdVar1[1];
            dVar13 = *pdVar1;
            uVar7 = uVar11 + 1;
            dVar16 = dVar13;
            func_0x000107c61174(dVar13);
            dVar5 = dVar12;
            dVar4 = dVar13;
            func_0x000107c61174(dVar12);
            func_0x000107c30b10(dVar16);
            if (dVar15 <= dVar4) break;
            func_0x000107c61170(dVar5);
            func_0x000107c61170(dVar16);
            uVar11 = uVar7;
            if (uVar9 == uVar7) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            (*(code *)0x1018877d0)(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar10 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
            (*(code *)0x1018877d0)(1 < *(ulong *)(puVar2 + 0x18),uVar10 + 1,1);
          }
          *(ulong *)(puVar2 + 0x10) = uVar10 + 1;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x28) = dVar12;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x20) = dVar13;
        } while (uVar9 - 1 != uVar11);
      }
    }
  }
  return puVar8;
}



/* Entry: 101886620; end: 1018868bf;  */

undefined * FUN_101886620(long param_1,long param_2,long param_3,code *param_4)

{
  double *pdVar1;
  undefined *puVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = (undefined *)0x0;
  if ((-1 < param_2) && (param_2 < *(long *)(param_3 + 0x10))) {
    dVar15 = *(double *)(param_3 + 0x20 + param_2 * 8);
    puVar8 = puVar2;
    if (param_2 + 1 < *(long *)(param_3 + 0x10)) {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        dVar16 = *(double *)(param_3 + 0x20 + (param_2 + 1) * 8);
        do {
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar7 = uVar9;
          }
          while( true ) {
            if (uVar7 == uVar10) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1018868c0);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar10 * 0x10);
            dVar14 = pdVar1[1];
            dVar12 = *pdVar1;
            dVar5 = dVar12;
            func_0x000107c61174(dVar12);
            dVar4 = dVar14;
            dVar13 = dVar12;
            func_0x000107c61174(dVar14);
            func_0x000107c30b10(dVar5);
            if ((dVar15 <= dVar13) && (func_0x000107c30b10(dVar5), dVar13 < dVar16)) break;
            uVar10 = uVar10 + 1;
            func_0x000107c61170(dVar4);
            func_0x000107c61170(dVar5);
            if (uVar9 == uVar10) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            (*param_4)(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar11 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar11) {
            (*param_4)(1 < *(ulong *)(puVar2 + 0x18),uVar11 + 1,1);
          }
          uVar7 = uVar10 + 1;
          *(ulong *)(puVar2 + 0x10) = uVar11 + 1;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x28) = dVar14;
          *(double *)(puVar2 + uVar11 * 0x10 + 0x20) = dVar12;
        } while (uVar9 - 1 != uVar10);
      }
    }
    else {
      uVar9 = *(ulong *)(param_1 + 0x10);
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          uVar11 = uVar7;
          uVar10 = uVar7;
          if (uVar7 <= uVar9) {
            uVar10 = uVar9;
          }
          while( true ) {
            if (uVar10 == uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1018868bc);
              (*pcVar3)();
            }
            pdVar1 = (double *)(param_1 + 0x20 + uVar11 * 0x10);
            dVar12 = pdVar1[1];
            dVar13 = *pdVar1;
            uVar7 = uVar11 + 1;
            dVar16 = dVar13;
            func_0x000107c61174(dVar13);
            dVar5 = dVar12;
            dVar4 = dVar13;
            func_0x000107c61174(dVar12);
            func_0x000107c30b10(dVar16);
            if (dVar15 <= dVar4) break;
            func_0x000107c61170(dVar5);
            func_0x000107c61170(dVar16);
            uVar11 = uVar7;
            if (uVar9 == uVar7) {
              return puVar2;
            }
          }
          puVar6 = puVar2;
          func_0x000107c61558();
          if (((ulong)puVar6 & 1) == 0) {
            (*param_4)(0,*(long *)(puVar2 + 0x10) + 1,1);
          }
          uVar10 = *(ulong *)(puVar2 + 0x10);
          if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
            (*param_4)(1 < *(ulong *)(puVar2 + 0x18),uVar10 + 1,1);
          }
          *(ulong *)(puVar2 + 0x10) = uVar10 + 1;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x28) = dVar12;
          *(double *)(puVar2 + uVar10 * 0x10 + 0x20) = dVar13;
        } while (uVar9 - 1 != uVar11);
      }
    }
  }
  return puVar8;
}



/* Entry: 1018868c0; end: 1018868f7;  */

undefined8 * FUN_1018868c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  return param_1;
}



/* Entry: 1018868f8; end: 101886947;  */

undefined1  [16] FUN_1018868f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = param_2;
  func_0x000107c30d7c(param_2);
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5ee30();
  func_0x000107c61170(param_2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 101886948; end: 101886977;  */

/* WARNING: Possible PIC construction at 0x00010188695c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101886960) */

void FUN_101886948(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 101886978; end: 1018869eb;  */

undefined8 * FUN_101886978(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1018869ec; end: 101886a37;  */

undefined8 * FUN_1018869ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 101886a38; end: 101886c6b;  */

int FUN_101886a38(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101886c6c; end: 101886fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101886c6c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined *apuStack_78 [3];
  
  func_0x000107c61428(unaff_x20 + 0x18,apuStack_78,0x20,0);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(lVar9 + 0x10);
  func_0x000107c61434(param_2);
  if (lVar7 != 0) {
    func_0x000107c61434(lVar9);
    lVar7 = param_1;
    uVar4 = param_2;
    FUN_101887214(param_1,param_2,param_3,param_4);
    if ((uVar4 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar7 * 0x10);
      puVar6 = (undefined *)*puVar1;
      puVar12 = (undefined *)puVar1[1];
      func_0x000107c61434(puVar6);
      func_0x000107c61434(puVar12);
      func_0x000107c614a8(apuStack_78);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(lVar9);
      goto LAB_101886fa0;
    }
    func_0x000107c6142c(lVar9);
  }
  func_0x000107c614a8(apuStack_78);
  uVar8 = *(ulong *)(unaff_x20 + 0x10);
  lVar7 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c3d32c();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar3 = 0;
  func_0x00010468506c(0);
  uVar4 = uVar8;
  func_0x000107c5fc54(uVar8,uVar3);
  func_0x000107c61170(uVar8);
  if (uVar4 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    if (uVar8 != 0) goto LAB_101886da8;
LAB_101886f00:
    func_0x000107c6142c();
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar8 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar8 = uVar4;
    }
    func_0x000107c60480();
    if (uVar8 == 0) goto LAB_101886f00;
LAB_101886da8:
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001018740dc(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101886fcc);
      (*pcVar2)();
    }
    uVar13 = 0;
    do {
      puVar12 = apuStack_78[0];
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar4 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar13;
        FUN_101887b4c();
      }
      uVar3 = *(undefined8 *)(uVar5 + _DAT_11308c0c0);
      uVar10 = *(undefined8 *)(uVar5 + _DAT_11308c0c8);
      uVar11 = *(undefined8 *)(uVar5 + _DAT_11308c0d0);
      func_0x000107c61174(uVar11);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar12 + 0x10);
      apuStack_78[0] = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar5) {
        func_0x0001018740dc(1 < *(ulong *)(puVar12 + 0x18),uVar5 + 1,1);
      }
      puVar12 = apuStack_78[0];
      uVar13 = uVar13 + 1;
      *(ulong *)(apuStack_78[0] + 0x10) = uVar5 + 1;
      *(undefined8 *)(apuStack_78[0] + uVar5 * 0x18 + 0x20) = uVar3;
      *(undefined8 *)(apuStack_78[0] + uVar5 * 0x18 + 0x28) = uVar10;
      *(undefined8 *)(apuStack_78[0] + uVar5 * 0x18 + 0x30) = uVar11;
    } while (uVar8 != uVar13);
    func_0x000107c6142c(uVar4);
  }
  puVar6 = puVar12;
  func_0x000107c61434(puVar12);
  FUN_101888eb4();
  func_0x000107c6142c(puVar12);
  func_0x000107c61428(unaff_x20 + 0x18,apuStack_78,0x21,0);
  func_0x000107c61434(puVar12);
  func_0x000107c61434(puVar6);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61558(uVar3);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000000000000;
  FUN_10188730c(puVar6,puVar12,param_1,param_2,param_3,param_4,uVar3);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
  func_0x000107c614a8(apuStack_78);
LAB_101886fa0:
  auVar14._8_8_ = puVar12;
  auVar14._0_8_ = puVar6;
  return auVar14;
}



/* Entry: 101886fcc; end: 10188703f;  */

void FUN_101886fcc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fb58(auStack_88,uVar1,uVar3);
  func_0x000107c60690(uVar2);
  func_0x000107c60690(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 101887040; end: 101887083;  */

void FUN_101887040(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  func_0x000107c5fb58(param_1,*unaff_x20,unaff_x20[1]);
  func_0x000107c60690(uVar1);
  func_0x000107c60690(uVar2);
  return;
}



/* Entry: 101887084; end: 1018870f3;  */

void FUN_101887084(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  func_0x000107c6068c(auStack_88);
  func_0x000107c5fb58(auStack_88,uVar1,uVar3);
  func_0x000107c60690(uVar2);
  func_0x000107c60690(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1018870f4; end: 101887173;  */

bool FUN_1018870f4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar2 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  if (uVar4 == *param_2 && param_1[1] == param_2[1]) {
    if (uVar2 != uVar1) {
      return false;
    }
  }
  else {
    func_0x000107c605b8();
    if ((uVar4 & 1) == 0) {
      return false;
    }
    if (uVar2 != uVar1) {
      return false;
    }
  }
  return uVar5 == uVar3;
}



/* Entry: 101887174; end: 1018871e7;  */

long FUN_101887174(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10188559c();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  return unaff_x20;
}



/* Entry: 1018871e8; end: 101887213;  */

void FUN_1018871e8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101887214; end: 1018872a7;  */

undefined1  [16] FUN_101887214(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_88 [40];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_88,param_1,param_2);
  func_0x000107c60690(param_3);
  uVar7 = param_4;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = uVar7 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    lVar8 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar8 + uVar7 * 0x20);
      uVar4 = *puVar1;
      uVar2 = puVar1[2];
      uVar3 = puVar1[3];
      if (((uVar4 == param_1 && puVar1[1] == param_2) ||
          (func_0x000107c605b8(uVar4,puVar1[1],param_1,param_2,0), (uVar4 & 1) != 0)) &&
         (uVar2 == param_3 && uVar3 == param_4)) {
        uVar5 = 1;
        goto LAB_101887518;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_101887518:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar7;
  return auVar9;
}



/* Entry: 1018872a8; end: 10188730b;  */

void FUN_1018872a8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = param_1;
  func_0x000107c60690(param_1);
  func_0x000107c606a8();
  FUN_101887538(param_1,uVar1);
  return;
}



/* Entry: 10188730c; end: 101887537;  */

/* WARNING: Possible PIC construction at 0x0001018873e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001018873ec) */

void FUN_10188730c(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar4 = param_3;
  uVar5 = param_4;
  FUN_101887214(param_3,param_4,param_5,param_6);
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101887410);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_101884260(lVar6,param_7 & 1);
    uVar8 = param_4;
    FUN_101887214(param_3,param_4,param_5,param_6);
    lVar4 = param_3;
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(&UNK_11040ac08);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018873cc);
      (*pcVar3)();
    }
  }
  else if ((param_7 & 1) == 0) {
    FUN_10188759c();
    lVar6 = *unaff_x20;
    goto joined_r0x000101887424;
  }
  lVar6 = *unaff_x20;
joined_r0x000101887424:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar4 * 0x10);
    uVar2 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
    return;
  }
  FUN_101884210();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_4);
  return;
}



/* Entry: 101887538; end: 10188759b;  */

void FUN_101887538(int param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if ((int)*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 10188759c; end: 101887733;  */

void FUN_10188759c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  func_0x0001000285a8(0x112dccb80,&UNK_10d98faa0);
  lVar13 = *unaff_x20;
  lVar7 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar13 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar13 + 0x40);
    if (uVar8 == 0) goto LAB_10188767c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar14 << 6;
        lVar12 = uVar10 * 0x20;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar4 = puVar2[1];
        lVar11 = uVar10 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar12);
        uVar16 = puVar2[3];
        uVar15 = puVar2[2];
        puVar5 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar11);
        uVar18 = puVar5[1];
        uVar17 = *puVar5;
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar3[3] = uVar16;
        puVar3[2] = uVar15;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar11);
        puVar2[1] = uVar18;
        *puVar2 = uVar17;
        func_0x000107c61434();
        func_0x000107c61434(uVar17);
        func_0x000107c61434(uVar17,uVar18);
        if (uVar8 != 0) break;
LAB_10188767c:
        do {
          lVar11 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101887734);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_101887708;
          uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar14 = lVar11;
      }
    } while( true );
  }
LAB_101887708:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 101887734; end: 10188793b;  */

void FUN_101887734(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000101887a44();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10188793c; end: 101887b4b;  */

undefined *
FUN_10188793c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101887a44);
        (*pcVar2)();
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
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 4) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x10 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar6;
}



/* Entry: 101887b4c; end: 1018881bb;  */

ulong FUN_101887b4c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101887c1c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101887c20);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010468506c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x00010468506c(0);
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
  func_0x000107c5fb78(0xd000000000000016,0x800000010efbc870);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101887ce8);
  (*pcVar2)();
}



/* Entry: 1018881bc; end: 10188836f;  */

ulong FUN_1018881bc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018882a0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1018882a4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b9030;
    func_0x000107c61168(PTR_PTR_1126b9030);
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
    puVar4 = PTR_PTR_1126b9030;
    func_0x000107c61168(PTR_PTR_1126b9030);
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
  func_0x0001018892d8(0);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101888370);
  (*pcVar2)();
}



/* Entry: 101888370; end: 101888eb3;  */

ulong FUN_101888370(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101888440);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101888444);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010467de68(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar4 = 0;
    func_0x00010467de68(0);
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
  func_0x000107c5fb78(0xd000000000000017,0x800000010efbc850);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10188850c);
  (*pcVar2)();
}



/* Entry: 101888eb4; end: 1018890db;  */

undefined * FUN_101888eb4(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  
  puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar3 = puVar12[-2];
      uVar4 = puVar12[-1];
      uVar13 = *puVar12;
      func_0x000107c61174(uVar13);
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = uVar4;
      func_0x000107c30b1c();
      uVar6 = uVar5;
      FUN_1018872a8();
      uVar9 = (ulong)~(uint)param_2 & 1;
      if (SCARRY8(*(long *)(puVar1 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018890c8);
        (*pcVar2)();
      }
      uVar8 = param_2;
      if (*(long *)(puVar1 + 0x18) < (long)(*(long *)(puVar1 + 0x10) + uVar9)) {
        uVar8 = 1;
        FUN_101884540();
        uVar6 = uVar5;
        FUN_1018872a8();
        if (((uint)param_2 & 1) != ((uint)uVar8 & 1)) {
          func_0x000107c60624(&UNK_11079a158);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018890dc);
          (*pcVar2)();
        }
      }
      if ((param_2 & 1) == 0) {
        lVar14 = 0x112dcc448;
        func_0x0001000285a8(0x112dcc448,&UNK_10d98f8d0);
        uVar8 = 0;
        func_0x000107c613fc();
        *(undefined8 *)(lVar14 + 0x18) = 2;
        *(undefined8 *)(lVar14 + 0x10) = 1;
        *(undefined8 *)(lVar14 + 0x20) = uVar3;
        *(ulong *)(lVar14 + 0x28) = uVar4;
        *(undefined8 *)(lVar14 + 0x30) = uVar13;
        *(ulong *)(puVar1 + (uVar6 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar1 + (uVar6 >> 6) * 8 + 0x40) | 1L << (uVar6 & 0x3f);
        *(ulong *)(*(long *)(puVar1 + 0x30) + uVar6 * 8) = uVar5;
        *(long *)(*(long *)(puVar1 + 0x38) + uVar6 * 8) = lVar14;
        if (SCARRY8(*(long *)(puVar1 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1018890cc);
          (*pcVar2)();
        }
        *(long *)(puVar1 + 0x10) = *(long *)(puVar1 + 0x10) + 1;
      }
      else {
        lVar14 = *(long *)(puVar1 + 0x38);
        uVar10 = *(ulong *)(lVar14 + uVar6 * 8);
        uVar5 = uVar10;
        func_0x000107c61558();
        *(ulong *)(lVar14 + uVar6 * 8) = uVar10;
        uVar9 = uVar10;
        if ((uVar5 & 1) == 0) {
          uVar8 = *(long *)(uVar10 + 0x10) + 1;
          uVar9 = 0;
          FUN_1018847d0(0,uVar8,1,uVar10);
          *(ulong *)(lVar14 + uVar6 * 8) = uVar9;
        }
        uVar10 = *(ulong *)(uVar9 + 0x10);
        uVar5 = uVar10 + 1;
        uVar7 = uVar9;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar10) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
          uVar8 = uVar5;
          FUN_1018847d0(uVar7,uVar5,1,uVar9);
          *(ulong *)(lVar14 + uVar6 * 8) = uVar7;
        }
        *(ulong *)(uVar7 + 0x10) = uVar5;
        lVar14 = uVar7 + uVar10 * 0x18;
        *(undefined8 *)(lVar14 + 0x20) = uVar3;
        *(ulong *)(lVar14 + 0x28) = uVar4;
        *(undefined8 *)(lVar14 + 0x30) = uVar13;
      }
      puVar12 = puVar12 + 3;
      lVar11 = lVar11 + -1;
      param_2 = uVar8;
    } while (lVar11 != 0);
  }
  return puVar1;
}



/* Entry: 1018890dc; end: 1018890fb;  */

void FUN_1018890dc(void)

{
  func_0x000107c61168(&PTR_PTR_112dccc80);
  return;
}



/* Entry: 1018890fc; end: 101889127;  */

long FUN_1018890fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101889128; end: 10188912f;  */

void FUN_101889128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101889130; end: 101889163;  */

undefined8 * FUN_101889130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 101889164; end: 1018891bf;  */

undefined8 * FUN_101889164(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 1018891c0; end: 1018891fb;  */

undefined8 * FUN_1018891c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 1018891fc; end: 101889297;  */

int FUN_1018891fc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101889298; end: 10188931b;  */

void FUN_101889298(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dccce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d98fa00;
  func_0x000107c61520(&UNK_10d98fa00,&UNK_11040ac08);
  puRam0000000112dccce8 = puVar1;
  return;
}



/* Entry: 10188931c; end: 101889323;  */

void FUN_10188931c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 101889324; end: 10188937f;  */

/* WARNING: Possible PIC construction at 0x000101889338: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010188933c) */

void FUN_101889324(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 101889380; end: 1018893db;  */

undefined8 * FUN_101889380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1018893dc; end: 101889417;  */

undefined8 * FUN_1018893dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101889418; end: 1018894af;  */

int FUN_101889418(ulong *param_1,int param_2)

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


