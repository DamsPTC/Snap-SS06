/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1018ecf84; end: 1018ecf97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018ecf84(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)(*(undefined8 *)(*unaff_x20 + _DAT_112dd1550));
  return;
}



/* Entry: 1018ecf98; end: 1018ecfdb;  */

void FUN_1018ecf98(undefined8 *param_1)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_1018ec34c(&uStack_48);
  param_1[1] = uStack_40;
  *param_1 = uStack_48;
  param_1[3] = uStack_30;
  param_1[2] = uStack_38;
  *(undefined1 *)(param_1 + 4) = uStack_28;
  return;
}



/* Entry: 1018ecfdc; end: 1018ed123; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker startImpressionFor:viewLocation:completionHandler:] */

void FUN_1018ecfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040f478;
  func_0x000107c613fc(&UNK_11040f478,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040f4a0;
  func_0x000107c613fc(&UNK_11040f4a0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9926f0;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040f4c8;
  func_0x000107c613fc(&UNK_11040f4c8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9926f8;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d992700,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018ed124; end: 1018ed187;  */

void FUN_1018ed124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000100b92084();
  puVar2 = (undefined8 *)(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *(undefined8 **)(unaff_x22 + 0x30) = puVar2;
  func_0x0001041e66ac();
  *(undefined8 **)(unaff_x22 + 0x38) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed188,*puVar2,0);
  return;
}



/* Entry: 1018ed188; end: 1018ed1d7;  */

void FUN_1018ed188(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = **(undefined8 **)(unaff_x22 + 0x38);
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed1d8,uVar1,0);
  return;
}



/* Entry: 1018ed1d8; end: 1018ed26f;  */

void FUN_1018ed1d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x0001041ed0c4(uVar3);
  FUN_1018eb908(uVar3,uVar2,0);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x0001018ef724(uVar3,&SUB_100b92084);
  (**(code **)(lVar4 + 0x10))(lVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001018ed26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ed270; end: 1018ed2cf;  */

void FUN_1018ed270(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
  lVar1 = 0;
  func_0x000100b92084();
  puVar2 = (undefined8 *)(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *(undefined8 **)(unaff_x22 + 0x78) = puVar2;
  func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed2d0,*puVar2,0);
  return;
}



/* Entry: 1018ed2d0; end: 1018ed3cb;  */

void FUN_1018ed2d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x0001041ed0c4(uVar1);
  FUN_1018eb5bc(unaff_x22 + 0x38,uVar1);
  if (*(long *)(unaff_x22 + 0x50) == 0) {
    func_0x0001018ef724(*(undefined8 *)(unaff_x22 + 0x78),&SUB_100b92084);
    func_0x0001018ef6e4(unaff_x22 + 0x38,0x112dd15a0,&UNK_10d9925d8);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    FUN_1018ee58c(unaff_x22 + 0x38,unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar3 = *(long *)(unaff_x22 + 0x30);
    func_0x0001000a8868(unaff_x22 + 0x10,uVar1);
    (**(code **)(lVar3 + 0x10))(uVar4,uVar1,lVar3);
    FUN_1018ebbc4(unaff_x22 + 0x10,uVar2);
    func_0x0001018ef724(uVar2,&SUB_100b92084);
    func_0x0001000834e4(unaff_x22 + 0x10);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001018ed3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ed3cc; end: 1018ed513; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker pauseImpressionFor:viewLocation:completionHandler:] */

void FUN_1018ed3cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040f400;
  func_0x000107c613fc(&UNK_11040f400,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040f428;
  func_0x000107c613fc(&UNK_11040f428,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9926c8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040f450;
  func_0x000107c613fc(&UNK_11040f450,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9926d0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d9926d8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018ed514; end: 1018ed553;  */

void FUN_1018ed514(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 **)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed554,*param_1,0);
  return;
}



/* Entry: 1018ed554; end: 1018ed5bb;  */

void FUN_1018ed554(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  plVar3 = (long *)0x80;
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61174(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1018ed5bc;
  lVar5 = *(long *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  plVar3[0xd] = *(long *)(unaff_x22 + 0x18);
  plVar3[0xe] = lVar5;
  plVar3[0xc] = lVar1;
  lVar1 = 0;
  func_0x000100b92084();
  puVar2 = (undefined8 *)(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar3[0xf] = (long)puVar2;
  func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed2d0,*puVar2,0);
  return;
}



/* Entry: 1018ed5bc; end: 1018ed623;  */

void FUN_1018ed5bc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  lVar3 = *(long *)(lVar2 + 0x20);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  lVar5 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x30));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar3 + 0x10))(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001018ed620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Entry: 1018ed624; end: 1018ed76b; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker endImpressionFor:viewLocation:completionHandler:] */

void FUN_1018ed624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040f388;
  func_0x000107c613fc(&UNK_11040f388,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040f3b0;
  func_0x000107c613fc(&UNK_11040f3b0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d9926a8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040f3d8;
  func_0x000107c613fc(&UNK_11040f3d8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d9926b0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d9926b8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018ed76c; end: 1018ed7cf;  */

void FUN_1018ed76c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000100b92084();
  puVar2 = (undefined8 *)(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *(undefined8 **)(unaff_x22 + 0x30) = puVar2;
  func_0x0001041e66ac();
  *(undefined8 **)(unaff_x22 + 0x38) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed7d0,*puVar2,0);
  return;
}



/* Entry: 1018ed7d0; end: 1018ed81f;  */

void FUN_1018ed7d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = **(undefined8 **)(unaff_x22 + 0x38);
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed820,uVar1,0);
  return;
}



/* Entry: 1018ed820; end: 1018ed8b3;  */

void FUN_1018ed820(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x0001041ed0c4(uVar3);
  FUN_1018ec058(uVar3,uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x0001018ef724(uVar3,&SUB_100b92084);
  (**(code **)(lVar4 + 0x10))(lVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001018ed8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ed8b4; end: 1018ed9fb; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker restartImpressionIfThresholdMetFor:viewLocation:completionHandler:] */

void FUN_1018ed8b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040f310;
  func_0x000107c613fc(&UNK_11040f310,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040f338;
  func_0x000107c613fc(&UNK_11040f338,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d992688;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040f360;
  func_0x000107c613fc(&UNK_11040f360,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d992690;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d992698,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018ed9fc; end: 1018eda5f;  */

void FUN_1018ed9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  func_0x000100b92084();
  puVar2 = (undefined8 *)(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *(undefined8 **)(unaff_x22 + 0x30) = puVar2;
  func_0x0001041e66ac();
  *(undefined8 **)(unaff_x22 + 0x38) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018eda60,*puVar2,0);
  return;
}



/* Entry: 1018eda60; end: 1018edaaf;  */

void FUN_1018eda60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = **(undefined8 **)(unaff_x22 + 0x38);
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018edab0,uVar1,0);
  return;
}



/* Entry: 1018edab0; end: 1018edb47;  */

void FUN_1018edab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61174(uVar5);
  func_0x0001041ed0c4(uVar3);
  FUN_1018eb908(uVar3,uVar2,1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar5);
  func_0x0001018ef724(uVar3,&SUB_100b92084);
  (**(code **)(lVar4 + 0x10))(lVar4);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001018edb44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018edb48; end: 1018edc8b; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker createSKOverlayConfiguratorWithParams:completionHandler:] */

void FUN_1018edb48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040f298;
  func_0x000107c613fc(&UNK_11040f298,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040f2c0;
  func_0x000107c613fc(&UNK_11040f2c0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d992668;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040f2e8;
  func_0x000107c613fc(&UNK_11040f2e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d992670;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d992678,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018edc8c; end: 1018edcef;  */

void FUN_1018edc8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  func_0x000100b92084();
  puVar2 = (undefined8 *)(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *(undefined8 **)(unaff_x22 + 0x28) = puVar2;
  func_0x0001041e66ac();
  *(undefined8 **)(unaff_x22 + 0x30) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018edcf0,*puVar2,0);
  return;
}



/* Entry: 1018edcf0; end: 1018edd4b;  */

void FUN_1018edcf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar1 = **(undefined8 **)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018edd4c,uVar1,0);
  return;
}



/* Entry: 1018edd4c; end: 1018eddab;  */

void FUN_1018edd4c(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x10));
  func_0x0001041ed0c4(uVar4);
  plVar2 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1018eddac;
  lVar3 = *(long *)(unaff_x22 + 0x20);
  plVar1 = *(long **)(unaff_x22 + 0x28);
  plVar2[0xc] = (long)plVar1;
  plVar2[0xd] = lVar3;
  func_0x0001041e66ac();
  lVar3 = *plVar1;
  plVar2[0xe] = lVar3;
  func_0x000107c6157c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ec960,lVar3,0);
  return;
}



/* Entry: 1018eddac; end: 1018ede2b;  */

void FUN_1018eddac(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x40));
  uVar2 = *(undefined8 *)(lVar3 + 0x38);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x50) = param_1;
    func_0x0001018ef724(*(undefined8 *)(lVar3 + 0x28),&SUB_100b92084);
    pcVar1 = FUN_1018ede2c;
  }
  else {
    pcVar1 = FUN_1018edea4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 1018ede2c; end: 1018edea3;  */

void FUN_1018ede2c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3,0);
  func_0x000107c615e8(uVar3);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001018edea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018edea4; end: 1018edf47;  */

void FUN_1018edea4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar1);
  func_0x0001018ef724(uVar2,&SUB_100b92084);
  uVar4 = uVar5;
  func_0x000107c5ed2c(uVar5);
  func_0x000107c614ac(uVar5);
  (**(code **)(lVar3 + 0x10))(lVar3,0,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001018edf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018edf48; end: 1018edfd7;  */

void FUN_1018edf48(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  lVar1 = 0;
  func_0x000100b92084();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = 0;
  func_0x000107c5fcec();
  uVar4 = uVar3;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018edfd8,uVar3,uVar4);
  return;
}



/* Entry: 1018edfd8; end: 1018ee067;  */

void FUN_1018edfd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = 0;
  FUN_1018ee5a4();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined ***)(unaff_x22 + 0x30) = &PTR_DAT_11040f850;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x0001041ed0c4(uVar7);
  plVar6 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1018ee068;
  lVar4 = *(long *)(unaff_x22 + 0x48);
  plVar6[0xd] = *(long *)(unaff_x22 + 0x50);
  plVar6[0xe] = lVar4;
  plVar6[0xc] = unaff_x22 + 0x10;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar6[0xf] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar6[0x10] = lVar3;
  plVar6[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ec5ec,lVar3,lVar4);
  return;
}



/* Entry: 1018ee068; end: 1018ee0db;  */

void FUN_1018ee068(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x70));
  if (unaff_x20 == 0) {
    func_0x0001018ef724(*(undefined8 *)(lVar4 + 0x50),&SUB_100b92084);
    func_0x0001000834e4(lVar4 + 0x10);
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_1018ee0dc;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = (code *)0x1018ee118;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 1018ee0dc; end: 1018ee16b;  */

void FUN_1018ee0dc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001018ee114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018ee16c; end: 1018ee2bb; -[_TtC35AppImpressionServicesImplementation20AppImpressionTracker loadStoreProductViewController:params:completionHandler:] */

void FUN_1018ee16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11040f220;
  func_0x000107c613fc(&UNK_11040f220,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11040f248;
  func_0x000107c613fc(&UNK_11040f248,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d992628;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11040f270;
  func_0x000107c613fc(&UNK_11040f270,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d992638;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d992648,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 1018ee2bc; end: 1018ee32b;  */

void FUN_1018ee2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ee32c,uVar1,uVar2);
  return;
}



/* Entry: 1018ee32c; end: 1018ee3ab;  */

void FUN_1018ee32c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  plVar7 = (long *)0x80;
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1018ee3ac;
  lVar6 = *(long *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar7[8] = *(long *)(unaff_x22 + 0x18);
  plVar7[9] = lVar6;
  plVar7[7] = lVar4;
  lVar4 = 0;
  func_0x000100b92084();
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar7[10] = uVar5;
  lVar6 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar6;
  func_0x000107c5fce8();
  plVar7[0xb] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar7[0xc] = lVar6;
  plVar7[0xd] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018edfd8,lVar6,lVar4);
  return;
}



/* Entry: 1018ee3ac; end: 1018ee45f;  */

void FUN_1018ee3ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar5 + 0x28);
  uVar1 = *(undefined8 *)(lVar5 + 0x10);
  uVar2 = *(undefined8 *)(lVar5 + 0x18);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x38));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  lVar5 = *(long *)(lVar5 + 0x20);
  if (unaff_x20 == 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,0);
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    (**(code **)(lVar5 + 0x10))(lVar5,unaff_x20);
    func_0x000107c61170(unaff_x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0001018ee45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 1018ee460; end: 1018ee4db;  */

void FUN_1018ee460(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018ee498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018ee4dc; end: 1018ee58b;  */

long FUN_1018ee4dc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1018ee58c; end: 1018ee5a3;  */

undefined8 * FUN_1018ee58c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1018ee5a4; end: 1018ee5e7;  */

void FUN_1018ee5a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dd15a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___SKStoreProductViewController_1126b5778;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dd15a8 = puVar1;
  return;
}



/* Entry: 1018ee5e8; end: 1018ee6bf;  */

void FUN_1018ee5e8(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1018ee968();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_1018ee58c(*(long *)(lVar2 + 0x38) + param_2 * 0x28,param_1);
    FUN_1018ef228(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 1018ee6c0; end: 1018ee7e7;  */

undefined8 * FUN_1018ee6c0(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  puVar8 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)puVar8 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1018ee7a4);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1018eec9c(lVar4,param_4 & 1);
    puVar3 = param_3;
    func_0x000100029284();
    lVar2 = param_2;
    if (((uint)puVar8 & 1) != ((uint)puVar3 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1018ee760);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1018ee968();
    lVar4 = *unaff_x20;
    goto joined_r0x0001018ee7b8;
  }
  lVar4 = *unaff_x20;
joined_r0x0001018ee7b8:
  if (((ulong)puVar8 & 1) != 0) {
    puVar8 = (undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 0x28);
    func_0x0001000834e4(puVar8);
    uVar10 = param_1[1];
    uVar9 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar8[4] = param_1[4];
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    puVar8[3] = uVar12;
    puVar8[2] = uVar11;
    return puVar8;
  }
  func_0x0001018ee520();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return param_3;
}



/* Entry: 1018ee7e8; end: 1018ee967;  */

void FUN_1018ee7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  ulong param_5,ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar4 = param_5;
  uVar5 = param_6;
  func_0x000100029284();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018ee8dc);
    (*pcVar3)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    FUN_1018eef64(lVar7,param_7 & 1);
    uVar4 = param_5;
    uVar8 = param_6;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1018ee898);
      (*pcVar3)();
    }
  }
  else if ((param_7 & 1) == 0) {
    FUN_1018eeb10();
    lVar7 = *unaff_x20;
    goto joined_r0x0001018ee8f0;
  }
  lVar7 = *unaff_x20;
joined_r0x0001018ee8f0:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
    *puVar1 = param_1;
    puVar1[1] = param_3;
    *(undefined1 *)(puVar1 + 2) = param_4;
    puVar1[3] = param_2;
    return;
  }
  lVar6 = lVar7 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_5;
  puVar2[1] = param_6;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar4 * 0x20);
  *puVar1 = param_1;
  puVar1[1] = param_3;
  *(undefined1 *)(puVar1 + 2) = param_4;
  puVar1[3] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1018ee968);
    (*pcVar3)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_6);
  return;
}



/* Entry: 1018ee968; end: 1018eeb0f;  */

void FUN_1018ee968(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [40];
  
  func_0x0001000285a8(0x112dd15b0,&UNK_10d992920);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c61574(lVar11);
LAB_1018eeae8:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
  if (uVar7 == 0) goto LAB_1018eea50;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x28;
      FUN_1018ee4dc(*(long *)(lVar11 + 0x38) + lVar10,auStack_88);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_1018ee58c(auStack_88,*(long *)(lVar6 + 0x38) + lVar10);
      func_0x000107c61434(uVar4);
      if (uVar7 != 0) break;
LAB_1018eea50:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018eeb10);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar11);
          goto LAB_1018eeae8;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 1018eeb10; end: 1018eec9b;  */

void FUN_1018eeb10(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long *unaff_x20;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  func_0x0001000285a8(0x112dd15b8,&UNK_10d992600);
  lVar14 = *unaff_x20;
  lVar7 = lVar14;
  func_0x000107c6048c();
  if (*(long *)(lVar14 + 0x10) != 0) {
    lVar1 = lVar14 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar14 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar14 + 0x40);
    if (uVar8 == 0) goto LAB_1018eebec;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar15 << 6;
        lVar12 = uVar10 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + lVar12);
        uVar4 = puVar2[1];
        lVar11 = uVar10 * 0x20;
        puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x38) + lVar11);
        uVar16 = *puVar3;
        uVar13 = puVar3[1];
        uVar5 = *(undefined1 *)(puVar3 + 2);
        uVar17 = puVar3[3];
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar12);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar11);
        *puVar2 = uVar16;
        puVar2[1] = uVar13;
        *(undefined1 *)(puVar2 + 2) = uVar5;
        puVar2[3] = uVar17;
        func_0x000107c61434();
        if (uVar8 != 0) break;
LAB_1018eebec:
        do {
          lVar11 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1018eec9c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar11) goto LAB_1018eec74;
          uVar8 = *(ulong *)(lVar1 + lVar11 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar15 = lVar11;
      }
    } while( true );
  }
LAB_1018eec74:
  func_0x000107c61574(lVar14);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1018eec9c; end: 1018eef63;  */

void FUN_1018eec9c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [40];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112dd15b0;
  func_0x0001000285a8(0x112dd15b0,&UNK_10d992920);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_1018eef30:
    func_0x000107c61574(lVar15);
LAB_1018eef38:
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar8 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018eef60);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar15);
            goto LAB_1018eef38;
          }
          uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
          if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
            *puVar17 = -1L << (uVar16 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar15 + 0x10) = 0;
          goto LAB_1018eef30;
        }
        uVar16 = puVar17[lVar18];
        lVar8 = lVar8 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar8;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar10 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    lVar8 = *(long *)(lVar15 + 0x38) + uVar10 * 0x28;
    if ((param_2 & 1) == 0) {
      FUN_1018ee4dc(lVar8,auStack_88);
      func_0x000107c61434(uVar3);
    }
    else {
      FUN_1018ee58c(lVar8,auStack_88);
    }
    func_0x000107c6068c(auStack_d0,*(undefined8 *)(lVar7 + 0x28));
    puVar9 = auStack_d0;
    func_0x000107c5fb58(puVar9,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar10 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar4 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar10) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1018eef64);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar10) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar10 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar10 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    FUN_1018ee58c(auStack_88,*(long *)(lVar7 + 0x38) + uVar10 * 0x28);
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar8 = lVar18;
  } while( true );
}



/* Entry: 1018eef64; end: 1018ef227;  */

void FUN_1018eef64(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *unaff_x20;
  long lVar16;
  undefined8 uVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_b8 [72];
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x18);
  if (*(long *)(lVar16 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112dd15b8;
  func_0x0001000285a8(0x112dd15b8,&UNK_10d992600);
  lVar8 = lVar16;
  func_0x000107c60490(lVar16,lVar1,param_2,uVar7);
  if (*(long *)(lVar16 + 0x10) == 0) {
LAB_1018ef1f0:
    func_0x000107c61574(lVar16);
    *unaff_x20 = lVar8;
    return;
  }
  puVar19 = (ulong *)(lVar16 + 0x40);
  uVar13 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  lVar1 = lVar8 + 0x40;
  lVar11 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1018ef224);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1) != 0) {
            uVar18 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
            if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
              *puVar19 = -1L << (uVar18 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar19,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar16 + 0x10) = 0;
          }
          goto LAB_1018ef1f0;
        }
        uVar18 = puVar19[lVar20];
        lVar11 = lVar11 + 1;
      } while (uVar18 == 0);
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar20 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + uVar10 * 0x10);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar10 * 0x20);
    uVar21 = *puVar2;
    uVar17 = puVar2[1];
    uVar4 = *(undefined1 *)(puVar2 + 2);
    uVar22 = puVar2[3];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_b8;
    func_0x000107c5fb58(puVar9,uVar7,uVar3);
    func_0x000107c606a8();
    uVar15 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar14 = (ulong)puVar9 & (uVar15 ^ 0xffffffffffffffff);
    uVar12 = uVar14 >> 6;
    uVar10 = -1L << (uVar14 & 0x3f) & (*(ulong *)(lVar1 + uVar12 * 8) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar15 >> 6;
      do {
        uVar14 = uVar12 + 1;
        if ((uVar14 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1018ef228);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar14 != uVar10) {
          uVar12 = uVar14;
        }
        bVar5 = (bool)(uVar14 == uVar10 | bVar5);
        uVar14 = *(ulong *)(lVar1 + uVar12 * 8);
      } while (uVar14 == 0xffffffffffffffff);
      uVar14 = ~uVar14;
      uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = 1L << (uVar10 & 0x3f) | *(ulong *)(lVar1 + uVar12);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar10 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar10 * 0x20);
    *puVar2 = uVar21;
    puVar2[1] = uVar17;
    *(undefined1 *)(puVar2 + 2) = uVar4;
    puVar2[3] = uVar22;
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar11 = lVar20;
  } while( true );
}



/* Entry: 1018ef228; end: 1018ef3e3;  */

void FUN_1018ef228(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
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
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar4 = ~uVar4;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar4);
    uVar9 = uVar9 + 1 & uVar4;
    do {
      puVar6 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
      uVar10 = *puVar6;
      uVar11 = puVar6[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar11);
      puVar3 = auStack_a8;
      func_0x000107c5fb58(puVar3,uVar10,uVar11);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar11);
      uVar5 = (ulong)puVar3 & uVar4;
      if ((long)param_1 < (long)uVar9) {
        if (uVar5 < uVar9) {
LAB_1018ef328:
          if ((long)param_1 < (long)uVar5) goto LAB_1018ef2b0;
        }
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
        if (((long)param_1 < (long)uVar8) || (puVar7 + 2 <= puVar6 || param_1 != uVar8)) {
          uVar10 = *puVar7;
          puVar6[1] = puVar7[1];
          *puVar6 = uVar10;
        }
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x28);
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x28);
        if ((((long)param_1 < (long)uVar8) || (puVar7 + 5 <= puVar6)) || (param_1 != uVar8)) {
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
      else if (uVar9 <= uVar5) goto LAB_1018ef328;
LAB_1018ef2b0:
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ef3e4);
  (*pcVar2)();
}



/* Entry: 1018ef3e4; end: 1018ef527;  */

undefined * FUN_1018ef3e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1018ef528);
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
    puVar3 = (undefined *)0x112dd15c0;
    func_0x0001000285a8(0x112dd15c0,&UNK_10d992608);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112dd15c8;
    func_0x0001000285a8(0x112dd15c8,&UNK_10d992610);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1018ef528; end: 1018ef59f;  */

void FUN_1018ef528(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff40;
  plVar5[4] = lVar3;
  plVar5[5] = lVar2;
  plVar5[2] = lVar4;
  plVar5[3] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[6] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ee32c,lVar3,lVar4);
  return;
}



/* Entry: 1018ef5a0; end: 1018ef617;  */

void FUN_1018ef5a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff38;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ef618; end: 1018ef69b;  */

void FUN_1018ef618(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff3c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ef69c; end: 1018ef75f;  */

undefined8 FUN_1018ef69c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1018ef760; end: 1018ef7cb;  */

void FUN_1018ef760(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1018eff4c;
  plVar4[3] = lVar1;
  plVar4[4] = lVar5;
  plVar4[2] = lVar2;
  lVar2 = 0;
  func_0x000100b92084();
  puVar3 = (undefined8 *)(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar4[5] = (long)puVar3;
  func_0x0001041e66ac();
  plVar4[6] = (long)puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018edcf0,*puVar3,0);
  return;
}



/* Entry: 1018ef7cc; end: 1018ef843;  */

void FUN_1018ef7cc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff44;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ef844; end: 1018ef8c7;  */

void FUN_1018ef844(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff48;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ef8c8; end: 1018ef93f;  */

void FUN_1018ef8c8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1018eff58;
  plVar6[4] = lVar1;
  plVar6[5] = lVar3;
  plVar6[2] = lVar4;
  plVar6[3] = lVar2;
  lVar4 = 0;
  func_0x000100b92084();
  puVar5 = (undefined8 *)(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar6[6] = (long)puVar5;
  func_0x0001041e66ac();
  plVar6[7] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018eda60,*puVar5,0);
  return;
}



/* Entry: 1018ef940; end: 1018ef9b7;  */

void FUN_1018ef940(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff50;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018ef9b8; end: 1018efa3b;  */

void FUN_1018ef9b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff54;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018efa3c; end: 1018efab3;  */

void FUN_1018efa3c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1018efab4;
  plVar6[4] = lVar1;
  plVar6[5] = lVar3;
  plVar6[2] = lVar4;
  plVar6[3] = lVar2;
  lVar4 = 0;
  func_0x000100b92084();
  puVar5 = (undefined8 *)(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar6[6] = (long)puVar5;
  func_0x0001041e66ac();
  plVar6[7] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed7d0,*puVar5,0);
  return;
}



/* Entry: 1018efab4; end: 1018efaef;  */

void FUN_1018efab4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018efaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018efaf0; end: 1018efb67;  */

void FUN_1018efaf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff5c;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018efb68; end: 1018efbeb;  */

void FUN_1018efb68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff60;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018efbec; end: 1018efc63;  */

void FUN_1018efbec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  puVar4 = *(undefined8 **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff64;
  plVar5[4] = lVar1;
  plVar5[5] = lVar3;
  plVar5[2] = (long)puVar4;
  plVar5[3] = lVar2;
  func_0x0001041e66ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed554,*puVar4,0);
  return;
}



/* Entry: 1018efc64; end: 1018efcdb;  */

void FUN_1018efc64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff68;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018efcdc; end: 1018efd5f;  */

void FUN_1018efcdc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff6c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018efd60; end: 1018efd93;  */

void FUN_1018efd60(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018efd94; end: 1018efe0b;  */

void FUN_1018efd94(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x1018eff70;
  plVar6[4] = lVar1;
  plVar6[5] = lVar3;
  plVar6[2] = lVar4;
  plVar6[3] = lVar2;
  lVar4 = 0;
  func_0x000100b92084();
  puVar5 = (undefined8 *)(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c615b8();
  plVar6[6] = (long)puVar5;
  func_0x0001041e66ac();
  plVar6[7] = (long)puVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018ed188,*puVar5,0);
  return;
}



/* Entry: 1018efe0c; end: 1018efe83;  */

void FUN_1018efe0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff74;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018efe84; end: 1018efeaf;  */

void FUN_1018efe84(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1018efeb0; end: 1018eff33;  */

void FUN_1018efeb0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x1018eff78;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1018eff34; end: 1018eff7b;  */

void FUN_1018eff34(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018ee498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018eff7c; end: 1018f002b; -[_TtC35AppImpressionServicesImplementation27AppImpressionConfigProvider skOverlayEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1018eff7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dd15d0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dd15d0))[1];
  func_0x000107c614f0(uVar2);
  uStack_58 = 0xd00000000000002a;
  uStack_50 = 0x800000010efbfeb0;
  uStack_48 = 0;
  pcVar3 = *(code **)(lVar1 + 8);
  func_0x000107c61174(param_1);
  (*pcVar3)(&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2,lVar1);
  func_0x000107c61170(param_1);
  return uStack_41;
}



/* Entry: 1018f002c; end: 1018f00db; -[_TtC35AppImpressionServicesImplementation27AppImpressionConfigProvider spvcEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1018f002c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined1 uStack_41;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112dd15d0);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112dd15d0))[1];
  func_0x000107c614f0(uVar2);
  uStack_58 = 0xd00000000000002b;
  uStack_50 = 0x800000010efbfe80;
  uStack_48 = 0;
  pcVar3 = *(code **)(lVar1 + 8);
  func_0x000107c61174(param_1);
  (*pcVar3)(&uStack_41,&uStack_58,&UNK_1107383c8,&PTR_DAT_11304a4b0,uVar2,lVar1);
  func_0x000107c61170(param_1);
  return uStack_41;
}



/* Entry: 1018f00dc; end: 1018f013b; -[_TtC35AppImpressionServicesImplementation27AppImpressionConfigProvider init] */

void FUN_1018f00dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AppImpressionServicesImplementation.AppImpressionConfigProvider",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1018f0108);
  (*pcVar1)();
}



/* Entry: 1018f013c; end: 1018f014b; -[_TtC35AppImpressionServicesImplementation27AppImpressionConfigProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f013c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112dd15d0));
  return;
}



/* Entry: 1018f014c; end: 1018f085b;  */

undefined * FUN_1018f014c(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  code *pcVar21;
  ulong auStack_b0 [4];
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_61;
  
  lVar6 = 0;
  func_0x000100b922c8();
  lVar16 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  puVar9 = (undefined8 *)((long)auStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0x112dd1600;
  puStack_70 = puVar9;
  func_0x0001000285a8(0x112dd1600,&UNK_10d992a30);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar9 - extraout_x8_00;
  lVar7 = 0x112dd1460;
  func_0x0001000285a8(0x112dd1460,&UNK_10d9925f0);
  lVar20 = *(long *)(*(long *)(lVar7 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar20 + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar17 - extraout_x8_01;
  lVar7 = 0;
  func_0x000100b92084();
  iVar5 = *(int *)(lVar7 + 0x1c);
  func_0x0001018f08dc(unaff_x20 + iVar5,lVar19,0x112dd1460,&UNK_10d9925f0);
  lVar8 = 0;
  func_0x000100b92194();
  pcVar21 = *(code **)(*(long *)(lVar8 + -8) + 0x30);
  lVar7 = lVar19;
  (*pcVar21)(lVar19,1,lVar8);
  if ((int)lVar7 == 1) {
    func_0x0001018f0924(lVar19,0x112dd1460,&UNK_10d9925f0);
    (**(code **)(lVar16 + 0x38))(lVar17,1,1,lVar6);
  }
  else {
    func_0x0001018f08dc(lVar19 + *(int *)(lVar8 + 0x14),lVar17,0x112dd1600,&UNK_10d992a30);
    func_0x0001018f08a0(lVar19,&SUB_100b92194);
    lVar7 = lVar17;
    (**(code **)(lVar16 + 0x30))(lVar17,1,lVar6);
    puVar9 = puStack_70;
    if ((int)lVar7 != 1) {
      func_0x0001018f085c(lVar17,puStack_70);
      lStack_90 = puVar9[1];
      if (lStack_90 == 0) {
        func_0x0001018f08a0(puVar9,&SUB_100b922c8);
        return (undefined *)0x0;
      }
      auStack_b0[3] = *puVar9;
      lVar16 = 0;
      func_0x000107c5eec8();
      lVar17 = *(long *)(lVar16 + -8);
      lStack_80 = lVar19;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
      lVar19 = lVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
      iVar4 = *(int *)(lVar6 + 0x34);
      lVar7 = 0x112d3bc20;
      lStack_78 = lVar19;
      func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
      lStack_88 = lVar19;
      (*(code *)PTR____chkstk_darwin_11034bd40)
                (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar9 = puStack_70;
      lVar19 = lVar19 - extraout_x8_03;
      func_0x0001018f08dc((long)puStack_70 + (long)iVar4,lVar19,0x112d3bc20,&UNK_10d904ef0);
      lVar7 = lVar19;
      (**(code **)(lVar17 + 0x30))(lVar19,1,lVar16);
      if ((int)lVar7 == 1) {
        func_0x0001018f08a0(puVar9,&SUB_100b922c8);
        func_0x0001018f0924(lVar19,0x112d3bc20,&UNK_10d904ef0);
        return (undefined *)0x0;
      }
      (**(code **)(lVar17 + 0x20))(lStack_78,lVar19,lVar16);
      lVar7 = lStack_88;
      puVar1 = (undefined8 *)((long)puVar9 + (long)*(int *)(lVar6 + 0x38));
      lVar19 = puVar1[1];
      if (lVar19 == 0) {
        (**(code **)(lVar17 + 8))(lStack_78,lVar16);
        func_0x0001018f08a0(puVar9,&SUB_100b922c8);
        return (undefined *)0x0;
      }
      puVar2 = (ulong *)((long)puVar9 + (long)*(int *)(lVar6 + 0x30));
      uVar18 = puVar2[1];
      lStack_88 = lVar17;
      if (uVar18 == 0) {
        (**(code **)(lVar17 + 8))(lStack_78,lVar16);
      }
      else {
        auStack_b0[1] = *puVar1;
        auStack_b0[2] = *puVar2;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar7 = lVar7 - (lVar20 + 0xfU & 0xfffffffffffffff0);
        func_0x0001018f08dc(unaff_x20 + iVar5,lVar7,0x112dd1460,&UNK_10d9925f0);
        lVar6 = lVar7;
        (*pcVar21)(lVar7,1,lVar8);
        if ((int)lVar6 != 1) {
          auStack_b0[0] = *(ulong *)(lVar7 + 0x30);
          uVar3 = *(undefined1 *)(lVar7 + 0x38);
          func_0x0001018f08a0(lVar7,&SUB_100b92194);
          puVar10 = PTR__OBJC_CLASS___SKAdImpression_1126d9878;
          func_0x000107c610f8(PTR__OBJC_CLASS___SKAdImpression_1126d9878);
          func_0x000107c453e4();
          puVar9 = puStack_70;
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c490d4();
          func_0x000107c5955c(puVar10);
          func_0x000107c61170(puVar11);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c5256c(puVar10);
          func_0x000107c61170(puVar11);
          uVar12 = auStack_b0[3];
          lVar7 = lStack_90;
          func_0x000107c5fadc(auStack_b0[3],lStack_90);
          func_0x000107c52338(puVar10);
          func_0x000107c61170(uVar12);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c522a4(puVar10);
          func_0x000107c61170(puVar11);
          func_0x000107c5eeac();
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar7);
          func_0x000107c522ec(puVar10);
          func_0x000107c61170(puVar11);
          puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c46ed0();
          func_0x000107c59dc0(puVar10);
          func_0x000107c61170(puVar11);
          uVar12 = auStack_b0[1];
          func_0x000107c5fadc(auStack_b0[1],lVar19);
          func_0x000107c592c0(puVar10);
          func_0x000107c61170(uVar12);
          uVar12 = auStack_b0[2];
          uVar13 = auStack_b0[2];
          uVar15 = uVar18;
          func_0x000107c5fadc(auStack_b0[2],uVar18);
          func_0x000107c5a4e0(puVar10);
          func_0x000107c61170(uVar13);
          uVar13 = auStack_b0[0];
          func_0x000104840e10(auStack_b0[0]);
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar15);
          func_0x000107c52444(puVar10);
          func_0x000107c61170(uVar13);
          puVar11 = &UNK_110750720;
          puVar14 = &uStack_61;
          uStack_61 = uVar3;
          func_0x000107c5fb18(puVar14,&UNK_110750720);
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar11);
          func_0x000107c522c4(puVar10);
          func_0x000107c61170(puVar14);
          iVar5 = 2;
          func_0x000100029b9c(2,0x10,1,0);
          if ((iVar5 != 0) &&
             (((uVar12 == 0x302e34 && (uVar18 == 0xe300000000000000)) ||
              (func_0x000107c605b8(uVar12,uVar18,0x302e34,0xe300000000000000,0), (uVar12 & 1) != 0))
             )) {
            puVar11 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
            func_0x000107c46ed0();
            func_0x000107c59568(puVar10);
            func_0x000107c61170(puVar11);
          }
          (**(code **)(lStack_88 + 8))(lStack_78,lVar16);
          func_0x0001018f08a0(puVar9,&SUB_100b922c8);
          return puVar10;
        }
        (**(code **)(lStack_88 + 8))(lStack_78,lVar16);
        func_0x0001018f0924(lVar7,0x112dd1460,&UNK_10d9925f0);
        puVar9 = puStack_70;
      }
      func_0x0001018f08a0(puVar9,&SUB_100b922c8);
      return (undefined *)0x0;
    }
  }
  func_0x0001018f0924(lVar17,0x112dd1600,&UNK_10d992a30);
  return (undefined *)0x0;
}



/* Entry: 1018f085c; end: 1018f0963;  */

undefined8 FUN_1018f085c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b922c8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1018f0964; end: 1018f098f;  */

void FUN_1018f0964(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1018f0990; end: 1018f0a1f;  */

void FUN_1018f0990(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar1 = 0;
  func_0x000107c5f0b8();
  *(undefined8 *)(lVar2 + 0x18) = uVar1;
  *(undefined ***)(lVar2 + 0x20) = &PTR_DAT_11040f4f8;
  func_0x0001000c5db4(lVar2);
  plVar4 = (long *)(ulong)*(uint *)(
                                   PTR___s16AdAttributionKit13AppImpressionV10compactJWSACSS_tYaKcfCTu_11034d3d8
                                   + 4);
  func_0x000107c61434(uVar3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1018f0a20;
                    /* WARNING: Could not recover jumptable at 0x00010bdb5840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s16AdAttributionKit13AppImpressionV10compactJWSACSS_tYaKcfC_11034d3d0)
            (plVar4,lVar2,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  return;
}



/* Entry: 1018f0a20; end: 1018f0ab7;  */

void FUN_1018f0a20(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x30) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x1018f0a84,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001018f0a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1018f0ab8; end: 1018f0b27;  */

void FUN_1018f0ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f0b28,uVar1,uVar2);
  return;
}



/* Entry: 1018f0b28; end: 1018f0d2f;  */

void FUN_1018f0b28(void)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar2 = 0;
    func_0x000107c5ede0();
    *(long *)(unaff_x22 + 0x48) = lVar2;
    lVar11 = *(long *)(lVar2 + -8);
    *(long *)(unaff_x22 + 0x50) = lVar11;
    uVar3 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    *(ulong *)(unaff_x22 + 0x58) = uVar3;
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x0001018f261c(uVar9,uVar5,0x112d36580,&UNK_10d9016d0);
    uVar6 = uVar5;
    (**(code **)(lVar11 + 0x30))(uVar5,1,lVar2);
    if ((int)uVar6 != 1) {
      lVar10 = *(long *)(unaff_x22 + 0x10);
      (**(code **)(lVar11 + 0x20))(uVar3,uVar5,lVar2);
      func_0x000107c615c0(uVar5);
      uVar9 = *(undefined8 *)(lVar10 + 0x18);
      lVar4 = *(long *)(lVar10 + 0x20);
      func_0x0001000a8868(lVar10,uVar9);
      piVar8 = *(int **)(lVar4 + 0x18);
      iVar1 = *piVar8;
      plVar7 = (long *)(ulong)(uint)piVar8[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x60) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1018f0d30;
                    /* WARNING: Could not recover jumptable at 0x0001018f0d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar8))
                (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28),uVar3,uVar9,
                 lVar4);
      return;
    }
    func_0x0001018f2580(uVar5,0x112d36580,&UNK_10d9016d0);
    func_0x000107c615c0(uVar5);
    func_0x000107c615c0(uVar3);
  }
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(lVar2 + 0x18);
  lVar4 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar9);
  piVar8 = *(int **)(lVar4 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1018f0de4;
                    /* WARNING: Could not recover jumptable at 0x0001018f0c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x28),uVar9,lVar4);
  return;
}



/* Entry: 1018f0d30; end: 1018f0d87;  */

void FUN_1018f0d30(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f0d88;
  }
  else {
    pcVar1 = FUN_1018f0e70;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 1018f0d88; end: 1018f0de3;  */

void FUN_1018f0d88(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001018f0de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f0de4; end: 1018f0e3b;  */

void FUN_1018f0de4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f0e3c;
  }
  else {
    pcVar1 = FUN_1018f0ecc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 1018f0e3c; end: 1018f0e6f;  */

void FUN_1018f0e3c(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001018f0e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f0e70; end: 1018f0ecb;  */

void FUN_1018f0e70(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001018f0ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f0ecc; end: 1018f0f8f;  */

void FUN_1018f0ecc(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001018f0efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f0f90; end: 1018f0ff3;  */

void FUN_1018f0f90(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1018f0ff4;
  plVar3[4] = param_3;
  plVar3[5] = unaff_x20;
  plVar3[2] = param_1;
  plVar3[3] = param_2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[6] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f0b28,lVar1,lVar2);
  return;
}



/* Entry: 1018f0ff4; end: 1018f102f;  */

void FUN_1018f0ff4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001018f102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1018f1030; end: 1018f10db;  */

void FUN_1018f1030(undefined8 param_1,long param_2)

{
  long extraout_x8;
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = 0x112dd1608;
  func_0x0001000285a8(0x112dd1608,&UNK_10d992770);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar2 = *(long *)(param_2 + -8);
  (**(code **)(lVar2 + 0x10))(puVar1);
  (**(code **)(lVar2 + 0x38))(puVar1,0,1,param_2);
  func_0x000107c60088(puVar1);
  return;
}



/* Entry: 1018f10dc; end: 1018f1147;  */

void FUN_1018f10dc(void)

{
  func_0x000107c61168(&PTR_PTR_112dd1650);
  return;
}



/* Entry: 1018f1148; end: 1018f1297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1018f1148(void)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  
  lVar1 = _DAT_112dd16c8;
  lVar8 = *(long *)(unaff_x22 + 0xe8);
  *(long *)(unaff_x22 + 0xf8) = _DAT_112dd16c8;
  func_0x000107c61428(lVar8 + lVar1,unaff_x22 + 0xb0,0,0);
  func_0x0001018f261c(lVar8 + lVar1,unaff_x22 + 0x38,0x112dd17e8,&UNK_10d9928f0);
  if (*(long *)(unaff_x22 + 0x50) != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
    func_0x0001003ffc14(unaff_x22 + 0x38,unaff_x22 + 0x10);
    func_0x0001003ffc14(unaff_x22 + 0x10,uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001018f11ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0xe8);
  func_0x0001018f2580(unaff_x22 + 0x38,0x112dd17e8,&UNK_10d9928f0);
  lVar1 = lVar10 + _DAT_112dd16c0;
  uVar9 = *(undefined8 *)(lVar1 + 0x18);
  lVar8 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar9);
  puVar2 = (undefined8 *)(lVar10 + _DAT_112dd16b0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  piVar7 = *(int **)(lVar8 + 8);
  iVar3 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x100) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1018f1298;
                    /* WARNING: Could not recover jumptable at 0x0001018f1294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar3 + (long)piVar7))(plVar6,unaff_x22 + 0x60,uVar4,uVar5,uVar9,lVar8);
  return;
}



/* Entry: 1018f1298; end: 1018f12f3;  */

void FUN_1018f1298(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x108) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1018f12f4;
  }
  else {
    pcVar1 = FUN_1018f1374;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,*(undefined8 *)(lVar2 + 0xf0),0);
  return;
}



/* Entry: 1018f12f4; end: 1018f1373;  */

void FUN_1018f12f4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  func_0x0001018f24ec(unaff_x22 + 0x60,unaff_x22 + 0x88);
  func_0x000107c61428(lVar3 + lVar2,unaff_x22 + 200,0x21,0);
  func_0x0001018f2530(unaff_x22 + 0x88,lVar3 + lVar2);
  func_0x000107c614a8(unaff_x22 + 200);
  func_0x0001003ffc14(unaff_x22 + 0x60,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001018f1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f1374; end: 1018f13a7;  */

void FUN_1018f1374(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x0001018f13a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1018f13a8; end: 1018f1407;  */

void FUN_1018f13a8(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  func_0x0001041e66ac();
  *(undefined8 *)(unaff_x22 + 0x38) = *param_1;
  plVar2 = (long *)0x110;
  func_0x000107c6157c();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1018f1408;
  plVar1 = (long *)(unaff_x22 + 0x10);
  plVar2[0x1c] = (long)plVar1;
  plVar2[0x1d] = unaff_x20;
  func_0x0001041e66ac();
  lVar3 = *plVar1;
  plVar2[0x1e] = lVar3;
  func_0x000107c6157c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1018f1148,lVar3,0);
  return;
}



/* Entry: 1018f1408; end: 1018f1463;  */

void FUN_1018f1408(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x40));
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1018f1464;
  }
  else {
    pcVar2 = FUN_1018f2664;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar1,0);
  return;
}



/* Entry: 1018f1464; end: 1018f14db;  */

void FUN_1018f1464(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1018f14dc;
                    /* WARNING: Could not recover jumptable at 0x0001018f14d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Entry: 1018f14dc; end: 1018f1537;  */

void FUN_1018f14dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    uVar1 = 0x1018f2680;
  }
  else {
    uVar1 = 0x1018f267c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,*(undefined8 *)(lVar2 + 0x38),0);
  return;
}


