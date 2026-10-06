/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a9991c; end: 101a99b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101a9991c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x88) + _DAT_113046d00);
  *(long *)(unaff_x22 + 0x98) = lVar5;
  if (lVar5 != 0) {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x88) + _DAT_113046d08);
    *(long *)(unaff_x22 + 0xa0) = lVar3;
    if (lVar3 != 0) {
      func_0x000107c61174(lVar3);
      func_0x000107c61174(lVar5);
      func_0x0001000d224c(unaff_x22 + 0x50);
      lVar4 = *(long *)(unaff_x22 + 0x50);
      *(long *)(unaff_x22 + 0xa8) = lVar4;
      if (lVar4 != 0) {
        uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
        puVar1 = PTR_PTR_1126b1060;
        func_0x000107c610f8();
        puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c47d08();
        *(undefined **)(unaff_x22 + 0xb0) = puVar1;
        func_0x000107c61170(puVar2);
        *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_101a99b34;
        lVar5 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar5,0);
        puVar1 = &UNK_110438398;
        func_0x000107c613fc(&UNK_110438398,0x20,7);
        *(long *)(puVar1 + 0x10) = lVar5;
        *(undefined8 *)(puVar1 + 0x18) = uVar6;
        *(code **)(unaff_x22 + 0x70) = FUN_101a99f28;
        *(undefined **)(unaff_x22 + 0x78) = puVar1;
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(code **)(unaff_x22 + 0x60) = FUN_101a11da0;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_1104383b0;
        lVar5 = unaff_x22 + 0x50;
        func_0x000107c60bc4(lVar5);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
        func_0x000107c6157c(uVar6);
        func_0x000107c61574(uVar7);
        func_0x000107c507c0(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c60bd0(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar3);
      lVar5 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar6,1,1,lVar5);
      goto LAB_101a99ad8;
    }
  }
  FUN_101a99168(*(undefined8 *)(unaff_x22 + 0x80));
LAB_101a99ad8:
                    /* WARNING: Could not recover jumptable at 0x000101a99af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a99b34; end: 101a99b73;  */

void FUN_101a99b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a99b74,0,0);
  return;
}



/* Entry: 101a99b74; end: 101a99bc7;  */

void FUN_101a99b74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101a99bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101a99bc8; end: 101a99d67;  */

void FUN_101a99bc8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  
  lVar5 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  func_0x000107c43fb4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c44314();
    if (lVar1 == 0) {
      lVar1 = param_1;
      func_0x000107c4407c();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5faec();
        func_0x000107c61170(lVar1);
        func_0x000107c5ed80(lVar5,lVar2,puVar3);
        func_0x000107c6142c(puVar3);
        lVar1 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,0,1,lVar1);
        func_0x0001001021cc(lVar5,puVar4);
        func_0x0001001021cc(puVar4,*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28));
        func_0x000107c6144c(param_2);
        func_0x000107c615e8(param_1);
        return;
      }
    }
    func_0x000107c615e8(param_1);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar5,1,1,lVar1);
  func_0x0001001021cc(lVar5,puVar4);
  func_0x0001001021cc(puVar4,*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28));
  func_0x000107c6144c(param_2);
  return;
}



/* Entry: 101a99d68; end: 101a99dab;  */

void FUN_101a99d68(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a99dac; end: 101a99deb;  */

void FUN_101a99dac(void)

{
  FUN_101a98754();
  return;
}



/* Entry: 101a99dec; end: 101a99e3b;  */

void FUN_101a99dec(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a99e3c;
  plVar1[0x12] = param_1;
  plVar1[0x13] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a99450,0,0);
  return;
}



/* Entry: 101a99e3c; end: 101a99e87;  */

void FUN_101a99e3c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a99e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return;
}



/* Entry: 101a99e88; end: 101a99eeb;  */

void FUN_101a99e88(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101a99eec;
  plVar1[0x11] = param_2;
  plVar1[0x12] = lVar2;
  plVar1[0x10] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101a9991c,0,0);
  return;
}



/* Entry: 101a99eec; end: 101a99f27;  */

void FUN_101a99eec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101a99f24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101a99f28; end: 101a99f5f;  */

void FUN_101a99f28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long unaff_x20;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar6 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  func_0x000107c43fb4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c44314();
    if (lVar2 == 0) {
      lVar2 = param_1;
      func_0x000107c4407c();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        func_0x000107c5ed80(lVar6,lVar3,puVar4);
        func_0x000107c6142c(puVar4);
        lVar2 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar6,0,1,lVar2);
        func_0x0001001021cc(lVar6,puVar5);
        func_0x0001001021cc(puVar5,*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28));
        func_0x000107c6144c(lVar1);
        func_0x000107c615e8(param_1);
        return;
      }
    }
    func_0x000107c615e8(param_1);
  }
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar6,1,1,lVar2);
  func_0x0001001021cc(lVar6,puVar5);
  func_0x0001001021cc(puVar5,*(undefined8 *)(*(long *)(lVar1 + 0x40) + 0x28));
  func_0x000107c6144c(lVar1);
  return;
}



/* Entry: 101a99f60; end: 101a99fbf;  */

void FUN_101a99f60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101a99fc0; end: 101a99fdf;  */

void FUN_101a99fc0(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lStack_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if ((param_1 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  lVar3 = *(long *)(lVar2 + 0x38);
  func_0x0001000a8868(lVar2 + 0x18,uVar1);
  if (lVar4 < 3) {
    if (lVar4 == 0) {
      uVar7 = 0xe400000000000000;
      uVar6 = 0x656e6f6e;
    }
    else if (lVar4 == 1) {
      uVar7 = 0x800000010efce270;
      uVar6 = 0xd00000000000001c;
    }
    else {
      if (lVar4 != 2) goto LAB_101a98d38;
      uVar7 = 0x800000010efce250;
      uVar6 = 0xd00000000000001d;
    }
  }
  else if (lVar4 < 5) {
    if (lVar4 == 3) {
      uVar7 = 0x800000010efce230;
      uVar6 = 0xd000000000000014;
    }
    else {
      if (lVar4 != 4) {
LAB_101a98d38:
        lStack_38 = lVar4;
        func_0x000107c60614(&UNK_110735378,&lStack_38,&UNK_110735378,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x101a98d5c);
        (*pcVar5)();
      }
      uVar6 = 0xd000000000000013;
      uVar7 = 0x800000010efce210;
    }
  }
  else if (lVar4 == 5) {
    uVar7 = 0xec00000074696b5f;
    uVar6 = 0x6576697461657263;
  }
  else {
    if (lVar4 != 6) goto LAB_101a98d38;
    uVar7 = 0xeb00000000617265;
    uVar6 = 0x6d61635f70616e73;
  }
  (**(code **)(lVar3 + 0x10))(1,uVar6,uVar7,uVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar7);
  return;
}



/* Entry: 101a99fe0; end: 101a9a1ab;  */

long FUN_101a99fe0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101a9a1ac; end: 101a9a263;  */

long FUN_101a9a1ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x000100979210(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100979294();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001009792bc();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101a9a264; end: 101a9a297;  */

void FUN_101a9a264(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9a298; end: 101a9a2db;  */

undefined1  [16] FUN_101a9a298(void)

{
  return ZEXT816(0x110438670);
}



/* Entry: 101a9a2dc; end: 101a9a32f;  */

void FUN_101a9a2dc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9a330; end: 101a9a3c3;  */

void FUN_101a9a330(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010020e0e0();
  func_0x000107c613fc();
  FUN_101a9a424(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101a9a3c4; end: 101a9a3cf;  */

void FUN_101a9a3c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x00010020e0e0();
  func_0x000107c613fc();
  FUN_101a9a424(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a9a3d0; end: 101a9a423;  */

undefined8 FUN_101a9a3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101a9a424(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101a9a424; end: 101a9a4ff;  */

void FUN_101a9a424(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101aa0088(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a9fd94();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101a9fdc8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101a9a500; end: 101a9a53b;  */

void FUN_101a9a500(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9a53c; end: 101a9a58f;  */

void FUN_101a9a53c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a9a590; end: 101a9a5db;  */

void FUN_101a9a590(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a9a5dc; end: 101a9a62f;  */

void FUN_101a9a5dc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9a630; end: 101a9a91b;  */

long FUN_101a9a630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a8780;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef307d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef220b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101a9a91c; end: 101a9a967;  */

void FUN_101a9a91c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9a968; end: 101a9a9b7;  */

undefined8 FUN_101a9a968(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9a9b8; end: 101a9a9fb;  */

undefined1  [16] FUN_101a9a9b8(void)

{
  return ZEXT816(0x110438800);
}



/* Entry: 101a9a9fc; end: 101a9aa23;  */

void FUN_101a9a9fc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9aa24; end: 101a9aa2b;  */

undefined8 FUN_101a9aa24(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9aa2c; end: 101a9af17;  */

void FUN_101a9aa2c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100232bf4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126a8788;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efce9a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x50) = puVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 101a9af18; end: 101a9af2b;  */

void FUN_101a9af18(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100232bf4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  puVar2 = PTR_PTR_1126a8788;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efce9a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x50) = puVar12;
  *param_1 = lVar1;
  return;
}



/* Entry: 101a9af2c; end: 101a9b393;  */

long FUN_101a9af2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  puVar1 = PTR_PTR_1126a8788;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efce9a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  *(undefined **)(unaff_x20 + 0x50) = puVar3;
  return unaff_x20;
}



/* Entry: 101a9b394; end: 101a9b40f;  */

void FUN_101a9b394(void)

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
  return;
}



/* Entry: 101a9b410; end: 101a9b463;  */

void FUN_101a9b410(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a9b464; end: 101a9b46b;  */

void FUN_101a9b464(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a9b46c; end: 101a9b4bb;  */

undefined8 FUN_101a9b46c(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9b4bc; end: 101a9b4ff;  */

undefined1  [16] FUN_101a9b4bc(void)

{
  return ZEXT816(0x1104388c8);
}



/* Entry: 101a9b500; end: 101a9b527;  */

void FUN_101a9b500(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9b528; end: 101a9b52f;  */

undefined8 FUN_101a9b528(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9b530; end: 101a9bb23;  */

void FUN_101a9b530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  puVar1 = PTR_PTR_1126a8790;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010efce9a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efce9c0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_9);
  func_0x000107c61174();
  uVar2 = 0x6553657469766e69;
  func_0x000107c5fadc(0x6553657469766e69,0xee00736563697672);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_10);
  func_0x000107c61174();
  uVar2 = 0x536b726f7774656e;
  func_0x000107c5fadc(0x536b726f7774656e,0xef73656369767265);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010efce9e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_11);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  *(undefined **)(unaff_x20 + 0x68) = puVar3;
  return;
}



/* Entry: 101a9bb24; end: 101a9bbb7;  */

void FUN_101a9bb24(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101a9bbb8; end: 101a9bc07;  */

undefined8 FUN_101a9bbb8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9bc08; end: 101a9bc4b;  */

undefined1  [16] FUN_101a9bc08(void)

{
  return ZEXT816(0x110438990);
}



/* Entry: 101a9bc4c; end: 101a9bc73;  */

void FUN_101a9bc4c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9bc74; end: 101a9bc7b;  */

undefined8 FUN_101a9bc74(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9bc7c; end: 101a9bcdf;  */

undefined8
FUN_101a9bc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101a9bce0(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Entry: 101a9bce0; end: 101a9bf43;  */

void FUN_101a9bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  puVar1 = PTR_PTR_1126a8798;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_3);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12300);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  uVar2 = uVar3;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return;
}



/* Entry: 101a9bf44; end: 101a9bf87;  */

void FUN_101a9bf44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9bf88; end: 101a9bfd7;  */

undefined8 FUN_101a9bf88(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9bfd8; end: 101a9c01b;  */

undefined1  [16] FUN_101a9bfd8(void)

{
  return ZEXT816(0x110438a58);
}



/* Entry: 101a9c01c; end: 101a9c043;  */

void FUN_101a9c01c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9c044; end: 101a9c04b;  */

undefined8 FUN_101a9c044(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9c04c; end: 101a9c43f;  */

long FUN_101a9c04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a87a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc6ad0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0x6553657469766e69;
  func_0x000107c5fadc(0x6553657469766e69,0xee00736563697672);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efc4580);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010ef2dd00);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_6);
    *(undefined **)(unaff_x20 + 0x48) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9c440);
  (*pcVar1)();
}



/* Entry: 101a9c440; end: 101a9c4b3;  */

void FUN_101a9c440(void)

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
  return;
}



/* Entry: 101a9c4b4; end: 101a9c503;  */

undefined8 FUN_101a9c4b4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9c504; end: 101a9c547;  */

undefined1  [16] FUN_101a9c504(void)

{
  return ZEXT816(0x110438b20);
}



/* Entry: 101a9c548; end: 101a9c56f;  */

void FUN_101a9c548(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9c570; end: 101a9c577;  */

undefined8 FUN_101a9c570(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9c578; end: 101a9c857;  */

long FUN_101a9c578(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  puVar1 = PTR_PTR_1126a87a8;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef16f90);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar2);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar2);
  func_0x000107c61174();
  puVar3 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  return unaff_x20;
}



/* Entry: 101a9c858; end: 101a9c8a3;  */

void FUN_101a9c858(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9c8a4; end: 101a9c8f3;  */

undefined8 FUN_101a9c8a4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9c8f4; end: 101a9c937;  */

undefined1  [16] FUN_101a9c8f4(void)

{
  return ZEXT816(0x110438be8);
}



/* Entry: 101a9c938; end: 101a9c95f;  */

void FUN_101a9c938(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9c960; end: 101a9c967;  */

undefined8 FUN_101a9c960(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101a9c968; end: 101a9cacf;  */

void FUN_101a9c968(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x00010021a81c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_60;
  *(undefined8 *)(param_2 + 0x20) = uStack_68;
  *(undefined8 *)(param_2 + 0x28) = uStack_70;
  FUN_101a9f7dc(0);
  func_0x000107c613fc();
  uVar1 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar2 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar5 = uVar4;
  func_0x000101a9f28c();
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  uVar6 = uVar5;
  func_0x000107c6157c();
  FUN_101a9f2c8();
  func_0x000107c61574(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 101a9cad0; end: 101a9cadb;  */

void FUN_101a9cad0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x00010021a81c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_60;
  *(undefined8 *)(lVar1 + 0x20) = uStack_68;
  *(undefined8 *)(lVar1 + 0x28) = uStack_70;
  FUN_101a9f7dc(0);
  func_0x000107c613fc();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c61174(uStack_70);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000101a9f28c();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_101a9f2c8();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 101a9cadc; end: 101a9cbff;  */

long FUN_101a9cadc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  FUN_101a9f7dc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a9f28c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101a9f2c8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 101a9cc00; end: 101a9cc43;  */

void FUN_101a9cc00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9cc44; end: 101a9cc97;  */

void FUN_101a9cc44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a9cc98; end: 101a9cce3;  */

void FUN_101a9cc98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101a9cce4; end: 101a9cd37;  */

void FUN_101a9cce4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9cd38; end: 101a9ce5b;  */

long FUN_101a9cd38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  func_0x0001006d5c0c(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001006d5c8c();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001006d5cc8();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  return unaff_x20;
}



/* Entry: 101a9ce5c; end: 101a9ce9f;  */

void FUN_101a9ce5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101a9cea0; end: 101a9cee3;  */

undefined1  [16] FUN_101a9cea0(void)

{
  return ZEXT816(0x110438d78);
}



/* Entry: 101a9cee4; end: 101a9cf37;  */

void FUN_101a9cee4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101a9cf38; end: 101a9cfd3; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl isRecentsViewModelFixEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9cf38(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efcf200);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9cfd4; end: 101a9d0f7; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl sendToShortcutOrder] */

void FUN_101a9cfd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a9d02c();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a9d0f8; end: 101a9d193; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl isHorizontalStoriesSectionEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d0f8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000024;
    func_0x000107c5fadc(0xd000000000000024,0x800000010efcf1b0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9d194; end: 101a9d237; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl horizontalStoriesSectionMinStoriesThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9d194(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010efcf180);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9d238);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9d238; end: 101a9d2db; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl storiesPublicIconType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9d238(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efcf150);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9d2dc);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9d2dc; end: 101a9d377; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl storiesFriendsIconEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d2dc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efcf130);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9d378; end: 101a9d41b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl storiesCarouselInSendToSizeMultiplier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101a9d378(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  double dVar4;
  
  lVar2 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar2 == 0) {
    dVar4 = 0.0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar2);
    uVar1 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010efcf100);
    fVar3 = 0.0;
    func_0x000107c436e4(0,lVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    dVar4 = (double)fVar3;
  }
  return dVar4;
}



/* Entry: 101a9d41c; end: 101a9d4b7; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl displayReplyCellInRecents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d41c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efcf0d0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9d4b8; end: 101a9d55b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl foldedSectionsReplyIconType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9d4b8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efcf0a0);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9d55c);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9d55c; end: 101a9d5ff; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl foldedSectionsReplyTitleTextType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9d55c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010efcf070);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9d600);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9d600; end: 101a9d69b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl useSelectionTrackerToUpdateShareDestination] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d600(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000034;
    func_0x000107c5fadc(0xd000000000000034,0x800000010efcf030);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9d69c; end: 101a9d737; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl removeTopGroupLimit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d69c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010efcf010);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9d738; end: 101a9d7d3; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl useTwoColumnLayoutForTopGroups] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d738(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010efcefe0);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9d7d4; end: 101a9d877; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl useTwoColumnLayoutForReplyCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9d7d4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efcefb0);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9d878);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9d878; end: 101a9d91b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl useTwoColumnLayoutForTopGroupsCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9d878(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 3;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efcef90);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9d91c);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9d91c; end: 101a9d9b7; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl disablePreviewForSingleFromPreviewSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d91c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000002d;
    func_0x000107c5fadc(0xd00000000000002d,0x800000010efcef60);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9d9b8; end: 101a9da53; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl disablePreviewAllFromPreviewSection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9d9b8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd00000000000001d;
    func_0x000107c5fadc(0xd00000000000001d,0x800000010efcef40);
    lVar2 = lVar3;
    func_0x000107c3ebd4(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101a9da54; end: 101a9daf7; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl bestFriendsGridCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9da54(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 4;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000021;
    func_0x000107c5fadc(0xd000000000000021,0x800000010efcef10);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9daf8);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9daf8; end: 101a9db9b; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl topGroupsStringType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a9daf8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + _DAT_112df5680);
  if (uVar4 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c615f0(uVar4);
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010efceee0);
    uVar3 = uVar4;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_1);
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101a9db9c);
      (*pcVar1)();
    }
    uVar3 = uVar3 & 0xffffffff;
  }
  return uVar3;
}



/* Entry: 101a9db9c; end: 101a9dbcf; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl disableCreatePostSpotlightCellReset] */

uint FUN_101a9db9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a9dbd0();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a9dbd0; end: 101a9dc93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a9dbd0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112df5680);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c615f0(lVar3);
    uVar1 = 0xd000000000000030;
    func_0x000107c5fadc(0xd000000000000030,0x800000010efceea0);
    lVar4 = lVar3;
    func_0x000107c4c270();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    if (lVar4 != 0) {
      lVar2 = lVar4;
      func_0x000107c5dc0c(lVar4);
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      lVar4 = lVar2;
      func_0x000107c3ebcc(lVar2);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c615e8(lVar3);
  }
  return lVar4;
}



/* Entry: 101a9dc94; end: 101a9dcc7; -[_TtC31SCSendToExperimentConfiguration35SCSendToExperimentConfigurationImpl enableMyAISendToShortcut] */

uint FUN_101a9dc94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a9dcc8();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}


