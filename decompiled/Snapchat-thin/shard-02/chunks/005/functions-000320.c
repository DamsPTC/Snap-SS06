/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d90170; end: 101d90173;  */

undefined8 FUN_101d90170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_1104816b0;
  func_0x000107c613fc(&UNK_1104816b0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1104816d8;
  func_0x000107c613fc(&UNK_1104816d8,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000024,0x800000010f00f2c0,&UNK_10da13898,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_110481700;
  func_0x000107c613fc(&UNK_110481700,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  puVar2 = &UNK_110481728;
  func_0x000107c613fc(&UNK_110481728,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101d9021c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar4 = 0;
  FUN_101d7b40c(0);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d90224,puVar2,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  return uVar5;
}



/* Entry: 101d90174; end: 101d901df;  */

void FUN_101d90174(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d901e0;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d8ede4,0,0);
  return;
}



/* Entry: 101d901e0; end: 101d9021b;  */

void FUN_101d901e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d90218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d9021c; end: 101d90223;  */

void FUN_101d9021c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d90224; end: 101d9025b;  */

void FUN_101d90224(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = param_2;
  return;
}



/* Entry: 101d9025c; end: 101d9029b;  */

void FUN_101d9025c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2ad70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da139d0;
  func_0x000107c61520(&UNK_10da139d0,&UNK_110481a20);
  puRam0000000112e2ad70 = puVar1;
  return;
}



/* Entry: 101d9029c; end: 101d902b7;  */

void FUN_101d9029c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d902b8,0,0);
  return;
}



/* Entry: 101d902b8; end: 101d903ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d902b8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x0001000285a8(0x112e2ada0,&UNK_10da13930);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112e2ad20);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + _DAT_112e2ad00);
  uVar8 = *(undefined8 *)(lVar1 + _DAT_112e2ad18);
  puVar2 = &UNK_110481908;
  func_0x000107c613fc(&UNK_110481908,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  *(undefined8 *)(puVar2 + 0x18) = uVar9;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  *(undefined8 *)(puVar2 + 0x28) = uVar8;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar5);
  func_0x000107c61434(uVar3);
  uVar3 = uVar6;
  func_0x0001048897a0(uVar6,1,0,FUN_101d922b4,puVar2);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uVar6);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d90400;
                    /* WARNING: Could not recover jumptable at 0x000101d903fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d8fd78(plVar4,*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Entry: 101d90400; end: 101d90443;  */

void FUN_101d90400(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x40));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d90440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101d90444; end: 101d905c7;  */

void FUN_101d90444(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar1 = param_1;
  func_0x0001000d224c(&puStack_80);
  puVar5 = puStack_80;
  if (puStack_80 == (undefined *)0x0) {
    FUN_101d9025c();
    puVar5 = &UNK_110481a20;
    func_0x000107c613f8(&UNK_110481a20,puVar1,0,0);
    *puVar1 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar5);
  }
  else {
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c507a4(puStack_80);
    puVar2 = puStack_80;
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    puVar3 = &UNK_110481930;
    func_0x000107c613fc(&UNK_110481930,0x20,7);
    *(undefined1 **)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_5;
    uStack_60 = 0x101d922c4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101d58ff0;
    puStack_68 = &UNK_110481948;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar3);
    func_0x0001000d224c(&puStack_80);
    puVar3 = puStack_80;
    func_0x000107c5dc68(puVar2);
    func_0x000107c615e8(puVar3);
    func_0x000107c615e8(puVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 101d905c8; end: 101d90717;  */

void FUN_101d905c8(undefined1 *param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_50;
  
  if (param_1 != (undefined1 *)0x0) {
    uStack_68 = 0;
    puStack_60 = (undefined1 *)0x0;
    func_0x000107c5fae8(param_1,&uStack_68);
    puVar1 = puStack_60;
    uVar4 = uStack_68;
    if (puStack_60 != (undefined1 *)0x0) {
      if (param_2 == 0) {
        func_0x0001000d224c(&uStack_68);
        func_0x0001000a8868(&uStack_68,uStack_50);
        uVar2 = uVar4;
        FUN_101d95b84(uVar4,puVar1);
        puVar3 = &UNK_110481980;
        func_0x000107c613fc(&UNK_110481980,0x20,7);
        *(undefined8 *)(puVar3 + 0x10) = uVar4;
        *(undefined1 **)(puVar3 + 0x18) = puVar1;
        uVar4 = 0;
        func_0x000107c5ede0(0);
        uVar5 = 0;
        func_0x0001048898b8(0,1,FUN_101d922cc,puVar3,uVar4);
        func_0x000107c61574(uVar2);
        func_0x000107c61574(puVar3);
        func_0x0001000834e4(&uStack_68);
        func_0x000104889c84(0,1,param_3);
        func_0x000107c61574(uVar5);
        return;
      }
      param_1 = puStack_60;
      func_0x000107c6142c();
    }
  }
  FUN_101d9025c();
  puVar3 = &UNK_110481a20;
  func_0x000107c613f8(&UNK_110481a20,param_1,0,0);
  *param_1 = 3;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar3);
  return;
}



/* Entry: 101d90718; end: 101d9083f;  */

undefined * FUN_101d90718(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (*param_1 < 1) {
    puVar2 = (undefined1 *)0x112e2ada0;
    func_0x0001000285a8(0x112e2ada0,&UNK_10da13930);
    FUN_101d9025c();
    puVar3 = &UNK_110481a20;
    func_0x000107c613f8(&UNK_110481a20,puVar2,0,0);
    *puVar2 = 9;
    puVar4 = puVar3;
    func_0x00010488904c();
    func_0x000107c614ac(puVar3);
  }
  else {
    func_0x000107c5ed80(puVar3,param_2,param_3);
    func_0x0001000285a8(0x112e2ada0,&UNK_10da13930);
    puVar4 = puVar3;
    func_0x000104888f7c(puVar3);
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
  }
  return puVar4;
}



/* Entry: 101d90840; end: 101d908df;  */

void FUN_101d90840(undefined4 param_1,long param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x30) = param_3;
  *(long *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0x8c) = param_1;
  *(undefined4 *)(unaff_x22 + 0x88) = param_4;
  *(long *)(unaff_x22 + 0x28) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x40) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d908e0;
  plVar3[5] = param_3;
  plVar3[6] = unaff_x20;
  plVar3[3] = uVar2;
  plVar3[4] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d902b8,0,0);
  return;
}



/* Entry: 101d908e0; end: 101d9093b;  */

void FUN_101d908e0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d9093c;
  }
  else {
    pcVar1 = FUN_101d90bd0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d9093c; end: 101d90a6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9093c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined4 uVar10;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined4 *)(unaff_x22 + 0x8c);
  iVar3 = *(int *)(unaff_x22 + 0x88);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar4 = PTR_PTR_1126b5988;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5ed90();
  func_0x000107c4b7f4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0x68) = puVar4;
  func_0x000107c61170(puVar5);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar6 = 3;
  if (iVar3 != 1) {
    uVar6 = 0x100000000;
  }
  uVar1 = 2;
  if (iVar3 != 0) {
    uVar1 = uVar6;
  }
  uVar6 = uVar9;
  func_0x000107c614f0(uVar9);
  FUN_101d96314(uVar10,uVar8,uVar2,5,puVar4,0,uVar1,uVar6);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
  func_0x000107c615e8(uVar9);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101d90a6c;
                    /* WARNING: Could not recover jumptable at 0x000101d90a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d91cac();
  return;
}



/* Entry: 101d90a6c; end: 101d90abf;  */

void FUN_101d90a6c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  *(undefined1 *)(lVar1 + 0x90) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d90ac0,0,0);
  return;
}



/* Entry: 101d90ac0; end: 101d90bcf;  */

void FUN_101d90ac0(void)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
    func_0x000107c61170(uVar4);
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101d90b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61170(uVar2);
  (**(code **)(lVar1 + 8))(uVar5,uVar6);
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000101d90bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101d90bd0; end: 101d90c6f;  */

void FUN_101d90bd0(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000101d90c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d90c70; end: 101d90d7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d90c70(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x0001000285a8(0x112e2ad88,&UNK_10da13900);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112e2acf0);
  puVar2 = &UNK_1104818b8;
  func_0x000107c613fc(&UNK_1104818b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  func_0x000107c6157c(uVar5);
  func_0x000107c61174(uVar3);
  uVar3 = uVar6;
  func_0x000104889654(uVar6,1,FUN_101d921a4,puVar2);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(uVar6);
  plVar4 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d90d80;
                    /* WARNING: Could not recover jumptable at 0x000101d90d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d8ff78(plVar4,*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101d90d80; end: 101d90de3;  */

void FUN_101d90d80(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(long *)(lVar3 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x48));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101d90de4;
  }
  else {
    pcVar2 = FUN_101d90e54;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d90de4; end: 101d90e53;  */

void FUN_101d90de4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(lVar1 + *(int *)(*(long *)(unaff_x22 + 0x30) + 0x30));
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(uVar3,lVar1,lVar2);
  func_0x000107c615c0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d90e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101d90e54; end: 101d90e87;  */

void FUN_101d90e54(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000101d90e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d90e88; end: 101d91103;  */

void FUN_101d90e88(long param_1)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 uVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined1 auStack_70 [8];
  long lStack_68;
  undefined **ppuStack_58;
  
  puVar3 = (undefined1 *)0x0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(puVar3 + -8);
  puVar4 = puVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar10 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x0001000d224c(&ppuStack_58);
  if (ppuStack_58 == (undefined **)0x0) {
    FUN_101d9025c();
    func_0x000107c613f8(&UNK_110481a20,puVar4,0,0);
    *puVar4 = 0;
    func_0x000107c61654();
  }
  else {
    ppuVar5 = ppuStack_58;
    func_0x000107c505c0();
    func_0x000107c61180();
    if (ppuVar5 == (undefined **)0x0) {
      FUN_101d9025c();
      func_0x000107c613f8(&UNK_110481a20,ppuVar5,0,0);
      *(undefined1 *)ppuVar5 = 4;
      func_0x000107c61654();
    }
    else {
      ppuVar11 = ppuVar5;
      func_0x000107c49a80();
      if (((ulong)ppuVar11 & 1) == 0) {
        FUN_101d9025c();
        func_0x000107c613f8(&UNK_110481a20,ppuVar11,0,0);
        uVar7 = 5;
      }
      else {
        ppuVar11 = &PTR____CFConstantStringClassReference_110f726f8;
        ppuVar6 = ppuVar5;
        lStack_68 = param_1;
        func_0x000107c43404();
        func_0x000107c61180();
        func_0x000107c61170();
        if (ppuVar6 != (undefined **)0x0) {
          ppuVar11 = ppuVar6;
          func_0x000107c43468();
          func_0x000107c61180();
          if (ppuVar11 != (undefined **)0x0) {
            func_0x000107c5edb4(puVar10);
            func_0x000107c61170(ppuVar11);
            pcVar9 = *(code **)(lVar8 + 0x20);
            (*pcVar9)((long)puVar10 - extraout_x12,puVar10,puVar3);
            ppuVar11 = ppuVar6;
            func_0x000107c427b8();
            func_0x000107c615e8(ppuVar6);
            func_0x000107c615e8(ppuStack_58);
            func_0x000107c615e8(ppuVar5);
            lVar8 = 0x112e2ad80;
            func_0x0001000285a8(0x112e2ad80,&UNK_10da138f8);
            lVar2 = lStack_68;
            iVar1 = *(int *)(lVar8 + 0x30);
            (*pcVar9)(lStack_68,(long)puVar10 - extraout_x12,puVar3);
            *(undefined ***)(lVar2 + iVar1) = ppuVar11;
            return;
          }
          func_0x000107c615e8();
          ppuVar11 = ppuVar6;
        }
        FUN_101d9025c();
        func_0x000107c613f8(&UNK_110481a20,ppuVar11,0,0);
        uVar7 = 6;
      }
      *(undefined1 *)ppuVar11 = uVar7;
      func_0x000107c61654();
      func_0x000107c615e8(ppuStack_58);
      ppuStack_58 = ppuVar5;
    }
    func_0x000107c615e8(ppuStack_58);
  }
  return;
}



/* Entry: 101d91104; end: 101d9119f;  */

void FUN_101d91104(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(long *)(unaff_x22 + 0x68) = unaff_x20;
  *(long *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d911a0;
  plVar4[4] = param_1;
  plVar4[5] = unaff_x20;
  plVar4[3] = uVar3;
  lVar1 = 0x112e2ad80;
  func_0x0001000285a8(0x112e2ad80,&UNK_10da138f8);
  plVar4[6] = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[7] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d90c70,0,0);
  return;
}



/* Entry: 101d911a0; end: 101d9120b;  */

void FUN_101d911a0(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = param_1;
    pcVar1 = FUN_101d9120c;
  }
  else {
    pcVar1 = FUN_101d9160c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d9120c; end: 101d91307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d9120c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x80),uVar2,*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar2);
  puVar4 = PTR_PTR_1126b5988;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x000107c5ed90();
  func_0x000107c4b7f4();
  func_0x000107c61180();
  *(undefined **)(unaff_x22 + 0xa8) = puVar4;
  func_0x000107c61170(puVar5);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar7 = *(int **)(lVar3 + 8);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_101d91308;
                    /* WARNING: Could not recover jumptable at 0x000101d91304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0xa0),uVar2,lVar3);
  return;
}



/* Entry: 101d91308; end: 101d91367;  */

void FUN_101d91308(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xb8) = param_1;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d91368;
  }
  else {
    pcVar1 = FUN_101d91648;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d91368; end: 101d91487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d91368(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = uVar3;
  func_0x000107c4ca5c();
  uVar5 = 3;
  if ((int)uVar4 != 1) {
    uVar5 = 0x100000000;
  }
  uVar1 = 2;
  if ((int)uVar4 != 0) {
    uVar1 = uVar5;
  }
  func_0x000107c42378(uVar3);
  uVar5 = 0;
  FUN_101d962f4(0);
  FUN_101d97604(param_1,uVar6,uVar2,5,uVar10,uVar8,uVar1,uVar5,&PTR_DAT_110481f28);
  *(undefined8 *)(unaff_x22 + 200) = uVar6;
  func_0x000107c615e8(uVar9);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101d91488;
                    /* WARNING: Could not recover jumptable at 0x000101d91484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d91cac();
  return;
}



/* Entry: 101d91488; end: 101d914db;  */

void FUN_101d91488(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd8) = param_1;
  *(undefined1 *)(lVar1 + 0xe0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d914dc,0,0);
  return;
}



/* Entry: 101d914dc; end: 101d9160b;  */

void FUN_101d914dc(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  if (*(char *)(unaff_x22 + 0xe0) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x48,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar1 = *(long *)(unaff_x22 + 0x78);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    (**(code **)(lVar1 + 8))(uVar4,uVar6);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101d915a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  (**(code **)(lVar1 + 8))(uVar3,uVar7);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d91608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 101d9160c; end: 101d91647;  */

void FUN_101d9160c(void)

{
  long unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101d91644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d91648; end: 101d916ab;  */

void FUN_101d91648(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xa8));
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101d916a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d916ac; end: 101d917b3;  */

void FUN_101d916ac(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  long lStack_58;
  
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 == (undefined1 *)0x0) {
    FUN_101d9025c();
    func_0x000107c613f8(&UNK_110481a20,param_1,0,0);
    *param_1 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c5faec();
    uVar1 = param_2;
    func_0x000107c61170(param_1);
    func_0x0001000d224c(&uStack_60);
    func_0x000107c614f0(uStack_60);
    func_0x000107c5ed70();
    (**(code **)(lStack_58 + 8))();
    func_0x000107c6142c(param_2);
    func_0x000107c615e8(uStack_60);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 101d917b4; end: 101d919e3;  */

undefined1  [16] FUN_101d917b4(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  ppuVar8 = &puStack_a0;
  ppuVar11 = &puStack_a0;
  uStack_68 = 0xf000000000000000;
  uStack_70 = 0;
  puVar6 = &UNK_1104817a0;
  func_0x000107c613fc(&UNK_1104817a0,0x18,7);
  *(undefined8 **)(puVar6 + 0x10) = &uStack_70;
  puVar7 = &UNK_1104817c8;
  func_0x000107c613fc(&UNK_1104817c8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101d920d0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101d92100;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101380a90;
  puStack_88 = &UNK_1104817e0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(&puStack_a0);
  puVar9 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110481818;
  func_0x000107c613fc(&UNK_110481818,0x18,7);
  *(undefined8 **)(puVar9 + 0x10) = &uStack_70;
  puVar10 = &UNK_110481840;
  func_0x000107c613fc(&UNK_110481840,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x101d92124;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = (code *)0x101d9212c;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_10130d598;
  puStack_88 = &UNK_110481858;
  puStack_78 = puVar10;
  func_0x000107c60bc4(&puStack_a0);
  puVar2 = puStack_78;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar2);
  func_0x000107c4c670();
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  uVar4 = uStack_68;
  uVar3 = uStack_70;
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = uStack_70;
  func_0x000100de78a0(uStack_70,uStack_68);
  func_0x0001000b44c0(uVar3,uVar4);
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x7d,0x103,0xf,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101d919e0);
    (*pcVar5)();
  }
  puVar6 = puVar10;
  func_0x000107c61544(puVar10,"",0x7d,0x105,0x1d,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar6 & 1) == 0) {
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101d919e4);
  (*pcVar5)();
}



/* Entry: 101d919e4; end: 101d91a3f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x000101d91a0c) */

void FUN_101d919e4(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  func_0x000107c5ede8();
  uVar2 = *param_2;
  uVar1 = param_2[1];
  *param_2 = param_1;
  param_2[1] = uVar3;
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar4 = (uint)(uVar1 >> 0x3e);
  if (uVar4 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101d91a40; end: 101d91a8b;  */

void FUN_101d91a40(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_101d916ac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 101d91a8c; end: 101d91b63;  */

void FUN_101d91a8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101d922f4,0,0);
  return;
}



/* Entry: 101d91b64; end: 101d91cab;  */

void FUN_101d91b64(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000104888eec(uVar3);
  (**(code **)(lVar1 + 0x30))(uVar3,1,uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  if ((int)uVar3 == 1) {
    func_0x000101d92204(*(undefined8 *)(unaff_x22 + 0x60),0x112e2ad78,&UNK_10da138e0);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x101d922f8;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_110481778;
    func_0x000107c613fc(&UNK_110481778,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    func_0x00010075a04c(0,1,FUN_101d920a8,puVar2);
    func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000101d921bc(*(undefined8 *)(unaff_x22 + 0x60),uVar3,0x112d5d568,&UNK_10d9392e0);
  func_0x000101d921bc(uVar3,uVar4,0x112d5d568,&UNK_10d9392e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101d91ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d91cac; end: 101d91cc3;  */

void FUN_101d91cac(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d91cc4,0,0);
  return;
}



/* Entry: 101d91cc4; end: 101d91d8b;  */

void FUN_101d91cc4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000101d91d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d91d8c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_110481890;
  func_0x000107c613fc(&UNK_110481890,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x101d92134,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d91d8c; end: 101d91dcb;  */

void FUN_101d91d8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d91dcc,0,0);
  return;
}



/* Entry: 101d91dcc; end: 101d91ddb;  */

void FUN_101d91dcc(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d91dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101d91ddc; end: 101d91e73;  */

void FUN_101d91ddc(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  lVar2 = 0x112e2ad98;
  func_0x0001000285a8(0x112e2ad98,&UNK_10da13920);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
  lVar2 = 0x112e2ad90;
  func_0x0001000285a8(0x112e2ad90,&UNK_10da13910);
  *(long *)(unaff_x22 + 0x68) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d91e74,0,0);
  return;
}



/* Entry: 101d91e74; end: 101d91fbb;  */

void FUN_101d91e74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000104888eec(uVar3);
  (**(code **)(lVar1 + 0x30))(uVar3,1,uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  if ((int)uVar3 == 1) {
    func_0x000101d92204(*(undefined8 *)(unaff_x22 + 0x60),0x112e2ad98,&UNK_10da13920);
    *(undefined8 *)(unaff_x22 + 0x38) = uVar4;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101d91fbc;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,0);
    puVar2 = &UNK_1104818e0;
    func_0x000107c613fc(&UNK_1104818e0,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    func_0x00010075a04c(0,1,FUN_101d92244,puVar2);
    func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000101d921bc(*(undefined8 *)(unaff_x22 + 0x60),uVar3,0x112e2ad90,&UNK_10da13910);
  func_0x000101d921bc(uVar3,uVar4,0x112e2ad90,&UNK_10da13910);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101d91fb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d91fbc; end: 101d92003;  */

void FUN_101d91fbc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x60);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x78));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d92000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101d92004; end: 101d920a7;  */

void FUN_101d92004(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = param_3;
  func_0x0001000285a8(param_3,param_4);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_101d9226c(param_1,&stack0xffffffffffffffc0 + -extraout_x8,param_3,param_4);
  FUN_101d921bc(&stack0xffffffffffffffc0 + -extraout_x8,
                *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28),param_3,param_4);
  func_0x000107c6144c(param_2);
  return;
}



/* Entry: 101d920a8; end: 101d920cf;  */

void FUN_101d920a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d92004(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112d5d568,&UNK_10d9392e0);
  return;
}



/* Entry: 101d920d0; end: 101d920ff;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101d920d0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  ulong *puVar4;
  long unaff_x20;
  
  puVar4 = *(ulong **)(unaff_x20 + 0x10);
  uVar2 = *puVar4;
  uVar1 = puVar4[1];
  *puVar4 = param_1;
  puVar4[1] = param_2;
  func_0x00010006c00c();
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar3 = (uint)(uVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101d92100; end: 101d9213f;  */

void FUN_101d92100(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d92140; end: 101d9218f;  */

void FUN_101d92140(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101d92190; end: 101d921a3;  */

void FUN_101d92190(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101d921a4; end: 101d921bb;  */

void FUN_101d921a4(void)

{
  long unaff_x20;
  
  FUN_101d90e88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d921bc; end: 101d92243;  */

undefined8 FUN_101d921bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101d92244; end: 101d9226b;  */

void FUN_101d92244(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d92004(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112e2ad90,&UNK_10da13910);
  return;
}



/* Entry: 101d9226c; end: 101d922b3;  */

undefined8 FUN_101d9226c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101d922b4; end: 101d922cb;  */

void FUN_101d922b4(undefined1 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar7 = &puStack_80;
  puVar3 = param_1;
  func_0x0001000d224c(&puStack_80,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  puVar8 = puStack_80;
  if (puStack_80 == (undefined *)0x0) {
    FUN_101d9025c();
    puVar8 = &UNK_110481a20;
    func_0x000107c613f8(&UNK_110481a20,puVar3,0,0);
    *puVar3 = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar8);
  }
  else {
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c507a4(puStack_80);
    puVar5 = puStack_80;
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar6 = &UNK_110481930;
    func_0x000107c613fc(&UNK_110481930,0x20,7);
    *(undefined1 **)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    uStack_60 = 0x101d922c4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101d58ff0;
    puStack_68 = &UNK_110481948;
    puStack_58 = puVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar6 = puStack_58;
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(uVar2);
    func_0x000107c61574(puVar6);
    func_0x0001000d224c(&puStack_80);
    puVar6 = puStack_80;
    func_0x000107c5dc68(puVar5);
    func_0x000107c615e8(puVar6);
    func_0x000107c615e8(puVar8);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 101d922cc; end: 101d922e3;  */

void FUN_101d922cc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d90718(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d922e4; end: 101d92487;  */

void FUN_101d922e4(long param_1,long param_2)

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



/* Entry: 101d92488; end: 101d92533;  */

void FUN_101d92488(void)

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



/* Entry: 101d92534; end: 101d92543;  */

void FUN_101d92534(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d92544; end: 101d9256b;  */

void FUN_101d92544(uint *param_1)

{
  uint uVar1;
  byte *unaff_x20;
  
  uVar1 = (uint)*unaff_x20;
  func_0x000101d92460();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d9256c; end: 101d9258b;  */

undefined8 FUN_101d9256c(void)

{
  return 0;
}



/* Entry: 101d9258c; end: 101d9260f;  */

void FUN_101d9258c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2add0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da139a8;
  func_0x000107c61520(&UNK_10da139a8,&UNK_110481a20);
  puRam0000000112e2add0 = puVar1;
  return;
}



/* Entry: 101d92610; end: 101d926d7;  */

void FUN_101d92610(long *param_1,long param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *param_1;
  if (*(long *)(lVar4 + 0x10) == 0) {
    lVar5 = 0;
  }
  else {
    func_0x000107c61434(lVar4);
    lVar5 = param_2;
    uVar2 = param_3;
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + lVar5 * 8);
    }
    func_0x000107c6142c(lVar4);
  }
  if (!SCARRY8(lVar5,param_4)) {
    lVar4 = *param_1;
    func_0x000107c61558(lVar4);
    lVar3 = *param_1;
    FUN_101687ce0(lVar5 + param_4,param_2,param_3,lVar4);
    *param_1 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d926d8);
  (*pcVar1)();
}



/* Entry: 101d926d8; end: 101d927b3;  */

void FUN_101d926d8(undefined8 *param_1,ulong *param_2,long param_3,ulong param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  func_0x000107c61434(uVar3);
  func_0x000100029284();
  func_0x000107c6142c(uVar3);
  if ((param_4 & 1) == 0) {
    uVar4 = 0;
    uVar1 = 1;
  }
  else {
    uVar3 = *param_2;
    func_0x000107c61558();
    uVar2 = *param_2;
    if ((uVar3 & 1) == 0) {
      func_0x000101136368();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(uVar2 + 0x30) + param_3 * 0x10 + 8));
    uVar4 = *(undefined8 *)(*(long *)(uVar2 + 0x38) + param_3 * 8);
    FUN_101d9283c(param_3,uVar2);
    uVar1 = 0;
    *param_2 = uVar2;
  }
  *param_1 = uVar4;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}



/* Entry: 101d927b4; end: 101d9281f;  */

void FUN_101d927b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (-1 < param_3) {
    uVar1 = *(undefined8 *)(*unaff_x20 + 0x10);
    uStack_50 = param_1;
    uStack_48 = param_2;
    lStack_40 = param_3;
    func_0x000107c6157c(uVar1);
    func_0x000100075034(FUN_101d92820,auStack_60,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 101d92820; end: 101d9283b;  */

void FUN_101d92820(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d92610(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d9283c; end: 101d929eb;  */

void FUN_101d9283c(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_101d92930:
          if ((long)param_1 < (long)uVar8) goto LAB_101d928b8;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_101d92930;
LAB_101d928b8:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101d929ec);
  (*pcVar5)();
}



/* Entry: 101d929ec; end: 101d92a4b; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl20GenericAssetUploader init] */

void FUN_101d929ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupUploadMediaStepServicesImpl.GenericAssetUploader",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d92a18);
  (*pcVar1)();
}



/* Entry: 101d92a4c; end: 101d92ad3; -[_TtC42SCMemPlatBackupUploadMediaStepServicesImpl20GenericAssetUploader .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d92a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d92a88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d92aa8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d92a8c) */
/* WARNING: Removing unreachable block (ram,0x000101d92a6c) */
/* WARNING: Removing unreachable block (ram,0x000101d92aac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d92a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e2ae78));
  return;
}



/* Entry: 101d92ad4; end: 101d92af3;  */

void FUN_101d92ad4(void)

{
  func_0x000107c61168(&PTR_PTR_1128039e0);
  return;
}



/* Entry: 101d92af4; end: 101d92c4f;  */

undefined8 FUN_101d92af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_110481ae8;
  func_0x000107c613fc(&UNK_110481ae8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110481b10;
  func_0x000107c613fc(&UNK_110481b10,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000024,0x800000010f00f2c0,&UNK_10da13ae8,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_110481b38;
  func_0x000107c613fc(&UNK_110481b38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar4 = 0;
  FUN_101d931e0(0,0x112e28b08,&PTR_PTR_1126bc7d8);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d93174,puVar1,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  return uVar5;
}



/* Entry: 101d92c50; end: 101d92c6b;  */

void FUN_101d92c50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d92c6c,0,0);
  return;
}



/* Entry: 101d92c6c; end: 101d92d2f;  */

void FUN_101d92c6c(void)

{
  undefined1 *puVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  puVar1 = (undefined1 *)(lVar3 + 0x10);
  func_0x000107c61618();
  *(undefined1 **)(unaff_x22 + 0x40) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_101d92d30;
    lVar3 = *(long *)(unaff_x22 + 0x30);
    plVar2[3] = *(long *)(unaff_x22 + 0x38);
    plVar2[4] = (long)puVar1;
    plVar2[2] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d92e10,0,0);
    return;
  }
  FUN_101d931a0();
  func_0x000107c613f8(&UNK_110481bd8,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d92d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d92d30; end: 101d92df3;  */

void FUN_101d92d30(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    uVar1 = 0x101d92d8c;
  }
  else {
    uVar1 = 0x101d92dc0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 101d92df4; end: 101d92e0f;  */

void FUN_101d92df4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d92e10,0,0);
  return;
}



/* Entry: 101d92e10; end: 101d92f43;  */

void FUN_101d92e10(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x10);
  func_0x000107c43e48();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_101d931e0(0,0x112e28b18,&PTR_PTR_1126dea20);
  uVar7 = uVar3;
  func_0x000107c5fc54(uVar3,uVar4);
  *(ulong *)(unaff_x22 + 0x28) = uVar7;
  func_0x000107c61170(uVar3);
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
  *(ulong *)(unaff_x22 + 0x30) = uVar3;
  uVar7 = *(ulong *)(unaff_x22 + 0x28);
  if (uVar3 != 0) {
    if ((uVar7 & 0xc000000000000001) == 0) {
      if (*(long *)((uVar7 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101d92f44);
        (*pcVar2)();
      }
      lVar5 = *(long *)(uVar7 + 0x20);
      func_0x000107c61174();
    }
    else {
      lVar5 = 0;
      FUN_101d942e0(0,uVar7,&PTR_PTR_1126dea20,0x112e28b18);
    }
    *(long *)(unaff_x22 + 0x38) = lVar5;
    *(undefined8 *)(unaff_x22 + 0x40) = 1;
    plVar6 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_101d92f44;
    lVar1 = *(long *)(unaff_x22 + 0x20);
    lVar8 = *(long *)(unaff_x22 + 0x10);
    plVar6[6] = *(long *)(unaff_x22 + 0x18);
    plVar6[7] = lVar1;
    plVar6[4] = lVar8;
    plVar6[5] = lVar5;
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar7 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar6[8] = uVar7;
    lVar5 = 0;
    func_0x000107c5ede0();
    plVar6[9] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar6[10] = lVar5;
    uVar7 = *(long *)(lVar5 + 0x40) + 0xf;
    uVar3 = uVar7 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar6[0xb] = uVar3;
    uVar7 = uVar7 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar6[0xc] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d932bc,0,0);
    return;
  }
  func_0x000107c6142c(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101d92f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d92f44; end: 101d92f9f;  */

void FUN_101d92f44(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d92fa0;
  }
  else {
    pcVar1 = FUN_101d93088;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d92fa0; end: 101d93087;  */

void FUN_101d92fa0(void)

{
  code *pcVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x40);
  lVar6 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
  if (lVar4 == lVar6) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000101d92fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar7 = *(ulong *)(unaff_x22 + 0x40);
  uVar5 = *(ulong *)(unaff_x22 + 0x28);
  if ((uVar5 & 0xc000000000000001) == 0) {
    if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101d93088);
      (*pcVar1)();
    }
    uVar2 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar2 = uVar7;
    FUN_101d942e0(uVar7,uVar5,&PTR_PTR_1126dea20,0x112e28b18);
  }
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  *(ulong *)(unaff_x22 + 0x40) = uVar7 + 1;
  if (!SCARRY8(uVar7,1)) {
    plVar3 = (long *)0xb0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x48) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_101d92f44;
    lVar4 = *(long *)(unaff_x22 + 0x20);
    lVar6 = *(long *)(unaff_x22 + 0x10);
    plVar3[6] = *(long *)(unaff_x22 + 0x18);
    plVar3[7] = lVar4;
    plVar3[4] = lVar6;
    plVar3[5] = uVar2;
    lVar4 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[8] = uVar5;
    lVar4 = 0;
    func_0x000107c5ede0();
    plVar3[9] = lVar4;
    lVar4 = *(long *)(lVar4 + -8);
    plVar3[10] = lVar4;
    uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
    uVar7 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0xb] = uVar7;
    uVar5 = uVar5 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d932bc,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d93084);
  (*pcVar1)();
}



/* Entry: 101d93088; end: 101d930c7;  */

void FUN_101d93088(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101d930c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d930c8; end: 101d930cb;  */

undefined8 FUN_101d930c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_110481ae8;
  func_0x000107c613fc(&UNK_110481ae8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110481b10;
  func_0x000107c613fc(&UNK_110481b10,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c61174();
  func_0x000107c61434(param_2);
  uVar3 = 0x60;
  func_0x000104887c7c(0x60,0,0x48,4,0xd000000000000024,0x800000010f00f2c0,&UNK_10da13ae8,puVar2);
  func_0x000107c61574(puVar2);
  puVar1 = &UNK_110481b38;
  func_0x000107c613fc(&UNK_110481b38,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar4 = 0;
  FUN_101d931e0(0,0x112e28b08,&PTR_PTR_1126bc7d8);
  func_0x000107c61174(param_1);
  uVar5 = 0;
  func_0x000100775264(0,1,FUN_101d93174,puVar1,uVar4);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  return uVar5;
}



/* Entry: 101d930cc; end: 101d93137;  */

void FUN_101d930cc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d93138;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d92c6c,0,0);
  return;
}



/* Entry: 101d93138; end: 101d93173;  */

void FUN_101d93138(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d93170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d93174; end: 101d9319f;  */

void FUN_101d93174(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174();
  return;
}



/* Entry: 101d931a0; end: 101d931df;  */

void FUN_101d931a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e2aed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da13be8;
  func_0x000107c61520(&UNK_10da13be8,&UNK_110481bd8);
  puRam0000000112e2aed8 = puVar1;
  return;
}



/* Entry: 101d931e0; end: 101d9321f;  */

void FUN_101d931e0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101d93220; end: 101d932bb;  */

void FUN_101d93220(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x40) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x48) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x60) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d932bc,0,0);
  return;
}



/* Entry: 101d932bc; end: 101d93553;  */

/* WARNING: Removing unreachable block (ram,0x000101d93414) */

void FUN_101d932bc(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x28);
  func_0x000107c3e234();
  func_0x000107c61180();
  uVar11 = param_2;
  if (uVar5 != 0) {
    uVar6 = uVar5;
    func_0x000107c5faec();
    uVar11 = param_2;
    func_0x000107c61170(uVar5);
    uVar5 = uVar6 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar5 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar5 != 0) && (*(long *)(*(long *)(unaff_x22 + 0x30) + 0x10) != 0)) {
      func_0x000107c61434(*(long *)(unaff_x22 + 0x30));
      uVar11 = param_2;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
        uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
        lVar9 = *(long *)(unaff_x22 + 0x50);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x40);
        lVar15 = *(long *)(unaff_x22 + 0x30);
        puVar1 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar6 * 0x10);
        uVar14 = *puVar1;
        uVar3 = puVar1[1];
        func_0x000107c61434(uVar3);
        func_0x000107c6142c(lVar15);
        func_0x000107c6142c(param_2);
        func_0x000107c5edd0(uVar13,uVar14,uVar3);
        func_0x000107c6142c(uVar3);
        uVar11 = 1;
        (**(code **)(lVar9 + 0x30))(uVar13,1,uVar2);
        if ((int)uVar13 != 1) {
          uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
          lVar9 = *(long *)(unaff_x22 + 0x50);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x20);
          uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
          (**(code **)(lVar9 + 0x20))(uVar13,*(undefined8 *)(unaff_x22 + 0x40),uVar2);
          FUN_101d93848(uVar14,uVar3,uVar13);
          (**(code **)(lVar9 + 8))(uVar13,uVar2);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
          func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
          func_0x000107c615c0(uVar2);
          func_0x000107c615c0(uVar14);
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
          goto LAB_101d93474;
        }
        func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0x40));
        goto LAB_101d933c4;
      }
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x30));
    }
    func_0x000107c6142c(param_2);
  }
LAB_101d933c4:
  puVar7 = *(undefined1 **)(unaff_x22 + 0x20);
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (puVar7 != (undefined1 *)0x0) {
    lVar9 = *(long *)(unaff_x22 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar8 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(puVar7);
    *(undefined1 **)(unaff_x22 + 0x68) = puVar8;
    *(ulong *)(unaff_x22 + 0x70) = uVar11;
    FUN_101d93970(lVar9,uVar2);
    *(long *)(unaff_x22 + 0x78) = lVar9;
    plVar10 = (long *)0xf0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_101d93554;
    lVar12 = *(long *)(unaff_x22 + 0x38);
    lVar15 = *(long *)(unaff_x22 + 0x20);
    lVar4 = *(long *)(unaff_x22 + 0x28);
    plVar10[0xc] = lVar9;
    plVar10[0xd] = lVar12;
    plVar10[10] = lVar15;
    plVar10[0xb] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101d93b60,0,0);
    return;
  }
  FUN_101d931a0();
  func_0x000107c613f8(&UNK_110481bd8,puVar7,0,0);
  *puVar7 = 1;
  func_0x000107c61654();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar14);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_101d93474:
                    /* WARNING: Could not recover jumptable at 0x000101d9348c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101d93554; end: 101d935bb;  */

void FUN_101d93554(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d935bc;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x70));
    pcVar1 = FUN_101d9378c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d935bc; end: 101d93677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d935bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000d224c(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_101d96748(uVar2,uVar1,uVar4);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  func_0x000107c615e8(uVar5);
  func_0x000107c6142c(uVar1);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101d93678;
                    /* WARNING: Could not recover jumptable at 0x000101d93674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d8fd78(plVar3,*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101d93678; end: 101d936db;  */

void FUN_101d93678(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x98);
  *(long *)(lVar3 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xa0));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101d936dc;
  }
  else {
    pcVar2 = FUN_101d937e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101d936dc; end: 101d9378b;  */

void FUN_101d936dc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_101d93848(*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),uVar2);
  (**(code **)(lVar1 + 8))(uVar2,uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101d93788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d9378c; end: 101d937e3;  */

void FUN_101d9378c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x78));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d937e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d937e4; end: 101d93847;  */

void FUN_101d937e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d93844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d93848; end: 101d9396f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d93848(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = param_2;
  func_0x000107c5b2d0();
  func_0x000107c61180();
  if (param_1 == (undefined1 *)0x0) {
    FUN_101d931a0();
    func_0x000107c613f8(&UNK_110481bd8,param_1,0,0);
    *param_1 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c5faec();
    uVar2 = uVar1;
    func_0x000107c61170(param_1);
    func_0x000107c3e240(param_2);
    func_0x0001000d224c(&uStack_70);
    func_0x000107c614f0(uStack_70);
    func_0x000107c5ed70();
    (**(code **)(lStack_68 + 8))();
    func_0x000107c6142c(uVar1);
    func_0x000107c615e8(uStack_70);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 101d93970; end: 101d93b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101d93970(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined1 *puStack_38;
  
  func_0x000107c3e240();
  func_0x000107c308d4();
  puVar1 = param_2;
  func_0x0001000d224c(&puStack_38);
  if (puStack_38 == (undefined1 *)0x0) {
    FUN_101d931a0();
    func_0x000107c613f8(&UNK_110481bd8,puVar1,0,0);
    *puVar1 = 0;
    func_0x000107c61654();
  }
  else {
    puVar1 = puStack_38;
    func_0x000107c505c4();
    func_0x000107c61180();
    if (puVar1 == (undefined1 *)0x0) {
      FUN_101d931a0();
      func_0x000107c613f8(&UNK_110481bd8,puVar1,0,0);
      *puVar1 = 7;
      func_0x000107c61654();
    }
    else {
      puVar2 = puVar1;
      func_0x000107c49a80();
      if ((int)puVar2 == 0) {
        FUN_101d931a0();
        func_0x000107c613f8(&UNK_110481bd8,puVar2,0,0);
        uVar4 = 8;
      }
      else {
        puVar2 = param_2;
        func_0x000108018d28();
        func_0x000107c61180();
        if (puVar2 == (undefined1 *)0x0) {
          FUN_101d931a0();
          func_0x000107c613f8(&UNK_110481bd8,puVar2,0,0);
          uVar4 = 9;
        }
        else {
          puVar3 = puVar1;
          func_0x000107c43404();
          func_0x000107c61180();
          func_0x000107c61170();
          if (puVar3 != (undefined1 *)0x0) {
            func_0x000107c615e8(puStack_38);
            func_0x000107c615e8(puVar1);
            return puVar3;
          }
          FUN_101d931a0();
          func_0x000107c613f8(&UNK_110481bd8,puVar2,0,0);
          uVar4 = 10;
          param_2 = (undefined1 *)0x0;
        }
      }
      *puVar2 = uVar4;
      func_0x000107c61654();
      func_0x000107c615e8(puStack_38);
      puStack_38 = puVar1;
    }
    func_0x000107c615e8(puStack_38);
  }
  return param_2;
}



/* Entry: 101d93b44; end: 101d93b5f;  */

void FUN_101d93b44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d93b60,0,0);
  return;
}



/* Entry: 101d93b60; end: 101d93e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d93b60(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 *puVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x22;
  code *pcVar16;
  long lVar17;
  
  lVar14 = *(long *)(unaff_x22 + 0x60);
  lVar4 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x70) = lVar4;
  lVar17 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar17;
  uVar7 = *(long *)(lVar17 + 0x40) + 0xf;
  uVar5 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar5;
  puVar6 = (undefined1 *)(uVar7 & 0xfffffffffffffff0);
  func_0x000107c615b8();
  func_0x000107c43468();
  func_0x000107c61180();
  uVar7 = uVar7 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar7);
  if (lVar14 == 0) {
    func_0x000107c615c0();
    func_0x000107c615c0();
    FUN_101d931a0();
    func_0x000107c613f8(&UNK_110481bd8,puVar6,0,0);
    *puVar6 = 10;
    func_0x000107c61654();
  }
  else {
    uVar15 = *(ulong *)(unaff_x22 + 0x50);
    func_0x000107c5edb4(uVar7,lVar14);
    func_0x000107c61170(lVar14);
    pcVar16 = *(code **)(lVar17 + 0x20);
    (*pcVar16)(puVar6,uVar7,lVar4);
    func_0x000107c615c0(uVar7);
    puVar12 = puVar6;
    (*pcVar16)(uVar5,puVar6,lVar4);
    func_0x000107c615c0(puVar6);
    puVar8 = PTR_PTR_1126b5988;
    func_0x000107c61168();
    puVar9 = puVar8;
    func_0x000107c5ed90();
    func_0x000107c4b7f4();
    func_0x000107c61180();
    *(undefined **)(unaff_x22 + 0x88) = puVar8;
    func_0x000107c61170(puVar9);
    func_0x000107c5b2d0();
    func_0x000107c61180();
    puVar6 = (undefined1 *)0x0;
    if (uVar15 != 0) {
      uVar7 = uVar15;
      puVar6 = puVar12;
      func_0x000107c5faec();
      func_0x000107c61170(uVar15);
      *(ulong *)(unaff_x22 + 0x90) = uVar7;
      *(undefined1 **)(unaff_x22 + 0x98) = puVar6;
      uVar7 = uVar7 & 0xffffffffffff;
      if (((ulong)puVar6 & 0x2000000000000000) != 0) {
        uVar7 = (ulong)puVar6 >> 0x38 & 0xf;
      }
      if (uVar7 != 0) {
        uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar3 = (undefined4)*(undefined8 *)(unaff_x22 + 0x58);
        func_0x000107c3e240();
        *(undefined4 *)(unaff_x22 + 0xe8) = uVar3;
        func_0x000107c427b8();
        *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
        func_0x0001000d224c(unaff_x22 + 0x10);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar4 = *(long *)(unaff_x22 + 0x30);
        func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
        piVar13 = *(int **)(lVar4 + 8);
        iVar1 = *piVar13;
        plVar11 = (long *)(ulong)(uint)piVar13[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xa8) = plVar11;
        *plVar11 = unaff_x22;
        plVar11[1] = (long)FUN_101d93e14;
                    /* WARNING: Could not recover jumptable at 0x000101d93d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar13))
                  (*(undefined8 *)(unaff_x22 + 0x50),uVar10,uVar2,lVar4);
        return;
      }
      func_0x000107c6142c();
    }
    FUN_101d931a0();
    func_0x000107c613f8(&UNK_110481bd8,puVar6,0,0);
    *puVar6 = 1;
    func_0x000107c61654();
    func_0x000107c61170(puVar8);
    (**(code **)(lVar17 + 8))(uVar5,lVar4);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000101d93e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d93e14; end: 101d93e7b;  */

void FUN_101d93e14(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0xb0) = param_1;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101d93e7c;
  }
  else {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x98));
    pcVar1 = FUN_101d94280;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d93e7c; end: 101d93fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d93e7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined4 *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x0001000d224c(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = uVar11;
  func_0x000107c4ca5c();
  uVar5 = 3;
  if ((int)uVar4 != 1) {
    uVar5 = 0x100000000;
  }
  uVar1 = 2;
  if ((int)uVar4 != 0) {
    uVar1 = uVar5;
  }
  func_0x000107c42378(uVar11);
  uVar5 = 0;
  FUN_101d962f4(0);
  FUN_101d97604(param_1,uVar6,uVar2,uVar3,uVar10,uVar9,uVar1,uVar5,&PTR_DAT_110481f28);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
  func_0x000107c615e8(uVar8);
  func_0x000107c6142c(uVar2);
  plVar7 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_101d93fa8;
                    /* WARNING: Could not recover jumptable at 0x000101d93fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101d91cac();
  return;
}


