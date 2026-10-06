/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1019f1418; end: 1019f14df; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider requestLocationWithTimeout:desiredAccuracy:observerAttributedFeature:callbackQueue:callback:] */

void FUN_1019f1418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11042a768;
  func_0x000107c613fc(&UNK_11042a768,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_7;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_2);
  FUN_1019f2a44(param_1,param_4,param_6,FUN_1019f1ec4,puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1019f14e0; end: 1019f15eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1019f14e0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112de9040);
  func_0x000107c6157c(uVar5);
  func_0x0001000c74f0(&uStack_58);
  func_0x000107c61574(uVar5);
  uVar7 = uStack_58 & 0xffffffffffffff8;
  if (uStack_58 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < uStack_58) {
      uVar6 = uStack_58;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  do {
    uVar4 = uVar2;
    if (uVar6 == uVar4) break;
    if ((uStack_58 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f15d8);
        (*pcVar1)();
      }
      uVar2 = *(ulong *)(uStack_58 + uVar4 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar2 = uVar4;
      FUN_1019f1f40(uVar4,uStack_58);
    }
    if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f15a4);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c5e0b4();
    func_0x000107c61170(uVar2);
    uVar2 = uVar4 + 1;
  } while ((int)uVar3 == 0);
  func_0x000107c6142c(uStack_58);
  return uVar6 != uVar4;
}



/* Entry: 1019f15ec; end: 1019f1847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f15ec(ulong *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_a0 [4];
  char cStack_9c;
  undefined8 uStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  uVar7 = *(undefined8 *)(param_2 + _DAT_112de9050);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(auStack_a0);
  func_0x000107c61574(uVar7);
  if (cStack_9c != '\x02') {
    uVar9 = *param_1;
    uVar11 = uVar9 & 0xffffffffffffff8;
    if (uVar9 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar8 = uVar11;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar8 = uVar9;
      }
      func_0x000107c60480();
    }
    uVar10 = 0;
    lVar6 = 0x60;
    do {
      if (uVar8 == uVar10) goto LAB_1019f16dc;
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f1830);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(uVar9 + uVar10 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar10;
        FUN_1019f1f40(uVar10,uVar9);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f16d8);
        (*pcVar3)();
      }
      uVar5 = uVar4;
      func_0x000107c5e0b0();
      func_0x000107c61170(uVar4);
      uVar10 = uVar10 + 1;
    } while ((int)uVar5 == 0);
    lVar6 = 0x58;
LAB_1019f16dc:
    lVar1 = param_2 + _DAT_112de9008;
    uVar7 = *(undefined8 *)(lVar1 + 0x18);
    lVar2 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar7);
    (**(code **)(lVar2 + lVar6))(uVar7,lVar2);
    if (uVar9 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar8 = uVar11;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar8 = uVar9;
      }
      func_0x000107c60480();
    }
    uVar10 = 0;
    do {
      uVar4 = uVar10;
      if (uVar8 == uVar4) break;
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f1834);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(uVar9 + uVar4 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar10 = uVar4;
        FUN_1019f1f40(uVar4,uVar9);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f1794);
        (*pcVar3)();
      }
      uVar5 = uVar10;
      func_0x000107c5e0b4();
      func_0x000107c61170(uVar10);
      uVar10 = uVar4 + 1;
    } while ((int)uVar5 == 0);
    param_2 = param_2 + _DAT_112de9090;
    func_0x000107c61428(param_2,auStack_78,0,0);
    if (*(long *)(param_2 + 0x18) != 0) {
      func_0x0001019f31bc(param_2,auStack_a0);
      func_0x0001000a8868(auStack_a0,uStack_88);
      (**(code **)(lStack_80 + 8))(uVar8 != uVar4,uStack_88,lStack_80);
      func_0x0001000834e4(auStack_a0);
    }
  }
  return;
}



/* Entry: 1019f1848; end: 1019f18a3;  */

void FUN_1019f1848(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1019f18a4(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1019f18a4; end: 1019f1cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f18a4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x0001019f3ea0();
  lVar9 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar9 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)&puStack_80 - (lVar1 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112de9098);
  puVar2 = &UNK_11042a880;
  func_0x000107c613fc(&UNK_11042a880,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x0001019f32bc(param_1,lVar8,0x1019f3ea0);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar7 = uVar5 + 0x18 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &UNK_11042a8d0;
  func_0x000107c613fc(&UNK_11042a8d0,uVar7 + lVar1,uVar5 | 7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  func_0x0001019f3238(lVar8,puVar3 + uVar7,0x1019f3ea0);
  pcStack_60 = FUN_1019f3208;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11042a8e8;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c4e524(uVar6);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1019f1cfc; end: 1019f1d5b; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider init] */

void FUN_1019f1cfc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NextGenLocationServicesImplementation.UserLocationProvider",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f1d28);
  (*pcVar1)();
}



/* Entry: 1019f1d5c; end: 1019f1ea3; -[_TtC37NextGenLocationServicesImplementation20UserLocationProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001019f1dc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f1e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f1e58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019f1e2c) */
/* WARNING: Removing unreachable block (ram,0x0001019f1dcc) */
/* WARNING: Removing unreachable block (ram,0x0001019f1e5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f1d5c(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112de9008);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112de9010));
  func_0x0001000834e4(param_1 + _DAT_112de9018);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112de9020));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112de9028));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112de9030));
  return;
}



/* Entry: 1019f1ea4; end: 1019f1ec3;  */

void FUN_1019f1ea4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f07f8);
  return;
}



/* Entry: 1019f1ec4; end: 1019f1ed3;  */

void FUN_1019f1ec4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001019f1ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1019f1ed4; end: 1019f1f3f;  */

void FUN_1019f1ed4(void)

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
    func_0x0001019f327c(0,0x112de90c8,&PTR_PTR_1126c1818);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112de90d0;
  plVar5 = (long *)&UNK_10d9b41e0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1019f1f40; end: 1019f2103;  */

ulong FUN_1019f1f40(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2024);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2028);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c1818;
    func_0x000107c61168(PTR_PTR_1126c1818);
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
    puVar4 = PTR_PTR_1126c1818;
    func_0x000107c61168(PTR_PTR_1126c1818);
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
  func_0x0001019f327c(0,0x112de90c8,&PTR_PTR_1126c1818);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2104);
  (*pcVar2)();
}



/* Entry: 1019f2104; end: 1019f2173;  */

void FUN_1019f2104(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_1019f2174(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 1019f2174; end: 1019f229b;  */

ulong FUN_1019f2174(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f229c);
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
  FUN_1019f229c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f2298);
      (*pcVar1)();
    }
    FUN_1019f231c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1019f229c; end: 1019f231b;  */

undefined * FUN_1019f229c(undefined *param_1,undefined *param_2)

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
    FUN_1019f1ed4();
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



/* Entry: 1019f231c; end: 1019f24e3;  */

long FUN_1019f231c(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2430);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2434);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001019f327c(0,0x112de90c8,&PTR_PTR_1126c1818);
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
      func_0x0001019f327c(0,0x112de90c8,&PTR_PTR_1126c1818);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f242c);
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



/* Entry: 1019f24e4; end: 1019f2533;  */

/* WARNING: Removing unreachable block (ram,0x0001019f21a8) */
/* WARNING: Removing unreachable block (ram,0x0001019f21cc) */
/* WARNING: Removing unreachable block (ram,0x0001019f21b0) */
/* WARNING: Removing unreachable block (ram,0x0001019f2298) */
/* WARNING: Removing unreachable block (ram,0x0001019f21bc) */
/* WARNING: Removing unreachable block (ram,0x0001019f21c4) */
/* WARNING: Removing unreachable block (ram,0x0001019f2208) */
/* WARNING: Removing unreachable block (ram,0x0001019f221c) */
/* WARNING: Removing unreachable block (ram,0x0001019f2228) */
/* WARNING: Removing unreachable block (ram,0x0001019f2230) */

ulong FUN_1019f24e4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_1019f229c(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    FUN_1019f231c(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f2298);
  (*pcVar1)();
}



/* Entry: 1019f2534; end: 1019f2623;  */

undefined1  [16] FUN_1019f2534(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar8 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar7 = uVar8;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
  }
  uVar6 = 0;
  do {
    if (uVar7 == uVar6) {
      uVar6 = 0;
      uVar5 = 1;
LAB_1019f25e4:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar6;
      return auVar9;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f260c);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar6;
      FUN_1019f1f40(uVar6,param_1);
    }
    uVar4 = uVar3;
    func_0x000107c49cec();
    func_0x000107c61170(uVar3);
    if ((uVar4 & 1) != 0) {
      uVar5 = 0;
      goto LAB_1019f25e4;
    }
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f2610);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 1019f2624; end: 1019f2873;  */

void FUN_1019f2624(ulong *param_1,uint param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long unaff_x21;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  uVar8 = *param_1;
  uVar4 = uVar8;
  FUN_1019f2534();
  if (unaff_x21 == 0) {
    if ((param_2 & 0xff) == 1) {
      if (uVar8 >> 0x3e != 0) {
        uVar4 = uVar8 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar8) {
          uVar4 = uVar8;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar9 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f268c);
        (*pcVar2)();
      }
      while( true ) {
        uVar9 = uVar9 + 1;
        if (uVar8 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar5 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar5 = uVar8;
          }
          func_0x000107c60480();
        }
        if (uVar9 == uVar5) break;
        if ((uVar8 & 0xc000000000000001) == 0) {
          if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f283c);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2840);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar8 + uVar9 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar9;
          FUN_1019f1f40(uVar9,uVar8);
        }
        uVar10 = uVar5;
        func_0x000107c49cec();
        func_0x000107c61170(uVar5);
        if ((uVar10 & 1) == 0) {
          if (uVar4 != uVar9) {
            if ((uVar8 & 0xc000000000000001) == 0) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2850);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2854);
                (*pcVar2)();
              }
              if (uVar5 <= uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2858);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
              uVar10 = *(ulong *)(uVar8 + 0x20 + uVar9 * 8);
              func_0x000107c61174();
              func_0x000107c61174();
            }
            else {
              uVar5 = uVar4;
              FUN_1019f1f40(uVar4,uVar8);
              uVar10 = uVar9;
              FUN_1019f1f40(uVar9,uVar8);
            }
            uVar11 = uVar8;
            func_0x000107c61550();
            if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
              FUN_1019f24e4();
              uVar7 = (uint)(uVar8 >> 0x3e) & 1;
            }
            else {
              uVar7 = 0;
            }
            uVar11 = uVar8 & 0xffffffffffffff8;
            lVar1 = uVar11 + uVar4 * 8;
            uVar6 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar10;
            func_0x000107c61170(uVar6);
            if (((long)uVar8 < 0) || (uVar7 != 0)) {
              FUN_1019f24e4();
              uVar11 = uVar8 & 0xffffffffffffff8;
            }
            if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2814);
              (*pcVar2)();
            }
            if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f284c);
              (*pcVar2)();
            }
            lVar1 = uVar11 + uVar9 * 8;
            uVar6 = *(undefined8 *)(lVar1 + 0x20);
            *(ulong *)(lVar1 + 0x20) = uVar5;
            func_0x000107c61170(uVar6);
            *param_1 = uVar8;
          }
          bVar3 = SCARRY8(uVar4,1);
          uVar4 = uVar4 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2848);
            (*pcVar2)();
          }
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1019f2844);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 1019f2874; end: 1019f297f;  */

void FUN_1019f2874(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1019f295c);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  func_0x0001019f327c(0,0x112de90c8,&PTR_PTR_1126c1818);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1019f2960);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1019f2978);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1019f297c);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1019f2980);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1019f2980; end: 1019f2a43;  */

/* WARNING: Removing unreachable block (ram,0x0001019f297c) */

void FUN_1019f2980(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2a20);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2a38);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2a3c);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2a44);
      (*pcVar3)();
    }
    func_0x0001019f2434(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f295c);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    func_0x0001019f327c(0,0x112de90c8,&PTR_PTR_1126c1818);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2960);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2978);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f297c);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1019f2a40);
  (*pcVar3)();
}



/* Entry: 1019f2a44; end: 1019f3007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f2a44(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long *plVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  double dVar14;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined *puStack_d8;
  undefined *apuStack_d0 [3];
  long *plStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar1 = 0;
  dVar14 = param_1;
  func_0x000107c5f7fc();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar12 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_e8 = lVar12;
  func_0x000107c5f824();
  lStack_f0 = *(long *)(lVar2 + -8);
  lStack_e0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_f0 + 0x40));
  lVar2 = _DAT_112de9048;
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112de9048);
  func_0x000107c6157c(uVar10);
  func_0x0001000c74f0(&puStack_a8);
  func_0x000107c61574(uVar10);
  if (puStack_a8 != (undefined *)0x1) {
    uVar10 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c6157c(uVar10);
    func_0x0001000c74f0(&puStack_a8);
    func_0x000107c61574(uVar10);
    if (puStack_a8 != (undefined *)0x0) {
      puVar3 = &UNK_11042a790;
      func_0x000107c613fc(&UNK_11042a790,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = param_4;
      *(undefined8 *)(puVar3 + 0x18) = param_5;
      pcStack_88 = FUN_1019f3008;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000b0c7c;
      puStack_90 = &UNK_11042a7a8;
      ppuVar7 = &puStack_a8;
      puStack_80 = puVar3;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c6157c(param_5);
      func_0x000107c5f808(lVar12);
      apuStack_d0[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar10 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar6 = uVar10;
      func_0x0001001c7f30();
      lVar2 = lStack_e8;
      func_0x000107c60264(lStack_e8,apuStack_d0,uVar10,uVar6,lVar1,param_5);
      func_0x000107c5ffe8(0,lVar12,lVar2,ppuVar7);
      func_0x000107c60bd0(ppuVar7);
      (**(code **)(lVar11 + 8))(lVar2,lVar1);
      (**(code **)(lStack_f0 + 8))(lVar12,lStack_e0);
      func_0x000107c61574(puStack_80);
      return;
    }
  }
  lStack_100 = lVar12;
  lStack_f8 = lVar11;
  func_0x0001019f31bc(unaff_x20 + _DAT_112de9008,apuStack_d0);
  puVar3 = (undefined *)0x0;
  func_0x0001019f020c();
  func_0x000107c613fc();
  lVar2 = lStack_b0;
  plVar4 = plStack_b8;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(long *)(puVar3 + 0x10) = param_2;
  func_0x0001000a8868(apuStack_d0,plStack_b8);
  pcVar13 = *(code **)(lVar2 + 0x40);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_5);
  (*pcVar13)(plVar4,lVar2);
  if (plVar4 == (long *)0x0) {
LAB_1019f2d34:
    func_0x0001000a8868(apuStack_d0,plStack_b8);
    plVar4 = plStack_b8;
    (**(code **)(lStack_b0 + 0x38))(plStack_b8,lStack_b0);
    puVar5 = &UNK_11042a7e0;
    func_0x000107c613fc(&UNK_11042a7e0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,puVar3);
    uVar10 = 0x1019f3048;
    puVar8 = puVar5;
    (**(code **)(*plVar4 + 0x60))();
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar5);
    uVar6 = *(undefined8 *)(puVar3 + 0x38);
    *(undefined8 *)(puVar3 + 0x38) = uVar10;
    *(undefined **)(puVar3 + 0x40) = puVar8;
    func_0x000107c615e8(uVar6);
    pcStack_88 = (code *)0x1019f3050;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100fef460;
    puStack_90 = &UNK_11042a7f8;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar7);
    puVar5 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    func_0x000107c6157c(puVar3);
    func_0x000107c5ca5c(param_1);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puStack_80);
    puVar8 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
    func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
    func_0x000107c4c190();
    func_0x000107c61180();
    func_0x000107c3d8e0();
    func_0x000107c61170(puVar8);
    uVar10 = *(undefined8 *)(puVar3 + 0x30);
    *(undefined **)(puVar3 + 0x30) = puVar5;
    func_0x000107c61574(puVar3);
    func_0x000107c61170(uVar10);
  }
  else {
    func_0x000107c44f00();
    lVar2 = lStack_f8;
    if (param_2 == 0) {
      if (100.0 <= dVar14) {
LAB_1019f2d2c:
        func_0x000107c61170(plVar4);
        goto LAB_1019f2d34;
      }
    }
    else if ((dVar14 == INFINITY) || (NAN(dVar14))) goto LAB_1019f2d2c;
    puVar5 = &UNK_11042a830;
    func_0x000107c613fc(&UNK_11042a830,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = param_4;
    *(undefined8 *)(puVar5 + 0x18) = param_5;
    *(long **)(puVar5 + 0x20) = plVar4;
    pcStack_88 = (code *)0x1019f3058;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_11042a848;
    ppuVar7 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c6157c(param_5);
    func_0x000107c61174(plVar4);
    lVar12 = lStack_100;
    plVar9 = plVar4;
    func_0x000107c5f808(lStack_100);
    puStack_d8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar10 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar6 = uVar10;
    func_0x0001001c7f30();
    lVar11 = lStack_e8;
    func_0x000107c60264(lStack_e8,&puStack_d8,uVar10,uVar6,lVar1,plVar9);
    func_0x000107c5ffe8(0,lVar12,lVar11,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(plVar4);
    (**(code **)(lVar2 + 8))(lVar11,lVar1);
    (**(code **)(lStack_f0 + 8))(lVar12,lStack_e0);
    func_0x000107c61574(puStack_80);
  }
  func_0x0001000834e4(apuStack_d0);
  return;
}



/* Entry: 1019f3008; end: 1019f302b;  */

void FUN_1019f3008(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 1019f302c; end: 1019f3063;  */

void FUN_1019f302c(long param_1,long param_2)

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



/* Entry: 1019f3064; end: 1019f30db;  */

void FUN_1019f3064(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1019f0f78(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019f30dc; end: 1019f31ff;  */

undefined8 FUN_1019f30dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1019f3200; end: 1019f3207;  */

void FUN_1019f3200(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1019f18a4(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1019f3208; end: 1019f3237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f3208(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x12;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 auStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = 0;
  func_0x0001019f3ea0();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar5 = 0;
  FUN_1019f4920();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar4 = (long)auStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar4 - extraout_x12;
  lVar5 = 0;
  func_0x0001019f3ea0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar11 = (undefined8 *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  puVar1 = (undefined *)(lVar6 + 0x10);
  func_0x000107c61618();
  if (puVar1 != (undefined *)0x0) {
    func_0x0001019f32bc(unaff_x20 + (uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff)),puVar11,
                        0x1019f3ea0);
    puVar2 = puVar11;
    func_0x000107c614c4(puVar11,lVar5);
    if ((int)puVar2 == 0) {
      uVar10 = *puVar11;
      uVar8 = *(undefined8 *)(puVar1 + _DAT_112de9058);
      uStack_70 = uVar10;
      func_0x000107c6157c(uVar8);
      func_0x000100075034(FUN_1019f3300,auStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar8);
      uVar8 = *(undefined8 *)(puVar1 + _DAT_112de9068);
      puVar3 = PTR_PTR_1126bc3a0;
      func_0x000107c61168(PTR_PTR_1126bc3a0);
      func_0x000107c61174(uVar8);
      func_0x000107c41e1c(puVar3);
      func_0x000107c61180();
      func_0x000107c4d664(uVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar3);
    }
    else if ((int)puVar2 == 1) {
      uVar10 = *puVar11;
      uVar8 = *(undefined8 *)(puVar1 + _DAT_112de9060);
      uStack_70 = uVar10;
      func_0x000107c6157c(uVar8);
      func_0x000100075034(FUN_1019f33ac,auStack_80,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar8);
      uVar8 = *(undefined8 *)(puVar1 + _DAT_112de9068);
      puVar3 = PTR_PTR_1126bc3a0;
      func_0x000107c61168(PTR_PTR_1126bc3a0);
      func_0x000107c61174(uVar8);
      func_0x000107c41e04(puVar3);
      func_0x000107c61180();
      func_0x000107c4d664(uVar8);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(uVar8);
      puVar1 = puVar3;
    }
    else {
      func_0x0001019f3238(puVar11,lVar9,FUN_1019f4920);
      puVar3 = PTR__OBJC_CLASS___CLLocationManager_1126bc328;
      func_0x000107c61168(PTR__OBJC_CLASS___CLLocationManager_1126bc328);
      func_0x000107c5b020();
      uVar8 = *(undefined8 *)(puVar1 + _DAT_112de9070);
      func_0x0001019f327c(0,0x112de90e0,&PTR_PTR_1126bc398);
      func_0x0001019f32bc(lVar9,lVar4,FUN_1019f4920);
      FUN_1019f0290(lVar4,puVar3);
      func_0x000107c4d664(uVar8);
      func_0x000107c61170(lVar4);
      FUN_1019f041c(lVar9);
    }
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1019f3238; end: 1019f32ff;  */

undefined8 FUN_1019f3238(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1019f3300; end: 1019f3343;  */

void FUN_1019f3300(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1019f3344; end: 1019f335f;  */

void FUN_1019f3344(undefined4 *param_1)

{
  undefined4 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(unaff_x20 + 0x14);
  *param_1 = uVar1;
  return;
}



/* Entry: 1019f3360; end: 1019f337f;  */

void FUN_1019f3360(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1019f3380; end: 1019f33ab;  */

void FUN_1019f3380(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 1019f33ac; end: 1019f33e7;  */

void FUN_1019f33ac(void)

{
  FUN_1019f3300();
  return;
}



/* Entry: 1019f33e8; end: 1019f34d3;  */

void FUN_1019f33e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_4[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4[4];
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  return;
}



/* Entry: 1019f34d4; end: 1019f34e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1019f34d4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_113091b70);
  lVar2 = 0;
  func_0x0001019ef414();
  func_0x000107c613fc();
  func_0x00010148d2bc(unaff_x20 + 0x10,lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x38) = uVar1;
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  func_0x000107c615f0(uVar4);
  func_0x000107c615f0(uVar1);
  func_0x000107c6157c(uVar3);
  return lVar2;
}



/* Entry: 1019f34e4; end: 1019f351b;  */

void FUN_1019f34e4(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1019f351c; end: 1019f3537;  */

void FUN_1019f351c(long param_1,long param_2)

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



/* Entry: 1019f3538; end: 1019f3563;  */

/* WARNING: Possible PIC construction at 0x0001019f3544: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019f3548) */

void FUN_1019f3538(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1019f3564; end: 1019f35e3;  */

void FUN_1019f3564(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x00010010c498(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019f35e4; end: 1019f36cf;  */

byte FUN_1019f35e4(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return (*(byte *)(param_2 + 1) ^ *(byte *)(param_1 + 1) ^ 1) & 1;
  }
  return 0;
}



/* Entry: 1019f36d0; end: 1019f378f;  */

void FUN_1019f36d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)((long)param_2 + 5);
  *param_1 = uVar1;
  return;
}



/* Entry: 1019f3790; end: 1019f3797;  */

undefined8 FUN_1019f3790(void)

{
  return 1;
}



/* Entry: 1019f3798; end: 1019f3837;  */

void FUN_1019f3798(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019f3838; end: 1019f383b;  */

void FUN_1019f3838(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de91d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b4340;
  func_0x000107c61520(&UNK_10d9b4340,&UNK_11042ac00);
  puRam0000000112de91d0 = puVar1;
  return;
}



/* Entry: 1019f383c; end: 1019f387b;  */

void FUN_1019f383c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de91d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b4340;
  func_0x000107c61520(&UNK_10d9b4340,&UNK_11042ac00);
  puRam0000000112de91d0 = puVar1;
  return;
}



/* Entry: 1019f387c; end: 1019f3977;  */

void FUN_1019f387c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 1019f3978; end: 1019f427b;  */

long * FUN_1019f3978(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar5 == 2) {
      lVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar6;
      param_1[2] = param_2[2];
      lVar7 = 0;
      FUN_1019f4920();
      iVar4 = *(int *)(lVar7 + 0x18);
      lVar8 = 0;
      func_0x000107c5eea4();
      lVar12 = *(long *)(lVar8 + -8);
      pcVar13 = *(code **)(lVar12 + 0x10);
      (*pcVar13)((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar8);
      lVar11 = (long)*(int *)(lVar7 + 0x1c);
      lVar6 = (long)param_2 + lVar11;
      (**(code **)(lVar12 + 0x30))(lVar6,1,lVar8);
      if ((int)lVar6 == 0) {
        (*pcVar13)((long)param_1 + lVar11,(long)param_2 + lVar11,lVar8);
        (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,lVar8);
      }
      else {
        lVar6 = 0x112d373d8;
        func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
        func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                            *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
      }
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x20));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x20));
      uVar9 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar9;
      func_0x000107c61434();
      uVar9 = 2;
    }
    else if ((int)plVar5 == 1) {
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar9 = 1;
    }
    else {
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar9 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar9);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar10 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar6 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1019f427c; end: 1019f4367;  */

long * FUN_1019f427c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0x112da24e8;
    func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
    lVar5 = *(long *)(lVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar5 + 0x30))(param_2,1,lVar2);
    if ((int)plVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
      return param_1;
    }
    lVar6 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar2);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1019f4368; end: 1019f43d7;  */

void FUN_1019f4368(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  uVar1 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,1,lVar2);
  if ((int)uVar1 != 0) {
    return;
  }
  lVar2 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x0001019f43d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  return;
}



/* Entry: 1019f43d8; end: 1019f449f;  */

undefined8 FUN_1019f43d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 1019f44a0; end: 1019f45bb;  */

undefined8 FUN_1019f44a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar1 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  uVar2 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      FUN_1019f45bc(param_1);
      goto LAB_1019f4558;
    }
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x18))(param_1,param_2,lVar4);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_1019f4558:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  return param_1;
}



/* Entry: 1019f45bc; end: 1019f4603;  */

undefined8 FUN_1019f45bc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1019f4604; end: 1019f46cb;  */

undefined8 FUN_1019f4604(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  lVar4 = *(long *)(lVar1 + -8);
  uVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,lVar1);
  if ((int)uVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar1);
  return param_1;
}



/* Entry: 1019f46cc; end: 1019f47e7;  */

undefined8 FUN_1019f46cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  lVar4 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
  lVar5 = *(long *)(lVar4 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  uVar1 = param_1;
  (*pcVar6)(param_1,1,lVar4);
  uVar2 = param_2;
  (*pcVar6)(param_2,1,lVar4);
  if ((int)uVar1 == 0) {
    if ((int)uVar2 != 0) {
      FUN_1019f45bc(param_1);
      goto LAB_1019f4784;
    }
    lVar4 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))(param_1,param_2,lVar4);
  }
  else {
    if ((int)uVar2 != 0) {
LAB_1019f4784:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x20))(param_1,param_2,lVar3);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,lVar4);
  }
  return param_1;
}



/* Entry: 1019f47e8; end: 1019f47ff;  */

void FUN_1019f47e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1019f4800; end: 1019f4843;  */

void FUN_1019f4800(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
                    /* WARNING: Could not recover jumptable at 0x0001019f4840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,1,lVar1);
  return;
}



/* Entry: 1019f4844; end: 1019f4847;  */

void FUN_1019f4844(void)

{
  return;
}



/* Entry: 1019f4848; end: 1019f4893;  */

void FUN_1019f4848(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112da24e8;
  func_0x0001000285a8(0x112da24e8,&UNK_10d946a60);
                    /* WARNING: Could not recover jumptable at 0x0001019f4890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,1,lVar1);
  return;
}



/* Entry: 1019f4894; end: 1019f48cb;  */

void FUN_1019f4894(undefined8 param_1)

{
  if (lRam0000000112de92f0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6662ac);
  return;
}



/* Entry: 1019f48cc; end: 1019f491f;  */

void FUN_1019f48cc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    func_0x000107c61530(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Entry: 1019f4920; end: 1019f4957;  */

void FUN_1019f4920(undefined8 param_1)

{
  if (lRam0000000112de9358 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6662d4);
  return;
}



/* Entry: 1019f4958; end: 1019f4a83;  */

long * FUN_1019f4958(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar7 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar7;
    param_1[2] = param_2[2];
    iVar5 = *(int *)(param_3 + 0x18);
    lVar6 = 0;
    func_0x000107c5eea4();
    lVar10 = *(long *)(lVar6 + -8);
    pcVar11 = *(code **)(lVar10 + 0x10);
    (*pcVar11)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
    lVar9 = (long)*(int *)(param_3 + 0x1c);
    lVar7 = (long)param_2 + lVar9;
    (**(code **)(lVar10 + 0x30))(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (*pcVar11)((long)param_1 + lVar9,(long)param_2 + lVar9,lVar6);
      (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar9,(long)param_2 + lVar9,
                          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    func_0x000107c61434();
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar7 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1019f4a84; end: 1019f4b0b;  */

void FUN_1019f4a84(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_2 + 0x18);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  pcVar4 = *(code **)(lVar5 + 8);
  (*pcVar4)(param_1 + iVar1,lVar2);
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (*pcVar4)(param_1 + iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  return;
}



/* Entry: 1019f4b0c; end: 1019f4c0b;  */

undefined8 * FUN_1019f4b0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[2] = param_2[2];
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  pcVar7 = *(code **)(lVar6 + 0x10);
  (*pcVar7)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (*pcVar7)((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar8;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1019f4c0c; end: 1019f4d73;  */

undefined8 * FUN_1019f4c0c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x18);
  (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar10)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar10)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (*pcVar9)((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_1019f4d14;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_1019f4d14;
  }
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_1019f4d14:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *param_2;
  uVar6 = puVar1[1];
  puVar1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 1019f4d74; end: 1019f4e67;  */

undefined8 * FUN_1019f4d74(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[2] = param_2[2];
  iVar1 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar3 + -8);
  pcVar7 = *(code **)(lVar6 + 0x20);
  (*pcVar7)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar4,1,lVar3);
  if ((int)lVar4 == 0) {
    (*pcVar7)((long)param_1 + lVar5,(long)param_2 + lVar5,lVar3);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar3);
  }
  else {
    lVar4 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                        *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  }
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2[1] = param_2[1];
  *puVar2 = uVar8;
  return param_1;
}



/* Entry: 1019f4e68; end: 1019f4fb7;  */

undefined8 * FUN_1019f4e68(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 uVar11;
  
  uVar11 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar11;
  param_1[2] = param_2[2];
  iVar2 = *(int *)(param_3 + 0x18);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  pcVar9 = *(code **)(lVar8 + 0x28);
  (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar4 = (long)param_1 + lVar7;
  (*pcVar10)(lVar4,1,lVar3);
  lVar5 = (long)param_2 + lVar7;
  (*pcVar10)(lVar5,1,lVar3);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (*pcVar9)((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
      goto LAB_1019f4f68;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar3);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar3);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar3);
    goto LAB_1019f4f68;
  }
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
LAB_1019f4f68:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar11 = param_2[1];
  uVar6 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar11;
  func_0x000107c6142c(uVar6);
  return param_1;
}



/* Entry: 1019f4fb8; end: 1019f4fcf;  */

void FUN_1019f4fb8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 1019f4fd0; end: 1019f5073;  */

void FUN_1019f4fd0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_48 = &UNK_10d9b44b8;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    func_0x0001000776dc();
    if (param_2 < 0x40) {
      lStack_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = &UNK_10d9b44d0;
      func_0x000107c6153c(param_1,0x100,5,&puStack_48,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 1019f5074; end: 1019f5087;  */

bool FUN_1019f5074(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1019f5088; end: 1019f52b3;  */

void FUN_1019f5088(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x800000010efc85f0;
  uVar4 = 0xd000000000000011;
  if (cVar3 != '\x01') {
    uVar1 = 0xef524554414c5f45;
    uVar4 = 0x4259414d5f504154;
  }
  uVar2 = 0xec00000045554e49;
  uVar5 = 0x544e4f435f504154;
  if (cVar3 != '\0') {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1019f52b4; end: 1019f532b;  */

void FUN_1019f52b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0x800000010efc85f0;
  uVar3 = 0xd000000000000011;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xef524554414c5f45;
    uVar3 = 0x4259414d5f504154;
  }
  uVar2 = 0xec00000045554e49;
  uVar4 = 0x544e4f435f504154;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1019f532c; end: 1019f5553;  */

undefined8 FUN_1019f532c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1019f5614(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1019f5554; end: 1019f557f;  */

void FUN_1019f5554(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019f5580; end: 1019f55af;  */

bool FUN_1019f5580(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1019f55b0; end: 1019f5613;  */

ulong FUN_1019f55b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1019f5614; end: 1019f572b;  */

void FUN_1019f5614(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c5eea0(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f5724);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      *(long *)(unaff_x20 + 0x18) = (long)param_1;
      *(undefined8 *)(unaff_x20 + 0x20) = param_3;
      *(undefined8 *)(unaff_x20 + 0x28) = param_4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f572c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f5728);
  (*pcVar1)();
}



/* Entry: 1019f572c; end: 1019f572f;  */

void FUN_1019f572c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de93a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b44f0;
  func_0x000107c61520(&UNK_10d9b44f0,&UNK_11042ae10);
  puRam0000000112de93a0 = puVar1;
  return;
}



/* Entry: 1019f5730; end: 1019f576f;  */

void FUN_1019f5730(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de93a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9b44f0;
  func_0x000107c61520(&UNK_10d9b44f0,&UNK_11042ae10);
  puRam0000000112de93a0 = puVar1;
  return;
}



/* Entry: 1019f5770; end: 1019f58d3;  */

int FUN_1019f5770(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1019f57ec;
        goto LAB_1019f57d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1019f57d0:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1019f57ec:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1019f58d4; end: 1019f5943;  */

void FUN_1019f58d4(void)

{
  func_0x000107c61168(&PTR_PTR_112de93e8);
  return;
}



/* Entry: 1019f5944; end: 1019f5c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1019f5944(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112de94d0;
  func_0x000107c61614(unaff_x20 + _DAT_112de94d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112de94d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112de94e0) = 0;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112de94e8) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_112de94f0) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112de94f8) = param_8;
  FUN_1019f58d4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  uVar3 = param_4;
  FUN_1019f5614(param_4,param_5,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_112de9500) = uVar3;
  *(undefined4 *)(unaff_x20 + _DAT_112de9508) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112de9510);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  return puVar4;
}



/* Entry: 1019f5c9c; end: 1019f5d7b; -[SCAlwaysLocationPromptViewController initWithDelegate:valdiRuntimeProvider:isFirstRequest:blizzardLogger:source:promptType:isUkU18:friendName:] */

void FUN_1019f5c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined4 param_8,
                  undefined1 param_9,undefined4 param_10,long param_11)

{
  undefined8 uVar1;
  
  if (param_7 == 0) {
    param_7 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = param_2;
  }
  if (param_11 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x0001019f5af0(param_3,param_4,param_5,param_6,param_7,uVar1,param_8,param_9,param_11,param_2
                     );
  return;
}



/* Entry: 1019f5d7c; end: 1019f5e07; -[SCAlwaysLocationPromptViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f5d7c(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112de94d0,0);
  *(undefined8 *)(param_1 + _DAT_112de94d8) = 0;
  *(undefined8 *)(param_1 + _DAT_112de94e0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AlwaysLocationPermissionModal/AlwaysLocationPromptViewController.swift",0x46,
                      2,0x42,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f5e08);
  (*pcVar1)();
}



/* Entry: 1019f5e08; end: 1019f615b;  */

/* WARNING: Possible PIC construction at 0x0001019f5e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f5ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f5f34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f5f54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f5fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f5fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f6014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f6034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f605c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f60a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f60c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019f6100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019f60c4) */
/* WARNING: Removing unreachable block (ram,0x0001019f60a4) */
/* WARNING: Removing unreachable block (ram,0x0001019f6060) */
/* WARNING: Removing unreachable block (ram,0x0001019f6158) */
/* WARNING: Removing unreachable block (ram,0x0001019f6074) */
/* WARNING: Removing unreachable block (ram,0x0001019f6038) */
/* WARNING: Removing unreachable block (ram,0x0001019f6018) */
/* WARNING: Removing unreachable block (ram,0x0001019f5fc8) */
/* WARNING: Removing unreachable block (ram,0x0001019f6154) */
/* WARNING: Removing unreachable block (ram,0x0001019f5ffc) */
/* WARNING: Removing unreachable block (ram,0x0001019f5fa8) */
/* WARNING: Removing unreachable block (ram,0x0001019f5f58) */
/* WARNING: Removing unreachable block (ram,0x0001019f6150) */
/* WARNING: Removing unreachable block (ram,0x0001019f5f8c) */
/* WARNING: Removing unreachable block (ram,0x0001019f5f38) */
/* WARNING: Removing unreachable block (ram,0x0001019f5ec4) */
/* WARNING: Removing unreachable block (ram,0x0001019f614c) */
/* WARNING: Removing unreachable block (ram,0x0001019f5f1c) */
/* WARNING: Removing unreachable block (ram,0x0001019f5e88) */
/* WARNING: Removing unreachable block (ram,0x0001019f6148) */
/* WARNING: Removing unreachable block (ram,0x0001019f5eb0) */
/* WARNING: Removing unreachable block (ram,0x0001019f6104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f5e08(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + _DAT_112de94f8) == '\x01') &&
     (*(int *)(unaff_x20 + _DAT_112de9508) != 4)) {
    FUN_1019f63e8();
    if (param_1 == 0) {
      return;
    }
    plVar1 = (long *)&DAT_112de94e0;
  }
  else {
    FUN_1019f64b8();
    if (param_1 == 0) {
      return;
    }
    plVar1 = (long *)&DAT_112de94d8;
  }
  uVar2 = *(undefined8 *)(unaff_x20 + *plVar1);
  *(long *)(unaff_x20 + *plVar1) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1019f615c; end: 1019f61b7; -[SCAlwaysLocationPromptViewController viewDidLoad] */

void FUN_1019f615c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1019f5e08();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019f61b8; end: 1019f61bf; -[SCAlwaysLocationPromptViewController shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1019f61b8(void)

{
  return 0;
}



/* Entry: 1019f61c0; end: 1019f62e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1019f61c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112de94d8);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112de94e0);
    if (lVar2 == 0) {
      return 385.0;
    }
    func_0x000107c61174();
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174();
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
  }
  if (lVar3 != 0) {
    func_0x000107c5e07c();
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar4 = 1.79769313486232e+308;
    func_0x000107c5b098(lVar2);
    func_0x000107c61170(lVar2);
    return dVar4 + 50.0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f62e8);
  (*pcVar1)();
}



/* Entry: 1019f62e8; end: 1019f6323; -[SCAlwaysLocationPromptViewController calculateTrayHeight] */

undefined8 FUN_1019f62e8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_1019f61c0();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 1019f6324; end: 1019f6387; -[SCAlwaysLocationPromptViewController didTapContinueButtonWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f6324(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112de94d0;
  func_0x000107c61428(param_1 + _DAT_112de94d0,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f4d4();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1019f6388; end: 1019f63e7; -[SCAlwaysLocationPromptViewController didTapCancelWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f6388(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112de94d0;
  func_0x000107c61428(param_1 + _DAT_112de94d0,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c4f4e0();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1019f63e8; end: 1019f64b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f63e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112de94e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126a8458;
      func_0x000107c610f8(PTR_PTR_1126a8458);
      func_0x000107c453e4();
      func_0x000107c52168();
      puVar4 = PTR_PTR_1126a8460;
      func_0x000107c610f8(PTR_PTR_1126a8460);
      func_0x000107c61174(puVar3);
      func_0x000107c49520(puVar4,param_2,0,puVar3,lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1019f64b8; end: 1019f667b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f64b8(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112de94e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126a8468;
      func_0x000107c610f8(PTR_PTR_1126a8468);
      func_0x000107c453e4();
      func_0x000107c52168();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c46ecc();
      func_0x000107c5a264(puVar3);
      func_0x000107c61170(puVar4);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c558d8(puVar3);
      func_0x000107c61170(puVar4);
      if (((undefined8 *)(unaff_x20 + _DAT_112de9510))[1] == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112de9510);
        func_0x000107c5fadc(uVar5);
      }
      func_0x000107c54c10(puVar3);
      func_0x000107c61170(uVar5);
      puVar4 = PTR_PTR_1126a8470;
      func_0x000107c610f8(PTR_PTR_1126a8470);
      func_0x000107c48eac();
      puVar6 = PTR_PTR_1126a8478;
      func_0x000107c610f8(PTR_PTR_1126a8478);
      func_0x000107c61174(puVar4);
      func_0x000107c61174(puVar3);
      func_0x000107c49520(puVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1019f667c; end: 1019f66db; -[SCAlwaysLocationPromptViewController initWithNibName:bundle:] */

void FUN_1019f667c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AlwaysLocationPermissionModal.AlwaysLocationPromptViewController",0x40,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1019f66a8);
  (*pcVar1)();
}



/* Entry: 1019f66dc; end: 1019f6757; -[SCAlwaysLocationPromptViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f66dc(long param_1)

{
  func_0x0001019f690c(param_1 + _DAT_112de94d0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de94e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112de9500));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de94d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112de94e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112de9510 + 8))
  ;
  return;
}



/* Entry: 1019f6758; end: 1019f675f; -[SCAlwaysLocationPromptViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_1019f6758(void)

{
  return 1;
}



/* Entry: 1019f6760; end: 1019f67ef; -[SCAlwaysLocationPromptViewController showAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f6760(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112de94d0;
  func_0x000107c61428(param_1 + _DAT_112de94d0,auStack_38,0,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar1 != 0) {
    func_0x000107c4f4d4(lVar1);
    func_0x000107c615e8(lVar1);
  }
  func_0x0001019f5454(0);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019f67f0; end: 1019f687b; -[SCAlwaysLocationPromptViewController dismissTray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f67f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112de94d0;
  func_0x000107c61428(param_1 + _DAT_112de94d0,auStack_38,0,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar1 != 0) {
    func_0x000107c4f4e0(lVar1);
    func_0x000107c615e8(lVar1);
  }
  func_0x0001019f5454(2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019f687c; end: 1019f692f; -[SCAlwaysLocationPromptViewController openSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019f687c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112de94d0;
  func_0x000107c61428(param_1 + _DAT_112de94d0,auStack_38,0,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61618();
  func_0x000107c61174();
  if (lVar1 != 0) {
    func_0x000107c4f4d4(lVar1);
    func_0x000107c615e8(lVar1);
  }
  func_0x0001019f5454(1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1019f6930; end: 1019f694f;  */

void FUN_1019f6930(void)

{
  func_0x000107c61168(&PTR_PTR_1127f0948);
  return;
}


