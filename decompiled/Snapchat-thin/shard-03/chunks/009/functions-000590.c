/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e48194; end: 102e481cf; -[SCStaticMapUtilities init] */

void FUN_102e48194(undefined8 param_1)

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



/* Entry: 102e481d0; end: 102e48223;  */

void FUN_102e481d0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e48224; end: 102e483d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e48224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  uVar3 = param_3;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  uVar3 = param_4;
  func_0x000107c5aa74();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  uVar3 = param_4;
  func_0x000107c4ec94();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  uVar3 = param_5;
  func_0x000107c5dc04();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  func_0x000107c61174(param_6);
  uVar3 = param_7;
  func_0x000107c52030();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  uVar3 = param_2;
  func_0x000107c41920();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  uVar3 = param_3;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  uVar3 = param_2;
  func_0x000107c4b8d0();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  lVar2 = param_8;
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    *(long *)(unaff_x20 + 0x58) = lVar2;
    uVar3 = *(undefined8 *)(param_9 + _DAT_113092298);
    func_0x000107c615f0(uVar3);
    func_0x000107c61170(param_9);
    *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e483d4);
  (*pcVar1)();
}



/* Entry: 102e483d4; end: 102e4846f;  */

void FUN_102e483d4(void)

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
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 102e48470; end: 102e4848f;  */

void FUN_102e48470(void)

{
  func_0x000100942e2c();
  return;
}



/* Entry: 102e48490; end: 102e48497;  */

undefined8 FUN_102e48490(void)

{
  return 0;
}



/* Entry: 102e48498; end: 102e484db;  */

long FUN_102e48498(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102e484dc; end: 102e484fb;  */

undefined8 * FUN_102e484dc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102e484fc; end: 102e48573;  */

void FUN_102e484fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102e48574;
  plVar5[4] = lVar2;
  plVar5[5] = lVar4;
  plVar5[2] = lVar1;
  plVar5[3] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e48f78,0,0);
  return;
}



/* Entry: 102e48574; end: 102e485af;  */

void FUN_102e48574(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102e485ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102e485b0; end: 102e485c7;  */

void FUN_102e485b0(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e485c8,0,0);
  return;
}



/* Entry: 102e485c8; end: 102e486a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e485c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112f20198);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x18) = lVar1;
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c44744();
    if ((int)lVar2 != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112f20190);
      func_0x000107c5c734();
      func_0x000107c61180();
      *(long *)(unaff_x22 + 0x20) = lVar2;
      if (lVar2 != 0) {
        uVar3 = 0;
        func_0x000107c5fcec();
        uVar4 = uVar3;
        func_0x000107c5fce8();
        *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
        func_0x000100eea164();
        func_0x000107c5fca8(uVar3,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_102e486a4,uVar3,uVar4);
        return;
      }
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102e486a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102e486a4; end: 102e486eb;  */

void FUN_102e486a4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61574();
  FUN_102e48914();
  *(undefined4 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e486ec,0,0);
  return;
}



/* Entry: 102e486ec; end: 102e4885b;  */

void FUN_102e486ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x22;
  undefined *puVar5;
  undefined4 uVar6;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x20);
  func_0x000107c5dad4();
  if ((uVar3 & 1) == 0) {
    func_0x000107c5dacc(*(undefined8 *)(unaff_x22 + 0x20));
  }
  func_0x000107c51b18(*(undefined8 *)(unaff_x22 + 0x20));
  puVar4 = PTR_PTR_1126b6728;
  func_0x000107c61168();
  func_0x000107c41068();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
    param_2 = 0;
  }
  else {
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
  }
  func_0x000107c407bc(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c4b894();
  if (param_2 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c5fadc(puVar5,param_2);
    func_0x000107c6142c(param_2);
  }
  uVar6 = *(undefined4 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar4 = PTR_PTR_1126c5e28;
  func_0x000107c610f8(PTR_PTR_1126c5e28);
  func_0x000107c46f20(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102e48858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar4);
  return;
}



/* Entry: 102e4885c; end: 102e488bb; -[_TtC19ValisImplementation18DeviceDataProvider init] */

void FUN_102e4885c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValisImplementation.DeviceDataProvider",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e48888);
  (*pcVar1)();
}



/* Entry: 102e488bc; end: 102e488f3; -[_TtC19ValisImplementation18DeviceDataProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e488d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e488dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e488bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f20190));
  return;
}



/* Entry: 102e488f4; end: 102e48913;  */

void FUN_102e488f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a9030);
  return;
}



/* Entry: 102e48914; end: 102e489db;  */

undefined * FUN_102e48914(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3dfc0();
  func_0x000107c61170(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c49a9c();
  func_0x000107c52c24(puVar1);
  func_0x000107c52c24(puVar1);
  func_0x000107c3e70c(puVar1);
  func_0x000107c3e720(puVar1);
  func_0x000107c52c24(puVar1);
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 102e489dc; end: 102e48a93;  */

void FUN_102e489dc(int param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  func_0x000107c3ebcc();
  if (param_1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (param_3 != 0) {
      lVar1 = param_3;
      func_0x000107c50314();
      func_0x000107c61180();
      func_0x000107c615e8(param_3);
      goto LAB_102e48a68;
    }
  }
  lVar1 = 0;
LAB_102e48a68:
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_2 + 0x20) = lVar1;
  func_0x000107c61574(param_2);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 102e48a94; end: 102e48aeb;  */

void FUN_102e48a94(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 102e48aec; end: 102e48b3f;  */

void FUN_102e48aec(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102e48b40; end: 102e48dc7;  */

void FUN_102e48b40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar8 = &puStack_90;
  func_0x0001048b0ec8(0);
  func_0x000107c610f8();
  uVar1 = 0x73696c6156;
  func_0x0001048b0b48(0x73696c6156,0xe500000000000000,0x18);
  uVar9 = *(undefined8 *)PTR__kCLLocationAccuracyBest_110349b70;
  puVar2 = PTR_PTR_1126c1818;
  func_0x000107c610f8();
  func_0x000107c45818(uVar9,0);
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c5c118();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
    puVar4 = &UNK_1105dc428;
    func_0x000107c613fc(&UNK_1105dc428,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    puVar5 = &UNK_1105dc478;
    func_0x000107c613fc(&UNK_1105dc478,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    pcStack_70 = (code *)0x102e48dec;
    puStack_90 = puVar2;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100b5fdac;
    puStack_78 = &UNK_1105dc490;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    puVar4 = puStack_68;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar4);
    lVar7 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar7);
    func_0x000107c61170(lVar7);
  }
  func_0x000107c41b80(param_3);
  func_0x000107c61180();
  puVar4 = &UNK_1105dc428;
  func_0x000107c613fc(&UNK_1105dc428,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  pcStack_70 = FUN_102e48dc8;
  puStack_90 = puVar2;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c1de60;
  puStack_78 = &UNK_1105dc440;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar1 = param_3;
  func_0x000107c5c320(param_3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(param_3);
  func_0x000107c3e924(uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102e48dc8; end: 102e48dfb;  */

void FUN_102e48dc8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    *(undefined8 *)(lVar1 + 0x20) = 0;
    func_0x000107c61574();
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 102e48dfc; end: 102e48f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e48dfc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar1 = _DAT_112f20278;
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*(long *)(unaff_x20 + 0xf0) == 0) {
    if (*(char *)((undefined8 *)(unaff_x20 + _DAT_112f20298) + 1) == '\x01') {
      func_0x000107c61428(unaff_x20 + _DAT_112f20278,auStack_68,0,0);
      (**(code **)(lVar4 + 0x10))(puVar3,unaff_x20 + lVar1,lVar2);
      uVar5 = 0x403e000000000000;
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f20298);
      func_0x000107c61428(unaff_x20 + _DAT_112f20278,auStack_68,0,0);
      (**(code **)(lVar4 + 0x10))(puVar3,unaff_x20 + lVar1,lVar2);
    }
  }
  else {
    func_0x000107c61428(unaff_x20 + _DAT_112f20278,auStack_68,0,0);
    (**(code **)(lVar4 + 0x10))(puVar3,unaff_x20 + lVar1,lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xd8);
  }
  func_0x000107c5ee6c(param_1,uVar5);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Entry: 102e48f54; end: 102e48f77;  */

long FUN_102e48f54(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  return param_1;
}



/* Entry: 102e48f78; end: 102e48ff7;  */

void FUN_102e48f78(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  *(undefined **)(unaff_x22 + 0x30) = puVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e48ff8,uVar2,uVar3);
  return;
}



/* Entry: 102e48ff8; end: 102e4904b;  */

void FUN_102e48ff8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c5a9c4();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4904c,0,0);
  return;
}



/* Entry: 102e4904c; end: 102e490b3;  */

void FUN_102e4904c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  func_0x000107c5fca8(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e490b4,uVar2,uVar1);
  return;
}



/* Entry: 102e490b4; end: 102e49107;  */

void FUN_102e490b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  uVar2 = uVar1;
  func_0x000107c3dfc0();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49108,uVar3,0);
  return;
}



/* Entry: 102e49108; end: 102e4917b;  */

void FUN_102e49108(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  if (*(long *)(*(long *)(unaff_x22 + 0x10) + 0xf0) != lVar1) {
    *(long *)(*(long *)(unaff_x22 + 0x10) + 0xf0) = lVar1;
    if (lVar1 == 2) {
      FUN_102e4ace8(1,0);
    }
    else if ((*(byte *)(*(long *)(unaff_x22 + 0x10) + 0xe8) & 1) == 0) {
      FUN_102e4a7c4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4917c,0,0);
  return;
}



/* Entry: 102e4917c; end: 102e49253;  */

void FUN_102e4917c(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c44744();
    if (((int)uVar2 != 0) && (uVar2 = uVar1, func_0x000107c4a998(), (uVar2 & 1) == 0)) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
      func_0x000107c6157c(uVar4);
      func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10db59188,uVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(uVar4);
      func_0x000107c615e8(uVar1);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
      pcVar3 = (code *)0x102e49290;
      goto LAB_102e491d4;
    }
    func_0x000107c615e8(uVar1);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  pcVar3 = FUN_102e49254;
LAB_102e491d4:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar4,0);
  return;
}



/* Entry: 102e49254; end: 102e4934b;  */

void FUN_102e49254(void)

{
  long unaff_x22;
  
  FUN_102e4a438();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e49290,*(undefined8 *)(unaff_x22 + 0x10),0);
  return;
}



/* Entry: 102e4934c; end: 102e49907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4934c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar12 = &puStack_90;
  ppuVar13 = &puStack_90;
  ppuVar14 = &puStack_90;
  uVar15 = *(undefined8 *)(unaff_x20 + 200);
  uVar2 = uVar15;
  func_0x000107c419f0(uVar15);
  func_0x000107c61180();
  puVar6 = &UNK_1105dc720;
  puVar3 = puVar6;
  func_0x000107c613fc(&UNK_1105dc720,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_102e4d6a4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c1de60;
  puStack_78 = &UNK_1105dc760;
  puStack_68 = puVar3;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar5 = uVar2;
  func_0x000107c5c320(uVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c3e924(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c41b80(uVar15);
  func_0x000107c61180();
  func_0x000107c613fc(&UNK_1105dc720,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  pcStack_70 = (code *)0x102e4d6c4;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100c1de60;
  puStack_78 = &UNK_1105dc788;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  uVar2 = uVar15;
  func_0x000107c5c320(uVar15);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c3e924(uVar2);
  func_0x000107c61170(uVar2);
  lVar8 = *(long *)(unaff_x20 + 0x78);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar16 = lVar8;
    func_0x000107c5c118();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    puVar6 = &UNK_1105dc720;
    func_0x000107c613fc(&UNK_1105dc720,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcStack_70 = FUN_102e4d73c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100b5fdac;
    puStack_78 = &UNK_1105dc850;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar8 = lVar16;
    func_0x000107c5c320(lVar16);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar16);
    func_0x000107c3e924(lVar8);
    func_0x000107c61170(lVar8);
  }
  lVar16 = *(long *)(unaff_x20 + 0x70);
  lVar8 = lVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar10 = lVar8;
    func_0x000107c4b930();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    puVar6 = &UNK_1105dc720;
    func_0x000107c613fc(&UNK_1105dc720,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcStack_70 = FUN_102e4d734;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101981064;
    puStack_78 = &UNK_1105dc828;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar8 = lVar10;
    func_0x000107c5c320(lVar10);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c61170(lVar10);
    func_0x000107c3e924(lVar8);
    func_0x000107c61170(lVar8);
  }
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar16 != 0) {
    lVar8 = lVar16;
    func_0x000107c5dff8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar16);
    lVar16 = lVar8;
    func_0x000107c421ac(lVar8);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    puVar6 = &UNK_1105dc720;
    func_0x000107c613fc(&UNK_1105dc720,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcStack_70 = FUN_102e4d70c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x102e4dbfc;
    puStack_78 = &UNK_1105dc800;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar8 = lVar16;
    func_0x000107c5c320(lVar16);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c61170(lVar16);
    func_0x000107c3e924(lVar8);
    func_0x000107c61170(lVar8);
  }
  lVar8 = *(long *)(unaff_x20 + 0xd0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    puVar6 = &UNK_1105dc720;
    func_0x000107c613fc(&UNK_1105dc720,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcStack_70 = FUN_102e4d704;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x102e4dc00;
    puStack_78 = &UNK_1105dc7d8;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar16 = lVar8;
    func_0x000107c5c320(lVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c61170(lVar8);
    func_0x000107c3e924(lVar16);
    func_0x000107c61170(lVar16);
  }
  lVar8 = *(long *)(unaff_x20 + 0xb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar16 = lVar8;
    func_0x000107c4e640();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    puVar6 = &UNK_1105dc720;
    func_0x000107c613fc(&UNK_1105dc720,0x18,7);
    func_0x000107c61644(puVar6 + 0x10);
    pcStack_70 = (code *)0x102e4d6e4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = (undefined *)0x102e4dc04;
    puStack_78 = &UNK_1105dc7b0;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar8 = lVar16;
    func_0x000107c5c320(lVar16);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(lVar16);
    func_0x000107c3e924(lVar8);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 102e49908; end: 102e4991b;  */

void FUN_102e49908(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4991c,param_2,0);
  return;
}



/* Entry: 102e4991c; end: 102e49967;  */

void FUN_102e4991c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  if (*(long *)(lVar1 + 0xf0) != 0) {
    *(undefined8 *)(lVar1 + 0xf0) = 0;
    if (*(char *)(lVar1 + 0xe8) != '\x01') {
      FUN_102e4a7c4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102e49964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e49968; end: 102e4997b;  */

void FUN_102e49968(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4997c,param_2,0);
  return;
}



/* Entry: 102e4997c; end: 102e499c7;  */

void FUN_102e4997c(void)

{
  long unaff_x22;
  
  if (*(long *)(*(long *)(unaff_x22 + 0x10) + 0xf0) != 2) {
    *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0xf0) = 2;
    FUN_102e4ace8(1,0);
  }
                    /* WARNING: Could not recover jumptable at 0x000102e499c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e499c8; end: 102e499df;  */

void FUN_102e499c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e499e0,0,0);
  return;
}



/* Entry: 102e499e0; end: 102e49ac7;  */

void FUN_102e499e0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = (undefined1)*(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c3ebcc();
  *(undefined1 *)(unaff_x22 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e49a20,uVar1,0);
  return;
}



/* Entry: 102e49ac8; end: 102e49bbb;  */

void FUN_102e49ac8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar1 = &UNK_1105dc8b0;
    func_0x000107c613fc(&UNK_1105dc8b0,0x20,7);
    *(code **)(puVar1 + 0x10) = FUN_102e4d81c;
    *(long *)(puVar1 + 0x18) = param_2;
    pcStack_58 = FUN_102e4d83c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_10006eb60;
    puStack_60 = &UNK_1105dc8c8;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4c604(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61578(param_2,2);
  }
  return;
}



/* Entry: 102e49bbc; end: 102e49bcf;  */

void FUN_102e49bbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49bd0,param_2,0);
  return;
}



/* Entry: 102e49bd0; end: 102e49bff;  */

void FUN_102e49bd0(void)

{
  long unaff_x22;
  
  FUN_102e4a438();
                    /* WARNING: Could not recover jumptable at 0x000102e49bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e49c00; end: 102e49cd3;  */

void FUN_102e49c00(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c613fc(param_3,0x20,7);
    *(long *)(param_3 + 0x10) = param_2;
    *(undefined8 *)(param_3 + 0x18) = param_1;
    func_0x000107c6157c(param_2);
    func_0x000107c61174(param_1);
    uVar1 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,param_4,param_3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(param_2);
    func_0x000107c61574(param_3);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102e49cd4; end: 102e49ce7;  */

void FUN_102e49cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49ce8,param_2,0);
  return;
}



/* Entry: 102e49ce8; end: 102e49d17;  */

void FUN_102e49ce8(void)

{
  long unaff_x22;
  
  FUN_102e4a0e4(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000102e49d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e49d18; end: 102e49e13;  */

void FUN_102e49d18(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    puVar1 = &UNK_1105dc928;
    func_0x000107c613fc(&UNK_1105dc928,0x20,7);
    *(code **)(puVar1 + 0x10) = FUN_102e4d940;
    *(long *)(puVar1 + 0x18) = param_2;
    uStack_58 = 0x102e4dbf4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_10006eb60;
    puStack_60 = &UNK_1105dc940;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar1);
    func_0x000107c4c734(param_1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61578(param_2,2);
  }
  return;
}



/* Entry: 102e49e14; end: 102e49e83;  */

/* WARNING: Possible PIC construction at 0x000102e49e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e49e70) */

void FUN_102e49e14(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c6157c();
  func_0x0001001ca524(0x22,0,0x3c,4,0,0,param_2,param_1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 102e49e84; end: 102e49eb3;  */

void FUN_102e49e84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e49e98,param_2,0);
  return;
}



/* Entry: 102e49eb4; end: 102e49f37;  */

void FUN_102e49eb4(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e49efc;
  plVar1[2] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49f50,param_2,0);
  return;
}



/* Entry: 102e49f38; end: 102e49f4f;  */

void FUN_102e49f38(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e49f50);
  return;
}



/* Entry: 102e49f50; end: 102e4a067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e49f50(void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0x10) + 0xb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x18) = lVar2;
  if (lVar2 == 0) goto LAB_102e4a050;
  lVar3 = lVar2;
  func_0x000107c44744();
  if ((int)lVar3 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x10);
    lVar3 = lVar2;
    func_0x000107c407bc();
    lVar4 = lVar2;
    func_0x000107c4b894();
    piVar1 = (int *)(lVar7 + _DAT_112f202a8);
    iVar6 = (int)lVar3;
    if (*(byte *)(piVar1 + 1) != 2) {
      if ((iVar6 == *piVar1) && ((lVar4 == 2) != ((*(byte *)(piVar1 + 1) & 1) == 0)))
      goto LAB_102e4a048;
    }
    *piVar1 = iVar6;
    *(bool *)(piVar1 + 1) = lVar4 == 2;
    if (1 < iVar6 - 3U) {
      plVar5 = (long *)0x60;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x20) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_102e4a068;
      lVar2 = *(long *)(unaff_x22 + 0x10);
      plVar5[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4aadc,lVar2,0);
      return;
    }
  }
LAB_102e4a048:
  func_0x000107c615e8(lVar2);
LAB_102e4a050:
                    /* WARNING: Could not recover jumptable at 0x000102e4a064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4a068; end: 102e4a0e3;  */

void FUN_102e4a068(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e4a0b4,uVar1,0);
  return;
}



/* Entry: 102e4a0e4; end: 102e4a247;  */

void FUN_102e4a0e4(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0xc0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    lVar4 = lVar2;
    func_0x000107c49a70();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(ppuVar3);
    if ((int)lVar4 == 0) {
      return;
    }
  }
  puVar5 = PTR_PTR_1126c5e30;
  func_0x000107c61168();
  FUN_102e4d664(0,0x112f20588,&PTR_PTR_1126c5e50);
  func_0x000107c61174(param_1);
  FUN_102e4dd34();
  func_0x000107c5dffc();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61428(unaff_x20 + 0xe0,auStack_58,0x21,0);
  FUN_102e4c5d4();
  uVar6 = *(ulong *)(unaff_x20 + 0xe0);
  uVar7 = uVar6 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar7 + 0x10);
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar1) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_102e4c644(uVar6,uVar1 + 1,1);
    uVar7 = uVar6 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar7 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar7 + uVar1 * 8 + 0x20) = puVar5;
  *(ulong *)(unaff_x20 + 0xe0) = uVar6;
  func_0x000107c614a8(auStack_58);
  FUN_102e4ace8(1,1);
  return;
}



/* Entry: 102e4a248; end: 102e4a25b;  */

void FUN_102e4a248(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4a25c,param_2,0);
  return;
}



/* Entry: 102e4a25c; end: 102e4a317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4a25c(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  plVar1 = (long *)(unaff_x22 + 0x10);
  FUN_102e4d3c8(plVar1,*(undefined8 *)(unaff_x22 + 0x28));
  lVar2 = *plVar1;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4a2c8;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e485c8,0,0);
  return;
}



/* Entry: 102e4a318; end: 102e4a3e3;  */

void FUN_102e4a318(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x48) != 0) {
    lVar1 = unaff_x22 + 0x10;
    FUN_102e4d5d0();
    FUN_102e4c568();
    func_0x000107c613fc();
    *(long *)(unaff_x22 + 0x50) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    puVar2 = PTR_PTR_1126c5e30;
    func_0x000107c61168();
    func_0x000107c418d0();
    func_0x000107c61180();
    *(undefined **)(lVar1 + 0x20) = puVar2;
    plVar3 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102e4a3e4;
    lVar4 = *(long *)(unaff_x22 + 0x38);
    plVar3[0x12] = lVar1;
    plVar3[0x13] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4b348,lVar4,0);
    return;
  }
  FUN_102e4d5d0(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102e4a3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4a3e4; end: 102e4a437;  */

void FUN_102e4a3e4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e4dbf8,uVar3,0);
  return;
}



/* Entry: 102e4a438; end: 102e4a7c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4a438(double param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long extraout_x8;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  undefined1 auStack_b0 [4];
  undefined4 uStack_ac;
  undefined1 auStack_a8 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar4 = *(long *)(unaff_x20 + 0xc0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    lVar6 = lVar4;
    func_0x000107c49a70();
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(ppuVar5);
    if ((int)lVar6 == 0) {
      return;
    }
  }
  lVar4 = *(long *)(unaff_x20 + 0x70);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar6 = lVar4;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar6 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0xb0);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 == 0) {
        uStack_ac = 0;
      }
      else {
        lVar7 = lVar4;
        func_0x000107c437cc();
        if ((int)lVar7 == 0) {
          uStack_ac = 0;
        }
        else {
          lVar7 = lVar4;
          func_0x000107c437d0();
          uStack_ac = (undefined4)lVar7;
        }
        func_0x000107c61170(lVar4);
      }
      lVar4 = _DAT_112f20288;
      func_0x000107c5eea0(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c61174(lVar6);
      func_0x000107c408a0();
      dVar17 = (double)(ulong)(uint)(float)param_1;
      func_0x000107c4089c(lVar6);
      dVar13 = (double)(ulong)(uint)(float)param_1;
      func_0x000107c5b788(lVar6);
      fVar19 = (float)param_1;
      func_0x000107c5b78c(lVar6);
      puVar8 = PTR_PTR_1126c5e38;
      func_0x000107c610f8(PTR_PTR_1126c5e38);
      func_0x000107c46ccc(dVar13,dVar17,fVar19,(float)param_1);
      puVar9 = PTR_PTR_1126c5e40;
      func_0x000107c610f8(PTR_PTR_1126c5e40);
      func_0x000107c4077c(lVar6);
      dVar14 = dVar13;
      func_0x000107c4077c(lVar6);
      func_0x000107c3dc50(lVar6);
      dVar15 = dVar14;
      func_0x000107c44f00(lVar6);
      dVar16 = dVar15;
      func_0x000107c5dd28(lVar6);
      dVar18 = dVar16;
      func_0x000107c5ee8c();
      dVar18 = dVar18 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar18)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4a79c);
        (*pcVar2)();
      }
      if (dVar18 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4a7a0);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= dVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4a7a4);
        (*pcVar2)();
      }
      func_0x000107c470e8((float)dVar13,(float)dVar17,(float)dVar14,(float)dVar15,(float)dVar16,
                          puVar9);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar8);
      (**(code **)(lVar12 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
      puVar8 = PTR_PTR_1126c5e30;
      func_0x000107c61168();
      func_0x000107c4b934();
      func_0x000107c61180();
      func_0x000107c61428(unaff_x20 + 0xe0,auStack_a8,0x21,0);
      FUN_102e4c5d4();
      uVar10 = *(ulong *)(unaff_x20 + 0xe0);
      uVar11 = uVar10 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar11 + 0x10);
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_102e4c644(uVar10,uVar1 + 1,1);
        uVar11 = uVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar11 + uVar1 * 8 + 0x20) = puVar8;
      *(ulong *)(unaff_x20 + 0xe0) = uVar10;
      func_0x000107c614a8(auStack_a8);
      if (*(char *)(unaff_x20 + lVar4) == '\x01') {
        *(undefined1 *)(unaff_x20 + lVar4) = 0;
      }
      FUN_102e4ace8(0,1);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar9);
    }
  }
  return;
}



/* Entry: 102e4a7c4; end: 102e4a98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4a7c4(double param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (((*(byte *)(unaff_x20 + _DAT_112f20280) & 1) == 0) && ((*(byte *)(unaff_x20 + 0xe8) & 1) == 0)
     ) {
    FUN_102e48dfc(lVar7);
    func_0x000107c5ee84();
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
    if (0.0 < param_1) {
      func_0x000107c498f8(*(undefined8 *)(unaff_x20 + 0xf8));
      uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
      *(undefined8 *)(unaff_x20 + 0xf8) = 0;
      func_0x000107c61170(uVar3);
      puVar4 = &UNK_1105dc720;
      func_0x000107c613fc(&UNK_1105dc720,0x18,7);
      func_0x000107c61644(puVar4 + 0x10);
      pcStack_60 = FUN_102e4d5f0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100fef460;
      puStack_68 = &UNK_1105dc738;
      ppuVar5 = &puStack_80;
      puStack_58 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar6 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c61168();
      func_0x000107c6157c(puVar4);
      func_0x000107c5ca5c(param_1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      puVar1 = puStack_58;
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar1);
      puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
      func_0x000107c4c190();
      func_0x000107c61180();
      func_0x000107c3d8e0();
      func_0x000107c61170(puVar4);
      uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
      *(undefined **)(unaff_x20 + 0xf8) = puVar6;
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 102e4a990; end: 102e4aa2b;  */

void FUN_102e4a990(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c6157c();
    uVar1 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,param_3,param_2,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61578(param_2,2);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 102e4aa2c; end: 102e4aa3f;  */

void FUN_102e4aa2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4aa40,param_2,0);
  return;
}



/* Entry: 102e4aa40; end: 102e4aa77;  */

void FUN_102e4aa40(void)

{
  long unaff_x22;
  
  FUN_102e4ace8(0,1);
                    /* WARNING: Could not recover jumptable at 0x000102e4aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4aa78; end: 102e4aac3;  */

void FUN_102e4aa78(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102e4aac4; end: 102e4aadb;  */

void FUN_102e4aac4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4aadc);
  return;
}



/* Entry: 102e4aadc; end: 102e4ab97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4aadc(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x10);
  plVar1 = (long *)(unaff_x22 + 0x10);
  FUN_102e4d3c8(plVar1,*(undefined8 *)(unaff_x22 + 0x28));
  lVar2 = *plVar1;
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102e4ab48;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e485c8,0,0);
  return;
}



/* Entry: 102e4ab98; end: 102e4ac63;  */

void FUN_102e4ab98(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x48) != 0) {
    lVar1 = unaff_x22 + 0x10;
    FUN_102e4d5d0();
    FUN_102e4c568();
    func_0x000107c613fc();
    *(long *)(unaff_x22 + 0x50) = lVar1;
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    puVar2 = PTR_PTR_1126c5e30;
    func_0x000107c61168();
    func_0x000107c418d0();
    func_0x000107c61180();
    *(undefined **)(lVar1 + 0x20) = puVar2;
    plVar3 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102e4ac64;
    lVar4 = *(long *)(unaff_x22 + 0x38);
    plVar3[0x13] = lVar1;
    plVar3[0x14] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4bd50,lVar4,0);
    return;
  }
  FUN_102e4d5d0(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000102e4ac60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4ac64; end: 102e4acb7;  */

void FUN_102e4ac64(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x50);
  uVar3 = *(undefined8 *)(lVar2 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4acb8,uVar3,0);
  return;
}



/* Entry: 102e4acb8; end: 102e4ace7;  */

void FUN_102e4acb8(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000102e4ace4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4ace8; end: 102e4aefb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4ace8(ulong param_1,byte param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long unaff_x20;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long alStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar7 = (long)puVar9 - extraout_x12;
  func_0x000107c61428(unaff_x20 + 0xe0,auStack_78,1,0);
  uVar6 = *(ulong *)(unaff_x20 + 0xe0);
  if (uVar6 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar4 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    if ((*(byte *)(unaff_x20 + 0xe8) & 1) == 0) {
      FUN_102e48dfc(uVar7);
      func_0x000107c5eea0(puVar9);
      uVar6 = uVar7;
      func_0x000107c5ee78(uVar7,puVar9);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(puVar9,lVar3);
      (*pcVar11)(uVar7,lVar3);
      if (((uVar6 & 1) == 0) && ((param_1 & 1) == 0)) {
        return;
      }
    }
    func_0x000107c5eea0(uVar7);
    lVar2 = _DAT_112f20278;
    func_0x000107c61428(unaff_x20 + _DAT_112f20278,auStack_90,0x21,0);
    (**(code **)(lVar10 + 0x28))(unaff_x20 + lVar2,uVar7,lVar3);
    func_0x000107c614a8(auStack_90);
    uVar8 = *(undefined8 *)(unaff_x20 + 0xe0);
    *(undefined **)(unaff_x20 + 0xe0) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined1 *)(unaff_x20 + _DAT_112f20280) = 1;
    uVar1 = *(undefined1 *)(unaff_x20 + 0xe8);
    puVar5 = &UNK_1105dc6f8;
    func_0x000107c613fc(&UNK_1105dc6f8,0x29,7);
    puVar5[0x10] = uVar1;
    *(long *)(puVar5 + 0x18) = unaff_x20;
    *(undefined8 *)(puVar5 + 0x20) = uVar8;
    puVar5[0x28] = param_2 & 1;
    func_0x000107c6157c();
    *(undefined **)(uVar7 - 0x10) = PTR___sytN_11034f1b0 + 8;
    uVar8 = 0x22;
    func_0x0001001ca524(0x22,0,0x3c,4,0,0,&UNK_10db590e0,puVar5);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar8);
  }
  return;
}



/* Entry: 102e4aefc; end: 102e4af1b;  */

void FUN_102e4aefc(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x71) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined1 *)(unaff_x22 + 0x70) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4af1c,param_3,0);
  return;
}



/* Entry: 102e4af1c; end: 102e4b037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4af1c(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    plVar1 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102e4b038;
    lVar3 = *(long *)(unaff_x22 + 0x38);
    plVar1[0x12] = *(long *)(unaff_x22 + 0x40);
    plVar1[0x13] = lVar3;
    pcVar2 = FUN_102e4b348;
  }
  else if (*(char *)(unaff_x22 + 0x71) == '\x01') {
    func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x40));
    func_0x0001000d224c(unaff_x22 + 0x10);
    plVar1 = (long *)(unaff_x22 + 0x10);
    FUN_102e4d3c8(plVar1,*(undefined8 *)(unaff_x22 + 0x28));
    lVar3 = *plVar1;
    plVar1 = (long *)0x50;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = 0x102e4b0e0;
    plVar1[2] = lVar3;
    pcVar2 = FUN_102e485c8;
    lVar3 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x40);
    *(long *)(unaff_x22 + 0x60) = lVar4;
    plVar1 = (long *)0xd0;
    func_0x000107c61434(lVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102e4b280;
    lVar3 = *(long *)(unaff_x22 + 0x38);
    plVar1[0x13] = lVar4;
    plVar1[0x14] = lVar3;
    pcVar2 = FUN_102e4bd50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar3,0);
  return;
}



/* Entry: 102e4b038; end: 102e4b133;  */

void FUN_102e4b038(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e4b084,uVar1,0);
  return;
}



/* Entry: 102e4b134; end: 102e4b27f;  */

void FUN_102e4b134(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  ulong uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x58);
  if (lVar6 == 0) {
    FUN_102e4d5d0(unaff_x22 + 0x10);
    uVar2 = *(ulong *)(unaff_x22 + 0x40);
  }
  else {
    uVar7 = *(ulong *)(unaff_x22 + 0x40);
    FUN_102e4d5d0(unaff_x22 + 0x10);
    puVar1 = PTR_PTR_1126c5e30;
    func_0x000107c61168();
    func_0x000107c418d0();
    func_0x000107c61180();
    uVar2 = uVar7;
    func_0x000107c61550();
    uVar5 = *(ulong *)(unaff_x22 + 0x40);
    if ((((uVar2 & 1) == 0) || ((uVar7 >> 0x3e & 1) != 0)) || (uVar3 = uVar5, (long)uVar5 < 0)) {
      if (uVar5 >> 0x3e == 0) {
        uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar2 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar5) {
          uVar2 = uVar5;
        }
        func_0x000107c60480(uVar2);
        uVar5 = *(ulong *)(unaff_x22 + 0x40);
      }
      uVar3 = 0;
      FUN_102e4c644(0,uVar2 + 1,1,uVar5);
      uVar7 = uVar3;
    }
    uVar7 = uVar7 & 0xffffffffffffff8;
    uVar5 = *(ulong *)(uVar7 + 0x10);
    uVar2 = uVar3;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar5) {
      uVar2 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_102e4c644(uVar2,uVar5 + 1,1,uVar3);
      uVar7 = uVar2 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
    *(undefined **)(uVar7 + uVar5 * 8 + 0x20) = puVar1;
    func_0x000107c61170(lVar6);
  }
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102e4b280;
  lVar6 = *(long *)(unaff_x22 + 0x38);
  plVar4[0x13] = uVar2;
  plVar4[0x14] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4bd50,lVar6,0);
  return;
}



/* Entry: 102e4b280; end: 102e4b32f;  */

void FUN_102e4b280(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102e4b2cc,uVar1,0);
  return;
}



/* Entry: 102e4b330; end: 102e4b347;  */

void FUN_102e4b330(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4b348);
  return;
}



/* Entry: 102e4b348; end: 102e4b72f;  */

void FUN_102e4b348(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong in_x3;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x22;
  
  lVar3 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x78);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  if (lVar3 == 0) goto LAB_102e4b6e4;
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x80);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  if (lVar4 != 0) {
    uVar10 = *(ulong *)(unaff_x22 + 0x90);
    func_0x000107c615f0();
    FUN_102e4dc7c();
    puVar9 = PTR_PTR_1126c5e48;
    func_0x000107c610f8();
    func_0x000107c46b60();
    *(undefined **)(unaff_x22 + 0xb0) = puVar9;
    func_0x000107c615e8(lVar4);
    if (uVar10 >> 0x3e == 0) {
      lVar3 = *(long *)((uVar10 & 0xffffffffffffff8) + 0x10);
      *(long *)(unaff_x22 + 0xb8) = lVar3;
      if (lVar3 != 0) goto LAB_102e4b3f0;
LAB_102e4b6c4:
      uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      lVar3 = *(long *)(unaff_x22 + 0xa0);
    }
    else {
      uVar12 = uVar10 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar10) {
        uVar12 = *(ulong *)(unaff_x22 + 0x90);
      }
      func_0x000107c60480();
      *(ulong *)(unaff_x22 + 0xb8) = uVar12;
      if (uVar12 == 0) goto LAB_102e4b6c4;
LAB_102e4b3f0:
      uVar10 = *(ulong *)(unaff_x22 + 0x90);
      if ((uVar10 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar10 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4b714);
          (*pcVar2)();
        }
        uVar5 = *(undefined8 *)(uVar10 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = 0;
        FUN_102e4cbf0();
      }
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar5;
      *(undefined8 *)(unaff_x22 + 200) = 1;
      if (*(char *)(*(long *)(unaff_x22 + 0x98) + 0xe8) == '\x01') {
        uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_102e4b730;
        lVar3 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar3,0);
        uVar6 = 0x112df01c0;
        func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
        *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
        *(long *)(unaff_x22 + 0x70) = lVar3;
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x60) = &UNK_101a67e30;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_1105dc6c0;
        func_0x000107c5d6cc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
      lVar3 = *(long *)(unaff_x22 + 0xb8);
      if (lVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4b718);
        (*pcVar2)();
      }
      uVar10 = *(ulong *)(unaff_x22 + 0x90);
      if (uVar10 >> 0x3e == 0) {
        uVar10 = *(ulong *)((uVar10 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar12 = uVar10 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar10) {
          uVar12 = uVar10;
        }
        func_0x000107c60480();
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4b720);
          (*pcVar2)();
        }
        uVar12 = *(ulong *)(unaff_x22 + 0x90);
        uVar10 = uVar12 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar12) {
          uVar10 = uVar12;
        }
        func_0x000107c60480();
        lVar3 = *(long *)(unaff_x22 + 0xb8);
      }
      if ((long)uVar10 < lVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4b71c);
        (*pcVar2)();
      }
      uVar10 = *(ulong *)(unaff_x22 + 0x90);
      func_0x000107c61434(uVar10);
      if ((uVar10 & 0xc000000000000001) != 0) {
        uVar6 = 0;
        FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
        lVar3 = 0;
        do {
          lVar11 = *(long *)(unaff_x22 + 0xb8);
          lVar4 = lVar3 + 1;
          func_0x000107c60318(lVar3,*(undefined8 *)(unaff_x22 + 0x90),uVar6);
          lVar3 = lVar4;
        } while (lVar4 != lVar11);
        uVar10 = *(ulong *)(unaff_x22 + 0x90);
      }
      lVar3 = *(long *)(unaff_x22 + 0xb8);
      if (uVar10 >> 0x3e == 0) {
        uVar12 = 0;
        puVar9 = (undefined *)(uVar10 & 0xffffffffffffff8);
        in_x3 = lVar3 << 1;
LAB_102e4b5ec:
        uVar6 = 0;
        func_0x000107c605fc(0);
        puVar7 = puVar9;
        func_0x000107c615f4(puVar9,2);
        func_0x000107c61480();
        if (puVar7 == (undefined *)0x0) {
          func_0x000107c615e8(puVar9);
          puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        lVar3 = *(long *)(puVar7 + 0x10);
        func_0x000107c61574();
        if (SBORROW8(in_x3 >> 1,uVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4b724);
          (*pcVar2)();
        }
        if (lVar3 != (in_x3 >> 1) - uVar12) {
          func_0x000107c615e8();
          goto LAB_102e4b5d4;
        }
        puVar8 = puVar9;
        func_0x000107c61480(puVar9,uVar6);
        func_0x000107c615e8(puVar9);
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (puVar8 == (undefined *)0x0) goto LAB_102e4b664;
      }
      else {
        func_0x000107c6142c(uVar10);
        uVar12 = uVar10 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar10) {
          uVar12 = uVar10;
        }
        puVar9 = (undefined *)0x0;
        func_0x000107c60484(0,lVar3);
        if ((in_x3 & 1) != 0) goto LAB_102e4b5ec;
LAB_102e4b5d4:
        puVar7 = puVar9;
        func_0x000102e4cb04(puVar9);
LAB_102e4b664:
        func_0x000107c615e8(puVar9);
        puVar8 = puVar7;
      }
      lVar3 = *(long *)(unaff_x22 + 0xa8);
      uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
      func_0x000107c61428(*(long *)(unaff_x22 + 0x98) + 0xe0,unaff_x22 + 0x50,0x21,0);
      FUN_102e4bc4c(puVar8);
      func_0x000107c614a8(unaff_x22 + 0x50);
      func_0x000107c61170(uVar1);
    }
    func_0x000107c615e8(uVar6);
    func_0x000107c61170(uVar5);
  }
  func_0x000107c615e8(lVar3);
LAB_102e4b6e4:
                    /* WARNING: Could not recover jumptable at 0x000102e4b700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4b730; end: 102e4b76f;  */

void FUN_102e4b730(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4b770,*(undefined8 *)(*unaff_x22 + 0x98),0);
  return;
}



/* Entry: 102e4b770; end: 102e4bc4b;  */

void FUN_102e4b770(void)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong in_x3;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  long unaff_x22;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar7;
  
  bVar2 = *(byte *)(unaff_x22 + 0xd0);
  if ((bVar2 & 1) == 0) {
    uVar5 = *(ulong *)(unaff_x22 + 0xc0);
    FUN_102e4cf44();
    if ((uVar5 & 1) != 0) {
      lVar12 = *(long *)(unaff_x22 + 0x98);
      func_0x000107c61428(lVar12 + 0xe0,unaff_x22 + 0x50,0x21,0);
      uVar5 = *(ulong *)(lVar12 + 0xe0);
      uVar16 = uVar5 >> 0x3e;
      if (uVar16 == 0) {
        uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar6 = uVar5 & 0xffffffffffffff8;
        if ((uVar5 & 0x8000000000000000) != 0) {
          uVar6 = uVar5;
        }
        uVar7 = uVar6;
        func_0x000107c60480();
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bc48);
          (*pcVar3)();
        }
        uVar7 = uVar6;
        func_0x000107c60480();
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bc4c);
          (*pcVar3)();
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bc08);
        (*pcVar3)();
      }
      uVar6 = uVar6 + 1;
      lVar12 = *(long *)(unaff_x22 + 0x98);
      func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0xc0));
      uVar7 = uVar5;
      func_0x000107c61550();
      *(ulong *)(lVar12 + 0xe0) = uVar5;
      uVar4 = 0;
      if (uVar16 == 0) {
        uVar4 = (uint)uVar7;
      }
      uVar7 = (ulong)uVar4;
      if ((uVar4 != 1) ||
         ((long)(*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x18) >> 1) < (long)uVar6)) {
        if (uVar16 == 0) {
          uVar16 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar16 = uVar5 & 0xffffffffffffff8;
          if ((uVar5 & 0x8000000000000000) != 0) {
            uVar16 = uVar5;
          }
          func_0x000107c60480();
        }
        lVar12 = *(long *)(unaff_x22 + 0x98);
        if ((long)uVar16 <= (long)uVar6) {
          uVar16 = uVar6;
        }
        FUN_102e4c644(uVar7,uVar16,1,uVar5);
        *(ulong *)(lVar12 + 0xe0) = uVar7;
        uVar5 = uVar7;
      }
      uVar16 = *(ulong *)(unaff_x22 + 0xc0);
      lVar12 = *(long *)(unaff_x22 + 0x98);
      in_x3 = uVar16;
      FUN_102e4d3ec(0,0,1);
      *(ulong *)(lVar12 + 0xe0) = uVar5;
      func_0x000107c614a8(unaff_x22 + 0x50);
      func_0x000107c61170(uVar16);
    }
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar12 = *(long *)(unaff_x22 + 200);
  lVar17 = *(long *)(unaff_x22 + 0xb8);
  plVar8 = (long *)(*(long *)(unaff_x22 + 0x98) + 0x88);
  FUN_102e4d3c8(plVar8,*(undefined8 *)(*(long *)(unaff_x22 + 0x98) + 0xa0));
  func_0x00010677978c(*(undefined8 *)(*plVar8 + 0x10),bVar2,1);
  func_0x000107c61170(uVar10);
  if (lVar12 == lVar17) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar9 = *(undefined **)(unaff_x22 + 0xb0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    goto LAB_102e4bb8c;
  }
  puVar13 = *(undefined **)(unaff_x22 + 200);
  uVar5 = *(ulong *)(unaff_x22 + 0x90);
  if ((uVar5 & 0xc000000000000001) == 0) {
    if (*(undefined **)((uVar5 & 0xffffffffffffff8) + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bbd4);
      (*pcVar3)();
    }
    puVar9 = *(undefined **)(uVar5 + (long)puVar13 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    puVar9 = puVar13;
    FUN_102e4cbf0();
  }
  *(undefined **)(unaff_x22 + 0xc0) = puVar9;
  *(undefined **)(unaff_x22 + 200) = puVar13 + 1;
  if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bbd0);
    (*pcVar3)();
  }
  if (*(char *)(*(long *)(unaff_x22 + 0x98) + 0xe8) == '\x01') {
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102e4b730;
    lVar12 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar12,0);
    uVar10 = 0x112df01c0;
    func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar10;
    *(long *)(unaff_x22 + 0x70) = lVar12;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_101a67e30;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105dc6c0;
    func_0x000107c5d6cc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0xb8);
  if (lVar12 < (long)puVar13) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bc0c);
    (*pcVar3)();
  }
  uVar5 = *(ulong *)(unaff_x22 + 0x90);
  if (uVar5 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    if ((long)uVar5 < (long)puVar13) {
LAB_102e4bc0c:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bc10);
      (*pcVar3)();
    }
  }
  else {
    uVar16 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar16 = uVar5;
    }
    func_0x000107c60480();
    if ((long)uVar16 < (long)puVar13) goto LAB_102e4bc0c;
    uVar16 = *(ulong *)(unaff_x22 + 0x90);
    uVar5 = uVar16 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar16) {
      uVar5 = uVar16;
    }
    func_0x000107c60480();
    lVar12 = *(long *)(unaff_x22 + 0xb8);
  }
  if ((long)uVar5 < lVar12) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bc14);
    (*pcVar3)();
  }
  puVar15 = *(undefined **)(unaff_x22 + 0x90);
  func_0x000107c61434(puVar15);
  if (((ulong)puVar15 & 0xc000000000000001) != 0) {
    uVar10 = 0;
    FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
    puVar15 = puVar13;
    do {
      puVar18 = *(undefined **)(unaff_x22 + 0xb8);
      puVar11 = puVar15 + 1;
      func_0x000107c60318(puVar15,*(undefined8 *)(unaff_x22 + 0x90),uVar10);
      puVar15 = puVar11;
    } while (puVar11 != puVar18);
    puVar15 = *(undefined **)(unaff_x22 + 0x90);
  }
  lVar12 = *(long *)(unaff_x22 + 0xb8);
  if ((ulong)puVar15 >> 0x3e == 0) {
    in_x3 = lVar12 << 1;
    puVar11 = puVar13;
    puVar13 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
LAB_102e4bad0:
    uVar10 = 0;
    func_0x000107c605fc(0);
    puVar15 = puVar13;
    func_0x000107c615f4(puVar13,2);
    func_0x000107c61480();
    if (puVar15 == (undefined *)0x0) {
      func_0x000107c615e8(puVar13);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    lVar12 = *(long *)(puVar15 + 0x10);
    func_0x000107c61574();
    if (SBORROW8(in_x3 >> 1,(long)puVar11)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4bc38);
      (*pcVar3)();
    }
    if (lVar12 != (in_x3 >> 1) - (long)puVar11) {
      func_0x000107c615e8();
      goto LAB_102e4bab8;
    }
    puVar11 = puVar13;
    func_0x000107c61480(puVar13,uVar10);
    func_0x000107c615e8(puVar13);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar11 == (undefined *)0x0) goto LAB_102e4bb48;
  }
  else {
    func_0x000107c6142c(puVar15);
    puVar11 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      puVar11 = puVar15;
    }
    func_0x000107c60484(puVar13,lVar12);
    if ((in_x3 & 1) != 0) goto LAB_102e4bad0;
LAB_102e4bab8:
    puVar15 = puVar13;
    func_0x000102e4cb04(puVar13);
LAB_102e4bb48:
    func_0x000107c615e8(puVar13);
    puVar11 = puVar15;
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61428(*(long *)(unaff_x22 + 0x98) + 0xe0,unaff_x22 + 0x50,0x21,0);
  FUN_102e4bc4c(puVar11);
  func_0x000107c614a8(unaff_x22 + 0x50);
  func_0x000107c61170(uVar1);
LAB_102e4bb8c:
  func_0x000107c615e8(uVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c615e8(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000102e4bbbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4bc4c; end: 102e4bd37;  */

void FUN_102e4bc4c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x000102e4c904(uVar2 + uVar4,1);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    FUN_102e4cdb4(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10));
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4bd34);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4bd38);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4bd30);
  (*pcVar1)();
}



/* Entry: 102e4bd38; end: 102e4bd4f;  */

void FUN_102e4bd38(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102e4bd50);
  return;
}



/* Entry: 102e4bd50; end: 102e4becf;  */

void FUN_102e4bd50(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa0) + 0x78);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0xa0) + 0x80);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb0) = lVar2;
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
      func_0x000107c615f0();
      FUN_102e4dc7c();
      puVar3 = PTR_PTR_1126c5e48;
      func_0x000107c610f8();
      func_0x000107c46b60();
      *(undefined **)(unaff_x22 + 0xb8) = puVar3;
      func_0x000107c615e8(lVar2);
      uVar4 = 0;
      FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
      func_0x000107c5fc48(uVar5,uVar4);
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar5;
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102e4bed0;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,1);
      uVar4 = 0x112f20578;
      func_0x0001000285a8(0x112f20578,&UNK_10db590c0);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_102e4c28c;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1105dc4b8;
      *(long *)(unaff_x22 + 0x70) = lVar2;
      func_0x000107c51dc4(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102e4becc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4bed0; end: 102e4bf27;  */

void FUN_102e4bed0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    pcVar1 = FUN_102e4bf28;
  }
  else {
    pcVar1 = FUN_102e4c01c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0xa0),0);
  return;
}



/* Entry: 102e4bf28; end: 102e4c01b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4bf28(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x98);
  lVar8 = *(long *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xc0));
  puVar1 = (undefined8 *)(lVar8 + _DAT_112f20298);
  *puVar1 = uVar6;
  *(undefined1 *)(puVar1 + 1) = 0;
  plVar4 = (long *)(lVar8 + 0x88);
  FUN_102e4d3c8(plVar4,*(undefined8 *)(lVar8 + 0xa0));
  lVar8 = *(long *)(lVar8 + 0xf0);
  if (uVar5 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < *(ulong *)(unaff_x22 + 0x98)) {
      uVar5 = *(ulong *)(unaff_x22 + 0x98);
    }
    func_0x000107c60480(uVar5);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar9 = *plVar4;
  bVar3 = lVar8 == 2;
  func_0x0001067794f0(*(undefined8 *)(lVar9 + 0x10),bVar3,1,1);
  func_0x000106779674(*(undefined8 *)(lVar9 + 0x10),bVar3,uVar5);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102e4bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4c01c; end: 102e4c28b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4c01c(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  long lVar18;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar16 = *(ulong *)(unaff_x22 + 0x98);
  func_0x000107c61654();
  func_0x000107c61170(uVar3);
  if (uVar16 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar13 = uVar16 & 0xffffffffffffff8;
    if ((uVar16 & 0x8000000000000000) != 0) {
      uVar13 = *(ulong *)(unaff_x22 + 0x98);
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar5;
  if (uVar13 != 0) {
    lVar12 = *(long *)(unaff_x22 + 0x98);
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar16 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102e4c16c);
            (*pcVar6)();
          }
          uVar8 = *(ulong *)(lVar12 + 0x20 + uVar14 * 8);
          func_0x000107c61174();
        }
        else {
          uVar8 = uVar14;
          FUN_102e4cbf0(uVar14,*(undefined8 *)(unaff_x22 + 0x98));
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102e4c168);
          (*pcVar6)();
        }
        uVar9 = uVar8;
        FUN_102e4cf44();
        if ((uVar9 & 1) != 0) break;
        func_0x000107c61170(uVar8);
        uVar14 = uVar14 + 1;
        if (uVar1 == uVar13) goto LAB_102e4c190;
      }
      puVar10 = puVar5;
      func_0x000107c61558();
      if (((ulong)puVar10 & 1) == 0) {
        FUN_102e4c9b4(0,*(long *)(puVar5 + 0x10) + 1,1);
      }
      uVar14 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar14) {
        FUN_102e4c9b4(1 < *(ulong *)(puVar5 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar14 + 1;
      *(ulong *)(puVar5 + uVar14 * 8 + 0x20) = uVar8;
      uVar14 = uVar1;
    } while (uVar1 != uVar13);
  }
LAB_102e4c190:
  lVar12 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61428(lVar12 + 0xe0,unaff_x22 + 0x50,0x21,0);
  FUN_102e4bc4c(puVar5);
  func_0x000107c614a8(unaff_x22 + 0x50);
  puVar2 = (undefined8 *)(lVar12 + _DAT_112f20298);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  plVar11 = (long *)(lVar12 + 0x88);
  FUN_102e4d3c8(plVar11,*(undefined8 *)(lVar12 + 0xa0));
  lVar12 = *(long *)(lVar12 + 0xf0);
  if (uVar16 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar16 & 0xffffffffffffff8;
    if ((uVar16 & 0x8000000000000000) != 0) {
      uVar13 = *(ulong *)(unaff_x22 + 0x98);
    }
    func_0x000107c60480(uVar13);
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar18 = *plVar11;
  bVar7 = lVar12 == 2;
  func_0x0001067794f0(*(undefined8 *)(lVar18 + 0x10),bVar7,0,1);
  func_0x000106779674(*(undefined8 *)(lVar18 + 0x10),bVar7,uVar13);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(uVar17);
  func_0x000107c614ac(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000102e4c288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102e4c28c; end: 102e4c333;  */

void FUN_102e4c28c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_2 + 0x20);
  FUN_102e4d3c8(plVar1,*(undefined8 *)(param_2 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102e4c334; end: 102e4c33f;  */

void FUN_102e4c334(void)

{
  return;
}



/* Entry: 102e4c340; end: 102e4c3ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e4c340(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_102e4d5d0(unaff_x20 + 0x88);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  lVar1 = _DAT_112f20278;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + _DAT_112f20290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + _DAT_112f202a0));
  func_0x000107c61470();
  return;
}



/* Entry: 102e4c400; end: 102e4c417;  */

void FUN_102e4c400(void)

{
  FUN_102e4c340();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 102e4c418; end: 102e4c41f;  */

void FUN_102e4c418(void)

{
  if (lRam0000000112f202d8 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e734e00);
  return;
}



/* Entry: 102e4c420; end: 102e4c457;  */

void FUN_102e4c420(undefined8 param_1)

{
  if (lRam0000000112f202d8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e734e00);
  return;
}



/* Entry: 102e4c458; end: 102e4c55b;  */

void FUN_102e4c458(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
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
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBOWV_11034d658 + 0x40;
  puStack_e0 = &UNK_10db58ff0;
  puStack_c0 = &UNK_10db59008;
  puStack_90 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_88 = PTR___sBbWV_11034d660 + 0x40;
  puStack_a0 = &UNK_10db59020;
  puStack_80 = &UNK_10db59038;
  puStack_70 = &UNK_10db59050;
  lVar2 = 0x13f;
  puStack_d8 = puVar1;
  puStack_d0 = puVar1;
  puStack_c8 = puVar1;
  puStack_b8 = puVar1;
  puStack_b0 = puVar1;
  puStack_a8 = puVar1;
  puStack_98 = puVar1;
  puStack_78 = puStack_90;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar2 + -8) + 0x40;
    puStack_60 = &UNK_10db59038;
    puStack_58 = &UNK_10db59038;
    puStack_40 = PTR___sBoWV_11034d678 + 0x40;
    puStack_48 = &UNK_10db59068;
    puStack_38 = &UNK_10db59080;
    puStack_50 = puVar1;
    func_0x000107c61630(param_1,0x100,0x16,&puStack_e0,param_1 + 0x50);
  }
  return;
}



/* Entry: 102e4c55c; end: 102e4c567;  */

void FUN_102e4c55c(void)

{
  return;
}



/* Entry: 102e4c568; end: 102e4c5d3;  */

void FUN_102e4c568(void)

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
    FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f20580;
  plVar5 = (long *)&UNK_10db590c8;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102e4c5d4; end: 102e4c643;  */

void FUN_102e4c5d4(void)

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
    FUN_102e4c644(0,uVar1 + 1,1,uVar3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 102e4c644; end: 102e4c76b;  */

ulong FUN_102e4c644(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4c76c);
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
  FUN_102e4c76c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102e4c768);
      (*pcVar1)();
    }
    FUN_102e4c7ec(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102e4c76c; end: 102e4c7eb;  */

undefined * FUN_102e4c76c(undefined *param_1,undefined *param_2)

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
    FUN_102e4c568();
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



/* Entry: 102e4c7ec; end: 102e4c9b3;  */

long FUN_102e4c7ec(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4c900);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4c904);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
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
      FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102e4c8fc);
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



/* Entry: 102e4c9b4; end: 102e4c9cf;  */

void FUN_102e4c9b4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102e4c9d0();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102e4c9d0; end: 102e4cbef;  */

undefined * FUN_102e4c9d0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4cb04);
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
    FUN_102e4c568();
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
    FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
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



/* Entry: 102e4cbf0; end: 102e4cdb3;  */

ulong FUN_102e4cbf0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4ccd4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4ccd8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c5e30;
    func_0x000107c61168(PTR_PTR_1126c5e30);
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
    puVar4 = PTR_PTR_1126c5e30;
    func_0x000107c61168(PTR_PTR_1126c5e30);
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
  FUN_102e4d664(0,0x112f20570,&PTR_PTR_1126c5e30);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e4cdb4);
  (*pcVar2)();
}


