/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026dfcd0; end: 1026dfd0f;  */

void FUN_1026dfcd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026dfd10,0,0);
  return;
}



/* Entry: 1026dfd10; end: 1026dfe2f;  */

void FUN_1026dfd10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x108));
  lVar9 = *(long *)(unaff_x22 + 0xa0);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  puVar5 = &UNK_11053ae38;
  func_0x000107c613fc(&UNK_11053ae38,0x30,7);
  puVar5[0x10] = lVar9 == 0;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  puVar6 = &UNK_11053ae60;
  func_0x000107c613fc(&UNK_11053ae60,0x20,7);
  *(undefined **)(puVar6 + 0x10) = &UNK_10dace620;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dace628,puVar6,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar6);
  func_0x000107c61170(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001026dfe2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026dfe30; end: 1026dff27;  */

void FUN_1026dfe30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar3 = &UNK_11053adc0;
  func_0x000107c613fc(&UNK_11053adc0,0x30,7);
  puVar3[0x10] = 0;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar1;
  *(undefined8 *)(puVar3 + 0x28) = uVar2;
  puVar4 = &UNK_11053ade8;
  func_0x000107c613fc(&UNK_11053ade8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_10dace600;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dace610,puVar4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x000107c61574(puVar4);
  func_0x000107c614ac(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001026dff24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026dff28; end: 1026e01ef;  */

/* WARNING: Removing unreachable block (ram,0x0001026e01ec) */
/* WARNING: Removing unreachable block (ram,0x0001026e01e8) */

void FUN_1026dff28(ulong *param_1,ulong *param_2,long *param_3)

{
  code *pcVar1;
  undefined **ppuVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  
  ppuVar10 = (undefined **)*param_2;
  ppuVar8 = ppuVar10;
  plVar3 = param_3;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar2 = ppuVar8;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar8);
  ppuVar8 = ppuVar2;
  func_0x000107c51cec();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar2);
  ppuVar2 = ppuVar8;
  func_0x000107c5faec();
  plVar4 = plVar3;
  func_0x000107c61170(ppuVar8);
  ppuVar8 = ppuVar10;
  func_0x000107c4fa44();
  func_0x000107c61180();
  ppuVar9 = ppuVar8;
  func_0x000107c44fdc();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar8);
  ppuVar8 = ppuVar9;
  func_0x000107c4fa4c();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar9);
  ppuVar9 = ppuVar8;
  func_0x000107c5faec();
  plVar5 = plVar4;
  func_0x000107c61170(ppuVar8);
  ppuVar7 = &PTR____CFConstantStringClassReference_110f52c78;
  ppuVar8 = ppuVar7;
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c78);
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar8);
  if ((ppuVar2 == ppuVar7) && (plVar3 == plVar5)) {
    func_0x000107c6142c(plVar3);
    plVar3 = plVar5;
LAB_1026e0090:
    func_0x000107c6142c(plVar3);
    if (SCARRY8(*param_3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e01e4);
      (*pcVar1)();
    }
    *param_3 = *param_3 + 1;
    func_0x000104522c9c(0);
    func_0x00010452281c(ppuVar9,plVar4);
  }
  else {
    ppuVar8 = ppuVar2;
    plVar6 = plVar3;
    func_0x000107c605b8(ppuVar2,plVar3,ppuVar7,plVar5,0);
    func_0x000107c6142c(plVar5);
    if (((ulong)ppuVar8 & 1) != 0) goto LAB_1026e0090;
    ppuVar7 = &PTR____CFConstantStringClassReference_110f52c98;
    ppuVar8 = ppuVar7;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f52c98);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar8);
    if ((ppuVar2 == ppuVar7) && (plVar3 == plVar6)) {
      func_0x000107c6142c(plVar3);
      func_0x000107c6142c(plVar6);
    }
    else {
      func_0x000107c605b8(ppuVar2,plVar3,ppuVar7,plVar6,0);
      func_0x000107c6142c(plVar3);
      func_0x000107c6142c(plVar6);
      if (((ulong)ppuVar2 & 1) == 0) {
        func_0x000107c6142c(plVar4);
        ppuVar9 = (undefined **)0x0;
        goto LAB_1026e00cc;
      }
    }
    func_0x000107c4e3a4();
    func_0x000107c61180();
    if (ppuVar10 == (undefined **)0x0) {
      ppuVar8 = (undefined **)0x0;
    }
    else {
      ppuVar8 = ppuVar10;
      func_0x000107c40808();
      func_0x000107c61170(ppuVar10);
    }
    if (SCARRY8(*param_3,(long)ppuVar8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e01e8);
      (*pcVar1)();
    }
    *param_3 = (long)ppuVar8 + *param_3;
    func_0x000104522c9c(0);
    func_0x00010452292c(ppuVar9,plVar4);
  }
  func_0x000107c6142c(plVar4);
LAB_1026e00cc:
  *param_1 = (ulong)ppuVar9;
  return;
}



/* Entry: 1026e01f0; end: 1026e02ff;  */

void FUN_1026e01f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  uVar1 = 0;
  func_0x000104522c9c(0);
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c5b59c(param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puVar2 = &UNK_11053ae88;
  func_0x000107c613fc(&UNK_11053ae88,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_40 = FUN_1026e0a38;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1011f2f24;
  puStack_48 = &UNK_11053aea0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  pcVar4 = "fetchConversationDetails(for:)";
  func_0x0001000c10c0("fetchConversationDetails(for:)");
  func_0x000107c61180();
  func_0x000107c5dc64(param_2);
  func_0x000107c615e8(pcVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1026e0300; end: 1026e03a3;  */

void FUN_1026e0300(undefined1 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_2 == 0) && (param_1 != (undefined1 *)0x0)) {
    **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
    return;
  }
  FUN_1026e0898();
  puVar1 = &UNK_11053af48;
  func_0x000107c613f8(&UNK_11053af48,param_1,0,0);
  *param_1 = 1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 1026e03a4; end: 1026e0413;  */

void FUN_1026e03a4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e0414,uVar1,uVar2);
  return;
}



/* Entry: 1026e0414; end: 1026e059b;  */

void FUN_1026e0414(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  if (cVar1 == '\x01') {
    lVar3 = 0x6e65735f74616863;
    func_0x000107c5fadc(0x6e65735f74616863,0xe900000000000074);
    uVar4 = 0;
    func_0x000107c5fe40(0);
    lVar5 = lVar3;
    func_0x000107c312f4(lVar3,uVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026e0598);
      (*pcVar2)();
    }
    puVar6 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c40930();
  }
  else {
    lVar3 = 0x745f64656c696166;
    func_0x000107c5fadc(0x745f64656c696166,0xee00646e65735f6f);
    uVar4 = 0;
    func_0x000107c5fe40(0);
    lVar5 = lVar3;
    func_0x000107c312f4(lVar3,uVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar3);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026e059c);
      (*pcVar2)();
    }
    puVar6 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c409d8();
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  func_0x000107c61174(puVar6);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c5c2e0(uVar4);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar6);
  func_0x000107c615e8(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001026e0590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026e059c; end: 1026e05d7;  */

void FUN_1026e059c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026e05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026e05d8; end: 1026e05ef;  */

void FUN_1026e05d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e05f0,0,0);
  return;
}



/* Entry: 1026e05f0; end: 1026e06e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e05f0(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  puVar1 = *(undefined1 **)(lVar3 + _DAT_11307fc48);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0x68) = puVar2;
  func_0x000107c61170();
  if (puVar2 != (undefined1 *)0x0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1026e06e8;
    func_0x000107c61448(unaff_x22 + 0x10,1);
    FUN_1026e01f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_1026e0898();
  func_0x000107c613f8(&UNK_11053af48,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001026e06e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026e06e8; end: 1026e0753;  */

void FUN_1026e06e8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x78) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1026e0754;
  }
  else {
    func_0x000107c61654();
    pcVar1 = (code *)0x1026e078c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026e0754; end: 1026e07bf;  */

void FUN_1026e0754(void)

{
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x0001026e0788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 1026e07c0; end: 1026e0827;  */

void FUN_1026e07c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  uVar3 = *(undefined1 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1026e0c14;
  plVar5[3] = lVar6;
  *(undefined1 *)(plVar5 + 5) = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec(0,uVar1,uVar2);
  lVar6 = lVar4;
  func_0x000107c5fce8();
  plVar5[4] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e0414,lVar4,lVar6);
  return;
}



/* Entry: 1026e0828; end: 1026e0897;  */

void FUN_1026e0828(undefined8 param_1)

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
  plVar3[1] = 0x1026e0c10;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026e0898; end: 1026e08d7;  */

void FUN_1026e0898(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb77f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dace6f0;
  func_0x000107c61520(&UNK_10dace6f0,&UNK_11053af48);
  puRam0000000112eb77f0 = puVar1;
  return;
}



/* Entry: 1026e08d8; end: 1026e08ef;  */

long FUN_1026e08d8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1026e08f0; end: 1026e0923;  */

void FUN_1026e08f0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026e0924; end: 1026e098b;  */

void FUN_1026e0924(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  uVar3 = *(undefined1 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1026e098c;
  plVar5[3] = lVar6;
  *(undefined1 *)(plVar5 + 5) = uVar3;
  lVar4 = 0;
  func_0x000107c5fcec(0,uVar1,uVar2);
  lVar6 = lVar4;
  func_0x000107c5fce8();
  plVar5[4] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e0414,lVar4,lVar6);
  return;
}



/* Entry: 1026e098c; end: 1026e09c7;  */

void FUN_1026e098c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026e09c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026e09c8; end: 1026e0a37;  */

void FUN_1026e09c8(undefined8 param_1)

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
  plVar3[1] = 0x1026e0c18;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1026e0a38; end: 1026e0bc7;  */

void FUN_1026e0a38(undefined1 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if ((param_2 == 0) && (param_1 != (undefined1 *)0x0)) {
    **(undefined8 **)(*(long *)(lVar4 + 0x40) + 0x28) = param_1;
    func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
  FUN_1026e0898();
  puVar1 = &UNK_11053af48;
  func_0x000107c613f8(&UNK_11053af48,param_1,0,0);
  *param_1 = 1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar2);
  return;
}



/* Entry: 1026e0bc8; end: 1026e0c07;  */

void FUN_1026e0bc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb77f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dace6c8;
  func_0x000107c61520(&UNK_10dace6c8,&UNK_11053af48);
  puRam0000000112eb77f8 = puVar1;
  return;
}



/* Entry: 1026e0c08; end: 1026e0c1b;  */

undefined8 * FUN_1026e0c08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  func_0x000107c6157c();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 1026e0c1c; end: 1026e0c67;  */

void FUN_1026e0c1c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026e0cf4,param_1);
  return;
}



/* Entry: 1026e0c68; end: 1026e0cf3;  */

void FUN_1026e0c68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e50c28;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1026e0cf4; end: 1026e0cfb;  */

void FUN_1026e0cf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e50c28;
  func_0x0001000285a8(0x112e50c28,&UNK_10dab6a10);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1026e0cfc; end: 1026e0e9f;  */

void FUN_1026e0cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb7800,&UNK_10dace738);
  puVar1 = &UNK_11053aff8;
  func_0x000107c613fc(&UNK_11053aff8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1026e0ea0,puVar1);
  return;
}



/* Entry: 1026e0ea0; end: 1026e0eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e0ea0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_1026e1bd8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112eb7808) = 0;
  *(long *)(lVar7 + _DAT_112eb7810) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112eb7818) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112eb7820) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112eb7828) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112eb7830) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1026e0eb0; end: 1026e0f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e0eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7808) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7810) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7818) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7820) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7828) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112eb7830) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e0f58; end: 1026e1267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e0f58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puStack_68;
  
  func_0x000103f5a410(0);
  func_0x000107c610f8();
  uVar1 = 0;
  uVar12 = 0;
  func_0x000103f5a2cc(0,0);
  uVar9 = uVar1;
  func_0x00010011df08();
  func_0x000107c61180();
  uVar2 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  func_0x000103f5e1a4(0);
  func_0x000107c610f8();
  func_0x000103f5cdfc(uVar2,uVar12,0x1c,0x23,2,0x93,0,0,0,0,0,0,0,0,0,0);
  func_0x0001000285a8(0x112eb2940,&UNK_10dace7d0);
  puVar3 = &UNK_11053b088;
  func_0x000107c613fc(&UNK_11053b088,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar4 = FUN_1026e1bf8;
  func_0x0001000823a8(FUN_1026e1bf8,puVar3);
  pcVar5 = pcVar4;
  func_0x0001000ad7c4();
  func_0x000107c61574(pcVar4);
  puVar6 = PTR_PTR_1126b07e8;
  func_0x000107c610f8(PTR_PTR_1126b07e8);
  func_0x000107c494fc();
  puVar7 = PTR_PTR_1126b07f0;
  func_0x000107c61168();
  puVar3 = puVar7;
  FUN_1026e1358();
  uVar9 = 0x112d67260;
  puStack_68 = puVar3;
  func_0x0001000285a8(0x112d67260,&UNK_10d92b778);
  func_0x000107c60184();
  func_0x000107c615e8(puVar3);
  func_0x000107c43b84(puVar7);
  func_0x000107c61180();
  func_0x000107c615e8(uVar9);
  puVar8 = PTR_PTR_1126b07f8;
  func_0x000107c610f8(PTR_PTR_1126b07f8);
  func_0x000107c46ea0();
  func_0x000100083b20(&puStack_68);
  puVar3 = puStack_68;
  func_0x000100083b20(&puStack_68);
  puVar10 = puStack_68;
  uVar12 = *(undefined8 *)(puStack_68 + _DAT_112eb7898);
  func_0x000107c615f0(uVar12);
  func_0x000107c61170(puVar10);
  uVar9 = 0;
  FUN_1026e1c00(0,0x112d60fb0,&PTR_PTR_1126b3568);
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar9);
  puVar11 = puVar3;
  func_0x000107c3edb0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(uVar12);
  func_0x000107c61170(puVar10);
  func_0x000100083b20(&puStack_68);
  puVar3 = puStack_68;
  func_0x000107c42c1c(puStack_68);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(pcVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 1026e1268; end: 1026e128f; -[_TtC33MapVisitedBySharingImplementation24VisitedBySharingWorkflow sendToChat] */

void FUN_1026e1268(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1026e0f58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026e1290; end: 1026e1357;  */

void FUN_1026e1290(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar2 = PTR_PTR_1126b1870;
    func_0x000107c610f8();
    func_0x000107c49624();
    puVar1 = puVar2;
    FUN_1026e1358();
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c615f0();
      func_0x000107c61174();
      func_0x000107c57f14(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c615ec(puVar1,2);
    }
    func_0x000107c61170(param_2);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1026e1358; end: 1026e153f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026e1358(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  long lStack_68;
  
  lVar2 = _DAT_112eb7808;
  lVar5 = *(long *)(unaff_x20 + _DAT_112eb7808);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    func_0x000100083b20(&lStack_68);
    lVar7 = lStack_68;
    lVar3 = lStack_68;
    func_0x000107c5dbd4();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    lVar7 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar7 != 0) {
      lVar3 = lVar7;
      func_0x000107c509b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar7);
      if (lVar3 != 0) {
        func_0x000100083b20(&lStack_68);
        lVar7 = lStack_68;
        uVar6 = *(undefined8 *)(lStack_68 + _DAT_112eb78a8);
        uVar1 = ((undefined8 *)(lStack_68 + _DAT_112eb78a8))[1];
        func_0x000107c61434(uVar1);
        func_0x000107c61170(lVar7);
        func_0x000100083b20(&lStack_68);
        lVar7 = *(long *)(lStack_68 + _DAT_112eb78b0);
        func_0x000107c61170();
        puVar4 = PTR_PTR_1126aadc0;
        func_0x000107c610f8(PTR_PTR_1126aadc0);
        func_0x000107c5fadc(uVar6,uVar1);
        func_0x000107c6142c(uVar1);
        func_0x000107c46258((double)lVar7,puVar4);
        func_0x000107c61170(uVar6);
        FUN_1026e1c00(0,0x112eb7860,&PTR_PTR_1126aadc8);
        func_0x000107c614e8();
        lVar7 = lVar3;
        func_0x000107c40994();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar3);
        uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
        *(long *)(unaff_x20 + lVar2) = lVar7;
        func_0x000107c615f0(lVar7);
        func_0x000107c615e8(uVar6);
        goto LAB_1026e1514;
      }
    }
    lVar7 = 0;
  }
LAB_1026e1514:
  func_0x000107c615f0(lVar5);
  return lVar7;
}



/* Entry: 1026e1540; end: 1026e159f; -[_TtC33MapVisitedBySharingImplementation24VisitedBySharingWorkflow init] */

void FUN_1026e1540(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapVisitedBySharingImplementation.VisitedBySharingWorkflow",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e156c);
  (*pcVar1)();
}



/* Entry: 1026e15a0; end: 1026e1617; -[_TtC33MapVisitedBySharingImplementation24VisitedBySharingWorkflow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e15a0(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb7820));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb7810));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb7828));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb7830));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb7818));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb7808));
  return;
}



/* Entry: 1026e1618; end: 1026e17c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e1618(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  undefined8 uVar2;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar2 = *(undefined8 *)(lStack_38 + _DAT_112eb7898);
  func_0x000107c615f0(uVar2);
  func_0x000107c61170(lStack_38);
  func_0x000107c41864(uVar2);
  func_0x000107c615e8(uVar2);
  func_0x0001026e1714();
  puVar1 = &UNK_11053b020;
  func_0x000107c613fc(&UNK_11053b020,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dace748,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 1026e17c4; end: 1026e17db;  */

void FUN_1026e17c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e17dc,0,0);
  return;
}



/* Entry: 1026e17dc; end: 1026e190f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e17dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar1 = *(long *)(unaff_x22 + 0x58);
  lVar10 = *(long *)(unaff_x22 + 0x60);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  *(long *)(unaff_x22 + 0x70) = lVar3;
  lVar8 = *(long *)(unaff_x22 + 0x20);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  lVar9 = *(long *)(lVar10 + _DAT_113034f28);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar1 + _DAT_112eb7820);
  func_0x000100083b20(unaff_x22 + 0x40);
  lVar10 = *(long *)(unaff_x22 + 0x40);
  plVar6 = (long *)(lVar10 + _DAT_112eb78a8);
  lVar1 = *plVar6;
  lVar4 = plVar6[1];
  *(long *)(unaff_x22 + 0x88) = lVar4;
  func_0x000107c61434(lVar4);
  func_0x000107c61170(lVar10);
  func_0x000100083b20(unaff_x22 + 0x48);
  lVar7 = *(long *)(unaff_x22 + 0x48);
  plVar6 = (long *)(lVar7 + _DAT_112eb78a0);
  lVar10 = *plVar6;
  lVar5 = plVar6[1];
  *(long *)(unaff_x22 + 0x90) = lVar5;
  func_0x000107c61434(lVar5);
  func_0x000107c61170(lVar7);
  plVar6 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1026e1910;
  plVar6[0x1b] = lVar3;
  plVar6[0x1c] = lVar8;
  plVar6[0x19] = lVar5;
  plVar6[0x1a] = lVar2;
  plVar6[0x17] = lVar4;
  plVar6[0x18] = lVar10;
  plVar6[0x15] = lVar9;
  plVar6[0x16] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026df808,0,0);
  return;
}



/* Entry: 1026e1910; end: 1026e199b;  */

void FUN_1026e1910(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x90);
  uVar5 = *(undefined8 *)(lVar4 + 0x88);
  uVar2 = *(undefined8 *)(lVar4 + 0x70);
  uVar3 = *(undefined8 *)(lVar4 + 0x78);
  uVar6 = *(undefined8 *)(lVar4 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x98));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e199c,0,0);
  return;
}



/* Entry: 1026e199c; end: 1026e1a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e199c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar1 = _DAT_112eb78b8;
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar2 + _DAT_112eb78b8,unaff_x22 + 0x28,0,0);
  lVar1 = lVar2 + lVar1;
  func_0x000107c61618();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c4dd30(lVar1);
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026e1a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026e1a1c; end: 1026e1a7f;  */

void FUN_1026e1a1c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1026e1a80;
  plVar3[0xb] = lVar1;
  plVar3[0xc] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026e17dc,0,0);
  return;
}



/* Entry: 1026e1a80; end: 1026e1abb;  */

void FUN_1026e1a80(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001026e1ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026e1abc; end: 1026e1b0b; -[_TtC33MapVisitedBySharingImplementation24VisitedBySharingWorkflow didSendWithSelectionState:] */

/* WARNING: Possible PIC construction at 0x0001026e1af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026e1af8) */

void FUN_1026e1abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1026e1618(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1026e1b0c; end: 1026e1bb7; -[_TtC33MapVisitedBySharingImplementation24VisitedBySharingWorkflow didDismissWithSelectedItems:sendToDismissSource:] */

void FUN_1026e1b0c(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001026e1b34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026e1bb8; end: 1026e1bd7;  */

undefined1  [16] FUN_1026e1bb8(void)

{
  return ZEXT816(0x11053b048);
}



/* Entry: 1026e1bd8; end: 1026e1bf7;  */

void FUN_1026e1bd8(void)

{
  func_0x000107c61168(&PTR_PTR_112859810);
  return;
}



/* Entry: 1026e1bf8; end: 1026e1bff;  */

void FUN_1026e1bf8(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    puVar3 = PTR_PTR_1126b1870;
    func_0x000107c610f8();
    func_0x000107c49624();
    puVar2 = puVar3;
    FUN_1026e1358();
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c615f0();
      func_0x000107c61174();
      func_0x000107c57f14(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c615ec(puVar2,2);
    }
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1026e1c00; end: 1026e1c3f;  */

void FUN_1026e1c00(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026e1c40; end: 1026e1c5f; -[_TtC34MapVisitedBySharingFactoryServices34MapVisitedBySharingFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e1c40(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb7868));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026e1c60; end: 1026e1cf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e1c60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7868) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e1cf8; end: 1026e1d2b;  */

void FUN_1026e1cf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e1d2c; end: 1026e1d3b; -[_TtC34MapVisitedBySharingFactoryServices34MapVisitedBySharingFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e1d2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb7868));
  return;
}



/* Entry: 1026e1d3c; end: 1026e1d5b;  */

void FUN_1026e1d3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128598f8);
  return;
}



/* Entry: 1026e1d5c; end: 1026e1e6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1026e1d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112eb78b8;
  func_0x000107c61614(unaff_x20 + _DAT_112eb78b8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb7898) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb78a0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112eb78a8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112eb78b0) = param_6;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_7);
  return puVar4;
}



/* Entry: 1026e1e6c; end: 1026e1f77; -[_TtC24MapVisitedBySharingScope24MapVisitedBySharingScope initWithUiContainer:pivotName:creatorID:numPlaces:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e1e6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar5 = param_2;
  func_0x000107c5faec();
  lVar3 = _DAT_112eb78b8;
  func_0x000107c61614(param_1 + _DAT_112eb78b8,0);
  *(undefined8 *)(param_1 + _DAT_112eb7898) = param_3;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb78a0);
  *puVar1 = param_4;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_112eb78a8);
  *puVar1 = param_5;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_1 + _DAT_112eb78b0) = param_6;
  func_0x000107c61428(param_1 + lVar3,auStack_78,1,0);
  func_0x000107c61604(param_1 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = param_1;
  lStack_80 = lVar4;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_88,puVar2);
  return;
}



/* Entry: 1026e1f78; end: 1026e1fab;  */

void FUN_1026e1f78(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e1fac; end: 1026e202f; -[_TtC24MapVisitedBySharingScope24MapVisitedBySharingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026e1fac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb7898));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb78a0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112eb78a8 + 8));
  param_1 = param_1 + _DAT_112eb78b8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e2030; end: 1026e204f;  */

void FUN_1026e2030(void)

{
  func_0x000107c61168(&PTR_PTR_1128599b8);
  return;
}



/* Entry: 1026e2050; end: 1026e206f; -[MapFootstepsTrayFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2050(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112eb78e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1026e2070; end: 1026e20bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2070(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb78e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e20bc; end: 1026e2117;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e20bc(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112eb78e8) = param_1;
  func_0x0001026e20f8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e2118; end: 1026e2173; -[MapFootstepsTrayFactoryServices init] */

void FUN_1026e2118(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFootstepsTrayScope.MapFootstepsTrayFactoryServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e2144);
  (*pcVar1)();
}



/* Entry: 1026e2174; end: 1026e2183; -[MapFootstepsTrayFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112eb78e8));
  return;
}



/* Entry: 1026e2184; end: 1026e21c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2184(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eb7918;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7918,auStack_38,0,0);
  func_0x000107c61618(unaff_x20 + lVar1);
  return;
}



/* Entry: 1026e21c8; end: 1026e242b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e21c8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7918;
  func_0x000107c61428(unaff_x20 + _DAT_112eb7918,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026e242c; end: 1026e244b;  */

void FUN_1026e242c(void)

{
  func_0x000107c61168(&PTR_PTR_112859b58);
  return;
}



/* Entry: 1026e244c; end: 1026e24c7; -[_TtC21MapFootstepsTrayScope21MapFootstepsTrayScope initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e244c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eb7918;
  func_0x000107c61614(param_1 + _DAT_112eb7918,0);
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  lVar1 = param_1 + lVar1;
  func_0x000107c61604(lVar1,param_3);
  FUN_1026e242c();
  lStack_58 = param_1;
  lStack_50 = lVar1;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e24c8; end: 1026e2523; -[_TtC21MapFootstepsTrayScope21MapFootstepsTrayScope init] */

void FUN_1026e24c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapFootstepsTrayScope.MapFootstepsTrayScope",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e24f4);
  (*pcVar1)();
}



/* Entry: 1026e2524; end: 1026e2533; -[_TtC21MapFootstepsTrayScope21MapFootstepsTrayScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026e2524(long param_1)

{
  param_1 = param_1 + _DAT_112eb7918;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e2534; end: 1026e2557;  */

undefined8 FUN_1026e2534(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e2558; end: 1026e2613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026e2558(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112eb7950;
  func_0x000107c61614(unaff_x20 + _DAT_112eb7950,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb7948) = param_1;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1026e2614; end: 1026e26b7; -[MapScreenshotScope initWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2614(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112eb7950;
  func_0x000107c61614(param_1 + _DAT_112eb7950,0);
  *(undefined8 *)(param_1 + _DAT_112eb7948) = param_3;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 1026e26b8; end: 1026e26eb;  */

void FUN_1026e26b8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e26ec; end: 1026e2747; -[MapScreenshotScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026e26ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb7948));
  param_1 = param_1 + _DAT_112eb7950;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e2748; end: 1026e2767;  */

void FUN_1026e2748(void)

{
  func_0x000107c61168(&PTR_PTR_112859c30);
  return;
}



/* Entry: 1026e2768; end: 1026e27b3;  */

void FUN_1026e2768(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb7980,&UNK_10dace8e0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026e27b4,param_1);
  return;
}



/* Entry: 1026e27b4; end: 1026e281b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e27b4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026e2944();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112eb7988) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1026e281c; end: 1026e28bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e281c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb7988) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e28bc; end: 1026e2943; -[_TtC41MapInferredSchoolOnboardingFactoryService41MapInferredSchoolOnboardingFactoryService build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e28bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&uStack_40);
  func_0x000100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 1026e2944; end: 1026e2993;  */

void FUN_1026e2944(void)

{
  func_0x000107c61168(&PTR_PTR_112859cf8);
  return;
}



/* Entry: 1026e2994; end: 1026e29b3; -[_TtC41MapInferredSchoolOnboardingFactoryService41MapInferredSchoolOnboardingFactoryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2994(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112eb7988));
  return;
}



/* Entry: 1026e29b4; end: 1026e29ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e29b4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = unaff_x20 + _DAT_112eb79c0;
  func_0x000107c61428(lVar1,auStack_38,0,0);
  func_0x000107c61618(lVar1);
  return;
}



/* Entry: 1026e2a00; end: 1026e2bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2a00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = unaff_x20 + _DAT_112eb79c0;
  func_0x000107c61428(lVar1,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1026e2bd8; end: 1026e2bf7;  */

void FUN_1026e2bd8(void)

{
  func_0x000107c61168(&PTR_PTR_112859dc0);
  return;
}



/* Entry: 1026e2bf8; end: 1026e2c67; -[_TtC32MapInferredSchoolOnboardingScope32MapInferredSchoolOnboardingScope initWithUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2bf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1 + _DAT_112eb79c0;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(param_1 + _DAT_112eb79b8) = param_3;
  FUN_1026e2bd8();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1026e2c68; end: 1026e2def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026e2c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_112eb79c0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112eb79b8) = param_1;
  func_0x000107c61428();
  *(undefined8 *)(lVar1 + 8) = param_3;
  func_0x000107c61604(lVar1,param_2);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 1026e2df0; end: 1026e2e1f;  */

void FUN_1026e2df0(void)

{
  FUN_1026e2bd8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1026e2e20; end: 1026e2e7b; -[_TtC32MapInferredSchoolOnboardingScope32MapInferredSchoolOnboardingScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026e2e20(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112eb79b8));
  param_1 = param_1 + _DAT_112eb79c0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e2e7c; end: 1026e2e8b; -[MapMemoriesWorkflowFactoryServices builder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112eb79f0));
  return;
}



/* Entry: 1026e2e8c; end: 1026e2f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2e8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112eb79f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e2f24; end: 1026e2f83; -[MapMemoriesWorkflowFactoryServices init] */

void FUN_1026e2f24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapMemoriesWorkflowFactoryServices.MapMemoriesWorkflowFactoryServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e2f50);
  (*pcVar1)();
}



/* Entry: 1026e2f84; end: 1026e2f93; -[MapMemoriesWorkflowFactoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e2f84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb79f0));
  return;
}



/* Entry: 1026e2f94; end: 1026e2fb3;  */

void FUN_1026e2f94(void)

{
  func_0x000107c61168(&PTR_PTR_112859ea8);
  return;
}



/* Entry: 1026e2fb4; end: 1026e30d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1026e2fb4(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_58 [8];
  undefined1 auStack_48 [24];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112eb7a20;
  func_0x000107c61614(unaff_x20 + _DAT_112eb7a20,0);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_48,1,0);
  func_0x000107c61604(unaff_x20 + lVar1,param_1);
  puVar2 = auStack_58;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  return puVar2;
}



/* Entry: 1026e30d4; end: 1026e3153; -[SCMapMemoriesWorkflowScope initWithDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026e30d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112eb7a20;
  func_0x000107c61614(param_1 + _DAT_112eb7a20,0);
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  lStack_58 = param_1;
  lStack_50 = lVar2;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1026e3154; end: 1026e31b3; -[SCMapMemoriesWorkflowScope init] */

void FUN_1026e3154(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapMemoriesWorkflowScope.MapMemoriesWorkflowScope",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026e3180);
  (*pcVar1)();
}



/* Entry: 1026e31b4; end: 1026e31c3; -[SCMapMemoriesWorkflowScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026e31b4(long param_1)

{
  param_1 = param_1 + _DAT_112eb7a20;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e31c4; end: 1026e31e7;  */

undefined8 FUN_1026e31c4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1026e31e8; end: 1026e3207;  */

void FUN_1026e31e8(void)

{
  func_0x000107c61168(&PTR_PTR_112859f68);
  return;
}


