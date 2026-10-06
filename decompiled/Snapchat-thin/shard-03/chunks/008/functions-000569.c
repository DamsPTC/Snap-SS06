/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102de11b8; end: 102de1247;  */

void FUN_102de11b8(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de17f4;
  plVar2[0xe] = lVar1;
  plVar2[0xf] = lVar5;
  plVar2[0xc] = param_4;
  plVar2[0xd] = lVar3;
  plVar2[10] = param_2;
  plVar2[0xb] = param_3;
  plVar2[9] = param_1;
  lVar3 = 0;
  func_0x000107c5fcbc();
  plVar2[0x10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x11] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de37fc,0,0);
  return;
}



/* Entry: 102de1248; end: 102de1297;  */

void FUN_102de1248(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102de1298;
  *(undefined1 *)(plVar1 + 0xd) = param_1;
  plVar2 = (long *)0x150;
  func_0x000107c615b8();
  plVar1[8] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = 0x102de22d0;
  plVar2[0x20] = (long)(plVar1 + 2);
  plVar2[0x21] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x24] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de1298; end: 102de12d3;  */

void FUN_102de1298(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de12d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de12d4; end: 102de137b;  */

void FUN_102de12d4(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de17fc;
  plVar2[0x16] = lVar5;
  plVar2[0x17] = unaff_x20 + 0x28;
  plVar2[0x14] = lVar4;
  plVar2[0x15] = lVar1;
  plVar2[0x12] = param_4;
  plVar2[0x13] = param_5;
  *(undefined1 *)(plVar2 + 0x34) = param_3;
  plVar2[0x10] = param_1;
  plVar2[0x11] = param_2;
  lVar4 = *(long *)(unaff_x20 + 0x40);
  plVar2[0x18] = *(long *)(unaff_x20 + 0x30);
  plVar2[0x19] = lVar4;
  plVar2[0x1a] = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar2[0x1b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x1c] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2548,0,0);
  return;
}



/* Entry: 102de137c; end: 102de140b;  */

void FUN_102de137c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de1800;
  plVar2[0xe] = lVar1;
  plVar2[0xf] = lVar5;
  plVar2[0xc] = param_4;
  plVar2[0xd] = lVar3;
  plVar2[10] = param_2;
  plVar2[0xb] = param_3;
  plVar2[9] = param_1;
  lVar3 = 0;
  func_0x000107c5fcbc();
  plVar2[0x10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x11] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de37fc,0,0);
  return;
}



/* Entry: 102de140c; end: 102de145b;  */

void FUN_102de140c(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102de1804;
  *(undefined1 *)(plVar1 + 0xd) = param_1;
  plVar2 = (long *)0x150;
  func_0x000107c615b8();
  plVar1[8] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = 0x102de22d0;
  plVar2[0x20] = (long)(plVar1 + 2);
  plVar2[0x21] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x24] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de145c; end: 102de1503;  */

void FUN_102de145c(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de1808;
  plVar2[0x16] = lVar5;
  plVar2[0x17] = unaff_x20 + 0x28;
  plVar2[0x14] = lVar4;
  plVar2[0x15] = lVar1;
  plVar2[0x12] = param_4;
  plVar2[0x13] = param_5;
  *(undefined1 *)(plVar2 + 0x34) = param_3;
  plVar2[0x10] = param_1;
  plVar2[0x11] = param_2;
  lVar4 = *(long *)(unaff_x20 + 0x40);
  plVar2[0x18] = *(long *)(unaff_x20 + 0x30);
  plVar2[0x19] = lVar4;
  plVar2[0x1a] = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar2[0x1b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x1c] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2548,0,0);
  return;
}



/* Entry: 102de1504; end: 102de1593;  */

void FUN_102de1504(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de180c;
  plVar2[0xe] = lVar1;
  plVar2[0xf] = lVar5;
  plVar2[0xc] = param_4;
  plVar2[0xd] = lVar3;
  plVar2[10] = param_2;
  plVar2[0xb] = param_3;
  plVar2[9] = param_1;
  lVar3 = 0;
  func_0x000107c5fcbc();
  plVar2[0x10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x11] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de37fc,0,0);
  return;
}



/* Entry: 102de1594; end: 102de15e3;  */

void FUN_102de1594(undefined1 param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102de1810;
  *(undefined1 *)(plVar1 + 0xd) = param_1;
  plVar2 = (long *)0x150;
  func_0x000107c615b8();
  plVar1[8] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = 0x102de22d0;
  plVar2[0x20] = (long)(plVar1 + 2);
  plVar2[0x21] = unaff_x20;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x24] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de15e4; end: 102de162f;  */

void FUN_102de15e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102de1630; end: 102de16d7;  */

void FUN_102de1630(long param_1,long param_2,undefined1 param_3,long param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x1b0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de1814;
  plVar2[0x16] = lVar5;
  plVar2[0x17] = unaff_x20 + 0x28;
  plVar2[0x14] = lVar4;
  plVar2[0x15] = lVar1;
  plVar2[0x12] = param_4;
  plVar2[0x13] = param_5;
  *(undefined1 *)(plVar2 + 0x34) = param_3;
  plVar2[0x10] = param_1;
  plVar2[0x11] = param_2;
  lVar4 = *(long *)(unaff_x20 + 0x40);
  plVar2[0x18] = *(long *)(unaff_x20 + 0x30);
  plVar2[0x19] = lVar4;
  plVar2[0x1a] = *(long *)(unaff_x20 + 0x50);
  lVar4 = 0;
  func_0x000107c5fcbc();
  plVar2[0x1b] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar2[0x1c] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x1d] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2548,0,0);
  return;
}



/* Entry: 102de16d8; end: 102de1703;  */

void FUN_102de16d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102de1704; end: 102de1793;  */

void FUN_102de1704(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x102de1818;
  plVar2[0xe] = lVar1;
  plVar2[0xf] = lVar5;
  plVar2[0xc] = param_4;
  plVar2[0xd] = lVar3;
  plVar2[10] = param_2;
  plVar2[0xb] = param_3;
  plVar2[9] = param_1;
  lVar3 = 0;
  func_0x000107c5fcbc();
  plVar2[0x10] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x11] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x12] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de37fc,0,0);
  return;
}



/* Entry: 102de1794; end: 102de181b;  */

void FUN_102de1794(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102ddf6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de181c; end: 102de187b;  */

void FUN_102de181c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5ed3c(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x113804fb0);
  func_0x000107c5ed34(uVar1,0xd000000000000010,0x800000010f10e380);
  return;
}



/* Entry: 102de187c; end: 102de18e7;  */

void FUN_102de187c(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de18e8,uVar1,uVar2);
  return;
}



/* Entry: 102de18e8; end: 102de1923;  */

void FUN_102de18e8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5eaa0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102de1920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de1924; end: 102de1993;  */

void FUN_102de1924(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  
  if (lRam0000000112f198f8 != -1) {
    func_0x000107c61568(0x112f198f8,FUN_102de181c);
  }
  lVar1 = 0;
  func_0x000107c5ed3c();
  lVar2 = lVar1;
  func_0x000100028790();
                    /* WARNING: Could not recover jumptable at 0x000102de1978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,lVar2,lVar1);
  return;
}



/* Entry: 102de1994; end: 102de1a13;  */

uint FUN_102de1994(uint param_1)

{
  func_0x000107c5ea60();
  return param_1 & 1;
}



/* Entry: 102de1a14; end: 102de1a7f;  */

void FUN_102de1a14(undefined8 param_1)

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
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de1a80,uVar1,uVar2);
  return;
}



/* Entry: 102de1a80; end: 102de1abb;  */

void FUN_102de1a80(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c5eaa0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102de1ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de1abc; end: 102de1abf;  */

void FUN_102de1abc(void)

{
  return;
}



/* Entry: 102de1ac0; end: 102de1aeb;  */

void FUN_102de1ac0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de1c9c();
  func_0x000107c5ea7c(param_1,uVar1);
  return;
}



/* Entry: 102de1aec; end: 102de1af7;  */

undefined1  [16] FUN_102de1aec(void)

{
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 102de1af8; end: 102de1b23;  */

void FUN_102de1af8(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c6142c(param_3);
  *param_1 = 1;
  return;
}



/* Entry: 102de1b24; end: 102de1b3b;  */

undefined1  [16] FUN_102de1b24(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102de1b3c; end: 102de1b8b;  */

void FUN_102de1b3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102de1b8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102de1b8c; end: 102de1bcb;  */

void FUN_102de1b8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db508ac;
  func_0x000107c61520(&UNK_10db508ac,&UNK_1105d33b0);
  puRam0000000112f19908 = puVar1;
  return;
}



/* Entry: 102de1bcc; end: 102de1bcf;  */

void FUN_102de1bcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db506b0;
  func_0x000107c61520(&UNK_10db506b0,&UNK_1105d3370);
  puRam0000000112f19910 = puVar1;
  return;
}



/* Entry: 102de1bd0; end: 102de1c0f;  */

void FUN_102de1bd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db506b0;
  func_0x000107c61520(&UNK_10db506b0,&UNK_1105d3370);
  puRam0000000112f19910 = puVar1;
  return;
}



/* Entry: 102de1c10; end: 102de1c13;  */

void FUN_102de1c10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db507bc;
  func_0x000107c61520(&UNK_10db507bc,&UNK_1105d3390);
  puRam0000000112f19918 = puVar1;
  return;
}



/* Entry: 102de1c14; end: 102de1c53;  */

void FUN_102de1c14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db507bc;
  func_0x000107c61520(&UNK_10db507bc,&UNK_1105d3390);
  puRam0000000112f19918 = puVar1;
  return;
}



/* Entry: 102de1c54; end: 102de1c57;  */

void FUN_102de1c54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db507e4;
  func_0x000107c61520(&UNK_10db507e4,&UNK_1105d3390);
  puRam0000000112f19920 = puVar1;
  return;
}



/* Entry: 102de1c58; end: 102de1c97;  */

void FUN_102de1c58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db507e4;
  func_0x000107c61520(&UNK_10db507e4,&UNK_1105d3390);
  puRam0000000112f19920 = puVar1;
  return;
}



/* Entry: 102de1c98; end: 102de1c9b;  */

void FUN_102de1c98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db506e0;
  func_0x000107c61520(&UNK_10db506e0,&UNK_1105d3370);
  puRam0000000112f19928 = puVar1;
  return;
}



/* Entry: 102de1c9c; end: 102de1cdb;  */

void FUN_102de1c9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db506e0;
  func_0x000107c61520(&UNK_10db506e0,&UNK_1105d3370);
  puRam0000000112f19928 = puVar1;
  return;
}



/* Entry: 102de1cdc; end: 102de1cdf;  */

void FUN_102de1cdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50778;
  func_0x000107c61520(&UNK_10db50778,&UNK_1105d3370);
  puRam0000000112f19930 = puVar1;
  return;
}



/* Entry: 102de1ce0; end: 102de1d1f;  */

void FUN_102de1ce0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50778;
  func_0x000107c61520(&UNK_10db50778,&UNK_1105d3370);
  puRam0000000112f19930 = puVar1;
  return;
}



/* Entry: 102de1d20; end: 102de1d23;  */

void FUN_102de1d20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db507a0;
  func_0x000107c61520(&UNK_10db507a0,&UNK_1105d3370);
  puRam0000000112f19938 = puVar1;
  return;
}



/* Entry: 102de1d24; end: 102de1d63;  */

void FUN_102de1d24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db507a0;
  func_0x000107c61520(&UNK_10db507a0,&UNK_1105d3370);
  puRam0000000112f19938 = puVar1;
  return;
}



/* Entry: 102de1d64; end: 102de1d73;  */

void FUN_102de1d64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e731060,1);
  return;
}



/* Entry: 102de1d74; end: 102de1db3;  */

void FUN_102de1d74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102de1c9c();
  uStack_30 = param_2;
  uStack_28 = param_1;
  func_0x000107c614f4(&uStack_30,
                      PTR___s10AppIntents0A6IntentPAAE16parameterSummaryQrvpZQOMQ_110345f50,1);
  return;
}



/* Entry: 102de1db4; end: 102de1dd7;  */

void FUN_102de1db4(void)

{
  func_0x0001000834e4();
  return;
}



/* Entry: 102de1dd8; end: 102de1e9f;  */

void FUN_102de1dd8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  
  lVar3 = 0x112f19900;
  func_0x0001000285a8(0x112f19900,&UNK_10db50668);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102de1b8c();
  func_0x000107c606ec(&stack0xffffffffffffffb0 + -extraout_x8,&UNK_1105d33b0,&UNK_1105d33b0,param_1,
                      uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,lVar3);
  return;
}



/* Entry: 102de1ea0; end: 102de1ed3;  */

undefined1  [16] FUN_102de1ea0(void)

{
  return ZEXT816(0x1105d3370);
}



/* Entry: 102de1ed4; end: 102de1f13;  */

void FUN_102de1ed4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db50884;
  func_0x000107c61520(&UNK_10db50884,&UNK_1105d33b0);
  puRam0000000112f19940 = puVar1;
  return;
}



/* Entry: 102de1f14; end: 102de1f17;  */

void FUN_102de1f14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5085c;
  func_0x000107c61520(&UNK_10db5085c,&UNK_1105d33b0);
  puRam0000000112f19948 = puVar1;
  return;
}



/* Entry: 102de1f18; end: 102de1f57;  */

void FUN_102de1f18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f19948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5085c;
  func_0x000107c61520(&UNK_10db5085c,&UNK_1105d33b0);
  puRam0000000112f19948 = puVar1;
  return;
}



/* Entry: 102de1f58; end: 102de1faf;  */

void FUN_102de1f58(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102de1fb0;
  plVar2 = (long *)0x310;
  func_0x000107c615b8();
  plVar1[2] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = (long)&UNK_102fede28;
  *(undefined1 *)((long)plVar2 + 0x62) = 1;
  plVar2[0x52] = param_2;
  plVar2[0x51] = param_1;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar2[0x53] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x54] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x55] = uVar4;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x56] = uVar4;
  lVar3 = 0;
  func_0x000107c5eb9c();
  plVar2[0x57] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x58] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x59] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_102fef1f4,0,0);
  return;
}



/* Entry: 102de1fb0; end: 102de1ff3;  */

void FUN_102de1fb0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de1ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 102de1ff4; end: 102de204b;  */

void FUN_102de1ff4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102de204c;
  plVar2 = (long *)0x310;
  func_0x000107c615b8();
  plVar1[2] = (long)plVar2;
  *plVar2 = (long)plVar1;
  plVar2[1] = (long)&UNK_102ff1ce0;
  *(undefined1 *)((long)plVar2 + 0x62) = 0;
  plVar2[0x52] = param_2;
  plVar2[0x51] = param_1;
  lVar3 = 0;
  func_0x000107c5eea4();
  plVar2[0x53] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x54] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x55] = uVar4;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x56] = uVar4;
  lVar3 = 0;
  func_0x000107c5eb9c();
  plVar2[0x57] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x58] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x59] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_102fef1f4,0,0);
  return;
}



/* Entry: 102de204c; end: 102de20d7;  */

void FUN_102de204c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de2084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de20d8; end: 102de227b;  */

void FUN_102de20d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,2,0);
  if (iVar1 == 0) {
    if (lRam0000000112f19bc0 != -1) {
      func_0x000107c61568(0x112f19bc0,&UNK_100935060);
    }
    uVar4 = uRam0000000113805088;
    puVar2 = &UNK_1105d3520;
    func_0x000107c613fc(&UNK_1105d3520,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x50) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    puVar5 = &UNK_10db50960;
    puVar6 = &UNK_10db50958;
    puVar7 = &UNK_10db50950;
    puVar3 = &UNK_1105d3548;
  }
  else {
    if (lRam0000000112f19bc0 != -1) {
      func_0x000107c61568(0x112f19bc0,&UNK_100935060);
    }
    uVar4 = uRam0000000113805088;
    puVar2 = &UNK_1105d3570;
    func_0x000107c613fc(&UNK_1105d3570,0x58,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined **)(puVar2 + 0x28) = &UNK_10db50930;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined **)(puVar2 + 0x38) = &UNK_10db50938;
    puVar5 = &UNK_10db50978;
    puVar6 = &UNK_10db50970;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined **)(puVar2 + 0x48) = &UNK_10db50940;
    puVar7 = &UNK_10db50968;
    puVar3 = &UNK_1105d3598;
    *(undefined8 *)(puVar2 + 0x50) = 0;
  }
  func_0x000107c613fc(puVar3,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  func_0x000107c61580(uVar4,3);
  *param_1 = puVar7;
  param_1[1] = uVar4;
  param_1[2] = puVar6;
  param_1[3] = puVar2;
  param_1[4] = puVar5;
  param_1[5] = puVar3;
  func_0x000107c61580(param_3,2);
  return;
}



/* Entry: 102de227c; end: 102de2333;  */

void FUN_102de227c(undefined1 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x68) = param_1;
  plVar1 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x102de22d0;
  plVar1[0x20] = unaff_x22 + 0x10;
  plVar1[0x21] = param_2;
  lVar2 = 0;
  func_0x000107c5eec8();
  plVar1[0x22] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar1[0x23] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x24] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de2334; end: 102de23db;  */

void FUN_102de2334(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c5fd64();
  if (lVar4 != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000102de2388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar2 = *(int **)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x18);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102de23dc;
                    /* WARNING: Could not recover jumptable at 0x000102de23d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined1 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 102de23dc; end: 102de2547;  */

void FUN_102de23dc(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    uVar1 = 0x102de2438;
  }
  else {
    uVar1 = 0x102de247c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(uVar1,0,0);
  return;
}



/* Entry: 102de2548; end: 102de26ff;  */

void FUN_102de2548(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c5fd64();
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
  func_0x000107c6157c(uVar10);
  uVar7 = 0x112f19950;
  func_0x0001000285a8(0x112f19950,&UNK_10db509b0);
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar7;
  func_0x000100075034(unaff_x22 + 0x10,FUN_102de959c,0,uVar7);
  *(undefined8 *)(unaff_x22 + 0xf8) = 0;
  func_0x000107c61574(uVar10);
  bVar1 = *(long *)(unaff_x22 + 0x10) == 0;
  if (!bVar1) {
    FUN_102de4b7c(*(long *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                  *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                  *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  }
  *(bool *)(unaff_x22 + 0x1a1) = bVar1;
  puVar5 = *(undefined8 **)(unaff_x22 + 0xb8);
  (**(code **)(unaff_x22 + 0xa8))(0,0,bVar1);
  piVar8 = (int *)*puVar5;
  *(undefined8 *)(unaff_x22 + 0x100) = puVar5[2];
  *(undefined8 *)(unaff_x22 + 0x108) = puVar5[4];
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    plVar6 = (long *)(ulong)(uint)piVar8[1];
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uVar3);
    func_0x000107c6157c(uVar4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102de2700;
                    /* WARNING: Could not recover jumptable at 0x000102de26b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar8 + (long)iVar2))
              (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
  uVar7 = 0;
  (**(code **)(unaff_x22 + 0xa8))(0,2,bVar1);
  FUN_102ddc4b0();
  func_0x000107c613f8(&UNK_1105d4120,uVar7,0,0);
  func_0x000107c61654();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x000102de25a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de2700; end: 102de274f;  */

void FUN_102de2700(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x1a2) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2750,0,0);
  return;
}



/* Entry: 102de2750; end: 102de2a87;  */

void FUN_102de2750(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(byte *)(unaff_x22 + 0x1a2) & 1) != 0) {
    piVar9 = *(int **)(unaff_x22 + 0x108);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE_00 = (code *)((long)*piVar9 + (long)piVar9);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x118) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102de2a88;
LAB_102de2998:
                    /* WARNING: Could not recover jumptable at 0x000102de29b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar3 = &UNK_1105d3610;
  func_0x000107c613fc(&UNK_1105d3610,0x21,7);
  *(undefined **)(unaff_x22 + 0x128) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  puVar3[0x20] = uVar2;
  func_0x000107c61434(uVar10);
  func_0x000107c5fd64();
  if (lVar12 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
    func_0x000107c6157c(uVar13);
    uVar7 = 0;
    func_0x000100075034(unaff_x22 + 0x40,FUN_102de959c,0,uVar10);
    func_0x000107c61574(uVar13);
    piVar9 = *(int **)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x68);
    if (*(long *)(unaff_x22 + 0x40) != 0) {
      iVar1 = *piVar9;
      plVar6 = (long *)(ulong)(uint)piVar9[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x148) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_102de2e28;
                    /* WARNING: Could not recover jumptable at 0x000102de28e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)piVar9 + (long)iVar1))
                (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                 *(undefined1 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x90),
                 *(undefined8 *)(unaff_x22 + 0x98));
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    piVar9 = *(int **)(unaff_x22 + 0x90);
    puVar4 = PTR___sytN_11034f1b0 + 8;
    func_0x00010488bd80();
    *(undefined **)(unaff_x22 + 0x158) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
    puVar5 = &UNK_1105d3638;
    func_0x000107c613fc(&UNK_1105d3638,0x38,7);
    *(undefined **)(unaff_x22 + 0x168) = puVar5;
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(undefined **)(puVar5 + 0x18) = &UNK_10db50a00;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    *(undefined **)(puVar5 + 0x28) = puVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar7;
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(uVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x170) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102de30b8;
    puVar3 = &UNK_10db50a08;
  }
  else {
    func_0x000107c61574(puVar3);
    if ((*(byte *)(unaff_x22 + 0x1a2) & 1) == 0) {
      uVar11 = *(ulong *)(unaff_x22 + 0xe8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      *(long *)(unaff_x22 + 0x70) = lVar12;
      func_0x000107c614b0(lVar12);
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c(uVar11,unaff_x22 + 0x70,uVar7,uVar10,6);
      if ((int)uVar11 == 0) {
        func_0x000107c5fd5c();
        uVar8 = 2;
        if ((uVar11 & 1) != 0) {
          uVar8 = 3;
        }
      }
      else {
        (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                  (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
        uVar8 = 3;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 200);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(unaff_x22 + 0xa8))(0,uVar8,*(undefined1 *)(unaff_x22 + 0x1a1));
      func_0x000107c61654();
      func_0x000107c61574(uVar13);
      func_0x000107c61574(uVar7);
      func_0x000107c61574(uVar10);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
      UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
      goto LAB_102de2998;
    }
    *(long *)(unaff_x22 + 400) = lVar12;
    piVar9 = *(int **)(unaff_x22 + 0x100);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x198) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102de3584;
    puVar3 = *(undefined **)(unaff_x22 + 0x80);
    puVar5 = *(undefined **)(unaff_x22 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x000102de2a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3,puVar5);
  return;
}



/* Entry: 102de2a88; end: 102de2b2f;  */

void FUN_102de2a88(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  
  lVar4 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar4 + 0x120) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x118));
  if (unaff_x20 != 0) {
    *(long *)(lVar4 + 400) = unaff_x20;
    piVar3 = *(int **)(lVar4 + 0x100);
    iVar1 = *piVar3;
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    func_0x000107c615b8();
    *(long **)(lVar4 + 0x198) = plVar2;
    *plVar2 = lVar5;
    plVar2[1] = (long)FUN_102de3584;
                    /* WARNING: Could not recover jumptable at 0x000102de2b08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar3))
              (*(undefined8 *)(lVar4 + 0x80),*(undefined8 *)(lVar4 + 0x88));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de2b30,0,0);
  return;
}



/* Entry: 102de2b30; end: 102de2e27;  */

void FUN_102de2b30(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar12 = *(long *)(unaff_x22 + 0x120);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x1a0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar3 = &UNK_1105d3610;
  func_0x000107c613fc(&UNK_1105d3610,0x21,7);
  *(undefined **)(unaff_x22 + 0x128) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x18) = uVar10;
  puVar3[0x20] = uVar2;
  func_0x000107c61434(uVar10);
  func_0x000107c5fd64();
  if (lVar12 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
    func_0x000107c6157c(uVar13);
    uVar7 = 0;
    func_0x000100075034(unaff_x22 + 0x40,FUN_102de959c,0,uVar10);
    func_0x000107c61574(uVar13);
    piVar9 = *(int **)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x48);
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x58);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x68);
    if (*(long *)(unaff_x22 + 0x40) != 0) {
      iVar1 = *piVar9;
      plVar6 = (long *)(ulong)(uint)piVar9[1];
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x148) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_102de2e28;
                    /* WARNING: Could not recover jumptable at 0x000102de2c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)piVar9 + (long)iVar1))
                (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88),
                 *(undefined1 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x90),
                 *(undefined8 *)(unaff_x22 + 0x98));
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
    piVar9 = *(int **)(unaff_x22 + 0x90);
    puVar4 = PTR___sytN_11034f1b0 + 8;
    func_0x00010488bd80();
    *(undefined **)(unaff_x22 + 0x158) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
    puVar5 = &UNK_1105d3638;
    func_0x000107c613fc(&UNK_1105d3638,0x38,7);
    *(undefined **)(unaff_x22 + 0x168) = puVar5;
    *(undefined8 *)(puVar5 + 0x10) = uVar10;
    *(undefined **)(puVar5 + 0x18) = &UNK_10db50a00;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    *(undefined **)(puVar5 + 0x28) = puVar4;
    *(undefined8 *)(puVar5 + 0x30) = uVar7;
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar4);
    func_0x000107c6157c(uVar7);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x170) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102de30b8;
    puVar3 = &UNK_10db50a08;
  }
  else {
    func_0x000107c61574(puVar3);
    if ((*(byte *)(unaff_x22 + 0x1a2) & 1) == 0) {
      uVar11 = *(ulong *)(unaff_x22 + 0xe8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      *(long *)(unaff_x22 + 0x70) = lVar12;
      func_0x000107c614b0(lVar12);
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c6147c(uVar11,unaff_x22 + 0x70,uVar7,uVar10,6);
      if ((int)uVar11 == 0) {
        func_0x000107c5fd5c();
        uVar8 = 2;
        if ((uVar11 & 1) != 0) {
          uVar8 = 3;
        }
      }
      else {
        (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                  (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
        uVar8 = 3;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 200);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(unaff_x22 + 0xa8))(0,uVar8,*(undefined1 *)(unaff_x22 + 0x1a1));
      func_0x000107c61654();
      func_0x000107c61574(uVar13);
      func_0x000107c61574(uVar7);
      func_0x000107c61574(uVar10);
      func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x000102de2d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    *(long *)(unaff_x22 + 400) = lVar12;
    piVar9 = *(int **)(unaff_x22 + 0x100);
    plVar6 = (long *)(ulong)(uint)piVar9[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar9 + (long)piVar9);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x198) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_102de3584;
    puVar3 = *(undefined **)(unaff_x22 + 0x80);
    puVar5 = *(undefined **)(unaff_x22 + 0x88);
  }
                    /* WARNING: Could not recover jumptable at 0x000102de2e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar3,puVar5);
  return;
}



/* Entry: 102de2e28; end: 102de2e83;  */

void FUN_102de2e28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x150) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x148));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102de2e84;
  }
  else {
    pcVar1 = FUN_102de2f38;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102de2e84; end: 102de2f37;  */

void FUN_102de2e84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x140));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  pcVar3 = *(code **)(unaff_x22 + 0xa8);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x1a1);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar4);
  (*pcVar3)(0,1,uVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102de2f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de2f38; end: 102de30b7;  */

void FUN_102de2f38(void)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x150);
  if (*(char *)(unaff_x22 + 0x1a2) != '\x01') {
    uVar6 = *(ulong *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
    func_0x000107c614b0(uVar5);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6147c(uVar6,unaff_x22 + 0x70,uVar5,uVar7,6);
    if ((int)uVar6 == 0) {
      func_0x000107c5fd5c();
      uVar3 = 2;
      if ((uVar6 & 1) != 0) {
        uVar3 = 3;
      }
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
      uVar3 = 3;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    (**(code **)(unaff_x22 + 0xa8))(0,uVar3,*(undefined1 *)(unaff_x22 + 0x1a1));
    func_0x000107c61654();
    func_0x000107c61574(uVar8);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar7);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x000102de30b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  piVar4 = *(int **)(unaff_x22 + 0x100);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102de3584;
                    /* WARNING: Could not recover jumptable at 0x000102de2fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 102de30b8; end: 102de318b;  */

void FUN_102de30b8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  
  lVar6 = *unaff_x22;
  lVar7 = *unaff_x22;
  *(long *)(lVar6 + 0x178) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0x170));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar6 + 0x158);
    func_0x000107c61574(*(undefined8 *)(lVar6 + 0x168));
    *(undefined8 *)(lVar6 + 0x78) = uVar5;
    plVar1 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(lVar6 + 0x180) = plVar1;
    lVar2 = 0x112e55c30;
    func_0x0001000285a8(0x112e55c30,&UNK_10db509e0);
    lVar3 = lVar2;
    FUN_102de4ca4();
    *plVar1 = lVar7;
    plVar1[1] = (long)FUN_102de318c;
    plVar1[0xe] = lVar3;
    plVar1[0xf] = lVar6 + 0x78;
    plVar1[0xd] = lVar2;
    plVar1[7] = lVar3;
    pcVar4 = (code *)&UNK_10488e060;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(lVar6 + 0x168));
    pcVar4 = FUN_102de31e8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 102de318c; end: 102de31e7;  */

void FUN_102de318c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x188) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x180));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102de3360;
  }
  else {
    pcVar1 = FUN_102de340c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102de31e8; end: 102de335f;  */

void FUN_102de31e8(void)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar7);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x178);
  if (*(char *)(unaff_x22 + 0x1a2) != '\x01') {
    uVar6 = *(ulong *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
    func_0x000107c614b0(uVar5);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6147c(uVar6,unaff_x22 + 0x70,uVar5,uVar7,6);
    if ((int)uVar6 == 0) {
      func_0x000107c5fd5c();
      uVar3 = 2;
      if ((uVar6 & 1) != 0) {
        uVar3 = 3;
      }
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
      uVar3 = 3;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    (**(code **)(unaff_x22 + 0xa8))(0,uVar3,*(undefined1 *)(unaff_x22 + 0x1a1));
    func_0x000107c61654();
    func_0x000107c61574(uVar8);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar7);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x000102de335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  piVar4 = *(int **)(unaff_x22 + 0x100);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102de3584;
                    /* WARNING: Could not recover jumptable at 0x000102de328c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 102de3360; end: 102de340b;  */

void FUN_102de3360(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar2 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  pcVar3 = *(code **)(unaff_x22 + 0xa8);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x1a1);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar4);
  (*pcVar3)(0,1,uVar6);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c615c0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000102de3408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de340c; end: 102de3583;  */

void FUN_102de340c(void)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x128));
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar7);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  if (*(char *)(unaff_x22 + 0x1a2) != '\x01') {
    uVar6 = *(ulong *)(unaff_x22 + 0xe8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
    func_0x000107c614b0(uVar5);
    uVar5 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c6147c(uVar6,unaff_x22 + 0x70,uVar5,uVar7,6);
    if ((int)uVar6 == 0) {
      func_0x000107c5fd5c();
      uVar3 = 2;
      if ((uVar6 & 1) != 0) {
        uVar3 = 3;
      }
    }
    else {
      (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
      uVar3 = 3;
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
    (**(code **)(unaff_x22 + 0xa8))(0,uVar3,*(undefined1 *)(unaff_x22 + 0x1a1));
    func_0x000107c61654();
    func_0x000107c61574(uVar8);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(uVar7);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x000102de3580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  piVar4 = *(int **)(unaff_x22 + 0x100);
  iVar1 = *piVar4;
  plVar2 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x198) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102de3584;
                    /* WARNING: Could not recover jumptable at 0x000102de34b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Entry: 102de3584; end: 102de35cb;  */

void FUN_102de3584(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x198));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de35cc,0,0);
  return;
}



/* Entry: 102de35cc; end: 102de36c3;  */

void FUN_102de35cc(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(ulong *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c614b0(*(undefined8 *)(unaff_x22 + 400));
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar3,(undefined8 *)(unaff_x22 + 0x70),uVar1,uVar4,6);
  if ((int)uVar3 == 0) {
    func_0x000107c5fd5c();
    uVar2 = 2;
    if ((uVar3 & 1) != 0) {
      uVar2 = 3;
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
    uVar2 = 3;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  (**(code **)(unaff_x22 + 0xa8))(0,uVar2,*(undefined1 *)(unaff_x22 + 0x1a1));
  func_0x000107c61654();
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xe8));
                    /* WARNING: Could not recover jumptable at 0x000102de36c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de36c4; end: 102de3753;  */

void FUN_102de36c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(param_1 + 0x10);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102de3754;
                    /* WARNING: Could not recover jumptable at 0x000102de3750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_4,param_5,param_6,param_2,param_3);
  return;
}



/* Entry: 102de3754; end: 102de37fb;  */

void FUN_102de3754(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102de378c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102de37fc; end: 102de390f;  */

void FUN_102de37fc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_102de3fe4(uVar3,*(undefined8 *)(unaff_x22 + 0x50));
  *(char *)(unaff_x22 + 0xb0) = (char)uVar3;
  if (((uint)uVar3 & 0xff) == 3) {
    plVar4 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x98) = plVar4;
    pcVar7 = FUN_102de3910;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x10);
    func_0x000107c6157c(uVar9);
    uVar5 = 0x112f19950;
    func_0x0001000285a8(0x112f19950,&UNK_10db509b0);
    func_0x000100075034(unaff_x22 + 0x10,FUN_102de959c,0,uVar5);
    func_0x000107c61574(uVar9);
    lVar6 = *(long *)(unaff_x22 + 0x10);
    if (lVar6 != 0) {
      FUN_102de4b7c(lVar6,*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                    *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                    *(undefined8 *)(unaff_x22 + 0x38));
    }
    *(bool *)(unaff_x22 + 0xb1) = lVar6 == 0;
    (**(code **)(unaff_x22 + 0x70))(uVar3,0);
    plVar4 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xa0) = plVar4;
    pcVar7 = FUN_102de3954;
  }
  *plVar4 = unaff_x22;
  plVar4[1] = (long)pcVar7;
  lVar6 = *(long *)(unaff_x22 + 0x60);
  lVar2 = *(long *)(unaff_x22 + 0x68);
  lVar1 = *(long *)(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x48);
  plVar4[0xc] = *(long *)(unaff_x22 + 0x58);
  plVar4[0xd] = lVar6;
  plVar4[10] = lVar1;
  plVar4[0xb] = lVar2;
  plVar4[9] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de3adc,0,0);
  return;
}



/* Entry: 102de3910; end: 102de3953;  */

void FUN_102de3910(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x98));
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000102de3950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 102de3954; end: 102de39f7;  */

void FUN_102de3954(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x102de39b0;
  }
  else {
    pcVar1 = FUN_102de39f8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102de39f8; end: 102de3abb;  */

void FUN_102de39f8(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(ulong *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar3,(undefined8 *)(unaff_x22 + 0x40),uVar1,uVar4,6);
  if ((int)uVar3 == 0) {
    func_0x000107c5fd5c();
    uVar2 = 2;
    if ((uVar3 & 1) != 0) {
      uVar2 = 3;
    }
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 8))
              (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x80));
    uVar2 = 3;
  }
  (**(code **)(unaff_x22 + 0x70))
            (*(undefined1 *)(unaff_x22 + 0xb0),uVar2,*(undefined1 *)(unaff_x22 + 0xb1));
  func_0x000107c61654();
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x000102de3ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de3abc; end: 102de3adb;  */

void FUN_102de3abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de3adc,0,0);
  return;
}



/* Entry: 102de3adc; end: 102de3cdf;  */

/* WARNING: Removing unreachable block (ram,0x000102de3b34) */

void FUN_102de3adc(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar3 = &UNK_1105d35c0;
  func_0x000107c613fc(&UNK_1105d35c0,0x20,7);
  *(undefined **)(unaff_x22 + 0x70) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000107c5fd64();
  uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x10);
  func_0x000107c6157c(uVar9);
  uVar4 = 0x112f19950;
  func_0x0001000285a8(0x112f19950,&UNK_10db509b0);
  uVar8 = 0;
  func_0x000100075034(unaff_x22 + 0x10,FUN_102de959c,0,uVar4);
  func_0x000107c61574(uVar9);
  piVar2 = *(int **)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x38);
  if (*(long *)(unaff_x22 + 0x10) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    piVar2 = *(int **)(unaff_x22 + 0x60);
    puVar5 = PTR___sytN_11034f1b0 + 8;
    func_0x00010488bd80();
    *(undefined **)(unaff_x22 + 0xa0) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
    puVar6 = &UNK_1105d35e8;
    func_0x000107c613fc(&UNK_1105d35e8,0x38,7);
    *(undefined **)(unaff_x22 + 0xb0) = puVar6;
    *(undefined8 *)(puVar6 + 0x10) = uVar4;
    *(undefined **)(puVar6 + 0x18) = &UNK_10db509c8;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    *(undefined **)(puVar6 + 0x28) = puVar5;
    *(undefined8 *)(puVar6 + 0x30) = uVar8;
    iVar1 = *piVar2;
    plVar7 = (long *)(ulong)(uint)piVar2[1];
    func_0x000107c6157c(uVar4);
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(uVar8);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xb8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102de3de4;
                    /* WARNING: Could not recover jumptable at 0x000102de3cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(&UNK_10db509d8,puVar6);
    return;
  }
  iVar1 = *piVar2;
  plVar7 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102de3ce0;
                    /* WARNING: Could not recover jumptable at 0x000102de3c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)piVar2 + (long)iVar1))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Entry: 102de3ce0; end: 102de3d3b;  */

void FUN_102de3ce0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102de3d3c;
  }
  else {
    pcVar1 = FUN_102de3d8c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102de3d3c; end: 102de3d8b;  */

void FUN_102de3d3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de3d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de3d8c; end: 102de3de3;  */

void FUN_102de3d8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102de3de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de3de4; end: 102de3eaf;  */

void FUN_102de3de4(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x20;
  long lVar6;
  long *unaff_x22;
  long lVar7;
  
  lVar6 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar6 + 0xb0);
  lVar7 = *unaff_x22;
  *(long *)(lVar6 + 0xc0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar6 + 0xb8));
  func_0x000107c61574(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(lVar6 + 0xa0);
    plVar2 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(lVar6 + 200) = plVar2;
    lVar3 = 0x112e55c30;
    func_0x0001000285a8(0x112e55c30,&UNK_10db509e0);
    lVar4 = lVar3;
    FUN_102de4ca4();
    *plVar2 = lVar7;
    plVar2[1] = (long)FUN_102de3eb0;
    plVar2[0xe] = lVar4;
    plVar2[0xf] = lVar6 + 0x40;
    plVar2[0xd] = lVar3;
    plVar2[7] = lVar4;
    pcVar5 = (code *)&UNK_10488e060;
  }
  else {
    pcVar5 = FUN_102de3f0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
  return;
}



/* Entry: 102de3eb0; end: 102de3f0b;  */

void FUN_102de3eb0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102de3f54;
  }
  else {
    pcVar1 = FUN_102de3f9c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102de3f0c; end: 102de3f53;  */

void FUN_102de3f0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de3f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de3f54; end: 102de3f9b;  */

void FUN_102de3f54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de3f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de3f9c; end: 102de3fe3;  */

void FUN_102de3f9c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000102de3fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de3fe4; end: 102de421f;  */

undefined4 FUN_102de3fe4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  uVar4 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar3,param_1,param_2);
  puVar2 = puVar3;
  (**(code **)(lVar6 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar3);
  }
  else {
    uVar5 = uVar4;
    (**(code **)(lVar6 + 0x20))(uVar4,puVar3,lVar1);
    func_0x000107c5edbc();
    if (puVar3 != (undefined1 *)0x0) {
      puVar2 = puVar3;
      if (uVar5 == 0x74616863 && puVar3 == (undefined1 *)0xe400000000000000) {
        func_0x000107c6142c();
LAB_102de413c:
        uVar5 = 0x747865742f;
        func_0x000107c5edc4();
        if ((puVar3 == (undefined1 *)0x747865742f && puVar2 == (undefined1 *)0xe500000000000000) ||
           (func_0x000107c605b8(0x747865742f,0xe500000000000000,puVar3,puVar2,0), (uVar5 & 1) != 0))
        {
          (**(code **)(lVar6 + 8))(uVar4,lVar1);
          func_0x000107c6142c(puVar2);
          return 1;
        }
        uVar5 = 0x6172656d61632f;
        if (puVar3 == (undefined1 *)0x6172656d61632f && puVar2 == (undefined1 *)0xe700000000000000)
        {
          func_0x000107c6142c(puVar2);
          (**(code **)(lVar6 + 8))(uVar4,lVar1);
          return 2;
        }
        func_0x000107c605b8(0x6172656d61632f,0xe700000000000000,puVar3,puVar2,0);
        func_0x000107c6142c(puVar2);
        (**(code **)(lVar6 + 8))(uVar4,lVar1);
        if ((uVar5 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      func_0x000107c605b8();
      func_0x000107c6142c();
      if ((uVar5 & 1) != 0) goto LAB_102de413c;
    }
    (**(code **)(lVar6 + 8))(uVar4,lVar1);
  }
  return 3;
}



/* Entry: 102de4220; end: 102de42a3;  */

void FUN_102de4220(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = *(int **)(param_1 + 0x20);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102de4e64;
                    /* WARNING: Could not recover jumptable at 0x000102de42a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(param_4,param_5,param_2,param_3);
  return;
}



/* Entry: 102de42a4; end: 102de430f;  */

void FUN_102de42a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de4310,uVar1,uVar2);
  return;
}



/* Entry: 102de4310; end: 102de4393;  */

/* WARNING: Removing unreachable block (ram,0x000102de4338) */

void FUN_102de4310(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  piVar3 = *(int **)(unaff_x22 + 0x10);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102de4394;
                    /* WARNING: Could not recover jumptable at 0x000102de4390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))();
  return;
}



/* Entry: 102de4394; end: 102de43d7;  */

void FUN_102de4394(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102de43d8,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 102de43d8; end: 102de4427;  */

void FUN_102de43d8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5fd64();
                    /* WARNING: Could not recover jumptable at 0x000102de4424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de4428; end: 102de449b;  */

void FUN_102de4428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
  plVar2 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102de449c;
  plVar2[0x20] = unaff_x22 + 0x10;
  plVar2[0x21] = param_1;
  lVar3 = 0;
  func_0x000107c5eec8();
  plVar2[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar2[0x23] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar2[0x24] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102de8c74,0,0);
  return;
}



/* Entry: 102de449c; end: 102de451f;  */

void FUN_102de449c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x88);
  *(long *)(lVar4 + 0x90) = unaff_x20;
  func_0x000107c615c0();
  uVar2 = *(undefined8 *)(lVar4 + 0x78);
  func_0x000100eea164();
  func_0x000107c5fca8();
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x98) = uVar2;
    *(undefined8 *)(lVar4 + 0xa0) = uVar1;
    pcVar3 = FUN_102de4520;
  }
  else {
    pcVar3 = FUN_102de46c0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar2);
  return;
}



/* Entry: 102de4520; end: 102de460b;  */

void FUN_102de4520(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c5fd64();
  if (lVar4 != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    *(long *)(unaff_x22 + 0x40) = lVar4;
    *(undefined1 *)(unaff_x22 + 0x48) = 1;
    func_0x000107c614b0(lVar4);
    func_0x00010488e5d4((long *)(unaff_x22 + 0x40));
    func_0x000107c614ac(lVar4);
    func_0x000107c614ac(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000102de45ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar3 = *(int **)(unaff_x22 + 0x60);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_102de460c;
                    /* WARNING: Could not recover jumptable at 0x000102de4608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,&UNK_10db509e8,0);
  return;
}



/* Entry: 102de460c; end: 102de4663;  */

void FUN_102de460c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_102de4664;
  }
  else {
    pcVar1 = FUN_102de4730;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x98),*(undefined8 *)(lVar2 + 0xa0));
  return;
}



/* Entry: 102de4664; end: 102de46bf;  */

void FUN_102de4664(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  *(undefined8 *)(unaff_x22 + 0x50) = 0;
  *(undefined1 *)(unaff_x22 + 0x58) = 0;
  func_0x00010488e5d4();
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000102de46bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de46c0; end: 102de472f;  */

void FUN_102de46c0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x48) = 1;
  func_0x000107c614b0(uVar1);
  func_0x00010488e5d4((undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c614ac(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102de472c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102de4730; end: 102de47b7;  */

void FUN_102de4730(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x48) = 1;
  func_0x000107c614b0(uVar1);
  func_0x00010488e5d4((undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c614ac(uVar1);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102de47b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


