/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ebf41c; end: 102ebf4bb;  */

void FUN_102ebf41c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar9 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar6 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar6 - extraout_x12_00;
  if (param_1 == 0) {
    (**(code **)(lVar10 + 0x38))(lVar7,1,1,lVar2);
  }
  else {
    func_0x000107c5d7e8();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000107c5edb4(puVar9);
      func_0x000107c61170(param_1);
    }
    (**(code **)(lVar10 + 0x38))(puVar9,param_1 == 0,1,lVar2);
    func_0x0001001021cc(puVar9,lVar7);
    lVar1 = lVar7;
    (**(code **)(lVar10 + 0x30))(lVar7,1,lVar2);
    if ((int)lVar1 != 1) {
      pcVar5 = *(code **)(lVar10 + 0x20);
      (*pcVar5)(lVar8,lVar7,lVar2);
      (**(code **)(lVar10 + 0x10))(lVar6,lVar8,lVar2);
      (*pcVar5)(*(undefined8 *)(*(long *)(lVar3 + 0x40) + 0x28),lVar6,lVar2);
      func_0x000107c6144c(lVar3);
      (**(code **)(lVar10 + 8))(lVar8,lVar2);
      return;
    }
  }
  func_0x0001000293e4(lVar7);
  (**(code **)(lVar10 + 0x10))
            (lVar6,unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff)),lVar2);
  (**(code **)(lVar10 + 0x20))(*(undefined8 *)(*(long *)(lVar3 + 0x40) + 0x28),lVar6,lVar2);
  func_0x000107c6144c(lVar3);
  return;
}



/* Entry: 102ebf4bc; end: 102ebf4c7;  */

void FUN_102ebf4bc(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0,*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0xd000000000000012;
    func_0x000107c5fadc(0xd000000000000012,0x800000010f113630);
    uVar4 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f113720);
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c61168(PTR__OBJC_CLASS___NSError_1126ae858);
    func_0x000107c42a5c();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x00010488ade0(puVar5);
    func_0x000107c61170(puVar5);
  }
  else {
    pcStack_68 = FUN_102ebf4c8;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_100ff4e10;
    puStack_70 = &UNK_1105e4a00;
    ppuVar2 = &puStack_88;
    uStack_60 = param_1;
    func_0x000107c60bc4(ppuVar2);
    uVar3 = uStack_60;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar3);
    func_0x000107c516ac(lVar1);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 102ebf4c8; end: 102ebf4df;  */

void FUN_102ebf4c8(void)

{
  FUN_102ebecb0();
  return;
}



/* Entry: 102ebf4e0; end: 102ebf5cf;  */

void FUN_102ebf4e0(long param_1,long param_2)

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



/* Entry: 102ebf5d0; end: 102ebf5ef;  */

void FUN_102ebf5d0(void)

{
  func_0x000107c61168(&PTR_PTR_112f274a0);
  return;
}



/* Entry: 102ebf5f0; end: 102ebf637;  */

bool FUN_102ebf5f0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  
  func_0x000103913654();
  bVar1 = ((param_2 ^ 0xffffffff) & 0xff) == 0;
  if (!bVar1) {
    FUN_102ebf638();
  }
  return bVar1 || (param_2 & 0xff) == 1;
}



/* Entry: 102ebf638; end: 102ebf65f;  */

void FUN_102ebf638(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102ebf660; end: 102ebf6a3;  */

void FUN_102ebf660(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ebf6a4; end: 102ebf70b;  */

void FUN_102ebf6a4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ebf70c;
  plVar1[8] = param_3;
  plVar1[9] = unaff_x20;
  plVar1[6] = param_1;
  plVar1[7] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec0060,0,0);
  return;
}



/* Entry: 102ebf70c; end: 102ebf773;  */

void FUN_102ebf70c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102ebf750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebf774,0,0);
  return;
}



/* Entry: 102ebf774; end: 102ebf973;  */

void FUN_102ebf774(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = *(undefined8 **)(unaff_x22 + 0x28);
  func_0x000107c43fb4();
  func_0x000107c61180();
  if (puVar2 == (undefined8 *)0x0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    func_0x000102ebe138();
    func_0x000107c613f8(&UNK_1105e4c38,puVar2,0,0);
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = uVar6;
    *(undefined1 *)(puVar2 + 3) = 0;
    func_0x000107c61654();
    func_0x000107c61174(uVar6);
    puVar2 = *(undefined8 **)(unaff_x22 + 0x28);
  }
  else {
    puVar3 = puVar2;
    func_0x000107c44314();
    uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
    if (puVar3 == (undefined8 *)0x0) {
      func_0x000107c615e8(uVar6);
      puVar3 = puVar2;
      func_0x000107c30a1c();
      func_0x000107c61180();
      puVar4 = puVar3;
      if (puVar3 != (undefined8 *)0x0) {
        func_0x000107c5ee30();
        func_0x000107c61170(puVar3);
        uVar1 = (uint)(param_2 >> 0x20);
        uVar5 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar5 == 0) {
            if ((param_2 & 0xff000000000000) != 0) {
LAB_102ebf8b4:
              func_0x000107c615e8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000102ebf8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(unaff_x22 + 8))(puVar4,param_2);
              return;
            }
          }
          else if ((long)(int)puVar4 != (long)puVar4 >> 0x20) goto LAB_102ebf8b4;
        }
        else if ((uVar5 == 2) && (puVar4[2] != puVar4[3])) goto LAB_102ebf8b4;
        func_0x00010006c090(puVar4,param_2);
      }
      uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
      func_0x000102ebe138();
      func_0x000107c613f8(&UNK_1105e4c38,puVar4,0,0);
      *puVar4 = uVar7;
      puVar4[1] = uVar6;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 2;
      func_0x000107c61654();
      func_0x000107c61174(uVar7);
      func_0x000107c61174(uVar6);
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
      puVar4 = puVar3;
      func_0x000102ebe138();
      func_0x000107c613f8(&UNK_1105e4c38,puVar4,0,0);
      *puVar4 = uVar7;
      puVar4[1] = puVar3;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 1;
      func_0x000107c61654();
      func_0x000107c61174(uVar7);
      func_0x000107c615e8(uVar6);
    }
  }
  func_0x000107c615e8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000102ebf970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebf974; end: 102ebf98f;  */

void FUN_102ebf974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebf990,0,0);
  return;
}



/* Entry: 102ebf990; end: 102ebfa27;  */

void FUN_102ebf990(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ebfa28;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ebfa28; end: 102ebfa7f;  */

void FUN_102ebfa28(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ebfa80;
  }
  else {
    pcVar1 = FUN_102ebfe98;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ebfa80; end: 102ebfb73;  */

void FUN_102ebfa80(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar5;
  func_0x0001000285a8(0x112e2f3f8,&UNK_10da18120);
  puVar2 = &UNK_1105e4b28;
  func_0x000107c613fc(&UNK_1105e4b28,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  func_0x000107c615f0(uVar5);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  uVar3 = 0;
  func_0x0001048897a0(0,1,0,FUN_102ec0038,puVar2);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  func_0x000107c61574(puVar2);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ebfb74;
                    /* WARNING: Could not recover jumptable at 0x000102ebfb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101df6a64)();
  return;
}



/* Entry: 102ebfb74; end: 102ebfbc7;  */

void FUN_102ebfb74(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ebfbc8,0,0);
  return;
}



/* Entry: 102ebfbc8; end: 102ebfe97;  */

void FUN_102ebfbc8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 uVar12;
  
  puVar8 = *(undefined8 **)(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    *(undefined8 **)(unaff_x22 + 0x28) = puVar8;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c43fb4();
    func_0x000107c61180();
    if (puVar8 == (undefined8 *)0x0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar12 = *(undefined1 *)(unaff_x22 + 0x80);
      func_0x000102ebe138();
      func_0x000107c613f8(&UNK_1105e4c38,puVar8,0,0);
      puVar8[1] = 0;
      puVar8[2] = 0;
      *puVar8 = uVar11;
      *(undefined1 *)(puVar8 + 3) = 0;
      func_0x000107c61654();
      func_0x000107c61174(uVar11);
    }
    else {
      puVar3 = puVar8;
      func_0x000107c44314();
      puVar4 = puVar8;
      func_0x000107c440cc();
      puVar5 = puVar8;
      func_0x000107c4407c();
      func_0x000107c61180();
      if (puVar5 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)0x0;
        param_2 = 0;
        if (puVar3 == (undefined8 *)0x0) goto LAB_102ebfd54;
LAB_102ebfcb0:
        uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar12 = *(undefined1 *)(unaff_x22 + 0x80);
        func_0x000102ebe138();
        func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
        *puVar5 = uVar11;
        puVar5[1] = puVar3;
        puVar5[2] = 0;
        uVar6 = 1;
      }
      else {
        puVar9 = puVar5;
        func_0x000107c5faec();
        func_0x000107c61170();
        if (puVar3 != (undefined8 *)0x0) goto LAB_102ebfcb0;
LAB_102ebfd54:
        if (((ulong)puVar4 & 1) == 0) {
          if (param_2 != 0) {
            uVar1 = (ulong)puVar9 & 0xffffffffffff;
            if ((param_2 & 0x2000000000000000) != 0) {
              uVar1 = param_2 >> 0x38 & 0xf;
            }
            if (uVar1 != 0) {
              uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
              uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
              uVar12 = *(undefined1 *)(unaff_x22 + 0x80);
              func_0x000107c5ed80(*(undefined8 *)(unaff_x22 + 0x30),puVar9,param_2);
              func_0x000107c6142c(param_2);
              func_0x000107c615e8(puVar8);
              func_0x000101e00ebc(uVar7,uVar12);
              func_0x000107c615e8(uVar10);
              UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
              goto LAB_102ebfe78;
            }
          }
          uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
          uVar12 = *(undefined1 *)(unaff_x22 + 0x80);
          func_0x000102ebe138();
          func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = uVar11;
          uVar6 = 8;
        }
        else {
          uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
          uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
          uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
          uVar12 = *(undefined1 *)(unaff_x22 + 0x80);
          func_0x000102ebe138();
          func_0x000107c613f8(&UNK_1105e4c38,puVar5,0,0);
          puVar5[1] = 0;
          puVar5[2] = 0;
          *puVar5 = uVar11;
          uVar6 = 7;
        }
      }
      *(undefined1 *)(puVar5 + 3) = uVar6;
      func_0x000107c61654();
      func_0x000107c61174(uVar11);
      func_0x000107c6142c(param_2);
      func_0x000107c615e8(puVar8);
    }
    func_0x000101e00ebc(uVar10,uVar12);
  }
  func_0x000107c615e8(uVar7);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_102ebfe78:
                    /* WARNING: Could not recover jumptable at 0x000102ebfe94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 102ebfe98; end: 102ebfee3;  */

void FUN_102ebfe98(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102ebfee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ebfee4; end: 102ec0037;  */

void FUN_102ebfee4(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar4 = &puStack_80;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (param_3 != 0) {
    uVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar3 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar3);
    func_0x000107c61170(uVar2);
    uStack_60 = 0x102ec063c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101a11da0;
    puStack_68 = &UNK_1105e4b40;
    uStack_58 = param_1;
    func_0x000107c60bc4(&puStack_80);
    uVar2 = uStack_58;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar2);
    func_0x000107c507b4(param_2);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102ec0038);
  (*pcVar1)();
}



/* Entry: 102ec0038; end: 102ec005f;  */

void FUN_102ec0038(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  ppuVar6 = &puStack_80;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c61538();
    puVar5 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    func_0x000107c5fc48(uVar4,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar5);
    func_0x000107c61170(uVar4);
    uStack_60 = 0x102ec063c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101a11da0;
    puStack_68 = &UNK_1105e4b40;
    uStack_58 = param_1;
    func_0x000107c60bc4(&puStack_80);
    uVar4 = uStack_58;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar4);
    func_0x000107c507b4(uVar1);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102ec0038);
  (*pcVar2)();
}



/* Entry: 102ec0060; end: 102ec00f7;  */

void FUN_102ec0060(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x48) + 0x10);
  uVar1 = 0x112d51300;
  func_0x0001000285a8(0x112d51300,&UNK_10d917f90);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x58) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ec00f8;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ec00f8; end: 102ec014f;  */

void FUN_102ec00f8(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec0150;
  }
  else {
    pcVar1 = FUN_102ec0360;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec0150; end: 102ec0253;  */

void FUN_102ec0150(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  func_0x0001000285a8(0x112e2f3f8,&UNK_10da18120);
  puVar2 = &UNK_1105e4b78;
  func_0x000107c613fc(&UNK_1105e4b78,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar1;
  *(undefined8 *)(puVar2 + 0x28) = uVar5;
  func_0x000107c615f0(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar5);
  uVar3 = 0;
  func_0x0001048897a0(0,1,0,0x102ec067c,puVar2);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
  func_0x000107c61574(puVar2);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102ec0254;
                    /* WARNING: Could not recover jumptable at 0x000102ec0250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_101df6a64)();
  return;
}



/* Entry: 102ec0254; end: 102ec02a7;  */

void FUN_102ec0254(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x78) = param_1;
  *(undefined1 *)(lVar1 + 0x80) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec02a8,0,0);
  return;
}



/* Entry: 102ec02a8; end: 102ec035f;  */

void FUN_102ec02a8(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  if (*(char *)(unaff_x22 + 0x80) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x28) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
    func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102ec0330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102ec035c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 102ec0360; end: 102ec03ab;  */

void FUN_102ec0360(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000102ec03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec03ac; end: 102ec04af;  */

void FUN_102ec03ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  if (lRam0000000112f275d0 != -1) {
    func_0x000107c61568(0x112f275d0,FUN_102ec04b0);
  }
  uStack_60 = 0x102ec0970;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101a11da0;
  puStack_68 = &UNK_1105e4b90;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar1 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c507bc(param_2);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102ec04b0; end: 102ec056b;  */

void FUN_102ec04b0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126b1378;
  func_0x000107c61168();
  uVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar3 = PTR_PTR_1126b1060;
  func_0x000107c610f8(PTR_PTR_1126b1060);
  func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
  func_0x000107c47d08(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c5d904();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puRam0000000113805148 = puVar1;
  return;
}



/* Entry: 102ec056c; end: 102ec05eb;  */

void FUN_102ec056c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ec097c,0,0);
  return;
}



/* Entry: 102ec05ec; end: 102ec05fb;  */

void FUN_102ec05ec(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102ec05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 102ec05fc; end: 102ec065f;  */

void FUN_102ec05fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102ec0980,0,0);
  return;
}



/* Entry: 102ec0660; end: 102ec0687;  */

void FUN_102ec0660(long param_1,long param_2)

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



/* Entry: 102ec0688; end: 102ec0723;  */

long FUN_102ec0688(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102ec0724; end: 102ec0737;  */

/* WARNING: Possible PIC construction at 0x000102ec0788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ec078c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102ec0724(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  switch(*(undefined1 *)(param_1 + 3)) {
  case 2:
  case 4:
  case 5:
    func_0x000107c61170(uVar2,uVar1,param_1[2]);
    uVar2 = uVar1;
  case 0:
  case 1:
  case 3:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
    break;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 102ec0738; end: 102ec07a7;  */

/* WARNING: Possible PIC construction at 0x000102ec0788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102ec078c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_102ec0738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  switch(param_4) {
  case 2:
  case 4:
  case 5:
    func_0x000107c61170();
    param_1 = param_2;
  case 0:
  case 1:
  case 3:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
    break;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102ec07a8; end: 102ec086f;  */

undefined8 * FUN_102ec07a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x000102ec06b4(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 102ec0870; end: 102ec08bb;  */

undefined8 * FUN_102ec0870(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_102ec0738(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 102ec08bc; end: 102ec0983;  */

int FUN_102ec08bc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf6 < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xf7;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 10) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102ec0984; end: 102ec09ef;  */

void FUN_102ec0984(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102ec09f0; end: 102ec0a3f;  */

void FUN_102ec09f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x3c0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x3b8) = param_11;
  *(undefined8 *)(unaff_x22 + 0x3b0) = param_10;
  *(undefined8 *)(unaff_x22 + 0x3a8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x3a0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x398) = param_7;
  *(undefined8 *)(unaff_x22 + 0x390) = param_6;
  *(undefined8 *)(unaff_x22 + 0x388) = param_5;
  *(undefined8 *)(unaff_x22 + 0x380) = param_4;
  *(undefined8 *)(unaff_x22 + 0x378) = param_3;
  *(undefined8 *)(unaff_x22 + 0x370) = param_2;
  *(undefined8 *)(unaff_x22 + 0x368) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec0a40,0,0);
  return;
}



/* Entry: 102ec0a40; end: 102ec0a9b;  */

void FUN_102ec0a40(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  plVar4 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x10);
  *(long **)(unaff_x22 + 0x3c8) = plVar4;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x3d0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ec0a9c;
  plVar1[5] = unaff_x22 + 0x310;
  plVar1[6] = (long)plVar4;
  lVar5 = *(long *)(*plVar4 + 0x50);
  plVar1[7] = lVar5;
  lVar2 = 0;
  __sSqMa(0,lVar5);
  plVar1[8] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[10] = uVar3;
  lVar2 = *(long *)(lVar5 + -8);
  plVar1[0xb] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ec0a9c; end: 102ec0b47;  */

void FUN_102ec0a9c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar5 = *(undefined8 *)(lVar8 + 0x370);
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar8 + 0x3d0));
  uVar4 = *(undefined8 *)(lVar8 + 0x310);
  *(undefined8 *)(lVar8 + 0x3d8) = uVar4;
  lVar6 = *(long *)(lVar8 + 0x318);
  func_0x000107c614f0(uVar4);
  piVar3 = *(int **)(lVar6 + 0x38);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar8 + 0x3e0) = plVar2;
  *plVar2 = lVar7;
  plVar2[1] = (long)FUN_102ec0b48;
                    /* WARNING: Could not recover jumptable at 0x000102ec0b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(*(undefined8 *)(lVar8 + 0x368),uVar5,uVar4,lVar6);
  return;
}



/* Entry: 102ec0b48; end: 102ec0baf;  */

void FUN_102ec0b48(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x3d8);
  *(long *)(lVar2 + 1000) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x3e0));
  func_0x000107c615e8(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec0bb0;
  }
  else {
    pcVar1 = FUN_102ec0d1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec0bb0; end: 102ec0d1b;  */

void FUN_102ec0bb0(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar7 = *(long *)(unaff_x22 + 1000);
  FUN_102eb414c();
  *(undefined8 *)(unaff_x22 + 0x3f0) = param_1;
  if (lVar7 == 0) {
    plVar5 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x28);
    plVar2 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x3f8) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102ec0e70;
    lVar7 = unaff_x22 + 0x278;
LAB_102ec0d00:
    plVar2[5] = lVar7;
    plVar2[6] = (long)plVar5;
    lVar6 = *(long *)(*plVar5 + 0x50);
    plVar2[7] = lVar6;
    lVar7 = 0;
    __sSqMa(0,lVar6);
    plVar2[8] = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    plVar2[9] = lVar7;
    uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[10] = uVar3;
    lVar7 = *(long *)(lVar6 + -8);
    plVar2[0xb] = lVar7;
    uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  lVar6 = unaff_x22 + 0x348;
  *(long *)(unaff_x22 + 0x4d0) = lVar7;
  *(long *)(unaff_x22 + 0x340) = lVar7;
  func_0x000107c614b0(lVar7);
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar6,(undefined8 *)(unaff_x22 + 0x340),uVar1,&UNK_1105e4e50,0);
  if ((int)lVar6 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar4 = 3;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar4;
    if ((uVar4 & 0xff) != 1) {
      *(long *)(unaff_x22 + 0x4d8) = lVar7;
      plVar5 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ec29e8;
      lVar7 = unaff_x22 + 0x250;
      goto LAB_102ec0d00;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(lVar7);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec0cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec0d1c; end: 102ec0e6f;  */

void FUN_102ec0d1c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar3 = unaff_x22 + 0x348;
  uVar8 = *(undefined8 *)(unaff_x22 + 1000);
  func_0x000102ec3edc();
  puVar1 = &UNK_1105e4e50;
  func_0x000107c613f8(&UNK_1105e4e50,param_1,0,0);
  *param_1 = uVar8;
  func_0x000107c61654();
  *(undefined **)(unaff_x22 + 0x4d0) = puVar1;
  *(undefined **)(unaff_x22 + 0x340) = puVar1;
  func_0x000107c614b0(puVar1);
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar3,(undefined8 *)(unaff_x22 + 0x340),uVar8,&UNK_1105e4e50,0);
  if ((int)lVar3 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar5 = 3;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar5;
    if ((uVar5 & 0xff) != 1) {
      *(undefined **)(unaff_x22 + 0x4d8) = puVar1;
      plVar6 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ec29e8;
      plVar2[5] = unaff_x22 + 0x250;
      plVar2[6] = (long)plVar6;
      lVar7 = *(long *)(*plVar6 + 0x50);
      plVar2[7] = lVar7;
      lVar3 = 0;
      __sSqMa(0,lVar7);
      plVar2[8] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar2[9] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[10] = uVar4;
      lVar3 = *(long *)(lVar7 + -8);
      plVar2[0xb] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar1);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec0e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec0e70; end: 102ec0eb7;  */

void FUN_102ec0e70(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x3f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec0eb8,0,0);
  return;
}



/* Entry: 102ec0eb8; end: 102ec0f4f;  */

void FUN_102ec0eb8(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar5 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar4);
  piVar3 = *(int **)(lVar5 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x400) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ec0f50;
                    /* WARNING: Could not recover jumptable at 0x000102ec0f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(unaff_x22 + 0x3f0),
             "saveToMemories(saveSessionId:snapDoc:replaceId:saveLocation:progressHandler:backupSchedulingGate:)"
             ,0x62,2,0x55,uVar4,lVar5);
  return;
}



/* Entry: 102ec0f50; end: 102ec0fb3;  */

void FUN_102ec0f50(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x408) = param_1;
  *(long *)(lVar2 + 0x410) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x400));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec0fb4;
  }
  else {
    pcVar1 = FUN_102ec2b84;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec0fb4; end: 102ec11e3;  */

void FUN_102ec0fb4(void)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar7 = *(long *)(unaff_x22 + 0x410);
  func_0x000107c5fd64();
  if (lVar7 == 0) {
    plVar5 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x20);
    uVar8 = 0x112f27440;
    func_0x0001000285a8(0x112f27440,&UNK_10db62ae0);
    *(undefined8 *)(unaff_x22 + 0x358) = uVar8;
    plVar1 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x418) = plVar1;
    plVar2 = plVar1;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x420) = plVar2;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102ec11e4;
    plVar1[0xb] = (long)plVar2;
    plVar1[0xc] = unaff_x22 + 0x360;
    plVar1[9] = unaff_x22 + 0x358;
    plVar1[10] = (long)&UNK_1107a6f08;
    plVar1[8] = unaff_x22 + 0x350;
    lVar6 = *plVar5;
    plVar1[0xd] = (long)&PTR_DAT_1107a6e88;
    lVar7 = 0x10;
    _swift_task_alloc();
    plVar1[0xe] = lVar7;
    lVar7 = *(long *)(lVar6 + 0x50);
    plVar1[0xf] = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    plVar1[0x10] = lVar7;
    uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0x11] = uVar3;
    plVar2 = (long *)0x70;
    _swift_task_alloc();
    plVar1[0x12] = (long)plVar2;
    *plVar2 = (long)plVar1;
    plVar2[1] = (long)&UNK_104876614;
LAB_104875f04:
    plVar2[5] = uVar3;
    plVar2[6] = (long)plVar5;
    lVar6 = *(long *)(*plVar5 + 0x50);
    plVar2[7] = lVar6;
    lVar7 = 0;
    __sSqMa(0,lVar6);
    plVar2[8] = lVar7;
    lVar7 = *(long *)(lVar7 + -8);
    plVar2[9] = lVar7;
    uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[10] = uVar3;
    lVar7 = *(long *)(lVar6 + -8);
    plVar2[0xb] = lVar7;
    uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar2[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  lVar6 = unaff_x22 + 0x348;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar11 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar10);
  (**(code **)(lVar11 + 0x40))(uVar9,uVar8,0,0,0x54,uVar10,lVar11);
  func_0x000107c61574();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(long *)(unaff_x22 + 0x4d0) = lVar7;
  *(long *)(unaff_x22 + 0x340) = lVar7;
  func_0x000107c614b0(lVar7);
  uVar8 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar6,(undefined8 *)(unaff_x22 + 0x340),uVar8,&UNK_1105e4e50,0);
  if ((int)lVar6 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar4 = 2;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar4;
    if ((uVar4 & 0xff) != 1) {
      *(long *)(unaff_x22 + 0x4d8) = lVar7;
      plVar5 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ec29e8;
      uVar3 = unaff_x22 + 0x250;
      goto LAB_104875f04;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(lVar7);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec1188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec11e4; end: 102ec1293;  */

void FUN_102ec11e4(void)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  
  lVar6 = *unaff_x22;
  lVar7 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x418));
  if (unaff_x20 == 0) {
    lVar5 = *(long *)(lVar6 + 0x350);
    *(long *)(lVar6 + 0x428) = lVar5;
    func_0x000107c614f0(lVar5);
    plVar2 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(lVar6 + 0x430) = plVar2;
    *plVar2 = lVar7;
    plVar2[1] = (long)FUN_102ec1294;
    lVar4 = *(long *)(lVar6 + 0x3f0);
    lVar7 = *(long *)(lVar6 + 0x3a8);
    lVar6 = *(long *)(lVar6 + 0x3a0);
    plVar1 = (long *)0x100;
    func_0x000107c615b8();
    plVar2[2] = (long)plVar1;
    *plVar1 = (long)plVar2;
    plVar1[1] = (long)FUN_102eb4b98;
    plVar1[0x13] = lVar7;
    plVar1[0x14] = lVar5;
    plVar1[0x11] = 0;
    plVar1[0x12] = lVar6;
    plVar1[0xf] = lVar4;
    plVar1[0x10] = 0x20;
    pcVar3 = FUN_102eb4270;
  }
  else {
    pcVar3 = FUN_102ec2ce4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102ec1294; end: 102ec12ff;  */

void FUN_102ec1294(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x438) = param_1;
  *(long *)(lVar2 + 0x440) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x430));
  func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x428));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec1300;
  }
  else {
    pcVar1 = FUN_102ec2ea4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec1300; end: 102ec1567;  */

void FUN_102ec1300(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar8 = *(long *)(unaff_x22 + 0x440);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x438);
  func_0x000107c5b198();
  func_0x000107c61180();
  uVar9 = uVar2;
  FUN_102eb414c();
  *(undefined8 *)(unaff_x22 + 0x448) = uVar9;
  if (lVar8 == 0) {
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
    lVar8 = *(long *)(unaff_x22 + 0x298);
    func_0x0001000a8868(unaff_x22 + 0x278,uVar2);
    piVar6 = *(int **)(lVar8 + 8);
    iVar1 = *piVar6;
    plVar3 = (long *)(ulong)(uint)piVar6[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x450) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_102ec1568;
                    /* WARNING: Could not recover jumptable at 0x000102ec14b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              (uVar9,
               "saveToMemories(saveSessionId:snapDoc:replaceId:saveLocation:progressHandler:backupSchedulingGate:)"
               ,0x62,2,0x67,uVar2,lVar8);
    return;
  }
  uVar4 = unaff_x22 + 0x348;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3f0);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar9);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar12 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar9);
  (**(code **)(lVar12 + 0x40))(uVar11,uVar10,0,0,0x54,uVar9,lVar12);
  func_0x000107c61574();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(long *)(unaff_x22 + 0x4d0) = lVar8;
  *(long *)(unaff_x22 + 0x340) = lVar8;
  func_0x000107c614b0(lVar8);
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar4,(undefined8 *)(unaff_x22 + 0x340),uVar9,&UNK_1105e4e50,0);
  if ((uVar4 & 1) == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar5 = 3;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar5;
    if ((uVar5 & 0xff) != 1) {
      *(long *)(unaff_x22 + 0x4d8) = lVar8;
      plVar7 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar3 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102ec29e8;
      plVar3[5] = unaff_x22 + 0x250;
      plVar3[6] = (long)plVar7;
      lVar12 = *(long *)(*plVar7 + 0x50);
      plVar3[7] = lVar12;
      lVar8 = 0;
      __sSqMa(0,lVar12);
      plVar3[8] = lVar8;
      lVar8 = *(long *)(lVar8 + -8);
      plVar3[9] = lVar8;
      uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar3[10] = uVar4;
      lVar8 = *(long *)(lVar12 + -8);
      plVar3[0xb] = lVar8;
      uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar3[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(lVar8);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec150c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec1568; end: 102ec15cb;  */

void FUN_102ec1568(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x458) = param_1;
  *(long *)(lVar2 + 0x460) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x450));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec15cc;
  }
  else {
    pcVar1 = FUN_102ec3038;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec15cc; end: 102ec190f;  */

void FUN_102ec15cc(void)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  if (*(long *)(unaff_x22 + 0x388) == 0) {
    plVar1 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x4c0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_102ec2868;
    lVar13 = *(long *)(unaff_x22 + 0x448);
    lVar10 = *(long *)(unaff_x22 + 0x3c0);
    lVar7 = *(long *)(unaff_x22 + 0x3b0);
    lVar6 = *(long *)(unaff_x22 + 0x398);
    lVar5 = *(long *)(unaff_x22 + 0x390);
    lVar12 = *(long *)(unaff_x22 + 0x370);
    lVar8 = *(long *)(unaff_x22 + 0x368);
    plVar1[0xd] = *(long *)(unaff_x22 + 0x3b8);
    plVar1[0xe] = lVar10;
    plVar1[0xb] = lVar6;
    plVar1[0xc] = lVar7;
    plVar1[9] = lVar13;
    plVar1[10] = lVar5;
    plVar1[7] = lVar8;
    plVar1[8] = lVar12;
    pcVar3 = FUN_102ec3444;
  }
  else {
    lVar12 = *(long *)(unaff_x22 + 0x460);
    func_0x000107c5fd64();
    if (lVar12 == 0) {
      if (*(long *)(unaff_x22 + 0x398) - 1U < 2) {
        *(undefined1 *)(unaff_x22 + 0x9a) = 2;
        if (*(long *)(unaff_x22 + 0x3b0) == 0) {
          plVar1 = (long *)0x70;
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x4a0) = plVar1;
          *plVar1 = unaff_x22;
          plVar1[1] = (long)FUN_102ec2080;
          plVar11 = *(long **)(unaff_x22 + 0x3c8);
          lVar12 = unaff_x22 + 800;
        }
        else {
          plVar1 = (long *)0x70;
          func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x3b8));
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x480) = plVar1;
          *plVar1 = unaff_x22;
          plVar1[1] = (long)FUN_102ec1f34;
          plVar11 = *(long **)(unaff_x22 + 0x3c8);
          lVar12 = unaff_x22 + 0x330;
        }
      }
      else {
        plVar11 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x30);
        plVar1 = (long *)0x70;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x468) = plVar1;
        *plVar1 = unaff_x22;
        plVar1[1] = (long)FUN_102ec1910;
        lVar12 = unaff_x22 + 0x2a0;
      }
    }
    else {
      uVar2 = unaff_x22 + 0x348;
      uVar16 = *(undefined8 *)(unaff_x22 + 0x458);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x448);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x438);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x408);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x3f0);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
      lVar13 = *(long *)(unaff_x22 + 0x298);
      func_0x0001000a8868(unaff_x22 + 0x278,uVar9);
      (**(code **)(lVar13 + 0x40))(uVar17,uVar16,0,0,0x54,uVar9,lVar13);
      func_0x000107c61574();
      func_0x000107c61170(uVar16);
      func_0x000107c61170(uVar17);
      func_0x000107c615e8(uVar18);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
      lVar13 = *(long *)(unaff_x22 + 0x298);
      func_0x0001000a8868(unaff_x22 + 0x278,uVar9);
      (**(code **)(lVar13 + 0x40))(uVar15,uVar14,0,0,0x54,uVar9,lVar13);
      func_0x000107c61574();
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar14);
      func_0x0001000834e4(unaff_x22 + 0x278);
      *(long *)(unaff_x22 + 0x4d0) = lVar12;
      *(long *)(unaff_x22 + 0x340) = lVar12;
      func_0x000107c614b0(lVar12);
      uVar9 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c(uVar2,(undefined8 *)(unaff_x22 + 0x340),uVar9,&UNK_1105e4e50,0);
      if ((uVar2 & 1) != 0) {
        func_0x000107c614ac(lVar12);
        func_0x000107c61654();
        func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
LAB_102ec1830:
                    /* WARNING: Could not recover jumptable at 0x000102ec1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
      uVar4 = 10;
      FUN_102ec64a0();
      *(char *)(unaff_x22 + 0x9b) = (char)uVar4;
      if ((uVar4 & 0xff) == 1) {
        func_0x000107c61654();
        goto LAB_102ec1830;
      }
      *(long *)(unaff_x22 + 0x4d8) = lVar12;
      plVar11 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar1 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_102ec29e8;
      lVar12 = unaff_x22 + 0x250;
    }
    plVar1[5] = lVar12;
    plVar1[6] = (long)plVar11;
    lVar13 = *(long *)(*plVar11 + 0x50);
    plVar1[7] = lVar13;
    lVar12 = 0;
    __sSqMa(0,lVar13);
    plVar1[8] = lVar12;
    lVar12 = *(long *)(lVar12 + -8);
    plVar1[9] = lVar12;
    uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[10] = uVar2;
    lVar12 = *(long *)(lVar13 + -8);
    plVar1[0xb] = lVar12;
    uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar1[0xc] = uVar2;
    pcVar3 = (code *)&UNK_104875f90;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102ec1910; end: 102ec1957;  */

void FUN_102ec1910(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x468));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec1958,0,0);
  return;
}



/* Entry: 102ec1958; end: 102ec19df;  */

void FUN_102ec1958(void)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2b8);
  lVar9 = *(long *)(unaff_x22 + 0x2c0);
  func_0x0001000a8868(unaff_x22 + 0x2a0,uVar7);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x470) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ec19e0;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x380);
  piVar6 = *(int **)(lVar9 + 8);
  iVar1 = *piVar6;
  plVar3 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  plVar2[2] = (long)plVar3;
  *plVar3 = (long)plVar2;
  plVar3[1] = (long)FUN_102ed349c;
                    /* WARNING: Could not recover jumptable at 0x000102ed3498. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar5,uVar8,uVar4,1,uVar7,lVar9);
  return;
}



/* Entry: 102ec19e0; end: 102ec1a4f;  */

void FUN_102ec19e0(byte param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x478) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x470));
  if (unaff_x20 == 0) {
    *(byte *)(lVar2 + 0x99) = param_1 & 1;
    pcVar1 = FUN_102ec1a50;
  }
  else {
    pcVar1 = FUN_102ec1d1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec1a50; end: 102ec1d1b;  */

void FUN_102ec1a50(void)

{
  char cVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  cVar1 = *(char *)(unaff_x22 + 0x99);
  puVar2 = (undefined1 *)(unaff_x22 + 0x2a0);
  func_0x0001000834e4();
  if (cVar1 != '\x01') {
    *(undefined1 *)(unaff_x22 + 0x9a) = 1;
    if (*(long *)(unaff_x22 + 0x3b0) == 0) {
      plVar4 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4a0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102ec2080;
      plVar8 = *(long **)(unaff_x22 + 0x3c8);
      lVar11 = unaff_x22 + 800;
    }
    else {
      plVar4 = (long *)0x70;
      func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x3b8));
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x480) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102ec1f34;
      plVar8 = *(long **)(unaff_x22 + 0x3c8);
      lVar11 = unaff_x22 + 0x330;
    }
LAB_102ec1cf8:
    plVar4[5] = lVar11;
    plVar4[6] = (long)plVar8;
    lVar9 = *(long *)(*plVar8 + 0x50);
    plVar4[7] = lVar9;
    lVar11 = 0;
    __sSqMa(0,lVar9);
    plVar4[8] = lVar11;
    lVar11 = *(long *)(lVar11 + -8);
    plVar4[9] = lVar11;
    uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[10] = uVar5;
    lVar11 = *(long *)(lVar9 + -8);
    plVar4[0xb] = lVar11;
    uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar4[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
    return;
  }
  uVar5 = unaff_x22 + 0x348;
  FUN_102ec65cc();
  puVar3 = &UNK_1105e4f18;
  func_0x000107c613f8(&UNK_1105e4f18,puVar2,0,0);
  *puVar2 = 5;
  func_0x000107c61654();
  uVar13 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar11 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar11 + 0x40))(uVar14,uVar13,0,0,0x54,uVar7,lVar11);
  func_0x000107c61574();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c615e8(uVar15);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar11 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar11 + 0x40))(uVar12,uVar10,0,0,0x54,uVar7,lVar11);
  func_0x000107c61574();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar10);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(undefined **)(unaff_x22 + 0x4d0) = puVar3;
  *(undefined **)(unaff_x22 + 0x340) = puVar3;
  func_0x000107c614b0(puVar3);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar5,(undefined8 *)(unaff_x22 + 0x340),uVar7,&UNK_1105e4e50,0);
  if ((uVar5 & 1) == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar6 = 10;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar6;
    if ((uVar6 & 0xff) != 1) {
      *(undefined **)(unaff_x22 + 0x4d8) = puVar3;
      plVar8 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar4 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_102ec29e8;
      lVar11 = unaff_x22 + 0x250;
      goto LAB_102ec1cf8;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar3);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec1c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec1d1c; end: 102ec1f33;  */

void FUN_102ec1d1c(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar2 = unaff_x22 + 0x348;
  func_0x0001000834e4(unaff_x22 + 0x2a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar5);
  (**(code **)(lVar8 + 0x40))(uVar12,uVar11,0,0,0x54,uVar5,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c615e8(uVar13);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar5);
  (**(code **)(lVar8 + 0x40))(uVar10,uVar9,0,0,0x54,uVar5,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x340) = uVar7;
  func_0x000107c614b0(uVar7);
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar2,(undefined8 *)(unaff_x22 + 0x340),uVar5,&UNK_1105e4e50,0);
  if ((int)lVar2 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar4 = 10;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar4;
    if ((uVar4 & 0xff) != 1) {
      *(undefined8 *)(unaff_x22 + 0x4d8) = uVar7;
      plVar6 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar1 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_102ec29e8;
      plVar1[5] = unaff_x22 + 0x250;
      plVar1[6] = (long)plVar6;
      lVar8 = *(long *)(*plVar6 + 0x50);
      plVar1[7] = lVar8;
      lVar2 = 0;
      __sSqMa(0,lVar8);
      plVar1[8] = lVar2;
      lVar2 = *(long *)(lVar2 + -8);
      plVar1[9] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[10] = uVar3;
      lVar2 = *(long *)(lVar8 + -8);
      plVar1[0xb] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(uVar7);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec1ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec1f34; end: 102ec200b;  */

void FUN_102ec1f34(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *unaff_x22;
  uVar5 = *(undefined8 *)(lVar9 + 0x3b8);
  uVar4 = *(undefined8 *)(lVar9 + 0x3b0);
  uVar6 = *(undefined8 *)(lVar9 + 0x388);
  uVar7 = *(undefined8 *)(lVar9 + 0x370);
  lVar10 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar9 + 0x480));
  uVar8 = *(undefined8 *)(lVar9 + 0x330);
  *(undefined8 *)(lVar9 + 0x488) = uVar8;
  lVar11 = *(long *)(lVar9 + 0x338);
  func_0x000107c614f0();
  piVar3 = *(int **)(lVar11 + 0x48);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(lVar9 + 0x490) = plVar2;
  *plVar2 = lVar10;
  plVar2[1] = (long)FUN_102ec200c;
                    /* WARNING: Could not recover jumptable at 0x000102ec2008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (*(undefined8 *)(lVar9 + 0x368),uVar7,*(undefined8 *)(lVar9 + 0x448),
             *(undefined8 *)(lVar9 + 0x380),uVar6,*(undefined1 *)(lVar9 + 0x9a),uVar4,uVar5,uVar8,
             lVar11);
  return;
}



/* Entry: 102ec200c; end: 102ec207f;  */

void FUN_102ec200c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x2c8) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x2d0) = param_1;
  *(long *)(lVar2 + 0x2d8) = unaff_x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x488);
  *(long *)(lVar2 + 0x498) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x490));
  func_0x000107c615e8(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec21a8;
  }
  else {
    pcVar1 = FUN_102ec22cc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec2080; end: 102ec2133;  */

void FUN_102ec2080(void)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *unaff_x22;
  long lVar11;
  ulong uVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  long lVar14;
  ulong uVar15;
  
  lVar13 = *unaff_x22;
  uVar9 = *(undefined8 *)(lVar13 + 0x388);
  uVar8 = *(undefined8 *)(lVar13 + 0x370);
  lVar11 = *unaff_x22;
  lVar14 = lVar13;
  func_0x000107c615c0(*(undefined8 *)(lVar13 + 0x4a0));
  uVar10 = *(ulong *)(lVar13 + 800);
  *(ulong *)(lVar13 + 0x4a8) = uVar10;
  uVar12 = *(ulong *)(lVar13 + 0x328);
  func_0x000107c614f0();
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(lVar13 + 0x4b0) = plVar2;
  *plVar2 = lVar11;
  plVar2[1] = (long)FUN_102ec2134;
  uVar4 = *(undefined8 *)(lVar13 + 0x448);
  uVar5 = *(undefined8 *)(lVar13 + 0x380);
  uVar6 = *(undefined8 *)(lVar13 + 0x368);
  cVar1 = *(char *)(lVar13 + 0x9a);
  if (cVar1 == '\x02') {
    piVar7 = *(int **)(uVar12 + 0x10);
    plVar3 = (long *)(ulong)(uint)piVar7[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar7 + (long)piVar7);
    func_0x000107c615b8();
    plVar2[3] = (long)plVar3;
    *plVar3 = (long)plVar2;
    plVar3[1] = (long)&UNK_103bd6304;
    uVar15 = uVar10;
    uVar10 = uVar12;
  }
  else {
    piVar7 = *(int **)(uVar12 + 0x18);
    plVar3 = (long *)(ulong)(uint)piVar7[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar7 + (long)piVar7);
    func_0x000107c615b8();
    plVar2[2] = (long)plVar3;
    *plVar3 = (long)plVar2;
    plVar3[1] = (long)&UNK_103bd66f8;
    uVar15 = CONCAT71((int7)((ulong)lVar14 >> 8),cVar1) & 0xffffffffffffff01;
  }
                    /* WARNING: Could not recover jumptable at 0x000103bd6300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar6,uVar8,uVar4,0,0,uVar5,uVar9,0,0,uVar15,uVar10);
  return;
}



/* Entry: 102ec2134; end: 102ec21a7;  */

void FUN_102ec2134(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x2e0) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x2e8) = param_1;
  *(long *)(lVar2 + 0x2f0) = unaff_x20;
  uVar3 = *(undefined8 *)(lVar2 + 0x4a8);
  *(long *)(lVar2 + 0x4b8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x4b0));
  func_0x000107c615e8(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec2514;
  }
  else {
    pcVar1 = FUN_102ec262c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec21a8; end: 102ec22cb;  */

void FUN_102ec21a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  FUN_102ec65bc(*(undefined8 *)(unaff_x22 + 0x3b0),*(undefined8 *)(unaff_x22 + 0x3b8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar8 + 0x40))(uVar5,uVar4,0,0,0x54,uVar7,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar4);
  (**(code **)(lVar8 + 0x40))(uVar3,uVar2,0,0,0x54,uVar4,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x278);
                    /* WARNING: Could not recover jumptable at 0x000102ec22c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102ec22cc; end: 102ec2513;  */

void FUN_102ec22cc(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar4 = unaff_x22 + 0x348;
  puVar1 = *(undefined8 **)(unaff_x22 + 0x3b0);
  FUN_102ec65bc(puVar1,*(undefined8 *)(unaff_x22 + 0x3b8));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x498);
  func_0x000102ec3edc();
  puVar2 = &UNK_1105e4e50;
  func_0x000107c613f8(&UNK_1105e4e50,puVar1,0,0);
  *puVar1 = uVar7;
  func_0x000107c61654();
  uVar13 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar10 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar10 + 0x40))(uVar14,uVar13,0,0,0x54,uVar7,lVar10);
  func_0x000107c61574();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c615e8(uVar11);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar10 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar10 + 0x40))(uVar12,uVar9,0,0,0x54,uVar7,lVar10);
  func_0x000107c61574();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar9);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(undefined **)(unaff_x22 + 0x4d0) = puVar2;
  *(undefined **)(unaff_x22 + 0x340) = puVar2;
  func_0x000107c614b0(puVar2);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar4,(undefined8 *)(unaff_x22 + 0x340),uVar7,&UNK_1105e4e50,0);
  if ((int)lVar4 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar6 = 10;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar6;
    if ((uVar6 & 0xff) != 1) {
      *(undefined **)(unaff_x22 + 0x4d8) = puVar2;
      plVar8 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar3 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_102ec29e8;
      plVar3[5] = unaff_x22 + 0x250;
      plVar3[6] = (long)plVar8;
      lVar10 = *(long *)(*plVar8 + 0x50);
      plVar3[7] = lVar10;
      lVar4 = 0;
      __sSqMa(0,lVar10);
      plVar3[8] = lVar4;
      lVar4 = *(long *)(lVar4 + -8);
      plVar3[9] = lVar4;
      uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar3[10] = uVar5;
      lVar4 = *(long *)(lVar10 + -8);
      plVar3[0xb] = lVar4;
      uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar3[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar2);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec24b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec2514; end: 102ec262b;  */

void FUN_102ec2514(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar8 + 0x40))(uVar5,uVar4,0,0,0x54,uVar7,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar4);
  (**(code **)(lVar8 + 0x40))(uVar3,uVar2,0,0,0x54,uVar4,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x278);
                    /* WARNING: Could not recover jumptable at 0x000102ec2628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102ec262c; end: 102ec2867;  */

void FUN_102ec262c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = unaff_x22 + 0x348;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x4b8);
  func_0x000102ec3edc();
  puVar1 = &UNK_1105e4e50;
  func_0x000107c613f8(&UNK_1105e4e50,param_1,0,0);
  *param_1 = uVar6;
  func_0x000107c61654();
  uVar12 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar9 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar6);
  (**(code **)(lVar9 + 0x40))(uVar13,uVar12,0,0,0x54,uVar6,lVar9);
  func_0x000107c61574();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c615e8(uVar10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar9 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar6);
  (**(code **)(lVar9 + 0x40))(uVar11,uVar8,0,0,0x54,uVar6,lVar9);
  func_0x000107c61574();
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar8);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(undefined **)(unaff_x22 + 0x4d0) = puVar1;
  *(undefined **)(unaff_x22 + 0x340) = puVar1;
  func_0x000107c614b0(puVar1);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar3,(undefined8 *)(unaff_x22 + 0x340),uVar6,&UNK_1105e4e50,0);
  if ((int)lVar3 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar5 = 10;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar5;
    if ((uVar5 & 0xff) != 1) {
      *(undefined **)(unaff_x22 + 0x4d8) = puVar1;
      plVar7 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ec29e8;
      plVar2[5] = unaff_x22 + 0x250;
      plVar2[6] = (long)plVar7;
      lVar9 = *(long *)(*plVar7 + 0x50);
      plVar2[7] = lVar9;
      lVar3 = 0;
      __sSqMa(0,lVar9);
      plVar2[8] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar2[9] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[10] = uVar4;
      lVar3 = *(long *)(lVar9 + -8);
      plVar2[0xb] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar1);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec280c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec2868; end: 102ec28cf;  */

void FUN_102ec2868(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x2f8) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x300) = param_1;
  *(long *)(lVar2 + 0x308) = unaff_x20;
  *(long *)(lVar2 + 0x4c8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x4c0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102ec28d0;
  }
  else {
    pcVar1 = FUN_102ec3214;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102ec28d0; end: 102ec29e7;  */

void FUN_102ec28d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar8 + 0x40))(uVar5,uVar4,0,0,0x54,uVar7,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar4);
  (**(code **)(lVar8 + 0x40))(uVar3,uVar2,0,0,0x54,uVar4,lVar8);
  func_0x000107c61574();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x0001000834e4(unaff_x22 + 0x278);
                    /* WARNING: Could not recover jumptable at 0x000102ec29e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 102ec29e8; end: 102ec2a2f;  */

void FUN_102ec29e8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x4e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec2a30,0,0);
  return;
}



/* Entry: 102ec2a30; end: 102ec2b83;  */

void FUN_102ec2a30(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x9b);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x268);
  lVar3 = *(long *)(unaff_x22 + 0x270);
  func_0x0001000a8868(unaff_x22 + 0x250,uVar2);
  func_0x000107c61434(uVar4);
  func_0x000107c6142c(0);
  *(undefined1 *)(unaff_x22 + 0x130) = 0;
  *(undefined8 *)(unaff_x22 + 0x138) = 1;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x148) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x150) = 0;
  *(undefined8 *)(unaff_x22 + 0x158) = 0;
  *(undefined8 *)(unaff_x22 + 0x160) = 0;
  *(undefined1 *)(unaff_x22 + 0x168) = 1;
  *(undefined8 *)(unaff_x22 + 0x170) = 0;
  *(undefined2 *)(unaff_x22 + 0x178) = 1;
  *(undefined8 *)(unaff_x22 + 0x188) = 0;
  *(undefined8 *)(unaff_x22 + 0x180) = 0;
  *(undefined8 *)(unaff_x22 + 0x198) = 0;
  *(undefined8 *)(unaff_x22 + 400) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a0) = 0;
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
  *(undefined1 *)(unaff_x22 + 0x1b8) = 1;
  *(undefined1 *)(unaff_x22 + 0xa0) = 0;
  *(undefined8 *)(unaff_x22 + 0xa8) = 1;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0;
  *(undefined8 *)(unaff_x22 + 200) = 0;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  *(undefined1 *)(unaff_x22 + 0xd8) = 1;
  *(undefined8 *)(unaff_x22 + 0xe0) = 0;
  *(undefined2 *)(unaff_x22 + 0xe8) = 1;
  *(undefined8 *)(unaff_x22 + 0xf8) = 0;
  *(undefined8 *)(unaff_x22 + 0xf0) = 0;
  *(undefined8 *)(unaff_x22 + 0x108) = 0;
  *(undefined8 *)(unaff_x22 + 0x100) = 0;
  *(undefined8 *)(unaff_x22 + 0x118) = 0;
  *(undefined8 *)(unaff_x22 + 0x110) = 0;
  *(undefined8 *)(unaff_x22 + 0x120) = 0;
  *(undefined1 *)(unaff_x22 + 0x128) = 1;
  func_0x000101df658c(unaff_x22 + 0x130,unaff_x22 + 0x1c0);
  func_0x000101df65c8((undefined1 *)(unaff_x22 + 0xa0));
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
  *(undefined1 *)(unaff_x22 + 0x98) = uVar1;
  (**(code **)(lVar3 + 8))(9,unaff_x22 + 0x10,uVar2,lVar3);
  func_0x000101df65c8(unaff_x22 + 0x10);
  func_0x0001000834e4(unaff_x22 + 0x250);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102ec2b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec2b84; end: 102ec2ce3;  */

void FUN_102ec2b84(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  lVar3 = unaff_x22 + 0x348;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3f0);
  func_0x000100fb85f0();
  puVar1 = &UNK_11072cd20;
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar9;
  func_0x000107c61170(uVar6);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(undefined **)(unaff_x22 + 0x4d0) = puVar1;
  *(undefined **)(unaff_x22 + 0x340) = puVar1;
  func_0x000107c614b0(puVar1);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar3,(undefined8 *)(unaff_x22 + 0x340),uVar6,&UNK_1105e4e50,0);
  if ((int)lVar3 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar5 = 2;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar5;
    if ((uVar5 & 0xff) != 1) {
      *(undefined **)(unaff_x22 + 0x4d8) = puVar1;
      plVar7 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ec29e8;
      plVar2[5] = unaff_x22 + 0x250;
      plVar2[6] = (long)plVar7;
      lVar8 = *(long *)(*plVar7 + 0x50);
      plVar2[7] = lVar8;
      lVar3 = 0;
      __sSqMa(0,lVar8);
      plVar2[8] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar2[9] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[10] = uVar4;
      lVar3 = *(long *)(lVar8 + -8);
      plVar2[0xb] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar1);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec2c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec2ce4; end: 102ec2ea3;  */

void FUN_102ec2ce4(void)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar3 = unaff_x22 + 0x348;
  puVar6 = *(undefined8 **)(unaff_x22 + 0x420);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x360);
  puVar1 = &UNK_1107a6f08;
  func_0x000107c613f8(&UNK_1107a6f08,puVar6,0,0);
  *puVar6 = uVar7;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar11 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar7);
  (**(code **)(lVar11 + 0x40))(uVar10,uVar9,0,0,0x54,uVar7,lVar11);
  func_0x000107c61574();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(undefined **)(unaff_x22 + 0x4d0) = puVar1;
  *(undefined **)(unaff_x22 + 0x340) = puVar1;
  func_0x000107c614b0(puVar1);
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar3,(undefined8 *)(unaff_x22 + 0x340),uVar7,&UNK_1105e4e50,0);
  if ((int)lVar3 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar5 = 1;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar5;
    if ((uVar5 & 0xff) != 1) {
      *(undefined **)(unaff_x22 + 0x4d8) = puVar1;
      plVar8 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ec29e8;
      plVar2[5] = unaff_x22 + 0x250;
      plVar2[6] = (long)plVar8;
      lVar11 = *(long *)(*plVar8 + 0x50);
      plVar2[7] = lVar11;
      lVar3 = 0;
      __sSqMa(0,lVar11);
      plVar2[8] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar2[9] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[10] = uVar4;
      lVar3 = *(long *)(lVar11 + -8);
      plVar2[0xb] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar1);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec2e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec2ea4; end: 102ec3037;  */

void FUN_102ec2ea4(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar2 = unaff_x22 + 0x348;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar9 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar8);
  (**(code **)(lVar9 + 0x40))(uVar7,uVar6,0,0,0x54,uVar8,lVar9);
  func_0x000107c61574();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x0001000834e4(unaff_x22 + 0x278);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x440);
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x340) = uVar7;
  func_0x000107c614b0(uVar7);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar2,(undefined8 *)(unaff_x22 + 0x340),uVar6,&UNK_1105e4e50,0);
  if ((int)lVar2 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar4 = 1;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar4;
    if ((uVar4 & 0xff) != 1) {
      *(undefined8 *)(unaff_x22 + 0x4d8) = uVar7;
      plVar5 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar1 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_102ec29e8;
      plVar1[5] = unaff_x22 + 0x250;
      plVar1[6] = (long)plVar5;
      lVar9 = *(long *)(*plVar5 + 0x50);
      plVar1[7] = lVar9;
      lVar2 = 0;
      __sSqMa(0,lVar9);
      plVar1[8] = lVar2;
      lVar2 = *(long *)(lVar2 + -8);
      plVar1[9] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[10] = uVar3;
      lVar2 = *(long *)(lVar9 + -8);
      plVar1[0xb] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(uVar7);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec2fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3038; end: 102ec3213;  */

void FUN_102ec3038(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar3 = unaff_x22 + 0x348;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3f0);
  func_0x000100fb85f0();
  puVar1 = &UNK_11072cd20;
  func_0x000107c613f8(&UNK_11072cd20,param_1,0,0);
  *param_1 = uVar11;
  func_0x000107c61170(uVar6);
  func_0x000107c615e8(uVar8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar12 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar6);
  (**(code **)(lVar12 + 0x40))(uVar10,uVar9,0,0,0x54,uVar6,lVar12);
  func_0x000107c61574();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x0001000834e4(unaff_x22 + 0x278);
  *(undefined **)(unaff_x22 + 0x4d0) = puVar1;
  *(undefined **)(unaff_x22 + 0x340) = puVar1;
  func_0x000107c614b0(puVar1);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar3,(undefined8 *)(unaff_x22 + 0x340),uVar6,&UNK_1105e4e50,0);
  if ((int)lVar3 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar5 = 2;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar5;
    if ((uVar5 & 0xff) != 1) {
      *(undefined **)(unaff_x22 + 0x4d8) = puVar1;
      plVar7 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar2 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_102ec29e8;
      plVar2[5] = unaff_x22 + 0x250;
      plVar2[6] = (long)plVar7;
      lVar12 = *(long *)(*plVar7 + 0x50);
      plVar2[7] = lVar12;
      lVar3 = 0;
      __sSqMa(0,lVar12);
      plVar2[8] = lVar3;
      lVar3 = *(long *)(lVar3 + -8);
      plVar2[9] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[10] = uVar4;
      lVar3 = *(long *)(lVar12 + -8);
      plVar2[0xb] = lVar3;
      uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar2[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(puVar1);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec31b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3214; end: 102ec341f;  */

void FUN_102ec3214(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = unaff_x22 + 0x348;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar5 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar12);
  (**(code **)(lVar5 + 0x40))(uVar10,uVar9,0,0,0x54,uVar12,lVar5);
  func_0x000107c61574();
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(uVar11);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar5 = *(long *)(unaff_x22 + 0x298);
  func_0x0001000a8868(unaff_x22 + 0x278,uVar9);
  (**(code **)(lVar5 + 0x40))(uVar8,uVar7,0,0,0x54,uVar9,lVar5);
  func_0x000107c61574();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x0001000834e4(unaff_x22 + 0x278);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x4c8);
  *(undefined8 *)(unaff_x22 + 0x4d0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x340) = uVar7;
  func_0x000107c614b0(uVar7);
  uVar9 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar2,(undefined8 *)(unaff_x22 + 0x340),uVar9,&UNK_1105e4e50,0);
  if ((int)lVar2 == 0) {
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
    uVar4 = 10;
    FUN_102ec64a0();
    *(char *)(unaff_x22 + 0x9b) = (char)uVar4;
    if ((uVar4 & 0xff) != 1) {
      *(undefined8 *)(unaff_x22 + 0x4d8) = uVar7;
      plVar6 = *(long **)(*(long *)(unaff_x22 + 0x3c0) + 0x38);
      plVar1 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x4e0) = plVar1;
      *plVar1 = unaff_x22;
      plVar1[1] = (long)FUN_102ec29e8;
      plVar1[5] = unaff_x22 + 0x250;
      plVar1[6] = (long)plVar6;
      lVar5 = *(long *)(*plVar6 + 0x50);
      plVar1[7] = lVar5;
      lVar2 = 0;
      __sSqMa(0,lVar5);
      plVar1[8] = lVar2;
      lVar2 = *(long *)(lVar2 + -8);
      plVar1[9] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[10] = uVar3;
      lVar2 = *(long *)(lVar5 + -8);
      plVar1[0xb] = lVar2;
      uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      plVar1[0xc] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
      return;
    }
    func_0x000107c61654();
  }
  else {
    func_0x000107c614ac(uVar7);
    func_0x000107c61654();
    func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x340));
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec33c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3420; end: 102ec3443;  */

void FUN_102ec3420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_7;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec3444,0,0);
  return;
}



/* Entry: 102ec3444; end: 102ec356f;  */

/* WARNING: Removing unreachable block (ram,0x000102ec3468) */

void FUN_102ec3444(void)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  
  func_0x000107c5fd64();
  if (*(long *)(unaff_x22 + 0x58) - 1U < 2) {
    if (*(long *)(unaff_x22 + 0x60) == 0) {
      plVar7 = *(long **)(*(long *)(unaff_x22 + 0x70) + 0x10);
      plVar6 = (long *)0x70;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xa8) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_102ec382c;
      lVar2 = unaff_x22 + 0x10;
    }
    else {
      plVar7 = *(long **)(*(long *)(unaff_x22 + 0x70) + 0x10);
      plVar6 = (long *)0x70;
      func_0x000107c6157c(*(undefined8 *)(unaff_x22 + 0x68));
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x88) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_102ec36d8;
      lVar2 = unaff_x22 + 0x20;
    }
    plVar6[5] = lVar2;
    plVar6[6] = (long)plVar7;
    lVar9 = *(long *)(*plVar7 + 0x50);
    plVar6[7] = lVar9;
    lVar2 = 0;
    __sSqMa(0,lVar9);
    plVar6[8] = lVar2;
    lVar2 = *(long *)(lVar2 + -8);
    plVar6[9] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[10] = uVar3;
    lVar2 = *(long *)(lVar9 + -8);
    plVar6[0xb] = lVar2;
    uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar6[0xc] = uVar3;
    pcVar4 = (code *)&UNK_104875f90;
  }
  else {
    uVar1 = *(undefined4 *)(unaff_x22 + 0x50);
    plVar6 = (long *)0x220;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x78) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102ec3570;
    lVar8 = *(long *)(unaff_x22 + 0x70);
    lVar2 = *(long *)(unaff_x22 + 0x40);
    lVar9 = *(long *)(unaff_x22 + 0x48);
    lVar5 = *(long *)(unaff_x22 + 0x38);
    plVar6[0x39] = *(long *)(unaff_x22 + 0x58);
    plVar6[0x3a] = lVar8;
    *(byte *)((long)plVar6 + 0x191) = (byte)uVar1 & 1;
    plVar6[0x37] = lVar2;
    plVar6[0x38] = lVar9;
    plVar6[0x36] = lVar5;
    pcVar4 = FUN_102ec3f50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 102ec3570; end: 102ec35d7;  */

void FUN_102ec3570(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000102ec35b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec35d8,0,0);
  return;
}



/* Entry: 102ec35d8; end: 102ec36d7;  */

void FUN_102ec35d8(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x22;
  
  puVar4 = *(undefined1 **)(unaff_x22 + 0x80);
  if (*(long *)(puVar4 + 0x10) == 0) {
    func_0x000107c6142c();
    FUN_102ec65cc();
    func_0x000107c613f8(&UNK_1105e4f18,puVar4,0,0);
    *puVar4 = 4;
    func_0x000107c61654();
  }
  else {
    uVar3 = *(undefined8 *)(puVar4 + 0x20);
    cVar1 = puVar4[0x28];
    FUN_102ec660c(uVar3,cVar1);
    func_0x000107c6142c(puVar4);
    if (cVar1 != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000102ec36d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar3);
      return;
    }
    *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x30,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102ec36b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec36d8; end: 102ec37b7;  */

void FUN_102ec36d8(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar6 = *unaff_x22;
  lVar7 = *(long *)(lVar6 + 0x58);
  uVar5 = *(undefined8 *)(lVar6 + 0x40);
  lVar8 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x88));
  lVar2 = *(long *)(lVar6 + 0x28);
  *(undefined8 *)(lVar6 + 0x90) = *(undefined8 *)(lVar6 + 0x20);
  func_0x000107c614f0();
  piVar4 = *(int **)(lVar2 + 0x40);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(lVar6 + 0x98) = plVar3;
  *plVar3 = lVar8;
  plVar3[1] = (long)FUN_102ec37b8;
                    /* WARNING: Could not recover jumptable at 0x000102ec37b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(lVar6 + 0x38),uVar5,*(undefined8 *)(lVar6 + 0x48),0,0,0,0,lVar7 == 2,0)
  ;
  return;
}



/* Entry: 102ec37b8; end: 102ec382b;  */

void FUN_102ec37b8(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x90);
  *(long *)(lVar3 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x98));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 200) = param_1;
    pcVar2 = FUN_102ec3960;
  }
  else {
    pcVar2 = FUN_102ec3998;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102ec382c; end: 102ec38eb;  */

void FUN_102ec382c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  long *unaff_x22;
  long lVar11;
  long lVar12;
  undefined4 unaff_w29;
  ulong uVar13;
  
  lVar10 = *unaff_x22;
  lVar11 = *(long *)(lVar10 + 0x58);
  uVar9 = *(undefined8 *)(lVar10 + 0x40);
  lVar12 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar10 + 0xa8));
  uVar3 = *(undefined8 *)(lVar10 + 0x10);
  lVar2 = *(long *)(lVar10 + 0x18);
  *(undefined8 *)(lVar10 + 0xb0) = uVar3;
  func_0x000107c614f0();
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(lVar10 + 0xb8) = plVar4;
  *plVar4 = lVar12;
  plVar4[1] = (long)FUN_102ec38ec;
  uVar6 = *(undefined8 *)(lVar10 + 0x48);
  uVar7 = *(undefined8 *)(lVar10 + 0x38);
  uVar13 = (ulong)CONCAT14(lVar11 == 2,unaff_w29);
  piVar8 = *(int **)(lVar2 + 8);
  iVar1 = *piVar8;
  plVar5 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  plVar4[2] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)&UNK_103bd611c;
                    /* WARNING: Could not recover jumptable at 0x000103bd6118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (uVar7,uVar9,uVar6,0,0,0,0,(int)(uVar13 >> 0x20),uVar13 & 0xffffffffff000000,0,0,0,uVar3
             ,lVar2);
  return;
}



/* Entry: 102ec38ec; end: 102ec395f;  */

void FUN_102ec38ec(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb0);
  *(long *)(lVar3 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb8));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0xd0) = param_1;
    pcVar2 = FUN_102ec3a00;
  }
  else {
    pcVar2 = FUN_102ec3a10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102ec3960; end: 102ec3997;  */

void FUN_102ec3960(void)

{
  long unaff_x22;
  
  FUN_102ec65bc(*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x000102ec3994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 200));
  return;
}



/* Entry: 102ec3998; end: 102ec39ff;  */

void FUN_102ec3998(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x60);
  FUN_102ec65bc(puVar1,*(undefined8 *)(unaff_x22 + 0x68));
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000102ec3edc();
  func_0x000107c613f8(&UNK_1105e4e50,puVar1,0,0);
  *puVar1 = uVar2;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102ec39fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3a00; end: 102ec3a0f;  */

void FUN_102ec3a00(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000102ec3a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xd0));
  return;
}



/* Entry: 102ec3a10; end: 102ec3a6f;  */

void FUN_102ec3a10(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000102ec3edc();
  func_0x000107c613f8(&UNK_1105e4e50,param_1,0,0);
  *param_1 = uVar1;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000102ec3a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3a70; end: 102ec3a87;  */

void FUN_102ec3a70(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec3a88,0,0);
  return;
}



/* Entry: 102ec3a88; end: 102ec3b63;  */

/* WARNING: Removing unreachable block (ram,0x000102ec3ac0) */
/* WARNING: Removing unreachable block (ram,0x000102ec3ac8) */

void FUN_102ec3a88(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long unaff_x22;
  
  FUN_102eb414c();
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  func_0x000107c5fd64();
  plVar7 = *(long **)(*(long *)(unaff_x22 + 0x30) + 0x20);
  uVar1 = 0x112f27440;
  func_0x0001000285a8(0x112f27440,&UNK_10db62ae0);
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  plVar5 = plVar2;
  func_0x000100faa6a0();
  *(long **)(unaff_x22 + 0x48) = plVar5;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102ec3b64;
  plVar2[0xb] = (long)plVar5;
  plVar2[0xc] = unaff_x22 + 0x20;
  plVar2[9] = unaff_x22 + 0x18;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = unaff_x22 + 0x10;
  lVar6 = *plVar7;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar3 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar3;
  lVar3 = *(long *)(lVar6 + 0x50);
  plVar2[0xf] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x10] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar4;
  plVar5 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar5;
  *plVar5 = (long)plVar2;
  plVar5[1] = (long)&UNK_104876614;
  plVar5[5] = uVar4;
  plVar5[6] = (long)plVar7;
  lVar6 = *(long *)(*plVar7 + 0x50);
  plVar5[7] = lVar6;
  lVar3 = 0;
  __sSqMa(0,lVar6);
  plVar5[8] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[9] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[10] = uVar4;
  lVar3 = *(long *)(lVar6 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 102ec3b64; end: 102ec3c13;  */

void FUN_102ec3b64(void)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x40));
  if (unaff_x20 == 0) {
    lVar4 = *(long *)(lVar5 + 0x10);
    *(long *)(lVar5 + 0x50) = lVar4;
    func_0x000107c614f0(lVar4);
    plVar2 = (long *)0x20;
    func_0x000107c615b8();
    *(long **)(lVar5 + 0x58) = plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)FUN_102ec3c14;
    lVar5 = *(long *)(lVar5 + 0x38);
    plVar1 = (long *)0x100;
    func_0x000107c615b8();
    plVar2[2] = (long)plVar1;
    *plVar1 = (long)plVar2;
    plVar1[1] = (long)FUN_102eb4b98;
    plVar1[0x13] = 0;
    plVar1[0x14] = lVar4;
    plVar1[0x11] = 0;
    plVar1[0x12] = 0;
    plVar1[0xf] = lVar5;
    plVar1[0x10] = 0x20;
    pcVar3 = FUN_102eb4270;
  }
  else {
    pcVar3 = FUN_102ec3cc0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,0,0);
  return;
}



/* Entry: 102ec3c14; end: 102ec3c8b;  */

void FUN_102ec3c14(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x58));
  func_0x000107c615e8(uVar1);
  if (unaff_x20 == 0) {
    func_0x000107c615e8(param_1);
    pcVar2 = FUN_102ec3c8c;
  }
  else {
    pcVar2 = FUN_102ec3d24;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 102ec3c8c; end: 102ec3cbf;  */

void FUN_102ec3c8c(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000102ec3cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3cc0; end: 102ec3d23;  */

void FUN_102ec3cc0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  func_0x000107c613f8(&UNK_1107a6f08,puVar1,0,0);
  *puVar1 = uVar3;
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102ec3d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3d24; end: 102ec3d57;  */

void FUN_102ec3d24(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000102ec3d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102ec3d58; end: 102ec3e07;  */

void FUN_102ec3d58(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,long param_8,long param_9,long param_10,long param_11)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x4f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ec3e08;
  plVar1[0x78] = lVar2;
  plVar1[0x77] = param_11;
  plVar1[0x76] = param_10;
  plVar1[0x75] = param_9;
  plVar1[0x74] = param_8;
  plVar1[0x73] = param_7;
  plVar1[0x72] = param_6;
  plVar1[0x71] = param_5;
  plVar1[0x70] = param_4;
  plVar1[0x6f] = param_3;
  plVar1[0x6e] = param_2;
  plVar1[0x6d] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec0a40,0,0);
  return;
}



/* Entry: 102ec3e08; end: 102ec3e4f;  */

void FUN_102ec3e08(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ec3e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ec3e50; end: 102ec3e9f;  */

void FUN_102ec3e50(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102ec3ea0;
  plVar1[5] = param_1;
  plVar1[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102ec3a88,0,0);
  return;
}



/* Entry: 102ec3ea0; end: 102ec3f1b;  */

void FUN_102ec3ea0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ec3ed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102ec3f1c; end: 102ec3f4f;  */

void FUN_102ec3f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}


