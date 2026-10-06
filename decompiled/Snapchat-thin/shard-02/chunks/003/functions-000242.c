/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c27708; end: 101c277b3;  */

void FUN_101c27708(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  FUN_101c28910();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
  puVar6 = PTR___s10Foundation4DataVN_110350ae0;
  pcVar8 = FUN_101c28b30;
  func_0x00010488bc98(FUN_101c28b30,unaff_x22 + 0x10,PTR___s10Foundation4DataVN_110350ae0);
  *(code **)(unaff_x22 + 0xa8) = pcVar8;
  plVar9 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_101c277b4;
  plVar9[7] = (long)pcVar8;
  plVar9[8] = (long)puVar6;
  plVar9[6] = unaff_x22 + 0x50;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488c4ec,0,0);
  return;
}



/* Entry: 101c277b4; end: 101c277fb;  */

void FUN_101c277b4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c277fc,0,0);
  return;
}



/* Entry: 101c277fc; end: 101c278cb;  */

void FUN_101c277fc(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  if (*(char *)(unaff_x22 + 0x60) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x68) = uVar3;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x68,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
    func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000101c27890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101c278c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar4);
  return;
}



/* Entry: 101c278cc; end: 101c278ef;  */

void FUN_101c278cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c278f0,0,0);
  return;
}



/* Entry: 101c278f0; end: 101c279f7;  */

void FUN_101c278f0(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  int *piVar6;
  uint uVar7;
  long unaff_x22;
  
  func_0x0001058e90a8();
  if ((param_1 & 1) == 0) {
    uVar4 = (uint)(*(ulong *)(unaff_x22 + 0x40) >> 0x20);
    uVar7 = uVar4 >> 0x1e;
    if (uVar4 >> 0x1e < 2) {
      if (uVar7 == 0) {
        if ((*(ulong *)(unaff_x22 + 0x40) & 0xff000000000000) != 0) {
LAB_101c27978:
          func_0x000100083b20(unaff_x22 + 0x10);
          uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
          lVar3 = *(long *)(unaff_x22 + 0x30);
          func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
          piVar6 = *(int **)(lVar3 + 0x10);
          iVar1 = *piVar6;
          plVar5 = (long *)(ulong)(uint)piVar6[1];
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x68) = plVar5;
          *plVar5 = unaff_x22;
          plVar5[1] = (long)FUN_101c279f8;
                    /* WARNING: Could not recover jumptable at 0x000101c279f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar6))
                    (*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x38),
                     *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
                     *(undefined8 *)(unaff_x22 + 0x50),uVar2,lVar3);
          return;
        }
      }
      else if ((long)(int)*(long *)(unaff_x22 + 0x38) != *(long *)(unaff_x22 + 0x38) >> 0x20)
      goto LAB_101c27978;
    }
    else if ((uVar7 == 2) &&
            (*(long *)(*(long *)(unaff_x22 + 0x38) + 0x10) !=
             *(long *)(*(long *)(unaff_x22 + 0x38) + 0x18))) goto LAB_101c27978;
  }
                    /* WARNING: Could not recover jumptable at 0x000101c27924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c279f8; end: 101c27a7f;  */

void FUN_101c279f8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101c28c04,0,0);
  return;
}



/* Entry: 101c27a80; end: 101c27a9b;  */

void FUN_101c27a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c27a9c,0,0);
  return;
}



/* Entry: 101c27a9c; end: 101c27b53;  */

void FUN_101c27a9c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001058e90a8();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c27ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c27b54;
                    /* WARNING: Could not recover jumptable at 0x000101c27b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (0,0,0xc000000000000000,*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x40),uVar2,lVar3);
  return;
}



/* Entry: 101c27b54; end: 101c27b9b;  */

void FUN_101c27b54(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c28c00,0,0);
  return;
}



/* Entry: 101c27b9c; end: 101c27ba7;  */

void FUN_101c27b9c(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101c28bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c27ba8; end: 101c27bdb;  */

undefined8 FUN_101c27ba8(void)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  return uStack_28;
}



/* Entry: 101c27bdc; end: 101c27c53;  */

void FUN_101c27bdc(long param_1,long param_2,long param_3,long param_4)

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
  plVar1[1] = (long)FUN_101c27c54;
  plVar1[5] = param_4;
  plVar1[6] = lVar2;
  plVar1[3] = param_2;
  plVar1[4] = param_3;
  plVar1[2] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c270d8,0,0);
  return;
}



/* Entry: 101c27c54; end: 101c27cab;  */

void FUN_101c27c54(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c27ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c27cac; end: 101c27ccb;  */

void FUN_101c27cac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c27ccc,0,0);
  return;
}



/* Entry: 101c27ccc; end: 101c27d83;  */

void FUN_101c27ccc(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x0001058e90a8();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c27d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101c27d84;
                    /* WARNING: Could not recover jumptable at 0x000101c27d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (0,0,0xc000000000000000,*(undefined8 *)(unaff_x22 + 0x38),
             *(undefined8 *)(unaff_x22 + 0x40),uVar2,lVar3);
  return;
}



/* Entry: 101c27d84; end: 101c27dfb;  */

void FUN_101c27d84(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101c27dcc,0,0);
  return;
}



/* Entry: 101c27dfc; end: 101c27e0b;  */

undefined1  [16] FUN_101c27dfc(void)

{
  return ZEXT816(0x110458290);
}



/* Entry: 101c27e0c; end: 101c27e2b;  */

void FUN_101c27e0c(void)

{
  func_0x000107c61168(&PTR_PTR_112e0a0c8);
  return;
}



/* Entry: 101c27e2c; end: 101c27e43;  */

void FUN_101c27e2c(long param_1)

{
  if (0xfffffffe < *(ulong *)(param_1 + 8)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 101c27e44; end: 101c27fa7;  */

undefined8 * FUN_101c27e44(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 101c27fa8; end: 101c280a7;  */

int FUN_101c27fa8(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (2 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -1;
  }
  return iVar1;
}



/* Entry: 101c280a8; end: 101c281c3;  */

void FUN_101c280a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar1 = puStack_80;
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5ee20(param_5,param_6);
  uStack_60 = 0x101c28b40;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101376680;
  puStack_68 = &UNK_110458330;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c5d1d8(puVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 101c281c4; end: 101c2832b;  */

void FUN_101c281c4(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  if (param_3 != (undefined8 *)0x0) {
    func_0x000107c61174();
    puVar2 = param_3;
    func_0x000107c4cd90();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    func_0x000101c27a40();
    puVar4 = (undefined8 *)&UNK_110458320;
    func_0x000107c613f8(&UNK_110458320,puVar2,0,0);
    *puVar2 = puVar3;
    puVar2[1] = param_2;
    uStack_50 = 0;
    uStack_48 = 1;
    puStack_58 = puVar4;
    func_0x00010488e5d4(&puStack_58);
    func_0x000107c61170(param_3);
    goto LAB_101c28308;
  }
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_2 >> 0x20);
    uVar5 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar5 == 2) {
        if (param_1[2] != param_1[3]) goto LAB_101c282e4;
      }
      else {
LAB_101c28294:
        func_0x0001000b44c0();
      }
      goto LAB_101c282ac;
    }
    if (uVar5 == 0) {
      if ((param_2 & 0xff000000000000) == 0) goto LAB_101c28294;
    }
    else {
      if ((long)(int)param_1 == (long)param_1 >> 0x20) goto LAB_101c282ac;
LAB_101c282e4:
      func_0x000100de78a0();
    }
    uStack_48 = 0;
    puStack_58 = param_1;
    uStack_50 = param_2;
  }
  else {
LAB_101c282ac:
    func_0x000101c27a40();
    puVar4 = (undefined8 *)&UNK_110458320;
    func_0x000107c613f8(&UNK_110458320,param_1,0,0);
    param_1[1] = 1;
    *param_1 = 0;
    uStack_50 = 0;
    uStack_48 = 1;
    puStack_58 = puVar4;
  }
  func_0x00010488e5d4(&puStack_58);
LAB_101c28308:
  func_0x000101acc20c(puStack_58,uStack_50,uStack_48);
  return;
}



/* Entry: 101c2832c; end: 101c285ab;  */

undefined * FUN_101c2832c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [32];
  ulong uStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar14 != (undefined *)0x0) {
    uVar7 = 0x112d38330;
    func_0x0001000285a8(0x112d38330,&UNK_10d91d920);
    func_0x000107c60498(puVar14,uVar7);
    puVar8 = puVar14;
  }
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434(param_1);
  lVar16 = 0;
  while( true ) {
    while (uVar15 != 0) {
      uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) | lVar16 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uVar3 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar3;
      uStack_88 = uVar2;
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + uVar11 * 0x20,auStack_80);
      func_0x0001000bb420(auStack_80,auStack_b0);
      func_0x000107c61434(uVar2);
      puVar10 = &uStack_c0;
      func_0x000107c6147c(puVar10,auStack_b0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      uVar4 = uStack_b8;
      uVar7 = uStack_c0;
      if ((int)puVar10 == 0) {
        FUN_101c28b64(&uStack_90,0x112da9f08,&UNK_10da55920);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(param_1);
        return (undefined *)0x0;
      }
      uVar15 = uVar15 - 1 & uVar15;
      func_0x000107c61434(uVar2);
      FUN_101c28b64(&uStack_90,0x112da9f08,&UNK_10da55920);
      uVar11 = uVar3;
      uVar12 = uVar2;
      func_0x000100029284();
      if ((uVar12 & 1) == 0) {
        if (*(ulong *)(puVar8 + 0x18) <= *(ulong *)(puVar8 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c285a8);
          (*pcVar5)();
        }
        uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar8 + uVar12 + 0x40) =
             *(ulong *)(puVar8 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        puVar10 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar11 * 0x10);
        *puVar10 = uVar7;
        puVar10[1] = uVar4;
        if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101c285ac);
          (*pcVar5)();
        }
        *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      }
      else {
        puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar11 * 0x10);
        uVar12 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        func_0x000107c6142c(uVar12);
        puVar10 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar11 * 0x10);
        uVar9 = puVar10[1];
        *puVar10 = uVar7;
        puVar10[1] = uVar4;
        func_0x000107c6142c(uVar9);
      }
    }
    bVar6 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101c285a4);
      (*pcVar5)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar16) break;
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  func_0x000107c61574(param_1);
  return puVar8;
}



/* Entry: 101c285ac; end: 101c28677;  */

undefined1  [16] FUN_101c285ac(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    auVar3._8_8_ = 0x800000010efb85d0;
    auVar3._0_8_ = 0xd000000000000012;
    return auVar3;
  }
  if (param_2 == 1) {
    auVar2._8_8_ = 0x800000010f004340;
    auVar2._0_8_ = 0xd000000000000013;
    return auVar2;
  }
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(param_1,param_2);
  auVar1._8_8_ = 0xee00203a6572756c;
  auVar1._0_8_ = 0x6961662043505247;
  return auVar1;
}



/* Entry: 101c28678; end: 101c2869b;  */

undefined1  [16] FUN_101c28678(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  if (lVar2 == 0) {
    auVar5._8_8_ = 0x800000010efb85d0;
    auVar5._0_8_ = 0xd000000000000012;
    return auVar5;
  }
  if (lVar2 == 1) {
    auVar4._8_8_ = 0x800000010f004340;
    auVar4._0_8_ = 0xd000000000000013;
    return auVar4;
  }
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar1,lVar2);
  auVar3._8_8_ = 0xee00203a6572756c;
  auVar3._0_8_ = 0x6961662043505247;
  return auVar3;
}



/* Entry: 101c2869c; end: 101c2890f;  */

void FUN_101c2869c(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      uStack_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      uStack_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar4);
      (*param_2)(&uStack_a0,&uStack_80);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar3);
      uVar4 = uStack_88;
      uVar3 = uStack_90;
      uVar5 = uStack_98;
      uVar11 = uStack_a0;
      lVar15 = *param_5;
      uVar9 = uStack_a0;
      uVar10 = uStack_98;
      func_0x000100029284();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101c288fc);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        func_0x0001001833c8(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        func_0x000100029284();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101c28910);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        func_0x000100184498();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101c28900);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        func_0x000107c6142c(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x101c288f8);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101c28910; end: 101c28b2f;  */

undefined * FUN_101c28910(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_58;
  
  puVar2 = param_1;
  func_0x0001058e9178();
  func_0x000107c61180();
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434(param_1);
    puVar1 = PTR___sypN_11034f1a8;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = puVar2;
      func_0x000107c3d980();
      func_0x000107c61180();
      if (puVar3 != (undefined *)0x0) {
        puVar4 = puVar3;
        param_2 = PTR___sSSN_11034da80;
        func_0x000107c5f9e8();
        func_0x000107c61170(puVar3);
        puVar3 = puVar4;
        FUN_101c2832c();
        func_0x000107c6142c(puVar4);
        if (puVar3 != (undefined *)0x0) {
          puVar4 = param_1;
          func_0x000107c61558(param_1);
          param_2 = &UNK_101391c9c;
          puStack_58 = param_1;
          FUN_101c2869c(puVar3,&UNK_101391c9c,0,puVar4,&puStack_58);
          func_0x000107c6142c(puVar3);
          param_1 = puStack_58;
        }
      }
    }
    puVar3 = puVar2;
    func_0x000107c61174();
    puVar4 = puVar3;
    func_0x000107c50950();
    func_0x000107c61180();
    puVar5 = param_1;
    func_0x000100215634(param_1);
    if (puVar2 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      param_2 = (undefined *)0x0;
    }
    else {
      puVar2 = puVar3;
      func_0x000107c3fbd4();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        param_2 = (undefined *)0x0;
      }
      else {
        puVar8 = puVar2;
        func_0x000107c5faec();
        func_0x000107c61170(puVar2);
      }
    }
    puVar6 = puVar3;
    func_0x000107c5046c(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    puVar7 = puVar5;
    func_0x000107c5f9dc(puVar5,PTR___sSSN_11034da80,puVar1 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c6142c(puVar5);
    if (param_2 == (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
    }
    else {
      func_0x000107c5fadc(puVar8,param_2);
      func_0x000107c6142c(param_2);
    }
    puVar2 = PTR_PTR_1126bfdd8;
    func_0x000107c610f8(PTR_PTR_1126bfdd8);
    func_0x000107c48420();
    func_0x000107c6142c(param_1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
  }
  return puVar2;
}



/* Entry: 101c28b30; end: 101c28b63;  */

void FUN_101c28b30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar6 = &puStack_80;
  func_0x000100083b20(&puStack_80);
  puVar3 = puStack_80;
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000107c5ee20(uVar5,uVar2);
  uStack_60 = 0x101c28b40;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101376680;
  puStack_68 = &UNK_110458330;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar1 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5d1d8(puVar3);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101c28b64; end: 101c28ba3;  */

undefined8 FUN_101c28b64(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101c28ba4; end: 101c28bc3;  */

void FUN_101c28ba4(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101c28bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101c28bc4; end: 101c28bff;  */

void FUN_101c28bc4(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101c28bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101c28c00; end: 101c28c13;  */

void FUN_101c28c00(void)

{
  long unaff_x22;
  
  FUN_101c28ba4(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000101c27df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c28c14; end: 101c28ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c28c14(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  func_0x000100083b20(auStack_68);
  func_0x000100209940();
  lVar2 = param_2;
  func_0x000107c610f8();
  FUN_101c28d74(auStack_68,lVar2 + _DAT_112e0a138);
  *(undefined8 *)(lVar2 + _DAT_112e0a140) = param_3;
  *(undefined8 *)(lVar2 + _DAT_112e0a148) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar2;
  lStack_70 = param_2;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  plVar3 = &lStack_78;
  func_0x000107c61154(plVar3,puVar1);
  func_0x0001000834e4(auStack_68);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 101c28cd0; end: 101c28cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c28cd0(long *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [40];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(auStack_68);
  func_0x000100209940();
  lVar4 = lVar3;
  func_0x000107c610f8();
  FUN_101c28d74(auStack_68,lVar4 + _DAT_112e0a138);
  *(undefined8 *)(lVar4 + _DAT_112e0a140) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112e0a148) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  plVar5 = &lStack_78;
  func_0x000107c61154(plVar5,puVar2);
  func_0x0001000834e4(auStack_68);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 101c28cdc; end: 101c28d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101c28cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar1 = auStack_50;
  func_0x000107c610f8();
  FUN_101c28d74(param_1,unaff_x20 + _DAT_112e0a138);
  *(undefined8 *)(unaff_x20 + _DAT_112e0a140) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e0a148) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 101c28d74; end: 101c28db7;  */

long FUN_101c28d74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101c28db8; end: 101c28e17; -[_TtC20MusicGRPCServicesAPI17MusicGRPCServices init] */

void FUN_101c28db8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MusicGRPCServicesAPI.MusicGRPCServices",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c28de4);
  (*pcVar1)();
}



/* Entry: 101c28e18; end: 101c28e27;  */

undefined1  [16] FUN_101c28e18(void)

{
  return ZEXT816(0x110458498);
}



/* Entry: 101c28e28; end: 101c28e6f; -[_TtC20MusicGRPCServicesAPI17MusicGRPCServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c28e44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c28e48) */
/* WARNING: Removing unreachable block (ram,0x0001000834e4) */
/* WARNING: Removing unreachable block (ram,0x0001000834fc) */
/* WARNING: Removing unreachable block (ram,0x0001000834f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c28e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e0a140));
  return;
}



/* Entry: 101c28e70; end: 101c28ef3;  */

void FUN_101c28e70(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(param_3 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_101c28ef4;
                    /* WARNING: Could not recover jumptable at 0x000101c28ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,0,0,0,param_2,param_3);
  return;
}



/* Entry: 101c28ef4; end: 101c28f4b;  */

void FUN_101c28ef4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c28f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c28f4c; end: 101c2946b;  */

long FUN_101c28f4c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c2946c; end: 101c29477;  */

void FUN_101c2946c(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x101c2a404)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101c29478; end: 101c294b7;  */

void FUN_101c29478(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112e0a1e0;
  func_0x0001000285a8(0x112e0a1e0,&UNK_10d9e08f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101c294b8; end: 101c294cf;  */

void FUN_101c294b8(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101c2a404)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101c294d0; end: 101c2953f;  */

void FUN_101c294d0(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101c29540; end: 101c2954b;  */

void FUN_101c29540(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_101c2a47c();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101c2954c; end: 101c29603;  */

void FUN_101c2954c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101c29604; end: 101c2964b;  */

void FUN_101c29604(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e0e00,0x2f,2);
  uRam0000000113803c20 = uStack_38;
  uRam0000000113803c18 = uStack_40;
  uRam0000000113803c30 = uStack_28;
  uRam0000000113803c28 = uStack_30;
  uRam0000000113803c40 = uStack_18;
  uRam0000000113803c38 = uStack_20;
  return;
}



/* Entry: 101c2964c; end: 101c296eb;  */

/* WARNING: Possible PIC construction at 0x000101c29698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c296a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c2969c) */
/* WARNING: Removing unreachable block (ram,0x000101c296ac) */

void FUN_101c2964c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a290 != -1) {
    func_0x000107c61568(0x112e0a290,FUN_101c29604);
  }
  uVar5 = uRam0000000113803c40;
  uVar4 = uRam0000000113803c38;
  uVar3 = uRam0000000113803c30;
  uVar2 = uRam0000000113803c28;
  uVar1 = uRam0000000113803c20;
  *param_1 = uRam0000000113803c18;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101c296ec; end: 101c29733;  */

void FUN_101c296ec(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e0de0,0x19,2);
  uRam0000000113803c50 = uStack_38;
  uRam0000000113803c48 = uStack_40;
  uRam0000000113803c60 = uStack_28;
  uRam0000000113803c58 = uStack_30;
  uRam0000000113803c70 = uStack_18;
  uRam0000000113803c68 = uStack_20;
  return;
}



/* Entry: 101c29734; end: 101c29817;  */

void FUN_101c29734(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_101c2aba4();
LAB_101c297bc:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_101c2a488();
        goto LAB_101c297bc;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101c29818; end: 101c298cb;  */

void FUN_101c29818(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = unaff_x20;
  FUN_101c298cc();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      uStack_48 = (undefined1)unaff_x20[1];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *unaff_x20;
      FUN_101c2a488();
      (*pcVar2)(&lStack_50,2,&UNK_1104589e8,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 101c298cc; end: 101c29957;  */

void FUN_101c298cc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101c2aba4();
    (*pcVar1)(&uStack_60,1,&UNK_110458a60,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101c29958; end: 101c299a3;  */

void FUN_101c29958(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  return;
}



/* Entry: 101c299a4; end: 101c299d3;  */

undefined1  [16] FUN_101c299a4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101c299d4; end: 101c29a07;  */

void FUN_101c299d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101c29a08; end: 101c29a1b;  */

undefined1  [16] FUN_101c29a08(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c29a18;
  return auVar1;
}



/* Entry: 101c29a1c; end: 101c29a2f;  */

void FUN_101c29a1c(void)

{
  FUN_101c29734();
  return;
}



/* Entry: 101c29a30; end: 101c29a67;  */

void FUN_101c29a30(void)

{
  FUN_101c29818();
  return;
}



/* Entry: 101c29a68; end: 101c29a6b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c29a68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101c29a6c; end: 101c29aa3;  */

uint FUN_101c29a6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x000101c2b198();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101c29aa4; end: 101c29aeb;  */

uint FUN_101c29aa4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_101c2a4c8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c29aec; end: 101c29b8b;  */

/* WARNING: Possible PIC construction at 0x000101c29b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c29b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c29b3c) */
/* WARNING: Removing unreachable block (ram,0x000101c29b4c) */

void FUN_101c29aec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a298 != -1) {
    func_0x000107c61568(0x112e0a298,FUN_101c296ec);
  }
  uVar5 = uRam0000000113803c70;
  uVar4 = uRam0000000113803c68;
  uVar3 = uRam0000000113803c60;
  uVar2 = uRam0000000113803c58;
  uVar1 = uRam0000000113803c50;
  *param_1 = uRam0000000113803c48;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101c29b8c; end: 101c29bc7;  */

void FUN_101c29b8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0a360;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0a360,&UNK_10d9e0d48);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c29bc8; end: 101c29ccb;  */

void FUN_101c29bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c29ccc; end: 101c29d5b;  */

uint FUN_101c29ccc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_101c2a4c8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101c29d5c; end: 101c29dfb;  */

/* WARNING: Possible PIC construction at 0x000101c29da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c29db8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c29dac) */
/* WARNING: Removing unreachable block (ram,0x000101c29dbc) */

void FUN_101c29d5c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a2b0 != -1) {
    func_0x000107c61568(0x112e0a2b0,0x101c29d14);
  }
  uVar5 = uRam0000000113803ca0;
  uVar4 = uRam0000000113803c98;
  uVar3 = uRam0000000113803c90;
  uVar2 = uRam0000000113803c88;
  uVar1 = uRam0000000113803c80;
  *param_1 = uRam0000000113803c78;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101c29dfc; end: 101c29e6f;  */

void FUN_101c29dfc(void)

{
  func_0x000107c5fb78(0x6e6f69737265562e,0xee007265626d754e);
  uRam0000000113803ca8 = 0xd000000000000018;
  uRam0000000113803cb0 = 0x800000010f004390;
  return;
}



/* Entry: 101c29e70; end: 101c29eb7;  */

void FUN_101c29e70(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e0d50,0x1d,2);
  uRam0000000113803cc0 = uStack_38;
  uRam0000000113803cb8 = uStack_40;
  uRam0000000113803cd0 = uStack_28;
  uRam0000000113803cc8 = uStack_30;
  uRam0000000113803ce0 = uStack_18;
  uRam0000000113803cd8 = uStack_20;
  return;
}



/* Entry: 101c29eb8; end: 101c29f83;  */

void FUN_101c29eb8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101c29f50;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101c29f50;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 4) goto LAB_101c29f60;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_101c29f50:
        (*pcVar3)();
      }
LAB_101c29f60:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c29f84; end: 101c2a067;  */

void FUN_101c29f84(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((((((int)param_2 == 0) ||
        ((**(code **)(param_7 + 0x18))(param_2,1,param_6,param_7), unaff_x21 == 0)) &&
       ((param_2 >> 0x20 == 0 ||
        ((**(code **)(param_7 + 0x18))(param_2 >> 0x20,2,param_6,param_7), unaff_x21 == 0)))) &&
      (((int)param_3 == 0 ||
       ((**(code **)(param_7 + 0x18))(param_3,3,param_6,param_7), unaff_x21 == 0)))) &&
     ((param_3 >> 0x20 == 0 ||
      ((**(code **)(param_7 + 0x18))(param_3 >> 0x20,4,param_6,param_7), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 101c2a068; end: 101c2a077;  */

void FUN_101c2a068(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 101c2a078; end: 101c2a0d3;  */

undefined1  [16] FUN_101c2a078(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112e0a2b8 != -1) {
    func_0x000107c61568(0x112e0a2b8,FUN_101c29dfc);
  }
  auVar1._8_8_ = uRam0000000113803cb0;
  auVar1._0_8_ = uRam0000000113803ca8;
  func_0x000107c61434(uRam0000000113803cb0);
  return auVar1;
}



/* Entry: 101c2a0d4; end: 101c2a0db;  */

undefined8 FUN_101c2a0d4(void)

{
  return 1;
}



/* Entry: 101c2a0dc; end: 101c2a10b;  */

undefined1  [16] FUN_101c2a0dc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101c2a10c; end: 101c2a13f;  */

void FUN_101c2a10c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101c2a140; end: 101c2a153;  */

undefined1  [16] FUN_101c2a140(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c2a150;
  return auVar1;
}



/* Entry: 101c2a154; end: 101c2a18b;  */

void FUN_101c2a154(void)

{
  FUN_101c29eb8();
  return;
}



/* Entry: 101c2a18c; end: 101c2a18f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c2a18c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 101c2a190; end: 101c2a1c7;  */

uint FUN_101c2a190(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  FUN_101c2b158();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 101c2a1c8; end: 101c2a1ff;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2a1c8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  undefined1 (*unaff_x20) [16];
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  auVar46 = *unaff_x20;
  iVar11 = -(uint)(auVar46._0_4_ == (int)*param_1);
  iVar22 = -(uint)(auVar46._4_4_ == (int)((ulong)*param_1 >> 0x20));
  iVar5 = -(uint)(auVar46._8_4_ == (int)param_1[1]);
  iVar6 = -(uint)(auVar46._12_4_ == (int)((ulong)param_1[1] >> 0x20));
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  pbVar13 = *(byte **)unaff_x20[1];
  pbVar28 = *(byte **)(unaff_x20[1] + 8);
  lVar27 = param_1[2];
  uVar19 = param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined1 (*) [16])((ulong)pbVar28 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(undefined1 (**) [16])(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 101c2a200; end: 101c2a29f;  */

/* WARNING: Possible PIC construction at 0x000101c2a24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2a25c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c2a250) */
/* WARNING: Removing unreachable block (ram,0x000101c2a260) */

void FUN_101c2a200(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a2c0 != -1) {
    func_0x000107c61568(0x112e0a2c0,FUN_101c29e70);
  }
  uVar5 = uRam0000000113803ce0;
  uVar4 = uRam0000000113803cd8;
  uVar3 = uRam0000000113803cd0;
  uVar2 = uRam0000000113803cc8;
  uVar1 = uRam0000000113803cc0;
  *param_1 = uRam0000000113803cb8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 101c2a2a0; end: 101c2a2db;  */

void FUN_101c2a2a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0a350;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0a350,&UNK_10d9e0d40);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c2a2dc; end: 101c2a3cf;  */

void FUN_101c2a2dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c2a3d0; end: 101c2a42b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2a3d0(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  auVar46 = *param_2;
  iVar11 = -(uint)((int)*param_1 == auVar46._0_4_);
  iVar22 = -(uint)((int)((ulong)*param_1 >> 0x20) == auVar46._4_4_);
  iVar5 = -(uint)((int)param_1[1] == auVar46._8_4_);
  iVar6 = -(uint)((int)((ulong)param_1[1] >> 0x20) == auVar46._12_4_);
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  lVar27 = *(long *)param_2[1];
  uVar19 = *(ulong *)(param_2[1] + 8);
  pbVar13 = (byte *)param_1[2];
  pbVar28 = (byte *)param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(ulong *)(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar28 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(ulong *)(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(ulong *)(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 101c2a42c; end: 101c2a47b;  */

undefined8 FUN_101c2a42c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e0a1e8;
  func_0x0001000285a8(0x112e0a1e8,&UNK_10d9e08f8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101c2a47c; end: 101c2a487;  */

void FUN_101c2a47c(void)

{
  return;
}



/* Entry: 101c2a488; end: 101c2a4c7;  */

void FUN_101c2a488(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a2a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e0a08;
  func_0x000107c61520(&DAT_10d9e0a08,&UNK_1104589e8);
  puRam0000000112e0a2a0 = puVar1;
  return;
}



/* Entry: 101c2a4c8; end: 101c2a733;  */

uint FUN_101c2a4c8(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar7 = param_1[5];
  uVar5 = param_1[4];
  uVar11 = param_1[7];
  uVar9 = param_1[6];
  uVar8 = param_2[5];
  uVar6 = param_2[4];
  uVar12 = param_2[7];
  uVar10 = param_2[6];
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar10;
  uStack_88 = uVar12;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar9;
  uStack_68 = uVar11;
  if (uVar11 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_101c2a59c;
    if (((((int)uVar5 == (int)uVar6) && ((uVar6 ^ uVar5) >> 0x20 == 0)) &&
        ((int)uVar7 == (int)uVar8)) && ((uVar8 ^ uVar7) >> 0x20 == 0)) {
      FUN_101c2a42c(&uStack_80,auStack_c0);
      FUN_101c2a42c(&uStack_a0,auStack_c0);
      uVar2 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,uVar10,uVar12);
      func_0x000101c2a410(uVar6,uVar8,uVar10,uVar12);
      if ((uVar2 & 1) != 0) goto LAB_101c2a540;
    }
    else {
      FUN_101c2a42c(&uStack_80,auStack_c0);
      FUN_101c2a42c(&uStack_a0,auStack_c0);
      func_0x000101c2a410(uVar6,uVar8,uVar10,uVar12);
    }
LAB_101c2a698:
    func_0x000101c2a410(uVar5,uVar7,uVar9,uVar11);
  }
  else {
    if (uVar12 >> 0x3c < 0xf) {
LAB_101c2a59c:
      FUN_101c2a42c(&uStack_80,auStack_c0);
      FUN_101c2a42c(&uStack_a0,auStack_c0);
      func_0x000101c2a410(uVar5,uVar7,uVar9,uVar11);
      uVar5 = uVar6;
      uVar7 = uVar8;
      uVar9 = uVar10;
      uVar11 = uVar12;
      goto LAB_101c2a698;
    }
    FUN_101c2a42c(&uStack_80,auStack_c0);
    FUN_101c2a42c(&uStack_a0,auStack_c0);
LAB_101c2a540:
    func_0x000101c2a410(uVar5,uVar7,uVar9,uVar11);
    lVar3 = *param_1;
    lVar4 = *param_2;
    if ((char)param_2[1] == '\x01') {
      if (lVar4 < 3) {
        if (lVar4 == 0) {
          if (lVar3 == 0) goto LAB_101c2a6cc;
        }
        else if (lVar4 == 1) {
          if (lVar3 == 1) goto LAB_101c2a6cc;
        }
        else if (lVar3 == 2) goto LAB_101c2a6cc;
      }
      else if (lVar4 < 5) {
        if (lVar4 == 3) {
          if (lVar3 == 3) {
LAB_101c2a6cc:
            lVar3 = param_1[2];
            func_0x000100e25fcc(lVar3,param_1[3],param_2[2],param_2[3]);
            uVar1 = (uint)lVar3;
            goto LAB_101c2a6a0;
          }
        }
        else if (lVar3 == 4) goto LAB_101c2a6cc;
      }
      else if (lVar4 == 5) {
        if (lVar3 == 5) goto LAB_101c2a6cc;
      }
      else if (lVar3 == 6) goto LAB_101c2a6cc;
    }
    else if (lVar3 == lVar4) goto LAB_101c2a6cc;
  }
  uVar1 = 0;
LAB_101c2a6a0:
  return uVar1 & 1;
}



/* Entry: 101c2a734; end: 101c2a7b3;  */

void FUN_101c2a734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a2a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0b88;
  func_0x000107c61520(&UNK_10d9e0b88,&UNK_110458948);
  puRam0000000112e0a2a8 = puVar1;
  return;
}



/* Entry: 101c2a7b4; end: 101c2a7c7;  */

void FUN_101c2a7b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2a7c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c2a808)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c2a7c8; end: 101c2a873;  */

void FUN_101c2a7c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a2d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e09a0;
  func_0x000107c61520(&UNK_10d9e09a0,&UNK_1104588d0);
  puRam0000000112e0a2d0 = puVar1;
  return;
}



/* Entry: 101c2a874; end: 101c2a877;  */

void FUN_101c2a874(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e09e0;
  func_0x000107c61520(&UNK_10d9e09e0,&UNK_1104588d0);
  puRam0000000112e0a2f0 = puVar1;
  return;
}



/* Entry: 101c2a878; end: 101c2a8b7;  */

void FUN_101c2a878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a2f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e09e0;
  func_0x000107c61520(&UNK_10d9e09e0,&UNK_1104588d0);
  puRam0000000112e0a2f0 = puVar1;
  return;
}



/* Entry: 101c2a8b8; end: 101c2a8cb;  */

void FUN_101c2a8b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2a8cc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c2a90c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c2a8cc; end: 101c2a977;  */

void FUN_101c2a8cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a2f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0aa0;
  func_0x000107c61520(&UNK_10d9e0aa0,&UNK_1104589e8);
  puRam0000000112e0a2f8 = puVar1;
  return;
}



/* Entry: 101c2a978; end: 101c2a9bb;  */

void FUN_101c2a978(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 101c2a9bc; end: 101c2a9bf;  */

void FUN_101c2a9bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e0ae0;
  func_0x000107c61520(&UNK_10d9e0ae0,&UNK_1104589e8);
  puRam0000000112e0a318 = puVar1;
  return;
}


