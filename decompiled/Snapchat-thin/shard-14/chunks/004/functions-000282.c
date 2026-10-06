/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1fe4a0; end: 10b1fe4ff;  */

void FUN_10b1fe4a0(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_38 = 0;
  uStack_40 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c27f10(&uStack_30);
  func_0x000107c27f10(&uStack_40);
  uStack_28 = 0;
  uStack_30 = 0;
  func_0x0001054918e8(param_1 + 0x18,&uStack_30);
  func_0x000107c27d78(&uStack_30);
  return;
}



/* Entry: 10b1fe500; end: 10b1fe503;  */

undefined8 * FUN_10b1fe500(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc5e08;
  func_0x000107c27d78(param_1 + 3);
  func_0x000107c27f10(param_1 + 1);
  return param_1;
}



/* Entry: 10b1fe504; end: 10b1fe517;  */

void FUN_10b1fe504(void)

{
  FUN_10b1fe518();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1fe518; end: 10b1fe557;  */

undefined8 * FUN_10b1fe518(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc5e08;
  func_0x000107c27d78(param_1 + 3);
  func_0x000107c27f10(param_1 + 1);
  return param_1;
}



/* Entry: 10b1fe558; end: 10b1fe57b;  */

void FUN_10b1fe558(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1fe560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* Entry: 10b1fe57c; end: 10b1fe6fb;  */

void FUN_10b1fe57c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x19;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  FUN_10b1fe7fc();
  puVar14 = *(undefined8 **)(unaff_x19 + 0x10);
  if (puVar14 < *(undefined8 **)(unaff_x19 + 0x18)) {
    uVar16 = *param_2;
    puVar14[1] = param_2[1];
    *puVar14 = uVar16;
    lVar8 = param_2[3];
    uVar16 = param_2[2];
    puVar14[3] = param_2[3];
    puVar14[2] = uVar16;
    if (lVar8 != 0) {
      plVar1 = (long *)(lVar8 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar14 = puVar14 + 4;
LAB_10b1fe6c0:
    *(undefined8 **)(unaff_x19 + 0x10) = puVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x48);
    return;
  }
  puVar15 = *(undefined8 **)(unaff_x19 + 8);
  lVar8 = (long)puVar14 - (long)puVar15 >> 5;
  uVar2 = lVar8 + 1;
  if (uVar2 >> 0x3b == 0) {
    uVar9 = (long)*(undefined8 **)(unaff_x19 + 0x18) - (long)puVar15;
    uVar13 = (long)uVar9 >> 4;
    if (uVar13 <= uVar2) {
      uVar13 = uVar2;
    }
    if (0x7fffffffffffffdf < uVar9) {
      uVar13 = 0x7ffffffffffffff;
    }
    if (uVar13 >> 0x3b == 0) {
      lVar7 = uVar13 << 5;
      __Znwm();
      puVar3 = (undefined8 *)(lVar7 + ((long)puVar14 - (long)puVar15));
      lVar10 = param_2[3];
      uVar16 = *param_2;
      uVar18 = param_2[3];
      uVar17 = param_2[2];
      puVar3[1] = param_2[1];
      *puVar3 = uVar16;
      puVar3[3] = uVar18;
      puVar3[2] = uVar17;
      if (lVar10 != 0) {
        plVar1 = (long *)(lVar10 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar15 = *(undefined8 **)(unaff_x19 + 8);
        puVar14 = *(undefined8 **)(unaff_x19 + 0x10);
        lVar8 = (long)puVar14 - (long)puVar15 >> 5;
      }
      puVar11 = puVar3 + lVar8 * -4;
      for (puVar12 = puVar15; puVar12 != puVar14; puVar12 = puVar12 + 4) {
        uVar16 = *puVar12;
        puVar11[1] = puVar12[1];
        *puVar11 = uVar16;
        uVar16 = puVar12[2];
        puVar11[3] = puVar12[3];
        puVar11[2] = uVar16;
        puVar12[2] = 0;
        puVar12[3] = 0;
        puVar11 = puVar11 + 4;
      }
      for (; puVar15 != puVar14; puVar15 = puVar15 + 4) {
        func_0x000107c27d78(puVar15 + 2);
      }
      puVar14 = puVar3 + 4;
      lVar10 = *(long *)(unaff_x19 + 8);
      *(undefined8 **)(unaff_x19 + 8) = puVar3 + lVar8 * -4;
      *(undefined8 **)(unaff_x19 + 0x10) = puVar14;
      *(ulong *)(unaff_x19 + 0x18) = lVar7 + uVar13 * 0x20;
      if (lVar10 != 0) {
        __ZdlPv();
      }
      goto LAB_10b1fe6c0;
    }
    func_0x000104bd35f4();
  }
  else {
    func_0x00010b1fe7a0();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1fe6f0);
  (*pcVar6)();
}



/* Entry: 10b1fe6fc; end: 10b1fe75f;  */

void FUN_10b1fe6fc(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x19;
  
  FUN_10b1fe7fc();
  *(undefined1 *)(unaff_x19 + 0x21) = 1;
  *(undefined4 *)(unaff_x19 + 0x24) = param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(unaff_x19 + 0x28,param_3)
  ;
  *(int *)(unaff_x19 + 0x40) = (int)param_4;
  *(char *)(unaff_x19 + 0x44) = (char)((ulong)param_4 >> 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x48);
  return;
}



/* Entry: 10b1fe760; end: 10b1fe787;  */

void FUN_10b1fe760(void)

{
  long unaff_x19;
  
  FUN_10b1fe7fc();
  *(undefined1 *)(unaff_x19 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(unaff_x19 + 0x48);
  return;
}



/* Entry: 10b1fe788; end: 10b1fe78b;  */

undefined8 * FUN_10b1fe788(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc5e68;
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  FUN_10b1b86d0(param_1 + 1);
  return param_1;
}



/* Entry: 10b1fe78c; end: 10b1fe7b3;  */

void FUN_10b1fe78c(void)

{
  FUN_10b1fe7b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1fe7b4; end: 10b1fe7fb;  */

undefined8 * FUN_10b1fe7b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc5e68;
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 5);
  FUN_10b1b86d0(param_1 + 1);
  return param_1;
}



/* Entry: 10b1fe7fc; end: 10b1fe813;  */

void FUN_10b1fe7fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd46c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex4lockEv_110346780)(param_1 + 0x48);
  return;
}



/* Entry: 10b1fe814; end: 10b1fe8bb;  */

void FUN_10b1fe814(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  
  if ((bRam00000001138395d0 & 1) == 0) {
    iVar1 = 0x138395d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      puVar2 = (undefined8 *)0x10;
      __Znwm();
      FUN_10b1fe8bc(puVar2);
      puRam00000001138395c8 = puVar2;
      ___cxa_guard_release(0x1138395d0);
    }
  }
  lVar3 = puRam00000001138395c8[1];
  uVar4 = *puRam00000001138395c8;
  param_1[1] = puRam00000001138395c8[1];
  *param_1 = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x00010b2009e0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b1fe8bc; end: 10b1fe8fb;  */

void FUN_10b1fe8bc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uStack_24;
  
  uStack_24 = 3;
  func_0x00010bcce5f4();
  FUN_10b1ff260(param_1,&UNK_10f7389d8,&uStack_24,param_2);
  return;
}



/* Entry: 10b1fe8fc; end: 10b1ff0cb;  */

long * FUN_10b1fe8fc(long *param_1,undefined8 param_2,long param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long ****pppplVar8;
  long *****ppppplVar9;
  long *****ppppplVar10;
  long ****pppplVar11;
  long *plVar12;
  undefined *puVar13;
  long lVar14;
  long ****extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  long ****pppplVar15;
  long lVar16;
  long ***ppplVar17;
  long ****pppplVar18;
  long ***ppplVar19;
  long lStack_160;
  long lStack_158;
  long ***ppplStack_150;
  long *plStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  long *plStack_130;
  long *plStack_128;
  long *plStack_120;
  long *plStack_118;
  long *plStack_110;
  long *plStack_108;
  long **applStack_100 [3];
  long ****pppplStack_e8;
  long ***ppplStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined4 uStack_c4;
  long ***ppplStack_c0;
  long ***ppplStack_b8;
  long ***ppplStack_b0;
  long ***ppplStack_a8;
  undefined4 uStack_a0;
  long ****pppplStack_90;
  long ***ppplStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  *(char *)param_1 = (char)param_2;
  plStack_130 = param_1 + 2;
  param_1[3] = 0;
  *plStack_130 = 0;
  plStack_108 = param_1 + 4;
  param_1[5] = 0;
  *plStack_108 = 0;
  plStack_110 = param_1 + 6;
  param_1[7] = 0;
  *plStack_110 = 0;
  plStack_118 = param_1 + 8;
  param_1[9] = 0;
  *plStack_118 = 0;
  plStack_120 = param_1 + 10;
  param_1[0xb] = 0;
  *plStack_120 = 0;
  param_1[1] = param_3;
  plStack_128 = param_1 + 0xc;
  param_1[0xd] = 0;
  *plStack_128 = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  lVar14 = param_4[1];
  ppplVar17 = (long ***)*param_4;
  pppplVar15 = (long ****)(param_1 + 0x18);
  param_1[0x19] = param_4[1];
  *pppplVar15 = ppplVar17;
  if (lVar14 != 0) {
    do {
      func_0x00010b2009e0();
    } while (extraout_w10 != 0);
  }
  puVar4 = (undefined8 *)0x40;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar5 = puVar4 + 3;
  *puVar4 = &PTR_DAT_110cc6020;
  FUN_10b208614(puVar5,1,param_2);
  pppplStack_90 = (long ****)0x0;
  ppplStack_88 = (long ***)0x0;
  ppplStack_b8 = (long ***)param_1[3];
  ppplStack_c0 = (long ***)param_1[2];
  param_1[2] = (long)puVar5;
  param_1[3] = (long)puVar4;
  func_0x00010b127b34(&ppplStack_c0);
  func_0x00010b127b34(&pppplStack_90);
  func_0x000107c31444();
  func_0x00010b2007bc();
  puVar4 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110cc6198;
  puVar4[1] = 0;
  func_0x000107c278b8(&ppplStack_c0,&UNK_10f73892d);
  func_0x00010b200740();
  FUN_10b1ff5e8();
  func_0x00010b200830();
  func_0x00010b200728();
  func_0x00010b1ffc08();
  FUN_10b1ff0cc(plStack_108,applStack_100);
  func_0x00010b200a10();
  func_0x000107c31444();
  func_0x00010b2007bc();
  func_0x00010b200aa0();
  func_0x00010b2009f0();
  func_0x00010b200740();
  FUN_10b1ff5e8();
  func_0x00010b200830();
  func_0x00010b200728();
  func_0x00010b1ffc08();
  FUN_10b1ff0cc(plStack_110,applStack_100);
  func_0x00010b200a10();
  func_0x000107c31444();
  func_0x00010b2007bc();
  func_0x00010b200aa0();
  func_0x00010b2009f0();
  func_0x00010b200740();
  FUN_10b1ff5e8();
  func_0x00010b200830();
  func_0x00010b200728();
  func_0x00010b1ffc08();
  plVar12 = plStack_118;
  FUN_10b1ff0cc(plStack_118,applStack_100);
  func_0x00010b200a10();
  (**(code **)(**(long **)(*plVar12 + 0x18) + 0x48))(*(long **)(*plVar12 + 0x18),0);
  for (lVar14 = 0; uVar3 = lVar14 == 0x2d, !(bool)uVar3; lVar14 = lVar14 + 1) {
    puVar13 = (&PTR_DAT_110cc5ea8)[lVar14];
    func_0x000107c278b8(applStack_100);
    uStack_c4 = (undefined4)lVar14;
    pppplVar8 = (long ****)applStack_100;
    func_0x000107c27e5c();
    pppplStack_90 = pppplVar8;
    ppplStack_88 = (long ***)puVar13;
    func_0x000107c2793c(&UNK_10f738970);
    func_0x000107c3173c(&ppplStack_c0);
    FUN_10b1ff108(2,lVar14);
    puVar5 = (undefined8 *)0x100;
    __Znwm();
    pppplVar8 = &ppplStack_c0;
    puVar4 = puVar5;
    FUN_10b1ff5e8();
    func_0x00010b200a3c();
    puVar6 = (undefined8 *)0x20;
    __Znwm();
    *puVar6 = &PTR_FUN_110cc60b8;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = puVar5;
    ppplStack_88 = (long ***)puVar4[1];
    pppplStack_90 = (long ****)*puVar4;
    *puVar4 = puVar5;
    puVar4[1] = puVar6;
    FUN_10b127ebc(&pppplStack_90);
    func_0x00010b200830();
    ppplVar17 = applStack_100;
    func_0x000107c27e5c();
    ppplStack_c0 = ppplVar17;
    ppplStack_b8 = (long ***)pppplVar8;
    func_0x000107c2793c(&UNK_10f738983);
    func_0x000107c3173c(&pppplStack_90);
    uVar7 = 1;
    FUN_10b1ff108(1,uStack_c4);
    FUN_10b1ff568(&ppplStack_c0,1);
    ppplStack_b0[1] = (long **)0x0;
    ppplStack_b0[2] = (long **)0x0;
    *ppplStack_b0 = (long **)&PTR_FUN_110cc6198;
    FUN_10b1ff5e8(ppplStack_b0 + 3,&pppplStack_90,3,uVar7,0);
    puStack_d0 = ppplStack_b0;
    ppplStack_b0 = (long ***)0x0;
    puStack_d8 = puStack_d0 + 3;
    func_0x00010b1ffc08(&ppplStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pppplStack_90);
    lVar16 = param_1[1];
    pppplVar8 = (long ****)0x80;
    __Znwm();
    pppplVar11 = pppplVar8 + 1;
    *pppplVar11 = (long ***)0x0;
    pppplVar8[2] = (long ***)0x0;
    *pppplVar8 = (long ***)&PTR_FUN_110cc6118;
    ppppplVar10 = (long *****)(pppplVar8 + 3);
    ppppplVar9 = ppppplVar10;
    FUN_10b20a538(ppppplVar10,&puStack_d8,lVar16);
    pppplStack_e8 = (long ****)ppppplVar10;
    ppplStack_e0 = (long ***)pppplVar8;
    if ((pppplVar8[4] == (long ***)0x0) || (pppplVar8[4][1] == (long **)0xffffffffffffffff)) {
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(pppplVar11,0x10);
        if (bVar2) {
          *pppplVar11 = (long ***)((long)*pppplVar11 + 1);
          cVar1 = ExclusiveMonitorsStatus();
        }
        pppplStack_90 = (long ****)ppppplVar10;
        ppplStack_88 = (long ***)pppplVar8;
      } while (cVar1 != '\0');
      do {
        func_0x00010b2007ec();
      } while (extraout_w11 != 0);
      ppplStack_c0 = pppplVar8[3];
      pppplVar8[3] = (long ***)(pppplVar8 + 3);
      pppplVar8[4] = (long ***)pppplVar8;
      ppplStack_b8 = (long ***)extraout_x8;
      FUN_10b20050c(&ppplStack_c0);
      ppppplVar9 = &pppplStack_90;
      func_0x00010b1298c4();
    }
    func_0x00010b200a30();
    pppplStack_e8 = (long ****)0x0;
    ppplStack_e0 = (long ***)0x0;
    pppplVar18 = ppppplVar9[1];
    pppplVar11 = *ppppplVar9;
    *ppppplVar9 = (long ****)ppppplVar10;
    ppppplVar9[1] = pppplVar8;
    ppplStack_c0 = (long ***)pppplVar11;
    ppplStack_b8 = (long ***)pppplVar18;
    func_0x00010b1298c4(&ppplStack_c0);
    ppppplVar10 = &pppplStack_e8;
    func_0x00010b1298c4();
    if (*pppplVar15 != (long ***)0x0) {
      func_0x00010b200a3c();
      func_0x00010b200a74(*ppppplVar10);
      lVar16 = extraout_x8_00;
      if (extraout_x9 != 0) {
        do {
          func_0x00010b2007ec();
          lVar16 = extraout_x8_01;
        } while (extraout_w11_00 != 0);
      }
      uStack_80 = uStack_c4;
      ppplStack_c0 = (long ***)FUN_10b200534;
      ppplStack_b8 = (long ***)&PTR_FUN_110cc6158;
      pppplStack_90 = (long ****)0x0;
      ppplStack_88 = (long ***)0x0;
      uStack_a0 = uStack_c4;
      ppplStack_b0 = (long ***)pppplVar11;
      ppplStack_a8 = (long ***)pppplVar18;
      func_0x00010bcce990(lVar16 + 0x68,&ppplStack_c0);
      func_0x00010b2007ac();
      func_0x00010b2008a0();
      func_0x00010b200a30();
      lVar16 = param_1[0x19];
      puVar4 = (undefined8 *)param_1[0x18];
      if (param_1[0x19] != 0) {
        do {
          func_0x00010b2009e0();
        } while (extraout_w10_00 != 0);
      }
      uStack_80 = uStack_c4;
      ppplStack_c0 = (long ***)FUN_10b200614;
      ppplStack_b8 = (long ***)&PTR_FUN_110cc6170;
      pppplStack_90 = (long ****)0x0;
      ppplStack_88 = (long ***)0x0;
      uStack_a0 = uStack_c4;
      ppplStack_b0 = (long ***)puVar4;
      ppplStack_a8 = (long ***)lVar16;
      FUN_10b20a704();
      func_0x00010b2007ac();
      func_0x00010b2008a0();
    }
    FUN_10b127ebc(&puStack_d8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(applStack_100);
  }
  func_0x000107c31444();
  func_0x000107c27c1c(&pppplStack_90,1);
  puVar4 = (undefined8 *)CONCAT44(uStack_7c,uStack_80);
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1107ea880;
  puVar4[1] = 0;
  func_0x00010b2009f0();
  func_0x00010b200740();
  func_0x000107c31460();
  func_0x00010b200830();
  func_0x00010b200728();
  func_0x000107c27c24();
  func_0x000107c2836c(plStack_120,applStack_100);
  func_0x000107c27c20(applStack_100);
  FUN_10b1fe814(&ppplStack_c0);
  pppplVar8 = &ppplStack_c0;
  func_0x000106e50b28(plStack_128);
  pppplVar11 = &ppplStack_c0;
  func_0x000106e50c54();
  if (*pppplVar15 != (long ***)0x0) {
    pppplVar11 = (long ****)*plStack_130;
    pppplVar8 = pppplVar15;
    FUN_10b20881c();
    func_0x00010b200a74(param_1[4]);
    if (extraout_x9_00 != 0) {
      do {
        func_0x00010b2007ec();
      } while (extraout_w11_01 != 0);
    }
    ppplStack_c0 = (long ***)FUN_10b1ffc18;
    ppplStack_b8 = (long ***)&PTR_FUN_110cc6060;
    func_0x00010b200778();
    func_0x00010b20079c();
    func_0x00010b2008a0();
    func_0x00010b200a74(param_1[6]);
    if (extraout_x9_01 != 0) {
      do {
        func_0x00010b2007ec();
      } while (extraout_w11_02 != 0);
    }
    ppplStack_c0 = (long ***)FUN_10b1ffd20;
    ppplStack_b8 = (long ***)&PTR_FUN_110cc6078;
    func_0x00010b200778();
    func_0x00010b20079c();
    func_0x00010b2008a0();
    func_0x00010b200a74(param_1[8]);
    if (extraout_x9_02 != 0) {
      do {
        func_0x00010b2007ec();
      } while (extraout_w11_03 != 0);
    }
    ppplStack_c0 = (long ***)FUN_10b1ffdb0;
    ppplStack_b8 = (long ***)&PTR_FUN_110cc6090;
    func_0x00010b200778();
    func_0x00010b20079c();
    func_0x00010b2008a0();
  }
  func_0x00010b2006f4(uStack_70);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010b12487c(pppplVar15);
    FUN_10b1ff47c(param_1 + 0x13);
    FUN_10b1ff3e0(param_1 + 0xe);
    func_0x000106e50c54(plStack_128);
    func_0x000107c27c20(plStack_120);
    FUN_10b127ebc(plStack_118);
    FUN_10b127ebc(plStack_110);
    FUN_10b127ebc(plStack_108);
    plVar12 = plStack_130;
    func_0x00010b127b34();
    func_0x00010b200a08();
    pcStack_138 = FUN_10b1ff0cc;
    ppplVar19 = pppplVar8[1];
    ppplVar17 = *pppplVar8;
    *pppplVar8 = (long ***)0x0;
    pppplVar8[1] = (long ***)0x0;
    lStack_158 = plVar12[1];
    lStack_160 = *plVar12;
    plVar12[1] = (long)ppplVar19;
    *plVar12 = (long)ppplVar17;
    ppplStack_150 = (long ***)pppplVar11;
    plStack_148 = param_1;
    puStack_140 = &stack0xfffffffffffffff0;
    FUN_10b127ebc(&lStack_160);
    return plVar12;
  }
  return param_1;
}



/* Entry: 10b1ff0cc; end: 10b1ff107;  */

undefined8 * FUN_10b1ff0cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  FUN_10b127ebc(&uStack_30);
  return param_1;
}



/* Entry: 10b1ff108; end: 10b1ff187;  */

undefined8 FUN_10b1ff108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_48 [24];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010b20b440();
  if ((int)param_1 == 2) {
    puVar1 = &UNK_10f7389b6;
  }
  else {
    puVar1 = &UNK_10f738994;
  }
  uStack_28 = 0;
  uStack_30 = param_2;
  func_0x000107c2793c(puVar1);
  func_0x000107c3173c(auStack_48);
  func_0x000107c3144c();
  func_0x00010b20085c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  return param_1;
}



/* Entry: 10b1ff188; end: 10b1ff1cf;  */

long FUN_10b1ff188(long param_1)

{
  func_0x00010b200998();
  FUN_10b1ffe40();
  return param_1 + 0x18;
}



/* Entry: 10b1ff1d0; end: 10b1ff25f;  */

void FUN_10b1ff1d0(undefined8 *param_1,long param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined4 uStack_24;
  
  puVar1 = (undefined8 *)(param_2 + 0x98);
  uStack_24 = param_3;
  FUN_10b1ff188(puVar1,&uStack_24);
  lVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010b2009e0();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10b1ff260; end: 10b1ff28b;  */

void FUN_10b1ff260(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uStack_11;
  
  FUN_10b1ff28c(&uStack_11,param_1,param_2,param_3);
  return;
}



/* Entry: 10b1ff28c; end: 10b1ff333;  */

undefined8 *
FUN_10b1ff28c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 auStack_50 [2];
  long lStack_40;
  undefined8 uStack_38;
  
  puVar2 = auStack_50;
  puVar3 = auStack_50;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000106e54980(auStack_50,1);
  FUN_10b1ff334(lStack_40,param_3,param_4,param_5);
  lVar1 = lStack_40;
  lStack_40 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x000106e54adc();
  func_0x00010b2006f4(uStack_38);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x000106e54adc();
  func_0x00010b20078c();
  puVar3[2] = 0;
  *puVar3 = &PTR_DAT_11097ffd8;
  puVar3[1] = 0;
  FUN_10b1ff378(puVar3 + 3);
  return puVar3;
}



/* Entry: 10b1ff334; end: 10b1ff377;  */

undefined8 * FUN_10b1ff334(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_DAT_11097ffd8;
  param_1[1] = 0;
  FUN_10b1ff378(param_1 + 3);
  return param_1;
}



/* Entry: 10b1ff378; end: 10b1ff3df;  */

void FUN_10b1ff378(void)

{
  undefined1 auStack_48 [24];
  
  func_0x00010b20085c();
  func_0x000107c278b8();
  func_0x000107c31438();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  return;
}



/* Entry: 10b1ff3e0; end: 10b1ff463;  */

long FUN_10b1ff3e0(long param_1)

{
  func_0x00010b1ff408(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b1ff464(param_1,0);
  return param_1;
}



/* Entry: 10b1ff464; end: 10b1ff47b;  */

void FUN_10b1ff464(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1ff47c; end: 10b1ff4ff;  */

long FUN_10b1ff47c(long param_1)

{
  func_0x00010b1ff4a4(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10b1ff500(param_1,0);
  return param_1;
}



/* Entry: 10b1ff500; end: 10b1ff51b;  */

void FUN_10b1ff500(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1ff51c; end: 10b1ff52f;  */

void FUN_10b1ff51c(void)

{
  FUN_10b1ff558();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ff530; end: 10b1ff557;  */

long FUN_10b1ff530(long param_1)

{
  FUN_10b127ebc(param_1 + 0x30);
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 0x20;
}



/* Entry: 10b1ff558; end: 10b1ff567;  */

void FUN_10b1ff558(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ff568; end: 10b1ff58f;  */

long FUN_10b1ff568(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10b1ff590();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10b1ff590; end: 10b1ff5bf;  */

void FUN_10b1ff590(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0xea0ea0ea0ea0eb) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x118);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110cc6198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1ff5c0; end: 10b1ff5c3;  */

void FUN_10b1ff5c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1ff5c4; end: 10b1ff5d7;  */

void FUN_10b1ff5c4(void)

{
  FUN_10b1ffbf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ff5d8; end: 10b1ff5e7;  */

void FUN_10b1ff5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1ff5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b1ff5e8; end: 10b1ff633;  */

void FUN_10b1ff5e8(undefined8 *param_1)

{
  func_0x000107c31460();
  *param_1 = &PTR_FUN_110cc61e8;
  param_1[0x14] = 0x32aaaba7;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((long)param_1 + 0xd9) = 0;
  *(undefined8 *)((long)param_1 + 0xd1) = 0;
  return;
}



/* Entry: 10b1ff634; end: 10b1ff637;  */

long FUN_10b1ff634(undefined8 *param_1)

{
  long *plVar1;
  long unaff_x19;
  
  *param_1 = &PTR_FUN_110cc61e8;
  func_0x00010b1ff700(param_1 + 0x1d);
  __ZNSt3__15mutexD1Ev(param_1 + 0x14);
  func_0x000107c3a568();
  plVar1 = (long *)param_1[1];
  (**(code **)(*plVar1 + 0x18))(plVar1,unaff_x19);
  (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x40))();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x70))();
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x20);
  func_0x00010bccec1c(param_1 + 1);
  return unaff_x19;
}



/* Entry: 10b1ff638; end: 10b1ff64b;  */

void FUN_10b1ff638(void)

{
  FUN_10b1ff6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1ff64c; end: 10b1ff6bb;  */

void FUN_10b1ff64c(long param_1,undefined8 param_2)

{
  __ZNSt3__15mutex4lockEv(param_1 + 0xa0);
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    func_0x00010b1ff768(param_1 + 0xe8,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 0xa0);
    return;
  }
  __ZNSt3__15mutex6unlockEv(param_1 + 0xa0);
  if ((*(byte *)(*(long *)(param_1 + 0x70) + 8) & 1) == 0) {
    (**(code **)(param_1 + 0x68))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010028c304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x30))
            (*(long **)(param_1 + 0x18),param_2,*(undefined1 *)(param_1 + 0x98));
  return;
}



/* Entry: 10b1ff6bc; end: 10b1ff7df;  */

long FUN_10b1ff6bc(undefined8 *param_1)

{
  long *plVar1;
  long unaff_x19;
  
  *param_1 = &PTR_FUN_110cc61e8;
  func_0x00010b1ff700(param_1 + 0x1d);
  __ZNSt3__15mutexD1Ev(param_1 + 0x14);
  func_0x000107c3a568();
  plVar1 = (long *)param_1[1];
  (**(code **)(*plVar1 + 0x18))(plVar1,unaff_x19);
  (**(code **)(**(long **)(unaff_x19 + 0x18) + 0x40))();
  (*(code *)**(undefined8 **)(unaff_x19 + 0x70))();
  __ZNSt3__15mutexD1Ev(unaff_x19 + 0x20);
  func_0x00010bccec1c(param_1 + 1);
  return unaff_x19;
}



/* Entry: 10b1ff7e0; end: 10b1ff893;  */

long FUN_10b1ff7e0(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  plVar1 = param_1;
  FUN_10b1ff894(param_1,(param_1[1] - *param_1) / 0x60 + 1);
  FUN_10b1ff97c(auStack_58,plVar1,(param_1[1] - *param_1) / 0x60,param_1 + 2);
  *puStack_48 = *param_2;
  (**(code **)(param_2[1] + 0x10))(puStack_48 + 1,param_2 + 1);
  puStack_48 = puStack_48 + 0xc;
  FUN_10b1ff8e4(param_1,auStack_58);
  lVar2 = param_1[1];
  func_0x00010b1ffb84(auStack_58);
  return lVar2;
}



/* Entry: 10b1ff894; end: 10b1ff8e3;  */

long * FUN_10b1ff894(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x2aaaaaaaaaaaaab) {
    uVar1 = (param_1[2] - *param_1) / 0x60;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x155555555555554 < uVar1) {
      plVar2 = (long *)0x2aaaaaaaaaaaaaa;
    }
    return plVar2;
  }
  FUN_10b1ff968();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x60) * 0x60;
  FUN_10b1ffa18(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 10b1ff8e4; end: 10b1ff967;  */

void FUN_10b1ff8e4(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x60) * 0x60;
  FUN_10b1ffa18(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10b1ff968; end: 10b1ff97b;  */

long * FUN_10b1ff968(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  plVar1[3] = 0;
  plVar1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b1ff9c8();
  }
  lVar2 = param_4 + param_3 * 0x60;
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1[2] = lVar2;
  plVar1[3] = param_4 + param_2 * 0x60;
  return plVar1;
}



/* Entry: 10b1ff97c; end: 10b1ff9eb;  */

long * FUN_10b1ff97c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b1ff9c8();
  }
  lVar1 = param_4 + param_3 * 0x60;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x60;
  return param_1;
}



/* Entry: 10b1ff9ec; end: 10b1ffa17;  */

void FUN_10b1ff9ec(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if (param_2 < (undefined8 *)0x2aaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x60);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_68 = &puStack_50;
  ppuStack_60 = &puStack_48;
  uStack_70 = param_1;
  puStack_50 = param_4;
  for (puVar1 = param_2; puStack_48 = param_4, puVar1 != param_3; puVar1 = puVar1 + 0xc) {
    *param_4 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
    param_4 = puStack_48 + 0xc;
  }
  uStack_58 = 1;
  FUN_10b1ffacc(param_1,param_2,param_3);
  FUN_10b1ffb00(&uStack_70);
  return;
}



/* Entry: 10b1ffa18; end: 10b1ffacb;  */

void FUN_10b1ffa18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (puVar1 = param_2; puStack_38 = param_4, puVar1 != param_3; puVar1 = puVar1 + 0xc) {
    *param_4 = *puVar1;
    (**(code **)(puVar1[1] + 0x10))(param_4 + 1,puVar1 + 1);
    param_4 = puStack_38 + 0xc;
  }
  uStack_48 = 1;
  FUN_10b1ffacc(param_1,param_2,param_3);
  FUN_10b1ffb00(&uStack_60);
  return;
}



/* Entry: 10b1ffacc; end: 10b1ffaff;  */

void FUN_10b1ffacc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x60) {
    func_0x00010b200a48(*(undefined8 *)(param_2 + 8));
  }
  return;
}



/* Entry: 10b1ffb00; end: 10b1ffb2f;  */

long FUN_10b1ffb00(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10b1ffb30(param_1);
  }
  return param_1;
}



/* Entry: 10b1ffb30; end: 10b1ffb4f;  */

void FUN_10b1ffb30(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x60) {
    func_0x00010b200a48(*(undefined8 *)(lVar1 + -0x58));
  }
  return;
}



/* Entry: 10b1ffb50; end: 10b1ffbaf;  */

void FUN_10b1ffb50(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  for (; param_3 != param_5; param_3 = param_3 + -0x60) {
    func_0x00010b200a48(*(undefined8 *)(param_3 + -0x58));
  }
  return;
}



/* Entry: 10b1ffbb0; end: 10b1ffbb7;  */

void FUN_10b1ffbb0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  while (lVar1 = *(long *)(param_1 + 0x10), lVar2 != lVar1) {
    puVar3 = *(undefined8 **)(lVar1 + -0x58);
    *(long *)(param_1 + 0x10) = lVar1 + -0x60;
    (*(code *)*puVar3)();
  }
  return;
}



/* Entry: 10b1ffbb8; end: 10b1ffbf7;  */

void FUN_10b1ffbb8(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  while (lVar1 = *(long *)(param_1 + 0x10), param_2 != lVar1) {
    puVar2 = *(undefined8 **)(lVar1 + -0x58);
    *(long *)(param_1 + 0x10) = lVar1 + -0x60;
    (*(code *)*puVar2)();
  }
  return;
}



/* Entry: 10b1ffbf8; end: 10b1ffc17;  */

void FUN_10b1ffbf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6198;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1ffc18; end: 10b1ffc97;  */

undefined1 * FUN_10b1ffc18(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  func_0x00010b200714();
  puVar2 = auStack_50;
  uVar3 = 0x12;
  uStack_28 = extraout_x8;
  func_0x00010b2008a8();
  func_0x00010b2007cc();
  func_0x00010b2007dc();
  (*extraout_x8_00)();
  func_0x00010b20076c();
  func_0x00010b20088c();
  func_0x00010b200708();
  func_0x00010b2006f4(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b200708();
  func_0x00010b20078c();
  if ((uVar3 >> 0x13 & 0x1fff) == 0) {
    puVar4 = (&PTR_DAT_11336c898)[uVar3 >> 0x10 & 0xffff];
  }
  else {
    puVar4 = &UNK_10f3158b1;
  }
  func_0x000106e5c56c(puVar2,puVar4);
  uVar1 = (uint)uVar3 & 0xffff;
  if (uVar1 < 0x25) {
    puVar4 = (&PTR_s_info_11336c8d8)[uVar1];
  }
  else {
    puVar4 = &UNK_10f3158c2;
  }
  func_0x000107c278b8(puVar2 + 0x10,puVar4);
  return puVar2;
}



/* Entry: 10b1ffc98; end: 10b1ffd0f;  */

long FUN_10b1ffc98(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  
  if ((param_2 >> 0x13 & 0x1fff) == 0) {
    puVar2 = (&PTR_DAT_11336c898)[param_2 >> 0x10 & 0xffff];
  }
  else {
    puVar2 = &UNK_10f3158b1;
  }
  func_0x000106e5c56c(param_1,puVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x25) {
    puVar2 = (&PTR_s_info_11336c8d8)[uVar1];
  }
  else {
    puVar2 = &UNK_10f3158c2;
  }
  func_0x000107c278b8(param_1 + 0x10,puVar2);
  return param_1;
}



/* Entry: 10b1ffd10; end: 10b1ffd1f;  */

void FUN_10b1ffd10(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1ffd20; end: 10b1ffd9f;  */

undefined1 * FUN_10b1ffd20(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  func_0x00010b200714();
  puVar1 = auStack_50;
  uStack_28 = extraout_x8;
  func_0x00010b2008a8(puVar1,0x13);
  func_0x00010b2007cc();
  func_0x00010b2007dc();
  (*extraout_x8_00)();
  func_0x00010b20076c();
  func_0x00010b20088c();
  func_0x00010b200708();
  func_0x00010b2006f4(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010b200708();
  func_0x00010b20078c();
  puVar2 = puVar2 + 8;
  func_0x000107c350ac();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar1;
}



/* Entry: 10b1ffda0; end: 10b1ffdaf;  */

void FUN_10b1ffda0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1ffdb0; end: 10b1ffe2f;  */

undefined1 * FUN_10b1ffdb0(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  undefined1 auStack_50 [40];
  undefined8 uStack_28;
  
  func_0x00010b200714();
  puVar1 = auStack_50;
  uStack_28 = extraout_x8;
  func_0x00010b2008a8(puVar1,0x14);
  func_0x00010b2007cc();
  func_0x00010b2007dc();
  (*extraout_x8_00)();
  func_0x00010b20076c();
  func_0x00010b20088c();
  func_0x00010b200708();
  func_0x00010b2006f4(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar2 = puVar1;
  func_0x00010b200708();
  func_0x00010b20078c();
  puVar2 = puVar2 + 8;
  func_0x000107c350ac();
  if (puVar2 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar1;
}



/* Entry: 10b1ffe30; end: 10b1ffe3f;  */

void FUN_10b1ffe30(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1ffe40; end: 10b2000eb;  */

undefined1  [16] FUN_10b1ffe40(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar8;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *plVar9;
  long *extraout_x9;
  long *plVar10;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar12;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  long *unaff_x21;
  long *plVar14;
  long *unaff_x23;
  long *plVar15;
  undefined1 auVar16 [16];
  
  iVar1 = *param_4;
  plVar14 = (long *)(long)iVar1;
  plVar15 = (long *)param_3[1];
  plVar10 = param_3;
  if (plVar15 != (long *)0x0) {
    func_0x00010b200a94();
    if ((bool)in_ZR) {
      unaff_x21 = (long *)(extraout_x8 & (ulong)plVar14);
    }
    else {
      unaff_x21 = plVar14;
      if (plVar15 <= plVar14) {
        uVar8 = 0;
        if (plVar15 != (long *)0x0) {
          uVar8 = (ulong)plVar14 / (ulong)plVar15;
        }
        unaff_x21 = (long *)((long)plVar14 - uVar8 * (long)plVar15);
      }
    }
    puVar13 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar8 = extraout_x8;
    if (puVar13 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar13;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_10b1ffee8;
          plVar9 = (long *)unaff_x20[1];
          puVar13 = unaff_x20;
          if (plVar9 != plVar14) break;
          if (*(int *)(unaff_x20 + 2) == iVar1) {
            uVar7 = 0;
            goto LAB_10b2000cc;
          }
        }
        if (((ulong)plVar15 & uVar8) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar8);
        }
        else if (plVar15 <= plVar9) {
          func_0x00010b200a54();
          uVar8 = extraout_x8_00;
          plVar9 = extraout_x9;
        }
      } while (plVar9 == unaff_x21);
    }
  }
LAB_10b1ffee8:
  func_0x00010b20091c();
  func_0x00010b2007fc();
  if ((plVar15 != (long *)0x0) && (param_1 <= param_2 * (float)plVar15)) goto LAB_10b200074;
  func_0x00010b200980();
  bVar4 = plVar15 == (long *)0x3;
  func_0x00010b200964();
  if (bVar4) {
    unaff_x21 = (long *)0x2;
  }
  else if (((ulong)unaff_x21 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar15 = (long *)param_3[1];
    plVar10 = unaff_x21;
  }
  bVar4 = plVar15 <= unaff_x21;
  uVar5 = unaff_x21 == plVar15;
  if (!bVar4 || (bool)uVar5) {
    if (!bVar4) {
      func_0x00010b200900();
      if ((bVar4) && (((ulong)plVar15 & (long)plVar15 - 1U) == 0)) {
        func_0x00010b2008b8();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x21 <= plVar10) {
        unaff_x21 = plVar10;
      }
      uVar5 = unaff_x21 == plVar15;
      if (unaff_x21 < plVar15) {
        if (unaff_x21 != (long *)0x0) goto LAB_10b1fff40;
        FUN_10b2000ec(param_3,0);
        param_3[1] = 0;
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = (long *)param_3[1];
      }
    }
  }
  else {
LAB_10b1fff40:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b2000e0);
      (*pcVar3)();
    }
    lVar6 = (long)unaff_x21 << 3;
    __Znwm(lVar6);
    FUN_10b2000ec(param_3,lVar6);
    param_3[1] = (long)unaff_x21;
    lVar6 = *param_3;
    for (plVar10 = (long *)0x0; uVar5 = unaff_x21 == plVar10, !(bool)uVar5;
        plVar10 = (long *)((long)plVar10 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar10 * 8) = 0;
    }
    plVar15 = unaff_x21;
    if (*unaff_x23 != 0) {
      func_0x00010b200a80();
      func_0x00010b200a60();
      lVar6 = extraout_x8_02;
      uVar8 = extraout_x9_00;
      plVar10 = extraout_x10;
      plVar9 = extraout_x11;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)unaff_x21 & uVar8) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar8);
        }
        else if (unaff_x21 <= plVar12) {
          uVar2 = 0;
          if (unaff_x21 != (long *)0x0) {
            uVar2 = (ulong)plVar12 / (ulong)unaff_x21;
          }
          plVar12 = (long *)((long)plVar12 - uVar2 * (long)unaff_x21);
        }
        uVar5 = plVar12 == plVar9;
        if (!(bool)uVar5) {
          if (*(long *)(lVar6 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar12 * 8) = plVar11;
            plVar9 = plVar12;
          }
          else {
            func_0x00010b2008d8();
            lVar6 = extraout_x8_03;
            uVar8 = extraout_x9_01;
            plVar10 = extraout_x10_00;
            plVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x00010b200a94();
  if ((bool)uVar5) {
    unaff_x21 = (long *)(extraout_x8_04 & (ulong)plVar14);
  }
  else {
    unaff_x21 = plVar14;
    if (plVar15 <= plVar14) {
      uVar8 = 0;
      if (plVar15 != (long *)0x0) {
        uVar8 = (ulong)plVar14 / (ulong)plVar15;
      }
      unaff_x21 = (long *)((long)plVar14 - uVar8 * (long)plVar15);
    }
  }
LAB_10b200074:
  puVar13 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x00010b2009c8();
    if (extraout_x9_02 != 0) {
      plVar10 = *(long **)(extraout_x9_02 + 8);
      lVar6 = extraout_x8_05;
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar10) {
        func_0x00010b200a54();
        lVar6 = extraout_x8_06;
        plVar10 = extraout_x9_03;
      }
      *(undefined8 **)(lVar6 + (long)plVar10 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar13;
    *puVar13 = unaff_x20;
  }
  func_0x00010b2009b0();
  FUN_10b200104();
  uVar7 = 1;
LAB_10b2000cc:
  auVar16._8_8_ = uVar7;
  auVar16._0_8_ = unaff_x20;
  return auVar16;
}



/* Entry: 10b2000ec; end: 10b200103;  */

void FUN_10b2000ec(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b200104; end: 10b200143;  */

long * FUN_10b200104(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b127ebc(lVar1 + 0x18);
    }
    func_0x00010b200a00();
  }
  return param_1;
}



/* Entry: 10b200144; end: 10b200147;  */

void FUN_10b200144(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b200148; end: 10b20015b;  */

void FUN_10b200148(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20015c; end: 10b200173;  */

void FUN_10b20015c(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b20016c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10b200174; end: 10b2001ab;  */

long FUN_10b200174(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110cc60f8);
  param_1 = param_1 + 0x18;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b2001ac; end: 10b2001af;  */

void FUN_10b2001ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2001b0; end: 10b20045b;  */

undefined1  [16] FUN_10b2001b0(float param_1,float param_2,long *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar8;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *plVar9;
  long *extraout_x9;
  long *plVar10;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x10;
  long *plVar11;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar12;
  undefined8 *unaff_x20;
  undefined8 *puVar13;
  long *unaff_x21;
  long *plVar14;
  long *unaff_x23;
  long *plVar15;
  undefined1 auVar16 [16];
  
  iVar1 = *param_4;
  plVar14 = (long *)(long)iVar1;
  plVar15 = (long *)param_3[1];
  plVar10 = param_3;
  if (plVar15 != (long *)0x0) {
    func_0x00010b200a94();
    if ((bool)in_ZR) {
      unaff_x21 = (long *)(extraout_x8 & (ulong)plVar14);
    }
    else {
      unaff_x21 = plVar14;
      if (plVar15 <= plVar14) {
        uVar8 = 0;
        if (plVar15 != (long *)0x0) {
          uVar8 = (ulong)plVar14 / (ulong)plVar15;
        }
        unaff_x21 = (long *)((long)plVar14 - uVar8 * (long)plVar15);
      }
    }
    puVar13 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
    unaff_x20 = (undefined8 *)0x0;
    uVar8 = extraout_x8;
    if (puVar13 != (undefined8 *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (undefined8 *)*puVar13;
          if (unaff_x20 == (undefined8 *)0x0) goto LAB_10b200258;
          plVar9 = (long *)unaff_x20[1];
          puVar13 = unaff_x20;
          if (plVar9 != plVar14) break;
          if (*(int *)(unaff_x20 + 2) == iVar1) {
            uVar7 = 0;
            goto LAB_10b20043c;
          }
        }
        if (((ulong)plVar15 & uVar8) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar8);
        }
        else if (plVar15 <= plVar9) {
          func_0x00010b200a54();
          uVar8 = extraout_x8_00;
          plVar9 = extraout_x9;
        }
      } while (plVar9 == unaff_x21);
    }
  }
LAB_10b200258:
  func_0x00010b20091c();
  func_0x00010b2007fc();
  if ((plVar15 != (long *)0x0) && (param_1 <= param_2 * (float)plVar15)) goto LAB_10b2003e4;
  func_0x00010b200980();
  bVar4 = plVar15 == (long *)0x3;
  func_0x00010b200964();
  if (bVar4) {
    unaff_x21 = (long *)0x2;
  }
  else if (((ulong)unaff_x21 & extraout_x8_01) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar15 = (long *)param_3[1];
    plVar10 = unaff_x21;
  }
  bVar4 = plVar15 <= unaff_x21;
  uVar5 = unaff_x21 == plVar15;
  if (!bVar4 || (bool)uVar5) {
    if (!bVar4) {
      func_0x00010b200900();
      if ((bVar4) && (((ulong)plVar15 & (long)plVar15 - 1U) == 0)) {
        func_0x00010b2008b8();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      if (unaff_x21 <= plVar10) {
        unaff_x21 = plVar10;
      }
      uVar5 = unaff_x21 == plVar15;
      if (unaff_x21 < plVar15) {
        if (unaff_x21 != (long *)0x0) goto LAB_10b2002b0;
        FUN_10b20045c(param_3,0);
        param_3[1] = 0;
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = (long *)param_3[1];
      }
    }
  }
  else {
LAB_10b2002b0:
    if ((ulong)unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b200450);
      (*pcVar3)();
    }
    lVar6 = (long)unaff_x21 << 3;
    __Znwm(lVar6);
    FUN_10b20045c(param_3,lVar6);
    param_3[1] = (long)unaff_x21;
    lVar6 = *param_3;
    for (plVar10 = (long *)0x0; uVar5 = unaff_x21 == plVar10, !(bool)uVar5;
        plVar10 = (long *)((long)plVar10 + 1)) {
      *(undefined8 *)(lVar6 + (long)plVar10 * 8) = 0;
    }
    plVar15 = unaff_x21;
    if (*unaff_x23 != 0) {
      func_0x00010b200a80();
      func_0x00010b200a60();
      lVar6 = extraout_x8_02;
      uVar8 = extraout_x9_00;
      plVar10 = extraout_x10;
      plVar9 = extraout_x11;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        plVar12 = (long *)plVar10[1];
        if (((ulong)unaff_x21 & uVar8) == 0) {
          plVar12 = (long *)((ulong)plVar12 & uVar8);
        }
        else if (unaff_x21 <= plVar12) {
          uVar2 = 0;
          if (unaff_x21 != (long *)0x0) {
            uVar2 = (ulong)plVar12 / (ulong)unaff_x21;
          }
          plVar12 = (long *)((long)plVar12 - uVar2 * (long)unaff_x21);
        }
        uVar5 = plVar12 == plVar9;
        if (!(bool)uVar5) {
          if (*(long *)(lVar6 + (long)plVar12 * 8) == 0) {
            *(long **)(lVar6 + (long)plVar12 * 8) = plVar11;
            plVar9 = plVar12;
          }
          else {
            func_0x00010b2008d8();
            lVar6 = extraout_x8_03;
            uVar8 = extraout_x9_01;
            plVar10 = extraout_x10_00;
            plVar9 = extraout_x11_00;
          }
        }
      }
    }
  }
  func_0x00010b200a94();
  if ((bool)uVar5) {
    unaff_x21 = (long *)(extraout_x8_04 & (ulong)plVar14);
  }
  else {
    unaff_x21 = plVar14;
    if (plVar15 <= plVar14) {
      uVar8 = 0;
      if (plVar15 != (long *)0x0) {
        uVar8 = (ulong)plVar14 / (ulong)plVar15;
      }
      unaff_x21 = (long *)((long)plVar14 - uVar8 * (long)plVar15);
    }
  }
LAB_10b2003e4:
  puVar13 = *(undefined8 **)(*param_3 + (long)unaff_x21 * 8);
  if (puVar13 == (undefined8 *)0x0) {
    func_0x00010b2009c8();
    if (extraout_x9_02 != 0) {
      plVar10 = *(long **)(extraout_x9_02 + 8);
      lVar6 = extraout_x8_05;
      if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
        plVar10 = (long *)((ulong)plVar10 & (long)plVar15 - 1U);
      }
      else if (plVar15 <= plVar10) {
        func_0x00010b200a54();
        lVar6 = extraout_x8_06;
        plVar10 = extraout_x9_03;
      }
      *(undefined8 **)(lVar6 + (long)plVar10 * 8) = unaff_x20;
    }
  }
  else {
    *unaff_x20 = *puVar13;
    *puVar13 = unaff_x20;
  }
  func_0x00010b2009b0();
  FUN_10b200474();
  uVar7 = 1;
LAB_10b20043c:
  auVar16._8_8_ = uVar7;
  auVar16._0_8_ = unaff_x20;
  return auVar16;
}



/* Entry: 10b20045c; end: 10b200473;  */

void FUN_10b20045c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b200474; end: 10b2004b3;  */

long * FUN_10b200474(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b1298c4(lVar1 + 0x18);
    }
    func_0x00010b200a00();
  }
  return param_1;
}



/* Entry: 10b2004b4; end: 10b2004b7;  */

void FUN_10b2004b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc6118;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b2004b8; end: 10b2004cb;  */

void FUN_10b2004b8(void)

{
  FUN_10b2004fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b2004cc; end: 10b2004fb;  */

long FUN_10b2004cc(long param_1)

{
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 0x40);
  FUN_10b127ebc(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 0x18;
}



/* Entry: 10b2004fc; end: 10b20050b;  */

void FUN_10b2004fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b20050c; end: 10b200533;  */

long FUN_10b20050c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10b200534; end: 10b200603;  */

undefined1 * FUN_10b200534(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar4;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010b200714();
  uStack_38 = extraout_x8;
  func_0x00010b2008a8(auStack_88,0xf);
  FUN_10b12983c(auStack_60,*(undefined4 *)(param_2 + 0x20));
  func_0x00010b200954();
  func_0x00010b2007dc();
  (*extraout_x8_00)();
  func_0x00010b20076c();
  func_0x00010b20094c();
  lVar4 = 0x38;
  do {
    puVar2 = auStack_88 + lVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar4 = lVar4 + -0x28;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x00010b2006f4(uStack_38);
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_50;
  lVar4 = -0x50;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar3 = puVar3 + -0x28;
    lVar4 = lVar4 + 0x28;
  } while (lVar4 != 0);
  func_0x00010b20078c();
  puVar3 = puVar3 + 8;
  func_0x000107c350ac();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar2;
}



/* Entry: 10b200604; end: 10b200613;  */

void FUN_10b200604(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b200614; end: 10b2006e3;  */

undefined1 * FUN_10b200614(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  long lVar4;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  func_0x00010b200714();
  uStack_38 = extraout_x8;
  func_0x00010b2008a8(auStack_88,0x10);
  FUN_10b12983c(auStack_60,*(undefined4 *)(param_2 + 0x20));
  func_0x00010b200954();
  func_0x00010b2007dc();
  (*extraout_x8_00)();
  func_0x00010b20076c();
  func_0x00010b20094c();
  lVar4 = 0x38;
  do {
    puVar2 = auStack_88 + lVar4;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    lVar4 = lVar4 + -0x28;
    bVar1 = lVar4 == -0x18;
  } while (!bVar1);
  func_0x00010b2006f4(uStack_38);
  if (bVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_50;
  lVar4 = -0x50;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    puVar3 = puVar3 + -0x28;
    lVar4 = lVar4 + 0x28;
  } while (lVar4 != 0);
  func_0x00010b20078c();
  puVar3 = puVar3 + 8;
  func_0x000107c350ac();
  if (puVar3 != (undefined1 *)0x0) {
    func_0x000107c278a0();
  }
  return puVar2;
}



/* Entry: 10b2006e4; end: 10b200ab3;  */

void FUN_10b2006e4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b200ab4; end: 10b201893;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010b200e0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long * FUN_10b200ab4(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar16;
  long *extraout_x8_04;
  ulong extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  ulong extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  ulong extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  ulong extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  ulong extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long *extraout_x9;
  long *extraout_x9_00;
  long *plVar17;
  long *extraout_x9_01;
  long *extraout_x9_02;
  long *extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  ulong extraout_x9_06;
  ulong extraout_x9_07;
  ulong extraout_x9_08;
  ulong extraout_x9_09;
  long *extraout_x9_10;
  ulong extraout_x9_11;
  ulong extraout_x9_12;
  ulong extraout_x9_13;
  ulong extraout_x9_14;
  long *extraout_x9_15;
  ulong extraout_x9_16;
  ulong extraout_x9_17;
  ulong extraout_x9_18;
  ulong extraout_x9_19;
  long *extraout_x9_20;
  ulong extraout_x9_21;
  ulong extraout_x9_22;
  ulong extraout_x9_23;
  ulong extraout_x9_24;
  long extraout_x9_25;
  long *extraout_x9_26;
  long *extraout_x9_27;
  long *plVar18;
  long extraout_x9_28;
  long *extraout_x9_29;
  long *extraout_x9_30;
  long extraout_x9_31;
  long *extraout_x9_32;
  long *extraout_x9_33;
  long extraout_x9_34;
  long *extraout_x9_35;
  long *extraout_x9_36;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x10_01;
  long *extraout_x10_02;
  long *extraout_x10_03;
  long *extraout_x10_04;
  long *extraout_x10_05;
  long *extraout_x10_06;
  ulong extraout_x10_07;
  ulong extraout_x10_08;
  ulong extraout_x10_09;
  ulong extraout_x10_10;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long *extraout_x11_02;
  long *extraout_x11_03;
  long *extraout_x11_04;
  long *extraout_x11_05;
  long *extraout_x11_06;
  long *extraout_x11_07;
  long *extraout_x11_08;
  long *extraout_x11_09;
  long *extraout_x11_10;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x12_02;
  long *plVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  long *plVar24;
  long *unaff_x27;
  long *plVar25;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *apuStack_78 [3];
  
  param_2[1] = 0;
  *param_2 = 0;
  plVar10 = param_2 + 2;
  param_2[3] = 0;
  *plVar10 = 0;
  plVar11 = param_2 + 5;
  param_2[6] = 0;
  *plVar11 = 0;
  plVar12 = param_2 + 7;
  param_2[8] = 0;
  *plVar12 = 0;
  plVar13 = param_2 + 10;
  param_2[0xb] = 0;
  *plVar13 = 0;
  plVar24 = param_2 + 0xc;
  param_2[0xd] = 0;
  *plVar24 = 0;
  plVar14 = param_2 + 0xf;
  param_2[0x10] = 0;
  *plVar14 = 0;
  plVar15 = param_2 + 0x11;
  param_2[0x12] = 0;
  *plVar15 = 0;
  *(undefined4 *)(param_2 + 4) = 0x3f800000;
  *(undefined4 *)(param_2 + 9) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe) = 0x3f800000;
  plVar1 = param_3 + param_4 * 2;
  *(undefined4 *)(param_2 + 0x13) = 0x3f800000;
  do {
    if (param_3 == plVar1) {
      return param_2;
    }
    uVar2 = *(uint *)(param_3 + 1);
    uVar6 = (int)(uVar2 - 3) < 0;
    uVar7 = uVar2 == 3;
    if (uVar2 < 4) {
      lVar22 = *param_3;
      switch(uVar2) {
      case 0:
        puVar9 = (undefined8 *)0x98;
        __Znwm();
        func_0x00010b202278();
        *puVar9 = &PTR_FUN_110cc6228;
        puVar9[1] = 0;
        puVar9[0x12] = lVar22;
        *(undefined4 *)(puVar9 + 0x11) = 8;
        puStack_80 = puVar9;
        apuStack_78[0] = puVar9;
        func_0x000107c2805c();
        func_0x00010b201a74(apuStack_78);
        plVar18 = param_2 + 3;
        FUN_10b201a10(plVar18,lVar22);
        plVar20 = (long *)param_2[1];
        if (plVar20 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            unaff_x27 = (long *)(extraout_x8 & (ulong)plVar18);
            uVar7 = true;
          }
          else {
            uVar6 = (long)plVar18 - (long)plVar20 < 0;
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
          plVar23 = *(long **)(*param_2 + (long)unaff_x27 * 8);
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200e98;
                plVar17 = (long *)plVar23[1];
                if (plVar17 != plVar18) break;
                uVar6 = plVar23[2] - lVar22 < 0;
                uVar7 = false;
                if (plVar23[2] == lVar22) goto code_r0x00010b2016e8;
              }
              if (((ulong)plVar20 & extraout_x8) == 0) {
                plVar17 = (long *)((ulong)plVar17 & extraout_x8);
              }
              else if (plVar20 <= plVar17) {
                uVar16 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar16 = (ulong)plVar17 / (ulong)plVar20;
                }
                plVar17 = (long *)((long)plVar17 - uVar16 * (long)plVar20);
              }
              uVar6 = (long)plVar17 - (long)unaff_x27 < 0;
              uVar7 = plVar17 == unaff_x27;
            } while ((bool)uVar7);
          }
        }
code_r0x00010b200e98:
        plVar17 = (long *)0x20;
        __Znwm();
        plVar23 = plVar17;
        func_0x00010b2023e8(plVar10);
        func_0x00010b20251c(param_2[3]);
        if ((plVar20 == (long *)0x0) || (func_0x00010b20235c(param_1,(int)param_2[4]), (bool)uVar6))
        {
          func_0x00010b2022bc();
          bVar5 = (long *)0x2 < plVar20;
          bVar8 = plVar20 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_07;
          if (!bVar5 || bVar8) {
            plVar25 = extraout_x9_03;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar20 = (long *)param_2[1];
            plVar23 = plVar25;
          }
          bVar8 = plVar20 <= plVar25;
          uVar7 = plVar25 == plVar20;
          if (!bVar8 || (bool)uVar7) {
            if (!bVar8) {
              func_0x00010b20234c(param_1,(int)param_2[4]);
              if ((bVar8) && (func_0x00010b202510(), extraout_x8_23 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar23) {
                plVar25 = plVar23;
              }
              uVar7 = plVar25 == plVar20;
              if (plVar25 < plVar20) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b2011b8;
                FUN_10b201a28(param_2,0);
                plVar20 = (long *)0x0;
                param_2[1] = 0;
              }
              else {
                plVar20 = (long *)param_2[1];
              }
            }
          }
          else {
code_r0x00010b2011b8:
            plVar20 = plVar25;
            if ((ulong)plVar20 >> 0x3d != 0) {
              func_0x000104bd35f4();
code_r0x00010b2017d0:
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10b2017d4);
              (*pcVar4)();
            }
            lVar22 = (long)plVar20 << 3;
            __Znwm(lVar22);
            FUN_10b201a28(param_2,lVar22);
            plVar23 = (long *)0x0;
            param_2[1] = (long)plVar20;
            while (plVar20 != plVar23) {
              func_0x00010b202504();
              plVar23 = extraout_x9_15;
            }
            uVar7 = 1;
            if (*plVar10 != 0) {
              func_0x00010b2024d0();
              uVar7 = ((ulong)plVar20 & extraout_x9_16) == 0;
              func_0x00010b2024b8();
              lVar22 = extraout_x8_17;
              uVar16 = extraout_x9_17;
              plVar23 = extraout_x10_03;
              plVar25 = extraout_x11_05;
              while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
                plVar19 = (long *)plVar23[1];
                if (((ulong)plVar20 & uVar16) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar16);
                }
                else if (plVar20 <= plVar19) {
                  uVar3 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar3 = (ulong)plVar19 / (ulong)plVar20;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar3 * (long)plVar20);
                }
                uVar7 = plVar19 == plVar25;
                if (!(bool)uVar7) {
                  if (*(long *)(lVar22 + (long)plVar19 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar22 = extraout_x8_19;
                    uVar16 = extraout_x9_19;
                    plVar23 = extraout_x12_01;
                    plVar25 = extraout_x11_07;
                  }
                  else {
                    func_0x00010b202238();
                    lVar22 = extraout_x8_18;
                    uVar16 = extraout_x9_18;
                    plVar23 = extraout_x10_04;
                    plVar25 = extraout_x11_06;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            uVar7 = 1;
            unaff_x27 = (long *)(extraout_x8_31 & (ulong)plVar18);
          }
          else {
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
        }
        plVar18 = *(long **)(*param_2 + (long)unaff_x27 * 8);
        if (plVar18 == (long *)0x0) {
          func_0x00010b20242c();
          if (extraout_x9_31 != 0) {
            func_0x00010b2023a0();
            lVar22 = extraout_x8_32;
            if ((bool)uVar7) {
              plVar18 = (long *)((ulong)extraout_x9_32 & extraout_x10_09);
            }
            else {
              plVar18 = extraout_x9_32;
              if (plVar20 <= extraout_x9_32) {
                func_0x00010b202420();
                lVar22 = extraout_x8_33;
                plVar18 = extraout_x9_33;
              }
            }
            *(long **)(lVar22 + (long)plVar18 * 8) = plVar17;
          }
        }
        else {
          *plVar17 = *plVar18;
          *plVar18 = (long)plVar17;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[3] = param_2[3] + 1;
        func_0x00010b201a40(apuStack_78);
code_r0x00010b2016e8:
        func_0x00010b202498();
        break;
      case 1:
        puVar9 = (undefined8 *)0xa0;
        __Znwm();
        func_0x00010b202278();
        *puVar9 = &PTR_FUN_110cc6270;
        puVar9[1] = 0;
        puVar9[0x13] = lVar22;
        *(undefined4 *)(puVar9 + 0x11) = 8;
        puStack_80 = puVar9;
        apuStack_78[0] = puVar9;
        func_0x000107c2805c();
        func_0x00010b201b80(apuStack_78);
        plVar18 = param_2 + 8;
        FUN_10b201b1c(plVar18,lVar22);
        plVar20 = (long *)param_2[6];
        if (plVar20 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            unaff_x27 = (long *)(extraout_x8_02 & (ulong)plVar18);
            uVar7 = true;
          }
          else {
            uVar6 = (long)plVar18 - (long)plVar20 < 0;
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
          plVar23 = *(long **)(*plVar11 + (long)unaff_x27 * 8);
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200f4c;
                plVar17 = (long *)plVar23[1];
                if (plVar17 != plVar18) break;
                uVar6 = plVar23[2] - lVar22 < 0;
                uVar7 = false;
                if (plVar23[2] == lVar22) goto code_r0x00010b201780;
              }
              if (((ulong)plVar20 & extraout_x8_02) == 0) {
                plVar17 = (long *)((ulong)plVar17 & extraout_x8_02);
              }
              else if (plVar20 <= plVar17) {
                uVar16 = 0;
                if (plVar20 != (long *)0x0) {
                  uVar16 = (ulong)plVar17 / (ulong)plVar20;
                }
                plVar17 = (long *)((long)plVar17 - uVar16 * (long)plVar20);
              }
              uVar6 = (long)plVar17 - (long)unaff_x27 < 0;
              uVar7 = plVar17 == unaff_x27;
            } while ((bool)uVar7);
          }
        }
code_r0x00010b200f4c:
        plVar17 = (long *)0x20;
        __Znwm();
        plVar23 = plVar17;
        func_0x00010b2023e8(plVar12);
        func_0x00010b20251c(param_2[8]);
        if ((plVar20 == (long *)0x0) || (func_0x00010b20235c(param_1,(int)param_2[9]), (bool)uVar6))
        {
          func_0x00010b2022bc();
          bVar5 = (long *)0x2 < plVar20;
          bVar8 = plVar20 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_08;
          if (!bVar5 || bVar8) {
            plVar25 = extraout_x9_04;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar20 = (long *)param_2[6];
            plVar23 = plVar25;
          }
          bVar8 = plVar20 <= plVar25;
          uVar7 = plVar25 == plVar20;
          if (!bVar8 || (bool)uVar7) {
            if (!bVar8) {
              func_0x00010b20234c(param_1,(int)param_2[9]);
              if ((bVar8) && (func_0x00010b202510(), extraout_x8_24 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar23) {
                plVar25 = plVar23;
              }
              uVar7 = plVar25 == plVar20;
              if (plVar25 < plVar20) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b20128c;
                FUN_10b201b34(plVar11,0);
                plVar20 = (long *)0x0;
                param_2[6] = 0;
              }
              else {
                plVar20 = (long *)param_2[6];
              }
            }
          }
          else {
code_r0x00010b20128c:
            plVar20 = plVar25;
            if ((ulong)plVar20 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto code_r0x00010b2017d0;
            }
            lVar22 = (long)plVar20 << 3;
            __Znwm(lVar22);
            FUN_10b201b34(plVar11,lVar22);
            plVar23 = (long *)0x0;
            param_2[6] = (long)plVar20;
            while (plVar20 != plVar23) {
              func_0x00010b202504();
              plVar23 = extraout_x9_20;
            }
            uVar7 = 1;
            if (*plVar12 != 0) {
              func_0x00010b2024d0();
              uVar7 = ((ulong)plVar20 & extraout_x9_21) == 0;
              func_0x00010b2024b8();
              lVar22 = extraout_x8_20;
              uVar16 = extraout_x9_22;
              plVar23 = extraout_x10_05;
              plVar25 = extraout_x11_08;
              while (plVar23 = (long *)*plVar23, plVar23 != (long *)0x0) {
                plVar19 = (long *)plVar23[1];
                if (((ulong)plVar20 & uVar16) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar16);
                }
                else if (plVar20 <= plVar19) {
                  uVar3 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar3 = (ulong)plVar19 / (ulong)plVar20;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar3 * (long)plVar20);
                }
                uVar7 = plVar19 == plVar25;
                if (!(bool)uVar7) {
                  if (*(long *)(lVar22 + (long)plVar19 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar22 = extraout_x8_22;
                    uVar16 = extraout_x9_24;
                    plVar23 = extraout_x12_02;
                    plVar25 = extraout_x11_10;
                  }
                  else {
                    func_0x00010b202238();
                    lVar22 = extraout_x8_21;
                    uVar16 = extraout_x9_23;
                    plVar23 = extraout_x10_06;
                    plVar25 = extraout_x11_09;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            uVar7 = 1;
            unaff_x27 = (long *)(extraout_x8_34 & (ulong)plVar18);
          }
          else {
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
        }
        plVar18 = *(long **)(*plVar11 + (long)unaff_x27 * 8);
        if (plVar18 == (long *)0x0) {
          func_0x00010b20242c();
          if (extraout_x9_34 != 0) {
            func_0x00010b2023a0();
            lVar22 = extraout_x8_35;
            if ((bool)uVar7) {
              plVar18 = (long *)((ulong)extraout_x9_35 & extraout_x10_10);
            }
            else {
              plVar18 = extraout_x9_35;
              if (plVar20 <= extraout_x9_35) {
                func_0x00010b202420();
                lVar22 = extraout_x8_36;
                plVar18 = extraout_x9_36;
              }
            }
            *(long **)(lVar22 + (long)plVar18 * 8) = plVar17;
          }
        }
        else {
          *plVar17 = *plVar18;
          *plVar18 = (long)plVar17;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[8] = param_2[8] + 1;
        func_0x00010b201b4c(apuStack_78);
code_r0x00010b201780:
        FUN_10b180d3c(&puStack_80);
        break;
      case 2:
        plVar18 = param_2 + 0x12;
        FUN_10b201e0c(plVar18,lVar22);
        plVar20 = (long *)param_2[0x10];
        if (plVar20 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            unaff_x27 = (long *)(extraout_x8_00 & (ulong)plVar18);
            uVar7 = true;
          }
          else {
            uVar6 = (long)plVar18 - (long)plVar20 < 0;
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
          plVar23 = *(long **)(*plVar14 + (long)unaff_x27 * 8);
          uVar16 = extraout_x8_00;
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200d38;
                plVar17 = (long *)plVar23[1];
                if (plVar17 != plVar18) break;
                uVar6 = plVar23[2] - lVar22 < 0;
                uVar7 = false;
                if (plVar23[2] == lVar22) goto code_r0x00010b201480;
              }
              if (((ulong)plVar20 & uVar16) == 0) {
                plVar17 = (long *)((ulong)plVar17 & uVar16);
              }
              else if (plVar20 <= plVar17) {
                func_0x00010b202420();
                uVar16 = extraout_x8_03;
                plVar17 = extraout_x9;
              }
              uVar6 = (long)plVar17 - (long)unaff_x27 < 0;
              uVar7 = plVar17 == unaff_x27;
            } while ((bool)uVar7);
          }
        }
code_r0x00010b200d38:
        plVar23 = (long *)0x180;
        __Znwm();
        plVar17 = plVar23;
        func_0x00010b20231c(plVar15);
        func_0x00010b20251c(param_2[0x12]);
        if ((plVar20 == (long *)0x0) ||
           (func_0x00010b20235c(param_1,(int)param_2[0x13]), (bool)uVar6)) {
          func_0x00010b2022bc();
          bVar5 = (long *)0x2 < plVar20;
          bVar8 = plVar20 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_04;
          if (!bVar5 || bVar8) {
            plVar25 = extraout_x9_00;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar20 = (long *)param_2[0x10];
            plVar17 = plVar25;
          }
          bVar8 = plVar20 <= plVar25;
          uVar7 = plVar25 == plVar20;
          if (!bVar8 || (bool)uVar7) {
            if (!bVar8) {
              func_0x00010b20234c(param_1,(int)param_2[0x13]);
              if ((bVar8) && (func_0x00010b202510(), extraout_x8_15 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar17) {
                plVar25 = plVar17;
              }
              uVar7 = plVar25 == plVar20;
              if (plVar25 < plVar20) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b200fc0;
                FUN_10b201e24(plVar14,0);
                plVar20 = (long *)0x0;
                param_2[0x10] = 0;
              }
              else {
                plVar20 = (long *)param_2[0x10];
              }
            }
          }
          else {
code_r0x00010b200fc0:
            plVar20 = plVar25;
            if ((ulong)plVar20 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto code_r0x00010b2017d0;
            }
            lVar21 = (long)plVar20 << 3;
            __Znwm(lVar21);
            FUN_10b201e24(plVar14,lVar21);
            plVar17 = (long *)0x0;
            param_2[0x10] = (long)plVar20;
            while (plVar20 != plVar17) {
              func_0x00010b202504();
              plVar17 = extraout_x9_05;
            }
            uVar7 = 1;
            if (*plVar15 != 0) {
              func_0x00010b2024e4();
              uVar7 = ((ulong)plVar20 & extraout_x9_06) == 0;
              func_0x00010b2024b8();
              lVar21 = extraout_x8_09;
              uVar16 = extraout_x9_07;
              plVar17 = extraout_x10;
              plVar25 = extraout_x11;
              while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
                plVar19 = (long *)plVar17[1];
                if (((ulong)plVar20 & uVar16) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar16);
                }
                else if (plVar20 <= plVar19) {
                  uVar3 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar3 = (ulong)plVar19 / (ulong)plVar20;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar3 * (long)plVar20);
                }
                uVar7 = plVar19 == plVar25;
                if (!(bool)uVar7) {
                  if (*(long *)(lVar21 + (long)plVar19 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar21 = extraout_x8_11;
                    uVar16 = extraout_x9_09;
                    plVar17 = extraout_x12;
                    plVar25 = extraout_x11_01;
                  }
                  else {
                    func_0x00010b202238();
                    lVar21 = extraout_x8_10;
                    uVar16 = extraout_x9_08;
                    plVar17 = extraout_x10_00;
                    plVar25 = extraout_x11_00;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            uVar7 = 1;
            unaff_x27 = (long *)(extraout_x8_25 & (ulong)plVar18);
          }
          else {
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
        }
        plVar18 = *(long **)(*plVar14 + (long)unaff_x27 * 8);
        if (plVar18 == (long *)0x0) {
          func_0x00010b202444();
          if (extraout_x9_25 != 0) {
            func_0x00010b2023a0();
            lVar21 = extraout_x8_26;
            if ((bool)uVar7) {
              plVar18 = (long *)((ulong)extraout_x9_26 & extraout_x10_07);
            }
            else {
              plVar18 = extraout_x9_26;
              if (plVar20 <= extraout_x9_26) {
                func_0x00010b202420();
                lVar21 = extraout_x8_27;
                plVar18 = extraout_x9_27;
              }
            }
            *(long **)(lVar21 + (long)plVar18 * 8) = plVar23;
          }
        }
        else {
          *plVar23 = *plVar18;
          *plVar18 = (long)plVar23;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[0x12] = param_2[0x12] + 1;
        FUN_10b201e3c(apuStack_78);
code_r0x00010b201480:
        for (lVar21 = 0; lVar21 != 0x2d; lVar21 = lVar21 + 1) {
          puVar9 = (undefined8 *)0xa8;
          __Znwm();
          func_0x00010b202278();
          *puVar9 = &PTR_FUN_110cc6300;
          puVar9[1] = 0;
          *(int *)(puVar9 + 0x13) = (int)lVar21;
          puVar9[0x14] = lVar22;
          *(undefined4 *)(puVar9 + 0x11) = 8;
          puStack_88 = puVar9;
          apuStack_78[0] = puVar9;
          func_0x000107c2805c();
          FUN_10b201edc(apuStack_78);
          puVar9 = puStack_88;
          puStack_88 = (undefined8 *)0x0;
          puStack_80 = (undefined8 *)0x0;
          apuStack_78[0] = (undefined8 *)plVar23[lVar21 + 3];
          plVar23[lVar21 + 3] = (long)puVar9;
          func_0x00010b1802e8(apuStack_78);
          func_0x00010b1802e8(&puStack_80);
          FUN_10b180d3c(&puStack_88);
        }
        break;
      case 3:
        plVar18 = param_2 + 0xd;
        FUN_10b201c28(plVar18,lVar22);
        plVar20 = (long *)param_2[0xb];
        if (plVar20 != (long *)0x0) {
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            unaff_x27 = (long *)(extraout_x8_01 & (ulong)plVar18);
            uVar7 = true;
          }
          else {
            uVar6 = (long)plVar18 - (long)plVar20 < 0;
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
          plVar23 = *(long **)(*plVar13 + (long)unaff_x27 * 8);
          uVar16 = extraout_x8_01;
          if (plVar23 != (long *)0x0) {
            do {
              while( true ) {
                plVar23 = (long *)*plVar23;
                if (plVar23 == (long *)0x0) goto code_r0x00010b200de8;
                plVar17 = (long *)plVar23[1];
                if (plVar17 != plVar18) break;
                uVar6 = plVar23[2] - lVar22 < 0;
                uVar7 = false;
                if (plVar23[2] == lVar22) goto code_r0x00010b20158c;
              }
              if (((ulong)plVar20 & uVar16) == 0) {
                plVar17 = (long *)((ulong)plVar17 & uVar16);
              }
              else if (plVar20 <= plVar17) {
                func_0x00010b202420();
                uVar16 = extraout_x8_05;
                plVar17 = extraout_x9_01;
              }
              uVar6 = (long)plVar17 - (long)unaff_x27 < 0;
              uVar7 = plVar17 == unaff_x27;
            } while ((bool)uVar7);
          }
        }
code_r0x00010b200de8:
        plVar23 = (long *)0x180;
        __Znwm();
        plVar17 = plVar23;
        func_0x00010b20231c(plVar24);
        func_0x00010b20251c(param_2[0xd]);
        if ((plVar20 == (long *)0x0) ||
           (func_0x00010b20235c(param_1,(int)param_2[0xe]), (bool)uVar6)) {
          func_0x00010b2022bc();
          bVar5 = (long *)0x2 < plVar20;
          bVar8 = plVar20 == (long *)0x3;
          func_0x00010b2022a8();
          plVar25 = extraout_x8_06;
          if (!bVar5 || bVar8) {
            plVar25 = extraout_x9_02;
          }
          if ((long)plVar25 - 1U == 0) {
            plVar25 = (long *)0x2;
          }
          else if (((ulong)plVar25 & (long)plVar25 - 1U) != 0) {
            __ZNSt3__112__next_primeEm();
            plVar20 = (long *)param_2[0xb];
            plVar17 = plVar25;
          }
          bVar8 = plVar20 <= plVar25;
          uVar7 = plVar25 == plVar20;
          if (!bVar8 || (bool)uVar7) {
            if (!bVar8) {
              func_0x00010b20234c(param_1,(int)param_2[0xe]);
              if ((bVar8) && (func_0x00010b202510(), extraout_x8_16 == 0)) {
                func_0x00010b202258();
              }
              else {
                __ZNSt3__112__next_primeEm();
              }
              if (plVar25 <= plVar17) {
                plVar25 = plVar17;
              }
              uVar7 = plVar25 == plVar20;
              if (plVar25 < plVar20) {
                if (plVar25 != (long *)0x0) goto code_r0x00010b201094;
                FUN_10b201c40(plVar13,0);
                plVar20 = (long *)0x0;
                param_2[0xb] = 0;
              }
              else {
                plVar20 = (long *)param_2[0xb];
              }
            }
          }
          else {
code_r0x00010b201094:
            plVar20 = plVar25;
            if ((ulong)plVar20 >> 0x3d != 0) {
              func_0x000104bd35f4();
              goto code_r0x00010b2017d0;
            }
            lVar21 = (long)plVar20 << 3;
            __Znwm(lVar21);
            FUN_10b201c40(plVar13,lVar21);
            plVar17 = (long *)0x0;
            param_2[0xb] = (long)plVar20;
            while (plVar20 != plVar17) {
              func_0x00010b202504();
              plVar17 = extraout_x9_10;
            }
            uVar7 = 1;
            if (*plVar24 != 0) {
              func_0x00010b2024e4();
              uVar7 = ((ulong)plVar20 & extraout_x9_11) == 0;
              func_0x00010b2024b8();
              lVar21 = extraout_x8_12;
              uVar16 = extraout_x9_12;
              plVar17 = extraout_x10_01;
              plVar25 = extraout_x11_02;
              while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
                plVar19 = (long *)plVar17[1];
                if (((ulong)plVar20 & uVar16) == 0) {
                  plVar19 = (long *)((ulong)plVar19 & uVar16);
                }
                else if (plVar20 <= plVar19) {
                  uVar3 = 0;
                  if (plVar20 != (long *)0x0) {
                    uVar3 = (ulong)plVar19 / (ulong)plVar20;
                  }
                  plVar19 = (long *)((long)plVar19 - uVar3 * (long)plVar20);
                }
                uVar7 = plVar19 == plVar25;
                if (!(bool)uVar7) {
                  if (*(long *)(lVar21 + (long)plVar19 * 8) == 0) {
                    func_0x00010b2024ac();
                    lVar21 = extraout_x8_14;
                    uVar16 = extraout_x9_14;
                    plVar17 = extraout_x12_00;
                    plVar25 = extraout_x11_04;
                  }
                  else {
                    func_0x00010b202238();
                    lVar21 = extraout_x8_13;
                    uVar16 = extraout_x9_13;
                    plVar17 = extraout_x10_02;
                    plVar25 = extraout_x11_03;
                  }
                }
              }
            }
          }
          func_0x00010b2023bc();
          if ((bool)uVar7) {
            uVar7 = 1;
            unaff_x27 = (long *)(extraout_x8_28 & (ulong)plVar18);
          }
          else {
            uVar7 = plVar18 == plVar20;
            unaff_x27 = plVar18;
            if (plVar20 <= plVar18) {
              uVar16 = 0;
              if (plVar20 != (long *)0x0) {
                uVar16 = (ulong)plVar18 / (ulong)plVar20;
              }
              unaff_x27 = (long *)((long)plVar18 - uVar16 * (long)plVar20);
            }
          }
        }
        plVar18 = *(long **)(*plVar13 + (long)unaff_x27 * 8);
        if (plVar18 == (long *)0x0) {
          func_0x00010b202444();
          if (extraout_x9_28 != 0) {
            func_0x00010b2023a0();
            lVar21 = extraout_x8_29;
            if ((bool)uVar7) {
              plVar18 = (long *)((ulong)extraout_x9_29 & extraout_x10_08);
            }
            else {
              plVar18 = extraout_x9_29;
              if (plVar20 <= extraout_x9_29) {
                func_0x00010b202420();
                lVar21 = extraout_x8_30;
                plVar18 = extraout_x9_30;
              }
            }
            *(long **)(lVar21 + (long)plVar18 * 8) = plVar23;
          }
        }
        else {
          *plVar23 = *plVar18;
          *plVar18 = (long)plVar23;
        }
        apuStack_78[0] = (undefined8 *)0x0;
        param_2[0xd] = param_2[0xd] + 1;
        FUN_10b201c58(apuStack_78);
code_r0x00010b20158c:
        plVar23 = plVar23 + 3;
        for (lVar21 = 0; lVar21 != 0x2d; lVar21 = lVar21 + 1) {
          puVar9 = (undefined8 *)0xa0;
          __Znwm();
          func_0x00010b202278();
          *puVar9 = &PTR_FUN_110cc62b8;
          puVar9[1] = 0;
          *(int *)(puVar9 + 0x12) = (int)lVar21;
          puVar9[0x13] = lVar22;
          *(undefined4 *)(puVar9 + 0x11) = 8;
          puStack_80 = puVar9;
          apuStack_78[0] = puVar9;
          func_0x000107c2805c();
          FUN_10b201d60(apuStack_78);
          apuStack_78[0] = puStack_80;
          puStack_80 = (undefined8 *)0x0;
          FUN_10b1c76a8(plVar23,apuStack_78);
          func_0x000107c29c20(apuStack_78);
          func_0x00010b202498();
          plVar23 = plVar23 + 1;
        }
      }
    }
    param_3 = param_3 + 2;
  } while( true );
}



/* Entry: 10b201894; end: 10b201a07;  */

uint FUN_10b201894(long param_1,undefined8 param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  FUN_10b201f80(param_1,&uStack_28);
  if (param_1 == 0) {
    func_0x000107c2be10(param_2);
    uVar1 = (uint)param_2;
  }
  else {
    pbVar2 = (byte *)(param_1 + 0x18);
    func_0x000107c29b34();
    uVar1 = (uint)*pbVar2;
  }
  return uVar1 & 1;
}



/* Entry: 10b201a08; end: 10b201a0f;  */

void FUN_10b201a08(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b202298(param_1,*param_2);
  return;
}



/* Entry: 10b201a10; end: 10b201a27;  */

void FUN_10b201a10(void)

{
  func_0x00010b202298();
  return;
}



/* Entry: 10b201a28; end: 10b201a3f;  */

void FUN_10b201a28(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b201a40; end: 10b201aa7;  */

void FUN_10b201a40(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b202378();
  if (unaff_x20 != 0) {
    func_0x00010b2024f8();
    if ((bool)in_ZR) {
      func_0x000107c29c20(unaff_x20 + 0x18);
    }
    func_0x00010b202418();
  }
  return;
}



/* Entry: 10b201aa8; end: 10b201aab;  */

void FUN_10b201aa8(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b201aac; end: 10b201abf;  */

void FUN_10b201aac(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b201ac0; end: 10b201b13;  */

void FUN_10b201ac0(void)

{
  func_0x000107c2be10();
  func_0x00010b202474();
  return;
}



/* Entry: 10b201b14; end: 10b201b1b;  */

void FUN_10b201b14(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b202298(param_1,*param_2);
  return;
}



/* Entry: 10b201b1c; end: 10b201b33;  */

void FUN_10b201b1c(void)

{
  func_0x00010b202298();
  return;
}



/* Entry: 10b201b34; end: 10b201b4b;  */

void FUN_10b201b34(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b201b4c; end: 10b201bb3;  */

void FUN_10b201b4c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b202378();
  if (unaff_x20 != 0) {
    func_0x00010b2024f8();
    if ((bool)in_ZR) {
      func_0x00010b1802e8(unaff_x20 + 0x18);
    }
    func_0x00010b202418();
  }
  return;
}



/* Entry: 10b201bb4; end: 10b201bb7;  */

void FUN_10b201bb4(long *param_1)

{
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b201bb8; end: 10b201bcb;  */

void FUN_10b201bb8(void)

{
  func_0x000107c28060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b201bcc; end: 10b201c1f;  */

void FUN_10b201bcc(void)

{
  func_0x000107c2be18();
  func_0x00010b20248c();
  return;
}



/* Entry: 10b201c20; end: 10b201c27;  */

void FUN_10b201c20(undefined8 param_1,undefined8 *param_2)

{
  func_0x00010b202298(param_1,*param_2);
  return;
}



/* Entry: 10b201c28; end: 10b201c3f;  */

void FUN_10b201c28(void)

{
  func_0x00010b202298();
  return;
}



/* Entry: 10b201c40; end: 10b201c57;  */

void FUN_10b201c40(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}


