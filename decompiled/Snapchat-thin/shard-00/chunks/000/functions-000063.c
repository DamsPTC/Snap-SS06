/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1001d0dd8; end: 1001d0f6b;  */

/* WARNING: Possible PIC construction at 0x0001001d0e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001d0ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001d0f18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001001d0f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001d0f1c) */
/* WARNING: Removing unreachable block (ram,0x0001001d0f54) */
/* WARNING: Removing unreachable block (ram,0x0001001d0f64) */
/* WARNING: Removing unreachable block (ram,0x0001001d0edc) */
/* WARNING: Removing unreachable block (ram,0x0001001d0f0c) */
/* WARNING: Removing unreachable block (ram,0x0001001d0ef4) */
/* WARNING: Removing unreachable block (ram,0x0001001d0e68) */
/* WARNING: Removing unreachable block (ram,0x0001001d0ecc) */
/* WARNING: Removing unreachable block (ram,0x0001001d0f8c) */

void FUN_1001d0dd8(long param_1,long param_2)

{
  long *plVar1;
  
  func_0x000107c61174(param_2);
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110d257a8);
    if (((int)plVar1 != 0) && (func_0x000107c61174(param_2), param_2 != 0)) {
      func_0x000107c61178(param_2);
      func_0x000107c3ac4c();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1001d0f6c; end: 1001d0fa3;  */

/* WARNING: Possible PIC construction at 0x0001001d0f88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001001d0f8c) */

void FUN_1001d0f6c(long param_1)

{
  func_0x000107c61120(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1001d0fa4; end: 1001d0fbf;  */

void FUN_1001d0fa4(undefined8 param_1)

{
  FUN_1000285a8(0x112de44a8,&UNK_10d9add00);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c2110,param_1);
  return;
}



/* Entry: 1001d0fc0; end: 1001d100f;  */

void FUN_1001d0fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1010; end: 1001d102f;  */

void FUN_1001d1010(void)

{
  func_0x000107c61168(&PTR_PTR_112de4520);
  return;
}



/* Entry: 1001d1030; end: 1001d109b;  */

int FUN_1001d1030(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  
  *(undefined1 *)(param_1 + 0x46) = 1;
  FUN_1001cddd0(param_1,param_3,4);
  FUN_1001cddd0(param_1,param_3,1);
  FUN_1001ce024(param_1,param_2,param_3);
  *(undefined1 *)(param_1 + 0x46) = 0;
  FUN_1001ce088(param_1,4);
  lVar1 = *(long *)(param_1 + 0x30);
  if ((ulong)(lVar1 - *(long *)(param_1 + 0x38)) < 4) {
    FUN_1001cde7c(param_1,4);
    lVar1 = *(long *)(param_1 + 0x30);
  }
  puVar2 = (undefined4 *)(lVar1 + -4);
  *puVar2 = (int)param_3;
  *(undefined4 **)(param_1 + 0x30) = puVar2;
  return (*(int *)(param_1 + 0x20) - (int)puVar2) + *(int *)(param_1 + 0x28);
}



/* Entry: 1001d109c; end: 1001d10d3;  */

void FUN_1001d109c(undefined8 param_1)

{
  FUN_1000285a8(0x112de44b0,&UNK_10d9add08);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003c20b4,param_1);
  return;
}



/* Entry: 1001d10d4; end: 1001d1123;  */

void FUN_1001d10d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1124; end: 1001d1143;  */

void FUN_1001d1124(void)

{
  func_0x000107c61168(&PTR_PTR_112de4608);
  return;
}



/* Entry: 1001d1144; end: 1001d11c3;  */

void FUN_1001d1144(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  piVar3 = *(int **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)&UNK_1014c34b4;
  iVar1 = *piVar3;
  plVar5 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar3),uVar6,uVar2);
  plVar4[2] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)&UNK_1014c2760;
                    /* WARNING: Could not recover jumptable at 0x0001001d1224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar5,param_1);
  return;
}



/* Entry: 1001d11c4; end: 1001d1227;  */

void FUN_1001d11c4(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_1014c2760;
                    /* WARNING: Could not recover jumptable at 0x0001001d1224. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 1001d1228; end: 1001d12bb;  */

void FUN_1001d1228(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  piVar4 = *(int **)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)&UNK_104891334;
  iVar1 = *piVar4;
  plVar6 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8(plVar6,(code *)((long)iVar1 + (long)piVar4),uVar3,piVar4,uVar7,uVar2);
  plVar5[2] = (long)plVar6;
  *plVar6 = (long)plVar5;
  plVar6[1] = (long)&UNK_104891324;
                    /* WARNING: Could not recover jumptable at 0x0001001d131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar6,param_1);
  return;
}



/* Entry: 1001d12bc; end: 1001d131f;  */

void FUN_1001d12bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)&UNK_104891324;
                    /* WARNING: Could not recover jumptable at 0x0001001d131c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1);
  return;
}



/* Entry: 1001d1320; end: 1001d13b7;  */

void FUN_1001d1320(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  long unaff_x22;
  long lVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar5 = (long *)0x80;
  uVar3 = *(undefined1 *)(unaff_x20 + 0x29);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)&UNK_104891328;
  plVar5[8] = lVar6;
  plVar5[9] = lVar2;
  *(undefined1 *)((long)plVar5 + 0x71) = uVar3;
  *(undefined1 *)(plVar5 + 0xe) = uVar4;
  plVar5[6] = lVar1;
  plVar5[7] = lVar8;
  plVar5[5] = param_1;
  lVar6 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[10] = uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1001d142c,0,0);
  return;
}



/* Entry: 1001d13b8; end: 1001d142b;  */

void FUN_1001d13b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined1 *)(unaff_x22 + 0x71) = param_5;
  *(undefined1 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  lVar1 = 0x112d453c8;
  FUN_1000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1001d142c,0,0);
  return;
}



/* Entry: 1001d142c; end: 1001d1573;  */

void FUN_1001d142c(long *param_1)

{
  long lVar1;
  byte bVar2;
  undefined1 uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0x71);
  func_0x0001000aca5c();
  func_0x000107c61428();
  param_1 = (long *)*param_1;
  *(long **)(unaff_x22 + 0x58) = param_1;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      func_0x000107c6157c(param_1);
      func_0x000107c5fcf8(uVar7);
    }
    else {
      func_0x000107c6157c(param_1);
      func_0x000107c5fd04(uVar7,0x15);
    }
  }
  else if (bVar2 == 2) {
    func_0x000107c6157c(param_1);
    func_0x000107c5fcfc(uVar7);
  }
  else {
    if (bVar2 != 3) {
      lVar5 = 0;
      func_0x000107c5fd0c();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar7,1,1,lVar5);
      func_0x000107c6157c(param_1);
      goto FUN_1000acca0;
    }
    func_0x000107c6157c(param_1);
    func_0x000107c5fcf4(uVar7);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar5 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(uVar7,0,1,lVar5);
FUN_1000acca0:
  plVar6 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)&UNK_1048901a8;
  lVar5 = *(long *)(unaff_x22 + 0x30);
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x70);
  plVar6[0xc] = *(long *)(unaff_x22 + 0x50);
  plVar6[0xd] = (long)param_1;
  *(undefined1 *)(plVar6 + 0x10) = uVar3;
  plVar6[10] = lVar5;
  plVar6[0xb] = lVar1;
  plVar4 = (long *)0x130;
  func_0x000107c615b8();
  plVar6[0xe] = (long)plVar4;
  *plVar4 = (long)plVar6;
  plVar4[1] = (long)FUN_1000afc54;
  plVar4[0x1c] = lVar1;
  plVar4[0x1d] = (long)param_1;
  *(undefined1 *)((long)plVar4 + 0x129) = uVar3;
  plVar4[0x1b] = lVar5;
  plVar4[0x1e] = *param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1000acd38,0,0);
  return;
}



/* Entry: 1001d1574; end: 1001d158f;  */

void FUN_1001d1574(undefined8 param_1)

{
  FUN_1000285a8(0x112de4598,&UNK_10d9adea0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100424d70,param_1);
  return;
}



/* Entry: 1001d1590; end: 1001d1667;  */

void FUN_1001d1590(undefined8 param_1)

{
  FUN_1000285a8(0x112dc0860,&UNK_10d97d028);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003bec74,param_1);
  return;
}



/* Entry: 1001d1668; end: 1001d1687;  */

void FUN_1001d1668(void)

{
  func_0x000107c61168(&PTR_PTR_11297a260);
  return;
}



/* Entry: 1001d1688; end: 1001d1707;  */

void FUN_1001d1688(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de52d0,&UNK_10d9af520);
  puVar1 = &UNK_110424f50;
  func_0x000107c613fc(&UNK_110424f50,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100731c88,puVar1);
  return;
}



/* Entry: 1001d1708; end: 1001d1727;  */

void FUN_1001d1708(void)

{
  func_0x000107c61168(&PTR_PTR_112de5348);
  return;
}



/* Entry: 1001d1728; end: 1001d17a7;  */

void FUN_1001d1728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112de9990,&UNK_10d9b4e30);
  puVar1 = &UNK_11042b340;
  func_0x000107c613fc(&UNK_11042b340,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006d1e18,puVar1);
  return;
}



/* Entry: 1001d17a8; end: 1001d17c7;  */

void FUN_1001d17a8(void)

{
  func_0x000107c61168(&PTR_PTR_112de9a08);
  return;
}



/* Entry: 1001d17c8; end: 1001d17e3;  */

void FUN_1001d17c8(undefined8 param_1)

{
  FUN_1000285a8(0x112de9a78,&UNK_10d9b4fd0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d4c50,param_1);
  return;
}



/* Entry: 1001d17e4; end: 1001d1833;  */

void FUN_1001d17e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1834; end: 1001d1853;  */

void FUN_1001d1834(void)

{
  func_0x000107c61168(&PTR_PTR_112de9af0);
  return;
}



/* Entry: 1001d1854; end: 1001d186f;  */

void FUN_1001d1854(undefined8 param_1)

{
  FUN_1000285a8(0x112de9d48,&UNK_10d9b5530);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d35d4,param_1);
  return;
}



/* Entry: 1001d1870; end: 1001d18bf;  */

void FUN_1001d1870(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d18c0; end: 1001d18df;  */

void FUN_1001d18c0(void)

{
  func_0x000107c61168(&PTR_PTR_112de9dc0);
  return;
}



/* Entry: 1001d18e0; end: 1001d18fb;  */

void FUN_1001d18e0(undefined8 param_1)

{
  FUN_1000285a8(0x112ded0c8,&UNK_10d9b9588);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100722114,param_1);
  return;
}



/* Entry: 1001d18fc; end: 1001d194b;  */

void FUN_1001d18fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d194c; end: 1001d1967;  */

void FUN_1001d194c(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd2c0,&UNK_10d9a2df0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006473a0,param_1);
  return;
}



/* Entry: 1001d1968; end: 1001d19b7;  */

void FUN_1001d1968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d19b8; end: 1001d19d7;  */

void FUN_1001d19b8(void)

{
  func_0x000107c61168(&PTR_PTR_112ddd338);
  return;
}



/* Entry: 1001d19d8; end: 1001d1a0f;  */

void FUN_1001d19d8(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd2c8,&UNK_10d9a2df8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100647344,param_1);
  return;
}



/* Entry: 1001d1a10; end: 1001d1a5f;  */

void FUN_1001d1a10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1a60; end: 1001d1aab;  */

void FUN_1001d1a60(undefined8 param_1)

{
  FUN_1000285a8(0x112db09c8,&UNK_10d95a920);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_101527bf0,param_1);
  return;
}



/* Entry: 1001d1aac; end: 1001d1ac7;  */

void FUN_1001d1aac(undefined8 param_1)

{
  FUN_1000285a8(0x112df1938,&UNK_10d9bf2d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d583c,param_1);
  return;
}



/* Entry: 1001d1ac8; end: 1001d1b17;  */

void FUN_1001d1ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1b18; end: 1001d1b37;  */

void FUN_1001d1b18(void)

{
  func_0x000107c61168(&PTR_PTR_112df19b0);
  return;
}



/* Entry: 1001d1b38; end: 1001d1b53;  */

void FUN_1001d1b38(undefined8 param_1)

{
  FUN_1000285a8(0x112df1940,&UNK_10d9bf2d8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d57e0,param_1);
  return;
}



/* Entry: 1001d1b54; end: 1001d1b9f;  */

void FUN_1001d1b54(undefined8 param_1)

{
  FUN_1000285a8(0x112dc37f8,&UNK_10d980e68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1017052bc,param_1);
  return;
}



/* Entry: 1001d1ba0; end: 1001d1bbb;  */

void FUN_1001d1ba0(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd3a0,&UNK_10d9a2f80);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100643d30,param_1);
  return;
}



/* Entry: 1001d1bbc; end: 1001d1c0b;  */

void FUN_1001d1bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1c0c; end: 1001d1c2b;  */

void FUN_1001d1c0c(void)

{
  func_0x000107c61168(&PTR_PTR_112ddd418);
  return;
}



/* Entry: 1001d1c2c; end: 1001d1c47;  */

void FUN_1001d1c2c(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd3a8,&UNK_10d9a2f88);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100643cd4,param_1);
  return;
}



/* Entry: 1001d1c48; end: 1001d1cc7;  */

void FUN_1001d1c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df6860,&UNK_10d9c5930);
  puVar1 = &UNK_11043a8e0;
  func_0x000107c613fc(&UNK_11043a8e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1009c260c,puVar1);
  return;
}



/* Entry: 1001d1cc8; end: 1001d1ce7;  */

void FUN_1001d1cc8(void)

{
  func_0x000107c61168(&PTR_PTR_112df68d0);
  return;
}



/* Entry: 1001d1ce8; end: 1001d1d67;  */

void FUN_1001d1ce8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112df1b28,&UNK_10d9bf610);
  puVar1 = &UNK_110434090;
  func_0x000107c613fc(&UNK_110434090,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_1006d51a0,puVar1);
  return;
}



/* Entry: 1001d1d68; end: 1001d1d87;  */

void FUN_1001d1d68(void)

{
  func_0x000107c61168(&PTR_PTR_112df1ba0);
  return;
}



/* Entry: 1001d1d88; end: 1001d1da3;  */

void FUN_1001d1d88(undefined8 param_1)

{
  FUN_1000285a8(0x112df1b30,&UNK_10d9bf618);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006d5144,param_1);
  return;
}



/* Entry: 1001d1da4; end: 1001d1df3;  */

void FUN_1001d1da4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1df4; end: 1001d1e0f;  */

void FUN_1001d1df4(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd480,&UNK_10d9a3110);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100643ff8,param_1);
  return;
}



/* Entry: 1001d1e10; end: 1001d1e5f;  */

void FUN_1001d1e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1e60; end: 1001d1e7f;  */

void FUN_1001d1e60(void)

{
  func_0x000107c61168(&PTR_PTR_112ddd4f8);
  return;
}



/* Entry: 1001d1e80; end: 1001d1eb7;  */

void FUN_1001d1e80(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd488,&UNK_10d9a3118);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100643f9c,param_1);
  return;
}



/* Entry: 1001d1eb8; end: 1001d1f07;  */

void FUN_1001d1eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d1f08; end: 1001d1f27;  */

void FUN_1001d1f08(void)

{
  func_0x000107c61168(&PTR_PTR_112dcb0b0);
  return;
}



/* Entry: 1001d1f28; end: 1001d1f43;  */

void FUN_1001d1f28(undefined8 param_1)

{
  FUN_1000285a8(0x112dcb040,&UNK_10d98d008);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1003fe60c,param_1);
  return;
}



/* Entry: 1001d1f44; end: 1001d1fdb;  */

void FUN_1001d1f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113066398,&UNK_10dcdc030);
  puVar1 = &UNK_11074c6d0;
  func_0x000107c613fc(&UNK_11074c6d0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1041889fc,puVar1);
  return;
}



/* Entry: 1001d1fdc; end: 1001d200f;  */

void FUN_1001d1fdc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1001d2010; end: 1001d21db; -[SCAppTerminationShim initWithApplicationPreferences:storageDirectory:dataWriter:] */

undefined8 *
FUN_1001d2010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_58 = PTR_PTR_1126e76d0;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    uVar2 = param_4;
    func_0x000107c5c168();
    func_0x000107c61180();
    uVar7 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar7);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    puVar4 = puVar1;
    func_0x000107c5a1e8();
    puVar5 = (undefined8 *)puVar1[1];
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar6 != (undefined8 *)0x0) {
      puVar4 = puVar6;
      func_0x000107c49820();
      func_0x000107c4e654(puVar1);
      uVar2 = puVar1[1];
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c56bcc();
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(puVar6);
    FUN_1001d3a80();
    func_0x000107c61180();
    uVar2 = puVar1[5];
    puVar1[5] = puVar4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1001d21dc; end: 1001d22f7; -[SCAppTerminationShim setUpTerminationStateMappingRestoringExists:] */

long FUN_1001d21dc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  undefined8 uVar5;
  byte abStack_c1 [97];
  long lStack_60;
  
  *param_3 = 0;
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c4345c();
  uVar5 = 0x1a4;
  func_0x000107c611c4();
  if ((int)lVar1 == -1) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c60fe4();
    if ((int)lVar4 == 0 && 0 < lStack_60) {
      abStack_c1[0] = 0;
      lVar4 = 1;
      lVar2 = lVar1;
      func_0x000107c61200(lVar1,abStack_c1,1,0);
      if (lVar2 == 1) {
        lVar4 = 1;
        if (abStack_c1[0] - 0x30 < 3) {
          *param_3 = 1;
          lVar4 = (ulong)abStack_c1[0] - 0x30;
        }
      }
    }
    else {
      lVar4 = 1;
    }
    lVar2 = lVar1;
    func_0x000107c60fec(lVar1,1);
    if ((int)lVar2 == 0) {
      pcVar3 = (char *)0x0;
      func_0x000107c610e4(0,1,3,1,lVar1,0,in_x6,in_x7,uVar5);
      func_0x000107c60f10(lVar1);
      if (pcVar3 != (char *)0xffffffffffffffff) {
        *(char **)(param_1 + 0x30) = pcVar3;
        *pcVar3 = (char)lVar4 + '0';
      }
    }
    else {
      func_0x000107c60f10(lVar1);
    }
  }
  return lVar4;
}



/* Entry: 1001d22f8; end: 1001d238f;  */

void FUN_1001d22f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x113066498,&UNK_10dcdc1b0);
  puVar1 = &UNK_11074c8f8;
  func_0x000107c613fc(&UNK_11074c8f8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100b991e8,puVar1);
  return;
}



/* Entry: 1001d2390; end: 1001d249f;  */

void FUN_1001d2390(undefined8 param_1)

{
  FUN_1000285a8(0x112db0ee8,&UNK_10d95b480);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10043de08,param_1);
  return;
}



/* Entry: 1001d24a0; end: 1001d2573;  */

void FUN_1001d24a0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 auStack_310 [33];
  byte bStack_2ef;
  long lStack_88;
  undefined1 auStack_58 [64];
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam000000011381b3f0 & 1) == 0) {
    bRam000000011381b3f0 = 1;
    uRam000000011381b3f4 = param_1;
    func_0x000107c61210(auStack_58);
    func_0x000107c61214(auStack_58,2);
    iVar3 = 0x1381b3f8;
    func_0x000107c61238(0x11381b3f8,auStack_58,FUN_1001d2730,&UNK_10f3b17c0);
    if (iVar3 != 0) {
      func_0x000107c613cc();
      func_0x000106aee914(&UNK_10f3b17dc,&UNK_10f3b17e2,0xb3,&UNK_10f3b181f,&UNK_10f3b1834);
    }
    param_1 = SUB84(auStack_58,0);
    func_0x000107c6120c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    func_0x000107c60e78();
    lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_328 = 0x288;
    uStack_320 = 0xe00000001;
    uStack_318 = 1;
    func_0x000107c6100c();
    puVar4 = &uStack_320;
    uStack_314 = param_1;
    func_0x000107c61660(puVar4,4,auStack_310,&uStack_328,0,0);
    if ((int)puVar4 == 0) {
      puVar5 = (uint *)(ulong)(bStack_2ef >> 3 & 1);
    }
    else {
      func_0x000107c60e5c();
      func_0x000107c613cc();
      func_0x000106aee914(&UNK_10f3b2c52,&UNK_10f3b2c58,0x33,&UNK_10f3b2c91,&UNK_10f3b2cb3);
      puVar5 = (uint *)0x0;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
      func_0x000107c60e78();
      puVar6 = puVar5;
      FUN_1001d2574();
      if ((((ulong)puVar5 & 0xf) != 0) && ((int)puVar6 != 0)) {
        if ((bRam000000011381b488 & 1) == 0) {
          bRam000000011381b488 = 1;
        }
        puVar5 = (uint *)(ulong)((uint)puVar5 & 0xe0);
      }
      uVar7 = 0;
      uVar1 = (uint)puVar5 & 3;
      if ((((ulong)puVar5 & 0xec) != 0 & bRam000000011381b489) == 0) {
        uVar1 = (uint)puVar5;
      }
      lVar8 = 7;
      puVar5 = (uint *)0x113170170;
      do {
        if (*(code **)(puVar5 + 2) != (code *)0x0) {
          uVar2 = *puVar5;
          (**(code **)(puVar5 + 2))();
          if ((puVar6 != (uint *)0x0) && (*(code **)puVar6 != (code *)0x0)) {
            (**(code **)puVar6)((uVar2 & uVar1) != 0);
          }
        }
        puVar6 = puVar5;
        FUN_1001d3074();
        uVar2 = uVar7 & (*puVar5 ^ 0xffffffff);
        uVar7 = *puVar5 | uVar7;
        if ((int)puVar6 == 0) {
          uVar7 = uVar2;
        }
        lVar8 = lVar8 + -1;
        puVar5 = puVar5 + 4;
      } while (lVar8 != 0);
      uRam000000011381b48c = uVar7;
      return;
    }
    return;
  }
  return;
}



/* Entry: 1001d2574; end: 1001d264f;  */

void FUN_1001d2574(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2b4;
  undefined1 auStack_2b0 [33];
  byte bStack_28f;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2c8 = 0x288;
  uStack_2c0 = 0xe00000001;
  uStack_2b8 = 1;
  uStack_2b4 = param_1;
  func_0x000107c6100c();
  puVar3 = &uStack_2c0;
  func_0x000107c61660(puVar3,4,auStack_2b0,&uStack_2c8,0,0);
  if ((int)puVar3 == 0) {
    puVar4 = (uint *)(ulong)(bStack_28f >> 3 & 1);
  }
  else {
    func_0x000107c60e5c();
    func_0x000107c613cc();
    func_0x000106aee914(&UNK_10f3b2c52,&UNK_10f3b2c58,0x33,&UNK_10f3b2c91,&UNK_10f3b2cb3);
    puVar4 = (uint *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    func_0x000107c60e78();
    puVar5 = puVar4;
    FUN_1001d2574();
    if ((((ulong)puVar4 & 0xf) != 0) && ((int)puVar5 != 0)) {
      if ((bRam000000011381b488 & 1) == 0) {
        bRam000000011381b488 = 1;
      }
      puVar4 = (uint *)(ulong)((uint)puVar4 & 0xe0);
    }
    uVar6 = 0;
    uVar1 = (uint)puVar4 & 3;
    if ((((ulong)puVar4 & 0xec) != 0 & bRam000000011381b489) == 0) {
      uVar1 = (uint)puVar4;
    }
    lVar7 = 7;
    puVar4 = (uint *)0x113170170;
    do {
      if (*(code **)(puVar4 + 2) != (code *)0x0) {
        uVar2 = *puVar4;
        (**(code **)(puVar4 + 2))();
        if ((puVar5 != (uint *)0x0) && (*(code **)puVar5 != (code *)0x0)) {
          (**(code **)puVar5)((uVar2 & uVar1) != 0);
        }
      }
      puVar5 = puVar4;
      FUN_1001d3074();
      uVar2 = uVar6 & (*puVar4 ^ 0xffffffff);
      uVar6 = *puVar4 | uVar6;
      if ((int)puVar5 == 0) {
        uVar6 = uVar2;
      }
      lVar7 = lVar7 + -1;
      puVar4 = puVar4 + 4;
    } while (lVar7 != 0);
    uRam000000011381b48c = uVar6;
    return;
  }
  return;
}



/* Entry: 1001d2650; end: 1001d272f;  */

void FUN_1001d2650(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  
  puVar3 = param_1;
  FUN_1001d2574();
  if ((((ulong)param_1 & 0xf) != 0) && ((int)puVar3 != 0)) {
    if ((bRam000000011381b488 & 1) == 0) {
      bRam000000011381b488 = 1;
    }
    param_1 = (uint *)(ulong)((uint)param_1 & 0xe0);
  }
  uVar5 = 0;
  uVar1 = (uint)param_1 & 3;
  if ((((ulong)param_1 & 0xec) != 0 & bRam000000011381b489) == 0) {
    uVar1 = (uint)param_1;
  }
  lVar6 = 7;
  puVar4 = (uint *)0x113170170;
  do {
    if (*(code **)(puVar4 + 2) != (code *)0x0) {
      uVar2 = *puVar4;
      (**(code **)(puVar4 + 2))();
      if ((puVar3 != (uint *)0x0) && (*(code **)puVar3 != (code *)0x0)) {
        (**(code **)puVar3)((uVar2 & uVar1) != 0);
      }
    }
    puVar3 = puVar4;
    FUN_1001d3074();
    uVar2 = uVar5 & (*puVar4 ^ 0xffffffff);
    uVar5 = *puVar4 | uVar5;
    if ((int)puVar3 == 0) {
      uVar5 = uVar2;
    }
    lVar6 = lVar6 + -1;
    puVar4 = puVar4 + 4;
  } while (lVar6 != 0);
  uRam000000011381b48c = uVar5;
  return;
}



/* Entry: 1001d2730; end: 1001d2977;  */

void FUN_1001d2730(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  char *pcVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  char acStack_460 [1000];
  long lStack_78;
  uint auStack_6c [3];
  
  func_0x000107c61298(&UNK_10f3b1854);
  func_0x000107c616ac(1);
  do {
    uVar2 = uRam000000011381b408;
    if (iRam000000011381b400 < 1) {
      uVar10 = (ulong)*(uint *)PTR__mach_task_self__11034c5c8;
      uVar6 = uVar10;
      func_0x000107c61684(uVar10,&lStack_78,auStack_6c);
      uVar1 = auStack_6c[0];
      FUN_1001d2978();
      uVar7 = uVar6;
      FUN_1001d2978();
      uVar8 = uVar7;
      FUN_1001d2978();
      uRam00000001136c4fd8 = uVar8;
      FUN_1001d2978();
      uRam00000001136c4fe0 = uVar8;
      for (uVar12 = 0; uVar4 = uRam000000011381b420, uVar3 = uRam000000011381b418,
          uVar11 = uRam000000011381b410, uVar8 = uRam00000001136c4fe8, uVar12 < uVar1;
          uVar12 = uVar12 + 1) {
        uVar11 = (ulong)*(uint *)(lStack_78 + uVar12 * 4);
        uVar8 = uVar11;
        func_0x000107c6123c();
        *(ulong *)(uVar6 + uVar12 * 8) = uVar11;
        *(ulong *)(uVar7 + uVar12 * 8) = uVar8;
        if (((uVar8 != 0) && (func_0x000107c61240(), (int)uVar8 == 0)) && (acStack_460[0] != '\0'))
        {
          pcVar9 = acStack_460;
          func_0x000107c613c8();
          *(char **)(uRam00000001136c4fd8 + uVar12 * 8) = pcVar9;
        }
        if (((cRam000000011381b404 == '\x01') &&
            (func_0x000106af0f5c(uVar11,acStack_460,1000), (int)uVar11 != 0)) &&
           (acStack_460[0] != '\0')) {
          pcVar9 = acStack_460;
          func_0x000107c613c8();
          *(char **)(uRam00000001136c4fe0 + uVar12 * 8) = pcVar9;
        }
        uVar1 = auStack_6c[0];
      }
      uRam000000011381b418 = uRam00000001136c4fd8;
      uRam000000011381b420 = uRam00000001136c4fe0;
      uRam00000001136c4fd8 = uVar3;
      uRam00000001136c4fe0 = uVar4;
      uRam00000001136c4fe8 = uVar7;
      uRam000000011381b408 = uVar1;
      uRam000000011381b410 = uVar6;
      func_0x000107c60fd0(uVar11);
      func_0x000107c60fd0(uVar8);
      uVar12 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
      if (uVar3 != 0) {
        for (lVar13 = 0; uVar12 << 3 != lVar13; lVar13 = lVar13 + 8) {
          func_0x000107c60fd0(*(undefined8 *)(uVar3 + lVar13));
        }
        func_0x000107c60fd0(uVar3);
      }
      if (uVar4 != 0) {
        for (lVar13 = 0; uVar12 << 3 != lVar13; lVar13 = lVar13 + 8) {
          func_0x000107c60fd0(*(undefined8 *)(uVar4 + lVar13));
        }
        func_0x000107c60fd0(uVar4);
      }
      for (uVar12 = 0; uVar12 < auStack_6c[0]; uVar12 = uVar12 + 1) {
        func_0x000107c61088(uVar10,*(undefined4 *)(lStack_78 + uVar12 * 4));
      }
      func_0x000107c616cc(uVar10,lStack_78,(ulong)auStack_6c[0] << 2);
    }
    uVar5 = uRam000000011381b3f4;
    if (0 < iRam0000000113170120) {
      iRam0000000113170120 = iRam0000000113170120 + -1;
      uVar5 = 1;
    }
    func_0x000107c61314(uVar5);
  } while( true );
}



/* Entry: 1001d2978; end: 1001d298f;  */

void FUN_1001d2978(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdc58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__calloc_11034bf98)();
  return;
}



/* Entry: 1001d2990; end: 1001d2cb3;  */

/* WARNING: Possible PIC construction at 0x0001001d2c0c: Changing call to branch */

void FUN_1001d2990(uint *param_1)

{
  ulong *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar8;
  undefined8 uVar9;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [64];
  undefined8 uStack_e8;
  undefined8 ***pppuStack_d0;
  undefined8 uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  byte bStack_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  byte bStack_34;
  byte bStack_33;
  byte bStack_32;
  byte bStack_31;
  byte bStack_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte bStack_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  long lStack_28;
  
  puVar1 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c616b0(&bStack_38);
  uStack_c0 = (ulong)bStack_38;
  uStack_b8 = (ulong)bStack_37;
  uStack_b0 = (ulong)bStack_36;
  uStack_a8 = (ulong)bStack_35;
  uStack_a0 = (ulong)bStack_34;
  uStack_98 = (ulong)bStack_33;
  uStack_90 = (ulong)bStack_32;
  uStack_88 = (ulong)bStack_31;
  uStack_80 = (ulong)bStack_30;
  uStack_78 = (ulong)bStack_2f;
  uStack_70 = (ulong)bStack_2e;
  uStack_68 = (ulong)bStack_2d;
  uStack_60 = (ulong)bStack_2c;
  uStack_58 = (ulong)bStack_2b;
  uStack_50 = (ulong)bStack_2a;
  uStack_48 = (ulong)bStack_29;
  puVar5 = param_1;
  func_0x000107c61320(param_1,&UNK_10f3b30e3);
  uVar3 = (uint)puVar5;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  func_0x000107c60e78();
  uStack_c8 = 0x1001d2a58;
  uStack_e8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = bRam00000001136c5408 == uVar3;
  pppuStack_d0 = (undefined8 ***)&stack0xfffffffffffffff0;
  if ((bool)uVar2) {
LAB_1001d2c10:
    FUN_1001d3060(uStack_e8);
    if ((bool)uVar2) {
      return;
    }
LAB_1001d2cb0:
    func_0x000107c60e78();
    *param_1 = uVar3;
    uVar7 = (ulong)uRam000000011381bd20;
    if ((int)uRam000000011381bd20 < 10) {
      uRam000000011381bd20 = uRam000000011381bd20 + 1;
      *(ulong *)(uVar7 * 8 + 0x11381bd28) = (ulong)uVar3;
      return;
    }
    func_0x000106aef280(9);
    func_0x000106aee914();
    return;
  }
  bRam00000001136c5408 = (byte)uVar3;
  if (uVar3 == 0) {
    FUN_1001d3060(uStack_e8);
    ppppuVar8 = (undefined8 ****)pppuStack_d0;
    uVar9 = uStack_c8;
    if (!(bool)uVar2) goto LAB_1001d2cb0;
    goto code_r0x000106aeb0b4;
  }
  unaff_x20 = 0x1136c5428;
  FUN_1001d2990(0x1136c5428);
  FUN_1001d2990(0x1136c544d);
  param_1 = (uint *)(ulong)*(uint *)PTR__mach_task_self__11034c5c8;
  puVar5 = param_1;
  func_0x000107c61674(param_1,0x6e,0x1136c5474,0x1136c5554,0x1136c54ac,0x1136c54e4,0x1136c551c);
  uVar3 = (uint)puVar5;
  if (uVar3 == 0) {
    unaff_x20 = 0x1136c5000;
    if (iRam00000001136c540c == 0) {
      puVar5 = param_1;
      func_0x000107c61080(param_1,1,0x1136c540c);
      uVar3 = (uint)puVar5;
      if (uVar3 == 0) {
        puVar5 = param_1;
        func_0x000107c6108c(param_1,iRam00000001136c540c,iRam00000001136c540c,0x14);
        uVar3 = (uint)puVar5;
        if (uVar3 == 0) goto LAB_1001d2b1c;
        func_0x000107c61074();
        func_0x000106aeb174();
        func_0x000106aeb190();
      }
      else {
        func_0x000107c61074();
        func_0x000106aeb174();
        func_0x000106aeb190();
      }
      goto LAB_1001d2c08;
    }
LAB_1001d2b1c:
    puVar5 = param_1;
    func_0x000107c61680(param_1,0x6e,iRam00000001136c540c,0x80000001,5);
    uVar3 = (uint)puVar5;
    if (uVar3 != 0) {
      func_0x000107c61074();
      func_0x000106aeb174();
      func_0x000106aeb190();
      goto LAB_1001d2c08;
    }
    func_0x000107c61210(auStack_128);
    func_0x000107c61214(auStack_128,2);
    iVar4 = 0x136c5418;
    func_0x000107c61238(0x1136c5418,auStack_128,FUN_1001d2d28,&UNK_10f3b2633);
    if (iVar4 == 0) {
      param_1 = (uint *)0x1136c5410;
      func_0x000107c61254(lRam00000001136c5418);
      FUN_1001d2cb4();
      iVar4 = 0x136c5420;
      func_0x000107c61238(0x1136c5420,auStack_128,FUN_1001d2d28,&UNK_10f3b2679);
      if (iVar4 == 0) {
        func_0x000107c6120c(auStack_128);
        param_1 = (uint *)0x1136c5414;
        lVar6 = lRam00000001136c5420;
        func_0x000107c61254();
        uVar3 = (uint)lVar6;
        FUN_1001d2cb4();
        goto LAB_1001d2c10;
      }
      func_0x000107c613cc();
      func_0x000106aeb174();
      func_0x000106aeb190();
    }
    else {
      func_0x000107c613cc();
      func_0x000106aeb174();
      func_0x000106aeb190();
    }
    func_0x000106aee914();
    uVar3 = (uint)auStack_128;
    func_0x000107c6120c();
  }
  else {
    func_0x000107c61074();
    func_0x000106aeb174();
    func_0x000106aeb190();
LAB_1001d2c08:
    func_0x000106aee914();
  }
  puVar1 = (ulong *)auStack_130;
  ppppuVar8 = &pppuStack_d0;
  uVar9 = 0x1001d2c10;
code_r0x000106aeb0b4:
  *(undefined8 *)((long)puVar1 + -0x20) = unaff_x20;
  *(uint **)((long)puVar1 + -0x18) = param_1;
  *(undefined8 *****)((long)puVar1 + -0x10) = ppppuVar8;
  *(undefined8 *)((long)puVar1 + -8) = uVar9;
  func_0x000106aeaff4();
  FUN_1001d32d8();
  if ((lRam00000001136c5420 != 0) && (uRam00000001136c5414 != uVar3)) {
    if (cRam00000001136c5409 == '\x01') {
      _thread_terminate(uRam00000001136c5414);
    }
    else {
      _pthread_cancel();
    }
    uRam00000001136c5414 = 0;
    lRam00000001136c5420 = 0;
  }
  if ((lRam00000001136c5418 != 0) && (uRam00000001136c5410 != uVar3)) {
    if (cRam00000001136c5409 == '\x01') {
      _thread_terminate(uRam00000001136c5410);
    }
    else {
      _pthread_cancel();
    }
    uRam00000001136c5410 = 0;
    lRam00000001136c5418 = 0;
  }
  iRam00000001136c540c = 0;
  return;
}



/* Entry: 1001d2cb4; end: 1001d2cbf;  */

void FUN_1001d2cb4(uint param_1)

{
  ulong uVar1;
  uint *unaff_x19;
  
  *unaff_x19 = param_1;
  uVar1 = (ulong)uRam000000011381bd20;
  if (9 < (int)uRam000000011381bd20) {
    func_0x000106aef280(9);
    func_0x000106aee914();
    return;
  }
  uRam000000011381bd20 = uRam000000011381bd20 + 1;
  *(ulong *)(uVar1 * 8 + 0x11381bd28) = (ulong)param_1;
  return;
}



/* Entry: 1001d2cc0; end: 1001d2d27;  */

void FUN_1001d2cc0(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)uRam000000011381bd20;
  if (9 < (int)uRam000000011381bd20) {
    func_0x000106aef280(9);
    func_0x000106aee914();
    return;
  }
  uRam000000011381bd20 = uRam000000011381bd20 + 1;
  *(undefined8 *)(uVar1 * 8 + 0x11381bd28) = param_1;
  return;
}



/* Entry: 1001d2d28; end: 1001d305f;  */

undefined8 * FUN_1001d2d28(undefined *param_1)

{
  long lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 auStack_7a0 [152];
  undefined8 *puStack_2e0;
  undefined4 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  undefined8 uStack_29c;
  undefined8 uStack_294;
  undefined8 uStack_28c;
  uint uStack_280;
  undefined8 uStack_268;
  int iStack_260;
  long lStack_258;
  undefined8 uStack_250;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c60ee4(&uStack_29c,0x244);
  uStack_2a0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  func_0x000107c61298(param_1);
  uVar2 = param_1 == &UNK_10f3b2633;
  if ((bool)uVar2) {
    FUN_1001d32d8();
    func_0x000107c61694();
    uVar5 = 0x1136c544d;
  }
  else {
    uVar5 = 0x1136c5428;
  }
  FUN_1001d3458();
  while( true ) {
    puVar3 = &uStack_29c;
    func_0x0001001d346c(puVar3,2,0,0x244,uRam00000001136c540c);
    if ((int)puVar3 == 0) break;
    func_0x000107c61074();
    puStack_2e0 = puVar3;
    func_0x000106aeb19c(param_1);
  }
  if ((bRam00000001136c5408 & 1) == 0) goto LAB_1001d2ffc;
  if (pcRam000000011381b428 != (code *)0x0) {
    (*pcRam000000011381b428)();
  }
  uStack_2c8 = 0;
  uStack_2cc = 0;
  func_0x000106aeeda8(&uStack_2c8,&uStack_2cc);
  uRam00000001136c5409 = 1;
  uVar4 = 1;
  func_0x000106aea7f8();
  FUN_1001d32d8();
  if (uVar4 == uRam00000001136c5414) {
    func_0x000106aeaff4();
    func_0x000107c61690(uRam00000001136c5410);
  }
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puRam00000001136c5780 = &UNK_106af0d88;
  puRam00000001136c5778 = &UNK_106af0954;
  uRam00000001136c5770 = 0x1001d3478;
  puRam00000001136c5570 = auStack_7a0;
  func_0x0001001d3478(0x1136c5740);
  uVar4 = (ulong)uStack_280;
  func_0x000106aeeb9c(uVar4,auStack_7a0,1);
  if ((uVar4 & 1) != 0) {
    func_0x000106af0a04(0x1136c5740,500,auStack_7a0);
    lVar1 = 0x1a0;
    if (iStack_260 != 1) {
      lVar1 = 0x2b0;
    }
    uRam00000001136c5580 = *(undefined8 *)((long)auStack_7a0 + lVar1);
  }
  uRam00000001136c5588 = 1;
  puRam00000001136c5560 = PTR_DAT_113170118;
  uRam00000001136c556c = 1;
  uRam00000001136c55b8 = uStack_250;
  lRam00000001136c55b0 = lStack_258;
  uRam00000001136c55c0 = 0x11381b4fa;
  if ((lStack_258 == 2) && ((bRam00000001136c556d & 1) != 0)) {
    lRam00000001136c55b0 = 1;
  }
  uVar2 = iStack_260 + -1 == 5;
  uRam00000001136c55e8 = 8;
  switch(iStack_260 + -1) {
  case 0:
    uVar2 = lRam00000001136c55b0 == 1;
    uRam00000001136c55e8 = 10;
    if ((bool)uVar2) {
      uRam00000001136c55e8 = 0xb;
    }
    break;
  case 1:
    uRam00000001136c55e8 = 4;
    break;
  case 2:
    break;
  case 3:
    uRam00000001136c55e8 = 7;
    break;
  case 4:
    uVar4 = lRam00000001136c55b0 - 0x10000;
    uVar2 = uVar4 == 4;
    if (3 < uVar4) goto LAB_1001d2fb4;
    uRam00000001136c55e8 = *(undefined4 *)(&UNK_10dde43b0 + uVar4 * 4);
    break;
  case 5:
    uRam00000001136c55e8 = 5;
    break;
  default:
LAB_1001d2fb4:
    uRam00000001136c55e8 = 0;
  }
  uRam00000001136c55a0 = 0x1136c5740;
  uRam00000001136c5558 = uVar5;
  iRam00000001136c55a8 = iStack_260;
  func_0x000106aea868(0x1136c5558);
  uRam00000001136c5409 = 0;
  func_0x000106aef138(uStack_2c8,uStack_2cc);
LAB_1001d2ffc:
  uStack_2b8 = uStack_294;
  uStack_2c0 = uStack_29c;
  uStack_2b0 = uStack_28c;
  uStack_2a8 = uStack_268;
  uStack_2a0 = 5;
  puVar3 = &uStack_2c0;
  func_0x0001001d346c(puVar3,1,0x24,0,0);
  FUN_1001d3060(uStack_58);
  if (!(bool)uVar2) {
    func_0x000107c60e78();
    return puVar3;
  }
  return (undefined8 *)0x0;
}



/* Entry: 1001d3060; end: 1001d3073;  */

void FUN_1001d3060(void)

{
  return;
}



/* Entry: 1001d3074; end: 1001d30ab;  */

code * FUN_1001d3074(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((((param_1 != 0) && (*(code **)(param_1 + 8) != (code *)0x0)) &&
      ((**(code **)(param_1 + 8))(), param_1 != 0)) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001001d309c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
  return (code *)0x0;
}



/* Entry: 1001d30ac; end: 1001d30c3;  */

undefined1 FUN_1001d30ac(void)

{
  return uRam00000001136c5408;
}



/* Entry: 1001d30c4; end: 1001d32d7;  */

ulong FUN_1001d30c4(ulong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong extraout_x8;
  ulong extraout_x8_00;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_66 [30];
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = (uint)bRam00000001136c5ca0 == (uint)param_1;
  if (!(bool)uVar1) {
    bRam00000001136c5ca0 = (byte)param_1;
    if ((param_1 & 1) == 0) {
      puVar3 = (uint *)&UNK_10dde4c38;
      for (lVar6 = 0; lVar6 != 0x80; lVar6 = lVar6 + 0x10) {
        param_1 = (ulong)*puVar3;
        func_0x000107c61308(param_1,uRam00000001136c5ca8 + lVar6,0);
        puVar3 = puVar3 + 1;
      }
      uRam00000001136c5cb0 = 0;
      lRam00000001136c5cb8 = 0;
      uRam00000001136c5cc0 = 0;
      uVar1 = 1;
    }
    else {
      FUN_1001d2990(0x1136c5cc8);
      if (lRam00000001136c5cb8 == 0) {
        lRam00000001136c5cb8 = 0x20000;
        uVar2 = 0x20000;
        func_0x000107c610a0();
        uRam00000001136c5cb0 = uVar2;
      }
      param_1 = 0x1136c5cb0;
      func_0x000107c6130c(0x1136c5cb0,0);
      if ((int)param_1 == 0) {
        if (uRam00000001136c5ca8 == 0) {
          param_1 = 0x80;
          func_0x000107c610a0();
          uRam00000001136c5ca8 = param_1;
        }
        uStack_70 = 0x24100000000;
        puStack_78 = &UNK_106aeb524;
        lVar5 = -0x10;
        for (lVar6 = 0; uVar1 = lVar6 == 8, !(bool)uVar1; lVar6 = lVar6 + 1) {
          uVar4 = (ulong)*(uint *)(&UNK_10dde4c38 + lVar6 * 4);
          param_1 = uVar4;
          func_0x000107c61308(uVar4,&puStack_78,uRam00000001136c5ca8 + lVar5 + 0x10);
          if ((int)param_1 != 0) {
            func_0x000106af08a4();
            if (uVar4 == 0) {
              func_0x000107c61318(auStack_66,0x1e,"%d");
            }
            func_0x000107c60e5c();
            func_0x000107c613cc();
            func_0x000106aeb678();
            param_1 = extraout_x8_00;
            func_0x000106aee914(extraout_x8_00);
            while( true ) {
              uVar1 = lVar6 + -1 == 0;
              if (lVar6 < 1) break;
              param_1 = (ulong)*(uint *)(&UNK_10dde4c34 + lVar6 * 4);
              func_0x000107c61308(param_1,uRam00000001136c5ca8 + lVar5,0);
              lVar5 = lVar5 + -0x10;
              lVar6 = lVar6 + -1;
            }
            break;
          }
          lVar5 = lVar5 + 0x10;
        }
      }
      else {
        func_0x000107c60e5c();
        func_0x000107c613cc();
        func_0x000106aeb678();
        param_1 = extraout_x8;
        func_0x000106aee914(extraout_x8);
      }
    }
  }
  FUN_1001d3310(uStack_48);
  if ((bool)uVar1) {
    return param_1;
  }
  func_0x000107c60e78();
  func_0x000107c61098();
  func_0x000107c61088(*(undefined4 *)PTR__mach_task_self__11034c5c8,param_1);
  return param_1 & 0xffffffff;
}



/* Entry: 1001d32d8; end: 1001d330f;  */

ulong FUN_1001d32d8(ulong param_1)

{
  func_0x000107c61098();
  func_0x000107c61088(*(undefined4 *)PTR__mach_task_self__11034c5c8,param_1);
  return param_1 & 0xffffffff;
}



/* Entry: 1001d3310; end: 1001d333b;  */

void FUN_1001d3310(void)

{
  return;
}



/* Entry: 1001d333c; end: 1001d3387;  */

void FUN_1001d333c(undefined *param_1)

{
  undefined *puVar1;
  
  if ((uint)bRam00000001136c5aa8 != (uint)param_1) {
    bRam00000001136c5aa8 = (byte)param_1;
    puVar1 = puRam00000001136c5ab0;
    if ((uint)param_1 != 0) {
      func_0x000107c60af4();
      puVar1 = &UNK_106aeb1a8;
      puRam00000001136c5ab0 = param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbc44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__NSSetUncaughtExceptionHandler_1103455e0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1001d3388; end: 1001d33af;  */

undefined1 FUN_1001d3388(void)

{
  return uRam00000001136c5aa8;
}



/* Entry: 1001d33b0; end: 1001d3457;  */

void FUN_1001d33b0(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if ((uint)bRam00000001136c51e9 != (uint)param_1) {
    bVar1 = (byte)param_1;
    bRam00000001136c51e9 = bVar1;
    if ((uint)param_1 == 0) {
      func_0x000107c60e00(puRam00000001136c51f0);
      bRam00000001136c51e8 = bVar1;
    }
    else {
      if ((bRam00000001136c51ea & 1) == 0) {
        bRam00000001136c51ea = 1;
        func_0x0001001d33a0();
        *(undefined **)(param_1 + 0x40) = &UNK_106af0d88;
        *(undefined8 *)(param_1 + 0x30) = 0x1001d3478;
        *(undefined **)(param_1 + 0x38) = &UNK_106af0954;
        func_0x0001001d3478();
      }
      FUN_1001d2990(0x1136c51f8);
      puVar2 = &UNK_106aeac30;
      func_0x000107c60e00();
      bRam00000001136c51e8 = bVar1;
      puRam00000001136c51f0 = puVar2;
    }
  }
  return;
}



/* Entry: 1001d3458; end: 1001d34c3;  */

void FUN_1001d3458(void)

{
  return;
}



/* Entry: 1001d34c4; end: 1001d3a7f;  */

void FUN_1001d34c4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  char *pcVar16;
  
  if (((bRam00000001136c6240 == param_1) || (bRam00000001136c6240 = (byte)param_1, param_1 == 0)) ||
     ((bRam00000001136c6241 & 1) != 0)) {
    return;
  }
  bRam00000001136c6241 = 1;
  puVar5 = (undefined8 *)PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c4c12c();
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4539c();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  puVar15 = puVar5;
  func_0x000107c3ee14();
  iVar1 = (int)puVar15;
  func_0x000107c61180();
  func_0x000107c4e440();
  func_0x000107c61180();
  func_0x000107c49d0c();
  func_0x0001001d5354();
  func_0x0001001d535c();
  puVar15 = (undefined8 *)PTR__OBJC_CLASS___NSBundle_1126aea78;
  if (iVar1 != 0) {
    func_0x000107c3ee14(puVar5);
    func_0x000107c61180();
    func_0x000107c3ac0c();
    func_0x000107c61180();
    func_0x000107c3ac0c();
    func_0x000107c61180();
    func_0x000107c3ee20();
    func_0x000107c61180();
    func_0x0001001d5d6c();
    FUN_1001d5940();
    func_0x0001001d5354();
    func_0x000107c4539c();
    func_0x000107c61180();
    func_0x000107c4d9e8();
    func_0x000107c61180();
    FUN_1001d5c90();
    func_0x0001001d5354();
    func_0x0001001d535c();
    puVar7 = puVar15;
  }
  lVar8 = 0;
  func_0x000107c60e90();
  lVar9 = lVar8;
  func_0x000107c60af8();
  func_0x000107c61180();
  func_0x0001001d5918();
  lRam00000001136c6320 = lVar9;
  func_0x0001001d5354();
  puVar10 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c5c620();
  func_0x000107c61180();
  FUN_1001d5920();
  puRam00000001136c6250 = puVar10;
  FUN_1001d5940();
  func_0x0001001d5354();
  puVar10 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c40efc();
  func_0x000107c61180();
  func_0x000107c5c650();
  func_0x000107c61180();
  FUN_1001d5920();
  puRam00000001136c6258 = puVar10;
  FUN_1001d5940();
  func_0x0001001d5354();
  puVar10 = &DAT_10f3678c5;
  FUN_1001d5954();
  puVar11 = &DAT_10f3678bc;
  puRam00000001136c6260 = puVar10;
  FUN_1001d5954();
  puVar10 = &UNK_10f3b2855;
  puRam00000001136c6268 = puVar11;
  FUN_1001d5954();
  puVar11 = &UNK_10f3b2862;
  puRam00000001136c6270 = puVar10;
  FUN_1001d5954();
  iVar1 = 0xf3b28a3;
  puRam00000001136c6278 = puVar11;
  FUN_1001d5a40(&UNK_10f3b28a3,0);
  uRam00000001136c6280 = iVar1 != -1;
  puVar10 = &UNK_10f3b2871;
  FUN_1001d5ac4();
  func_0x0001001d5b34();
  uVar12 = 0;
  puRam00000001136c6288 = puVar10;
  func_0x000107c61698();
  func_0x0001001d5b34();
  uRam00000001136c6290 = uVar12;
  FUN_1001d5be4();
  func_0x000107c61180();
  func_0x0001001d5918();
  uRam00000001136c6298 = uVar12;
  func_0x0001001d5354();
  puVar15 = puVar6;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x0001001d5918();
  puRam00000001136c62a0 = puVar15;
  func_0x0001001d5354();
  puVar15 = puVar6;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x0001001d5918();
  puRam00000001136c62a8 = puVar15;
  func_0x0001001d5354();
  puVar15 = puVar6;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x0001001d5918();
  puRam00000001136c62b0 = puVar15;
  func_0x0001001d5354();
  puVar15 = puVar6;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x0001001d5918();
  puRam00000001136c62b8 = puVar15;
  func_0x0001001d5354();
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x0001001d5918();
  puRam00000001136c62c0 = puVar6;
  func_0x0001001d5354();
  FUN_1001d5be4();
  func_0x000107c61180();
  if (puVar6 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
    puVar14 = puVar6;
  }
  else {
    puVar13 = puVar6;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    FUN_1001d5ca8();
    if (puVar13 == (undefined8 *)0x0) {
      func_0x000107c4aa34();
      func_0x000107c61180();
      func_0x000107c61178();
      func_0x000107c3ac4c();
      FUN_1001d5ca8();
      puVar14 = puVar6;
      func_0x0001001d5d6c();
      puVar15 = (undefined8 *)0x0;
      puVar13 = puVar6;
      if (puVar6 == (undefined8 *)0x0) goto LAB_1001d38ac;
    }
    uVar12 = 0;
    func_0x000107c60868(0,*puVar13,puVar13[1]);
    puVar15 = (undefined8 *)0x0;
    func_0x000107c6086c(0,uVar12);
    func_0x000107c607f0(uVar12);
    FUN_1001d5920();
    puVar14 = puVar15;
    func_0x0001001d5d6c();
  }
LAB_1001d38ac:
  func_0x0001001d5354();
  puRam00000001136c62c8 = puVar15;
  FUN_1001d5d80();
  puRam00000001136c62d0 = puVar14;
  func_0x0001001d5d74();
  uVar2 = SUB84(puVar14,0);
  uRam00000001136c62d8 = uVar2;
  FUN_1001d5ea8();
  uRam00000001136c62e0 = *(undefined8 *)(lVar8 + 4);
  puVar10 = PTR__OBJC_CLASS___NSTimeZone_1126b7518;
  uRam00000001136c62dc = uVar2;
  func_0x000107c4b834();
  func_0x000107c61180();
  func_0x000107c3ce94();
  func_0x000107c61180();
  func_0x0001001d5918();
  puRam00000001136c62e8 = puVar10;
  func_0x0001001d5354();
  func_0x0001001d535c();
  puVar10 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c4f2c4();
  func_0x000107c61180();
  func_0x0001001d5918();
  puRam00000001136c62f0 = puVar10;
  func_0x0001001d5354();
  func_0x0001001d535c();
  puVar10 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c4f2a8();
  uRam00000001136c62f8 = SUB84(puVar10,0);
  func_0x0001001d535c();
  func_0x000107c61010();
  uRam00000001136c62fc = SUB84(puVar10,0);
  FUN_1001dd9b8();
  func_0x000107c61180();
  func_0x000107c4aa34();
  func_0x000107c61180();
  func_0x000107c49d0c();
  puVar11 = puVar10;
  func_0x0001001d5354();
  func_0x0001001d535c();
  if (((ulong)puVar10 & 1) == 0) {
    FUN_1001dd9b8();
    func_0x000107c61180();
    pcVar16 = "unknown";
    if (puVar11 != (undefined *)0x0) {
      func_0x000107c4aa34();
      uVar3 = (uint)puVar11;
      func_0x000107c61180();
      func_0x000107c49d0c();
      func_0x0001001d5354();
      puVar10 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x000107c415e0();
      uVar4 = (uint)puVar10;
      func_0x000107c61180();
      func_0x000107c43418();
      func_0x0001001d5354();
      func_0x0001001d535c();
      pcVar16 = "app store";
      if ((uVar3 & uVar4 & 1) == 0) {
        pcVar16 = "unknown";
      }
    }
  }
  else {
    pcVar16 = "test";
  }
  puVar10 = &UNK_10f3b2898;
  pcRam00000001136c6300 = pcVar16;
  FUN_1001dde08();
  puRam00000001136c6310 = puVar10;
  FUN_1001d5920();
  puRam00000001136c6318 = puVar7;
  FUN_1001d5c90();
  func_0x0001001d5c98();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1001d3a80; end: 1001d3ae7;  */

void FUN_1001d3a80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 1;
  }
  else {
    if (param_1 != 1) {
      if (param_1 == 0) {
        func_0x000107c5d210(PTR_PTR_1126b71e8);
        func_0x000107c61180();
      }
      goto LAB_1001d3ae0;
    }
    uVar1 = 0;
  }
  func_0x000107c42b9c(PTR_PTR_1126b71e8,param_2,uVar1);
  func_0x000107c61180();
LAB_1001d3ae0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1001d3ae8; end: 1001d3b03;  */

void FUN_1001d3ae8(undefined8 param_1)

{
  FUN_1000285a8(0x112dea4c0,&UNK_10d9b61d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100794c1c,param_1);
  return;
}



/* Entry: 1001d3b04; end: 1001d3b53;  */

void FUN_1001d3b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d3b54; end: 1001d3b73;  */

void FUN_1001d3b54(void)

{
  func_0x000107c61168(&PTR_PTR_112dea538);
  return;
}



/* Entry: 1001d3b74; end: 1001d3bbf;  */

void FUN_1001d3b74(undefined8 param_1)

{
  FUN_1000285a8(0x112dc6740,&UNK_10d9867c0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_10175328c,param_1);
  return;
}



/* Entry: 1001d3bc0; end: 1001d3be3;  */

void FUN_1001d3bc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104374b8;
  FUN_1000285a8(0x112df3bb8,&UNK_10d9c2308);
  func_0x000107c613fc(&UNK_1104374b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100289218,puVar1);
  return;
}



/* Entry: 1001d3be4; end: 1001d3c63;  */

void FUN_1001d3be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  FUN_1000285a8(param_3,param_4);
  func_0x000107c613fc(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(param_6,param_5);
  return;
}



/* Entry: 1001d3c64; end: 1001d3ca3;  */

void FUN_1001d3c64(void)

{
  FUN_1000285a8(0x112df3bc8,&UNK_10d9c2318);
  FUN_1000823a8(FUN_1002bf888,0);
  return;
}



/* Entry: 1001d3ca4; end: 1001d3cc3;  */

void FUN_1001d3ca4(void)

{
  func_0x000107c61168(&PTR_PTR_112df3c58);
  return;
}



/* Entry: 1001d3cc4; end: 1001d3cdf;  */

void FUN_1001d3cc4(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd658,&UNK_10d9a3450);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100663478,param_1);
  return;
}



/* Entry: 1001d3ce0; end: 1001d3d2f;  */

void FUN_1001d3ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d3d30; end: 1001d3d4f;  */

void FUN_1001d3d30(void)

{
  func_0x000107c61168(&PTR_PTR_112ddd6d0);
  return;
}



/* Entry: 1001d3d50; end: 1001d3d87;  */

void FUN_1001d3d50(undefined8 param_1)

{
  FUN_1000285a8(0x112ddd660,&UNK_10d9a3458);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10066341c,param_1);
  return;
}



/* Entry: 1001d3d88; end: 1001d3dd7;  */

void FUN_1001d3d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1001d3dd8; end: 1001d3df7;  */

void FUN_1001d3dd8(void)

{
  func_0x000107c61168(&PTR_PTR_112df6110);
  return;
}


