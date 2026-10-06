/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1017138d4; end: 101713b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1017138d4(ulong param_1,ulong param_2,long param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  if (param_4 == 0) {
    lVar9 = 0;
    puVar8 = (ulong *)(param_5 + 0x40);
    uVar7 = -1L << ((ulong)*(byte *)(param_5 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (-uVar7 < 0x40) {
      uVar10 = ~(-1L << (-uVar7 & 0x3f));
    }
    uVar10 = uVar10 & *puVar8;
    lVar2 = lVar9;
    uVar1 = uVar10;
    do {
      while (uVar11 = uVar1, lVar12 = lVar2, uVar10 == 0) {
        bVar4 = SCARRY8(lVar9,1);
        lVar9 = lVar9 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101713b34);
          (*pcVar3)();
        }
        if ((long)(0x3f - uVar7 >> 6) <= lVar9) {
          func_0x000107c61434(param_5);
          func_0x000101714b0c();
          return false;
        }
        lVar2 = lVar12;
        uVar1 = uVar11;
        uVar10 = puVar8[lVar9];
      }
      uVar1 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
      uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
      lVar5 = *(long *)(*(long *)(param_5 + 0x38) + LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 +
                       lVar9 * 0x200);
      uVar6 = *(ulong *)(lVar5 + _DAT_113041e90);
      uVar1 = ((ulong *)(lVar5 + _DAT_113041e90))[1];
      if (uVar6 == param_1 && uVar1 == param_2) break;
      uVar10 = uVar10 - 1 & uVar10;
      func_0x000107c605b8(uVar6,uVar1,param_1,param_2,0);
      lVar2 = lVar9;
      uVar1 = uVar10;
    } while ((uVar6 & 1) == 0);
    func_0x000107c61434(param_5);
    func_0x000107c61174();
    func_0x000101714b0c(param_5,puVar8,~uVar7,lVar12,uVar11);
    lVar9 = _DAT_113041eb8;
    if ((*(byte *)(lVar5 + _DAT_113041e98) & 1) != 0) {
      func_0x000107c61428(lVar5 + _DAT_113041eb8,auStack_78,0,0);
      lVar9 = *(long *)(lVar5 + lVar9);
      func_0x000107c61170(lVar5);
      return lVar9 != 4;
    }
  }
  else {
    if (*(long *)(param_5 + 0x10) == 0) {
      return false;
    }
    func_0x000107c61434(param_5);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      func_0x000107c6142c(param_5);
      return false;
    }
    lVar5 = *(long *)(*(long *)(param_5 + 0x38) + param_3 * 8);
    func_0x000107c61174();
    func_0x000107c6142c(param_5);
    lVar9 = _DAT_113041eb8;
    if ((*(byte *)(lVar5 + _DAT_113041e98) & 1) != 0) {
      func_0x000107c61428(lVar5 + _DAT_113041eb8,auStack_78,0,0);
      lVar9 = *(long *)(lVar5 + lVar9);
      func_0x000107c61170(lVar5);
      return lVar9 != 4;
    }
  }
  func_0x000107c61170(lVar5);
  return false;
}



/* Entry: 101713b34; end: 101713c2f;  */

undefined8 FUN_101713b34(undefined8 param_1,undefined8 param_2,long param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_4 == '\x01') {
    if (param_3 == 0) {
      puVar1 = &UNK_1103fd6f8;
      func_0x000107c613fc(&UNK_1103fd6f8,0x18,7);
      func_0x000107c61644(puVar1 + 0x10);
      puVar2 = &UNK_1103fdc40;
      func_0x000107c613fc(&UNK_1103fdc40,0x28,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_1;
      *(undefined8 *)(puVar2 + 0x20) = param_2;
      func_0x000107c61434(param_2);
      uVar3 = 0xcb;
      func_0x0001001ca524(0xcb,0,0x60,4,0,0,&UNK_10d9816a8,puVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(uVar3);
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
      if (param_3 != 1) {
        uVar3 = 3;
      }
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}



/* Entry: 101713c30; end: 101713c9b;  */

void FUN_101713c30(void)

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
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715120;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101710dd0,0,0);
  return;
}



/* Entry: 101713c9c; end: 101713cb3;  */

undefined1  [16] FUN_101713c9c(void)

{
  return ZEXT816(0x1103fd7c0);
}



/* Entry: 101713cb4; end: 101713d1f;  */

void FUN_101713cb4(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  long lVar5;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101715124;
  plVar1[2] = lVar5;
  plVar1[3] = lVar3;
  if (lVar2 == 0) {
    lVar2 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1[4] = lVar5;
  plVar4 = (long *)0x5b0;
  func_0x000107c6157c(lVar3);
  func_0x000107c615b8();
  plVar1[5] = (long)plVar4;
  *plVar4 = (long)plVar1;
  plVar4[1] = (long)FUN_101710d50;
  plVar4[0xb1] = lVar3;
  plVar4[0xb0] = lVar5;
  plVar4[0xaf] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017106f8,0,0);
  return;
}



/* Entry: 101713d20; end: 101713d97;  */

void FUN_101713d20(void)

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
  plVar5[1] = 0x101715128;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101713d98; end: 101713e1b;  */

void FUN_101713d98(undefined8 param_1)

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
  plVar5[1] = 0x10171512c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101713e1c; end: 101713e9b;  */

void FUN_101713e1c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  long *plVar9;
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar8 = *(long *)(unaff_x20 + 0x30);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715130;
  plVar3[2] = lVar4;
  plVar3[3] = lVar8;
  if (lVar7 == 0) {
    lVar7 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c5faec();
  }
  plVar3[4] = lVar4;
  lVar5 = lVar4;
  func_0x000107c5faec();
  plVar3[5] = lVar5;
  lVar6 = lVar5;
  func_0x000107c5faec();
  plVar3[6] = lVar6;
  plVar9 = (long *)0x250;
  func_0x000107c6157c(lVar8);
  func_0x000107c615b8();
  plVar3[7] = (long)plVar9;
  *plVar9 = (long)plVar3;
  plVar9[1] = (long)FUN_1017105b8;
  plVar9[0x42] = lVar8;
  plVar9[0x41] = lVar6;
  plVar9[0x3f] = lVar5;
  plVar9[0x40] = lVar2;
  plVar9[0x3d] = lVar4;
  plVar9[0x3e] = lVar1;
  plVar9[0x3c] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170fe0c,0,0);
  return;
}



/* Entry: 101713e9c; end: 101713f13;  */

void FUN_101713e9c(void)

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
  plVar5[1] = 0x101715134;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101713f14; end: 101713f97;  */

void FUN_101713f14(undefined8 param_1)

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
  plVar5[1] = 0x101715138;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101713f98; end: 101713ffb;  */

void FUN_101713f98(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10171513c;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x50;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_10170f284;
  plVar4[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a1f0,0,0);
  return;
}



/* Entry: 101713ffc; end: 101714073;  */

void FUN_101713ffc(void)

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
  plVar5[1] = 0x101715140;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101714074; end: 1017140f7;  */

void FUN_101714074(undefined8 param_1)

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
  plVar5[1] = 0x101715144;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1017140f8; end: 10171415b;  */

void FUN_1017140f8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715148;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x20;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_10170e13c;
  plVar4[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170dc1c,0,0);
  return;
}



/* Entry: 10171415c; end: 1017141d3;  */

void FUN_10171415c(void)

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
  plVar5[1] = 0x10171514c;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1017141d4; end: 101714257;  */

void FUN_1017141d4(undefined8 param_1)

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
  plVar5[1] = 0x101715150;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101714258; end: 1017142bb;  */

void FUN_101714258(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = *(long **)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101715154;
  plVar4[2] = lVar2;
  plVar4[3] = (long)plVar1;
  plVar5 = (long *)0x250;
  func_0x000107c6157c(plVar1);
  func_0x000107c615b8();
  plVar4[4] = (long)plVar5;
  *plVar5 = (long)plVar4;
  plVar5[1] = (long)FUN_10170dba0;
  plVar5[0x3b] = (long)plVar1;
  plVar5[0x3c] = *plVar1;
  lVar2 = 0;
  func_0x000107c5eea4();
  plVar5[0x3d] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar5[0x3e] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x3f] = uVar3;
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  plVar5[0x40] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x10170d234;
  plVar4[3] = (long)plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a600,0,0);
  return;
}



/* Entry: 1017142bc; end: 101714333;  */

void FUN_1017142bc(void)

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
  plVar5[1] = 0x101715158;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101714334; end: 1017143b7;  */

void FUN_101714334(undefined8 param_1)

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
  plVar5[1] = 0x10171515c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1017143b8; end: 101714423;  */

void FUN_1017143b8(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long *plVar5;
  long unaff_x22;
  long *plVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  plVar5 = *(long **)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715160;
  plVar3[2] = lVar4;
  plVar3[3] = (long)plVar5;
  func_0x000107c5faec();
  plVar3[4] = lVar4;
  plVar6 = (long *)0x2e0;
  func_0x000107c6157c(plVar5);
  func_0x000107c615b8();
  plVar3[5] = (long)plVar6;
  *plVar6 = (long)plVar3;
  plVar6[1] = (long)FUN_10170d150;
  plVar6[0x52] = (long)plVar5;
  plVar6[0x51] = lVar4;
  plVar6[0x50] = lVar1;
  plVar6[0x53] = *plVar5;
  lVar1 = 0;
  func_0x000107c5eea4();
  plVar6[0x54] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar6[0x55] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x56] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170c6c0,0,0);
  return;
}



/* Entry: 101714424; end: 10171449b;  */

void FUN_101714424(void)

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
  plVar5[1] = 0x101715164;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171449c; end: 10171451f;  */

void FUN_10171449c(undefined8 param_1)

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
  plVar5[1] = 0x101715168;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101714520; end: 101714553;  */

void FUN_101714520(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101714554; end: 1017145bf;  */

void FUN_101714554(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar2 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10171516c;
  plVar2[2] = lVar3;
  plVar2[3] = lVar5;
  func_0x000107c5faec();
  plVar2[4] = lVar1;
  plVar2[5] = lVar3;
  plVar4 = (long *)0x30;
  func_0x000107c6157c(lVar5);
  func_0x000107c615b8();
  plVar2[6] = (long)plVar4;
  *plVar4 = (long)plVar2;
  plVar4[1] = (long)FUN_10170c45c;
  plVar4[3] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bf40,0,0);
  return;
}



/* Entry: 1017145c0; end: 101714637;  */

void FUN_1017145c0(void)

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
  plVar5[1] = 0x101715170;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101714638; end: 1017146bb;  */

void FUN_101714638(undefined8 param_1)

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
  plVar5[1] = 0x101715174;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1017146bc; end: 10171471f;  */

void FUN_1017146bc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715178;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x30;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_10170c21c;
  plVar4[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170bf40,0,0);
  return;
}



/* Entry: 101714720; end: 101714797;  */

void FUN_101714720(void)

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
  plVar5[1] = 0x10171517c;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 101714798; end: 10171481b;  */

void FUN_101714798(undefined8 param_1)

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
  plVar5[1] = 0x101715180;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 10171481c; end: 10171487f;  */

void FUN_10171481c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715184;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x30;
  func_0x000107c6157c(lVar2);
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_101715100;
  plVar4[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170a600,0,0);
  return;
}



/* Entry: 101714880; end: 1017148f7;  */

void FUN_101714880(void)

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
  plVar5[1] = 0x101715188;
  (*(code *)&UNK_100e8ded0)(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1017148f8; end: 101714923;  */

void FUN_1017148f8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101714924; end: 1017149a7;  */

void FUN_101714924(undefined8 param_1)

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
  plVar5[1] = 0x10171518c;
  (*(code *)&UNK_100e8df9c)(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Entry: 1017149a8; end: 1017149fb;  */

void FUN_1017149a8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar2 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1017149fc;
  plVar2[2] = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  plVar2[3] = (long)plVar1;
  *plVar1 = (long)plVar2;
  plVar1[1] = 0x101710f28;
  *(undefined1 *)((long)plVar1 + 0x31) = 1;
  plVar1[0xe] = 0;
  plVar1[0xf] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170ef7c,0,0);
  return;
}



/* Entry: 1017149fc; end: 101714a37;  */

void FUN_1017149fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x000101714a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101714a38; end: 101714a8f;  */

void FUN_101714a38(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101715104;
  plVar1[3] = param_1;
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101710fa8,0,0);
  return;
}



/* Entry: 101714a90; end: 101714aab;  */

void FUN_101714a90(void)

{
  long unaff_x20;
  
  FUN_10171114c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101714aac; end: 101714af7;  */

void FUN_101714aac(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_101714af8(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 101714af8; end: 101714b13;  */

void FUN_101714af8(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc01a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRetain_11034f320)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 101714b14; end: 101714b3f;  */

void FUN_101714b14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101714b40; end: 101714bab;  */

void FUN_101714b40(void)

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
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715190;
  plVar3[6] = lVar2;
  plVar3[7] = lVar4;
  plVar3[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101710dd0,0,0);
  return;
}



/* Entry: 101714bac; end: 101714cc7;  */

undefined8 FUN_101714bac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101714cc8; end: 101714ceb;  */

undefined8 FUN_101714cc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6162c();
  func_0x000100083b20(&uStack_38);
  func_0x000107c61574(uVar5);
  uVar1 = uStack_38;
  func_0x000107c4ec80(uStack_38);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar4 = &UNK_1103fd6f8;
  puVar3 = puVar4;
  func_0x000107c613fc(&UNK_1103fd6f8,0x18,7);
  func_0x000107c6162c(uVar5);
  func_0x000107c61644(puVar3 + 0x10,uVar5);
  func_0x000107c61574(uVar5);
  func_0x000107c613fc(&UNK_1103fd6f8,0x18,7);
  func_0x000107c6162c(uVar5);
  func_0x000107c61644(puVar4 + 0x10,uVar5);
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(uVar5);
  uVar1 = uVar2;
  FUN_101709140(uVar2,&UNK_10d9816e0,puVar3,&UNK_10d9816f0,puVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101714cec; end: 101714d57;  */

void FUN_101714cec(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101714d58;
  plVar1[0x14] = param_3;
  plVar1[0x15] = unaff_x20;
  plVar1[0x12] = param_1;
  plVar1[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170b63c,0,0);
  return;
}



/* Entry: 101714d58; end: 101714d93;  */

void FUN_101714d58(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101714d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101714d94; end: 101714df3;  */

void FUN_101714d94(long param_1,long param_2)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101714df4;
  plVar1[6] = param_2;
  plVar1[7] = unaff_x20;
  plVar1[5] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170b820,0,0);
  return;
}



/* Entry: 101714df4; end: 101714e67;  */

void FUN_101714df4(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101714e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 101714e68; end: 101714ea7;  */

void FUN_101714e68(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101714ea8; end: 101714edb;  */

void FUN_101714ea8(void)

{
  long unaff_x20;
  
  FUN_1017056a8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101714edc; end: 101714f17;  */

void FUN_101714edc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar1 + 0x60) == *(long *)(unaff_x20 + 0x18)) {
    uVar2 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(lVar1 + 0x58) = 0;
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 101714f18; end: 101714f7b;  */

void FUN_101714f18(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x300;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101715194;
  plVar3[0x5a] = lVar2;
  plVar3[0x59] = lVar1;
  plVar3[0x58] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10170f680,0,0);
  return;
}



/* Entry: 101714f7c; end: 10171502b;  */

undefined8 FUN_101714f7c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103d48e08)(param_2,param_1);
  return param_2;
}



/* Entry: 10171502c; end: 1017150a3;  */

void FUN_10171502c(void)

{
  long unaff_x20;
  
  FUN_101705714(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1017150a4; end: 1017150ab;  */

void FUN_1017150a4(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  func_0x00010044d5e8(0);
  func_0x000107c613fc();
  FUN_10171a388(uStack_38,uStack_40);
  *param_1 = uStack_38;
  return;
}



/* Entry: 1017150ac; end: 1017150d3;  */

void FUN_1017150ac(void)

{
  FUN_1017117f0();
  return;
}



/* Entry: 1017150d4; end: 1017150d7;  */

void FUN_1017150d4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101710a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1017150d8; end: 1017150ff;  */

void FUN_1017150d8(void)

{
  func_0x000101714e50();
  return;
}



/* Entry: 101715100; end: 1017151bb;  */

void FUN_101715100(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  lVar3 = *(long *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x20));
  func_0x000107c61574(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,param_1 & 1);
                    /* WARNING: Could not recover jumptable at 0x00010170dc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 1017151bc; end: 10171521f;  */

void FUN_1017151bc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0x112dc41c0;
  func_0x0001000285a8(0x112dc41c0,&UNK_10d981850);
  func_0x000107c613fc();
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x18) = puVar2;
  *param_2 = lVar1;
  return;
}



/* Entry: 101715220; end: 101715263;  */

void FUN_101715220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x110) = param_12;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_11;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_14;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_10;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_9;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_7;
  *(undefined8 *)(unaff_x22 + 200) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101715264,0,0);
  return;
}



/* Entry: 101715264; end: 10171569f;  */

void FUN_101715264(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  char cVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  long *plVar16;
  long lVar17;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  uVar9 = 0;
  lVar14 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x10,0,0);
  lVar14 = lVar14 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0xf0) = lVar14;
  if (lVar14 == 0) goto LAB_101715600;
  uVar8 = *(ulong *)(unaff_x22 + 0xa8);
  if (uVar8 != 0) {
    lVar15 = *(long *)(unaff_x22 + 0xa0);
    uVar11 = uVar8;
LAB_1017152c0:
    *(ulong *)(unaff_x22 + 0x100) = uVar11;
    plVar16 = (long *)0x250;
    func_0x000107c61434(uVar8);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x108) = plVar16;
    *plVar16 = unaff_x22;
    plVar16[1] = 0x101715744;
    uVar5 = *(undefined1 *)(unaff_x22 + 0x110);
    lVar17 = *(long *)(unaff_x22 + 0xe0);
    lVar2 = *(long *)(unaff_x22 + 0xe8);
    lVar3 = *(long *)(unaff_x22 + 0xd8);
    lVar1 = *(long *)(unaff_x22 + 0xc0);
    lVar4 = *(long *)(unaff_x22 + 200);
    plVar16[0x3e] = *(long *)(unaff_x22 + 0xd0);
    plVar16[0x3f] = lVar14;
    *(undefined1 *)(plVar16 + 0x49) = uVar5;
    plVar16[0x3c] = lVar4;
    plVar16[0x3d] = lVar2;
    plVar16[0x3a] = uVar11;
    plVar16[0x3b] = lVar1;
    plVar16[0x38] = lVar17;
    plVar16[0x39] = lVar15;
    plVar16[0x37] = lVar3;
    pcVar10 = FUN_1017157c8;
    uVar12 = 0;
    uVar13 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(pcVar10,uVar12,uVar13);
    return;
  }
  uVar8 = *(ulong *)(unaff_x22 + 0xb8);
  if (uVar8 >> 0x3c < 0xf) {
    lVar17 = *(long *)(unaff_x22 + 0xb0);
    func_0x00010006c00c(lVar17,uVar8);
    lVar15 = lVar17;
    uVar11 = uVar8;
    func_0x00010294830c();
    func_0x0001000b44c0(lVar17,uVar8);
    if (uVar11 != 0) {
      uVar8 = *(ulong *)(unaff_x22 + 0xa8);
      goto LAB_1017152c0;
    }
  }
  lVar15 = *(long *)(unaff_x22 + 0xd0);
  if (lVar15 == 1) {
    uVar13 = 0xd000000000000010;
    uVar12 = 0x800000010efb9230;
  }
  else {
    if (lVar15 != 0) {
      *(long *)(unaff_x22 + 0x88) = lVar15;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                (&UNK_11072f2f8,(long *)(unaff_x22 + 0x88),&UNK_11072f2f8,PTR___sSiN_11034deb0);
      return;
    }
    uVar13 = 0x7972746572;
    uVar12 = 0xe500000000000000;
  }
  func_0x000103b683b8(0,uVar13,uVar12,0xd000000000000014,0x800000010efb9210);
  func_0x000107c6142c(uVar12);
  func_0x000103b684a8(0,uVar13,uVar12);
  func_0x000107c6142c(uVar12);
  if (lRam0000000112dc4188 != -1) {
    func_0x000107c61568(0x112dc4188,0x101715198);
  }
  lVar15 = lRam0000000112dc4190;
  cVar6 = *(char *)(unaff_x22 + 0x110);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc4190 + 0x18));
  func_0x000107c61428(lVar15 + 0x10,unaff_x22 + 0x28,0x21,0);
  func_0x0001010af1e4(uVar13,uVar12);
  func_0x000107c614a8(unaff_x22 + 0x28);
  func_0x000107c6142c(uVar12);
  func_0x000107c5d278(*(undefined8 *)(lVar15 + 0x18));
  if (cVar6 == '\x01') {
    if (lRam0000000112dc4198 != -1) {
      func_0x000107c61568(0x112dc4198,0x1017151a4);
    }
    lVar15 = lRam0000000112dc41a0;
    uVar8 = *(ulong *)(unaff_x22 + 0xc0);
    uVar13 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41a0 + 0x18));
    func_0x000107c61428(lVar15 + 0x10,unaff_x22 + 0x40,0,0);
    uVar12 = *(undefined8 *)(lVar15 + 0x10);
    func_0x000107c61434(uVar12);
    func_0x0001000f66f0(uVar8,uVar13,uVar12);
    func_0x000107c6142c(uVar12);
    func_0x000107c5d278(*(undefined8 *)(lVar15 + 0x18));
    if ((uVar8 & 1) == 0) {
      if (lRam0000000112dc41a8 != -1) {
        func_0x000107c61568(0x112dc41a8,0x1017151b0);
      }
      lVar15 = lRam0000000112dc41b0;
      uVar13 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar12 = *(undefined8 *)(unaff_x22 + 200);
      func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41b0 + 0x18));
      func_0x000107c61428(lVar15 + 0x10,unaff_x22 + 0x58,0x21,0);
      func_0x000107c61434(uVar12);
      func_0x000100403b00(auStack_60,uVar13,uVar12);
      func_0x000107c614a8(unaff_x22 + 0x58);
      func_0x000107c6142c(uStack_58);
      func_0x000107c5d278(*(undefined8 *)(lVar15 + 0x18));
      if ((uVar9 & 1) != 0) {
        func_0x000107c61644(unaff_x22 + 0x90,lVar14);
        uVar12 = 0;
        func_0x000107c5fcec();
        puVar7 = PTR___sScMMa_11034fc70;
        uVar13 = uVar12;
        func_0x000107c5fce8();
        *(undefined8 *)(unaff_x22 + 0xf8) = uVar13;
        uVar13 = 0x112d45220;
        FUN_1017173f8(0x112d45220,puVar7,PTR___sScMScAsMc_11034fc78);
        func_0x000107c5fca8(uVar12,uVar13);
        pcVar10 = FUN_1017156a0;
        goto LAB_107c615e0;
      }
    }
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
LAB_101715600:
                    /* WARNING: Could not recover jumptable at 0x00010171561c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1017156a0; end: 101715793;  */

void FUN_1017156a0(void)

{
  long lVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c61428(unaff_x22 + 0x90,unaff_x22 + 0x70,0,0);
  lVar1 = unaff_x22 + 0x90;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000101716a88();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61640(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101715714,0,0);
  return;
}



/* Entry: 101715794; end: 1017157c7;  */

void FUN_101715794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1f8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x248) = param_9;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1017157c8,0,0);
  return;
}



/* Entry: 1017157c8; end: 101715b5f;  */

void FUN_1017157c8(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  lVar3 = *(long *)(unaff_x22 + 0x1f8) + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x200) = lVar3;
  if (lVar3 != 0) {
    if (0 < *(long *)(unaff_x22 + 0x1e8)) {
      *(undefined8 *)(unaff_x22 + 0x208) = 0;
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                       + 4);
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x210) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_101715b60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                (2000000000);
      return;
    }
    lVar3 = *(long *)(unaff_x22 + 0x1f0);
    if (lVar3 == 1) {
      uVar7 = 0xd000000000000010;
      uVar8 = 0x800000010efb9230;
    }
    else {
      if (lVar3 != 0) {
        *(long *)(unaff_x22 + 0x180) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                  (&UNK_11072f2f8,unaff_x22 + 0x180,&UNK_11072f2f8,PTR___sSiN_11034deb0);
        return;
      }
      uVar7 = 0x7972746572;
      uVar8 = 0xe500000000000000;
    }
    func_0x000103b683b8(*(long *)(unaff_x22 + 0x1e8),uVar7,uVar8,0xd000000000000023,
                        0x800000010efb9250);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
    func_0x000107c6142c(uVar8);
    func_0x000103b684a8(uVar9,uVar7,uVar8);
    func_0x000107c6142c(uVar8);
    if (lRam0000000112dc4188 != -1) {
      func_0x000107c61568(0x112dc4188,0x101715198);
    }
    lVar3 = lRam0000000112dc4190;
    cVar1 = *(char *)(unaff_x22 + 0x248);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc4190 + 0x18));
    func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x90,0x21,0);
    func_0x0001010af1e4(uVar7,uVar8);
    func_0x000107c614a8(unaff_x22 + 0x90);
    func_0x000107c6142c(uVar8);
    func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x18));
    if (cVar1 == '\x01') {
      if (lRam0000000112dc4198 != -1) {
        func_0x000107c61568(0x112dc4198,0x1017151a4);
      }
      lVar3 = lRam0000000112dc41a0;
      uVar5 = *(ulong *)(unaff_x22 + 0x1d8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x1e0);
      func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41a0 + 0x18));
      func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0xa8,0,0);
      uVar8 = *(undefined8 *)(lVar3 + 0x10);
      func_0x000107c61434(uVar8);
      func_0x0001000f66f0(uVar5,uVar7,uVar8);
      func_0x000107c6142c(uVar8);
      func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x18));
      if ((uVar5 & 1) == 0) {
        if (lRam0000000112dc41a8 != -1) {
          func_0x000107c61568(0x112dc41a8,0x1017151b0);
        }
        lVar3 = lRam0000000112dc41b0;
        uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x1e0);
        func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41b0 + 0x18));
        func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0xc0,0x21,0);
        func_0x000107c61434(uVar8);
        puVar6 = auStack_48;
        func_0x000100403b00(puVar6,uVar7,uVar8);
        func_0x000107c614a8(unaff_x22 + 0xc0);
        func_0x000107c6142c(uStack_40);
        func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x18));
        if (((ulong)puVar6 & 1) != 0) {
          func_0x000107c61644(unaff_x22 + 0x188,*(undefined8 *)(unaff_x22 + 0x1f8));
          uVar8 = 0;
          func_0x000107c5fcec();
          puVar2 = PTR___sScMMa_11034fc70;
          uVar7 = uVar8;
          func_0x000107c5fce8();
          *(undefined8 *)(unaff_x22 + 0x240) = uVar7;
          uVar7 = 0x112d45220;
          FUN_1017173f8(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
          func_0x000107c5fca8(uVar8,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_task_switch_110350130)(0x1017166fc,uVar8,uVar7);
          return;
        }
      }
    }
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x200));
  }
                    /* WARNING: Could not recover jumptable at 0x000101715ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101715b60; end: 101715bbf;  */

void FUN_101715b60(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x210));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101715bc0;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = (code *)0x101717468;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101715bc0; end: 101715cc7;  */

void FUN_101715bc0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x1c0) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
    func_0x000107c5fadc();
  }
  *(undefined8 *)(unaff_x22 + 0x218) = uVar2;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
  func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0x1d0));
  *(undefined8 *)(unaff_x22 + 0x220) = uVar3;
  func_0x000107c5fadc(uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x228) = uVar2;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 400;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101715cc8;
  lVar4 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar4,0);
  uVar2 = 0x112dc41b8;
  func_0x0001000285a8(0x112dc41b8,&UNK_10d981840);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_1017167a0;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1103fddb0;
  *(long *)(unaff_x22 + 0x70) = lVar4;
  func_0x000107c5c338(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101715cc8; end: 101715d07;  */

void FUN_101715cc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101715d08,0,0);
  return;
}



/* Entry: 101715d08; end: 1017163eb;  */

void FUN_101715d08(void)

{
  char cVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long *plVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  double dVar15;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar13 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x228));
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  iVar12 = (int)uVar13;
  if (iVar12 - 2U < 2) {
    if (lRam0000000112dc4188 != -1) {
      func_0x000107c61568(0x112dc4188,0x101715198);
    }
    lVar9 = lRam0000000112dc4190;
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc4190 + 0x18));
    func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0xf0,0x21,0);
    func_0x0001010af1e4(uVar10,uVar11);
    func_0x000107c614a8(unaff_x22 + 0xf0);
    func_0x000107c6142c(uVar11);
    func_0x000107c5d278(*(undefined8 *)(lVar9 + 0x18));
    if (lRam0000000112dc41a8 != -1) {
      func_0x000107c61568(0x112dc41a8,0x1017151b0);
    }
    lVar14 = lRam0000000112dc41b0;
    lVar9 = *(long *)(unaff_x22 + 0x1f0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41b0 + 0x18));
    func_0x000107c61428(lVar14 + 0x10,unaff_x22 + 0x108,0x21,0);
    func_0x000107c61434(uVar11);
    func_0x000100403b00(auStack_58,uVar10,uVar11);
    func_0x000107c614a8(unaff_x22 + 0x108);
    func_0x000107c6142c(uStack_50);
    func_0x000107c5d278(*(undefined8 *)(lVar14 + 0x18));
    if (lVar9 == 0) {
      uVar11 = 0x7972746572;
      uVar10 = 0xe500000000000000;
    }
    else {
      if (lVar9 != 1) {
        plVar4 = (long *)(unaff_x22 + 0x198);
        lVar9 = *(long *)(unaff_x22 + 0x1f0);
        goto LAB_101716330;
      }
      uVar11 = 0xd000000000000010;
      uVar10 = 0x800000010efb9230;
    }
    lVar14 = *(long *)(unaff_x22 + 0x208);
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar13;
    puVar8 = &UNK_11072f158;
    lVar9 = unaff_x22 + 0x1a0;
    func_0x000107c5fb18(lVar9,&UNK_11072f158);
    func_0x000103b683b8(lVar14 + 1,uVar11,uVar10,lVar9,puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c6142c(uVar10);
  }
  else {
    if (iVar12 == 0) {
      lVar9 = *(long *)(unaff_x22 + 0x1f0);
      if (lVar9 == 1) {
        uVar10 = 0xd000000000000010;
        lVar9 = *(long *)(unaff_x22 + 0x208);
        uVar11 = 0x800000010efb9230;
      }
      else {
        if (lVar9 != 0) {
          plVar4 = (long *)(unaff_x22 + 0x1a8);
          goto LAB_101716330;
        }
        uVar10 = 0x7972746572;
        lVar9 = *(long *)(unaff_x22 + 0x208);
        uVar11 = 0xe500000000000000;
      }
      func_0x000103b683ac(lVar9 + 1,uVar10,uVar11,0x5f6b726f7774656e,0xed00007972746572);
      lVar9 = *(long *)(unaff_x22 + 0x208);
      func_0x000107c6142c(uVar11);
      func_0x000103b68494(lVar9 + 1,uVar10,uVar11);
      func_0x000107c6142c(uVar11);
      plVar4 = (long *)0xb0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0x230) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1017163ec;
      lVar9 = *(long *)(unaff_x22 + 0x1e0);
      plVar4[2] = *(long *)(unaff_x22 + 0x1d8);
      plVar4[3] = lVar9;
      lVar9 = 0;
      func_0x000107c5f918();
      plVar4[4] = lVar9;
      lVar9 = *(long *)(lVar9 + -8);
      plVar4[5] = lVar9;
      uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar4[6] = uVar6;
      lVar9 = 0x112dbf790;
      func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
      plVar4[7] = lVar9;
      lVar9 = *(long *)(lVar9 + -8);
      plVar4[8] = lVar9;
      uVar6 = *(long *)(lVar9 + 0x40) + 0xf;
      uVar7 = uVar6 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar4[9] = uVar7;
      uVar6 = uVar6 & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar4[10] = uVar6;
      lVar9 = 0x112dbf798;
      func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
      uVar6 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar4[0xb] = uVar6;
      lVar9 = 0;
      func_0x000107c5f8c0();
      plVar4[0xc] = lVar9;
      lVar9 = *(long *)(lVar9 + -8);
      plVar4[0xd] = lVar9;
      uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar4[0xe] = uVar6;
      lVar9 = 0;
      func_0x000107c5f8b8();
      plVar4[0xf] = lVar9;
      lVar9 = *(long *)(lVar9 + -8);
      plVar4[0x10] = lVar9;
      uVar6 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8();
      plVar4[0x11] = uVar6;
      puVar8 = &UNK_102947c44;
      uVar11 = 0;
      uVar10 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(puVar8,uVar11,uVar10);
      return;
    }
    uVar6 = *(long *)(unaff_x22 + 0x208) + 1;
    if (uVar6 != *(ulong *)(unaff_x22 + 0x1e8)) {
      *(ulong *)(unaff_x22 + 0x208) = uVar6;
      dVar15 = (double)uVar6;
      func_0x000107c60fa8();
      dVar15 = dVar15 + dVar15;
      if ((dVar15 == INFINITY) || (NAN(dVar15))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101716398);
        (*pcVar3)();
      }
      if (dVar15 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10171639c);
        (*pcVar3)();
      }
      if (dVar15 < 1.8446744073709552e+19) {
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (long)dVar15;
        if (SUB168(auVar2 * ZEXT816(1000000000),8) == 0) {
          plVar4 = (long *)(ulong)*(uint *)(
                                           PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZTu_11034fe08
                                           + 4);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x210) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = (long)FUN_101715b60;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___sScTss5NeverORszABRs_rlE5sleep11nanosecondsys6UInt64V_tYaKFZ_11034fe00)
                    ((long)dVar15 * 1000000000);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1017163a4);
        (*pcVar3)();
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1017163a0);
      (*pcVar3)();
    }
    lVar9 = *(long *)(unaff_x22 + 0x1f0);
    if (lVar9 == 1) {
      uVar10 = 0xd000000000000010;
      uVar11 = 0x800000010efb9230;
    }
    else {
      if (lVar9 != 0) {
        plVar4 = (long *)(unaff_x22 + 0x180);
LAB_101716330:
        *plVar4 = lVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdb9af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF_11034ed60)
                  (&UNK_11072f2f8,plVar4,&UNK_11072f2f8,PTR___sSiN_11034deb0);
        return;
      }
      uVar10 = 0x7972746572;
      uVar11 = 0xe500000000000000;
    }
    func_0x000103b683b8(*(ulong *)(unaff_x22 + 0x1e8),uVar10,uVar11,0xd000000000000023,
                        0x800000010efb9250);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1e8);
    func_0x000107c6142c(uVar11);
    func_0x000103b684a8(uVar13,uVar10,uVar11);
    func_0x000107c6142c(uVar11);
    if (lRam0000000112dc4188 != -1) {
      func_0x000107c61568(0x112dc4188,0x101715198);
    }
    lVar9 = lRam0000000112dc4190;
    cVar1 = *(char *)(unaff_x22 + 0x248);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc4190 + 0x18));
    func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0x90,0x21,0);
    func_0x0001010af1e4(uVar10,uVar11);
    func_0x000107c614a8(unaff_x22 + 0x90);
    func_0x000107c6142c(uVar11);
    func_0x000107c5d278(*(undefined8 *)(lVar9 + 0x18));
    if (cVar1 == '\x01') {
      if (lRam0000000112dc4198 != -1) {
        func_0x000107c61568(0x112dc4198,0x1017151a4);
      }
      lVar9 = lRam0000000112dc41a0;
      uVar6 = *(ulong *)(unaff_x22 + 0x1d8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
      func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41a0 + 0x18));
      func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0xa8,0,0);
      uVar11 = *(undefined8 *)(lVar9 + 0x10);
      func_0x000107c61434(uVar11);
      func_0x0001000f66f0(uVar6,uVar10,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c5d278(*(undefined8 *)(lVar9 + 0x18));
      if ((uVar6 & 1) == 0) {
        if (lRam0000000112dc41a8 != -1) {
          func_0x000107c61568(0x112dc41a8,0x1017151b0);
        }
        lVar9 = lRam0000000112dc41b0;
        uVar10 = *(undefined8 *)(unaff_x22 + 0x1d8);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
        func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41b0 + 0x18));
        func_0x000107c61428(lVar9 + 0x10,unaff_x22 + 0xc0,0x21,0);
        func_0x000107c61434(uVar11);
        puVar5 = auStack_58;
        func_0x000100403b00(puVar5,uVar10,uVar11);
        func_0x000107c614a8(unaff_x22 + 0xc0);
        func_0x000107c6142c(uStack_50);
        func_0x000107c5d278(*(undefined8 *)(lVar9 + 0x18));
        if (((ulong)puVar5 & 1) != 0) {
          func_0x000107c61644(unaff_x22 + 0x188,*(undefined8 *)(unaff_x22 + 0x1f8));
          uVar11 = 0;
          func_0x000107c5fcec();
          puVar8 = PTR___sScMMa_11034fc70;
          uVar10 = uVar11;
          func_0x000107c5fce8();
          *(undefined8 *)(unaff_x22 + 0x240) = uVar10;
          uVar10 = 0x112d45220;
          FUN_1017173f8(0x112d45220,puVar8,PTR___sScMScAsMc_11034fc78);
          func_0x000107c5fca8(uVar11,uVar10);
          puVar8 = (undefined *)0x1017166fc;
          goto LAB_107c615e0;
        }
      }
    }
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x000101715f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1017163ec; end: 101716433;  */

void FUN_1017163ec(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x230));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101716434,0,0);
  return;
}



/* Entry: 101716434; end: 101716687;  */

void FUN_101716434(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  
  if (lRam0000000112dc4188 != -1) {
    func_0x000107c61568(0x112dc4188,0x101715198);
  }
  lVar3 = lRam0000000112dc4190;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc4190 + 0x18));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x120,0x21,0);
  func_0x0001010af1e4(uVar6,uVar5);
  func_0x000107c614a8(unaff_x22 + 0x120);
  func_0x000107c6142c(uVar5);
  func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x18));
  if (lRam0000000112dc41a8 != -1) {
    func_0x000107c61568(0x112dc41a8,0x1017151b0);
  }
  lVar3 = lRam0000000112dc41b0;
  cVar1 = *(char *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
  func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41b0 + 0x18));
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x138,0x21,0);
  func_0x0001010af1e4(uVar6,uVar5);
  func_0x000107c614a8(unaff_x22 + 0x138);
  func_0x000107c6142c(uVar5);
  func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x18));
  if (cVar1 == '\x01') {
    if (lRam0000000112dc4198 != -1) {
      func_0x000107c61568(0x112dc4198,0x1017151a4);
    }
    lVar3 = lRam0000000112dc41a0;
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
    func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41a0 + 0x18));
    func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x150,0x21,0);
    func_0x000107c61434(uVar5);
    puVar4 = auStack_48;
    func_0x000100403b00(puVar4,uVar6,uVar5);
    func_0x000107c614a8(unaff_x22 + 0x150);
    func_0x000107c6142c(uStack_40);
    func_0x000107c5d278(*(undefined8 *)(lVar3 + 0x18));
    if (((ulong)puVar4 & 1) != 0) {
      func_0x000107c61644(unaff_x22 + 0x1b0,*(undefined8 *)(unaff_x22 + 0x1f8));
      uVar5 = 0;
      func_0x000107c5fcec();
      puVar2 = PTR___sScMMa_11034fc70;
      uVar6 = uVar5;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0x238) = uVar6;
      uVar6 = 0x112d45220;
      FUN_1017173f8(0x112d45220,puVar2,PTR___sScMScAsMc_11034fc78);
      func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101716688,uVar5,uVar6);
      return;
    }
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010171663c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101716688; end: 10171679f;  */

void FUN_101716688(void)

{
  long lVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x238));
  func_0x000107c61428(unaff_x22 + 0x1b0,unaff_x22 + 0x168,0,0);
  lVar1 = unaff_x22 + 0x1b0;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_1017167d8();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61640(unaff_x22 + 0x1b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101717464,0,0);
  return;
}



/* Entry: 1017167a0; end: 1017167d7;  */

void FUN_1017167a0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  **(undefined8 **)(*(long *)(*plVar1 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 1017167d8; end: 101716d57;  */

void FUN_1017167d8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  
  func_0x000107c614e8(*unaff_x20);
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0x737361702d6e6166;
  uVar12 = 0xee0065676461622d;
  func_0x000107c5fadc(0x737361702d6e6166,0xee0065676461622d);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1126b0ae0;
  func_0x000107c61168(PTR_PTR_1126b0ae0);
  puVar5 = PTR_PTR_1126c3378;
  func_0x000107c61168(PTR_PTR_1126c3378);
  puVar6 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c44f94(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x00010171a980();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar12);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101716d58;
  uStack_78 = 0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103fddd8;
  ppuVar7 = &puStack_a0;
  func_0x000107c60bc4(ppuVar7);
  pcStack_80 = FUN_101716f1c;
  uStack_78 = 0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103fde00;
  ppuVar8 = &puStack_a0;
  func_0x000107c60bc4();
  pcStack_80 = FUN_101716f1c;
  uStack_78 = 0;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_1103fde28;
  ppuVar9 = &puStack_a0;
  func_0x000107c60bc4();
  func_0x000107c40b04(0x4024000000000000,puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  lVar10 = unaff_x20[4];
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar11 = lVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  puVar1 = puVar3;
  if (lVar11 != 0) {
    func_0x000107c5c2e0(lVar11);
    func_0x000107c615e8(lVar11);
    puVar1 = puVar4;
    puVar4 = puVar3;
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 101716d58; end: 101716f1b;  */

void FUN_101716d58(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar10,0xd00000000000001f,0x800000010efb9280);
  puVar2 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = 0x112d377a8;
    FUN_1017173f8(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 101716f1c; end: 101716f23;  */

void FUN_101716f1c(void)

{
  return;
}



/* Entry: 101716f24; end: 1017170e7;  */

void FUN_101716f24(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar10,0xd000000000000019,0x800000010efb92a0);
  puVar2 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000293e4(puVar10);
  }
  else {
    (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c5ed90();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar6 = 0;
    func_0x000100dfa6ec(0);
    uVar7 = 0x112d377a8;
    FUN_1017173f8(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
    puVar8 = puVar5;
    func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
    func_0x000107c6142c(puVar5);
    func_0x000107c4de70(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar8);
    (**(code **)(lVar11 + 8))(lVar9,lVar1);
  }
  return;
}



/* Entry: 1017170e8; end: 1017170ef;  */

void FUN_1017170e8(void)

{
  return;
}



/* Entry: 1017170f0; end: 101717143;  */

void FUN_1017170f0(void)

{
  long unaff_x20;
  
  FUN_1017171d0(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101717144; end: 101717147;  */

void FUN_101717144(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 101717148; end: 1017171c3;  */

void FUN_101717148(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_20 = PTR___sBbWV_11034d660 + 0x40;
  puStack_18 = PTR___sBOWV_11034d658 + 0x40;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x60);
  return;
}



/* Entry: 1017171c4; end: 1017171cf;  */

void FUN_1017171c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e64fc38);
  return;
}



/* Entry: 1017171d0; end: 1017171f3;  */

undefined8 FUN_1017171d0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1017171f4; end: 10171720b;  */

long FUN_1017171f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10171720c; end: 1017173db;  */

uint FUN_10171720c(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  uVar2 = param_1;
  func_0x0001029444e8();
  if ((uVar2 & 1) == 0) {
    if (lRam0000000112dc4198 != -1) {
      func_0x000107c61568(0x112dc4198,0x1017151a4);
    }
    lVar1 = lRam0000000112dc41a0;
    func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41a0 + 0x18));
    func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
    uVar5 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c61434(uVar5);
    uVar2 = param_1;
    func_0x0001000f66f0(param_1,param_2,uVar5);
    func_0x000107c6142c(uVar5);
    func_0x000107c5d278(*(undefined8 *)(lVar1 + 0x18));
    if ((uVar2 & 1) == 0) {
      if (lRam0000000112dc41a8 != -1) {
        func_0x000107c61568(0x112dc41a8,0x1017151b0);
      }
      lVar1 = lRam0000000112dc41b0;
      func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc41b0 + 0x18));
      func_0x000107c61428(lVar1 + 0x10,auStack_70,0,0);
      uVar5 = *(undefined8 *)(lVar1 + 0x10);
      func_0x000107c61434(uVar5);
      uVar2 = param_1;
      func_0x0001000f66f0(param_1,param_2,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5d278(*(undefined8 *)(lVar1 + 0x18));
      if ((uVar2 & 1) == 0) {
        if (lRam0000000112dc4188 != -1) {
          func_0x000107c61568(0x112dc4188,0x101715198);
        }
        lVar1 = lRam0000000112dc4190;
        func_0x000107c4b940(*(undefined8 *)(lRam0000000112dc4190 + 0x18));
        func_0x000107c61428(lVar1 + 0x10,auStack_98,0x21,0);
        func_0x000107c61434(param_2);
        puVar3 = auStack_80;
        func_0x000100403b00(puVar3,param_1,param_2);
        uVar4 = (uint)puVar3;
        func_0x000107c614a8(auStack_98);
        func_0x000107c6142c(uStack_78);
        func_0x000107c5d278(*(undefined8 *)(lVar1 + 0x18));
        goto LAB_101717308;
      }
    }
  }
  uVar4 = 0;
LAB_101717308:
  return uVar4 & 1;
}



/* Entry: 1017173dc; end: 1017173f7;  */

void FUN_1017173dc(long param_1,long param_2)

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



/* Entry: 1017173f8; end: 101717437;  */

void FUN_1017173f8(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 101717438; end: 10171747b;  */

void FUN_101717438(long param_1,long param_2)

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



/* Entry: 10171747c; end: 1017179eb;  */

void FUN_10171747c(undefined1 *param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  long unaff_x21;
  long lVar15;
  undefined1 auStack_108 [16];
  long lStack_e0;
  long lStack_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [32];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100672b50(param_2,&stack0xffffffffffffff08);
  if (lStack_e0 == 0) {
    FUN_101717a6c(&stack0xffffffffffffff08,0x112d387f8,&UNK_10d902650);
    uVar8 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if ((int)uVar8 != 0) {
      FUN_1017179ec();
      func_0x000107c61658(&stack0xffffffffffffff08,&UNK_1103fdf50,uVar8);
    }
    FUN_101717a6c(param_2,0x112d387f8,&UNK_10d902650);
    unaff_x21 = 0;
  }
  else {
    func_0x000100102924(&stack0xffffffffffffff08,auStack_90);
    func_0x0001000bb420(auStack_90,&stack0xffffffffffffff08);
    plVar5 = &lStack_c0;
    func_0x000107c6147c(plVar5,&stack0xffffffffffffff08,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSN_11034da80,6);
    puVar7 = puStack_b8;
    if (((ulong)plVar5 & 1) == 0) {
      uVar8 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if ((int)uVar8 != 0) {
        FUN_1017179ec();
        func_0x000107c61658(&stack0xffffffffffffff08,&UNK_1103fdf50,uVar8);
      }
      FUN_101717a6c(param_2,0x112d387f8,&UNK_10d902650);
      func_0x000100183ab8(auStack_90);
      unaff_x21 = 1;
    }
    else {
      lVar6 = lStack_c0;
      puVar12 = puStack_b8;
      func_0x000107c5ee08(lStack_c0,puStack_b8,0);
      func_0x000107c6142c(puVar7);
      if ((ulong)puVar12 >> 0x3c < 0xf) {
        uStack_a0 = 0;
        puStack_b8 = (undefined1 *)0x0;
        lStack_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
        uVar3 = (uint)((ulong)puVar12 >> 0x20);
        uVar14 = uVar3 >> 0x1e;
        if (uVar3 >> 0x1e < 2) {
          if (uVar14 == 0) {
            auStack_108[0] = (undefined1)lVar6;
            auStack_108[1] = (undefined1)((ulong)lVar6 >> 8);
            auStack_108[2] = (undefined1)((ulong)lVar6 >> 0x10);
            auStack_108[3] = (undefined1)((ulong)lVar6 >> 0x18);
            auStack_108[4] = (undefined1)((ulong)lVar6 >> 0x20);
            auStack_108[5] = (undefined1)((ulong)lVar6 >> 0x28);
            auStack_108[6] = (undefined1)((ulong)lVar6 >> 0x30);
            auStack_108[7] = (undefined1)((ulong)lVar6 >> 0x38);
            auStack_108[8] = SUB81(puVar12,0);
            auStack_108[9] = (undefined1)((ulong)puVar12 >> 8);
            auStack_108[10] = (undefined1)((ulong)puVar12 >> 0x10);
            auStack_108[0xb] = (undefined1)((ulong)puVar12 >> 0x18);
            auStack_108[0xc] = (undefined1)((ulong)puVar12 >> 0x20);
            auStack_108[0xd] = (undefined1)((ulong)puVar12 >> 0x28);
            puVar13 = auStack_108 + ((ulong)puVar12 >> 0x30 & 0xff);
            func_0x000101717a2c();
            puVar9 = auStack_108;
          }
          else {
            lVar15 = (long)(int)lVar6;
            puVar9 = (undefined1 *)((lVar6 >> 0x20) - lVar15);
            if (lVar6 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1017179dc);
              (*pcVar4)();
            }
            puVar10 = (undefined1 *)((ulong)puVar12 & 0x3fffffffffffffff);
            func_0x000107c6157c();
            func_0x000107c5ec30();
            if (puVar10 == (undefined1 *)0x0) {
              func_0x000107c5ec38();
              puVar9 = (undefined1 *)0x0;
              puVar7 = puVar10;
LAB_101717838:
              puVar13 = (undefined1 *)0x0;
            }
            else {
              puVar7 = puVar10;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar15,(long)puVar7)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1017179e8);
                (*pcVar4)();
              }
              puVar10 = puVar10 + (lVar15 - (long)puVar7);
              func_0x000107c5ec38();
              puVar1 = puVar7;
              if ((long)puVar9 <= (long)puVar7) {
                puVar1 = puVar9;
              }
              puVar9 = (undefined1 *)0x0;
              if (puVar10 != (undefined1 *)0x0) {
                puVar9 = puVar10;
              }
              puVar13 = (undefined1 *)0x0;
              if (puVar10 != (undefined1 *)0x0) {
                puVar13 = puVar1 + (long)puVar10;
              }
            }
LAB_10171783c:
            func_0x000101717a2c();
          }
        }
        else {
          if (uVar14 == 2) {
            lVar15 = *(long *)(lVar6 + 0x10);
            lVar2 = *(long *)(lVar6 + 0x18);
            func_0x000107c6157c(lVar6);
            puVar9 = (undefined1 *)((ulong)puVar12 & 0x3fffffffffffffff);
            func_0x000107c6157c();
            func_0x000107c5ec30();
            puVar7 = puVar9;
            if (puVar9 != (undefined1 *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar15,(long)puVar7)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1017179e4);
                (*pcVar4)();
              }
              puVar9 = puVar9 + (lVar15 - (long)puVar7);
            }
            puVar13 = (undefined1 *)(lVar2 - lVar15);
            if (SBORROW8(lVar2,lVar15)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1017179e0);
              (*pcVar4)();
            }
            func_0x000107c5ec38();
            if (puVar9 == (undefined1 *)0x0) goto LAB_101717838;
            puVar10 = puVar7;
            if ((long)puVar13 <= (long)puVar7) {
              puVar10 = puVar13;
            }
            puVar13 = puVar10 + (long)puVar9;
            goto LAB_10171783c;
          }
          func_0x000101717a2c();
          auStack_108[0] = 0;
          auStack_108[1] = 0;
          auStack_108[2] = 0;
          auStack_108[3] = 0;
          auStack_108[4] = 0;
          auStack_108[5] = 0;
          auStack_108[6] = 0;
          auStack_108[7] = 0;
          auStack_108[8] = 0;
          auStack_108[9] = 0;
          auStack_108[10] = 0;
          auStack_108[0xb] = 0;
          auStack_108[0xc] = 0;
          auStack_108[0xd] = 0;
          puVar9 = auStack_108;
          puVar13 = auStack_108;
        }
        func_0x00010006ae80(puVar9,puVar13,&lStack_c0,0,100,0,&UNK_1103fe2b0,puVar7);
        if (unaff_x21 == 0) {
          func_0x0001000b44c0(lVar6,puVar12);
          FUN_101717a6c(&lStack_c0,0x112d49548,&UNK_10d90fde0);
          func_0x0001000b44c0(lVar6,puVar12);
          FUN_101717a6c(param_2,0x112d387f8,&UNK_10d902650);
          func_0x000100183ab8(auStack_90);
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x10) = 0xe000000000000000;
          *(undefined8 *)(param_1 + 8) = 0;
          *(undefined8 *)(param_1 + 0x20) = 0xe000000000000000;
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0xc000000000000000;
          goto LAB_10171792c;
        }
        func_0x0001000b44c0(lVar6,puVar12);
        FUN_101717a6c(&lStack_c0,0x112d49548,&UNK_10d90fde0);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c6142c(0xe000000000000000);
        func_0x00010006c090(0,0xc000000000000000);
        uVar8 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar8 != 0) {
          FUN_1017179ec();
          func_0x000107c61658(&stack0xffffffffffffff08,&UNK_1103fdf50,uVar8);
        }
        func_0x0001000b44c0(lVar6,puVar12);
        FUN_101717a6c(param_2,0x112d387f8,&UNK_10d902650);
        func_0x000100183ab8(auStack_90);
      }
      else {
        uVar8 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if ((int)uVar8 != 0) {
          FUN_1017179ec();
          func_0x000107c61658(&stack0xffffffffffffff08,&UNK_1103fdf50,uVar8);
        }
        FUN_101717a6c(param_2,0x112d387f8,&UNK_10d902650);
        func_0x000100183ab8(auStack_90);
        unaff_x21 = 2;
      }
    }
  }
  *param_3 = unaff_x21;
LAB_10171792c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  func_0x000107c60e78();
  if (puRam0000000112dc41c8 == (undefined *)0x0) {
    puVar11 = &UNK_10d981890;
    func_0x000107c61520(&UNK_10d981890,&UNK_1103fdf50);
    puRam0000000112dc41c8 = puVar11;
    return;
  }
  return;
}



/* Entry: 1017179ec; end: 101717a6b;  */

void FUN_1017179ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc41c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d981890;
  func_0x000107c61520(&UNK_10d981890,&UNK_1103fdf50);
  puRam0000000112dc41c8 = puVar1;
  return;
}



/* Entry: 101717a6c; end: 101717aab;  */

undefined8 FUN_101717a6c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101717aac; end: 101717ac3;  */

void FUN_101717aac(ulong *param_1)

{
  if (0xfffffffe < *param_1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
  return;
}



/* Entry: 101717ac4; end: 101717bb3;  */

ulong * FUN_101717ac4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      func_0x000107c614b0(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    func_0x000107c614ac();
    *param_1 = *param_2;
  }
  else {
    func_0x000107c614b0(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c614ac(uVar1);
  }
  return param_1;
}



/* Entry: 101717bb4; end: 101717cb3;  */

int FUN_101717bb4(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffffd;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Entry: 101717cb4; end: 101717d27;  */

long FUN_101717cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x00010044d36c();
  func_0x000107c613fc();
  func_0x00010044d38c();
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  return unaff_x20;
}



/* Entry: 101717d28; end: 101717da3;  */

void FUN_101717d28(void)

{
  long unaff_x20;
  undefined8 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(unaff_x20 + 0x30);
  if (pcVar2 != (code *)0x0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c6157c(uVar1);
    (*pcVar2)();
    func_0x00010058d43c(pcVar2,uVar1);
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x00010058d43c(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101717da4; end: 101717dbb;  */

void FUN_101717da4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101717dbc,0,0);
  return;
}



/* Entry: 101717dbc; end: 101717edb;  */

void FUN_101717dbc(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x58);
  lVar1 = 0;
  func_0x000107c5f8b8();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar1 = 0;
  func_0x000107c5f8c0();
  lVar6 = *(long *)(lVar1 + -8);
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar3);
  func_0x000107c5f910(uVar3);
  func_0x000107c5f8bc(uVar2);
  (**(code **)(lVar6 + 8))(uVar3,lVar1);
  func_0x000107c615c0(uVar3);
  lVar1 = 0x112dbf798;
  func_0x0001000285a8(0x112dbf798,&UNK_10d9819c0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  plVar4 = (long *)(ulong)*(uint *)(
                                   PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                   + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101717edc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
  )(plVar4,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101717edc; end: 101717f23;  */

void FUN_101717edc(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101717f24,0,0);
  return;
}



/* Entry: 101717f24; end: 101718a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101717f24(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *plVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long unaff_x22;
  long lVar24;
  long lVar25;
  code *pcVar26;
  uint uStack_70;
  
  uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar4 = 0x112dbf790;
  func_0x0001000285a8(0x112dbf790,&UNK_10d97ae40);
  lVar23 = *(long *)(lVar4 + -8);
  uVar15 = uVar22;
  (**(code **)(lVar23 + 0x30))(uVar22,1,lVar4);
  if ((int)uVar15 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
LAB_1017180ec:
    uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c615c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010171811c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar24 = *(long *)(unaff_x22 + 0x58);
  uVar5 = *(long *)(lVar23 + 0x40) + 0xf;
  uVar2 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  FUN_101718fc4(uVar22,uVar2);
  lVar24 = lVar24 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x90) = lVar24;
  if (lVar24 == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
    func_0x00010171905c(uVar2,0x112dbf790,&UNK_10d97ae40);
    func_0x000107c615c0(uVar2);
    goto LAB_1017180ec;
  }
  plVar3 = (long *)(uVar5 & 0xfffffffffffffff0);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x98) = plVar3;
  func_0x000101719014(uVar2,plVar3,0x112dbf790,&UNK_10d97ae40);
  plVar12 = plVar3;
  func_0x000107c614c4(plVar3,lVar4);
  if ((int)plVar12 != 1) {
    func_0x000107c61574(lVar24);
    lVar4 = 0x112dbf7a0;
    func_0x0001000285a8(0x112dbf7a0,&UNK_10d97ae50);
    iVar1 = *(int *)(lVar4 + 0x30);
    lVar4 = 0x112dbf7a8;
    func_0x0001000285a8(0x112dbf7a8,&UNK_10d97ae58);
    (**(code **)(*(long *)(lVar4 + -8) + 8))((long)plVar3 + (long)iVar1,lVar4);
    lVar4 = 0;
    func_0x000107c5f918();
    (**(code **)(*(long *)(lVar4 + -8) + 8))(plVar3,lVar4);
    goto LAB_1017189f0;
  }
  lVar4 = 0;
  func_0x000107c5f918();
  *(long *)(unaff_x22 + 0xa0) = lVar4;
  lVar23 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar23;
  uVar5 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar5;
  uVar2 = uVar5;
  (**(code **)(lVar23 + 0x20))();
  func_0x000107c5f914();
  plVar19 = plVar3;
  func_0x000102943290();
  func_0x000107c6142c();
  func_0x000107c5f8d4();
  plVar12 = plVar3;
  func_0x000103fdb9d0();
  if (plVar19 == (long *)0x0) {
    if ((uVar2 & 1) != 0) {
      uStack_70 = 0;
      goto LAB_1017181d4;
    }
LAB_101718344:
    func_0x000107c61574(lVar24);
    (**(code **)(lVar23 + 8))(uVar5,lVar4);
    goto LAB_1017189ec;
  }
  if ((plVar3 == (long *)*plVar12) && (plVar19 == (long *)plVar12[1])) {
    func_0x000107c6142c(plVar19);
    uStack_70 = 1;
  }
  else {
    func_0x000107c605b8(plVar3,plVar19,(long *)*plVar12,(long *)plVar12[1],0);
    func_0x000107c6142c(plVar19);
    if ((((uint)uVar2 | (uint)plVar3) & 1) == 0) goto LAB_101718344;
    uStack_70 = (uint)uVar2 ^ 1 | (uint)plVar3;
  }
LAB_1017181d4:
  lVar25 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar13 = *(long *)(*(long *)(lVar25 + -8) + 0x40) + 0xf;
  uVar6 = uVar13 & 0xfffffffffffffff0;
  func_0x000107c615b8(uVar6);
  func_0x000107c5f8c8(uVar6);
  uVar7 = uVar13 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar8 = 0;
  func_0x000107c5eea4();
  lVar21 = *(long *)(lVar8 + -8);
  (**(code **)(lVar21 + 0x38))(uVar7,1,1,lVar8);
  lVar25 = 0x112d373d0;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  uVar9 = *(long *)(*(long *)(lVar25 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  lVar25 = (long)*(int *)(lVar25 + 0x30);
  func_0x000101719014(uVar6,uVar9,0x112d373d8,&UNK_10d9014c0);
  func_0x000101719014(uVar7,uVar9 + lVar25,0x112d373d8,&UNK_10d9014c0);
  pcVar26 = *(code **)(lVar21 + 0x30);
  uVar14 = uVar9;
  (*pcVar26)(uVar9,1,lVar8);
  if ((int)uVar14 == 1) {
    func_0x00010171905c(uVar7,0x112d373d8,&UNK_10d9014c0);
    func_0x00010171905c(uVar6,0x112d373d8,&UNK_10d9014c0);
    lVar25 = uVar9 + lVar25;
    (*pcVar26)(lVar25,1,lVar8);
    if ((int)lVar25 == 1) {
      uVar15 = 0x112d373d8;
      func_0x00010171905c(uVar9,0x112d373d8,&UNK_10d9014c0);
      func_0x000107c615c0(uVar9);
      func_0x000107c615c0(uVar7);
      func_0x000107c615c0(uVar6);
LAB_101718564:
      if ((uStack_70 & 1) == 0) {
LAB_1017186d4:
        lVar8 = 0;
        func_0x000107c5f920();
        lVar25 = *(long *)(lVar8 + -8);
        uVar13 = *(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar13);
        func_0x000107c5f90c(uVar13);
        func_0x000107c5f91c();
        (**(code **)(lVar25 + 8))(uVar13,lVar8);
        func_0x000107c615c0(uVar13);
        func_0x000107c5f8d0();
        lVar25 = 0;
        func_0x000107c5fb10();
        uVar14 = *(long *)(*(long *)(lVar25 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8(uVar14);
        func_0x000107c5fb04(uVar14);
        lVar25 = lVar8;
        func_0x000107c5faf0(uVar13,lVar8,uVar14);
        func_0x000107c6142c(uVar15);
        func_0x000107c6142c(lVar25);
        func_0x00010006c090(uVar13,lVar8);
        func_0x000107c615c0(uVar14);
        uVar15 = 2;
        uVar22 = 0x11;
        func_0x000100029b9c(2,0x11,0,0);
        if ((int)uVar15 == 0) {
          func_0x000107c5f8d0();
          func_0x0001029483f4();
          func_0x00010006c090(uVar15,uVar22);
        }
        else {
          lVar25 = 0;
          func_0x000107c5f900();
          lVar8 = *(long *)(lVar25 + -8);
          uVar13 = *(long *)(lVar8 + 0x40) + 0xf;
          uVar6 = uVar13 & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar6);
          func_0x000107c5f908(uVar6);
          uVar13 = uVar13 & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar13);
          uVar14 = uVar13;
          func_0x000107c5f8fc(uVar13);
          FUN_10171909c();
          func_0x000107c5fab8(uVar6,uVar13,lVar25,uVar14);
          pcVar26 = *(code **)(lVar8 + 8);
          (*pcVar26)(uVar13,lVar25);
          (*pcVar26)(uVar6,lVar25);
          func_0x000107c615c0(uVar13);
          func_0x000107c615c0(uVar6);
        }
        if ((uVar2 & 1) == 0) {
          func_0x000107c61574(lVar24);
          (**(code **)(lVar23 + 8))(uVar5,lVar4);
LAB_1017189ec:
          func_0x000107c615c0(uVar5);
LAB_1017189f0:
          uVar15 = *(undefined8 *)(unaff_x22 + 0x88);
          func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
          func_0x00010171905c(uVar15,0x112dbf790,&UNK_10d97ae40);
          func_0x000107c615c0(uVar15);
          plVar12 = (long *)(ulong)*(uint *)(
                                            PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaFTu_110347b80
                                            + 4);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x80) = plVar12;
          *plVar12 = unaff_x22;
          plVar12[1] = (long)FUN_101717edc;
                    /* WARNING: Could not recover jumptable at 0x00010bdb70ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___s8StoreKit11TransactionV12TransactionsV13AsyncIteratorV4nextAA18VerificationResultOyACGSgyYaF_110347b78
          )(plVar12,*(undefined8 *)(unaff_x22 + 0x78));
          return;
        }
        func_0x000100083b20(unaff_x22 + 0x28);
        lVar23 = *(long *)(unaff_x22 + 0x28);
        lVar4 = lVar23;
        func_0x000107c42e5c();
        func_0x000107c61180();
        func_0x000107c61170(lVar23);
        lVar23 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        if (lVar23 != 0) {
          lVar4 = lVar23;
          func_0x000107c42dc0();
          func_0x000107c615e8(lVar23);
          if (0 < lVar4) {
            func_0x000100083b20(unaff_x22 + 0x30);
            lVar4 = *(long *)(unaff_x22 + 0x30);
            uVar15 = *(undefined8 *)(lVar4 + _DAT_113041e48);
            func_0x000107c615f0(uVar15);
            func_0x000107c61170();
            func_0x000107c5f8f4();
            *(long *)(unaff_x22 + 0x38) = lVar4;
            puVar16 = PTR___ss6UInt64VN_11034f048;
            puVar17 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
            func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                                PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
            puVar20 = puVar17;
            func_0x000107c5fadc();
            func_0x000107c6142c(puVar17);
            func_0x000107c5f8d0();
            puVar18 = puVar17;
            func_0x000107c5ee20();
            func_0x00010006c090(puVar17,puVar20);
            func_0x000107c506b4(uVar15);
            func_0x000107c61574(lVar24);
            func_0x000107c61170(puVar18);
            func_0x000107c61170(puVar16);
            func_0x000107c615e8(uVar15);
            uVar5 = *(ulong *)(unaff_x22 + 0xb0);
            (**(code **)(*(long *)(unaff_x22 + 0xa8) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0xa0));
            goto LAB_1017189ec;
          }
        }
        plVar12 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 +
                                          4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 200) = plVar12;
        pcVar26 = (code *)0x101718bd0;
      }
      else {
        func_0x000100083b20(unaff_x22 + 0x40);
        lVar8 = *(long *)(unaff_x22 + 0x40);
        lVar25 = lVar8;
        func_0x000107c42e5c();
        func_0x000107c61180();
        func_0x000107c61170(lVar8);
        lVar8 = lVar25;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar25);
        if (lVar8 == 0) goto LAB_1017186d4;
        lVar25 = lVar8;
        func_0x000107c4ea54();
        func_0x000107c615e8(lVar8);
        if ((int)lVar25 == 0) goto LAB_1017186d4;
        func_0x000100083b20(unaff_x22 + 0x48);
        lVar4 = *(long *)(unaff_x22 + 0x48);
        lVar23 = *(long *)(lVar4 + _DAT_113042550);
        func_0x000107c61174();
        func_0x000107c61170(lVar4);
        lVar4 = lVar23;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170();
        if (lVar4 != 0) {
          func_0x000107c5f8f4();
          *(long *)(unaff_x22 + 0x50) = lVar23;
          puVar16 = PTR___ss6UInt64VN_11034f048;
          puVar18 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068;
          func_0x000107c6057c(PTR___ss6UInt64VN_11034f048,
                              PTR___ss6UInt64Vs23CustomStringConvertiblesWP_11034f068);
          puVar17 = puVar18;
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar18);
          func_0x000107c5f914();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar17);
          lVar23 = lVar4;
          func_0x000107c5c350(lVar4);
          func_0x000107c61180();
          func_0x000107c61170(puVar18);
          func_0x000107c61170(puVar16);
          func_0x000107c615e8(lVar4);
          func_0x000107c61170(lVar23);
        }
        plVar12 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 +
                                          4);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xc0) = plVar12;
        pcVar26 = FUN_101718b88;
      }
      *plVar12 = unaff_x22;
      plVar12[1] = (long)pcVar26;
      goto LAB_101718474;
    }
LAB_1017183f8:
    func_0x00010171905c(uVar9,0x112d373d0,&UNK_10d90f8f0);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar6);
  }
  else {
    uVar13 = uVar13 & 0xfffffffffffffff0;
    func_0x000107c615b8();
    func_0x000101719014(uVar9,uVar13,0x112d373d8,&UNK_10d9014c0);
    lVar25 = uVar9 + lVar25;
    (*pcVar26)(lVar25,1,lVar8);
    if ((int)lVar25 == 1) {
      func_0x00010171905c(uVar7,0x112d373d8,&UNK_10d9014c0);
      func_0x00010171905c(uVar6,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar21 + 8))(uVar13,lVar8);
      func_0x000107c615c0(uVar13);
      goto LAB_1017183f8;
    }
    uVar10 = *(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8(uVar10);
    uVar14 = uVar10;
    (**(code **)(lVar21 + 0x20))();
    func_0x000100df4c40();
    uVar11 = uVar13;
    func_0x000107c5fab8(uVar13,uVar10,lVar8,uVar14);
    pcVar26 = *(code **)(lVar21 + 8);
    (*pcVar26)(uVar10,lVar8);
    uVar15 = 0x112d373d8;
    func_0x00010171905c(uVar7,0x112d373d8,&UNK_10d9014c0);
    func_0x00010171905c(uVar6,0x112d373d8,&UNK_10d9014c0);
    (*pcVar26)(uVar13,lVar8);
    func_0x000107c615c0(uVar10);
    func_0x000107c615c0(uVar13);
    func_0x00010171905c(uVar9,0x112d373d8,&UNK_10d9014c0);
    func_0x000107c615c0(uVar9);
    func_0x000107c615c0(uVar7);
    func_0x000107c615c0(uVar6);
    if ((uVar11 & 1) != 0) goto LAB_101718564;
  }
  if ((uVar2 & 1) != 0) {
    uVar15 = *(undefined8 *)(lVar24 + 0x28);
    func_0x000107c6157c(uVar15);
    func_0x000103b6863c();
    func_0x000107c61574(uVar15);
  }
  plVar12 = (long *)(ulong)*(uint *)(PTR___s8StoreKit11TransactionV6finishyyYaFTu_110347c38 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_101718a94;
LAB_101718474:
                    /* WARNING: Could not recover jumptable at 0x00010bdb719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s8StoreKit11TransactionV6finishyyYaF_110347c30)();
  return;
}



/* Entry: 101718a94; end: 101718adb;  */

void FUN_101718a94(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101718adc,0,0);
  return;
}


