/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10261fce8; end: 10261fdb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10261fce8(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long alStack_58 [3];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112eb06f0;
  if (*(long *)(unaff_x20 + _DAT_112eb06f0) == 0) {
    func_0x000100083b20(alStack_58);
    uVar4 = *(undefined8 *)(alStack_58[0] + _DAT_11305e778);
    func_0x000107c6157c(uVar4);
    func_0x000107c61170(alStack_58[0]);
    func_0x0001000d224c(alStack_58);
    func_0x000107c61574(uVar4);
    plVar2 = alStack_58;
    func_0x000102623030(plVar2,uStack_40);
    uVar4 = 2;
    func_0x00010043c5c0(2,0x39,0,uStack_40,uStack_38,plVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
    func_0x000107c61574(uVar3);
    func_0x000102623010(alStack_58);
  }
  return;
}



/* Entry: 10261fdb8; end: 10261fdd3;  */

void FUN_10261fdb8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x8a8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x878) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261fdd4,0,0);
  return;
}



/* Entry: 10261fdd4; end: 10261ff0b;  */

void FUN_10261fdd4(ulong param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x00010261e398();
  if ((param_1 & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x8a8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x878);
    *(undefined8 *)(unaff_x22 + 0x8e0) = uVar4;
    uVar1 = 0x112eb07a8;
    func_0x0001000285a8(0x112eb07a8,&UNK_10dac4d18);
    func_0x000107c61418(unaff_x22 + 0x10,0,uVar1,&UNK_10dac4de8,unaff_x22 + 0x8d0,unaff_x22 + 0x7e8)
    ;
    *(undefined8 *)(unaff_x22 + 0x8c0) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x8c8) = uVar3;
    uVar1 = 0;
    FUN_102623b28(0,0x112e60560,&PTR_PTR_1126b1d38);
    func_0x000107c61418(unaff_x22 + 0x290,0,uVar1,&UNK_10dac4df8,unaff_x22 + 0x8b0,unaff_x22 + 0x818
                       );
    *(undefined8 *)(unaff_x22 + 0x900) = uVar4;
    uVar1 = 0x112eb07c8;
    func_0x0001000285a8(0x112eb07c8,&UNK_10dac4e10);
    func_0x000107c61418(unaff_x22 + 0x510,0,uVar1,&UNK_10dac4e08,unaff_x22 + 0x8f0,unaff_x22 + 0x848
                       );
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_asyncLet_get_110350060)
              (unaff_x22 + 0x10,unaff_x22 + 0x7e8,FUN_10261ff0c,unaff_x22 + 0x790);
    return;
  }
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x918) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102620168;
  lVar5 = *(long *)(unaff_x22 + 0x8a8);
  plVar2[0x13] = *(long *)(unaff_x22 + 0x878);
  plVar2[0x14] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026203fc,0,0);
  return;
}



/* Entry: 10261ff0c; end: 10261ff93;  */

void FUN_10261ff0c(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x8e8) = *(undefined8 *)(unaff_x22 + 0x7e8);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x290,unaff_x22 + 0x818,0x10261ff50,unaff_x22 + 0x7c0);
  return;
}



/* Entry: 10261ff94; end: 10261ffa7;  */

void FUN_10261ff94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261ffa8,0,0);
  return;
}



/* Entry: 10261ffa8; end: 10262004f;  */

void FUN_10261ffa8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x908);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x8e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x848);
  uVar1 = uVar4;
  func_0x000107c61174(uVar4);
  FUN_1026236f8(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  uVar2 = uVar3;
  FUN_10262392c(uVar3,uVar4,1);
  *(undefined8 *)(unaff_x22 + 0x910) = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x510,unaff_x22 + 0x848,FUN_102620050,unaff_x22 + 0x820);
  return;
}



/* Entry: 102620050; end: 1026200bb;  */

void FUN_102620050(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102620064,0,0);
  return;
}



/* Entry: 1026200bc; end: 102620167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026200bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x910);
  lVar5 = *(long *)(unaff_x22 + 0x8a8);
  uVar1 = uVar4;
  func_0x000107c5d978();
  func_0x000107c61180();
  lVar2 = _DAT_112eb06c8;
  uVar3 = *(undefined8 *)(lVar5 + _DAT_112eb06c8);
  *(undefined8 *)(lVar5 + _DAT_112eb06c8) = uVar1;
  func_0x000107c61170(uVar3);
  uVar1 = *(undefined8 *)(lVar5 + _DAT_112eb06d0);
  *(undefined8 *)(lVar5 + _DAT_112eb06d0) = uVar4;
  func_0x000107c61170(uVar1);
  lVar2 = *(long *)(lVar5 + lVar2);
  if (lVar2 != 0) {
    *(long *)(unaff_x22 + 0x7b8) = lVar2;
    func_0x000107c61174();
    func_0x000100087c34(unaff_x22 + 0x7b8);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102620164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 102620168; end: 1026201b7;  */

void FUN_102620168(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x920) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x918));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026201b8,0,0);
  return;
}



/* Entry: 1026201b8; end: 102620287;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026201b8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x920);
  uVar1 = uVar4;
  FUN_10262392c(uVar4,0,1);
  func_0x000107c61170(uVar4);
  lVar5 = *(long *)(unaff_x22 + 0x8a8);
  func_0x000107c61174();
  uVar4 = uVar1;
  func_0x000107c5d978();
  func_0x000107c61180();
  lVar2 = _DAT_112eb06c8;
  uVar3 = *(undefined8 *)(lVar5 + _DAT_112eb06c8);
  *(undefined8 *)(lVar5 + _DAT_112eb06c8) = uVar4;
  func_0x000107c61170(uVar3);
  uVar4 = *(undefined8 *)(lVar5 + _DAT_112eb06d0);
  *(undefined8 *)(lVar5 + _DAT_112eb06d0) = uVar1;
  func_0x000107c61170(uVar4);
  lVar2 = *(long *)(lVar5 + lVar2);
  if (lVar2 != 0) {
    *(long *)(unaff_x22 + 0x7b8) = lVar2;
    func_0x000107c61174();
    func_0x000100087c34(unaff_x22 + 0x7b8);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102620284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102620288; end: 102620323;  */

void FUN_102620288(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1026202d4;
  plVar1[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261ef90,0,0);
  return;
}



/* Entry: 102620324; end: 10262037b;  */

void FUN_102620324(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10262037c;
  plVar1[0x13] = param_3;
  plVar1[0x14] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026203fc,0,0);
  return;
}



/* Entry: 10262037c; end: 1026203cb;  */

void FUN_10262037c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1026203cc,0,0);
  return;
}



/* Entry: 1026203cc; end: 1026203fb;  */

void FUN_1026203cc(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001026203e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026203fc; end: 10262052b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026203fc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar2 = lVar3;
  func_0x000107c44ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar3;
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10262052c;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,1);
    uVar1 = 0x112eb07d8;
    func_0x0001000285a8(0x112eb07d8,&UNK_10dac4e28);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x102623b84;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11052c0e8;
    func_0x000107c43314(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  lVar2 = 0;
  func_0x000107c44ed0();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x000102620528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10262052c; end: 102620583;  */

void FUN_10262052c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102620584;
  }
  else {
    pcVar1 = FUN_1026205e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102620584; end: 1026205e3;  */

void FUN_102620584(void)

{
  long lVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa8));
  lVar1 = lVar2;
  func_0x000107c44ed0();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x0001026205e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1026205e4; end: 10262064b;  */

void FUN_1026205e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61654();
  func_0x000107c614ac(uVar2);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa8));
  lVar1 = 0;
  func_0x000107c44ed0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61174(*(undefined8 *)(unaff_x22 + 0x98));
  }
                    /* WARNING: Could not recover jumptable at 0x000102620648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10262064c; end: 1026206e7;  */

void FUN_10262064c(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102620698;
  plVar1[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102620700,0,0);
  return;
}



/* Entry: 1026206e8; end: 1026206ff;  */

void FUN_1026206e8(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102620700,0,0);
  return;
}



/* Entry: 102620700; end: 102620813;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102620700(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c44ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102620814;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar2 = 0x112eb07d0;
    func_0x0001000285a8(0x112eb07d0,&UNK_10dac4e20);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x102623b88;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11052c0c0;
    func_0x000107c43310(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102620810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102620814; end: 1026208a3;  */

void FUN_102620814(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = (code *)0x10262086c;
  }
  else {
    pcVar1 = FUN_1026208a4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026208a4; end: 1026208f3;  */

void FUN_1026208a4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  func_0x000107c614ac(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026208f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1026208f4; end: 10262090b;  */

void FUN_1026208f4(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262090c,0,0);
  return;
}



/* Entry: 10262090c; end: 102620a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262090c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x22;
  undefined **ppuVar4;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar3;
  func_0x000107c5d9dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x88) = lVar3;
  func_0x000107c61170(lVar1);
  if (lVar3 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102620a90;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    ppuVar4 = &PTR____CFConstantStringClassReference_110f72698;
    puVar2 = &UNK_11052bec8;
    func_0x000107c613fc(&UNK_11052bec8,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    *(undefined8 *)(unaff_x22 + 0x70) = 0x102622f74;
    *(undefined **)(unaff_x22 + 0x78) = puVar2;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1013b7310;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11052bee0;
    lVar1 = unaff_x22 + 0x50;
    func_0x000107c60bc4(lVar1);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5032c(lVar3);
    func_0x000107c60bd0(lVar1);
    func_0x000107c61170(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102620a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102620a90; end: 102620b03;  */

void FUN_102620a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102620ad0,0,0);
  return;
}



/* Entry: 102620b04; end: 102620b1b;  */

void FUN_102620b04(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102620b1c,0,0);
  return;
}



/* Entry: 102620b1c; end: 102620c23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102620b1c(void)

{
  long lVar1;
  long unaff_x22;
  long lVar2;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  lVar2 = lVar1;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x68) + _DAT_112eb06f0);
    *(long *)(unaff_x22 + 0x78) = lVar2;
    if (lVar2 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_102620c24;
      func_0x000107c6157c(lVar2);
      func_0x000107c61448(unaff_x22 + 0x10,0);
      FUN_102620ca4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102620c20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,1);
  return;
}



/* Entry: 102620c24; end: 102620ca3;  */

void FUN_102620c24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102620c64,0,0);
  return;
}



/* Entry: 102620ca4; end: 102620e5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102620ca4(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long *plStack_58;
  
  plVar1 = (long *)(param_2 + _DAT_112eb06e8);
  lVar8 = *plVar1;
  if (lVar8 != 0) {
    lVar9 = plVar1[1];
    lVar6 = lVar8;
    func_0x000107c614f0(lVar8);
    pcVar10 = *(code **)(lVar9 + 8);
    func_0x000107c615f0(lVar8);
    (*pcVar10)(lVar6,lVar9);
    func_0x000107c615e8(lVar8);
  }
  func_0x0001000285a8(0x112eb07a0,&UNK_10dac4d00);
  uVar4 = param_3;
  func_0x000107c4b930(param_3);
  func_0x000107c61180();
  uVar2 = uVar4;
  func_0x0001000b637c();
  func_0x000107c61170(uVar4);
  puVar3 = &UNK_11052be78;
  func_0x000107c613fc(&UNK_11052be78,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c615f0(param_3);
  pcVar10 = FUN_102622f64;
  func_0x0001000c0ebc(FUN_102622f64,puVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  uVar4 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar10);
  func_0x0001000d224c(&plStack_58);
  plVar5 = plStack_58;
  func_0x000104883b8c(0x3ff8000000000000);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(plStack_58);
  puVar3 = &UNK_11052bea0;
  func_0x000107c613fc(&UNK_11052bea0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  pcVar10 = *(code **)(*plVar5 + 0x68);
  func_0x000107c615f0(param_3);
  lVar8 = 0x102622f6c;
  puVar7 = puVar3;
  (*pcVar10)();
  func_0x000107c61574(plVar5);
  func_0x000107c61574(puVar3);
  lVar6 = *plVar1;
  *plVar1 = lVar8;
  plVar1[1] = (long)puVar7;
  func_0x000107c615e8(lVar6);
  return;
}



/* Entry: 102620e5c; end: 102620f13;  */

bool FUN_102620e5c(undefined8 param_1,long param_2)

{
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c61170(param_2);
  }
  return param_2 != 0;
}



/* Entry: 102620f14; end: 10262107f;  */

void FUN_102620f14(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x000102623030(plVar1,*(undefined8 *)(param_1 + 0x38));
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
  uVar2 = 0;
  FUN_102623b28(0,0x112eb07b8,&PTR_PTR_1126bc1f0);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102621080; end: 102621097;  */

void FUN_102621080(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621098,0,0);
  return;
}



/* Entry: 102621098; end: 10262125f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102621098(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x50);
  lVar5 = *(long *)(unaff_x22 + 0x50);
  lVar1 = lVar5;
  func_0x000107c44ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar5;
  func_0x000107c61170(lVar1);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar1 = 0x112e60560;
    FUN_102623440(0x112e60560,&PTR_PTR_1126b1d38,0x112e60690,&UNK_10da686d0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar1 + 0x18) = 3;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    uVar2 = 0;
    FUN_102623b28(0,0x112e60560,&PTR_PTR_1126b1d38);
    func_0x000107c61174(uVar4);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    *(long *)(unaff_x22 + 0xa8) = lVar3;
    func_0x000107c61574(lVar1);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102621260;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar2 = 0x112e06f60;
    func_0x0001000285a8(0x112e06f60,&UNK_10dab9b20);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102580258;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11052c070;
    func_0x000107c5d6a0(lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010262125c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102621260; end: 1026212b7;  */

void FUN_102621260(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1026212b8;
  }
  else {
    pcVar1 = FUN_1026212f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026212b8; end: 1026212f7;  */

void FUN_1026212b8(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined1 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026212f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 1026212f8; end: 10262134f;  */

void FUN_1026212f8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61654();
  func_0x000107c614ac(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010262134c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102621350; end: 102621367;  */

void FUN_102621350(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621368,0,0);
  return;
}



/* Entry: 102621368; end: 1026214a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102621368(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x90);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000100083b20(unaff_x22 + 0x50);
    lVar4 = *(long *)(unaff_x22 + 0x50);
    lVar2 = lVar4;
    func_0x000107c44ef0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xa0) = lVar4;
    func_0x000107c61170(lVar2);
    if (lVar4 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb0;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1026214a4;
      lVar1 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar1,1);
      uVar3 = 0x112e06f60;
      func_0x0001000285a8(0x112e06f60,&UNK_10dab9b20);
      *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
      *(long *)(unaff_x22 + 0x70) = lVar1;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_102580258;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_11052c048;
      func_0x000107c5d450(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026214a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1026214a4; end: 1026214fb;  */

void FUN_1026214a4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1026214fc;
  }
  else {
    pcVar1 = FUN_102621540;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1026214fc; end: 10262153f;  */

void FUN_1026214fc(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  uVar1 = *(undefined1 *)(unaff_x22 + 0xb0);
  func_0x000107c615e8(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010262153c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102621540; end: 1026215a3;  */

void FUN_102621540(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61654();
  func_0x000107c61170(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001026215a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1026215a4; end: 10262161f;  */

void FUN_1026215a4(undefined8 param_1,long param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x38) = param_4;
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102621620;
  plVar2[0x12] = param_3;
  plVar2[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621098,0,0);
  return;
}



/* Entry: 102621620; end: 10262168b;  */

void FUN_102621620(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x39) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262168c,uVar3,uVar1);
  return;
}



/* Entry: 10262168c; end: 10262172b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262168c(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x39);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  if (cVar1 == '\x01') {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x10) + _DAT_112eb06d0);
    if (lVar3 != 0) {
      func_0x000107c55124(lVar3,param_2,*(undefined1 *)(unaff_x22 + 0x38));
    }
    uVar2 = *(undefined1 *)(unaff_x22 + 0x38);
    FUN_10262172c();
    FUN_1026218ac(uVar2);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(uVar5,param_2,puVar4);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000102621728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10262172c; end: 1026218ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262172c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(alStack_68);
  lVar1 = alStack_68[0];
  lVar2 = alStack_68[0];
  func_0x000107c44ef0();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c50528(lVar1);
    func_0x000107c615e8(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112eb06c8);
  if ((lVar1 != 0) && (lVar2 = *(long *)(unaff_x20 + _DAT_112eb06d0), lVar2 != 0)) {
    func_0x000107c61174();
    func_0x000107c5d978();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000100083b20(alStack_68);
      lVar3 = *(long *)(alStack_68[0] + _DAT_112fa92e8);
      func_0x000107c6157c(lVar3);
      func_0x000107c61170(alStack_68[0]);
      if (lVar3 != 0) {
        func_0x000100083b20(alStack_68);
        func_0x000107c61574(lVar3);
        func_0x000102623030(alStack_68,uStack_50);
        (**(code **)(lStack_48 + 0x18))(lVar1,lVar2,uStack_50,lStack_48);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar1);
        func_0x000102623010(alStack_68);
        return;
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1026218ac; end: 1026219cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026218ac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uStack_38;
  
  if (((uint)param_1 & 0xff) == 2) {
    func_0x00010261e398();
    if ((param_1 & 1) == 0) {
      func_0x000106875244();
      func_0x000107c61180();
    }
    else {
      func_0x00010687528c();
      func_0x000107c61180();
    }
  }
  else if ((param_1 & 1) == 0) {
    func_0x000106875274();
    func_0x000107c61180();
  }
  else {
    func_0x00010687525c();
    func_0x000107c61180();
  }
  if (param_1 != 0) {
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    puVar2 = PTR_PTR_1126afde0;
    func_0x000107c61168(PTR_PTR_1126afde0);
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c40930(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    func_0x000100083b20(&uStack_38);
    func_0x000107c5c2e0(uStack_38);
    func_0x000107c615e8(uStack_38);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1026219d0; end: 102621a47;  */

void FUN_1026219d0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102621a48;
  plVar2[0x12] = param_3;
  plVar2[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621098,0,0);
  return;
}



/* Entry: 102621a48; end: 102621ab3;  */

void FUN_102621a48(undefined1 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  *(undefined1 *)(lVar2 + 0x38) = param_1;
  func_0x000107c615c0(uVar1);
  func_0x000100eea164();
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621ab4,uVar3,uVar1);
  return;
}



/* Entry: 102621ab4; end: 102621b2f;  */

void FUN_102621ab4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  if (cVar1 == '\x01') {
    FUN_1026218ac(2);
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(uVar3,param_2,puVar2);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000102621b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102621b30; end: 102621baf;  */

void FUN_102621b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5a0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x598) = param_5;
  *(undefined8 *)(unaff_x22 + 0x590) = param_4;
  *(undefined8 *)(unaff_x22 + 0x588) = param_3;
  *(undefined8 *)(unaff_x22 + 0x580) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x5a8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x5b0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x5b8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621bb0,uVar1,uVar2);
  return;
}



/* Entry: 102621bb0; end: 102621c53;  */

void FUN_102621bb0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x590);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x580);
  *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x588);
  *(undefined8 *)(unaff_x22 + 0x550) = uVar3;
  puVar1 = PTR___sSbN_11034dd40;
  func_0x000107c61418(unaff_x22 + 0x10,0,PTR___sSbN_11034dd40,&UNK_10dac4d88,unaff_x22 + 0x540,
                      unaff_x22 + 0x5c0);
  *(undefined8 *)(unaff_x22 + 0x570) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x578) = uVar2;
  func_0x000107c61418(unaff_x22 + 0x290,0,puVar1,&UNK_10dac4d98,unaff_x22 + 0x560,unaff_x22 + 0x5c1)
  ;
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x10,unaff_x22 + 0x5c0,FUN_102621c54,unaff_x22 + 0x510);
  return;
}



/* Entry: 102621c54; end: 102621c87;  */

void FUN_102621c54(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x5c2) = *(undefined1 *)(unaff_x22 + 0x5c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x290,unaff_x22 + 0x5c1,0x102621c74,unaff_x22 + 0x510);
  return;
}



/* Entry: 102621c88; end: 102621e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102621c88(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  ulong *puVar8;
  
  if ((*(byte *)(unaff_x22 + 0x5c2) & *(byte *)(unaff_x22 + 0x5c1) & 1) != 0) {
    lVar6 = *(long *)(unaff_x22 + 0x580);
    FUN_10262172c();
    FUN_1026218ac(2);
    lVar6 = *(long *)(lVar6 + _DAT_112eb06d0);
    if (lVar6 != 0) {
      func_0x000107c5d978();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar1 = lVar6;
        func_0x000107c44ed4();
        func_0x000107c61180();
        func_0x000107c61170(lVar6);
        if (lVar1 != 0) {
          lVar6 = *(long *)(unaff_x22 + 0x598);
          if (lVar6 != 0) {
            func_0x000107c61174();
            lVar2 = lVar6;
            func_0x000100083b20(unaff_x22 + 0x510);
            puVar8 = *(ulong **)(unaff_x22 + 0x510);
            (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x98))();
            func_0x000107c61170(puVar8);
            lVar5 = lVar1;
            if (lVar2 != 0) {
              *(undefined **)(unaff_x22 + 0x538) = PTR_DAT_1126a1178;
              lVar3 = lVar2;
              func_0x000107c61494(lVar2,1);
              if (lVar3 != 0) {
                func_0x000107c4c348();
                lVar5 = lVar6;
                lVar6 = lVar1;
              }
              func_0x000107c615e8(lVar2);
            }
            lVar1 = lVar6;
            func_0x000107c61170(lVar5);
          }
          func_0x000107c61170(lVar1);
        }
      }
    }
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x5a0);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(uVar7);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x290,unaff_x22 + 0x5c1,FUN_102621e10,unaff_x22 + 0x510);
  return;
}



/* Entry: 102621e10; end: 102621e4f;  */

void FUN_102621e10(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x102621e24,*(undefined8 *)(unaff_x22 + 0x5b0),*(undefined8 *)(unaff_x22 + 0x5b8));
  return;
}



/* Entry: 102621e50; end: 102621e7f;  */

void FUN_102621e50(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x5a8));
                    /* WARNING: Could not recover jumptable at 0x000102621e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102621e80; end: 102621ed7;  */

void FUN_102621e80(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102621ed8;
  plVar1[0x12] = param_3;
  plVar1[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621098,0,0);
  return;
}



/* Entry: 102621ed8; end: 102621f27;  */

void FUN_102621ed8(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102623b68,0,0);
  return;
}



/* Entry: 102621f28; end: 102621f7f;  */

void FUN_102621f28(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102621f80;
  plVar1[0x12] = param_3;
  plVar1[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621368,0,0);
  return;
}



/* Entry: 102621f80; end: 102621fcf;  */

void FUN_102621f80(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621fd0,0,0);
  return;
}



/* Entry: 102621fd0; end: 102621fe7;  */

void FUN_102621fd0(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x10) = *(undefined1 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000102621fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102621fe8; end: 102622053;  */

void FUN_102621fe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102622054,uVar1,uVar2);
  return;
}



/* Entry: 102622054; end: 1026220f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622054(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  lVar2 = lVar2 + _DAT_112eb06d8;
  func_0x000107c61428(lVar2,unaff_x22 + 0x38,0,0);
  bVar1 = *(long *)(lVar2 + 0x18) == 0;
  if (!bVar1) {
    FUN_102622f20(lVar2,unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    lVar2 = *(long *)(unaff_x22 + 0x30);
    func_0x000102623030(unaff_x22 + 0x10,uVar3);
    (**(code **)(lVar2 + 8))(uVar3,lVar2);
    func_0x000102623010(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x0001026220f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar1);
  return;
}



/* Entry: 1026220f8; end: 10262213b;  */

void FUN_1026220f8(undefined1 param_1)

{
  undefined1 *puVar1;
  long *unaff_x22;
  long lVar2;
  
  puVar1 = *(undefined1 **)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x18));
  *puVar1 = param_1;
                    /* WARNING: Could not recover jumptable at 0x000102622138. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 10262213c; end: 1026221a3;  */

void FUN_10262213c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x90) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1026221a4;
  plVar2[0x10] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262090c,0,0);
  return;
}



/* Entry: 1026221a4; end: 102622217;  */

void FUN_1026221a4(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  uVar2 = *(undefined8 *)(lVar3 + 0x98);
  *(undefined1 *)(lVar3 + 0xd8) = param_1;
  func_0x000107c615c0();
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(lVar3 + 0xb0) = uVar2;
  *(undefined8 *)(lVar3 + 0xb8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102622218,uVar2,uVar1);
  return;
}



/* Entry: 102622218; end: 10262260b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622218(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x22;
  long lVar10;
  
  if (*(char *)(unaff_x22 + 0xd8) == '\x01') {
    FUN_10261fb58();
    func_0x000103b3e210();
    if ((param_3 & 1) == 0) {
      plVar2 = (long *)0x80;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10262260c;
      plVar2[0xd] = *(long *)(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_102620b1c,0,0);
      return;
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    puVar9 = *(undefined **)(*(long *)(unaff_x22 + 0x90) + _DAT_112eb06d0);
    if (puVar9 != (undefined *)0x0) {
      FUN_102623b28(0,0x112eb0798,&PTR_PTR_1126b1d80);
      func_0x000107c61174();
      lVar1 = 0;
      FUN_10261a1a8(0,0,1);
      if (lVar1 == 0) {
        FUN_10261fb58();
        lVar1 = 0;
      }
      else {
        func_0x000107c4aad8();
        param_2 = param_1;
        func_0x000107c4b6f0(lVar1);
        func_0x000107c60a04(param_1,param_2);
      }
      puVar3 = PTR_PTR_1126b1d38;
      func_0x000107c610f8(PTR_PTR_1126b1d38);
      func_0x000107c48ed0(param_1,param_2);
      func_0x000107c61170(lVar1);
      puVar4 = puVar9;
      func_0x000107c5d978();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        func_0x000107c4077c(puVar3);
        func_0x000107c4077c(puVar3);
        puVar5 = PTR_PTR_1126b1d80;
        func_0x000107c610f8(PTR_PTR_1126b1d80);
        func_0x000107c470e4(param_1,param_2);
        puVar4 = PTR_PTR_1126bc228;
        func_0x000107c610f8();
        uVar6 = 0;
        func_0x000107c5fadc(0,0xe000000000000000);
        func_0x000107c474c4();
        func_0x000107c61170(uVar6);
        func_0x000107c61170(puVar5);
      }
      lVar1 = *(long *)(unaff_x22 + 0x90);
      func_0x000107c5a334(puVar9);
      lVar1 = lVar1 + _DAT_112eb06e0;
      func_0x000107c61618();
      if (lVar1 == 0) {
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar9);
      }
      else {
        lVar10 = *(long *)(unaff_x22 + 0x90);
        puVar5 = puVar9;
        func_0x000107c44e54();
        puVar7 = puVar5;
        FUN_10261dab0();
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        func_0x000107c61614(unaff_x22 + 0x30,0);
        *(undefined **)(unaff_x22 + 0x10) = puVar4;
        *(char *)(unaff_x22 + 0x18) = (char)puVar5;
        *(undefined **)(unaff_x22 + 0x20) = puVar7;
        *(long *)(unaff_x22 + 0x28) = lVar1;
        *(undefined ***)(unaff_x22 + 0x38) = &PTR_DAT_11052bd88;
        func_0x000107c61604(unaff_x22 + 0x30,lVar10);
        func_0x000107c61174(puVar7);
        func_0x000100083b20(unaff_x22 + 0x88);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
        func_0x00010008a7c8(unaff_x22 + 0x80,unaff_x22 + 0x10);
        func_0x000107c61574(uVar6);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
        func_0x000100083b20(unaff_x22 + 0x40);
        func_0x000107c61574(uVar6);
        lVar1 = _DAT_112eb06d8;
        func_0x000107c61428(lVar10 + _DAT_112eb06d8,unaff_x22 + 0x68,0x21,0);
        FUN_102622c6c(unaff_x22 + 0x40,lVar10 + lVar1);
        func_0x000107c614a8(unaff_x22 + 0x68);
        puVar4 = &UNK_11052be28;
        func_0x000107c613fc(&UNK_11052be28,0x18,7);
        *(long *)(puVar4 + 0x10) = lVar10;
        puVar5 = &UNK_11052be50;
        func_0x000107c613fc(&UNK_11052be50,0x20,7);
        *(undefined **)(puVar5 + 0x10) = &UNK_10dac4ce0;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        func_0x000107c61174(lVar10);
        uVar6 = 0x112d518a8;
        func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
        uVar8 = 0x80;
        func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4cf0,puVar5,uVar6);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar9);
        func_0x000107c61574(uVar8);
        func_0x000107c61574(puVar5);
        func_0x000107c61170(puVar7);
        func_0x000102618438(unaff_x22 + 0x10);
      }
    }
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112eb06f8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102622320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10262260c; end: 10262265b;  */

void FUN_10262260c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 200) = param_1;
  *(undefined8 *)(lVar1 + 0xd0) = param_2;
  *(undefined1 *)(lVar1 + 0xd9) = param_3;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10262265c,*(undefined8 *)(lVar1 + 0xb0),*(undefined8 *)(lVar1 + 0xb8));
  return;
}



/* Entry: 10262265c; end: 102622a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10262265c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  long unaff_x22;
  long lVar11;
  
  lVar9 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  puVar1 = (undefined8 *)(lVar9 + _DAT_112eb06e8);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c615e8(uVar3);
  puVar10 = *(undefined **)(*(long *)(unaff_x22 + 0x90) + _DAT_112eb06d0);
  if (puVar10 != (undefined *)0x0) {
    lVar9 = *(long *)(unaff_x22 + 200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined1 *)(unaff_x22 + 0xd9);
    FUN_102623b28(0,0x112eb0798,&PTR_PTR_1126b1d80);
    func_0x000107c61174();
    FUN_10261a1a8(lVar9,uVar3,uVar2);
    if (lVar9 == 0) {
      FUN_10261fb58();
      lVar9 = 0;
    }
    else {
      func_0x000107c4aad8();
      param_2 = param_1;
      func_0x000107c4b6f0(lVar9);
      func_0x000107c60a04(param_1,param_2);
    }
    puVar4 = PTR_PTR_1126b1d38;
    func_0x000107c610f8(PTR_PTR_1126b1d38);
    func_0x000107c48ed0(param_1,param_2);
    func_0x000107c61170(lVar9);
    puVar5 = puVar10;
    func_0x000107c5d978();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c4077c(puVar4);
      func_0x000107c4077c(puVar4);
      puVar6 = PTR_PTR_1126b1d80;
      func_0x000107c610f8(PTR_PTR_1126b1d80);
      func_0x000107c470e4(param_1,param_2);
      puVar5 = PTR_PTR_1126bc228;
      func_0x000107c610f8();
      uVar3 = 0;
      func_0x000107c5fadc(0,0xe000000000000000);
      func_0x000107c474c4();
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar6);
    }
    lVar9 = *(long *)(unaff_x22 + 0x90);
    func_0x000107c5a334(puVar10);
    lVar9 = lVar9 + _DAT_112eb06e0;
    func_0x000107c61618();
    if (lVar9 == 0) {
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar10);
    }
    else {
      lVar11 = *(long *)(unaff_x22 + 0x90);
      puVar6 = puVar10;
      func_0x000107c44e54();
      puVar7 = puVar6;
      FUN_10261dab0();
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      func_0x000107c61614(unaff_x22 + 0x30,0);
      *(undefined **)(unaff_x22 + 0x10) = puVar5;
      *(char *)(unaff_x22 + 0x18) = (char)puVar6;
      *(undefined **)(unaff_x22 + 0x20) = puVar7;
      *(long *)(unaff_x22 + 0x28) = lVar9;
      *(undefined ***)(unaff_x22 + 0x38) = &PTR_DAT_11052bd88;
      func_0x000107c61604(unaff_x22 + 0x30,lVar11);
      func_0x000107c61174(puVar7);
      func_0x000100083b20(unaff_x22 + 0x88);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
      func_0x00010008a7c8(unaff_x22 + 0x80,unaff_x22 + 0x10);
      func_0x000107c61574(uVar3);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
      func_0x000100083b20(unaff_x22 + 0x40);
      func_0x000107c61574(uVar3);
      lVar9 = _DAT_112eb06d8;
      func_0x000107c61428(lVar11 + _DAT_112eb06d8,unaff_x22 + 0x68,0x21,0);
      FUN_102622c6c(unaff_x22 + 0x40,lVar11 + lVar9);
      func_0x000107c614a8(unaff_x22 + 0x68);
      puVar5 = &UNK_11052be28;
      func_0x000107c613fc(&UNK_11052be28,0x18,7);
      *(long *)(puVar5 + 0x10) = lVar11;
      puVar6 = &UNK_11052be50;
      func_0x000107c613fc(&UNK_11052be50,0x20,7);
      *(undefined **)(puVar6 + 0x10) = &UNK_10dac4ce0;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      func_0x000107c61174(lVar11);
      uVar3 = 0x112d518a8;
      func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
      uVar8 = 0x80;
      func_0x0001001ca524(0x80,0,0x3c,4,0,0,&UNK_10dac4cf0,puVar6,uVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar10);
      func_0x000107c61574(uVar8);
      func_0x000107c61574(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000102618438(unaff_x22 + 0x10);
    }
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0x90) + _DAT_112eb06f8) = 0;
                    /* WARNING: Could not recover jumptable at 0x000102622a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102622a04; end: 102622a63; -[_TtC34MapCustomizationTrayImplementation22MapHomeContextProvider init] */

void FUN_102622a04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapCustomizationTrayImplementation.MapHomeContextProvider",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102622a30);
  (*pcVar1)();
}



/* Entry: 102622a64; end: 102622bcb; -[_TtC34MapCustomizationTrayImplementation22MapHomeContextProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102622aa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102622aa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622a64(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb06b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112eb06b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112eb06c8));
  return;
}



/* Entry: 102622bcc; end: 102622c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622bcc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_38;
  
  lVar1 = _DAT_112eb06d0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112eb06d0);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5d978();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) goto LAB_102622c1c;
  }
  puVar2 = PTR_PTR_1126bc228;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_102622c1c:
  func_0x000107c5603c(puVar2,param_2,param_1);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c5a334(*(long *)(unaff_x20 + lVar1),param_2,puVar2);
  }
  puStack_38 = puVar2;
  func_0x000100087c34(&puStack_38);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102622c6c; end: 102622cbb;  */

undefined8 FUN_102622c6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112eb0768;
  func_0x0001000285a8(0x112eb0768,&UNK_10dac4c50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102622cbc; end: 102622cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622cbc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puStack_38;
  
  lVar1 = _DAT_112eb06d0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112eb06d0);
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5d978();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) goto LAB_102622c1c;
  }
  puVar2 = PTR_PTR_1126bc228;
  func_0x000107c610f8();
  func_0x000107c453e4();
LAB_102622c1c:
  func_0x000107c5603c(puVar2,param_2,param_1);
  if (*(long *)(unaff_x20 + lVar1) != 0) {
    func_0x000107c5a334(*(long *)(unaff_x20 + lVar1),param_2,puVar2);
  }
  puStack_38 = puVar2;
  func_0x000100087c34(&puStack_38);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 102622cc4; end: 102622d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622cc4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = _DAT_112eb06d8;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x000107c61428(unaff_x20 + _DAT_112eb06d8,auStack_68,0x21,0);
  FUN_102622c6c(&uStack_50,unaff_x20 + lVar1);
  func_0x000107c614a8(auStack_68);
  return;
}



/* Entry: 102622d20; end: 102622d6b; -[_TtC34MapCustomizationTrayImplementation22MapHomeContextProvider permissionsManagerWantsToPresentPermissionsPrompt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622d20(long param_1)

{
  param_1 = param_1 + _DAT_112eb06e0;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c3e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102622d6c; end: 102622d7b;  */

undefined1  [16] FUN_102622d6c(void)

{
  return ZEXT816(0x11052bdb8);
}



/* Entry: 102622d7c; end: 102622d9b;  */

void FUN_102622d7c(void)

{
  func_0x000107c61168(&PTR_PTR_112854dc0);
  return;
}



/* Entry: 102622d9c; end: 102622dbb; -[_TtC34MapCustomizationTrayImplementation22MapHomeContextProvider permissionsManagerModalPresentationContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102622d9c(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112eb06e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102622dbc; end: 102622e03;  */

undefined8 FUN_102622dbc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112eb0768;
  func_0x0001000285a8(0x112eb0768,&UNK_10dac4c50);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102622e04; end: 102622e0b;  */

void FUN_102622e04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10261f8f8(param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102622e0c; end: 102622e63;  */

void FUN_102622e0c(void)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102623bb4;
  plVar3[0x12] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[0x13] = lVar1;
  func_0x000107c5fce8();
  plVar3[0x14] = lVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  plVar3[0x15] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_1026221a4;
  plVar2[0x10] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10262090c,0,0);
  return;
}



/* Entry: 102622e64; end: 102622eaf;  */

void FUN_102622e64(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102623b9c;
  plVar2[10] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xb] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102622054,lVar1,lVar3);
  return;
}



/* Entry: 102622eb0; end: 102622f1f;  */

void FUN_102622eb0(undefined8 param_1)

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
  plVar3[1] = 0x102623bb0;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102622f20; end: 102622f63;  */

long FUN_102622f20(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102622f64; end: 102622fa7;  */

bool FUN_102622f64(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
  }
  return lVar1 != 0;
}



/* Entry: 102622fa8; end: 102622fff;  */

void FUN_102622fa8(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102623bbc;
  plVar3[2] = param_1;
  lVar1 = 0;
  func_0x000107c5fcec();
  plVar3[3] = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar1;
  plVar2 = (long *)0xb0;
  func_0x000107c615b8();
  plVar3[5] = (long)plVar2;
  *plVar2 = (long)plVar3;
  plVar2[1] = (long)FUN_10261eed0;
  plVar2[0x13] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261ef90,0,0);
  return;
}



/* Entry: 102623000; end: 102623053;  */

long FUN_102623000(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 102623054; end: 1026230e3;  */

void FUN_102623054(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x1026230a0;
  plVar2[10] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[0xb] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102622054,lVar1,lVar3);
  return;
}



/* Entry: 1026230e4; end: 102623153;  */

void FUN_1026230e4(undefined8 param_1)

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
  plVar3[1] = 0x102623bb8;
  (*(code *)&UNK_100ffbb74)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102623154; end: 1026231a3;  */

void FUN_102623154(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102623bc4;
  plVar3[3] = lVar2;
  plVar3[4] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[5] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10261fb0c,lVar1,lVar2);
  return;
}



/* Entry: 1026231a4; end: 102623213;  */

void FUN_1026231a4(undefined8 param_1)

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
  plVar3[1] = 0x102623bc0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102623214; end: 10262327f;  */

void FUN_102623214(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102623bc8;
  plVar4[2] = lVar1;
  plVar4[3] = lVar5;
  lVar5 = 0;
  func_0x000107c5fcec();
  plVar4[4] = lVar5;
  func_0x000107c5fce8();
  plVar4[5] = lVar5;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[6] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102621a48;
  plVar3[0x12] = lVar2;
  plVar3[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621098,0,0);
  return;
}



/* Entry: 102623280; end: 1026232ff;  */

void FUN_102623280(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x5d0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_102623300;
  plVar5[0xb4] = lVar6;
  plVar5[0xb3] = lVar2;
  plVar5[0xb2] = lVar3;
  plVar5[0xb1] = lVar1;
  plVar5[0xb0] = lVar4;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0xb5] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar5[0xb6] = lVar3;
  plVar5[0xb7] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621bb0,lVar3,lVar4);
  return;
}



/* Entry: 102623300; end: 10262333b;  */

void FUN_102623300(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102623338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10262333c; end: 10262339f;  */

void FUN_10262333c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x102623ba0;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102621ed8;
  plVar3[0x12] = lVar2;
  plVar3[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621098,0,0);
  return;
}



/* Entry: 1026233a0; end: 102623403;  */

void FUN_1026233a0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102623404;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102621f80;
  plVar3[0x12] = lVar2;
  plVar3[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621368,0,0);
  return;
}



/* Entry: 102623404; end: 10262343f;  */

void FUN_102623404(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x00010262343c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102623440; end: 1026234b7;  */

void FUN_102623440(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102623b28(0,param_1,param_2);
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



/* Entry: 1026234b8; end: 102623533;  */

void FUN_1026234b8(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x102623bcc;
  *(undefined1 *)(plVar5 + 7) = uVar3;
  plVar5[2] = lVar1;
  plVar5[3] = lVar6;
  lVar6 = 0;
  func_0x000107c5fcec();
  plVar5[4] = lVar6;
  func_0x000107c5fce8();
  plVar5[5] = lVar6;
  plVar4 = (long *)0xc0;
  func_0x000107c615b8();
  plVar5[6] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_102621620;
  plVar4[0x12] = lVar2;
  plVar4[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102621098,0,0);
  return;
}


