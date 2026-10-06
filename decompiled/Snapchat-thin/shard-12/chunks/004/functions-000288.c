/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090cf168; end: 1090cf1ab;  */

void FUN_1090cf168(long param_1)

{
  long alStack_30 [2];
  
  FUN_1090cee68(alStack_30,param_1 + 0x10);
  if (alStack_30[0] != 0) {
    FUN_1090cdf50();
  }
  func_0x0001090cf300();
  return;
}



/* Entry: 1090cf1ac; end: 1090cf203;  */

long FUN_1090cf1ac(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1 + 8;
}



/* Entry: 1090cf204; end: 1090cf22f;  */

long * FUN_1090cf204(long *param_1,long param_2)

{
  *param_1 = param_2;
  if (param_2 != 0) {
    _CFRetain(param_2);
  }
  return param_1;
}



/* Entry: 1090cf230; end: 1090cf31f;  */

void FUN_1090cf230(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 1;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1090cf320; end: 1090cf44f;  */

void FUN_1090cf320(void)

{
  return;
}



/* Entry: 1090cf450; end: 1090cf4f3;  */

void FUN_1090cf450(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined8 uStack_28;
  
  func_0x0001090d0b24();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad94c8;
  __ZNSt3__115recursive_mutexC1Ev(param_1 + 3);
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  lVar4 = *unaff_x20;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
    plVar1 = (long *)(*(long *)(lVar4 + 0x10) + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(long *)(unaff_x19 + 0x60) = lVar4;
  *(undefined8 *)(unaff_x19 + 0x68) = 0;
  *(undefined1 *)(unaff_x19 + 0x70) = 0;
  func_0x00010b9a64d4(&uStack_28,&UNK_10f550087);
  func_0x000107c31034(unaff_x19 + 0x78,&uStack_28,2);
  func_0x000107c278f8(uStack_28);
  *(undefined1 *)(unaff_x19 + 0xb0) = 0;
  *(undefined8 *)(unaff_x19 + 0x98) = 0;
  *(undefined8 *)(unaff_x19 + 0x90) = 0;
  *(undefined8 *)(unaff_x19 + 0xa8) = 0;
  *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  return;
}



/* Entry: 1090cf4f4; end: 1090cf597;  */

undefined8 * FUN_1090cf4f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad94c8;
  *(undefined1 *)(param_1 + 0xe) = 1;
  func_0x00010b998efc(param_1[0xf]);
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 3);
  FUN_1090cf598(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    func_0x00010bdb0140();
  }
  func_0x0001090d0ad8();
  FUN_1090d01ec(param_1 + 0x10);
  func_0x000104bd5214(param_1 + 0xf);
  FUN_1090958e8(param_1 + 0xc);
  FUN_1090c7cf8(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090cf598; end: 1090cf65b;  */

void FUN_1090cf598(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  plVar1 = param_1;
  func_0x0001090d0280();
  lVar3 = param_2;
  func_0x0001090d0bdc();
  do {
    lVar5 = param_2 + -0x1000;
    do {
      if (param_2 == lVar3) {
        param_1[5] = 0;
        puVar2 = (undefined8 *)param_1[1];
        while (uVar4 = param_1[2] - (long)puVar2 >> 3, 2 < uVar4) {
          __ZdlPv(*puVar2);
          puVar2 = (undefined8 *)(param_1[1] + 8);
          param_1[1] = (long)puVar2;
        }
        if (uVar4 == 1) {
          lVar3 = 0x100;
        }
        else {
          if (uVar4 != 2) {
            return;
          }
          lVar3 = 0x200;
        }
        param_1[4] = lVar3;
        return;
      }
      FUN_1090ac7bc(param_2);
      param_2 = param_2 + 8;
      lVar5 = lVar5 + 8;
    } while (*plVar1 != lVar5);
    plVar1 = plVar1 + 1;
    param_2 = *plVar1;
  } while( true );
}



/* Entry: 1090cf65c; end: 1090cf65f;  */

undefined8 * FUN_1090cf65c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad94c8;
  *(undefined1 *)(param_1 + 0xe) = 1;
  func_0x00010b998efc(param_1[0xf]);
  __ZNSt3__115recursive_mutex4lockEv(param_1 + 3);
  FUN_1090cf598(param_1 + 0x10);
  if (param_1[0xd] != 0) {
    func_0x00010bdb0140();
  }
  func_0x0001090d0ad8();
  FUN_1090d01ec(param_1 + 0x10);
  func_0x000104bd5214(param_1 + 0xf);
  FUN_1090958e8(param_1 + 0xc);
  FUN_1090c7cf8(param_1 + 0xb);
  __ZNSt3__115recursive_mutexD1Ev(param_1 + 3);
  func_0x000107c278e8(param_1 + 1);
  return param_1;
}



/* Entry: 1090cf660; end: 1090cf673;  */

void FUN_1090cf660(void)

{
  FUN_1090cf4f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090cf674; end: 1090cf6a7;  */

void FUN_1090cf674(long param_1,undefined8 param_2)

{
  func_0x0001090d0b48();
  FUN_1090c7484(param_1 + 0x58,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutex6unlockEv_110346580)(param_1 + 0x18);
  return;
}



/* Entry: 1090cf6a8; end: 1090cf6cb;  */

bool FUN_1090cf6a8(undefined8 param_1,long *param_2)

{
  return *(int *)(*param_2 + 0x10) == 0x61763031;
}



/* Entry: 1090cf6cc; end: 1090cf977;  */

bool FUN_1090cf6cc(void)

{
  ulong uVar1;
  long unaff_x19;
  
  func_0x0001090d0b18();
  uVar1 = *(ulong *)(unaff_x19 + 0xa8);
  func_0x0001090d0ad8();
  return uVar1 < 8;
}



/* Entry: 1090cf978; end: 1090cfa27;  */

void FUN_1090cf978(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_38;
  
  func_0x0001090d0b08();
  uStack_38 = extraout_x8;
  func_0x0001090d0b48();
  FUN_1090cf598(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  plVar1 = *(long **)(param_1 + 0x78);
  func_0x0001090cf8e4(&uStack_80,param_1);
  pcStack_68 = FUN_1090d016c;
  ppuStack_60 = &PTR_DAT_110ad9568;
  uStack_50 = uStack_78;
  uStack_58 = uStack_80;
  uStack_80 = 0;
  uStack_78 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&pcStack_68);
  (*(code *)*ppuStack_60)(&ppuStack_60);
  FUN_1090d0144(&uStack_80);
  func_0x0001090d0ad8();
  func_0x0001090d0aa4(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1090cfa28; end: 1090cfa2b;  */

void FUN_1090cfa28(void)

{
  return;
}



/* Entry: 1090cfa2c; end: 1090cfa4f;  */

undefined1 FUN_1090cfa2c(void)

{
  undefined1 uVar1;
  long unaff_x19;
  
  func_0x0001090d0b18();
  uVar1 = *(undefined1 *)(unaff_x19 + 0xb0);
  func_0x0001090d0ad8();
  return uVar1;
}



/* Entry: 1090cfa50; end: 1090cfa73;  */

void FUN_1090cfa50(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090cfa58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



/* Entry: 1090cfa74; end: 1090cfac7;  */

bool FUN_1090cfa74(long param_1)

{
  bool bVar1;
  
  FUN_1090ac7bc(*(long *)(*(long *)(param_1 + 8) + (*(ulong *)(param_1 + 0x20) >> 9) * 8) +
                (*(ulong *)(param_1 + 0x20) & 0x1ff) * 8);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
  *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 1;
  bVar1 = 0x3ff < *(ulong *)(param_1 + 0x20);
  if (bVar1) {
    __ZdlPv(**(undefined8 **)(param_1 + 8));
    *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
  }
  return bVar1;
}



/* Entry: 1090cfac8; end: 1090d00fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined ******** FUN_1090cfac8(undefined ********param_1)

{
  undefined ********ppppppppuVar1;
  long *plVar2;
  undefined ********ppppppppuVar3;
  undefined ****ppppuVar4;
  undefined8 uVar5;
  char cVar6;
  bool bVar7;
  undefined1 in_ZR;
  undefined *******pppppppuVar8;
  undefined ******ppppppuVar9;
  long *plVar10;
  undefined ********ppppppppuVar11;
  undefined ******ppppppuVar12;
  undefined8 extraout_x8;
  long lVar13;
  undefined ***pppuVar14;
  int extraout_w10;
  undefined *******pppppppuVar15;
  undefined *******pppppppuVar16;
  ulong uVar17;
  undefined ****ppppuVar18;
  undefined8 *******pppppppuVar19;
  undefined8 *******pppppppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined ********ppppppppuStack_1a0;
  undefined ***pppuStack_198;
  undefined8 uStack_190;
  long *plStack_178;
  undefined ********ppppppppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined ********ppppppppuStack_158;
  undefined *****pppppuStack_150;
  ulong uStack_148;
  undefined ********ppppppppuStack_140;
  undefined8 *******pppppppuStack_138;
  ulong uStack_130;
  undefined *******pppppppuStack_110;
  undefined ********ppppppppuStack_108;
  undefined ********ppppppppuStack_100;
  undefined **ppuStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  char cStack_88;
  undefined8 uStack_70;
  
  func_0x0001090d0b08();
  pppppppuVar15 = param_1[2];
  ppppppppuVar1 = (undefined ********)(pppppppuVar15 + 3);
  uStack_70 = extraout_x8;
LAB_1090cfb24:
  do {
    if (((ulong)pppppppuVar15[0xe] & 1) != 0) goto LAB_1090d00cc;
    pppppppuVar8 = (undefined *******)0x120;
    __Znwm();
    pppppppuVar16 = pppppppuVar8 + 1;
    *pppppppuVar16 = (undefined ******)0x1;
    *pppppppuVar8 = (undefined ******)&PTR_DAT_110ad9608;
    _bzero(pppppppuVar8 + 2,0x110);
    ppppppuVar9 = pppppppuVar15[0xd];
    func_0x000104c1bc28(ppppppuVar9,pppppppuVar8 + 2);
    if ((int)ppppppuVar9 != -0x23) {
      if ((int)ppppppuVar9 == 0) {
        if ((*(int *)(pppppppuVar8 + 10) == 1) && (*(int *)((long)pppppppuVar8 + 0x54) == 8)) {
          uVar17 = (ulong)*(uint *)(pppppppuVar8 + 0xd);
          ppppppuVar9 = pppppppuVar8[0xb];
          ppppppuVar12 = pppppppuVar8[0xc];
          plVar10 = (long *)0x80;
          __Znwm();
          pppuStack_198 = (undefined ***)0x3f80000000000000;
          ppppppppuStack_1a0 = (undefined ********)0x3f800000;
          uStack_190 = 0;
          pppppuStack_150 = (undefined *****)0x1;
          ppppppppuStack_158 = (undefined ********)&PTR_DAT_110d7e488;
          ppppppppuStack_140 = (undefined ********)0x0;
          pppppppuStack_138 = (undefined8 *******)0x0;
          uStack_148 = 0;
          func_0x0001090e4fd4();
          ppppppppuStack_158 = (undefined ********)&PTR_DAT_110d7e488;
          _free(pppppppuStack_138);
          func_0x0001090f5ed4(&pppppppuStack_1c0,ppppppuVar12,uVar17 | 0x100000000);
          ppppppppuVar11 = (undefined ********)0x98;
          __Znwm();
          plVar2 = plVar10 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = *plVar2 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          plStack_178 = plVar10;
          FUN_1090c7eb4(&ppppppppuStack_1a0,&pppppppuStack_1c0);
          uStack_168 = 0;
          uStack_160 = 0;
          FUN_1090c7eb4(&ppppppppuStack_158,&ppppppppuStack_1a0);
          func_0x0001090f34a0(ppppppppuVar11,&plStack_178,ppppppuVar9,uVar17 | 0x100000000,
                              ppppppuVar12,uVar17 | 0x100000000,ppppppuVar9,uVar17 | 0x100000000,1,
                              &ppppppppuStack_170,&ppppppppuStack_158);
          func_0x0001090e5d44(pppppuStack_150);
          func_0x0001090e5ca4(uStack_168);
          *ppppppppuVar11 = (undefined *******)&PTR_DAT_110ad9598;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
            if (bVar7) {
              *pppppppuVar16 = (undefined ******)((long)*pppppppuVar16 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          ppppppppuVar11[0x12] = pppppppuVar8;
          func_0x0001090e5d44(pppuStack_198);
          FUN_1090c8060(plStack_178);
          ppppppppuVar3 = ppppppppuVar11 + 1;
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar3,0x10);
            if (bVar7) {
              *ppppppppuVar3 = (undefined *******)((long)*ppppppppuVar3 + 1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          pppppppuStack_110 = (undefined *******)0x1;
          do {
            pppppppuVar8 = *ppppppppuVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(ppppppppuVar3,0x10);
            if (bVar7) {
              *ppppppppuVar3 = (undefined *******)((long)pppppppuVar8 + -1);
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          ppppppppuStack_108 = ppppppppuVar11;
          if ((undefined *******)((long)pppppppuVar8 + -1) == (undefined *******)0x0) {
            (*(code *)(*ppppppppuVar11)[1])(ppppppppuVar11);
          }
          func_0x0001090e5d44(pppuStack_1b8);
          do {
            lVar13 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar13 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar13 + -1 == 0) {
            func_0x0001090d0b64(*(undefined8 *)(*plVar10 + 8));
          }
          if (pppppppuStack_110 != (undefined *******)0x1) goto LAB_1090cfef0;
          pppppppuVar8 = (undefined *******)pppppppuVar15[0xc][5];
          pppppuStack_150 = pppppppuVar15[0xc][6];
          ppppppppuStack_158 = (undefined ********)pppppppuVar8;
          if (pppppuStack_150 != (undefined *****)0x0) {
            do {
              func_0x0001090d0bec();
            } while (extraout_w10 != 0);
          }
          (*(code *)(*pppppppuVar8)[5])();
          func_0x0001090d097c(&ppppppppuStack_158);
          pppppuStack_150 = (undefined *****)CONCAT71(pppppuStack_150._1_7_,1);
          ppppppppuStack_158 = ppppppppuVar1;
          __ZNSt3__115recursive_mutex4lockEv(ppppppppuVar1);
          ppppppuVar9 = pppppppuVar15[0xb];
          if (ppppppuVar9 != (undefined ******)0x0) {
            ppppppppuStack_100 = (undefined ********)FUN_1090d09a4;
            ppuStack_f8 = &PTR_DAT_110ad95d8;
            (*(code *)(*ppppppuVar9)[4])(ppppppuVar9,&ppppppppuStack_108,&ppppppppuStack_100);
            (*(code *)*ppuStack_f8)(&ppuStack_f8);
          }
          func_0x000107c2851c(&ppppppppuStack_158);
        }
        else {
          func_0x00010b99f5f8(&ppppppppuStack_158,&DAT_10f54db12);
          pppppppuStack_110 = (undefined *******)0x2;
          ppppppppuStack_108 = ppppppppuStack_158;
LAB_1090cfef0:
          func_0x0001090d0ac8();
        }
        param_1 = &pppppppuStack_110;
        FUN_1090ac798();
        do {
          in_ZR = (undefined ******)((long)*pppppppuVar16 + -1) == (undefined ******)0x0;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
          if (bVar7) {
            *pppppppuVar16 = (undefined ******)((long)*pppppppuVar16 + -1);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((bool)in_ZR) {
          func_0x0001090d0ab8();
        }
        goto LAB_1090cfb24;
      }
      ppppppppuStack_100 = (undefined ********)&UNK_10f5500cc;
      ppuStack_f8 = (undefined **)0x0;
      uStack_f0 = (ulong)ppppppuVar9 & 0xffffffff;
      uStack_e8 = 0;
      func_0x000107c2793c(&UNK_10f5500e6);
      func_0x000107c3173c(&ppppppppuStack_158);
      ppuStack_f8 = (undefined **)pppppuStack_150;
      ppppppppuStack_100 = ppppppppuStack_158;
      if (-1 < (long)uStack_148) {
        ppuStack_f8 = (undefined **)(uStack_148 >> 0x38);
        ppppppppuStack_100 = (undefined ********)&ppppppppuStack_158;
      }
      func_0x00010b99f5a8(&ppppppppuStack_1a0,&ppppppppuStack_100);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppppuStack_158);
      func_0x0001090d0ac8();
      param_1 = ppppppppuStack_1a0;
      func_0x000104bda960();
      do {
        in_ZR = (undefined ******)((long)*pppppppuVar16 + -1) == (undefined ******)0x0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
        if (bVar7) {
          *pppppppuVar16 = (undefined ******)((long)*pppppppuVar16 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((bool)in_ZR) {
        func_0x0001090d0ab8();
      }
LAB_1090d00cc:
      func_0x0001090d0aa4(uStack_70);
      if ((bool)in_ZR) {
        return param_1;
      }
      ___stack_chk_fail();
      if (param_1[2] != (undefined *******)0x0) {
        func_0x000107c27b90();
      }
      return param_1 + 1;
    }
    uStack_168 = CONCAT71(uStack_168._1_7_,1);
    ppppppppuStack_170 = ppppppppuVar1;
    __ZNSt3__115recursive_mutex4lockEv(ppppppppuVar1);
    ppppppuVar9 = pppppppuVar15[0x15];
    if (ppppppuVar9 == (undefined ******)0x0) {
      *(undefined1 *)(pppppppuVar15 + 0x16) = 1;
    }
    else {
      uVar17 = (ulong)pppppppuVar15[0x14] & 0x1ff;
      ppppuVar18 = pppppppuVar15[0x11][(ulong)pppppppuVar15[0x14] >> 9][uVar17];
      pppppppuVar15[0x11][(ulong)pppppppuVar15[0x14] >> 9][uVar17] = (undefined ****)0x0;
      FUN_1090cfa74(pppppppuVar15 + 0x10);
      func_0x000108110898(&ppppppppuStack_170);
      (*(code *)(*ppppuVar18)[4])(&ppppppppuStack_100,ppppuVar18);
      if (ppppppppuStack_100 == (undefined ********)0x1) {
        if ((int)ppuStack_f8 == 8) {
          uVar17 = 0;
          if (cStack_88 == '\0') {
            uVar17 = uStack_f0;
          }
          uVar5 = 0;
          if (cStack_88 == '\0') {
            uVar5 = uStack_e8;
          }
          func_0x0001090d0b64((*ppppuVar18)[2]);
          ppppppppuVar11 = (undefined ********)&ppppppppuStack_158;
          func_0x000104c06e58(ppppppppuVar11,uVar17,uVar5,0x1090cfa5c,ppppuVar18);
          if ((int)ppppppppuVar11 == 0) {
            pppuVar14 = ppppuVar18[4];
            ppppppppuVar11 = (undefined ********)ppppuVar18[3];
            pppuStack_1b8 = ppppuVar18[6];
            pppppppuVar19 = (undefined8 *******)ppppuVar18[5];
            pppuStack_198._0_4_ = (uint)pppuVar14;
            uVar17 = (ulong)pppuVar14 & 0xffffffff;
            pppppppuStack_1c0 = pppppppuVar19;
            ppppppppuStack_1a0 = ppppppppuVar11;
            if ((uint)pppuStack_198 != (uint)pppuStack_1b8) {
              if ((uint)pppuStack_198 <= (uint)pppuStack_1b8) {
                pppuStack_198._0_4_ = (uint)pppuStack_1b8;
              }
              uVar17 = (ulong)(uint)pppuStack_198;
              ppppppppuVar11 = (undefined ********)&ppppppppuStack_1a0;
              pppuStack_198 = pppuVar14;
              func_0x0001090fbe0c(ppppppppuVar11,uVar17);
              pppppppuVar19 = &pppppppuStack_1c0;
              func_0x0001090fbe0c(pppppppuVar19,uVar17);
              pppuVar14 = pppuStack_198;
            }
            pppuStack_198 = pppuVar14;
            ppppppuVar12 = pppppppuVar15[0xd];
            ppppppppuStack_140 = ppppppppuVar11;
            pppppppuStack_138 = pppppppuVar19;
            uStack_130 = uVar17;
            func_0x000104c1bb14(ppppppuVar12,&ppppppppuStack_158);
            if ((int)ppppppuVar12 != 0) {
              func_0x000104c06fa4(&ppppppppuStack_158);
              func_0x00010b99f5f8(&pppppppuStack_110,&DAT_10f54da62);
              func_0x0001090d0ac8();
              func_0x000104bda960(pppppppuStack_110);
            }
          }
          else {
            func_0x0001090d0b64((*ppppuVar18)[3]);
            func_0x00010b99f5f8(&ppppppppuStack_1a0,&DAT_10f54da42);
            func_0x0001090d0ac8();
            func_0x000104bda960(ppppppppuStack_1a0);
          }
        }
        else {
          func_0x00010b99f5f8(&ppppppppuStack_158,&UNK_10f55009f);
          func_0x0001090d0ac8();
          func_0x000104bda960(ppppppppuStack_158);
        }
      }
      else {
        func_0x0001090d0ac8();
      }
      func_0x0001090c19c0(&ppppppppuStack_100);
      ppppuVar4 = ppppuVar18 + 1;
      do {
        pppuVar14 = *ppppuVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(ppppuVar4,0x10);
        if (bVar7) {
          *ppppuVar4 = (undefined ***)((long)pppuVar14 + -1);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((undefined ***)((long)pppuVar14 + -1) == (undefined ***)0x0) {
        func_0x0001090d0b64((*ppppuVar18)[1]);
      }
    }
    param_1 = (undefined ********)&ppppppppuStack_170;
    func_0x000107c2851c();
    do {
      in_ZR = (undefined ******)((long)*pppppppuVar16 + -1) == (undefined ******)0x0;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pppppppuVar16,0x10);
      if (bVar7) {
        *pppppppuVar16 = (undefined ******)((long)*pppppppuVar16 + -1);
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if ((bool)in_ZR) {
      func_0x0001090d0ab8();
    }
    if (ppppppuVar9 == (undefined ******)0x0) goto LAB_1090d00cc;
  } while( true );
}



/* Entry: 1090d00fc; end: 1090d0143;  */

long FUN_1090d00fc(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c27b90();
  }
  return param_1 + 8;
}



/* Entry: 1090d0144; end: 1090d016b;  */

long FUN_1090d0144(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c27b90();
  }
  return param_1;
}



/* Entry: 1090d016c; end: 1090d01eb;  */

void FUN_1090d016c(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x10) + 0x68);
  func_0x000104c06fa4(plVar3 + 0x14);
  if (plVar3[0x1e] != 0) {
    func_0x000104c21ed8(plVar3 + 0x1d);
  }
  if (plVar3[0x43] != 0) {
    func_0x000104c21ed8(plVar3 + 0x42);
  }
  *(undefined4 *)(plVar3 + 0x1ece) = 0;
  *(undefined4 *)(plVar3 + 0x1ed6) = 0;
  plVar6 = plVar3 + 0x1862;
  plVar9 = plVar3 + 0x19bb;
  lVar10 = 8;
  do {
    if (plVar6[1] != 0) {
      func_0x000104c21ed8(plVar6);
    }
    func_0x000104c28f7c(plVar6 + 0x25);
    func_0x000104c28f7c(plVar6 + 0x26);
    func_0x000104c06e18(plVar9);
    plVar6 = plVar6 + 0x2b;
    plVar9 = plVar9 + 3;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  plVar3[0xc] = 0;
  plVar3[9] = 0;
  func_0x000104c28f7c(plVar3 + 8);
  plVar3[0x10] = 0;
  plVar3[0xe] = 0;
  plVar3[0x12] = 0;
  *(undefined4 *)(plVar3 + 0x13) = 0;
  func_0x000104c28f7c(plVar3 + 0xf);
  func_0x000104c28f7c(plVar3 + 0xd);
  func_0x000104c28f7c(plVar3 + 0x11);
  func_0x000104c06f74(plVar3 + 0x1ed0);
  if (((int)plVar3[1] != 1) || ((int)plVar3[3] != 1)) {
    *(undefined4 *)plVar3[0x68] = 1;
    if (1 < *(uint *)(plVar3 + 3)) {
      _pthread_mutex_lock(plVar3 + 0x70);
      for (uVar7 = 0; uVar7 < *(uint *)(plVar3 + 3); uVar7 = uVar7 + 1) {
        lVar10 = plVar3[2] + uVar7 * 0x3f2c0;
        while (*(int *)(lVar10 + 0x3f298) == 0) {
          _pthread_cond_wait(lVar10 + 0x3f210,plVar3 + 0x70);
        }
      }
      lVar10 = 0x15b8;
      for (uVar7 = 0; uVar7 < *(uint *)(plVar3 + 1); uVar7 = uVar7 + 1) {
        puVar1 = (undefined8 *)(*plVar3 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 3) = 0;
        puVar1[2] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        lVar10 = lVar10 + 0x1640;
      }
      *(undefined4 *)(plVar3 + 0x7e) = 0;
      *(uint *)((long)plVar3 + 0x3f4) = *(uint *)(plVar3 + 1);
      *(undefined4 *)(plVar3 + 0x7f) = 0xffffffff;
      *(undefined4 *)((long)plVar3 + 0x3fc) = 0;
      func_0x000104c1c35c();
    }
    uVar4 = *(uint *)(plVar3 + 1);
    if (1 < uVar4) {
      uVar5 = *(uint *)(plVar3 + 0x6a);
      for (uVar8 = 0; uVar8 < uVar4; uVar8 = uVar8 + 1) {
        uVar2 = 0;
        if (uVar5 != uVar4) {
          uVar2 = uVar5;
        }
        lVar10 = *plVar3 + (ulong)uVar2 * 0x1640;
        func_0x000104c0948c(lVar10,0xffffffff);
        *(undefined4 *)(lVar10 + 0xc34) = 0;
        *(undefined4 *)(lVar10 + 0x15a4) = 0;
        if (*(long *)(plVar3[0x69] + (ulong)uVar2 * 0x128 + 8) != 0) {
          func_0x000104c21ed8();
        }
        uVar5 = uVar2 + 1;
        uVar4 = *(uint *)(plVar3 + 1);
      }
      *(undefined4 *)(plVar3 + 0x6a) = 0;
    }
    *(undefined4 *)plVar3[0x68] = 0;
  }
  return;
}



/* Entry: 1090d01ec; end: 1090d022f;  */

long * FUN_1090d01ec(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_1090cf598();
  puVar1 = (undefined8 *)param_1[2];
  for (puVar2 = (undefined8 *)param_1[1]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    __ZdlPv(*puVar2);
  }
  FUN_1090d025c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090d0230; end: 1090d025b;  */

long * FUN_1090d0230(long *param_1)

{
  FUN_1090d025c();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090d025c; end: 1090d02f3;  */

void FUN_1090d025c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1090d02f4; end: 1090d0437;  */

void FUN_1090d02f4(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long *plStack_48;
  long *plStack_40;
  
  if ((ulong)param_1[4] < 0x200) {
    uVar6 = param_1[2] - param_1[1];
    plVar2 = param_1 + 3;
    lVar4 = *plVar2;
    uVar5 = lVar4 - *param_1;
    if (uVar5 <= uVar6) {
      lVar1 = (long)uVar5 >> 2;
      if (lVar4 == *param_1) {
        lVar1 = 1;
      }
      plStack_40 = plVar2;
      FUN_1090d077c();
      lStack_58 = (long)plVar2 + uVar6;
      plStack_48 = plVar2 + lVar1;
      uVar3 = 0x1000;
      lStack_60 = (long)plVar2;
      lStack_50 = lStack_58;
      __Znwm();
      uStack_68 = 0x200;
      uStack_80 = uVar3;
      plStack_70 = param_1 + 5;
      FUN_1090d0600(&lStack_60,&uStack_80);
      uStack_78 = 0;
      lVar4 = param_1[2];
      while (lVar1 = param_1[1], lVar4 != lVar1) {
        lVar4 = lVar4 + -8;
        FUN_1090d0694(&lStack_60,lVar4);
      }
      lVar4 = *param_1;
      lVar8 = param_1[3];
      lVar7 = param_1[2];
      param_1[1] = lStack_58;
      *param_1 = lStack_60;
      param_1[3] = (long)plStack_48;
      param_1[2] = lStack_50;
      lStack_60 = lVar4;
      lStack_58 = lVar1;
      lStack_50 = lVar7;
      plStack_48 = (long *)lVar8;
      FUN_1090d07bc(&uStack_78);
      FUN_1090d07f8(&lStack_60);
      return;
    }
    lVar1 = 0x1000;
    if (lVar4 != param_1[2]) {
      __Znwm();
      lStack_60 = lVar1;
      func_0x0001090d04c4(param_1,&lStack_60);
      return;
    }
    __Znwm();
    lStack_60 = lVar1;
    FUN_1090d0550(param_1,&lStack_60);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
  }
  lStack_60 = *(long *)param_1[1];
  param_1[1] = (long)((long *)param_1[1] + 1);
  FUN_1090d0438(param_1,&lStack_60);
  return;
}



/* Entry: 1090d0438; end: 1090d054f;  */

void FUN_1090d0438(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  ulong *unaff_x19;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001090d0b24();
  func_0x0001090d0bbc();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    uVar3 = unaff_x19[1];
    bVar2 = uVar3 == uVar1;
    if (uVar1 < uVar3) {
      func_0x0001090d0a88();
      if (!bVar2) {
        func_0x0001090d0b30();
      }
      func_0x0001090d0bac();
    }
    else {
      uVar4 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar4 = 0;
      }
      func_0x0001090d0b3c();
      lStack_68 = param_1 + (uVar4 >> 2) * 8;
      lStack_58 = param_1 + uVar3 * 8;
      lStack_70 = param_1;
      lStack_60 = lStack_68;
      FUN_1090d0748(&lStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x0001090d0a5c();
    }
  }
  func_0x0001090d0bcc();
  return;
}



/* Entry: 1090d0550; end: 1090d05ff;  */

void FUN_1090d0550(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  long lVar5;
  ulong uVar6;
  long unaff_x22;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001090d0b24();
  uVar6 = param_1[1];
  bVar1 = *param_1 <= uVar6;
  uVar2 = uVar6 == *param_1;
  if ((bool)uVar2) {
    lVar3 = unaff_x19;
    func_0x0001090d0bbc();
    if (bVar1) {
      lVar4 = (long)(extraout_x9 - uVar6) >> 2;
      if (extraout_x9 - uVar6 == 0) {
        lVar4 = 1;
      }
      lVar5 = lVar4 * 2;
      FUN_1090d077c();
      lStack_58 = lVar3 + (lVar5 + 6U & 0xfffffffffffffff8);
      lStack_48 = lVar3 + lVar4 * 8;
      lStack_50 = lStack_58;
      FUN_1090d0748(auStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x0001090d0a5c();
      uVar6 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x0001090d0ae0();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar6 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar6 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar6 - 8);
  return;
}



/* Entry: 1090d0600; end: 1090d0693;  */

void FUN_1090d0600(long param_1)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x19;
  ulong uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  func_0x0001090d0b24();
  if (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18)) {
    uVar5 = *unaff_x19;
    uVar4 = unaff_x19[1];
    bVar2 = uVar4 == uVar5;
    if (uVar5 < uVar4) {
      func_0x0001090d0a88();
      if (!bVar2) {
        func_0x0001090d0b30();
      }
      func_0x0001090d0bac();
    }
    else {
      lVar1 = *(long *)(param_1 + 0x10) - uVar5;
      uVar5 = lVar1 >> 2;
      if (lVar1 == 0) {
        uVar5 = 0;
      }
      uVar3 = unaff_x19[4];
      func_0x0001090d0b3c();
      lStack_68 = uVar3 + (uVar5 >> 2) * 8;
      lStack_58 = uVar3 + uVar4 * 8;
      uStack_70 = uVar3;
      lStack_60 = lStack_68;
      FUN_1090d0748(&uStack_70,unaff_x19[1],unaff_x19[2]);
      func_0x0001090d0a5c();
    }
  }
  func_0x0001090d0bcc();
  return;
}



/* Entry: 1090d0694; end: 1090d0747;  */

void FUN_1090d0694(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  func_0x0001090d0b24();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x0001090d0ae0();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar5 = lVar4 * 2;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      lStack_40 = lVar3;
      FUN_1090d077c();
      lStack_58 = lVar3 + (lVar5 + 6U & 0xfffffffffffffff8);
      lStack_48 = lVar3 + lVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_1090d0748(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x0001090d0a5c();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 1090d0748; end: 1090d077b;  */

void FUN_1090d0748(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 1090d077c; end: 1090d079f;  */

void FUN_1090d077c(void)

{
  FUN_1090d07a0();
  return;
}



/* Entry: 1090d07a0; end: 1090d07bb;  */

long FUN_1090d07a0(long param_1,ulong param_2)

{
  long lVar1;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(lVar1);
    return lVar1;
  }
  func_0x000104bfe188();
  FUN_1090d07e0();
  return param_1;
}



/* Entry: 1090d07bc; end: 1090d07df;  */

undefined8 FUN_1090d07bc(undefined8 param_1)

{
  FUN_1090d07e0(param_1,0);
  return param_1;
}



/* Entry: 1090d07e0; end: 1090d07f7;  */

void FUN_1090d07e0(long *param_1,long param_2)

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



/* Entry: 1090d07f8; end: 1090d0823;  */

long * FUN_1090d07f8(long *param_1)

{
  FUN_1090d0824();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090d0824; end: 1090d084b;  */

void FUN_1090d0824(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 1090d084c; end: 1090d085f;  */

void FUN_1090d084c(void)

{
  FUN_1090d0948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090d0860; end: 1090d0947;  */

long * FUN_1090d0860(undefined8 param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long *plVar6;
  long *plStack_120;
  undefined1 auStack_118 [120];
  long *plStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x0001090d0b08();
  plVar6 = *(long **)(param_2 + 0x90);
  lStack_80 = plVar6[7];
  lStack_60 = plVar6[8];
  lStack_98 = plVar6[4];
  iVar2 = *(int *)(plVar6[3] + 0x198);
  lStack_90 = (long)iVar2;
  iVar3 = *(int *)(plVar6[3] + 0x19c);
  lStack_88 = (long)iVar3;
  lStack_70 = (long)(iVar2 / 2);
  lStack_78 = plVar6[5];
  lStack_58 = plVar6[6];
  lStack_68 = (long)(iVar3 / 2);
  plVar1 = plVar6 + 1;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = *plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  plStack_120 = plVar6;
  lStack_50 = lStack_70;
  lStack_48 = lStack_68;
  lStack_40 = lStack_60;
  uStack_38 = extraout_x8;
  func_0x0001090f3578(auStack_118,0,&lStack_98,3,&plStack_120);
  FUN_1090c7fd8(param_1,auStack_118);
  if (plStack_a0 != (long *)0x0) {
    (**(code **)(*plStack_a0 + 0x18))();
  }
  (**(code **)(*plVar6 + 0x18))();
  func_0x0001090d0aa4(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    *plVar6 = (long)&PTR_DAT_110ad9598;
    func_0x0001090d01c0(plVar6[0x12]);
    *plVar6 = (long)&PTR_DAT_110adb218;
    func_0x0001090f5fe0(plVar6 + 0xe);
    func_0x0001090f5d40(plVar6 + 0xb);
    FUN_1090c803c(plVar6 + 2);
    return plVar6;
  }
  return plVar6;
}



/* Entry: 1090d0948; end: 1090d09a3;  */

undefined8 * FUN_1090d0948(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad9598;
  func_0x0001090d01c0(param_1[0x12]);
  *param_1 = &PTR_DAT_110adb218;
  func_0x0001090f5fe0(param_1 + 0xe);
  func_0x0001090f5d40(param_1 + 0xb);
  FUN_1090c803c(param_1 + 2);
  return param_1;
}



/* Entry: 1090d09a4; end: 1090d09b7;  */

void FUN_1090d09a4(void)

{
  return;
}



/* Entry: 1090d09b8; end: 1090d09cb;  */

void FUN_1090d09b8(void)

{
  FUN_1090d09cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090d09cc; end: 1090d0a5b;  */

undefined8 * FUN_1090d09cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ad9608;
  if (param_1[0x1a] != 0) {
    func_0x000104c21e4c(param_1 + 2);
  }
  return param_1;
}



/* Entry: 1090d0a5c; end: 1090d0bfb;  */

void FUN_1090d0a5c(void)

{
  long *unaff_x19;
  long lVar1;
  long in_stack_00000000;
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  
  lVar1 = *unaff_x19;
  unaff_x19[1] = in_stack_00000008;
  *unaff_x19 = in_stack_00000000;
  unaff_x19[3] = in_stack_00000018;
  unaff_x19[2] = in_stack_00000010;
  FUN_1090d0824();
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 1090d0bfc; end: 1090d0d0f;  */

undefined8 * FUN_1090d0bfc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  undefined8 *puVar5;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  long lStack_58;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lVar4 = param_1;
  func_0x0001090d1568();
  uStack_28 = extraout_x8;
  FUN_1090d1040(&lStack_58,lVar4 + 0x78,param_1 + 0x7c);
  if (lStack_58 != 0) {
    plVar1 = (long *)(lStack_58 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  lStack_30 = lStack_58;
  FUN_1090d0d10(auStack_50,&lStack_30,1);
  FUN_1090d112c(&uStack_38,auStack_50);
  func_0x0001090d100c(auStack_50);
  FUN_1090d10e4(&lStack_30);
  FUN_1090d109c(&lStack_58);
  FUN_1090d11fc(param_1,param_1 + 8,param_1 + 0x18,param_1 + 0x20,param_1 + 0x28,&uStack_38,
                param_1 + 0x30);
  FUN_1090e8e44(*unaff_x19);
  puVar5 = &uStack_38;
  FUN_1090d11b4();
  func_0x0001090d1548(uStack_28);
  if ((bool)in_ZR) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar5 = &uStack_38;
  FUN_1090d11b4();
  func_0x0001090d158c();
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  FUN_1090d0d40();
  return puVar5;
}



/* Entry: 1090d0d10; end: 1090d0d3f;  */

undefined8 * FUN_1090d0d10(undefined8 *param_1,long param_2,long param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1090d0d40(param_1,param_2,param_2 + param_3 * 8,param_3);
  return param_1;
}



/* Entry: 1090d0d40; end: 1090d0dbb;  */

void FUN_1090d0d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_1090d0dbc(param_1,param_4);
    FUN_1090d0df4(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001090d0f68(&uStack_40);
  return;
}



/* Entry: 1090d0dbc; end: 1090d0df3;  */

void FUN_1090d0dbc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    plVar1 = param_1 + 2;
    FUN_1090d0e3c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2);
  }
  else {
    FUN_1090d0e28();
    plVar1 = param_1 + 2;
    func_0x0001090d0e7c();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 1090d0df4; end: 1090d0e27;  */

void FUN_1090d0df4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x0001090d0e7c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1090d0e28; end: 1090d0e3b;  */

void FUN_1090d0e28(void)

{
  func_0x000104bd47e8(&UNK_10f5500f4);
  FUN_1090d0e60();
  return;
}



/* Entry: 1090d0e3c; end: 1090d0e5f;  */

void FUN_1090d0e3c(void)

{
  FUN_1090d0e60();
  return;
}



/* Entry: 1090d0e60; end: 1090d0e8f;  */

void FUN_1090d0e60(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  FUN_1090d0e90();
  return;
}



/* Entry: 1090d0e90; end: 1090d0fcb;  */

long * FUN_1090d0e90(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_50;
  long **pplStack_48;
  long **pplStack_40;
  undefined1 uStack_38;
  long *plStack_30;
  long *plStack_28;
  
  pplStack_48 = &plStack_30;
  pplStack_40 = &plStack_28;
  plVar5 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      plVar1 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    *plVar5 = lVar4;
    plVar5 = plVar5 + 1;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  plStack_30 = param_4;
  plStack_28 = plVar5;
  func_0x0001090d0f24(&uStack_50);
  return plVar5;
}



/* Entry: 1090d0fcc; end: 1090d0fd3;  */

void FUN_1090d0fcc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -8;
    FUN_1090d10e4();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 1090d0fd4; end: 1090d103f;  */

void FUN_1090d0fd4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -8;
    FUN_1090d10e4();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 1090d1040; end: 1090d109b;  */

void FUN_1090d1040(undefined8 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)0x18;
  __Znwm();
  uVar1 = *param_2;
  uVar2 = *param_3;
  *puVar3 = &PTR_DAT_110ad9708;
  puVar3[1] = 1;
  *(undefined4 *)(puVar3 + 2) = uVar1;
  *(undefined1 *)((long)puVar3 + 0x14) = uVar2;
  *param_1 = puVar3;
  return;
}



/* Entry: 1090d109c; end: 1090d10bf;  */

void FUN_1090d109c(void)

{
  func_0x0001090d1594();
  FUN_1090d10c0();
  return;
}



/* Entry: 1090d10c0; end: 1090d10e3;  */

void FUN_1090d10c0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090d1564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090d10e4; end: 1090d1107;  */

void FUN_1090d10e4(void)

{
  func_0x0001090d1594();
  FUN_1090d1108();
  return;
}



/* Entry: 1090d1108; end: 1090d112b;  */

void FUN_1090d1108(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090d1564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090d112c; end: 1090d11b3;  */

void FUN_1090d112c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x68;
  __Znwm();
  uVar2 = param_2[2];
  uVar4 = param_2[1];
  uVar3 = *param_2;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *puVar1 = &PTR_DAT_110adb908;
  puVar1[2] = 0x32aaaba7;
  puVar1[1] = 1;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  puVar1[0xb] = uVar4;
  puVar1[10] = uVar3;
  puVar1[0xc] = uVar2;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_38 = 0;
  *param_1 = puVar1;
  func_0x0001090d100c(&uStack_38);
  return;
}



/* Entry: 1090d11b4; end: 1090d11d7;  */

void FUN_1090d11b4(void)

{
  func_0x0001090d1594();
  FUN_1090d11d8();
  return;
}



/* Entry: 1090d11d8; end: 1090d11fb;  */

void FUN_1090d11d8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090d1564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090d11fc; end: 1090d123f;  */

void FUN_1090d11fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 auStack_38 [2];
  undefined8 uStack_28;
  
  func_0x0001090d1568();
  uStack_28 = extraout_x8;
  FUN_1090d1240(auStack_38);
  *unaff_x19 = auStack_38[0];
  func_0x0001090d1548(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  pcStack_48 = FUN_1090d1240;
  puStack_50 = &stack0xfffffffffffffff0;
  FUN_1090d127c(&uStack_51,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1090d1240; end: 1090d127b;  */

void FUN_1090d1240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uStack_11;
  
  FUN_1090d127c(&uStack_11,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1090d127c; end: 1090d134b;  */

void FUN_1090d127c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined1 *puVar5;
  long lVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 *puStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_70 [16];
  long lStack_60;
  undefined8 uStack_58;
  
  puVar5 = auStack_70;
  func_0x0001090d1568();
  uStack_58 = extraout_x8;
  FUN_1090d1368(auStack_70,1);
  FUN_1090d13c0(lStack_60,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar6 = lStack_60;
  lStack_60 = 0;
  FUN_1090d134c(lVar6 + 0x18);
  func_0x0001090d1530(auStack_70);
  func_0x0001090d1548(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001090d1530();
  func_0x0001090d158c();
  *extraout_x8_00 = puVar5;
  extraout_x8_00[1] = lVar6;
  puVar2 = (undefined1 *)0x0;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5 + 8;
  }
  if ((puVar2 != (undefined1 *)0x0) &&
     ((*(long *)(puVar2 + 8) == 0 || (*(long *)(*(long *)(puVar2 + 8) + 8) == -1)))) {
    pcStack_78 = FUN_1090d134c;
    lStack_88 = extraout_x8_00[1];
    if (lStack_88 != 0) {
      plVar1 = (long *)(lStack_88 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puStack_90 = puVar5;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000107c278e4(puVar2,&puStack_90);
    func_0x000107c278ec(&puStack_90);
    return;
  }
  return;
}



/* Entry: 1090d134c; end: 1090d1367;  */

void FUN_1090d134c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + 8;
  }
  if ((lVar2 != 0) && ((*(long *)(lVar2 + 8) == 0 || (*(long *)(*(long *)(lVar2 + 8) + 8) == -1))))
  {
    lStack_18 = param_1[1];
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lStack_20 = param_2;
    func_0x000107c278e4(lVar2,&lStack_20);
    func_0x000107c278ec(&lStack_20);
    return;
  }
  return;
}



/* Entry: 1090d1368; end: 1090d138f;  */

long FUN_1090d1368(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_1090d1390();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 1090d1390; end: 1090d13bf;  */

undefined8 * FUN_1090d1390(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xe38e38e38e38e4) {
    puVar1 = (undefined8 *)(param_2 * 0x120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad9650;
  FUN_1090d142c(param_1 + 3);
  return param_1;
}



/* Entry: 1090d13c0; end: 1090d1403;  */

undefined8 * FUN_1090d13c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110ad9650;
  FUN_1090d142c(param_1 + 3);
  return param_1;
}



/* Entry: 1090d1404; end: 1090d1407;  */

void FUN_1090d1404(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090d1408; end: 1090d141b;  */

void FUN_1090d1408(void)

{
  FUN_1090d14b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090d141c; end: 1090d142b;  */

void FUN_1090d141c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001090d1424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1090d142c; end: 1090d14b3;  */

void FUN_1090d142c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_98 [72];
  
  _memcpy(auStack_98,param_8,0x48);
  FUN_1090e8c28(param_1,param_2,param_3,param_4,param_5,param_6,param_7,auStack_98);
  return;
}



/* Entry: 1090d14b4; end: 1090d14c3;  */

void FUN_1090d14b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad9650;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1090d14c4; end: 1090d152f;  */

void FUN_1090d14c4(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_20;
  long lStack_18;
  
  if ((param_2 != 0) &&
     ((*(long *)(param_2 + 8) == 0 || (*(long *)(*(long *)(param_2 + 8) + 8) == -1)))) {
    lStack_18 = *(long *)(param_1 + 8);
    if (lStack_18 != 0) {
      plVar1 = (long *)(lStack_18 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_20 = param_3;
    func_0x000107c278e4(param_2,&uStack_20);
    func_0x000107c278ec(&uStack_20);
    return;
  }
  return;
}



/* Entry: 1090d1530; end: 1090d160f;  */

void FUN_1090d1530(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1090d1610; end: 1090d165f;  */

undefined8 * FUN_1090d1610(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad96a0;
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    __ZdlPv();
  }
  FUN_1090d2ed4(param_1 + 0xe);
  FUN_1090d2d6c(param_1 + 7);
  func_0x00010b99d89c(param_1 + 2);
  return param_1;
}



/* Entry: 1090d1660; end: 1090d1663;  */

undefined8 * FUN_1090d1660(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ad96a0;
  if (param_1[0x10] != 0) {
    param_1[0x11] = param_1[0x10];
    __ZdlPv();
  }
  FUN_1090d2ed4(param_1 + 0xe);
  FUN_1090d2d6c(param_1 + 7);
  func_0x00010b99d89c(param_1 + 2);
  return param_1;
}



/* Entry: 1090d1664; end: 1090d1677;  */

void FUN_1090d1664(void)

{
  FUN_1090d1610();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1090d1678; end: 1090d16af;  */

void FUN_1090d1678(void)

{
  undefined1 auStack_28 [8];
  
  func_0x00010b99f5f8(auStack_28);
  func_0x0001090d30c4();
  func_0x0001090d319c();
  return;
}



/* Entry: 1090d16b0; end: 1090d1da7;  */

void FUN_1090d16b0(ulong **param_1,long param_2,ulong **param_3,undefined8 param_4,long param_5,
                  int param_6,ulong **param_7,int param_8)

{
  undefined4 uVar1;
  undefined1 uVar2;
  byte *pbVar3;
  long **pplVar4;
  long **pplVar5;
  ulong **ppuVar6;
  ulong **ppuVar7;
  ulong **ppuVar8;
  code *extraout_x9;
  code *extraout_x9_00;
  ulong **unaff_x21;
  bool bVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong *puVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uStack_4f8;
  long lStack_4f0;
  undefined8 **ppuStack_4e8;
  ulong **ppuStack_4e0;
  long **pplStack_4d8;
  undefined1 *puStack_4d0;
  code *pcStack_4c8;
  undefined1 *puStack_4c0;
  undefined4 uStack_4b8;
  uint uStack_4b4;
  long lStack_4b0;
  int iStack_4a4;
  undefined8 *puStack_4a0;
  undefined8 *puStack_498;
  undefined8 *puStack_490;
  undefined8 *puStack_488;
  ulong *puStack_480;
  ulong *puStack_478;
  uint uStack_46c;
  long lStack_468;
  ulong uStack_460;
  undefined8 uStack_458;
  undefined1 auStack_448 [8];
  undefined8 auStack_440 [3];
  undefined1 auStack_428 [8];
  undefined8 auStack_420 [2];
  ulong *apuStack_410 [19];
  undefined1 auStack_378 [8];
  undefined8 auStack_370 [3];
  undefined1 auStack_358 [8];
  undefined8 auStack_350 [2];
  ulong *apuStack_340 [19];
  ulong *puStack_2a8;
  char cStack_2a0;
  long *plStack_298;
  long alStack_290 [4];
  int iStack_270;
  int iStack_260;
  int iStack_25c;
  char cStack_250;
  char cStack_24f;
  ulong *puStack_248;
  ulong uStack_240;
  undefined8 uStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 uStack_218;
  undefined4 uStack_1b0;
  ulong *puStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  ulong auStack_190 [16];
  long lStack_110;
  ulong *apuStack_108 [2];
  long lStack_f8;
  uint uStack_f0;
  long lStack_e8;
  uint uStack_dc;
  uint uStack_d8;
  byte bStack_d4;
  byte bStack_d0;
  char cStack_cf;
  ulong *puStack_c8;
  byte abStack_c0 [72];
  byte bStack_78;
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  (**(code **)(**(long **)(param_2 + 0x70) + 0x48))(&plStack_298);
  if ((*(int *)param_3 == 0x6d6f6f66) && (*(char *)(param_2 + 0x60) == '\x01')) {
    plVar17 = *(long **)(param_2 + 0x70);
    FUN_1090d1e7c(param_2 + 0x38);
    uVar19 = *(undefined8 *)(param_2 + 0x58);
    FUN_1090d1e7c(param_2 + 0x38);
    (**(code **)(*plVar17 + 0x20))
              (&puStack_248,plVar17,uVar19,*(undefined8 *)(param_2 + 0x48),
               *(undefined8 *)(param_2 + 0x68),0);
    func_0x0001090d3128();
    (*extraout_x9)(&puStack_c8);
    uVar2 = abStack_c0[0] == 1;
    if ((bool)uVar2) {
      ppuVar7 = (ulong **)&DAT_10f54d7cf;
      ppuVar8 = &puStack_c8;
      FUN_1090d1da8(param_1,&DAT_10f54d7cf,ppuVar8);
    }
    else {
      ppuVar7 = *(ulong ***)(param_2 + 0x30);
      ppuVar8 = (ulong **)((long)param_3[2] + (long)param_3[1]);
      (**(code **)(**(long **)(param_2 + 0x70) + 0x20))
                (&puStack_1a8,*(long **)(param_2 + 0x70),ppuVar7,ppuVar8,param_3[3],0);
      func_0x0001090d3164();
      uStack_238 = uStack_198;
      uStack_240 = uStack_1a0;
      puStack_248 = puStack_1a8;
      uStack_230 = auStack_190[0];
      puStack_1a8 = (ulong *)0x0;
      func_0x0001090d301c(&puStack_1a8);
    }
    FUN_1090ab420(&puStack_c8);
    func_0x0001090d3164();
    unaff_x21 = param_1;
    if ((abStack_c0[0] & 1) != 0) goto LAB_1090d1c8c;
  }
  func_0x0001090d3128();
  ppuVar7 = param_7;
  (*extraout_x9_00)(&puStack_2a8);
  uVar2 = cStack_2a0 == '\x01';
  if ((bool)uVar2) {
    ppuVar7 = (ulong **)&UNK_10f550166;
    ppuVar8 = &puStack_2a8;
    func_0x0001090d30a4();
  }
  else {
    (**(code **)(*plStack_298 + 0x28))(&puStack_c8);
    uVar2 = puStack_c8 == (ulong *)0x1;
    if ((bool)uVar2) {
      lVar14 = 0;
      uStack_46c = 0;
      lStack_468 = 0;
      iVar12 = 0;
      puStack_488 = auStack_370;
      puStack_498 = auStack_440;
      puStack_490 = auStack_350;
      puStack_4a0 = auStack_420;
      puStack_478 = auStack_190;
      puStack_480 = &uStack_230;
      uStack_458 = 0x10;
      uStack_460 = 0;
LAB_1090d18d0:
      do {
        (**(code **)(*plStack_298 + 0x30))(&lStack_110);
        uVar2 = lStack_110 == 1;
        if (!(bool)uVar2) {
          ppuVar7 = (ulong **)&DAT_10f54d7eb;
          ppuVar8 = apuStack_108;
          func_0x0001090d30a4();
LAB_1090d1c78:
          func_0x0001090d30f8();
          break;
        }
        uVar2 = cStack_cf == '\x01';
        if ((bool)uVar2) {
          if ((param_8 != 0) && ((iVar12 != 0 || ((bStack_78 & 1) != 0)))) {
            uStack_240 = (ulong)*(uint *)(param_5 + 4) | 0x100000000;
            uStack_238 = *(undefined8 *)(param_5 + 8);
            lStack_220 = lStack_468 + lVar14;
            puStack_248 = (ulong *)0x0;
            uStack_218 = 1;
            ppuVar8 = &puStack_248;
            uStack_230 = uStack_240;
            lStack_228 = lVar14;
            (**(code **)(*param_3[6] + 0x10))(param_3[6],param_7,ppuVar8);
            ppuVar7 = param_7;
          }
          func_0x0001090d3088(param_3[1]);
          goto LAB_1090d1c78;
        }
        if ((param_6 == 1) && ((bStack_d0 & 1) != 0)) {
          func_0x0001090d30f8();
          goto LAB_1090d18d0;
        }
        iVar12 = iVar12 + 1;
        iStack_4a4 = param_8;
        if (bStack_78 == 1) {
          pbVar3 = abStack_c0;
          FUN_1090d3700(pbVar3,iVar12);
          uStack_4b4 = (uint)pbVar3;
        }
        else if (param_6 == 1) {
          uStack_4b4 = 1;
        }
        else {
          uStack_4b4 = (uint)bStack_d4;
        }
        uVar20 = (ulong)uStack_f0;
        lVar18 = lStack_e8 + (ulong)uStack_dc;
        puStack_1a8 = puStack_478;
        uStack_198 = uStack_458;
        uStack_1a0 = uStack_460;
        lStack_4b0 = lVar14;
        func_0x0001090f5d10(&puStack_1a8,uVar20);
        uStack_1b0 = *(undefined4 *)(param_5 + 4);
        puStack_248 = puStack_480;
        uStack_238 = uStack_458;
        uStack_240 = uStack_460;
        func_0x0001090f5f34(&puStack_248,uStack_dc);
        if (param_6 == 2) {
          puVar15 = param_3[6];
          uVar1 = *(undefined4 *)(param_5 + 4);
          func_0x0001090f5d34(auStack_358,&puStack_1a8);
          func_0x0001090f5fb0(auStack_378,&puStack_248);
          puStack_4c0 = auStack_378;
          ppuVar7 = apuStack_108;
          FUN_1090d1e94(apuStack_340,ppuVar7,uVar1,lVar18,uVar20,1,uStack_4b4 & 1,auStack_358);
          ppuVar6 = apuStack_340;
          ppuVar8 = apuStack_340;
          func_0x0001090d317c(*(undefined8 *)(*puVar15 + 8),puVar15);
          puVar11 = puStack_488;
          puVar16 = puStack_490;
        }
        else {
          iVar10 = 0;
          for (uVar13 = 1; uVar13 < uStack_d8; uVar13 = uVar13 + 1) {
            (**(code **)(*plStack_298 + 0x30))(alStack_290);
            uVar2 = alStack_290[0] == 1;
            if (!(bool)uVar2) {
              ppuVar8 = apuStack_108;
              ppuVar7 = (ulong **)&DAT_10f54d7eb;
              FUN_1090d1da8(param_1,&DAT_10f54d7eb,ppuVar8);
LAB_1090d1bb4:
              func_0x0001090d3154();
              bVar9 = false;
              lVar14 = lStack_4b0;
              goto LAB_1090d1bc8;
            }
            uVar2 = cStack_24f == '\x01';
            if ((bool)uVar2) {
              ppuVar7 = (ulong **)&UNK_10f55019d;
              FUN_1090d1678(param_1,&UNK_10f55019d);
              goto LAB_1090d1bb4;
            }
            if (cStack_250 == '\x01') {
              iVar10 = iVar10 + 1;
            }
            else {
              iVar12 = iVar12 + 1;
              uVar20 = (ulong)(uint)(iStack_270 + (int)uVar20);
              lVar18 = lVar18 + (ulong)(uint)(iStack_25c + iStack_260);
              func_0x0001090f5d10(&puStack_1a8);
              func_0x0001090f5f34(&puStack_248,iStack_25c);
            }
            func_0x0001090d3154();
          }
          puVar15 = param_3[6];
          uStack_4b8 = *(undefined4 *)(param_5 + 4);
          iVar10 = uStack_d8 - iVar10;
          func_0x0001090f5d34(auStack_428,&puStack_1a8);
          func_0x0001090f5fb0(auStack_448,&puStack_248);
          puStack_4c0 = auStack_448;
          ppuVar7 = apuStack_108;
          FUN_1090d1e94(apuStack_410,ppuVar7,uStack_4b8,lVar18,uVar20,iVar10,uStack_4b4 & 1,
                        auStack_428);
          ppuVar6 = apuStack_410;
          ppuVar8 = apuStack_410;
          func_0x0001090d317c(*(undefined8 *)(*puVar15 + 8),puVar15);
          puVar11 = puStack_498;
          puVar16 = puStack_4a0;
        }
        func_0x0001090e52b0(ppuVar6);
        func_0x0001090f5fe0(puVar11);
        func_0x0001090f5d40(puVar16);
        uVar2 = (uStack_46c & 1) == 0;
        lVar14 = lStack_4b0;
        if ((bool)uVar2) {
          lVar14 = lStack_f8;
        }
        lStack_468 = lStack_468 + uVar20;
        uStack_46c = 1;
        bVar9 = true;
LAB_1090d1bc8:
        param_8 = iStack_4a4;
        func_0x0001090f6004(&puStack_248);
        func_0x000108133664(&puStack_1a8);
        func_0x0001090d30f8();
      } while (bVar9);
    }
    else {
      ppuVar7 = (ulong **)&UNK_10f550181;
      ppuVar8 = (ulong **)abStack_c0;
      func_0x0001090d30a4();
    }
    unaff_x21 = &puStack_c8;
    func_0x0001090d3030(unaff_x21);
  }
  FUN_1090ab420(&puStack_2a8);
LAB_1090d1c8c:
  pplVar4 = &plStack_298;
  FUN_1090d2fdc();
  func_0x0001090d31c0(uStack_70);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001090e52b0(apuStack_410);
    func_0x0001090e5d44(auStack_440[0]);
    func_0x0001090e5ca4(auStack_420[0]);
    func_0x0001090f6004(&puStack_248);
    func_0x000108133664(&puStack_1a8);
    func_0x0001090d30f8();
    func_0x0001090d3030(&puStack_c8);
    FUN_1090ab420(&puStack_2a8);
    pplVar5 = &plStack_298;
    FUN_1090d2fdc(pplVar5);
    func_0x0001090d314c();
    pcStack_4c8 = FUN_1090d1da8;
    ppuVar6 = ppuVar7;
    lStack_4f0 = param_5;
    ppuStack_4e8 = unaff_x21;
    ppuStack_4e0 = param_3;
    pplStack_4d8 = pplVar4;
    puStack_4d0 = &stack0xfffffffffffffff0;
    _strlen(ppuVar7);
    func_0x00010b99fa70(&uStack_4f8,ppuVar8,ppuVar7,ppuVar6);
    FUN_1090d1dfc(pplVar5,uStack_4f8);
    func_0x0001090d319c();
    return;
  }
  return;
}



/* Entry: 1090d1da8; end: 1090d1dfb;  */

void FUN_1090d1da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  _strlen(param_2);
  func_0x00010b99fa70(&uStack_38,param_3,param_2,uVar1);
  FUN_1090d1dfc(param_1,uStack_38);
  func_0x0001090d319c();
  return;
}



/* Entry: 1090d1dfc; end: 1090d1e3f;  */

void FUN_1090d1dfc(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 != 0) {
    do {
      func_0x0001090d3118();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  func_0x0001090d316c();
  return;
}



/* Entry: 1090d1e40; end: 1090d1e7b;  */

undefined8 * FUN_1090d1e40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    *param_2 = 0;
    uVar1 = *param_1;
    *param_1 = uVar2;
    FUN_1090c8060(uVar1);
  }
  return param_1;
}



/* Entry: 1090d1e7c; end: 1090d1e93;  */

void FUN_1090d1e7c(long param_1)

{
  undefined8 *in_x7;
  int extraout_w10;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    func_0x000104bdc2c8();
    uStack_88 = *in_x7;
    lStack_80 = in_x7[1];
    if (lStack_80 != 0) {
      do {
        func_0x0001090d3118();
      } while (extraout_w10 != 0);
    }
    uStack_78 = in_x7[2];
    FUN_1090c7eb4(auStack_a8);
    func_0x0001090e5248(param_1);
    func_0x0001090e5d44(uStack_a0);
    func_0x0001090e5ca4(lStack_80);
    return;
  }
  return;
}



/* Entry: 1090d1e94; end: 1090d1f8f;  */

void FUN_1090d1e94(undefined8 param_1)

{
  long lVar1;
  undefined8 *in_x7;
  int extraout_w10;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  uStack_78 = *in_x7;
  lVar1 = in_x7[1];
  if (lVar1 != 0) {
    do {
      func_0x0001090d3118();
    } while (extraout_w10 != 0);
  }
  uStack_68 = in_x7[2];
  lStack_70 = lVar1;
  FUN_1090c7eb4(auStack_98);
  func_0x0001090e5248(param_1);
  func_0x0001090e5d44(uStack_90);
  func_0x0001090e5ca4(lStack_70);
  return;
}



/* Entry: 1090d1f90; end: 1090d2c8f;  */

void FUN_1090d1f90(undefined1 *param_1,long param_2,ulong param_3,long param_4,long *param_5,
                  long *param_6)

{
  long *plVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  char cVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  long *plVar11;
  int *piVar12;
  undefined8 *puVar13;
  uint uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar15;
  long lVar16;
  undefined4 *puVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined4 uStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  ulong uStack_2e0;
  long lStack_2d8;
  long *plStack_2d0;
  undefined1 auStack_2c8 [24];
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  undefined **appuStack_298 [2];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  int aiStack_228 [2];
  long lStack_220;
  long lStack_218;
  undefined1 auStack_210 [64];
  undefined8 *puStack_1d0;
  uint uStack_1c8;
  undefined2 uStack_1c4;
  undefined2 uStack_1c2;
  long *plStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined1 uStack_1a8;
  long lStack_1a0;
  undefined1 uStack_198;
  char cStack_190;
  int iStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int iStack_100;
  long lStack_f8;
  uint uStack_f0;
  undefined4 uStack_ec;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = param_3;
  func_0x0001090dd2b0(param_3,param_4,auStack_210,0x40);
  if (uVar19 < 8) {
    bVar8 = *(char *)(param_3 + 0x28) == '\x01';
    uVar9 = bVar8 && uVar19 + param_4 == *(ulong *)(param_3 + 0x20);
    if (bVar8 && *(ulong *)(param_3 + 0x20) <= uVar19 + param_4) {
      puStack_1d0 = (undefined8 *)((ulong)puStack_1d0 & 0xffffffffffffff00);
      uStack_1c8 = uStack_1c8 & 0xffffff00;
      *param_1 = 0;
      param_1[8] = 0;
      *(undefined4 *)(param_1 + 0x10) = 0x100;
      *(undefined8 *)(param_1 + 0x18) = 0;
      FUN_1090ab420(&puStack_1d0);
    }
    else {
      FUN_1090d2c90(param_1);
    }
    goto LAB_1090d2b00;
  }
  func_0x0001090d3140();
  (**(code **)(extraout_x8 + 0x40))(&lStack_230);
  uVar9 = lStack_230 == 1;
  if ((bool)uVar9) {
    uVar19 = lStack_218 + lStack_220;
    puStack_1d0 = (undefined8 *)CONCAT44(puStack_1d0._4_4_,aiStack_228[0]);
    func_0x0001090fd608(auStack_2c8,&puStack_1d0);
    uVar9 = ((aiStack_228[0] == 0x66747970 || aiStack_228[0] == 0x6d6f6f66) ||
            aiStack_228[0] == 0x6d6f6f76) || aiStack_228[0] == 0x73696478;
    if (((aiStack_228[0] == 0x66747970 || aiStack_228[0] == 0x6d6f6f66) ||
        aiStack_228[0] == 0x6d6f6f76) || aiStack_228[0] == 0x73696478) {
      uVar2 = 0;
      if (*(ulong *)(param_3 + 0x20) <= uVar19 + param_4) {
        uVar2 = *(undefined1 *)(param_3 + 0x28);
      }
      uVar9 = *(ulong *)(param_2 + 0x20) == uVar19;
      if (*(ulong *)(param_2 + 0x20) < uVar19) {
        func_0x00010b99da54(param_2 + 0x10,uVar19);
      }
      uVar21 = param_3;
      func_0x0001090dd238(param_3,param_4,uVar19 + param_4,*(undefined8 *)(param_2 + 0x30));
      if ((uVar21 & 1) == 0) {
        func_0x0001090d30ac();
      }
      else {
        plVar11 = *(long **)(param_2 + 0x70);
        (**(code **)(*plVar11 + 0x20))
                  (&lStack_250,plVar11,*(undefined8 *)(param_2 + 0x30),uVar19,param_4,uVar2);
        uVar9 = lStack_250 == 1;
        if ((bool)uVar9) {
          lStack_2f8 = lStack_240;
          uStack_300 = uStack_248;
          lStack_2f0 = lStack_238;
          lVar16 = *param_5;
          lStack_2e8 = param_4;
          uStack_2e0 = param_3;
          if (lVar16 != 0) {
            do {
              func_0x0001090d3118();
            } while (extraout_w10 != 0);
          }
          lStack_c0 = CONCAT44(lStack_c0._4_4_,(int)uStack_300);
          lStack_2d8 = lVar16;
          plStack_2d0 = param_6;
          func_0x0001090fd660(&puStack_1d0,&lStack_c0);
          func_0x0001090e4720(lVar16,&puStack_1d0,lStack_2e8,lStack_2f0 + lStack_2f8);
          func_0x000107c278f4(&puStack_1d0);
          uVar9 = (int)uStack_300 == 0x6d6f6f66;
          if ((bool)uVar9) {
            if ((*(byte *)(param_2 + 0xa0) & 1) == 0) {
              FUN_1090d1678(param_1,&DAT_10f54d89b);
            }
            else {
              puVar4 = *(undefined4 **)(param_2 + 0x88);
              for (puVar17 = *(undefined4 **)(param_2 + 0x80); uVar9 = puVar17 == puVar4,
                  !(bool)uVar9; puVar17 = puVar17 + 0xc) {
                if ((*(byte *)(param_2 + 0xa0) & 1) == 0) goto LAB_1090d2b7c;
                uVar9 = 2;
                if (puVar17[4] != 0x76696465) {
                  uVar9 = puVar17[4] == 0x736f756e;
                }
                FUN_1090d16b0(param_1,param_2,&uStack_300,param_2 + 0x98,puVar17,uVar9,*puVar17,
                              (*(byte *)(param_2 + 0xa4) ^ 0xff) & 1);
                uVar9 = param_1[0x10] == '\x01';
                if (!(bool)uVar9) goto LAB_1090d2ae0;
                FUN_1090ab420(param_1);
              }
LAB_1090d2444:
              func_0x0001090d3088(lStack_2f8);
            }
          }
          else if ((int)uStack_300 == 0x73696478) {
            func_0x0001090d3140();
            (**(code **)(extraout_x8_01 + 0x50))(appuStack_298);
            (**(code **)(*appuStack_298[0] + 0x20))(&ppuStack_e8);
            uVar9 = ppuStack_e8 == (undefined **)0x1;
            if ((bool)uVar9) {
              *(undefined1 *)(param_2 + 0xa4) = 1;
              while( true ) {
                (**(code **)(*appuStack_298[0] + 0x28))(&puStack_1d0);
                uVar9 = puStack_1d0 == (undefined8 *)0x1;
                if (!(bool)uVar9) break;
                uVar9 = cStack_190 == '\x01';
                if (!(bool)uVar9) {
                  func_0x0001090d3100();
                  func_0x0001090d3088(lStack_2f8);
                  goto LAB_1090d24b4;
                }
                lStack_c0 = CONCAT26(uStack_1c2,CONCAT24(uStack_1c4,uStack_1c8));
                plStack_b8 = plStack_1c0;
                lStack_a8 = lStack_1b0;
                lStack_b0 = lStack_1b8;
                lStack_98 = lStack_1a0;
                uStack_90 = uStack_198;
                func_0x0001090d317c(*(undefined8 *)(*plStack_2d0 + 0x10));
                func_0x0001090d3100();
              }
              func_0x0001090d30a4();
              func_0x0001090d3100();
            }
            else {
              func_0x0001090d30a4();
            }
LAB_1090d24b4:
            func_0x0001090d2f68(&ppuStack_e8);
            FUN_1090d2f28(appuStack_298);
          }
          else {
            uVar9 = (int)uStack_300 == 0x6d6f6f76;
            if (!(bool)uVar9) goto LAB_1090d2444;
            func_0x0001090d3140();
            (**(code **)(extraout_x8_00 + 0x38))(&lStack_f8);
            uVar9 = lStack_f8 == 1;
            if ((bool)uVar9) {
              if ((*(byte *)(param_2 + 0xa0) & 1) == 0) {
                *(undefined1 *)(param_2 + 0xa0) = 1;
              }
              lVar16 = *(long *)(param_2 + 0x80);
              *(ulong *)(param_2 + 0x98) = CONCAT44(uStack_ec,uStack_f0);
              *(long *)(param_2 + 0x88) = lVar16;
              plVar11 = (long *)(param_2 + 0x90);
              if ((ulong)((*plVar11 - lVar16) / 0x30) < (ulong)uStack_f0) {
                FUN_1090d2e1c(&puStack_1d0,uStack_f0,0,plVar11);
                func_0x0001090d3190();
                FUN_1090d2e94(&puStack_1d0);
              }
              func_0x00010b99d778(&puStack_1d0,param_2 + 0x10);
              uStack_1a8 = 1;
              if (*(char *)(param_2 + 0x60) == '\0') {
                *(undefined ***)(param_2 + 0x38) = &PTR_DAT_110d7e488;
                *(undefined8 *)(param_2 + 0x40) = 1;
                *(long *)(param_2 + 0x50) = lStack_1b8;
                *(long **)(param_2 + 0x48) = plStack_1c0;
                *(long *)(param_2 + 0x58) = lStack_1b0;
                plStack_1c0 = (long *)0x0;
                lStack_1b8 = 0;
                lStack_1b0 = 0;
                *(undefined1 *)(param_2 + 0x60) = 1;
              }
              else {
                func_0x00010b99d91c(param_2 + 0x38,&puStack_1d0);
              }
              FUN_1090d2d6c(&puStack_1d0);
              uVar19 = 0;
              *(long *)(param_2 + 0x68) = lStack_2e8;
              while( true ) {
                uVar9 = uVar19 == uStack_f0;
                if (uStack_f0 <= uVar19) break;
                func_0x0001090d3140();
                (**(code **)(extraout_x8_02 + 0x28))(&lStack_c0);
                uVar9 = lStack_c0 == 1;
                if (!(bool)uVar9) {
                  func_0x00010b99fa70(&puStack_1d0,&plStack_b8,&UNK_10f55014b,0x1a);
                  func_0x0001090d30c4();
                  func_0x000104bda93c(&puStack_1d0);
LAB_1090d2ad4:
                  func_0x0001090d31a4();
                  goto LAB_1090d2ad8;
                }
                plVar18 = *(long **)(param_2 + 0x88);
                if (plVar18 < *(long **)(param_2 + 0x90)) {
                  plVar18[3] = lStack_a0;
                  plVar18[2] = lStack_a8;
                  plVar18[5] = CONCAT71(uStack_8f,uStack_90);
                  plVar18[4] = lStack_98;
                  plVar18[1] = lStack_b0;
                  *plVar18 = (long)plStack_b8;
                  plVar18 = plVar18 + 6;
                }
                else {
                  lVar20 = *(long *)(param_2 + 0x80);
                  lVar16 = ((long)plVar18 - lVar20) / 0x30;
                  uVar21 = lVar16 + 1;
                  if (0x555555555555555 < uVar21) {
                    func_0x0001090d2d8c();
                    goto LAB_1090d2b88;
                  }
                  uVar5 = ((long)*(long **)(param_2 + 0x90) - lVar20) / 0x30;
                  uVar15 = uVar5 * 2;
                  if (uVar15 < uVar21 || uVar15 - uVar21 == 0) {
                    uVar15 = uVar21;
                  }
                  if (0x2aaaaaaaaaaaaa9 < uVar5) {
                    uVar15 = 0x555555555555555;
                  }
                  FUN_1090d2e1c(&puStack_1d0,uVar15,lVar16,plVar11);
                  plStack_1c0[1] = lStack_b0;
                  *plStack_1c0 = (long)plStack_b8;
                  plStack_1c0[3] = lStack_a0;
                  plStack_1c0[2] = lStack_a8;
                  plStack_1c0[5] = CONCAT71(uStack_8f,uStack_90);
                  plStack_1c0[4] = lStack_98;
                  plStack_1c0 = plStack_1c0 + 6;
                  func_0x0001090d3190();
                  plVar18 = *(long **)(param_2 + 0x88);
                  FUN_1090d2e94(&puStack_1d0);
                }
                *(long **)(param_2 + 0x88) = plVar18;
                uVar14 = 2;
                if ((int)plVar18[-4] != 0x76696465) {
                  uVar14 = (uint)((int)plVar18[-4] == 0x736f756e);
                }
                lStack_2a8 = 0;
                uVar9 = uVar14 - 1 == 1;
                if (uVar14 - 1 < 2) {
                  uStack_308 = 0;
                  uVar21 = 0;
                  while (uVar9 = uVar21 == *(uint *)((long)plVar18 + -0x1c),
                        uVar21 < *(uint *)((long)plVar18 + -0x1c)) {
                    uVar21 = uVar21 + 1;
                    (**(code **)(**(long **)(param_2 + 0x70) + 0x30))
                              (&puStack_1d0,*(long **)(param_2 + 0x70),uVar19,uVar21);
                    puVar13 = puStack_1d0;
                    lVar16 = lStack_2a8;
                    if (puStack_1d0 == (undefined8 *)0x1) {
                      if (uVar14 == 1) {
                        if (iStack_100 == 1) {
                          func_0x0001090d3184(lStack_1b0);
                          lVar16 = 0x48;
                          __Znwm();
                          ppuStack_e8 = &PTR_DAT_110d7e488;
                          uStack_e0 = 1;
                          uStack_d0 = uStack_280;
                          uStack_d8 = uStack_288;
                          uStack_c8 = uStack_278;
                          uStack_280 = 0;
                          uStack_278 = 0;
                          uStack_288 = 0;
                          func_0x0001090e512c();
                          ppuStack_e8 = &PTR_DAT_110d7e488;
                          lStack_270 = lVar16;
                          _free(uStack_c8);
                          if (lStack_270 != 0) {
                            plVar1 = (long *)(lStack_270 + 8);
                            do {
                              cVar6 = '\x01';
                              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                              if (bVar8) {
                                *plVar1 = *plVar1 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                          }
                          lStack_2a0 = lStack_270;
                          FUN_1090c6828(&lStack_270);
                          func_0x0001090d30d8();
                          FUN_1090d1e40(&lStack_2a8,&lStack_2a0);
                          FUN_1090c803c(&lStack_2a0);
                        }
                      }
                      else if (uVar14 == 2) {
                        if (iStack_100 == 0) {
                          func_0x0001090d3184(lStack_1b8);
                          if (iStack_128 != 0) {
                            NEON_ucvtf(uStack_124);
                            NEON_ucvtf(uStack_120);
                          }
                          lVar16 = 0x80;
                          __Znwm();
                          lStack_268 = plVar18[-2];
                          lStack_270 = plVar18[-3];
                          lStack_260 = plVar18[-1];
                          ppuStack_e8 = &PTR_DAT_110d7e488;
                          uStack_e0 = 1;
                          uStack_d0 = uStack_280;
                          uStack_d8 = uStack_288;
                          uStack_c8 = uStack_278;
                          uStack_280 = 0;
                          uStack_278 = 0;
                          uStack_288 = 0;
                          func_0x0001090e5074();
                          ppuStack_e8 = &PTR_DAT_110d7e488;
                          lStack_2a0 = lVar16;
                          _free(uStack_c8);
                          if (lStack_2a0 != 0) {
                            plVar1 = (long *)(lStack_2a0 + 8);
                            do {
                              cVar6 = '\x01';
                              bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                              if (bVar8) {
                                *plVar1 = *plVar1 + 1;
                                cVar6 = ExclusiveMonitorsStatus();
                              }
                            } while (cVar6 != '\0');
                          }
                          lStack_2b0 = lStack_2a0;
                          FUN_1090cbaf0(&lStack_2a0);
                          appuStack_298[0] = &PTR_DAT_110d7e488;
                          _free(uStack_278);
                          FUN_1090d1e40(&lStack_2a8,&lStack_2b0);
                          uVar10 = SUB84(&lStack_2b0,0);
                          FUN_1090c803c();
                          if (*(char *)(param_2 + 0x78) == '\x01') {
                            func_0x0001090d3140();
                            (**(code **)(extraout_x8_03 + 0x58))();
                            uStack_308 = uVar10;
                          }
                        }
                      }
                      else if (lStack_2a8 != 0) {
                        lStack_2a8 = 0;
                        plVar1 = (long *)(lVar16 + 8);
                        do {
                          lVar16 = *plVar1;
                          cVar6 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
                          if (bVar8) {
                            *plVar1 = lVar16 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (lVar16 + -1 == 0) {
                          func_0x0001090d30cc();
                        }
                      }
                    }
                    else {
                      func_0x00010b99fa70(&ppuStack_e8,&uStack_1c8,&DAT_10f54d87f,0x1b);
                      func_0x0001090d30c4();
                      func_0x000104bda93c(&ppuStack_e8);
                    }
                    func_0x0001090d2fb8(&puStack_1d0);
                    uVar9 = puVar13 == (undefined8 *)0x1;
                    if (!(bool)uVar9) {
                      func_0x0001090d30f0();
                      goto LAB_1090d2ad4;
                    }
                  }
                }
                else {
                  uStack_308 = 0;
                }
                lVar16 = lStack_2a8;
                lVar20 = plVar18[-5];
                uVar10 = (undefined4)plVar18[-6];
                uVar3 = *(uint *)((long)plVar18 + -0x2c);
                puVar13 = (undefined8 *)0x48;
                __Znwm();
                puVar13[1] = 1;
                *puVar13 = &PTR_DAT_110ada450;
                *(uint *)(puVar13 + 2) = uVar14;
                puVar13[3] = uVar19;
                *(undefined4 *)(puVar13 + 4) = uVar10;
                puVar13[5] = lVar20;
                puVar13[6] = (ulong)uVar3 | 0x100000000;
                if (lVar16 != 0) {
                  do {
                    func_0x0001090d3118();
                  } while (extraout_w10_00 != 0);
                }
                puVar13[7] = lVar16;
                *(undefined4 *)(puVar13 + 8) = uStack_308;
                puStack_1d0 = puVar13;
                (**(code **)*plStack_2d0)(plStack_2d0,uVar10,&puStack_1d0);
                FUN_1090d16b0(param_1,param_2,&uStack_300,&uStack_f0,plVar18 + -6,uVar14,uVar10,1);
                if ((param_1[0x10] & 1) == 0) {
                  func_0x0001090d3174();
                  func_0x0001090d30f0();
                  goto LAB_1090d2ad4;
                }
                FUN_1090ab420(param_1);
                func_0x0001090d3174();
                func_0x0001090d30f0();
                func_0x0001090d31a4();
                uVar19 = uVar19 + 1;
              }
              func_0x0001090d3088(lStack_2f8);
            }
            else {
              func_0x0001090d30a4();
            }
LAB_1090d2ad8:
            func_0x0001090d2f90(&lStack_f8);
          }
LAB_1090d2ae0:
          FUN_109097110(&lStack_2d8);
        }
        else {
          FUN_1090d3480();
          puVar13 = &uStack_248;
          func_0x00010b99fd60(puVar13,plVar11);
          if ((int)puVar13 == 0) {
            func_0x00010b99fa70(&puStack_1d0,&uStack_248,&UNK_10f5501d7,0x17);
            func_0x0001090d30c4();
            func_0x000104bda93c(&puStack_1d0);
          }
          else {
            func_0x0001090d30ac();
          }
        }
        FUN_1090d301c(&lStack_250);
      }
    }
    else {
      func_0x0001090d2cb8(param_1,uVar19);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c8);
  }
  else {
    FUN_1090d3480();
    piVar12 = aiStack_228;
    func_0x00010b99fd60(piVar12,uVar19);
    if ((int)piVar12 == 0) {
      func_0x0001090d30c4();
    }
    else {
      FUN_1090d2c90(param_1);
    }
  }
  FUN_1090d301c(&lStack_230);
LAB_1090d2b00:
  func_0x0001090d31c0(uStack_88);
  if ((bool)uVar9) {
    return;
  }
  ___stack_chk_fail();
LAB_1090d2b7c:
  func_0x000104bdc2c8();
LAB_1090d2b88:
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x1090d2b8c);
  (*pcVar7)();
}



/* Entry: 1090d2c90; end: 1090d2cdf;  */

void FUN_1090d2c90(long param_1)

{
  func_0x0001090d31ac();
  *(undefined4 *)(param_1 + 0x10) = 0x10000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x0001090d316c();
  return;
}



/* Entry: 1090d2ce0; end: 1090d2d6b;  */

void FUN_1090d2ce0(long param_1,long param_2,int param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  lVar1 = param_2;
  func_0x0001090dd054(param_2,param_4);
  if (((*(char *)(param_2 + 0x28) == '\x01') && (param_3 != 0)) &&
     (*(ulong *)(param_2 + 0x20) <= (ulong)(lVar1 + param_4))) {
    func_0x00010b99f5f8(auStack_38,&DAT_10f54d8e2);
    func_0x0001090d30c4();
    func_0x0001090d319c();
    return;
  }
  func_0x0001090d31ac();
  *(undefined4 *)(param_1 + 0x10) = 0x10000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  func_0x0001090d316c();
  return;
}



/* Entry: 1090d2d6c; end: 1090d2d9f;  */

void FUN_1090d2d6c(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    func_0x00010b99d89c();
  }
  return;
}



/* Entry: 1090d2da0; end: 1090d2e1b;  */

void FUN_1090d2da0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar3 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar4 = (undefined8 *)(param_2[1] + (((long)puVar1 - (long)puVar3) / -0x30) * 0x30);
  puVar5 = puVar4;
  for (; puVar3 != puVar1; puVar3 = puVar3 + 6) {
    uVar7 = puVar3[1];
    uVar6 = *puVar3;
    uVar8 = puVar3[2];
    uVar10 = puVar3[5];
    uVar9 = puVar3[4];
    puVar5[3] = puVar3[3];
    puVar5[2] = uVar8;
    puVar5[5] = uVar10;
    puVar5[4] = uVar9;
    puVar5[1] = uVar7;
    *puVar5 = uVar6;
    puVar5 = puVar5 + 6;
  }
  param_2[1] = puVar4;
  lVar2 = *param_1;
  *param_1 = (long)puVar4;
  param_1[1] = lVar2;
  param_2[1] = lVar2;
  lVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar2;
  lVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 1090d2e1c; end: 1090d2e93;  */

long * FUN_1090d2e1c(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x555555555555555 < param_2) {
      func_0x000104bd35f4();
      lVar1 = param_1[2];
      while (lVar1 != param_1[1]) {
        lVar1 = lVar1 + -0x30;
        param_1[2] = lVar1;
      }
      if (*param_1 != 0) {
        __ZdlPv();
      }
      return param_1;
    }
    lVar1 = param_2 * 0x30;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0x30;
  *param_1 = lVar1;
  param_1[1] = lVar2;
  param_1[2] = lVar2;
  param_1[3] = lVar1 + param_2 * 0x30;
  return param_1;
}



/* Entry: 1090d2e94; end: 1090d2ed3;  */

long * FUN_1090d2e94(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  while (lVar1 != param_1[1]) {
    lVar1 = lVar1 + -0x30;
    param_1[2] = lVar1;
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1090d2ed4; end: 1090d2efb;  */

undefined8 * FUN_1090d2ed4(undefined8 *param_1)

{
  FUN_1090d2efc(*param_1);
  return param_1;
}



/* Entry: 1090d2efc; end: 1090d2f27;  */

void FUN_1090d2efc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001090d2f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 1090d2f28; end: 1090d2f67;  */

long * FUN_1090d2f28(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001090d30cc();
    }
  }
  return param_1;
}



/* Entry: 1090d2f68; end: 1090d2fdb;  */

void FUN_1090d2f68(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}



/* Entry: 1090d2fdc; end: 1090d301b;  */

long * FUN_1090d2fdc(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (*param_1 != 0) {
    plVar1 = (long *)(*param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x0001090d30cc();
    }
  }
  return param_1;
}



/* Entry: 1090d301c; end: 1090d3053;  */

void FUN_1090d301c(long *param_1)

{
  if (*param_1 == 2) {
    func_0x0001003adc0c(param_1 + 1);
    func_0x000104bda960();
    return;
  }
  return;
}


