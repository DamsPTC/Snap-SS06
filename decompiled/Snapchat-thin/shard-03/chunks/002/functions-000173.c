/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102682634; end: 10268268f;  */

void FUN_102682634(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102682690; end: 10268269b;  */

void FUN_102682690(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *param_1;
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    puVar4 = &UNK_110532450;
    func_0x000107c613fc(&UNK_110532450,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    *(undefined8 *)(puVar4 + 0x18) = uVar1;
    *(undefined8 *)(puVar4 + 0x20) = uVar11;
    puVar5 = &UNK_110532478;
    func_0x000107c613fc(&UNK_110532478,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10268269c;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_98 = FUN_102682708;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10114375c;
    puStack_a0 = &UNK_110532490;
    ppuVar6 = &puStack_b8;
    puStack_90 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_90;
    func_0x000107c6157c(lVar3);
    func_0x000107c6157c(uVar11);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1105324c8;
    func_0x000107c613fc(&UNK_1105324c8,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    *(undefined8 *)(puVar5 + 0x18) = uVar11;
    *(long *)(puVar5 + 0x20) = lVar3;
    puVar7 = &UNK_1105324f0;
    func_0x000107c613fc(&UNK_1105324f0,0x20,7);
    *(undefined8 *)(puVar7 + 0x10) = 0x102682744;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    pcStack_98 = FUN_102682750;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1011437a4;
    puStack_a0 = &UNK_110532508;
    ppuVar8 = &puStack_b8;
    puStack_90 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_90;
    func_0x000107c6157c(lVar3);
    func_0x000107c6157c(uVar11);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_110532540;
    func_0x000107c613fc(&UNK_110532540,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    *(undefined8 *)(puVar7 + 0x20) = uVar11;
    puVar9 = &UNK_110532568;
    func_0x000107c613fc(&UNK_110532568,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_10268279c;
    *(undefined **)(puVar9 + 0x18) = puVar7;
    pcStack_98 = FUN_1026827a8;
    puStack_b8 = puVar2;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_10006eb60;
    puStack_a0 = &UNK_110532580;
    ppuVar10 = &puStack_b8;
    puStack_90 = puVar9;
    func_0x000107c60bc4(ppuVar10);
    puVar9 = puStack_90;
    func_0x000107c6157c(lVar3);
    func_0x000107c6157c(uVar11);
    func_0x000107c61574(puVar9);
    func_0x000107c4c7c0(uVar12);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 10268269c; end: 102682707;  */

void FUN_10268269c(long param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  if ((param_1 == 2) && (param_2 != 0)) {
    *(long *)(lVar2 + 0x38) = param_2;
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  func_0x000107c40fb4();
  if ((param_1 == 2) || (lVar2 != 2)) {
    if (param_1 != 8) {
      return;
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  (*pcVar1)(uVar3);
  return;
}



/* Entry: 102682708; end: 102682727;  */

void FUN_102682708(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102682728; end: 10268274f;  */

void FUN_102682728(long param_1,long param_2)

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



/* Entry: 102682750; end: 10268276f;  */

void FUN_102682750(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102682770; end: 10268279b;  */

void FUN_102682770(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10268279c; end: 1026827a7;  */

void FUN_10268279c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  pcVar5 = *(code **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(lVar8 + 0x18);
  lVar4 = *(long *)(lVar8 + 0x20);
  lVar8 = *(long *)(lVar8 + 0x38);
  uVar1 = 0x585f504154;
  if (lVar8 != 4) {
    uVar1 = 0x504154;
  }
  uVar2 = 0xe500000000000000;
  if (lVar8 != 4) {
    uVar2 = 0xe300000000000000;
  }
  uVar3 = 0xea00000000004e57;
  uVar6 = 0x4f445f4550495753;
  if (1 < lVar8 - 1U) {
    uVar3 = uVar2;
    uVar6 = uVar1;
  }
  func_0x000107c614f0(uVar7,pcVar5,*(undefined8 *)(unaff_x20 + 0x20));
  (**(code **)(lVar4 + 0x30))(uVar6,uVar3,uVar7,lVar4);
  func_0x000107c6142c(uVar3);
  (*pcVar5)(3);
  return;
}



/* Entry: 1026827a8; end: 1026827c7;  */

void FUN_1026827a8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026827c8; end: 1026827d7;  */

void FUN_1026827c8(long param_1,long param_2)

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



/* Entry: 1026827d8; end: 1026828ab;  */

void FUN_1026827d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb3588,&UNK_10dac87c0);
  puVar1 = &UNK_1105325b8;
  func_0x000107c613fc(&UNK_1105325b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(0x102682858,puVar1);
  return;
}



/* Entry: 1026828ac; end: 1026828bb;  */

undefined1  [16] FUN_1026828ac(void)

{
  return ZEXT816(0x1105325e0);
}



/* Entry: 1026828bc; end: 1026828e3;  */

/* WARNING: Possible PIC construction at 0x0001026828d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026828d4) */

void FUN_1026828bc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 1026828e4; end: 10268293f;  */

undefined8 * FUN_1026828e4(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 102682940; end: 10268297b;  */

undefined8 * FUN_102682940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10268297c; end: 102682a0f;  */

int FUN_10268297c(ulong *param_1,int param_2)

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



/* Entry: 102682a10; end: 102682a3b;  */

void FUN_102682a10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c49820();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102682a3c; end: 102682aa3;  */

void FUN_102682a3c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  func_0x0001072432ec();
  func_0x0001008e41d4();
  func_0x000107c61180();
  if (lVar1 == 0) {
    param_3 = -0x1d00000000000000;
    lVar2 = 0x504154;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  param_1[1] = param_3;
  return;
}



/* Entry: 102682aa4; end: 102682cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102682aa4(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = *(long *)(param_3 + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c4c458();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c4c370();
  func_0x000107c61180();
  uVar3 = param_4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  lVar1 = _DAT_112fa9ab0;
  if (uVar3 == 0) {
    func_0x000107c615e8(lVar2);
    return;
  }
  puVar7 = auStack_88;
  func_0x000107c61428(param_2 + _DAT_112fa9ab0,puVar7,0,0);
  lVar1 = *(long *)(param_2 + lVar1);
  if (lVar1 != 0) {
    func_0x000107c3dd20();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar8 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      goto LAB_102682b98;
    }
  }
  lVar8 = 0;
  puVar7 = (undefined1 *)0xe000000000000000;
LAB_102682b98:
  lVar1 = _DAT_112fa9ad0;
  func_0x000107c61428(param_2 + _DAT_112fa9ad0,auStack_a0,0,0);
  func_0x000107c61428(*(long *)(param_2 + lVar1) + _DAT_112fa9b20,auStack_b8,0,0);
  func_0x000107c5ea20(lVar2);
  uVar4 = uVar3;
  func_0x000107c52060(uVar3);
  uVar5 = uVar3;
  func_0x000107c4c45c(uVar3);
  puVar6 = PTR_PTR_1126aad40;
  func_0x000107c610f8(PTR_PTR_1126aad40);
  func_0x000107c5fadc(lVar8,puVar7);
  func_0x000107c6142c(puVar7);
  func_0x000107c456a8(param_1,(double)uVar4,(double)uVar5,puVar6);
  func_0x000107c61170(lVar8);
  func_0x000107c61428(*(long *)(param_2 + lVar1) + _DAT_112fa9b28,auStack_d0,0,0);
  func_0x000107c5a07c(puVar6);
  func_0x000107c61428(*(long *)(param_2 + lVar1) + _DAT_112fa9b30,auStack_e8,0,0);
  func_0x000107c56a80(puVar6);
  func_0x000107c615e8(lVar2);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 102682cfc; end: 102682e0b;  */

void FUN_102682cfc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112eb3590,&UNK_10dac8838);
    func_0x000104886440();
  }
  else {
    lVar3 = lVar2;
    func_0x000107c5208c();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102682e0c);
      (*pcVar1)();
    }
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    lVar4 = lVar3;
    func_0x0001000b637c(lVar3);
    func_0x000107c61170(lVar3);
    uVar5 = 0;
    func_0x0001026818fc(0);
    pcVar1 = FUN_102682a10;
    func_0x0001000d5158(FUN_102682a10,0,uVar5);
    func_0x000107c61574(lVar4);
    func_0x0001000bfde0(FUN_102682a3c,0,PTR___sSSN_11034da80);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(pcVar1);
  }
  return;
}



/* Entry: 102682e0c; end: 102682e13;  */

undefined8 * FUN_102682e0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 102682e14; end: 102682eab;  */

void FUN_102682e14(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb3598,&UNK_10dac8840);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102682eac,param_1);
  return;
}



/* Entry: 102682eac; end: 102682eb3;  */

void FUN_102682eac(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1026833f4();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 102682eb4; end: 102682ee3;  */

void FUN_102682eb4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102682ee4; end: 102683203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102682ee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(param_1 + _DAT_112fa9bb8);
  if (lVar3 < 4) {
    if (lVar3 < 2) {
      if (lVar3 == 0) {
        uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
        uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
        uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
        func_0x000107c615f0(uVar4);
        func_0x000107c5fadc(uVar2,uVar1);
        func_0x000107c4bd90(uVar4);
      }
      else {
        if (lVar3 != 1) {
          return;
        }
        uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
        uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
        uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
        func_0x000107c615f0(uVar4);
        func_0x000107c5fadc(uVar2,uVar1);
        func_0x000107c4bd8c(uVar4);
      }
      goto LAB_1026831d8;
    }
    if (lVar3 == 2) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
      func_0x000107c615f0(uVar4);
      func_0x000107c5fadc(uVar2,uVar1);
    }
    else {
      if (lVar3 != 3) {
        return;
      }
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
      func_0x000107c615f0(uVar4);
      func_0x000107c5fadc(uVar2,uVar1);
    }
  }
  else if (lVar3 < 6) {
    if (lVar3 == 4) {
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
      func_0x000107c615f0(uVar4);
      func_0x000107c5fadc(uVar2,uVar1);
    }
    else {
      if (lVar3 != 5) {
        return;
      }
      uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
      func_0x000107c615f0(uVar4);
      func_0x000107c5fadc(uVar2,uVar1);
    }
  }
  else if (lVar3 == 6) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
    uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
    func_0x000107c615f0(uVar4);
    func_0x000107c5fadc(uVar2,uVar1);
  }
  else {
    if (lVar3 != 7) {
      return;
    }
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fa9bb0);
    uVar1 = ((undefined8 *)(param_1 + _DAT_112fa9bb0))[1];
    func_0x000107c615f0(uVar4);
    func_0x000107c5fadc(uVar2,uVar1);
  }
  func_0x000107c4bd88(uVar4);
LAB_1026831d8:
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102683204; end: 1026833a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102683204(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112eb3ae8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112fa9b60);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112fa9b60))[1];
  func_0x000107c615f0(uVar7);
  func_0x000107c5fadc(uVar4,uVar2);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa9b78);
  uVar8 = puVar1[1];
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110532670;
  func_0x000107c60bc4(&puStack_a0);
  uVar2 = uStack_78;
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(uVar2);
  puVar1 = (undefined8 *)(param_1 + _DAT_112fa9b80);
  uVar8 = puVar1[1];
  uStack_78 = puVar1[1];
  uStack_80 = *puVar1;
  puStack_a0 = puVar3;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_110532698;
  func_0x000107c60bc4(&puStack_a0);
  uVar2 = uStack_78;
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(uVar2);
  func_0x000107c4bd84(uVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1026833a4; end: 1026833bf;  */

void FUN_1026833a4(long param_1,long param_2)

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



/* Entry: 1026833c0; end: 1026833e3;  */

void FUN_1026833c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026833e4; end: 1026833f3;  */

undefined1  [16] FUN_1026833e4(void)

{
  return ZEXT816(0x1105326d0);
}



/* Entry: 1026833f4; end: 102683413;  */

void FUN_1026833f4(void)

{
  func_0x000107c61168(&PTR_PTR_112eb35e0);
  return;
}



/* Entry: 102683414; end: 10268341b;  */

void FUN_102683414(long param_1,long param_2)

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



/* Entry: 10268341c; end: 102683503;  */

void FUN_10268341c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb3640,&UNK_10dac88b0);
  puVar1 = &UNK_1105326f0;
  func_0x000107c613fc(&UNK_1105326f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102683504,puVar1);
  return;
}



/* Entry: 102683504; end: 10268350b;  */

void FUN_102683504(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_102683584();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  *(undefined8 *)(lVar1 + 0x18) = uStack_40;
  *param_1 = lVar1;
  return;
}



/* Entry: 10268350c; end: 102683547;  */

void FUN_10268350c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 102683548; end: 102683573;  */

void FUN_102683548(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102683574; end: 102683583;  */

undefined1  [16] FUN_102683574(void)

{
  return ZEXT816(0x110532718);
}



/* Entry: 102683584; end: 1026835a3;  */

void FUN_102683584(void)

{
  func_0x000107c61168(&PTR_PTR_112eb3688);
  return;
}



/* Entry: 1026835a4; end: 102683807;  */

void FUN_1026835a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb36f0,&UNK_10dac8920);
  puVar1 = &UNK_110532738;
  func_0x000107c613fc(&UNK_110532738,0x60,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x0001000823a8(FUN_102683808,puVar1);
  return;
}



/* Entry: 102683808; end: 10268383b;  */

void FUN_102683808(void)

{
  long unaff_x20;
  
  func_0x0001026836b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10268383c; end: 1026838eb;  */

void FUN_10268383c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  *(undefined8 *)(unaff_x20 + 0x58) = param_4;
  *(undefined8 *)(unaff_x20 + 0x10) = param_9;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_10;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined **)(unaff_x20 + 0x68) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_11;
  *(undefined8 *)(unaff_x20 + 0x60) = param_12;
  return;
}



/* Entry: 1026838ec; end: 102683957;  */

void FUN_1026838ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102683958,uVar1,uVar2);
  return;
}



/* Entry: 102683958; end: 102683a93;  */

void FUN_102683958(void)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_102683a94(uVar4);
  func_0x000102683cc8(uVar4);
  func_0x000107c61428(lVar6 + 0x68,unaff_x22 + 0x10,0,0);
  uVar7 = *(ulong *)(lVar6 + 0x68);
  if (uVar7 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar3 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar5 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102683a68);
      (*pcVar2)();
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102683a90);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102683a94);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(uVar7 + uVar5 * 8 + 0x20);
      func_0x000107c6157c(uVar5);
    }
    else {
      func_0x000107c61434(uVar7);
      FUN_1026868dc(uVar5,uVar7);
      func_0x000107c6142c(uVar7);
    }
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x18);
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0x28) + 0x20);
    func_0x000107c614f0(uVar4);
    func_0x000107c5cfac(*(undefined8 *)(uVar5 + 0x10));
    (**(code **)(lVar6 + 8))(uVar1,uVar4,lVar6);
    func_0x000107c61574(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000102683a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102683a94; end: 10268410b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102683a94(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar4 = _DAT_112fa9ab8;
  func_0x000107c61428(param_3 + _DAT_112fa9ab8,auStack_88,0,0);
  if (*(char *)(param_3 + lVar4) == '\x01') {
    lVar4 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102683cc8);
      (*pcVar3)();
    }
    lVar5 = lVar4;
    func_0x000109021ec0();
    func_0x000107c615e8(lVar4);
    if ((int)lVar5 != 0) {
      lVar4 = *(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_112fecfb0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c3f74c();
        func_0x000107c3f74c(lVar4);
        puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
        func_0x000107c469a4(param_1,param_2,0x3ff0000000000000,0x3ff0000000000000);
        puVar1 = (undefined8 *)(param_3 + _DAT_112fa9a98);
        func_0x000107c61428(puVar1,auStack_a0,0,0);
        uVar10 = *puVar1;
        uVar2 = puVar1[1];
        uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x70) + _DAT_112ebb230);
        puVar8 = &UNK_1105328a8;
        puVar7 = puVar8;
        func_0x000107c613fc(&UNK_1105328a8,0x18,7);
        func_0x000107c61644(puVar7 + 0x10);
        func_0x000107c613fc(&UNK_1105328a8,0x18,7);
        func_0x000107c61644(puVar8 + 0x10);
        puVar9 = &UNK_1105328f8;
        func_0x000107c613fc(&UNK_1105328f8,0x20,7);
        *(undefined **)(puVar9 + 0x10) = puVar8;
        *(long *)(puVar9 + 0x18) = param_3;
        func_0x0001038c2388(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar2);
        func_0x000107c61174(puVar6);
        func_0x000107c615f0(uVar11);
        func_0x000107c61174(param_3);
        func_0x0001038c20b4(uVar10,uVar2,puVar6,uVar11,FUN_102687298,puVar7,FUN_1026872cc,puVar9);
        FUN_102683204();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(uVar10);
      }
    }
  }
  return;
}



/* Entry: 10268410c; end: 102684147;  */

void FUN_10268410c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102684144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102684148; end: 10268427b; -[_TtC38MapPlaceProfilePresenterImplementation24MapPlaceProfilePresenter presentPlaceProfileWithPlace:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102684148(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_48 [24];
  
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  lVar3 = param_3;
  FUN_102682aa4(param_3,uVar4,uVar1);
  lVar2 = _DAT_112fa9ad8;
  func_0x000107c61428(param_3 + _DAT_112fa9ad8,auStack_48,1,0);
  uVar4 = *(undefined8 *)(param_3 + lVar2);
  *(long *)(param_3 + lVar2) = lVar3;
  func_0x000107c61170(uVar4);
  puVar5 = &UNK_110532808;
  func_0x000107c613fc(&UNK_110532808,0x20,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(long *)(puVar5 + 0x18) = param_3;
  puVar6 = &UNK_110532830;
  func_0x000107c613fc(&UNK_110532830,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10dac8a20;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dac8a28,puVar6,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10268427c; end: 1026842e7;  */

void FUN_10268427c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026842e8,uVar1,uVar2);
  return;
}



/* Entry: 1026842e8; end: 10268434b;  */

void FUN_1026842e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_10268434c();
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar1 = *(long *)(lVar1 + 0x20);
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar1 + 0x18))(0,0,uVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000102684348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10268434c; end: 102684563;  */

void FUN_10268434c(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + 0x68,auStack_78,0,0);
  uVar6 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    func_0x000107c61434(uVar6);
    func_0x00010268178c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102684564);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      if ((uVar6 & 0xc000000000000001) == 0) {
        uVar10 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c6157c(uVar10);
      }
      else {
        uVar10 = uVar8;
        FUN_1026868dc(uVar8,uVar6);
      }
      uVar9 = *(undefined8 *)(uVar10 + 0x10);
      func_0x000107c615f0(uVar9);
      func_0x000107c61574(uVar10);
      uVar10 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
        func_0x00010268178c(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar1 + uVar10 * 8 + 0x20) = uVar9;
    } while (uVar7 != uVar8);
    func_0x000107c6142c(uVar6);
  }
  if ((ulong)puVar1 >> 0x3e == 0) {
    puVar5 = *(undefined **)(((ulong)puVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)puVar1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar1) {
      puVar5 = puVar1;
    }
    func_0x000107c60480();
  }
  if ((long)puVar5 < 1) {
    func_0x000107c6142c(puVar1);
  }
  else {
    uVar9 = 0x112eb33f8;
    func_0x0001000285a8(0x112eb33f8,&UNK_10dac8690);
    puVar5 = puVar1;
    func_0x000107c5fc48(puVar1,uVar9);
    func_0x000107c6142c(puVar1);
    func_0x000107c5004c(lVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c4ff24(lVar4);
  }
  func_0x000107c615e8(lVar4);
  return;
}



/* Entry: 102684564; end: 10268460f; -[_TtC38MapPlaceProfilePresenterImplementation24MapPlaceProfilePresenter closePlaceProfile] */

/* WARNING: Possible PIC construction at 0x0001026845ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026845f0) */

void FUN_102684564(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105327e0;
  func_0x000107c613fc(&UNK_1105327e0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10dac8a10;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61580(param_1,2);
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dac8a18,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102684610; end: 102684c9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102684610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  long *plVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined1 auStack_108 [24];
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [3];
  undefined *puStack_a8;
  undefined **ppuStack_a0;
  undefined1 auStack_98 [8];
  undefined **ppuStack_90;
  undefined1 auStack_88 [8];
  undefined **ppuStack_80;
  
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ed0();
  puStack_a8 = puVar4;
  func_0x0001000285a8(0x112dd0d28,&UNK_10d992170);
  func_0x000107c613fc();
  ppuVar5 = &puStack_a8;
  func_0x00010042e6a0();
  lVar6 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (lVar7 != 0) {
    ppuStack_90 = (undefined **)0x0;
    func_0x000107c61614(auStack_98,0);
    ppuStack_80 = (undefined **)0x0;
    func_0x000107c61614(auStack_88,0);
    ppuStack_90 = &PTR_DAT_110532750;
    puStack_a8 = param_4;
    ppuStack_a0 = ppuVar5;
    func_0x000107c61604(auStack_98);
    ppuStack_80 = &PTR_DAT_110532770;
    func_0x000107c61604(auStack_88);
    func_0x000107c6157c(ppuVar5);
    func_0x000107c61174();
    func_0x00010008a7c8(auStack_c0,&puStack_a8);
    func_0x000100083b20(&puStack_f0);
    func_0x000107c61574(auStack_c0[0]);
    lVar2 = lStack_e8;
    puVar4 = puStack_f0;
    puVar8 = puStack_f0;
    func_0x000107c614f0();
    puVar9 = puVar8;
    (**(code **)(lStack_e8 + 0x18))();
    lVar6 = _DAT_112fa9ab8;
    if (((ulong)puVar9 & 1) != 0) {
      func_0x000107c61428(param_4 + _DAT_112fa9ab8,auStack_c0,0,0);
      if (param_4[lVar6] == '\x01') {
        uVar10 = *(ulong *)(unaff_x20 + 0x28);
        func_0x000107c3fa04();
        func_0x000107c61180();
        if (uVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102684c9c);
          (*pcVar3)();
        }
        uVar15 = uVar10;
        func_0x000109021ec0();
        func_0x000107c615e8(uVar10);
        if ((uVar15 & 1) == 0) {
          puVar1 = (undefined8 *)(param_4 + _DAT_112fa9a98);
          func_0x000107c61428(puVar1,auStack_108,0,0);
          uVar14 = *puVar1;
          uVar19 = puVar1[1];
          func_0x0001038c2578(0);
          func_0x000107c610f8();
          func_0x000107c61434(uVar19);
          func_0x0001038c2424(uVar14,uVar19,0);
          FUN_102682ee4();
          func_0x000107c61170(uVar14);
        }
      }
      (**(code **)(lStack_e8 + 8))(puVar8,lStack_e8);
      puVar9 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168();
      func_0x000107c5af88();
      func_0x000107c61180();
      puVar11 = puVar9;
      func_0x000100478f84();
      uVar14 = 0;
      if ((int)puVar11 != 0) {
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c517cc();
        uVar14 = param_3;
      }
      uVar19 = *(undefined8 *)PTR__UIScrollViewDecelerationRateNormal_110345db0;
      puVar11 = PTR_PTR_1126b1f08;
      func_0x000107c610f8(PTR_PTR_1126b1f08);
      func_0x000107c47fac(uVar19,0x4038000000000000,uVar14);
      func_0x000107c61170(puVar9);
      puVar9 = PTR_PTR_1126b1f18;
      func_0x000107c610f8(PTR_PTR_1126b1f18);
      func_0x000107c46f24();
      pcStack_d0 = FUN_102684e98;
      uStack_c8 = 0;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_e8 = 0x42000000;
      puStack_e0 = &UNK_10112dc70;
      puStack_d8 = &UNK_110532848;
      ppuVar12 = &puStack_f0;
      func_0x000107c60bc4();
      uVar19 = 0x406ae00000000000;
      lVar6 = lVar7;
      func_0x000107c40bec(0x406ae00000000000,0x3fe199999999999a);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar9);
      plVar17 = *(long **)(unaff_x20 + 0x38);
      func_0x000107c6157c(ppuVar5);
      func_0x000107c615f0(lVar6);
      func_0x000107c615f0(puVar4);
      FUN_102682cfc();
      lVar13 = 0;
      func_0x000102682670();
      func_0x000107c613fc();
      uVar14 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      *(undefined8 *)(lVar13 + 0x30) = uVar14;
      *(undefined8 *)(lVar13 + 0x38) = 0;
      *(long *)(lVar13 + 0x10) = lVar6;
      *(undefined **)(lVar13 + 0x18) = puVar4;
      *(long *)(lVar13 + 0x20) = lVar2;
      *(undefined ***)(lVar13 + 0x28) = ppuVar5;
      func_0x000107c6157c(ppuVar5);
      func_0x000107c615f0(lVar6);
      func_0x000107c615f0(puVar4);
      func_0x000107c5cfac(lVar6);
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8();
      func_0x000107c466c0(uVar19);
      puStack_f0 = puVar8;
      func_0x0001007d6d78(&puStack_f0);
      func_0x000107c61170(puVar8);
      puVar8 = &UNK_110532880;
      puVar9 = puVar8;
      func_0x000107c613fc(&UNK_110532880,0x18,7);
      func_0x000107c61644(puVar9 + 0x10,lVar13);
      pcVar18 = *(code **)(*plVar17 + 0x60);
      func_0x000107c6157c(lVar13);
      pcVar3 = FUN_102686dac;
      puVar11 = puVar9;
      (*pcVar18)(FUN_102686dac);
      func_0x000107c61574(puVar9);
      pcVar18 = pcVar3;
      func_0x000107c614f0(pcVar3);
      (**(code **)(puVar11 + 0x10))(*(undefined8 *)(lVar13 + 0x30),pcVar18,puVar11);
      func_0x000107c615e8(lVar6);
      func_0x000107c615e8(puVar4);
      func_0x000107c61574(ppuVar5);
      func_0x000107c61574(plVar17);
      func_0x000107c615e8(pcVar3);
      puVar9 = &UNK_1105328a8;
      func_0x000107c613fc(&UNK_1105328a8,0x18,7);
      func_0x000107c61644(puVar9 + 0x10);
      func_0x000107c613fc(&UNK_110532880,0x18,7);
      func_0x000107c61644(puVar8 + 0x10,lVar13);
      func_0x000107c61574(lVar13);
      puVar11 = &UNK_1105328d0;
      func_0x000107c613fc(&UNK_1105328d0,0x20,7);
      *(undefined **)(puVar11 + 0x10) = puVar9;
      *(undefined **)(puVar11 + 0x18) = puVar8;
      func_0x000107c6157c(puVar9);
      func_0x000107c6157c(puVar8);
      FUN_1026820bc(0x102686db4,puVar11);
      func_0x000107c61574(puVar9);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar11);
      func_0x000107c61428(unaff_x20 + 0x68,&puStack_f0,0x21,0);
      func_0x000107c6157c(lVar13);
      func_0x00010268664c();
      uVar15 = *(ulong *)(unaff_x20 + 0x68);
      uVar16 = uVar15 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar16 + 0x10);
      if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar10) {
        uVar15 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
        FUN_1026866bc(uVar15,uVar10 + 1,1);
        uVar16 = uVar15 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar16 + 0x10) = uVar10 + 1;
      *(long *)(uVar16 + uVar10 * 8 + 0x20) = lVar13;
      *(ulong *)(unaff_x20 + 0x68) = uVar15;
      func_0x000107c614a8(&puStack_f0);
      FUN_1026854b8(lVar13);
      func_0x000107c61574(lVar13);
      func_0x000107c61574(ppuVar5);
      func_0x000107c615e8(lVar6);
      func_0x000107c615e8(puVar4);
      func_0x000107c615e8(lVar7);
      FUN_102686c5c(&puStack_a8);
      return;
    }
    FUN_102686c5c(&puStack_a8);
    func_0x000107c615e8(puStack_f0);
    func_0x000107c615e8(lVar7);
  }
  func_0x000107c61574(ppuVar5);
  return;
}



/* Entry: 102684c9c; end: 102684e97;  */

void FUN_102684c9c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x68,auStack_78,0,0);
  uVar7 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar7 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar8 = uVar7;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    func_0x000107c61434(uVar7);
    func_0x00010268178c(0,uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102684e98);
      (*pcVar2)();
    }
    uVar9 = 0;
    do {
      if ((uVar7 & 0xc000000000000001) == 0) {
        uVar6 = *(ulong *)(uVar7 + uVar9 * 8 + 0x20);
        func_0x000107c6157c(uVar6);
      }
      else {
        uVar6 = uVar9;
        FUN_1026868dc(uVar9,uVar7);
      }
      uVar10 = *(undefined8 *)(uVar6 + 0x10);
      func_0x000107c615f0(uVar10);
      func_0x000107c61574(uVar6);
      uVar6 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar6) {
        func_0x00010268178c(1 < *(ulong *)(puVar1 + 0x18),uVar6 + 1,1);
      }
      uVar9 = uVar9 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar1 + uVar6 * 8 + 0x20) = uVar10;
    } while (uVar8 != uVar9);
    func_0x000107c6142c(uVar7);
  }
  FUN_102684610(param_1);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 == 0) {
    func_0x000107c6142c(puVar1);
  }
  else {
    uVar10 = 0x112eb33f8;
    func_0x0001000285a8(0x112eb33f8,&UNK_10dac8690);
    puVar5 = puVar1;
    func_0x000107c5fc48(puVar1,uVar10);
    func_0x000107c6142c(puVar1);
    func_0x000107c5004c(lVar4);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 102684e98; end: 102684e9f;  */

undefined8 FUN_102684e98(void)

{
  return 0;
}



/* Entry: 102684ea0; end: 102685037;  */

void FUN_102684ea0(byte param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      if (param_1 < 2) {
        if (param_1 == 0) {
          FUN_1026854b8();
          uVar3 = *(undefined8 *)(param_2 + 0x18);
          lVar1 = *(long *)(param_2 + 0x20);
          func_0x000107c614f0(uVar3);
          uVar4 = *(undefined8 *)(param_3 + 0x18);
          lVar2 = *(long *)(param_3 + 0x20);
          func_0x000107c614f0(uVar4);
          (**(code **)(lVar2 + 0x10))();
          func_0x000107c5cfac(*(undefined8 *)(param_3 + 0x10));
          (**(code **)(lVar1 + 8))(uVar4,uVar3,lVar1);
        }
        else {
          uVar3 = *(undefined8 *)(param_2 + 0x18);
          lVar1 = *(long *)(param_2 + 0x20);
          func_0x000107c614f0(uVar3);
          uVar4 = *(undefined8 *)(param_3 + 0x18);
          lVar2 = *(long *)(param_3 + 0x20);
          func_0x000107c614f0(uVar4);
          (**(code **)(lVar2 + 0x10))();
          func_0x000107c5cfac(*(undefined8 *)(param_3 + 0x10));
          (**(code **)(lVar1 + 8))(uVar4,uVar3,lVar1);
        }
        func_0x000107c61574(param_3);
        func_0x000107c61574(param_2);
        func_0x000107c61170(uVar4);
        return;
      }
      if (param_1 == 2) {
        FUN_102685038();
      }
      else {
        FUN_10268518c();
      }
      func_0x000107c61574(param_3);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102685038; end: 10268518b;  */

void FUN_102685038(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x68,auStack_48,0,0);
  uVar6 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar6 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar2 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    uVar5 = uVar2 - 1;
    if (SBORROW8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102685154);
      (*pcVar1)();
    }
    if ((uVar6 & 0xc000000000000001) == 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102685188);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10268518c);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(uVar6 + uVar5 * 8 + 0x20);
    }
    else {
      func_0x000107c61434(uVar6);
      FUN_1026868dc(uVar5,uVar6);
      func_0x000107c615e8();
      func_0x000107c6142c(uVar6);
    }
    if (param_1 == uVar5) {
      lVar3 = *(long *)(unaff_x20 + 0x48);
      func_0x000107c4d1cc();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar4 != 0) {
        func_0x000107c4ff24(lVar4);
        func_0x000107c615e8();
        lVar3 = lVar4;
      }
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x70)) + 0x68)
      )();
      if (lVar3 != 0) {
        func_0x000107c4dc98();
        func_0x000107c615e8(lVar3);
      }
    }
  }
  return;
}



/* Entry: 10268518c; end: 1026854b7;  */

/* WARNING: Removing unreachable block (ram,0x0001026854ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268518c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  code *pcVar12;
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x000107c614f0();
  pcVar12 = *(code **)(lVar2 + 0x10);
  lVar9 = lVar6;
  (*pcVar12)();
  lVar8 = _DAT_112fa9ab8;
  func_0x000107c61428(lVar9 + _DAT_112fa9ab8,auStack_78,0,0);
  if (*(char *)(lVar9 + lVar8) == '\x01') {
    puVar1 = (undefined8 *)(lVar9 + _DAT_112fa9a98);
    func_0x000107c61428(puVar1,auStack_b0,0,0);
    uVar7 = *puVar1;
    uVar3 = puVar1[1];
    func_0x0001038c2578(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar3);
    func_0x0001038c2424(uVar7,uVar3,1);
    FUN_102682ee4();
    func_0x000107c61170(uVar7);
  }
  func_0x000107c61170(lVar9);
  func_0x000107c61428(unaff_x20 + 0x68,auStack_90,0x21,0);
  func_0x000107c6157c(param_1);
  lVar8 = unaff_x20 + 0x68;
  FUN_102686eac(lVar8,param_1);
  func_0x000107c61574(param_1);
  uVar11 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar11 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar10 = uVar11;
    }
    func_0x000107c60480();
  }
  if ((long)uVar10 < lVar8) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x102685418);
    (*pcVar12)();
  }
  FUN_1026871d4(lVar8);
  func_0x000107c614a8(auStack_90);
  lVar9 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar8 = lVar9;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  if (lVar8 != 0) {
    func_0x000107c4ff24(lVar8);
    func_0x000107c615e8(lVar8);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c614f0(uVar7);
  (*pcVar12)(lVar6,lVar2);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_90,0,0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  func_0x000107c61434(uVar4);
  func_0x000107c61170(lVar6);
  (**(code **)(lVar8 + 0x18))(uVar3,uVar4,uVar7,lVar8);
  func_0x000107c6142c(uVar4);
  uVar11 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar11 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar10 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar10 == 0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x70)) + 0x68))
              ();
    if (uVar10 != 0) {
      func_0x000107c4dc9c();
      func_0x000107c615e8(uVar10);
    }
  }
  else {
    uVar5 = uVar10 - 1;
    if (SBORROW8(uVar10,1)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x102685484);
      (*pcVar12)();
    }
    if ((uVar11 & 0xc000000000000001) == 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1026854ac);
        (*pcVar12)();
      }
      if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1026853f8);
        (*pcVar12)();
      }
    }
    else {
      func_0x000107c61434(uVar11);
      FUN_1026868dc(uVar5,uVar11);
      func_0x000107c615e8();
      func_0x000107c6142c(uVar11);
    }
  }
  return;
}



/* Entry: 1026854b8; end: 1026855d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026854b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c4d1cc();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x000107c614f0();
    lVar4 = lVar2;
    (**(code **)(lVar1 + 0x10))();
    lVar5 = _DAT_112fa9ac8;
    func_0x000107c61428(lVar4 + _DAT_112fa9ac8,auStack_68,0,0);
    lVar6 = *(long *)(lVar4 + lVar5);
    lVar5 = lVar6;
    func_0x000107c61174();
    func_0x000107c61170(lVar4);
    if (lVar6 != 0) {
      lVar4 = lVar5;
      (**(code **)(lVar1 + 0x28))(lVar5,lVar2,lVar1);
      func_0x000107c61170(lVar5);
      if (lVar4 != 0) {
        func_0x000107c4ff24(lVar3);
        func_0x000107c3d6ac(lVar3);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(lVar4);
        return;
      }
    }
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1026855d8; end: 102685653;  */

void FUN_1026855d8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102685654; end: 102685673;  */

void FUN_102685654(void)

{
  FUN_1026855d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102685674; end: 1026856c7;  */

void FUN_102685674(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1026856c8();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1026856c8; end: 102685887;  */

/* WARNING: Possible PIC construction at 0x000102685750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010268579c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026857f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102685838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102685848: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102685858: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010268584c) */
/* WARNING: Removing unreachable block (ram,0x00010268583c) */
/* WARNING: Removing unreachable block (ram,0x0001026857f4) */
/* WARNING: Removing unreachable block (ram,0x0001026857a0) */
/* WARNING: Removing unreachable block (ram,0x000102685754) */
/* WARNING: Removing unreachable block (ram,0x00010268585c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026856c8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b2070;
    func_0x000107c610f8(PTR_PTR_1126b2070);
    func_0x000107c453e4();
    uVar3 = 0xd000000000000011;
    func_0x000107c5fadc(0xd000000000000011,0x800000010f0b4bd0);
    func_0x000107c59a10(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 102685888; end: 102685aa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102685888(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(param_1);
    puVar1 = (undefined8 *)(param_2 + _DAT_112fa9a98);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    func_0x0001038c2578(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x0001038c2424(uVar3,uVar2,0);
    FUN_102682ee4();
    func_0x000107c61574(uVar4);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102685aa8; end: 102685d03;  */

void FUN_102685aa8(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x68,auStack_58,0,0);
  uVar7 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar7 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar2 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    uVar5 = uVar2 - 1;
    if (SBORROW8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102685bf0);
      (*pcVar1)();
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102685c18);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102685c1c);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(uVar7 + uVar5 * 8 + 0x20);
      func_0x000107c6157c(uVar5);
    }
    else {
      func_0x000107c61434(uVar7);
      FUN_1026868dc(uVar5,uVar7);
      func_0x000107c6142c(uVar7);
    }
    if (*(long *)(uVar5 + 0x18) == param_2) {
      lVar3 = *(long *)(unaff_x20 + 0x48);
      func_0x000107c4d1cc();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        uVar6 = *(undefined8 *)(uVar5 + 0x10);
        func_0x000107c615f0(uVar6);
        func_0x000107c5a078(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(uVar6);
      }
    }
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 102685d04; end: 102685d0f;  */

void FUN_102685d04(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x68,auStack_48,0,0);
  uVar7 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar7 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar2 = uVar7;
    }
    func_0x000107c60480();
  }
  if (uVar2 != 0) {
    uVar6 = uVar2 - 1;
    if (SBORROW8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102685a7c);
      (*pcVar1)();
    }
    if ((uVar7 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102685aa4);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102685aa8);
        (*pcVar1)();
      }
      uVar6 = *(ulong *)(uVar7 + uVar6 * 8 + 0x20);
      func_0x000107c6157c(uVar6);
    }
    else {
      func_0x000107c61434(uVar7);
      FUN_1026868dc(uVar6,uVar7);
      func_0x000107c6142c(uVar7);
    }
    if (*(long *)(uVar6 + 0x18) == param_1) {
      lVar3 = *(long *)(unaff_x20 + 0x48);
      func_0x000107c4d1cc();
      func_0x000107c61180();
      lVar4 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(uVar6 + 0x10);
        func_0x000107c615f0(uVar5);
        func_0x000107c50048(lVar4);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(uVar5);
      }
    }
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 102685d10; end: 102685dd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102685d10(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c51a88();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c4431c(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c23c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 102685dd4; end: 102685f07;  */

void FUN_102685dd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x68,auStack_58,0,0);
  uVar5 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    uVar6 = uVar3 - 1;
    if (SBORROW8(uVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102685edc);
      (*pcVar2)();
    }
    if ((uVar5 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102685f04);
        (*pcVar2)();
      }
      if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102685f08);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(uVar5 + uVar6 * 8 + 0x20);
      func_0x000107c6157c(uVar6);
    }
    else {
      func_0x000107c61434(uVar5);
      FUN_1026868dc(uVar6,uVar5);
      func_0x000107c6142c(uVar5);
    }
    if (*(long *)(uVar6 + 0x18) == param_2) {
      FUN_102685f08(param_4);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c614f0(uVar4);
      func_0x000107c5cfac(*(undefined8 *)(uVar6 + 0x10));
      (**(code **)(lVar1 + 0x10))(param_1,uVar4,lVar1);
    }
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 102685f08; end: 1026860bf;  */

void FUN_102685f08(double param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  double dVar5;
  long unaff_x20;
  long lVar6;
  double dVar7;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar3 = *(long *)(unaff_x20 + 0x58);
  func_0x000107c4c370();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    dVar5 = 1000.0;
    func_0x000107c5d1ac(param_2);
    dVar5 = param_1 * 1000.0 - dVar5;
    if (dVar5 < 0.0) {
      dVar5 = 0.0;
    }
    if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026860a8);
      (*pcVar1)();
    }
    if (dVar5 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026860ac);
      (*pcVar1)();
    }
    dVar7 = 1.8446744073709552e+19;
    if (1.8446744073709552e+19 <= dVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026860b0);
      (*pcVar1)();
    }
    lVar2 = lVar4;
    func_0x000107c42ae4();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026860c0);
      (*pcVar1)();
    }
    func_0x000107c52060(lVar4);
    func_0x000107c4e7e8(param_2);
    if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026860b4);
      (*pcVar1)();
    }
    if (dVar7 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026860b8);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026860bc);
      (*pcVar1)();
    }
    func_0x000107c4c3b0(lVar2);
    func_0x000107c615e8(lVar4);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1026860c0; end: 10268628b;  */

void FUN_1026860c0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(unaff_x20 + 0x68,auStack_88,0,0);
  uVar8 = *(ulong *)(unaff_x20 + 0x68);
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar8);
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102686274);
          (*pcVar3)();
        }
        uVar7 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
        func_0x000107c6157c(uVar7);
      }
      else {
        uVar7 = uVar10;
        FUN_1026868dc(uVar10,uVar8);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102686190);
        (*pcVar3)();
      }
      uVar11 = uVar10 + 1;
      if (*(long *)(uVar7 + 0x18) == param_2) {
        func_0x000107c6142c(uVar8);
        func_0x000107c5cfac(*(undefined8 *)(uVar7 + 0x10));
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8();
        func_0x000107c466c0(param_1);
        puStack_90 = puVar4;
        func_0x0001007d6d78(&puStack_90);
        func_0x000107c61170(puVar4);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        lVar1 = *(long *)(unaff_x20 + 0x20);
        func_0x000107c614f0(uVar5);
        uVar6 = *(undefined8 *)(uVar7 + 0x18);
        lVar2 = *(long *)(uVar7 + 0x20);
        func_0x000107c614f0(uVar6);
        (**(code **)(lVar2 + 0x10))();
        func_0x000107c5cfac(*(undefined8 *)(uVar7 + 0x10));
        (**(code **)(lVar1 + 8))(uVar6,uVar5,lVar1);
        func_0x000107c61574(uVar7);
        func_0x000107c61170(uVar6);
        return;
      }
      func_0x000107c61574(uVar7);
      uVar10 = uVar10 + 1;
    } while (uVar11 != uVar9);
  }
  func_0x000107c6142c(uVar8);
  return;
}



/* Entry: 10268628c; end: 102686347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10268628c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x40) + 0x18) + _DAT_112eb3830);
  func_0x000107c615f0(lVar2);
  func_0x000107c5fadc(param_1,param_2);
  lVar1 = lVar2;
  func_0x000107c4f428();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11308f138);
    uVar4 = ((undefined8 *)(lVar1 + _DAT_11308f138))[1];
    func_0x000107c61434(uVar4);
    func_0x000107c61170(lVar1);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 102686348; end: 102686437;  */

/* WARNING: Possible PIC construction at 0x0001026863f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026863f4) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_102686348(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c614f0(uVar3);
  uVar1 = param_1;
  (**(code **)(lVar4 + 0x20))(param_1,param_2,uVar3,lVar4);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x70)) + 0x68))();
  if (uVar1 == 0) {
    return;
  }
  uVar2 = uVar1;
  func_0x000107c61150();
  if ((uVar2 & 1) != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4dca0(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102686438; end: 102686443;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102686438(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x50) + _DAT_112fecfb0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar1 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c51a88();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c4431c(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c23c(lVar1);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5faec(lVar2);
    func_0x000107c61170(lVar2);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Entry: 102686444; end: 1026864e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102686444(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x40) + 0x10) + _DAT_112eb3aa0);
  func_0x000107c6157c(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c61574(uVar1);
  func_0x000107c5fadc(param_1,param_2);
  uVar1 = uStack_38;
  func_0x000107c40b9c(uStack_38);
  func_0x000107c61180();
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 1026864e4; end: 1026864eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1026864e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x40) + 0x18) + _DAT_112eb3830);
  func_0x000107c615f0(lVar2);
  func_0x000107c5fadc(param_1,param_2);
  lVar1 = lVar2;
  func_0x000107c4f428();
  func_0x000107c61180();
  func_0x000107c615e8(lVar2);
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11308f138);
    uVar4 = ((undefined8 *)(lVar1 + _DAT_11308f138))[1];
    func_0x000107c61434(uVar4);
    func_0x000107c61170(lVar1);
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Entry: 1026864ec; end: 10268655b;  */

void FUN_1026864ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001038c2578(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_3);
  func_0x0001038c2424(param_2,param_3,param_1);
  FUN_102682ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10268655c; end: 1026865b7;  */

void FUN_10268655c(void)

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
    func_0x000102682670();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112eb37e8;
  plVar5 = (long *)&UNK_10dac8a38;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1026865b8; end: 1026865cb;  */

void FUN_1026865b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb37f0 == (undefined *)0x0 || ((ulong)puRam0000000112eb37f0 & 1) != 0) {
    puVar1 = &UNK_10e919686;
    func_0x000107c61518(&UNK_10e919686,0x1f,0,0);
    puRam0000000112eb37f0 = puVar1;
  }
  return;
}



/* Entry: 1026865cc; end: 1026866bb;  */

undefined * FUN_1026865cc(undefined *param_1,undefined *param_2)

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
    FUN_10268655c();
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



/* Entry: 1026866bc; end: 1026868db;  */

ulong FUN_1026866bc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026867e4);
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
  FUN_1026865cc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026867e0);
      (*pcVar1)();
    }
    func_0x0001026867e4(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1026868dc; end: 102686a77;  */

ulong FUN_1026868dc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026869ac);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026869b0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000102682670(0);
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
    func_0x000102682670(0);
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
  func_0x000107c5fb78(0xd000000000000013,0x800000010f0b4bb0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102686a78);
  (*pcVar2)();
}



/* Entry: 102686a78; end: 102686a87;  */

undefined1  [16] FUN_102686a78(void)

{
  return ZEXT816(0x1105327c0);
}



/* Entry: 102686a88; end: 102686b2b;  */

void FUN_102686a88(void)

{
  func_0x000107c61168(&PTR_PTR_112eb3738);
  return;
}



/* Entry: 102686b2c; end: 102686b9b;  */

void FUN_102686b2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026872d4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102686b9c; end: 102686beb;  */

void FUN_102686b9c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026872d8;
  plVar3[5] = lVar2;
  plVar3[6] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102683958,lVar1,lVar2);
  return;
}



/* Entry: 102686bec; end: 102686c5b;  */

void FUN_102686bec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1026872dc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102686c5c; end: 102686c8f;  */

undefined8 FUN_102686c5c(undefined8 param_1)

{
  (*(code *)&DAT_1038c1d80)();
  return param_1;
}



/* Entry: 102686c90; end: 102686cab;  */

void FUN_102686c90(long param_1,long param_2)

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



/* Entry: 102686cac; end: 102686d5b;  */

void FUN_102686cac(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  FUN_1026866bc();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102686d5c; end: 102686dab;  */

/* WARNING: Removing unreachable block (ram,0x0001026866f0) */
/* WARNING: Removing unreachable block (ram,0x000102686714) */
/* WARNING: Removing unreachable block (ram,0x0001026866f8) */
/* WARNING: Removing unreachable block (ram,0x0001026867e0) */
/* WARNING: Removing unreachable block (ram,0x000102686704) */
/* WARNING: Removing unreachable block (ram,0x00010268670c) */
/* WARNING: Removing unreachable block (ram,0x000102686750) */
/* WARNING: Removing unreachable block (ram,0x000102686764) */
/* WARNING: Removing unreachable block (ram,0x000102686770) */
/* WARNING: Removing unreachable block (ram,0x000102686778) */

ulong FUN_102686d5c(ulong param_1)

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
  FUN_1026865cc(uVar4,uVar3);
  if (-1 < (long)uVar4) {
    func_0x0001026867e4(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026867e0);
  (*pcVar1)();
}



/* Entry: 102686dac; end: 102686dbb;  */

void FUN_102686dac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x20);
    func_0x000107c615f0(uVar2);
    func_0x000107c61574(lVar5);
    uVar6 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(lVar4 + 0x30))(uVar1,uVar3,uVar6,lVar4);
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102686dbc; end: 102686eab;  */

undefined1  [16] FUN_102686dbc(ulong param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  
  uVar7 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar7 + 0x10);
  }
  else {
    uVar6 = uVar7;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = 0;
  do {
    if (uVar6 == uVar3) {
      uVar3 = 0;
      uVar4 = 1;
LAB_102686e68:
      auVar8._8_8_ = uVar4;
      auVar8._0_8_ = uVar3;
      return auVar8;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar7 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102686e84);
        (*pcVar1)();
      }
      uVar5 = *(ulong *)(param_1 + uVar3 * 8 + 0x20);
    }
    else {
      uVar5 = uVar3;
      FUN_1026868dc(uVar3,param_1);
      func_0x000107c615e8();
    }
    if (uVar5 == param_2) {
      uVar4 = 0;
      goto LAB_102686e68;
    }
    bVar2 = SCARRY8(uVar3,1);
    uVar3 = uVar3 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102686e88);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 102686eac; end: 1026870d7;  */

void FUN_102686eac(ulong *param_1,ulong param_2)

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
  uVar9 = param_2;
  FUN_102686dbc();
  if (unaff_x21 == 0) {
    if (((uint)uVar9 & 0xff) == 1) {
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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102686f14);
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
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1026870a4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          if (uVar5 <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1026870a8);
            (*pcVar2)();
          }
          uVar10 = *(ulong *)(uVar8 + 0x20 + uVar9 * 8);
          if (uVar10 != param_2) {
            if (uVar4 != uVar9) {
              if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1026870b4);
                (*pcVar2)();
              }
              if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1026870b8);
                (*pcVar2)();
              }
              uVar5 = *(ulong *)(uVar8 + 0x20 + uVar4 * 8);
              func_0x000107c6157c(uVar5);
              func_0x000107c6157c(uVar10);
LAB_102686fa4:
              uVar11 = uVar8;
              func_0x000107c61550();
              if ((((int)uVar11 == 0) || ((long)uVar8 < 0)) || ((uVar8 >> 0x3e & 1) != 0)) {
                FUN_102686d5c();
                uVar7 = (uint)(uVar8 >> 0x3e) & 1;
              }
              else {
                uVar7 = 0;
              }
              uVar11 = uVar8 & 0xffffffffffffff8;
              lVar1 = uVar11 + uVar4 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar10;
              func_0x000107c61574(uVar6);
              if (((long)uVar8 < 0) || (uVar7 != 0)) {
                FUN_102686d5c();
                uVar11 = uVar8 & 0xffffffffffffff8;
              }
              if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10268707c);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1026870bc);
                (*pcVar2)();
              }
              lVar1 = uVar11 + uVar9 * 8;
              uVar6 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              func_0x000107c61574(uVar6);
              *param_1 = uVar8;
            }
LAB_102686f28:
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1026870b0);
              (*pcVar2)();
            }
          }
        }
        else {
          uVar5 = uVar9;
          FUN_1026868dc(uVar9,uVar8);
          func_0x000107c615e8();
          if (uVar5 != param_2) {
            if (uVar4 != uVar9) {
              uVar5 = uVar4;
              FUN_1026868dc(uVar4,uVar8);
              uVar10 = uVar9;
              FUN_1026868dc(uVar9,uVar8);
              goto LAB_102686fa4;
            }
            goto LAB_102686f28;
          }
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1026870ac);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 1026870d8; end: 1026871d3;  */

void FUN_1026870d8(long param_1,long param_2,long param_3)

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
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1026871b0);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  func_0x000102682670(0);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1026871b4);
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1026871cc);
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
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1026871d0);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1026871d4);
    (*pcVar5)();
  }
  return;
}



/* Entry: 1026871d4; end: 102687297;  */

/* WARNING: Removing unreachable block (ram,0x0001026871d0) */

void FUN_1026871d4(long param_1,long param_2)

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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102687274);
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10268728c);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102687290);
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102687298);
      (*pcVar3)();
    }
    FUN_102686cac(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026871b0);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    func_0x000102682670(0);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026871b4);
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026871cc);
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026871d0);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102687294);
  (*pcVar3)();
}



/* Entry: 102687298; end: 10268729f;  */

void FUN_102687298(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1026856c8();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1026872a0; end: 1026872cb;  */

void FUN_1026872a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026872cc; end: 1026872df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026872cc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c6157c(uVar6);
    func_0x000107c61574(lVar4);
    puVar1 = (undefined8 *)(lVar3 + _DAT_112fa9a98);
    func_0x000107c61428(puVar1,auStack_60,0,0);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    func_0x0001038c2578(0);
    func_0x000107c610f8();
    func_0x000107c61434(uVar2);
    func_0x0001038c2424(uVar5,uVar2,0);
    FUN_102682ee4();
    func_0x000107c61574(uVar6);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 1026872e0; end: 10268732b;  */

void FUN_1026872e0(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb37f8,&UNK_10dac8a70);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026873bc,param_1);
  return;
}



/* Entry: 10268732c; end: 1026873bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10268732c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_1026874cc();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eb3800) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  func_0x000102732884(0);
  func_0x000107c610f8();
  func_0x000102732848(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1026873bc; end: 1026873d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026873bc(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_1026874cc();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112eb3800) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  func_0x000102732884(0);
  func_0x000107c610f8();
  func_0x000102732848(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1026873d4; end: 10268745b; -[_TtC38MapPlaceProfilePresenterImplementation31MapPlaceProfilePresenterBuilder build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026873d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x0001000ad7c4();
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10268745c; end: 1026874bb; -[_TtC38MapPlaceProfilePresenterImplementation31MapPlaceProfilePresenterBuilder init] */

void FUN_10268745c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapPlaceProfilePresenterImplementation.MapPlaceProfilePresenterBuilder",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102687488);
  (*pcVar1)();
}


