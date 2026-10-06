/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c73054; end: 103c730eb;  */

void FUN_103c73054(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 200);
  *(undefined8 *)(lVar1 + 0xf0) = param_1;
  *(undefined8 *)(lVar1 + 0xf8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103c730a8,uVar2,0);
  return;
}



/* Entry: 103c730ec; end: 103c73137;  */

void FUN_103c730ec(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  FUN_103c70250(unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0)
                ,*(undefined8 *)(unaff_x22 + 0xf0),*(undefined8 *)(unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c73138,uVar1,0);
  return;
}



/* Entry: 103c73138; end: 103c734a3;  */

void FUN_103c73138(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_60;
  
  if (*(long *)(unaff_x22 + 0x50) == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xf8));
    if (lRam0000000112ffcec0 != -1) {
      func_0x000107c61568(0x112ffcec0,FUN_103c72f28);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar6 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    lVar11 = *(long *)(lVar6 + -8);
    uVar1 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar1);
    (**(code **)(lVar11 + 0x10))();
    func_0x000107c61434();
    func_0x000107c5f160();
    uVar5 = uVar8;
    func_0x000107c5ff74();
    uVar7 = uVar8;
    func_0x000107c611d4(uVar8,(uint)uVar5 & 0xff);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xe0);
    if ((int)uVar7 == 0) {
      func_0x000107c61430(uVar9,2);
    }
    else {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      puVar2 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar7 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar2 = 0x8200102;
      uStack_60 = uVar7;
      func_0x0001014bfa20(uVar10,uVar9,&uStack_60);
      *(undefined8 *)(puVar2 + 1) = uVar10;
      func_0x000107c61430(uVar9,2);
      func_0x000107c60ea4(0x100000000,uVar8,(uint)uVar5 & 0xff,"cache.rejected productId: %s",puVar2
                          ,0xc);
      FUN_103c7532c(uVar7);
      func_0x000107c61590(uVar7,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar2,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar8);
    (**(code **)(lVar11 + 8))(uVar1,lVar6);
    func_0x000107c615c0(uVar1);
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 4;
    uVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar5 != 0) {
      FUN_103c69a9c();
      func_0x000107c61658(unaff_x22 + 0x80,&UNK_1106f1e20,uVar5);
    }
    puVar4 = *(undefined8 **)(unaff_x22 + 0xd0);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_103c733c4:
                    /* WARNING: Could not recover jumptable at 0x000103c733e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (*(long *)(unaff_x22 + 0x50) != 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xe0));
    func_0x000107c6142c(uVar7);
    func_0x000103c72d5c(unaff_x22 + 0x38,uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_103c733c4;
  }
  lVar6 = *(long *)(unaff_x22 + 200);
  func_0x000107c61428(lVar6 + 0x80,unaff_x22 + 0xa0,0,0);
  lVar6 = *(long *)(lVar6 + 0x80);
  if (*(long *)(lVar6 + 0x10) != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar11 = *(long *)(unaff_x22 + 0xd8);
    uVar1 = *(ulong *)(unaff_x22 + 0xe0);
    func_0x000107c61438(lVar6,2);
    FUN_103c74ec4(lVar11,uVar1,uVar5,uVar7);
    if ((uVar1 & 1) != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar5 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar11 * 8);
      func_0x000107c6157c(uVar5);
      func_0x000107c6142c(lVar6);
      func_0x000107c6142c(uVar7);
      goto LAB_103c73410;
    }
    func_0x000107c61430(lVar6,2);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  FUN_103c73584();
  lVar6 = *(long *)(unaff_x22 + 0xe0);
LAB_103c73410:
  *(undefined8 *)(unaff_x22 + 0x108) = uVar5;
  uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c6142c(lVar6);
  func_0x000107c6142c(uVar7);
  plVar3 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103c734a4;
                    /* WARNING: Could not recover jumptable at 0x000103c73488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103c73a3c(plVar3,*(undefined8 *)(unaff_x22 + 0xb8),uVar5,unaff_x22 + 0x60);
  return;
}



/* Entry: 103c734a4; end: 103c7350b;  */

void FUN_103c734a4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x110));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 200);
    pcVar1 = (code *)0x103c73550;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 200);
    *(undefined8 *)(lVar3 + 0x120) = *(undefined8 *)(lVar3 + 0x68);
    *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(lVar3 + 0x60);
    *(undefined8 *)(lVar3 + 0x130) = *(undefined8 *)(lVar3 + 0x78);
    *(undefined8 *)(lVar3 + 0x128) = *(undefined8 *)(lVar3 + 0x70);
    pcVar1 = FUN_103c7350c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 103c7350c; end: 103c73583;  */

void FUN_103c7350c(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x120);
  *puVar1 = uVar2;
  puVar1[3] = uVar4;
  puVar1[2] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000103c7354c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c73584; end: 103c737af;  */

undefined8
FUN_103c73584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d453c8;
  uStack_88 = param_2;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar7,1,1,lVar1);
  puVar2 = &UNK_1106f1368;
  func_0x000107c613fc(&UNK_1106f1368,0x48,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  FUN_103c75660(lVar7,puVar6,0x112d453c8,&UNK_10d90ac60);
  puVar3 = &UNK_1106f1390;
  func_0x000107c613fc(&UNK_1106f1390,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10dc6b9d0;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  func_0x000107c61434(param_5);
  func_0x000107c61434(param_7);
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_3);
  uVar4 = 0;
  FUN_103c74b70(0,0,puVar6,&UNK_10dc6b9e0,puVar3);
  FUN_103c75540(lVar7,0x112d453c8,&UNK_10d90ac60);
  func_0x000107c61428(param_1 + 0x80,auStack_78,0x21,0);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x000107c6157c(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61558(uVar5);
  uStack_80 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0x8000000000000000;
  func_0x000103c72974(uVar4,uStack_88,param_3,param_4,param_5,uVar5);
  func_0x000107c6142c(param_5);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(param_1 + 0x80) = uStack_80;
  func_0x000107c614a8(auStack_78);
  return uVar4;
}



/* Entry: 103c737b0; end: 103c73867;  */

void FUN_103c737b0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = param_9;
  *(long *)(unaff_x22 + 0x70) = param_4;
  *(long *)(unaff_x22 + 0x78) = param_5;
  *(long *)(unaff_x22 + 0x60) = param_2;
  *(long *)(unaff_x22 + 0x68) = param_3;
  plVar1 = (long *)0x110;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c73868;
  plVar1[0x16] = param_2;
  plVar1[0x17] = unaff_x22 + 0x10;
  plVar1[0x14] = param_5;
  plVar1[0x15] = param_6;
  plVar1[0x12] = param_3;
  plVar1[0x13] = param_4;
  plVar1[0x10] = param_7;
  plVar1[0x11] = param_8;
  plVar1[0xf] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c73bd4,param_2,0);
  return;
}



/* Entry: 103c73868; end: 103c738cf;  */

void FUN_103c73868(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x90));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    pcVar1 = FUN_103c73994;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x60);
    *(undefined8 *)(lVar3 + 0xa0) = *(undefined8 *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x98) = *(undefined8 *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0xb0) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0xa8) = *(undefined8 *)(lVar3 + 0x20);
    pcVar1 = FUN_103c738d0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,0);
  return;
}



/* Entry: 103c738d0; end: 103c73993;  */

void FUN_103c738d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61428(*(long *)(unaff_x22 + 0x60) + 0x80,unaff_x22 + 0x30,0x21,0);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  FUN_103c71960(uVar5,uVar2,uVar4,uVar1);
  func_0x000107c614a8(unaff_x22 + 0x30);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar1);
  func_0x000107c61574(uVar5);
  puVar3[1] = uVar9;
  *puVar3 = uVar8;
  puVar3[3] = uVar7;
  puVar3[2] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000103c73990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c73994; end: 103c73a3b;  */

void FUN_103c73994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61428(*(long *)(unaff_x22 + 0x60) + 0x80,unaff_x22 + 0x48,0x21,0);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  FUN_103c71960(uVar4,uVar3,uVar1,uVar2);
  func_0x000107c614a8(unaff_x22 + 0x48);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103c73a38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c73a3c; end: 103c73aaf;  */

void FUN_103c73a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_1;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  plVar1 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  uVar2 = 0x112ffcfc8;
  func_0x0001000285a8(0x112ffcfc8,&UNK_10dc6b9b8);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c73ab0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)(unaff_x22 + 0x10,param_2,uVar2);
  return;
}



/* Entry: 103c73ab0; end: 103c73af7;  */

void FUN_103c73ab0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c73af8,0,0);
  return;
}



/* Entry: 103c73af8; end: 103c73bab;  */

void FUN_103c73af8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x61) = *(undefined8 *)(unaff_x22 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x59) = *(undefined8 *)(unaff_x22 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x20);
  if (*(char *)(unaff_x22 + 0x68) == '\x01') {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
    uVar5 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar5 != 0) {
      FUN_103c69a9c();
      func_0x000107c61658(unaff_x22 + 0x70,&UNK_1106f1e20,uVar5);
    }
    puVar6 = *(undefined8 **)(unaff_x22 + 0x98);
    *puVar6 = uVar1;
    puVar6[1] = uVar3;
    puVar6[2] = uVar2;
    puVar6[3] = uVar4;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    func_0x000103c72d5c(unaff_x22 + 0x40,*(undefined8 *)(unaff_x22 + 0x90));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c73ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c73bac; end: 103c73bd3;  */

void FUN_103c73bac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_5;
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c73bd4);
  return;
}



/* Entry: 103c73bd4; end: 103c73cb3;  */

void FUN_103c73bd4(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  int *piVar8;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar5 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar3);
  lVar6 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0xc0) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar4;
  piVar8 = *(int **)(lVar5 + 8);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c61434(uVar4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 200) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103c73cb4;
                    /* WARNING: Could not recover jumptable at 0x000103c73cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(lVar6,uVar3,lVar5);
  return;
}



/* Entry: 103c73cb4; end: 103c73d27;  */

void FUN_103c73cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xc0);
  *(undefined8 *)(lVar3 + 0xd0) = param_1;
  *(undefined8 *)(lVar3 + 0xd8) = param_2;
  *(undefined8 *)(lVar3 + 0xe0) = param_3;
  *(undefined8 *)(lVar3 + 0xe8) = param_4;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 200));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_103c73d28;
  }
  else {
    pcVar2 = FUN_103c741d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,*(undefined8 *)(lVar3 + 0xb0),0);
  return;
}



/* Entry: 103c73d28; end: 103c74087;  */

void FUN_103c73d28(void)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_60;
  
  lVar6 = *(long *)(unaff_x22 + 0xd0);
  FUN_103c7532c(unaff_x22 + 0x10);
  if (*(long *)(lVar6 + 0x10) == 0) {
    if (lRam0000000112ffcec0 != -1) {
      func_0x000107c61568(0x112ffcec0,FUN_103c72f28);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar6 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    lVar10 = *(long *)(lVar6 + -8);
    uVar1 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar1);
    (**(code **)(lVar10 + 0x10))();
    func_0x000107c61434();
    func_0x000107c5f160();
    uVar5 = uVar7;
    func_0x000107c5ff74();
    uVar3 = uVar7;
    func_0x000107c611d4(uVar7,(uint)uVar5 & 0xff);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    if ((int)uVar3 == 0) {
      func_0x000107c6142c(uVar8);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
      puVar2 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar3 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar2 = 0x8200102;
      uStack_60 = uVar3;
      func_0x0001014bfa20(uVar9,uVar8,&uStack_60);
      *(undefined8 *)(puVar2 + 1) = uVar9;
      func_0x000107c6142c(uVar8);
      func_0x000107c60ea4(0x100000000,uVar7,(uint)uVar5 & 0xff,
                          "product source returned empty products: %s",puVar2,0xc);
      FUN_103c7532c(uVar3);
      func_0x000107c61590(uVar3,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar2,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar7);
    (**(code **)(lVar10 + 8))(uVar1,lVar6);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    func_0x000107c615c0(uVar1);
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar5;
    pcVar4 = FUN_103c74108;
  }
  else {
    func_0x000103c72cf8(*(long *)(unaff_x22 + 0xd0) + 0x20,*(undefined8 *)(unaff_x22 + 0x78));
    if (lRam0000000112ffcec0 != -1) {
      func_0x000107c61568(0x112ffcec0,FUN_103c72f28);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar6 = 0;
    func_0x000107c5f168();
    func_0x000100028790();
    lVar10 = *(long *)(lVar6 + -8);
    uVar1 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar1);
    (**(code **)(lVar10 + 0x10))();
    func_0x000107c61434();
    func_0x000107c5f160();
    uVar5 = uVar7;
    func_0x000107c5ff70();
    uVar3 = uVar7;
    func_0x000107c611d4(uVar7,(uint)uVar5 & 0xff);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
    if ((int)uVar3 == 0) {
      func_0x000107c6142c(uVar8);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
      puVar2 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar3 = 0x20;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar2 = 0x8200102;
      uStack_60 = uVar3;
      func_0x0001014bfa20(uVar9,uVar8,&uStack_60);
      *(undefined8 *)(puVar2 + 1) = uVar9;
      func_0x000107c6142c(uVar8);
      func_0x000107c60ea4(0x100000000,uVar7,(uint)uVar5 & 0xff,"source.hit productId: %s",puVar2,0xc
                         );
      FUN_103c7532c(uVar3);
      func_0x000107c61590(uVar3,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar2,0xffffffffffffffff,0xffffffffffffffff);
    }
    func_0x000107c61170(uVar7);
    (**(code **)(lVar10 + 8))(uVar1,lVar6);
    lVar6 = *(long *)(unaff_x22 + 0xb0);
    func_0x000107c615c0(uVar1);
    uVar5 = *(undefined8 *)(lVar6 + 0x78);
    *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
    pcVar4 = FUN_103c74088;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,uVar5,0);
  return;
}



/* Entry: 103c74088; end: 103c740d3;  */

void FUN_103c74088(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000103c70874(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x90),
                      *(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0),
                      *(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c740d4,uVar1,0);
  return;
}



/* Entry: 103c740d4; end: 103c74107;  */

void FUN_103c740d4(void)

{
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x000103c74104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c74108; end: 103c7414f;  */

void FUN_103c74108(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000103c70bcc(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),
                      *(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c74150,uVar1,0);
  return;
}



/* Entry: 103c74150; end: 103c741d3;  */

void FUN_103c74150(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = 0;
  *(undefined8 *)(unaff_x22 + 0x60) = 0;
  *(undefined8 *)(unaff_x22 + 0x68) = 0;
  *(undefined8 *)(unaff_x22 + 0x70) = 4;
  uVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar1 != 0) {
    FUN_103c69a9c();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x58),&UNK_1106f1e20,uVar1);
  }
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xd0));
  puVar2 = *(undefined8 **)(unaff_x22 + 0xb8);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 4;
                    /* WARNING: Could not recover jumptable at 0x000103c741d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c741d4; end: 103c7451f;  */

void FUN_103c741d4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_60;
  
  lVar9 = *(long *)(unaff_x22 + 0xe8);
  FUN_103c7532c(unaff_x22 + 0x10);
  if (lVar9 == 4) {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x22 + 0xb0) + 0x78);
    *(undefined8 *)(unaff_x22 + 0x100) = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_103c74520,uVar7,0);
    return;
  }
  if (lRam0000000112ffcec0 != -1) {
    func_0x000107c61568(0x112ffcec0,FUN_103c72f28);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar9 = 0;
  func_0x000107c5f168();
  func_0x000100028790();
  lVar11 = *(long *)(lVar9 + -8);
  uVar1 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar1);
  (**(code **)(lVar11 + 0x10))();
  func_0x000107c61434(uVar10);
  FUN_103c7537c(uVar13,uVar15,uVar7,uVar14);
  func_0x000107c5f160();
  uVar2 = uVar13;
  func_0x000107c5ff74();
  uVar5 = uVar13;
  func_0x000107c611d4(uVar13,(uint)uVar2 & 0xff);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
  if ((int)uVar5 == 0) {
    func_0x000107c6142c(uVar12);
    func_0x000103c75394(uVar14,uVar10,uVar7,uVar15);
  }
  else {
    puVar8 = *(undefined8 **)(unaff_x22 + 0x80);
    puVar3 = (undefined4 *)0x16;
    func_0x000107c6158c(0x16,0xffffffffffffffff);
    puVar4 = (undefined8 *)0x8;
    func_0x000107c6158c(8,0xffffffffffffffff);
    uVar5 = 0x20;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar3 = 0x8200202;
    uStack_60 = uVar5;
    func_0x0001014bfa20(puVar8,uVar12,&uStack_60);
    *(undefined8 **)(puVar3 + 1) = puVar8;
    *(undefined2 *)(puVar3 + 3) = 0x840;
    FUN_103c69a9c();
    puVar6 = &UNK_1106f1e20;
    func_0x000107c613f8(&UNK_1106f1e20,puVar8,0,0);
    *puVar8 = uVar14;
    puVar8[1] = uVar10;
    puVar8[2] = uVar7;
    puVar8[3] = uVar15;
    FUN_103c7537c(uVar14,uVar10,uVar7,uVar15);
    func_0x000107c60eac();
    *(undefined **)((long)puVar3 + 0xe) = puVar6;
    *puVar4 = puVar6;
    func_0x000103c75394(uVar14,uVar10,uVar7,uVar15);
    func_0x000107c6142c(uVar12);
    func_0x000107c60ea4(0x100000000,uVar13,(uint)uVar2 & 0xff,
                        "product source error for productId: %s error: %@",puVar3,0x16);
    FUN_103c75540(puVar4,0x112da8fc0,&UNK_10dc6b9b0);
    func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    FUN_103c7532c(uVar5);
    func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar3,0xffffffffffffffff,0xffffffffffffffff);
  }
  func_0x000107c61170(uVar13);
  (**(code **)(lVar11 + 8))(uVar1,lVar9);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(uVar1);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  uVar7 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar7 != 0) {
    FUN_103c69a9c();
    func_0x000107c61658(unaff_x22 + 0x38,&UNK_1106f1e20,uVar7);
  }
  puVar4 = *(undefined8 **)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar4[1] = *(undefined8 *)(unaff_x22 + 0xd8);
  *puVar4 = uVar7;
  puVar4[3] = uVar14;
  puVar4[2] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x000103c74504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c74520; end: 103c74567;  */

void FUN_103c74520(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000103c70bcc(*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),
                      *(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c74568,uVar1,0);
  return;
}



/* Entry: 103c74568; end: 103c74867;  */

void FUN_103c74568(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_60;
  
  if (lRam0000000112ffcec0 != -1) {
    func_0x000107c61568(0x112ffcec0,FUN_103c72f28);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = 0;
  func_0x000107c5f168();
  func_0x000100028790();
  lVar11 = *(long *)(lVar1 + -8);
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar2);
  (**(code **)(lVar11 + 0x10))();
  func_0x000107c61434(uVar10);
  FUN_103c7537c(uVar13,uVar15,uVar8,uVar14);
  func_0x000107c5f160();
  uVar3 = uVar13;
  func_0x000107c5ff74();
  uVar6 = uVar13;
  func_0x000107c611d4(uVar13,(uint)uVar3 & 0xff);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x88);
  if ((int)uVar6 == 0) {
    func_0x000107c6142c(uVar12);
    func_0x000103c75394(uVar14,uVar10,uVar8,uVar15);
  }
  else {
    puVar9 = *(undefined8 **)(unaff_x22 + 0x80);
    puVar4 = (undefined4 *)0x16;
    func_0x000107c6158c(0x16,0xffffffffffffffff);
    puVar5 = (undefined8 *)0x8;
    func_0x000107c6158c(8,0xffffffffffffffff);
    uVar6 = 0x20;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar4 = 0x8200202;
    uStack_60 = uVar6;
    func_0x0001014bfa20(puVar9,uVar12,&uStack_60);
    *(undefined8 **)(puVar4 + 1) = puVar9;
    *(undefined2 *)(puVar4 + 3) = 0x840;
    FUN_103c69a9c();
    puVar7 = &UNK_1106f1e20;
    func_0x000107c613f8(&UNK_1106f1e20,puVar9,0,0);
    *puVar9 = uVar14;
    puVar9[1] = uVar10;
    puVar9[2] = uVar8;
    puVar9[3] = uVar15;
    FUN_103c7537c(uVar14,uVar10,uVar8,uVar15);
    func_0x000107c60eac();
    *(undefined **)((long)puVar4 + 0xe) = puVar7;
    *puVar5 = puVar7;
    func_0x000103c75394(uVar14,uVar10,uVar8,uVar15);
    func_0x000107c6142c(uVar12);
    func_0x000107c60ea4(0x100000000,uVar13,(uint)uVar3 & 0xff,
                        "product source error for productId: %s error: %@",puVar4,0x16);
    FUN_103c75540(puVar5,0x112da8fc0,&UNK_10dc6b9b0);
    func_0x000107c61590(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    FUN_103c7532c(uVar6);
    func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
  }
  func_0x000107c61170(uVar13);
  (**(code **)(lVar11 + 8))(uVar2,lVar1);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  func_0x000107c615c0(uVar2);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  uVar8 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar8 != 0) {
    FUN_103c69a9c();
    func_0x000107c61658(unaff_x22 + 0x38,&UNK_1106f1e20,uVar8);
  }
  puVar5 = *(undefined8 **)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar5[1] = *(undefined8 *)(unaff_x22 + 0xd8);
  *puVar5 = uVar8;
  puVar5[3] = uVar14;
  puVar5[2] = uVar13;
                    /* WARNING: Could not recover jumptable at 0x000103c7484c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c74868; end: 103c7489b;  */

void FUN_103c74868(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61470();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 103c7489c; end: 103c748a7;  */

void FUN_103c7489c(void)

{
  return;
}



/* Entry: 103c748a8; end: 103c74913;  */

void FUN_103c748a8(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c74914;
  plVar1[0x19] = lVar2;
  plVar1[0x1a] = unaff_x22 + 0x10;
  plVar1[0x17] = param_1;
  plVar1[0x18] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c72fc4,lVar2,0);
  return;
}



/* Entry: 103c74914; end: 103c7496b;  */

void FUN_103c74914(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    puVar1 = *(undefined8 **)(lVar2 + 0x30);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000103c74968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c7496c; end: 103c749d7;  */

void FUN_103c7496c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c749d8;
                    /* WARNING: Could not recover jumptable at 0x000103c749d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1,unaff_x22 + 0x10);
  return;
}



/* Entry: 103c749d8; end: 103c74a2f;  */

void FUN_103c749d8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c74a30;
  }
  else {
    pcVar1 = FUN_103c74a40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c74a30; end: 103c74a3f;  */

void FUN_103c74a30(void)

{
  long unaff_x22;
  
  *(undefined1 *)(*(long *)(unaff_x22 + 0x78) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x000103c74a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c74a40; end: 103c74b6f;  */

void FUN_103c74a40(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar3 = (undefined8 *)(unaff_x22 + 0x30);
  *puVar3 = uVar5;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  FUN_103c69a9c();
  func_0x000107c605a0(puVar3,&UNK_1106f1e20,param_1);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)&UNK_1106f1e20;
    func_0x000107c613f8(&UNK_1106f1e20,param_1,0,0);
    *param_1 = uVar5;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar6;
  }
  else {
    func_0x000103c75394(uVar5,uVar7,uVar8,uVar6);
  }
  *(undefined8 **)(unaff_x22 + 0x70) = puVar3;
  func_0x000107c614b0(puVar3);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  lVar2 = unaff_x22 + 0x50;
  func_0x000107c6147c(lVar2,unaff_x22 + 0x70,uVar7,&UNK_1106f1e20,0);
  if ((int)lVar2 != 0) {
    puVar4 = *(undefined8 **)(unaff_x22 + 0x78);
    func_0x000107c614ac(puVar3);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar4[1] = *(undefined8 *)(unaff_x22 + 0x58);
    *puVar4 = uVar7;
    puVar4[3] = uVar5;
    puVar4[2] = uVar8;
    *(undefined1 *)(puVar4 + 5) = 1;
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000103c74b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103c74b70);
  (*pcVar1)();
}



/* Entry: 103c74b70; end: 103c74e1f;  */

void FUN_103c74b70(long param_1,long param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_c0 + -extraout_x8;
  FUN_103c75660(param_3,puVar6,0x112d453c8,&UNK_10d90ac60);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar9 = *(long *)(lVar1 + -8);
  puVar2 = puVar6;
  (**(code **)(lVar9 + 0x30))(puVar6,1,lVar1);
  uVar8 = param_5;
  func_0x000107c6157c(param_5);
  if ((int)puVar2 == 1) {
    FUN_103c75540(puVar6,0x112d453c8,&UNK_10d90ac60);
    uVar8 = 0x1c00;
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar9 + 8))(puVar6,lVar1);
    uVar8 = uVar8 & 0xff | 0x1c00;
  }
  lVar1 = *(long *)(param_5 + 0x10);
  lVar9 = *(long *)(param_5 + 0x18);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(param_5);
  if (lVar1 == 0) {
    lVar7 = 0;
    lVar9 = 0;
  }
  else {
    lVar7 = lVar1;
    func_0x000107c614f0();
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    FUN_103c75540(param_3,0x112d453c8,&UNK_10d90ac60);
    puVar3 = &UNK_1106f13b8;
    func_0x000107c613fc(&UNK_1106f13b8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    uVar4 = 0x112ffcfc8;
    func_0x0001000285a8(0x112ffcfc8,&UNK_10dc6b9b8);
    if (lVar9 == 0 && lVar7 == 0) {
      puVar5 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar5 = &uStack_80;
      lStack_70 = lVar7;
      lStack_68 = lVar9;
    }
    func_0x000107c615bc(uVar8,puVar5,uVar4,&UNK_10dc6b9f0,puVar3);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    puVar3 = &UNK_1106f13e0;
    func_0x000107c613fc(&UNK_1106f13e0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(ulong *)(puVar3 + 0x18) = param_5;
    func_0x000107c6157c(param_5);
    uVar4 = 0x112ffcfc8;
    func_0x0001000285a8(0x112ffcfc8,&UNK_10dc6b9b8);
    puStack_b0 = (undefined8 *)0x0;
    if (lVar9 != 0 || lVar7 != 0) {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar7;
      lStack_88 = lVar9;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    func_0x000107c615bc(uVar8,&uStack_b8,uVar4,&UNK_10dc6b9f8,puVar3);
    func_0x000107c61574(param_5);
    func_0x000107c61574(param_1);
    FUN_103c75540(param_3,0x112d453c8,&UNK_10d90ac60);
  }
  return;
}



/* Entry: 103c74e20; end: 103c74e83;  */

void FUN_103c74e20(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103c74e84;
                    /* WARNING: Could not recover jumptable at 0x000103c74e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 103c74e84; end: 103c74ec3;  */

void FUN_103c74e84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c74ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c74ec4; end: 103c74f6b;  */

undefined1  [16] FUN_103c74ec4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [40];
  
  func_0x000107c6068c(auStack_88,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_88,param_1,param_2);
  if (param_4 == 0) {
    puVar3 = (undefined1 *)0x0;
    func_0x000107c60694();
  }
  else {
    func_0x000107c60694(1);
    puVar3 = auStack_88;
    func_0x000107c5fb58(puVar3,param_3,param_4);
  }
  func_0x000107c606a8();
  uVar7 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar8 = (ulong)puVar3 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    lVar9 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar9 + uVar8 * 0x20);
      uVar4 = *puVar1;
      uVar5 = puVar1[2];
      uVar2 = puVar1[3];
      if ((uVar4 == param_1 && puVar1[1] == param_2) ||
         (func_0x000107c605b8(uVar4,puVar1[1],param_1,param_2,0), (uVar4 & 1) != 0)) {
        if (uVar2 == 0) {
          if (param_4 == 0) goto LAB_103c75040;
        }
        else if ((param_4 != 0) &&
                ((uVar5 == param_3 && uVar2 == param_4 ||
                 (func_0x000107c605b8(uVar5,uVar2,param_3,param_4,0), (uVar5 & 1) != 0)))) {
LAB_103c75040:
          uVar6 = 1;
          goto LAB_103c7504c;
        }
      }
      uVar8 = uVar8 + 1 & ~uVar7;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = 0;
LAB_103c7504c:
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Entry: 103c74f6c; end: 103c7532b;  */

undefined1  [16]
FUN_103c74f6c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 auVar8 [16];
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_5 = param_5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar1 = (ulong *)(lVar7 + param_5 * 0x20);
      uVar3 = *puVar1;
      uVar4 = puVar1[2];
      uVar2 = puVar1[3];
      if ((uVar3 == param_1 && puVar1[1] == param_2) ||
         (func_0x000107c605b8(uVar3,puVar1[1],param_1,param_2,0), (uVar3 & 1) != 0)) {
        if (uVar2 == 0) {
          if (param_4 == 0) goto LAB_103c75040;
        }
        else if ((param_4 != 0) &&
                ((uVar4 == param_3 && uVar2 == param_4 ||
                 (func_0x000107c605b8(uVar4,uVar2,param_3,param_4,0), (uVar4 & 1) != 0)))) {
LAB_103c75040:
          uVar5 = 1;
          goto LAB_103c7504c;
        }
      }
      param_5 = param_5 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_103c7504c:
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = param_5;
  return auVar8;
}



/* Entry: 103c7532c; end: 103c7535b;  */

void FUN_103c7532c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103c75340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103c7535c; end: 103c7537b;  */

void FUN_103c7535c(void)

{
  func_0x000107c61168(&PTR_PTR_112ffcf20);
  return;
}



/* Entry: 103c7537c; end: 103c753ab;  */

void FUN_103c7537c(void)

{
  long in_x3;
  
  if (in_x3 - 1U < 0xe) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(in_x3);
  return;
}



/* Entry: 103c753ac; end: 103c7544f;  */

void FUN_103c753ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar9 = *(long *)(unaff_x20 + 0x40);
  plVar8 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103c75450;
  plVar8[0x10] = lVar3;
  plVar8[0x11] = param_2;
  plVar8[0xe] = lVar2;
  plVar8[0xf] = lVar5;
  plVar8[0xc] = lVar1;
  plVar8[0xd] = lVar4;
  plVar7 = (long *)0x110;
  func_0x000107c615b8();
  plVar8[0x12] = (long)plVar7;
  *plVar7 = (long)plVar8;
  plVar7[1] = (long)FUN_103c73868;
  plVar7[0x16] = lVar1;
  plVar7[0x17] = (long)(plVar8 + 2);
  plVar7[0x14] = lVar5;
  plVar7[0x15] = lVar3;
  plVar7[0x12] = lVar4;
  plVar7[0x13] = lVar2;
  plVar7[0x10] = lVar6;
  plVar7[0x11] = lVar9;
  plVar7[0xf] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c73bd4,lVar1,0);
  return;
}



/* Entry: 103c75450; end: 103c7548b;  */

void FUN_103c75450(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c75488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c7548c; end: 103c75503;  */

void FUN_103c7548c(long param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103c75504;
  plVar6[0xf] = param_1;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[0x10] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_103c749d8;
                    /* WARNING: Could not recover jumptable at 0x000103c749d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar5,param_1,plVar6 + 2);
  return;
}



/* Entry: 103c75504; end: 103c7553f;  */

void FUN_103c75504(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c7553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c75540; end: 103c7557f;  */

undefined8 FUN_103c75540(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103c75580; end: 103c755ef;  */

void FUN_103c75580(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c756a8;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_103c74e84;
                    /* WARNING: Could not recover jumptable at 0x000103c74e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 103c755f0; end: 103c7565f;  */

void FUN_103c755f0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103c756ac;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_103c74e84;
                    /* WARNING: Could not recover jumptable at 0x000103c74e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 103c75660; end: 103c756a7;  */

undefined8 FUN_103c75660(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103c756a8; end: 103c756af;  */

void FUN_103c756a8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c75488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103c756b0; end: 103c7572f;  */

void FUN_103c756b0(void)

{
  func_0x0001000285a8(0x112ffcfd8,&UNK_10dc6ba10);
  func_0x0001000823a8(0x103c756f0,0);
  return;
}



/* Entry: 103c75730; end: 103c7573f;  */

void FUN_103c75730(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 103c75740; end: 103c75867;  */

void FUN_103c75740(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c76018;
                    /* WARNING: Could not recover jumptable at 0x000103c7579c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103c75ccc(param_1);
  return;
}



/* Entry: 103c75868; end: 103c7590f;  */

void FUN_103c75868(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = 0;
  func_0x000107c5f8a4();
  lVar5 = *(long *)(lVar1 + -8);
  uVar2 = 1;
  uVar4 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar4 == 1) {
    func_0x00010375f13c(uVar3);
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5f894();
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c7590c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar2);
  return;
}



/* Entry: 103c75910; end: 103c7591f;  */

void FUN_103c75910(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103c75920; end: 103c7597f;  */

void FUN_103c75920(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c75980;
                    /* WARNING: Could not recover jumptable at 0x000103c7597c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103c75ccc(param_1);
  return;
}



/* Entry: 103c75980; end: 103c759fb;  */

void FUN_103c75980(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c759f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103c759fc; end: 103c75ac3;  */

void FUN_103c759fc(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  lVar1 = 0x112dbf6f8;
  func_0x0001000285a8(0x112dbf6f8,&UNK_10d97ae20);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x10) = uVar2;
  plVar3 = (long *)(ulong)*(uint *)(PTR___s8StoreKit10StorefrontV7currentACSgvgZTu_110347b40 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103c75a7c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit10StorefrontV7currentACSgvgZ_110347b38)(plVar3,uVar2);
  return;
}



/* Entry: 103c75ac4; end: 103c75b6b;  */

void FUN_103c75ac4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  lVar1 = 0;
  func_0x000107c5f8a4();
  lVar5 = *(long *)(lVar1 + -8);
  uVar2 = 1;
  uVar4 = uVar3;
  (**(code **)(lVar5 + 0x30))(uVar3,1,lVar1);
  if ((int)uVar4 == 1) {
    func_0x00010375f13c(uVar3);
    uVar4 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5f894();
    (**(code **)(lVar5 + 8))(uVar3,lVar1);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c75b68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4,uVar2);
  return;
}



/* Entry: 103c75b6c; end: 103c75b87;  */

void FUN_103c75b6c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_103c75b88();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 103c75b88; end: 103c75ccb;  */

undefined * FUN_103c75b88(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103c75ccc);
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
    puVar3 = (undefined *)0x112ffd078;
    func_0x0001000285a8(0x112ffd078,&UNK_10dc6bac8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ffd080;
    func_0x0001000285a8(0x112ffd080,&UNK_10dc6bad0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 103c75ccc; end: 103c75d4f;  */

void FUN_103c75ccc(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZTu_110347dd0
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar3 = uVar2;
  func_0x000100c94510();
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_103c75d50;
                    /* WARNING: Could not recover jumptable at 0x00010bdb72c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit7ProductV8products3forSayACGx_tYaKSlRzSS7ElementRtzlFZ_110347dc8)
            ((undefined8 *)(unaff_x22 + 0x58),uVar2,uVar3);
  return;
}



/* Entry: 103c75d50; end: 103c75daf;  */

void FUN_103c75d50(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c75db0;
  }
  else {
    pcVar1 = FUN_103c75f40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c75db0; end: 103c75f3f;  */

void FUN_103c75db0(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0x68) + 0x10);
  if (lVar9 == 0) {
    func_0x000107c6142c(*(long *)(unaff_x22 + 0x68));
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    FUN_103c75b6c(0,lVar9,0);
    lVar2 = 0;
    func_0x000107c5f970();
    lVar7 = 0;
    lVar8 = *(long *)(lVar2 + -8);
    lVar4 = *(long *)(lVar8 + 0x40);
    do {
      uVar3 = lVar4 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar3);
      pcVar5 = *(code **)(lVar8 + 0x10);
      (*pcVar5)();
      uVar1 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        FUN_103c75b6c(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
      }
      lVar7 = lVar7 + 1;
      *(long *)(unaff_x22 + 0x28) = lVar2;
      *(undefined ***)(unaff_x22 + 0x30) = &PTR_DAT_1106f19a0;
      func_0x0001000c5db4(unaff_x22 + 0x10);
      (*pcVar5)();
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      func_0x000103c72d5c(unaff_x22 + 0x10,puVar6 + uVar1 * 0x28 + 0x20);
      (**(code **)(lVar8 + 8))(uVar3,lVar2);
      func_0x000107c615c0(uVar3);
    } while (lVar9 != lVar7);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x68));
  }
                    /* WARNING: Could not recover jumptable at 0x000103c75f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6);
  return;
}



/* Entry: 103c75f40; end: 103c75fe7;  */

void FUN_103c75f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000103c6b700();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  uVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if ((int)uVar2 != 0) {
    FUN_103c69a9c();
    func_0x000107c61658((undefined8 *)(unaff_x22 + 0x38),&UNK_1106f1e20,uVar2);
  }
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000103c75fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,param_2,param_3,param_4);
  return;
}



/* Entry: 103c75fe8; end: 103c75ff7;  */

undefined1  [16] FUN_103c75fe8(void)

{
  return ZEXT816(0x1106f1438);
}



/* Entry: 103c75ff8; end: 103c76017;  */

void FUN_103c75ff8(void)

{
  func_0x000107c61168(&PTR_PTR_112ffd020);
  return;
}



/* Entry: 103c76018; end: 103c7601b;  */

void FUN_103c76018(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c759f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 103c7601c; end: 103c76143;  */

void FUN_103c7601c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ffcb88,&UNK_10dc6b580);
  puVar1 = &UNK_1106f1460;
  func_0x000107c613fc(&UNK_1106f1460,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103c76144,puVar1);
  return;
}



/* Entry: 103c76144; end: 103c7614f;  */

/* WARNING: Possible PIC construction at 0x000103c76118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c76128: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c7611c) */
/* WARNING: Removing unreachable block (ram,0x000103c7612c) */

void FUN_103c76144(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = lVar1;
  FUN_103c77df8();
  lVar6 = lVar5;
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x20) = uVar2;
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
  *(long *)(lVar6 + 0x10) = lVar1;
  *(undefined8 *)(lVar6 + 0x18) = uVar4;
  param_1[3] = lVar5;
  param_1[4] = (long)&PTR_DAT_1106f1478;
  *param_1 = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 103c76150; end: 103c7619f;  */

void FUN_103c76150(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  return;
}



/* Entry: 103c761a0; end: 103c7621f;  */

void FUN_103c761a0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5f168(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x112ffd090);
  func_0x000107c5f164(uVar1,0xd000000000000020,0x800000010f1b2200,0x7275507070416e49,
                      0xed00006573616863);
  return;
}



/* Entry: 103c76220; end: 103c763db;  */

void FUN_103c76220(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 400) = param_1;
  *(undefined8 *)(unaff_x22 + 0x198) = unaff_x20;
  lVar2 = 0x112ffcc20;
  func_0x0001000285a8(0x112ffcc20,&UNK_10dc6b6c0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar1;
  lVar2 = 0;
  FUN_103c7a4b8();
  *(long *)(unaff_x22 + 0x1a8) = lVar2;
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar1;
  lVar2 = 0;
  FUN_103c7b79c();
  *(long *)(unaff_x22 + 0x1b8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x200) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x208) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x210) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x218) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x220) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x228) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x230) = uVar1;
  lVar2 = 0;
  func_0x000107c5f168();
  *(long *)(unaff_x22 + 0x238) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x240) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x248) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x250) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 600) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x260) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x268) = uVar3;
  uVar3 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x270) = uVar3;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x278) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c763dc,0,0);
  return;
}



/* Entry: 103c763dc; end: 103c7663f;  */

void FUN_103c763dc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  
  if (lRam0000000112ffd088 != -1) {
    func_0x000107c61568(0x112ffd088,FUN_103c761a0);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x278);
  lVar14 = *(long *)(unaff_x22 + 0x240);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar13 = *(undefined8 *)(unaff_x22 + 400);
  uVar2 = uVar9;
  func_0x000100028790(uVar9,0x112ffd090);
  *(undefined8 *)(unaff_x22 + 0x280) = uVar2;
  pcVar7 = *(code **)(lVar14 + 0x10);
  *(code **)(unaff_x22 + 0x288) = pcVar7;
  (*pcVar7)(uVar10,uVar2,uVar9);
  FUN_103c6ed1c(uVar13,uVar11);
  FUN_103c6ed1c(uVar11,uVar12);
  FUN_103c77b98(uVar11,FUN_103c7b79c);
  func_0x000107c5f160();
  uVar2 = uVar11;
  func_0x000107c5ff70();
  uVar9 = uVar11;
  func_0x000107c611d4(uVar11,(uint)uVar2 & 0xff);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x278);
  lVar14 = *(long *)(unaff_x22 + 0x240);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x228);
  if ((int)uVar9 == 0) {
    func_0x000107c61170(uVar11);
    FUN_103c77b98(uVar10,FUN_103c7b79c);
    pcVar7 = *(code **)(lVar14 + 8);
  }
  else {
    puVar3 = (undefined4 *)0xc;
    func_0x000107c6158c(0xc,0xffffffffffffffff);
    uVar4 = 0x20;
    uVar6 = 0xffffffffffffffff;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar3 = 0x8200102;
    uVar9 = uVar4;
    FUN_103c7b7d4();
    func_0x0001014bfa20();
    func_0x000107c6142c(uVar6);
    *(undefined8 *)(puVar3 + 1) = uVar9;
    FUN_103c77b98(uVar10,FUN_103c7b79c);
    func_0x000107c60ea4(0x100000000,uVar11,(uint)uVar2 & 0xff,"Fetching product for: %s",puVar3,0xc)
    ;
    func_0x000103c77dc8(uVar4);
    func_0x000107c61590(uVar4,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar3,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(uVar11);
    pcVar7 = *(code **)(lVar14 + 8);
  }
  (*pcVar7)(uVar13,uVar12);
  *(code **)(unaff_x22 + 0x290) = pcVar7;
  func_0x000100083b20(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar14 = *(long *)(unaff_x22 + 200);
  func_0x0001000a8868(unaff_x22 + 0xa8,uVar2);
  piVar8 = *(int **)(lVar14 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x298) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c76640;
                    /* WARNING: Could not recover jumptable at 0x000103c76624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (plVar5,unaff_x22 + 0x80,*(undefined8 *)(unaff_x22 + 400),unaff_x22 + 0x170,uVar2,lVar14
            );
  return;
}



/* Entry: 103c76640; end: 103c7669f;  */

void FUN_103c76640(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x298));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c7684c;
  }
  else {
    *(undefined8 *)(lVar2 + 0x2a8) = *(undefined8 *)(lVar2 + 0x178);
    *(undefined8 *)(lVar2 + 0x2a0) = *(undefined8 *)(lVar2 + 0x170);
    *(undefined8 *)(lVar2 + 0x2b8) = *(undefined8 *)(lVar2 + 0x188);
    *(undefined8 *)(lVar2 + 0x2b0) = *(undefined8 *)(lVar2 + 0x180);
    pcVar1 = FUN_103c766a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c766a0; end: 103c7684b;  */

void FUN_103c766a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  func_0x000103c77dc8(unaff_x22 + 0xa8);
  lVar9 = *(long *)(unaff_x22 + 0x2b8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2a0);
  if (lVar9 == 0xb) {
    uVar17 = 0;
    uVar16 = 0;
    uVar13 = 0;
    lVar9 = 0x10;
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar19 = *(undefined8 *)(unaff_x22 + 600);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x278));
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar25);
  func_0x000107c615c0(uVar26);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar20);
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000103c76848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar17,uVar16,uVar13,lVar9);
  return;
}



/* Entry: 103c7684c; end: 103c76a7b;  */

void FUN_103c7684c(void)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  
  pcVar14 = *(code **)(unaff_x22 + 0x288);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar13 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000103c77dc8(unaff_x22 + 0xa8);
  (*pcVar14)(uVar8,uVar9,uVar10);
  FUN_103c6ed1c(uVar13,uVar11);
  FUN_103c6ed1c(uVar11,uVar12);
  FUN_103c77b98(uVar11,FUN_103c7b79c);
  func_0x000107c5f160();
  uVar8 = uVar11;
  func_0x000107c5ff70();
  uVar9 = uVar11;
  func_0x000107c611d4(uVar11,(uint)uVar8 & 0xff);
  pcVar14 = *(code **)(unaff_x22 + 0x290);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x218);
  if ((int)uVar9 == 0) {
    func_0x000107c61170(uVar11);
    FUN_103c77b98(uVar10,FUN_103c7b79c);
    (*pcVar14)(uVar12,uVar13);
  }
  else {
    puVar3 = (undefined4 *)0xc;
    func_0x000107c6158c(0xc,0xffffffffffffffff);
    uVar4 = 0x20;
    uVar6 = 0xffffffffffffffff;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar3 = 0x8200102;
    uVar9 = uVar4;
    FUN_103c7b7d4();
    func_0x0001014bfa20();
    func_0x000107c6142c(uVar6);
    *(undefined8 *)(puVar3 + 1) = uVar9;
    FUN_103c77b98(uVar10,FUN_103c7b79c);
    func_0x000107c60ea4(0x100000000,uVar11,(uint)uVar8 & 0xff,"Preparing purchase for: %s",puVar3,
                        0xc);
    func_0x000103c77dc8(uVar4);
    func_0x000107c61590(uVar4,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar3,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(uVar11);
    (*pcVar14)(uVar12,uVar13);
  }
  func_0x000100083b20(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar2 = *(long *)(unaff_x22 + 0xf0);
  func_0x0001000a8868(unaff_x22 + 0xd0,uVar8);
  piVar7 = *(int **)(lVar2 + 8);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2c0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103c76a7c;
                    /* WARNING: Could not recover jumptable at 0x000103c76a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 400),
             unaff_x22 + 0x170,uVar8,lVar2);
  return;
}



/* Entry: 103c76a7c; end: 103c76adf;  */

void FUN_103c76a7c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2c0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c76c94;
  }
  else {
    *(undefined8 *)(lVar2 + 0x2d0) = *(undefined8 *)(lVar2 + 0x178);
    *(undefined8 *)(lVar2 + 0x2c8) = *(undefined8 *)(lVar2 + 0x170);
    *(undefined8 *)(lVar2 + 0x2e0) = *(undefined8 *)(lVar2 + 0x188);
    *(undefined8 *)(lVar2 + 0x2d8) = *(undefined8 *)(lVar2 + 0x180);
    pcVar1 = FUN_103c76ae0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c76ae0; end: 103c76c93;  */

void FUN_103c76ae0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  func_0x000103c77dc8(unaff_x22 + 0x80);
  func_0x000103c77dc8(unaff_x22 + 0xd0);
  lVar9 = *(long *)(unaff_x22 + 0x2e0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2c8);
  if (lVar9 == 0xb) {
    uVar17 = 0;
    uVar16 = 0;
    uVar13 = 0;
    lVar9 = 0x10;
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar19 = *(undefined8 *)(unaff_x22 + 600);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x278));
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar25);
  func_0x000107c615c0(uVar26);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar20);
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000103c76c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar17,uVar16,uVar13,lVar9);
  return;
}



/* Entry: 103c76c94; end: 103c76eef;  */

void FUN_103c76c94(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  int *piVar13;
  code *pcVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  pcVar14 = *(code **)(unaff_x22 + 0x288);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x208);
  lVar3 = *(long *)(unaff_x22 + 0x1a8);
  lVar5 = *(long *)(unaff_x22 + 0x1b0);
  uVar20 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000103c77dc8(unaff_x22 + 0xd0);
  puVar1 = (undefined8 *)(lVar5 + *(int *)(lVar3 + 0x18));
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  (*pcVar14)(uVar16,uVar15,uVar17);
  FUN_103c6ed1c(uVar20,uVar18);
  FUN_103c6ed1c(uVar18,uVar19);
  FUN_103c77b98(uVar18,FUN_103c7b79c);
  func_0x000107c5f160();
  uVar15 = uVar18;
  func_0x000107c5ff70();
  uVar16 = uVar18;
  func_0x000107c611d4(uVar18,(uint)uVar15 & 0xff);
  pcVar14 = *(code **)(unaff_x22 + 0x290);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
  if ((int)uVar16 == 0) {
    func_0x000107c61170(uVar18);
    FUN_103c77b98(uVar17,FUN_103c7b79c);
    (*pcVar14)(uVar19,uVar20);
  }
  else {
    puVar9 = (undefined4 *)0xc;
    func_0x000107c6158c(0xc,0xffffffffffffffff);
    uVar10 = 0x20;
    uVar12 = 0xffffffffffffffff;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar9 = 0x8200102;
    uVar16 = uVar10;
    FUN_103c7b7d4();
    func_0x0001014bfa20();
    func_0x000107c6142c(uVar12);
    *(undefined8 *)(puVar9 + 1) = uVar16;
    FUN_103c77b98(uVar17,FUN_103c7b79c);
    func_0x000107c60ea4(0x100000000,uVar18,(uint)uVar15 & 0xff,"Executing purchase for: %s",puVar9,
                        0xc);
    func_0x000103c77dc8(uVar10);
    func_0x000107c61590(uVar10,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar9,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(uVar18);
    (*pcVar14)(uVar19,uVar20);
  }
  lVar3 = *(long *)(unaff_x22 + 0x1a8);
  lVar5 = *(long *)(unaff_x22 + 0x1b0);
  func_0x000100083b20(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar7 = *(long *)(unaff_x22 + 0x118);
  func_0x0001000a8868(unaff_x22 + 0xf8,uVar15);
  iVar8 = *(int *)(lVar3 + 0x14);
  piVar13 = *(int **)(lVar7 + 8);
  iVar2 = *piVar13;
  plVar11 = (long *)(ulong)(uint)piVar13[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x2e8) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_103c76ef0;
                    /* WARNING: Could not recover jumptable at 0x000103c76eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar13))
            (unaff_x22 + 0x10,unaff_x22 + 0x80,lVar5 + iVar8,uVar4,uVar6,unaff_x22 + 0x170,uVar15,
             lVar7);
  return;
}



/* Entry: 103c76ef0; end: 103c76f4f;  */

void FUN_103c76ef0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x2e8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_103c77118;
  }
  else {
    *(undefined8 *)(lVar2 + 0x2f8) = *(undefined8 *)(lVar2 + 0x178);
    *(undefined8 *)(lVar2 + 0x2f0) = *(undefined8 *)(lVar2 + 0x170);
    *(undefined8 *)(lVar2 + 0x308) = *(undefined8 *)(lVar2 + 0x188);
    *(undefined8 *)(lVar2 + 0x300) = *(undefined8 *)(lVar2 + 0x180);
    pcVar1 = FUN_103c76f50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103c76f50; end: 103c77117;  */

void FUN_103c76f50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x22;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1b0);
  func_0x000103c77dc8(unaff_x22 + 0x80);
  FUN_103c77b98(uVar18,FUN_103c7a4b8);
  func_0x000103c77dc8(unaff_x22 + 0xf8);
  lVar9 = *(long *)(unaff_x22 + 0x308);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2f0);
  if (lVar9 == 0xb) {
    uVar18 = 0;
    uVar16 = 0;
    uVar13 = 0;
    lVar9 = 0x10;
  }
  uVar24 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar19 = *(undefined8 *)(unaff_x22 + 600);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x278));
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar25);
  func_0x000107c615c0(uVar26);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar20);
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar3);
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000103c77114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar18,uVar16,uVar13,lVar9);
  return;
}



/* Entry: 103c77118; end: 103c77807;  */

void FUN_103c77118(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long unaff_x22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  code *pcVar30;
  undefined8 uVar31;
  
  func_0x000103c77dc8(unaff_x22 + 0xf8);
  func_0x000103c77bd4(unaff_x22 + 0x10,unaff_x22 + 0x48);
  pcVar30 = *(code **)(unaff_x22 + 0x288);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar18 = *(undefined8 *)(unaff_x22 + 400);
  if (*(long *)(unaff_x22 + 0x60) == 1) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1f0);
    (*pcVar30)(*(undefined8 *)(unaff_x22 + 600));
    FUN_103c6ed1c(uVar18,uVar10);
    FUN_103c6ed1c(uVar10,uVar8);
    func_0x000103c77b98(uVar10,FUN_103c7b79c);
    func_0x000107c5f160();
    uVar8 = uVar10;
    func_0x000107c5ff70();
    uVar18 = uVar10;
    func_0x000107c611d4(uVar10,(uint)uVar8 & 0xff);
    pcVar30 = *(code **)(unaff_x22 + 0x290);
    uVar21 = *(undefined8 *)(unaff_x22 + 600);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1e8);
    if ((int)uVar18 == 0) {
      func_0x000107c61170(uVar10);
      func_0x000103c77b98(uVar19,FUN_103c7b79c);
      (*pcVar30)(uVar21,uVar23);
    }
    else {
      puVar4 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar5 = 0x20;
      uVar9 = 0xffffffffffffffff;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar4 = 0x8200102;
      uVar18 = uVar5;
      FUN_103c7b7d4();
      func_0x0001014bfa20();
      func_0x000107c6142c(uVar9);
      *(undefined8 *)(puVar4 + 1) = uVar18;
      func_0x000103c77b98(uVar19,FUN_103c7b79c);
      func_0x000107c60ea4(0x100000000,uVar10,(uint)uVar8 & 0xff,"Purchase awaiting approval for: %s"
                          ,puVar4,0xc);
      func_0x000103c77dc8(uVar5);
      func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(uVar10);
      (*pcVar30)(uVar21,uVar23);
    }
    func_0x000103c77c70(unaff_x22 + 0x10);
    func_0x000103c77dc8(unaff_x22 + 0x80);
    uVar8 = 0x11;
  }
  else {
    if (*(long *)(unaff_x22 + 0x60) != 0) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1e0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
      *(undefined8 *)(unaff_x22 + 0x310) = uVar5;
      FUN_103c77c10(unaff_x22 + 0x48,unaff_x22 + 0x120);
      (*pcVar30)(uVar9,uVar8,uVar10);
      FUN_103c6ed1c(uVar18,uVar23);
      FUN_103c6ed1c(uVar23,uVar19);
      func_0x000103c77b98(uVar23,FUN_103c7b79c);
      func_0x000107c5f160();
      uVar8 = uVar23;
      func_0x000107c5ff70();
      uVar10 = uVar23;
      func_0x000107c611d4(uVar23,(uint)uVar8 & 0xff);
      pcVar30 = *(code **)(unaff_x22 + 0x290);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x250);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1d8);
      if ((int)uVar10 == 0) {
        func_0x000107c61170(uVar23);
        func_0x000103c77b98(uVar18,FUN_103c7b79c);
        (*pcVar30)(uVar19,uVar9);
      }
      else {
        puVar4 = (undefined4 *)0xc;
        func_0x000107c6158c(0xc,0xffffffffffffffff);
        uVar6 = 0x20;
        uVar11 = 0xffffffffffffffff;
        func_0x000107c6158c(0x20,0xffffffffffffffff);
        *puVar4 = 0x8200102;
        uVar10 = uVar6;
        FUN_103c7b7d4();
        func_0x0001014bfa20();
        func_0x000107c6142c(uVar11);
        *(undefined8 *)(puVar4 + 1) = uVar10;
        func_0x000103c77b98(uVar18,FUN_103c7b79c);
        func_0x000107c60ea4(0x100000000,uVar23,(uint)uVar8 & 0xff,"Dispatching transaction for: %s",
                            puVar4,0xc);
        func_0x000103c77dc8(uVar6);
        func_0x000107c61590(uVar6,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
        func_0x000107c61170(uVar23);
        (*pcVar30)(uVar19,uVar9);
      }
      uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
      lVar2 = *(long *)(unaff_x22 + 0x1c0);
      puVar29 = *(undefined8 **)(unaff_x22 + 0x1b0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar19 = *(undefined8 *)(unaff_x22 + 400);
      func_0x000100083b20(unaff_x22 + 0x148);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
      lVar3 = *(long *)(unaff_x22 + 0x168);
      func_0x0001000a8868(unaff_x22 + 0x148,uVar10);
      FUN_103c6ed1c(uVar19,uVar18);
      (**(code **)(lVar2 + 0x38))(uVar18,0,1,uVar8);
      uVar8 = *puVar29;
      uVar18 = puVar29[1];
      piVar14 = *(int **)(lVar3 + 8);
      iVar1 = *piVar14;
      plVar7 = (long *)(ulong)(uint)piVar14[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x318) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_103c77808;
                    /* WARNING: Could not recover jumptable at 0x000103c77804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar14))
                (unaff_x22 + 0x120,uVar21,uVar5,*(undefined8 *)(unaff_x22 + 0x1a0),uVar8,uVar18,
                 uVar10,lVar3);
      return;
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x200);
    (*pcVar30)(*(undefined8 *)(unaff_x22 + 0x260));
    FUN_103c6ed1c(uVar18,uVar10);
    FUN_103c6ed1c(uVar10,uVar8);
    func_0x000103c77b98(uVar10,FUN_103c7b79c);
    func_0x000107c5f160();
    uVar8 = uVar10;
    func_0x000107c5ff70();
    uVar18 = uVar10;
    func_0x000107c611d4(uVar10,(uint)uVar8 & 0xff);
    pcVar30 = *(code **)(unaff_x22 + 0x290);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1f8);
    if ((int)uVar18 == 0) {
      func_0x000107c61170(uVar10);
      func_0x000103c77b98(uVar19,FUN_103c7b79c);
      (*pcVar30)(uVar21,uVar23);
    }
    else {
      puVar4 = (undefined4 *)0xc;
      func_0x000107c6158c(0xc,0xffffffffffffffff);
      uVar5 = 0x20;
      uVar9 = 0xffffffffffffffff;
      func_0x000107c6158c(0x20,0xffffffffffffffff);
      *puVar4 = 0x8200102;
      uVar18 = uVar5;
      FUN_103c7b7d4();
      func_0x0001014bfa20();
      func_0x000107c6142c(uVar9);
      *(undefined8 *)(puVar4 + 1) = uVar18;
      func_0x000103c77b98(uVar19,FUN_103c7b79c);
      func_0x000107c60ea4(0x100000000,uVar10,(uint)uVar8 & 0xff,"User cancelled purchase for: %s",
                          puVar4,0xc);
      func_0x000103c77dc8(uVar5);
      func_0x000107c61590(uVar5,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61590(puVar4,0xffffffffffffffff,0xffffffffffffffff);
      func_0x000107c61170(uVar10);
      (*pcVar30)(uVar21,uVar23);
    }
    func_0x000103c77c70(unaff_x22 + 0x10);
    func_0x000103c77dc8(unaff_x22 + 0x80);
    uVar8 = 0x10;
  }
  func_0x000103c77b98(*(undefined8 *)(unaff_x22 + 0x1b0),FUN_103c7a4b8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar27 = *(undefined8 *)(unaff_x22 + 600);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x278));
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar25);
  func_0x000107c615c0(uVar26);
  func_0x000107c615c0(uVar27);
  func_0x000107c615c0(uVar28);
  func_0x000107c615c0(uVar31);
  func_0x000107c615c0(uVar20);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar21);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000103c77718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,uVar8);
  return;
}



/* Entry: 103c77808; end: 103c77867;  */

void FUN_103c77808(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar1 + 0x310);
  uVar2 = *(undefined8 *)(lVar1 + 0x1a0);
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x318));
  func_0x000107c6142c(uVar3);
  FUN_103c77c28(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c77868,0,0);
  return;
}



/* Entry: 103c77868; end: 103c77b7f;  */

void FUN_103c77868(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  pcVar21 = *(code **)(unaff_x22 + 0x288);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar19 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000103c77dc8(unaff_x22 + 0x148);
  (*pcVar21)(uVar11,uVar13,uVar15);
  FUN_103c6ed1c(uVar19,uVar1);
  FUN_103c6ed1c(uVar1,uVar2);
  FUN_103c77b98(uVar1,FUN_103c7b79c);
  func_0x000107c5f160();
  uVar2 = uVar1;
  func_0x000107c5ff70();
  uVar11 = uVar1;
  func_0x000107c611d4(uVar1,(uint)uVar2 & 0xff);
  pcVar21 = *(code **)(unaff_x22 + 0x290);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
  if ((int)uVar11 == 0) {
    func_0x000107c61170(uVar1);
    FUN_103c77b98(uVar13,FUN_103c7b79c);
    (*pcVar21)(uVar15,uVar19);
  }
  else {
    puVar3 = (undefined4 *)0xc;
    func_0x000107c6158c(0xc,0xffffffffffffffff);
    uVar4 = 0x20;
    uVar5 = 0xffffffffffffffff;
    func_0x000107c6158c(0x20,0xffffffffffffffff);
    *puVar3 = 0x8200102;
    uVar11 = uVar4;
    FUN_103c7b7d4();
    func_0x0001014bfa20();
    func_0x000107c6142c(uVar5);
    *(undefined8 *)(puVar3 + 1) = uVar11;
    FUN_103c77b98(uVar13,FUN_103c7b79c);
    func_0x000107c60ea4(0x100000000,uVar1,(uint)uVar2 & 0xff,"Purchase succeeded for: %s",puVar3,0xc
                       );
    func_0x000103c77dc8(uVar4);
    func_0x000107c61590(uVar4,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61590(puVar3,0xffffffffffffffff,0xffffffffffffffff);
    func_0x000107c61170(uVar1);
    (*pcVar21)(uVar15,uVar19);
  }
  func_0x000103c77dc8(unaff_x22 + 0x120);
  func_0x000103c77c70(unaff_x22 + 0x10);
  func_0x000103c77dc8(unaff_x22 + 0x80);
  FUN_103c77b98(*(undefined8 *)(unaff_x22 + 0x1b0),FUN_103c7a4b8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar20 = *(undefined8 *)(unaff_x22 + 600);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x278));
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar17);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar20);
  func_0x000107c615c0(uVar22);
  func_0x000107c615c0(uVar23);
  func_0x000107c615c0(uVar24);
  func_0x000107c615c0(uVar14);
  func_0x000107c615c0(uVar12);
  func_0x000107c615c0(uVar9);
  func_0x000107c615c0(uVar6);
  func_0x000107c615c0(uVar10);
  func_0x000107c615c0(uVar15);
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar19);
  func_0x000107c615c0(uVar1);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar11);
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar7);
  func_0x000107c615c0(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000103c77b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0xf);
  return;
}



/* Entry: 103c77b80; end: 103c77b97;  */

void FUN_103c77b80(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103c77b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0xf);
  return;
}



/* Entry: 103c77b98; end: 103c77c0f;  */

undefined8 FUN_103c77b98(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103c77c10; end: 103c77c27;  */

undefined8 * FUN_103c77c10(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103c77c28; end: 103c77ca3;  */

undefined8 FUN_103c77c28(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112ffcc20;
  func_0x0001000285a8(0x112ffcc20,&UNK_10dc6b6c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103c77ca4; end: 103c77caf;  */

void FUN_103c77ca4(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000103c77cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c77cb0; end: 103c77cfb;  */

void FUN_103c77cb0(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000103c77cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103c77cfc; end: 103c77d4b;  */

void FUN_103c77cfc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  long *unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *unaff_x20;
  plVar3 = (long *)0x320;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103c77d4c;
  plVar3[0x32] = param_1;
  plVar3[0x33] = lVar4;
  lVar4 = 0x112ffcc20;
  func_0x0001000285a8(0x112ffcc20,&UNK_10dc6b6c0);
  uVar1 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x34] = uVar1;
  lVar4 = 0;
  FUN_103c7a4b8();
  plVar3[0x35] = lVar4;
  uVar1 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x36] = uVar1;
  lVar4 = 0;
  FUN_103c7b79c();
  plVar3[0x37] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x38] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x39] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x3a] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x3b] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x3c] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x3d] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x3e] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x3f] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x40] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x41] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x42] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x43] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x44] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x45] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x46] = uVar1;
  lVar4 = 0;
  func_0x000107c5f168();
  plVar3[0x47] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar3[0x48] = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x49] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4a] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4b] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4c] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4d] = uVar2;
  uVar2 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4e] = uVar2;
  uVar1 = uVar1 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar3[0x4f] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103c763dc,0,0);
  return;
}



/* Entry: 103c77d4c; end: 103c77daf;  */

void FUN_103c77d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103c77dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 103c77db0; end: 103c77df7;  */

void FUN_103c77db0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103c77dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0,0,0xf);
  return;
}



/* Entry: 103c77df8; end: 103c77e17;  */

void FUN_103c77df8(void)

{
  func_0x000107c61168(&PTR_PTR_112ffd0e8);
  return;
}



/* Entry: 103c77e18; end: 103c77e63;  */

void FUN_103c77e18(undefined8 param_1)

{
  func_0x0001000285a8(0x112ffd160,&UNK_10dc6bb90);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103c77eb8,param_1);
  return;
}



/* Entry: 103c77e64; end: 103c77eb7;  */

void FUN_103c77e64(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_103c77f34();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106f14b8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103c77eb8; end: 103c77ebf;  */

void FUN_103c77eb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_103c77f34();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1106f14b8;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103c77ec0; end: 103c77eef;  */

void FUN_103c77ec0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103c77ef0; end: 103c77ef7;  */

void FUN_103c77ef0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103c77ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103c77ef8; end: 103c77f1b;  */

void FUN_103c77ef8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


