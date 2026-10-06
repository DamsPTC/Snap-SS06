/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aa39f60; end: 10aa39f63;  */

undefined8 * FUN_10aa39f60(undefined8 *param_1)

{
  FUN_10a40bb4c(param_1 + 10);
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa39f64; end: 10aa39f77;  */

void FUN_10aa39f64(void)

{
  FUN_10aa39ee4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa39f78; end: 10aa3a273;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3a1f4) */
/* WARNING: Removing unreachable block (ram,0x00010aa3a204) */

void FUN_10aa39f78(undefined8 param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *******pppppppuVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 ******ppppppuStack_80;
  ulong uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  byte bStack_69;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  plVar6 = *(long **)(param_2 + 0x48);
  if ((plVar6 != (long *)0x0) && (__ZNSt3__119__shared_weak_count4lockEv(), plVar6 != (long *)0x0))
  {
    plVar10 = *(long **)(param_2 + 0x40);
    plVar1 = plVar6 + 1;
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    if (plVar10 != (long *)0x0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_48,&UNK_10f68b669,10);
      plVar6 = plVar10;
      (**(code **)(*plVar10 + 0xf8))(plVar10,0x3f7860c77ce5b69d);
      if (plVar6 == (long *)0x0) {
        puVar11 = &UNK_10f68b67e;
      }
      else {
        puVar11 = &UNK_10f68b67e;
        if (((*(byte *)(plVar6 + 0x77) & 1) == 0) &&
           (puVar11 = &UNK_10f68b674, (*(byte *)(plVar6[0x4a] + 0x3d) & 1) != 0)) {
          puVar11 = &UNK_10f68b67e;
        }
      }
      puVar7 = puVar11;
      _strlen(puVar11);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_48,puVar11,puVar7);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_48,": ",2);
      lVar8 = plVar10[0x2d];
      uVar2 = *(ulong *)(lVar8 + 0x170);
      lVar9 = *(long *)(lVar8 + 0x168);
      if (-1 < (char)*(byte *)(lVar8 + 0x17f)) {
        uVar2 = (ulong)*(byte *)(lVar8 + 0x17f);
        lVar9 = lVar8 + 0x168;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_48,lVar9,uVar2);
    }
  }
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  if (*(long *)(param_2 + 0x50) != 0) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_60,&UNK_10f68b687,0xd);
    FUN_10aa3a274(&ppppppuStack_80,*(undefined8 *)(param_2 + 0x50));
    pppppppuVar5 = (undefined8 *******)ppppppuStack_80;
    if (-1 < (char)bStack_69) {
      uStack_78 = (ulong)bStack_69;
      pppppppuVar5 = &ppppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_60,pppppppuVar5,uStack_78);
    if ((char)bStack_69 < '\0') {
      __ZdlPv(ppppppuStack_80);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (&uStack_60,&DAT_10f2da10d,1);
  }
  bStack_69 = '\x12';
  uStack_70 = 0x7469;
  uStack_78 = 0x4874736143796152;
  ppppppuStack_80 = (undefined8 ******)0x2e73636973796850;
  uStack_6e = 0;
  FUN_10a0ee900(param_1,&UNK_10f68b695,0x48);
  if ((char)bStack_69 < '\0') {
    __ZdlPv(ppppppuStack_80);
  }
  return;
}



/* Entry: 10aa3a274; end: 10aa3a467;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3a42c) */

void FUN_10aa3a274(undefined8 param_1,long param_2,ulong param_3)

{
  long *plVar1;
  undefined8 ****ppppuVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 ****ppppuVar7;
  long lVar8;
  undefined8 ***pppuStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  long *plStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  undefined7 uStack_58;
  undefined4 uStack_51;
  undefined1 uStack_4d;
  undefined1 uStack_49;
  
  uStack_49 = 0x13;
  uStack_58 = 0x6c676e61697254;
  uStack_51 = 0x74694865;
  uStack_60 = 0x2e73636973796850;
  uStack_4d = 0;
  plStack_70 = (long *)0x0;
  plStack_68 = (long *)0x0;
  plVar6 = *(long **)(param_2 + 0x20);
  if (((plVar6 == (long *)0x0) ||
      (__ZNSt3__119__shared_weak_count4lockEv(), plStack_68 = plVar6, plVar6 == (long *)0x0)) ||
     (plVar6 = *(long **)(param_2 + 0x18), plStack_70 = plVar6, plVar6 == (long *)0x0)) {
    func_0x000107c2b054(&pppuStack_88,"(null)");
    goto LAB_10aa3a380;
  }
  (**(code **)(*plVar6 + 0x38))();
  if (0x7ffffffffffffff7 < param_3) {
    func_0x000109ffde50();
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10aa3a454);
    (*pcVar5)();
  }
  if (param_3 < 0x17) {
    uStack_78 = CONCAT17((char)param_3,(undefined7)uStack_78);
    ppppuVar7 = &pppuStack_88;
    if (param_3 != 0) goto LAB_10aa3a358;
  }
  else {
    ppppuVar2 = (undefined8 ****)0x19;
    if ((param_3 | 7) != 0x17) {
      ppppuVar2 = (undefined8 ****)((param_3 | 7) + 1);
    }
    ppppuVar7 = ppppuVar2;
    __Znwm();
    uStack_78 = (ulong)ppppuVar2 | 0x8000000000000000;
    pppuStack_88 = ppppuVar7;
    uStack_80 = param_3;
LAB_10aa3a358:
    _memmove(ppppuVar7,plVar6,param_3);
  }
  *(undefined1 *)((long)ppppuVar7 + param_3) = 0;
LAB_10aa3a380:
  FUN_10a0ee900(param_1,&UNK_10f68b712,0x3d);
  if ((long)uStack_78 < 0) {
    __ZdlPv(pppuStack_88);
  }
  plVar6 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  return;
}



/* Entry: 10aa3a468; end: 10aa3a4ff;  */

undefined1  [16] FUN_10aa3a468(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x13;
  auVar1._0_8_ = &UNK_10f68bcf1;
  return auVar1;
}



/* Entry: 10aa3a500; end: 10aa3a7fb;  */

void FUN_10aa3a500(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68bcf1,0x13);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b298;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xb5;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3b298;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110b178e0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f410265,FUN_10aa6e724,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&DAT_10f2c4679,FUN_10aa6e8a4,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68b6de,FUN_10aa6e960,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68b6ec,FUN_10aa6ea6c,0);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a0605c4(param_1,&UNK_10f68b6fc,FUN_10aa6eb84,0);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68bcf1,0x13);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa3a7e0);
  (*pcVar6)();
}



/* Entry: 10aa3a7fc; end: 10aa3a83b;  */

undefined8 * FUN_10aa3a7fc(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa3a83c; end: 10aa3a83f;  */

undefined8 * FUN_10aa3a83c(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa3a840; end: 10aa3a853;  */

void FUN_10aa3a840(void)

{
  FUN_10aa3a7fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa3a854; end: 10aa3a91f;  */

undefined1  [16] FUN_10aa3a854(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x16;
  auVar1._0_8_ = &UNK_10f68bd05;
  return auVar1;
}



/* Entry: 10aa3a920; end: 10aa3abb7;  */

void FUN_10aa3a920(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000109887da8(appuStack_c8,&UNK_10f68bd05,0x16);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b430;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3b430;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110bd31d8;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa3ab98;
    FUN_10a054dac(param_1,&UNK_10f68b750,FUN_10aa6ec58,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f65241a,FUN_10aa6edc4,FUN_10aa6ee80);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68a5e3,FUN_10aa6efa8,FUN_10aa6f060);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    uStack_78 = *(undefined8 *)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    uStack_68 = *(undefined8 *)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68bd05,0x16);
      FUN_10a05431c(param_1);
    }
    return;
  }
LAB_10aa3ab98:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa3ab9c);
  (*pcVar6)();
}



/* Entry: 10aa3abb8; end: 10aa3abef;  */

void FUN_10aa3abb8(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x41);
  func_0x00010aa5a44c(param_1 + 0x3f);
  *param_1 = &PTR_FUN_110c3b2c8;
  param_1[2] = &PTR_DAT_110bcfec8;
  param_1[7] = &PTR_DAT_110bcff20;
  param_1[0xd] = &PTR_DAT_110bcff40;
  param_1[0x16] = &PTR_DAT_110bcffb0;
  param_1[0x45] = &PTR_DAT_110c3b3f8;
  param_1[0x17] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x35);
  (**(code **)param_1[0x36])(param_1 + 0x36);
  func_0x00010a004e5c(param_1 + 0x33);
  if (*(char *)((long)param_1 + 0x167) < '\0') {
    __ZdlPv(param_1[0x2a]);
  }
  param_1[0x17] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x17);
  lVar1 = param_1[0x14];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x15];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
  }
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  puStack_28 = param_1 + 10;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1);
  return;
}



/* Entry: 10aa3abf0; end: 10aa3ac27;  */

void FUN_10aa3abf0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puStack_28;
  
  func_0x00010a004e5c(param_1 + 0x3f);
  func_0x00010aa5a44c(param_1 + 0x3d);
  param_1[-2] = &PTR_FUN_110c3b2c8;
  *param_1 = &PTR_DAT_110bcfec8;
  param_1[5] = &PTR_DAT_110bcff20;
  param_1[0xb] = &PTR_DAT_110bcff40;
  param_1[0x14] = &PTR_DAT_110bcffb0;
  param_1[0x43] = &PTR_DAT_110c3b3f8;
  param_1[0x15] = &PTR_DAT_110bcffe0;
  FUN_10a044790(param_1 + 0x33);
  (**(code **)param_1[0x34])(param_1 + 0x34);
  func_0x00010a004e5c(param_1 + 0x31);
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x15] = &PTR_DAT_110bd14c8;
  FUN_10a1c0934(param_1 + 0x15);
  lVar1 = param_1[0x12];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x13];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  lVar1 = param_1[0x10];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0x11];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
  }
  lVar1 = param_1[0xe];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xf];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    plVar2 = (long *)param_1[0xd];
    *plVar2 = lVar1;
    *(long **)(lVar1 + 8) = plVar2;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  puStack_28 = param_1 + 8;
  FUN_10a3ebf4c(&puStack_28);
  FUN_10a572f54(param_1 + -2);
  return;
}



/* Entry: 10aa3ac28; end: 10aa3acb3;  */

void FUN_10aa3ac28(void)

{
  FUN_10aa3abb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa3acb4; end: 10aa3ad87;  */

void FUN_10aa3acb4(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10aa3abb8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10aa3ad88; end: 10aa3ae27;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3ae14) */

void FUN_10aa3ad88(void)

{
  FUN_10a0ee900(&UNK_10f68b766,0x27);
  return;
}



/* Entry: 10aa3ae28; end: 10aa3ae2f;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3ae14) */

void FUN_10aa3ae28(void)

{
  FUN_10a0ee900(&UNK_10f68b766,0x27);
  return;
}



/* Entry: 10aa3ae30; end: 10aa3b093;  */

void FUN_10aa3ae30(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lStack_50;
  long *plStack_48;
  
  if (param_4 == 0) {
    lVar10 = param_2;
    uVar9 = param_3;
    func_0x00010a0fda30();
  }
  else {
    plStack_48 = *(long **)(param_2 + 0x48);
    lStack_50 = *(long *)(param_2 + 0x40);
    param_4 = param_4 + 0x88;
    func_0x00010a35bf90(param_4,&lStack_50);
    puVar4 = (undefined8 *)((ulong)&lStack_50 | 8);
    plVar7 = &lStack_50;
    if (param_4 != 0) {
      puVar4 = (undefined8 *)(param_4 + 0x28);
      plVar7 = (long *)(param_4 + 0x20);
    }
    uVar9 = *puVar4;
    lVar10 = *plVar7;
  }
  FUN_10a3dd220(*(undefined8 *)(param_2 + 0x170));
  FUN_10aa6afe0(lVar10,uVar9);
  plVar7 = (long *)0x28;
  __Znwm();
  plVar11 = plVar7 + 1;
  *plVar11 = 0;
  *plVar7 = (long)&PTR_FUN_110c3d438;
  plVar7[2] = 0;
  plVar7[3] = lVar10;
  plVar7[4] = (long)FUN_10a3df8cc;
  if (*(long *)(lVar10 + 0x30) == 0) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar10 + 0x28) = lVar10;
    *(long **)(lVar10 + 0x30) = plVar7;
  }
  else {
    if (*(long *)(*(long *)(lVar10 + 0x30) + 8) != -1) goto LAB_10aa3af88;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar1 = plVar7 + 2;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = *plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(long *)(lVar10 + 0x28) = lVar10;
    *(long **)(lVar10 + 0x30) = plVar7;
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  do {
    lVar8 = *plVar11;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar6) {
      *plVar11 = lVar8 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (lVar8 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
  }
LAB_10aa3af88:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (lVar10 + 0x150,param_2 + 0x150);
  uVar2 = (*(ushort *)(param_2 + 0x180) >> 1 & 1) << 1;
  uVar3 = *(ushort *)(lVar10 + 0x180) & 0xfffc;
  *(ushort *)(lVar10 + 0x180) = uVar3 | *(ushort *)(lVar10 + 0x180) & 1 | uVar2;
  *(ushort *)(lVar10 + 0x180) = uVar3 | uVar2 | *(ushort *)(param_2 + 0x180) & 1;
  if (plVar7 != (long *)0x0) {
    plVar11 = plVar7 + 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar6) {
        *plVar11 = *plVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  lStack_50 = lVar10;
  plStack_48 = plVar7;
  FUN_10a3c7ce8(param_3,&lStack_50);
  plVar11 = plStack_48;
  if (plStack_48 != (long *)0x0) {
    plVar1 = plStack_48 + 1;
    do {
      lVar8 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar11);
    }
  }
  func_0x00010aa17eac(lVar10 + 0x1f8,*(undefined8 *)(param_2 + 0x1f8),
                      *(undefined8 *)(param_2 + 0x200));
  *param_1 = lVar10;
  param_1[1] = (long)plVar7;
  return;
}



/* Entry: 10aa3b094; end: 10aa3b0b3;  */

void FUN_10aa3b094(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  lVar4 = *(long *)(param_1 + 0x208);
  uVar5 = *(undefined8 *)(param_1 + 0x170);
  if (*(long *)(lVar4 + 0x20) == 0) {
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    lStack_28 = *(long *)(lVar4 + 0x18);
    uStack_30 = *(undefined8 *)(lVar4 + 0x10);
    if (*(long *)(lVar4 + 0x18) != 0) {
      plVar1 = (long *)(*(long *)(lVar4 + 0x18) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_10a3cf744(uVar5,&uStack_30,&PTR_DAT_110c3b430);
    if (lStack_28 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if ((int)uVar5 != 0) {
      *(int *)(lVar4 + 0x38) = (int)uVar5;
      *(undefined1 *)(lVar4 + 0x3c) = 1;
    }
  }
  else if ((bRam000000011330a9e8 >> 3 & 1) != 0) {
    FUN_10ae06f30(1,8,&UNK_10f665c8c,&UNK_10f665cc3,0x71,&UNK_10f665d1c,&stack0x00000000);
    return;
  }
  return;
}



/* Entry: 10aa3b0b4; end: 10aa3b1e7;  */

void FUN_10aa3b0b4(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  long *plStack_58;
  undefined8 uStack_50;
  long *plStack_48;
  
  uVar6 = *(undefined8 *)(*(long *)(param_2 + 0x170) + 0xac0);
  FUN_10aa2f8f4(&uStack_60,param_2);
  puVar4 = (undefined8 *)0x60;
  __Znwm();
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_110c3d388;
  plStack_48 = plStack_58;
  uStack_50 = uStack_60;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 2;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_10aa38890(puVar4 + 3,2,uVar6,&uStack_50);
  if (plStack_48 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = (long)(puVar4 + 3);
  param_1[1] = (long)puVar4;
  if (plStack_58 != (long *)0x0) {
    plVar1 = plStack_58 + 1;
    do {
      lVar5 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar5 == 0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plStack_58);
      return;
    }
  }
  return;
}



/* Entry: 10aa3b1e8; end: 10aa3b277;  */

undefined1  [16] FUN_10aa3b1e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1a;
  auVar1._0_8_ = &UNK_10f68b93f;
  return auVar1;
}



/* Entry: 10aa3b278; end: 10aa3b7cb;  */

void FUN_10aa3b278(ulong param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 **appuStack_c8 [2];
  char cStack_b1;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  FUN_10a003e74(param_1,&UNK_10f68b087,7);
  func_0x000109887da8(appuStack_c8,&UNK_10f68b93f,0x1a);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c3b448;
  pppuVar2 = (undefined8 ***)&UNK_10f68a4a1;
  if (pppuVar1 != (undefined8 ***)0x0) {
    pppuVar2 = pppuVar1;
  }
  func_0x000107c2c4dc(param_1 + 0x1b8,pppuVar2);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_80 = 0xffffffffffffffff;
  uStack_88 = 0x100000064;
  uStack_70 = 0;
  puStack_78 = (undefined *)0x0;
  uStack_60 = 0;
  puStack_68 = (undefined *)0x0;
  uStack_58 = 0xa4;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c3b448;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c42c58;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa3b7ac;
    FUN_10a054dac(param_1,&UNK_10f68b78e,FUN_10aa6f1e0,3,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa3b7ac;
    FUN_10a054dac(param_1,&UNK_10f68b7a2,FUN_10aa6f32c,4,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x78) & 1) == 0) goto LAB_10aa3b7ac;
    FUN_10a054dac(param_1,&UNK_10f68b7b6,FUN_10aa6f4b0,1,*(undefined8 *)(param_1 + 0x40));
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68b7d0,FUN_10aa6f594,FUN_10aa6f6a8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f68b7de,FUN_10aa6f7b4,FUN_10aa6f8c8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f588924,FUN_10aa6f9d4,FUN_10aa6faa8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b7ec,FUN_10aa6fb74,FUN_10aa6fc38);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b7fb,FUN_10aa6fd2c,FUN_10aa6fde8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b808,FUN_10aa6fed8,FUN_10aa6ff94);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b815,FUN_10aa70084,FUN_10aa70140);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&UNK_10f68b828,FUN_10aa70230,FUN_10aa702ec);
  }
  *(undefined **)(param_1 + 0x1b0) = PTR___ZTIDn_1103469e8;
  lVar3 = *(long *)(param_1 + 0x170);
  if (*(long *)(param_1 + 0x168) != lVar3) {
    uStack_98 = *(undefined8 *)(lVar3 + -0x60);
    ppuStack_a0 = *(undefined8 ***)(lVar3 + -0x68);
    puStack_78 = *(undefined **)(lVar3 + -0x40);
    uVar8 = *(ulong *)(lVar3 + -0x48);
    uVar9 = *(ulong *)(lVar3 + -0x50);
    uStack_90 = *(undefined8 *)(lVar3 + -0x58);
    puStack_68 = *(undefined **)(lVar3 + -0x30);
    uStack_70 = *(undefined8 *)(lVar3 + -0x38);
    uStack_58 = *(undefined8 *)(lVar3 + -0x20);
    uStack_60 = *(undefined8 *)(lVar3 + -0x28);
    uStack_40 = *(undefined8 *)(lVar3 + -8);
    uStack_48 = *(undefined8 *)(lVar3 + -0x10);
    uStack_50 = *(ulong *)(lVar3 + -0x18);
    *(long *)(param_1 + 0x170) = lVar3 + -0x68;
    uStack_88._4_4_ = (undefined4)(uVar9 >> 0x20);
    uVar4 = uStack_88._4_4_;
    uStack_80._4_4_ = (undefined4)(uVar8 >> 0x20);
    uVar5 = uStack_80._4_4_;
    uVar7 = param_1;
    uStack_88 = uVar9;
    uStack_80 = uVar8;
    FUN_10a0051e8(param_1,uVar9 & 0xffffffff,uVar4,uStack_50 & 0xffffffff,uVar8 & 0xffffffff,uVar5);
    if ((uVar7 & 1) == 0) {
      func_0x000109894f40(param_1,0);
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f68b93f,0x1a);
      FUN_10a05431c(param_1);
    }
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f68b83b;
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    puStack_78 = &UNK_10f68a4a1;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_68 = &UNK_10f68a4a1;
    uStack_50._0_4_ = 0xffffffff;
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010a004eb4(param_1,&ppuStack_a0);
    uStack_80 = 0xffffffffffffffff;
    uStack_88 = 0x100000064;
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a0 = (undefined8 **)&UNK_10f68b0a9;
    puStack_78 = &UNK_10f68a4a1;
    uStack_70 = 0;
    uStack_60 = 0;
    puStack_68 = (undefined *)0x0;
    uStack_58 = 0xb7;
    uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
    uStack_48 = 0;
    uStack_40 = 0;
    func_0x00010aa34084(param_1,&ppuStack_a0,FUN_10aa3b7cc);
    func_0x00010a004064();
    func_0x00010a004064(param_1);
    return;
  }
LAB_10aa3b7ac:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa3b7b0);
  (*pcVar6)();
}



/* Entry: 10aa3b7cc; end: 10aa3b7e3;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3c304) */

void FUN_10aa3b7cc(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  if (param_2 == 0) {
    plVar3 = (long *)0x1b0;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c3d4e8;
    plVar6 = plVar3 + 3;
    FUN_10aa3b7e4(plVar6,0);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10aa70540(&plStack_50,plVar3 + 8,plVar6);
    FUN_10aa703dc(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x198;
    __Znwm();
    FUN_10aa3b7e4();
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c3d488;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10aa70540(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aa703dc(param_1,&plStack_50);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa3b7e4; end: 10aa3b8bb;  */

void FUN_10aa3b7e4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010a0fda30();
  FUN_10aa7093c(param_1,param_2,puVar1,uVar2);
  *param_1 = &PTR_FUN_110c3a618;
  param_1[2] = &PTR_DAT_110c3a6b8;
  param_1[7] = &PTR_DAT_110c3a710;
  param_1[0x1c] = 0xc475000000000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((long)param_1 + 0xec) = 2;
  param_1[0x1f] = 0x3f00000000000000;
  param_1[0x1e] = 0x3f8000003f800000;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  return;
}



/* Entry: 10aa3b8bc; end: 10aa3b8cf;  */

undefined8 * FUN_10aa3b8bc(undefined8 *param_1)

{
  func_0x00010aa4dcac(param_1 + 0x31);
  func_0x00010aa5a3f4(param_1 + 0x2f);
  func_0x00010726f2e4(param_1 + 0x29);
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10aa3b8d0; end: 10aa3b913;  */

void FUN_10aa3b8d0(void)

{
  func_0x00010aa3b884();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa3b914; end: 10aa3bc7f;  */

void FUN_10aa3b914(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                  long *param_5)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 uStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined2 uStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined1 uStack_9c;
  undefined1 uStack_89;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  ulong uStack_50;
  byte bStack_48;
  
  func_0x00010aa70acc();
  FUN_10aa18650(param_5,&PTR_DAT_110c3a720,param_4 + 0x178);
  FUN_10aa187e0(param_5,&PTR_DAT_110c3a740,param_4 + 0x188);
  uStack_150 = 0xc475000000000000;
  uStack_148 = 0;
  uStack_144 = 2;
  uVar7 = 0x3f800000;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uStack_138 = 0x3f00000000000000;
  uStack_140 = 0x3f8000003f800000;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0x3f800000;
  uStack_c0 = 0;
  if (*(int *)(*(long *)(*(long *)(param_4 + 0x50) + 0xa20) + 0x18) < 0xa6) {
    uStack_138 = 0;
  }
  (**(code **)(*param_5 + 0xf0))(param_5,&PTR_DAT_110c3a528,&uStack_150);
  *(undefined4 *)(param_4 + 0xe0) = uVar7;
  *(uint *)(param_4 + 0xe4) = CONCAT13(uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
  *(undefined4 *)(param_4 + 0xe8) = param_3;
  plVar2 = param_5;
  (**(code **)(*param_5 + 0xd0))(param_5,&PTR_DAT_110c3a548,uStack_144);
  *(char *)(param_4 + 0xec) = (char)plVar2;
  uVar7 = (undefined4)uStack_140;
  (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c3a568);
  *(undefined4 *)(param_4 + 0xf0) = uVar7;
  uVar7 = (undefined4)((ulong)uStack_140 >> 0x20);
  (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c3a588);
  *(undefined4 *)(param_4 + 0xf4) = uVar7;
  uVar7 = (undefined4)uStack_138;
  (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c3a5a8);
  *(undefined4 *)(param_4 + 0xf8) = uVar7;
  uVar7 = (undefined4)((ulong)uStack_138 >> 0x20);
  (**(code **)(*param_5 + 0x48))(param_5,&PTR_DAT_110c3a5c8);
  *(undefined4 *)(param_4 + 0xfc) = uVar7;
  plVar2 = param_5;
  (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c3a5e8);
  if ((int)plVar2 != 0) {
    (**(code **)(*param_5 + 0x210))(param_5,&PTR_DAT_110c3a5e8);
    lStack_b8 = 0;
    lStack_b0 = 0;
    uStack_a8 = 0;
    plVar2 = param_5;
    (**(code **)(*param_5 + 0x200))(param_5,&PTR_DAT_110c3bb50);
    if ((int)plVar2 == 0) {
      lVar5 = 0;
      lVar3 = 0;
    }
    else {
      (**(code **)(*param_5 + 0x1d8))(&uStack_58,param_5,&PTR_DAT_110c3bb50);
      if ((bStack_48 & 1) == 0) {
        uStack_89 = 4;
        uStack_a0 = 0x73776f72;
        uStack_9c = 0;
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (auStack_88,&UNK_10f63b9fc,&uStack_a0);
        FUN_10a012db0(auStack_70,auStack_88,&UNK_10f63ba05);
        FUN_10a0029c0(auStack_70);
LAB_10aa3bc04:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa3bc08);
        (*pcVar1)();
      }
      uVar4 = uStack_50 >> 2;
      if ((uStack_50 & 3) != 0) {
        uVar4 = uVar4 + 1;
      }
      func_0x0001074287b0(&lStack_b8,uVar4);
      if ((bStack_48 & 1) == 0) goto LAB_10aa3bc04;
      _memcpy(lStack_b8,uStack_58,uStack_50);
      lVar3 = lStack_b0;
      lVar5 = lStack_b8;
    }
    uVar6 = lVar3 - lVar5;
    uVar4 = uVar6;
    if (0x47 < uVar6) {
      uVar4 = 0x48;
    }
    _memcpy(param_4 + 0x100,lVar5,uVar4);
    if (uVar6 < 0x48) {
      _bzero(param_4 + 0x100 + (uVar4 & 0xfffffffffffffffc),0x48 - uVar4);
    }
    if (lVar5 != 0) {
      lStack_b0 = lVar5;
      __ZdlPv(lVar5);
    }
    (**(code **)(*param_5 + 0x220))(param_5);
  }
  func_0x00010726f2e4(&uStack_e8);
  return;
}



/* Entry: 10aa3bc80; end: 10aa3bdb7;  */

void FUN_10aa3bc80(long param_1,long *param_2)

{
  func_0x00010aa70b70();
  FUN_10aa18ee4(param_2,&PTR_DAT_110c3a720,*(undefined8 *)(param_1 + 0x178),
                *(undefined8 *)(param_1 + 0x180));
  FUN_10aa18f90(param_2,&PTR_DAT_110c3a740,*(undefined8 *)(param_1 + 0x188),
                *(undefined8 *)(param_1 + 400));
  (**(code **)(*param_2 + 0x80))(param_2,&PTR_DAT_110c3a528,param_1 + 0xe0);
  (**(code **)(*param_2 + 0x50))(param_2,&PTR_DAT_110c3a548,*(undefined1 *)(param_1 + 0xec));
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xf0),param_2,&PTR_DAT_110c3a568);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xf4),param_2,&PTR_DAT_110c3a588);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xf8),param_2,&PTR_DAT_110c3a5a8);
  (**(code **)(*param_2 + 0x60))(*(undefined4 *)(param_1 + 0xfc),param_2,&PTR_DAT_110c3a5c8);
  (**(code **)(*param_2 + 0x18))(param_2,&PTR_DAT_110c3a5e8);
  (**(code **)(*param_2 + 0x28))(param_2,&PTR_DAT_110c3bb50,param_1 + 0x100,0x48);
                    /* WARNING: Could not recover jumptable at 0x00010aa3bdb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



/* Entry: 10aa3bdb8; end: 10aa3c10b;  */

void FUN_10aa3bdb8(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  uint *puStack_80;
  uint *puStack_78;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0x746553646c726f57;
  *puVar3 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar3 + 0x12) = 0x746573734173676e;
  *(undefined8 *)((long)puVar3 + 10) = 0x6974746553646c72;
  *(undefined1 *)((long)puVar3 + 0x1a) = 0;
  FUN_109ffe100(&puStack_80,*(long *)(param_2 + 0x160) + 0x144);
  uVar5 = 0;
  puVar9 = puStack_80;
  do {
    uVar7 = 0;
    uVar1 = *(uint *)(param_2 + 0x100 + uVar5 * 4);
    puVar8 = puVar9;
    do {
      puVar9 = puVar8;
      if ((uVar5 <= uVar7) && ((uVar1 >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0)) {
        puVar9 = puVar8 + 1;
        *puVar8 = (int)uVar5 << 0x10 | (uint)uVar7;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar9;
    } while (uVar7 != 0x12);
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x12);
  for (plVar6 = *(long **)(param_2 + 0x158); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    *puVar9 = *(uint *)(plVar6 + 2);
    puVar9 = puVar9 + 1;
  }
  func_0x0001074287b0(&puStack_80,(long)puVar9 - (long)puStack_80 >> 2);
  __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_(puStack_80,puVar9,&ppppppuStack_98);
  puVar9 = puStack_78;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  if (puStack_80 != puStack_78) {
    puVar8 = puStack_80;
    do {
      uVar1 = *puVar8;
      __ZNSt3__19to_stringEj(&ppppppuStack_98,uVar1 >> 0x10);
      uVar5 = uStack_90;
      pppppppuVar2 = (undefined8 *******)ppppppuStack_98;
      if (-1 < (char)bStack_81) {
        uVar5 = (ulong)bStack_81;
        pppppppuVar2 = &ppppppuStack_98;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_b0,pppppppuVar2,uVar5);
      if ((char)bStack_81 < '\0') {
        __ZdlPv(ppppppuStack_98);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_b0,0x2f);
      __ZNSt3__19to_stringEj(&ppppppuStack_98,uVar1 & 0xffff);
      uVar5 = uStack_90;
      pppppppuVar2 = (undefined8 *******)ppppppuStack_98;
      if (-1 < (char)bStack_81) {
        uVar5 = (ulong)bStack_81;
        pppppppuVar2 = &ppppppuStack_98;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_b0,pppppppuVar2,uVar5);
      if ((char)bStack_81 < '\0') {
        __ZdlPv(ppppppuStack_98);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_b0,&DAT_10f68f19e,2);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar9);
    if ((long)uStack_a0._7_1_ < 0) {
      lVar4 = lStack_a8;
      if (lStack_a8 == 0) goto LAB_10aa3bfd0;
    }
    else {
      lVar4 = (long)uStack_a0._7_1_;
      if (uStack_a0._7_1_ == '\0') goto LAB_10aa3bfd0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&uStack_b0,lVar4 + -2,0);
  }
LAB_10aa3bfd0:
  if (puStack_80 != (uint *)0x0) {
    puStack_78 = puStack_80;
    __ZdlPv();
  }
  FUN_10a0ee900(param_1,&UNK_10f68b84e,0x8d);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  __ZdlPv(puVar3);
  return;
}



/* Entry: 10aa3c10c; end: 10aa3c113;  */

void FUN_10aa3c10c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined8 *******pppppppuVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 ******ppppppuStack_98;
  ulong uStack_90;
  byte bStack_81;
  uint *puStack_80;
  uint *puStack_78;
  
  puVar3 = (undefined8 *)0x20;
  __Znwm();
  puVar3[1] = 0x746553646c726f57;
  *puVar3 = 0x2e73636973796850;
  *(undefined8 *)((long)puVar3 + 0x12) = 0x746573734173676e;
  *(undefined8 *)((long)puVar3 + 10) = 0x6974746553646c72;
  *(undefined1 *)((long)puVar3 + 0x1a) = 0;
  FUN_109ffe100(&puStack_80,*(long *)(param_2 + 0x150) + 0x144);
  uVar5 = 0;
  puVar9 = puStack_80;
  do {
    uVar7 = 0;
    uVar1 = *(uint *)(param_2 + 0xf0 + uVar5 * 4);
    puVar8 = puVar9;
    do {
      puVar9 = puVar8;
      if ((uVar5 <= uVar7) && ((uVar1 >> (ulong)((uint)uVar7 & 0x1f) & 1) != 0)) {
        puVar9 = puVar8 + 1;
        *puVar8 = (int)uVar5 << 0x10 | (uint)uVar7;
      }
      uVar7 = uVar7 + 1;
      puVar8 = puVar9;
    } while (uVar7 != 0x12);
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x12);
  for (plVar6 = *(long **)(param_2 + 0x148); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    *puVar9 = *(uint *)(plVar6 + 2);
    puVar9 = puVar9 + 1;
  }
  func_0x0001074287b0(&puStack_80,(long)puVar9 - (long)puStack_80 >> 2);
  __ZNSt3__16__sortIRNS_6__lessIjjEEPjEEvT0_S5_T_(puStack_80,puVar9,&ppppppuStack_98);
  puVar9 = puStack_78;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  if (puStack_80 != puStack_78) {
    puVar8 = puStack_80;
    do {
      uVar1 = *puVar8;
      __ZNSt3__19to_stringEj(&ppppppuStack_98,uVar1 >> 0x10);
      uVar5 = uStack_90;
      pppppppuVar2 = (undefined8 *******)ppppppuStack_98;
      if (-1 < (char)bStack_81) {
        uVar5 = (ulong)bStack_81;
        pppppppuVar2 = &ppppppuStack_98;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_b0,pppppppuVar2,uVar5);
      if ((char)bStack_81 < '\0') {
        __ZdlPv(ppppppuStack_98);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc(&uStack_b0,0x2f);
      __ZNSt3__19to_stringEj(&ppppppuStack_98,uVar1 & 0xffff);
      uVar5 = uStack_90;
      pppppppuVar2 = (undefined8 *******)ppppppuStack_98;
      if (-1 < (char)bStack_81) {
        uVar5 = (ulong)bStack_81;
        pppppppuVar2 = &ppppppuStack_98;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_b0,pppppppuVar2,uVar5);
      if ((char)bStack_81 < '\0') {
        __ZdlPv(ppppppuStack_98);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&uStack_b0,&DAT_10f68f19e,2);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar9);
    if ((long)uStack_a0._7_1_ < 0) {
      lVar4 = lStack_a8;
      if (lStack_a8 == 0) goto LAB_10aa3bfd0;
    }
    else {
      lVar4 = (long)uStack_a0._7_1_;
      if (uStack_a0._7_1_ == '\0') goto LAB_10aa3bfd0;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6resizeEmc
              (&uStack_b0,lVar4 + -2,0);
  }
LAB_10aa3bfd0:
  if (puStack_80 != (uint *)0x0) {
    puStack_78 = puStack_80;
    __ZdlPv();
  }
  FUN_10a0ee900(param_1,&UNK_10f68b84e,0x8d);
  if (uStack_a0 < 0) {
    __ZdlPv(uStack_b0);
  }
  __ZdlPv(puVar3);
  return;
}



/* Entry: 10aa3c114; end: 10aa3c1d7;  */

void FUN_10aa3c114(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_40;
  long lStack_38;
  
  FUN_10aa3c1d8(&lStack_40,*(undefined8 *)(param_2 + 0x50));
  uVar1 = *(undefined8 *)(param_2 + 0xe0);
  uVar3 = *(undefined8 *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(undefined8 *)(lStack_40 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(lStack_40 + 0xe0) = uVar1;
  *(undefined8 *)(lStack_40 + 0xf8) = uVar3;
  *(undefined8 *)(lStack_40 + 0xf0) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(lStack_40 + 0x108) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(lStack_40 + 0x100) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  uVar2 = *(undefined8 *)(param_2 + 0x138);
  uVar1 = *(undefined8 *)(param_2 + 0x130);
  uVar6 = *(undefined8 *)(param_2 + 0x118);
  uVar5 = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(lStack_40 + 0x140) = *(undefined8 *)(param_2 + 0x140);
  *(undefined8 *)(lStack_40 + 0x128) = uVar4;
  *(undefined8 *)(lStack_40 + 0x120) = uVar3;
  *(undefined8 *)(lStack_40 + 0x138) = uVar2;
  *(undefined8 *)(lStack_40 + 0x130) = uVar1;
  *(undefined8 *)(lStack_40 + 0x118) = uVar6;
  *(undefined8 *)(lStack_40 + 0x110) = uVar5;
  if (lStack_40 != param_2) {
    *(undefined4 *)(lStack_40 + 0x168) = *(undefined4 *)(param_2 + 0x168);
    func_0x00010879ba80(lStack_40 + 0x148,*(undefined8 *)(param_2 + 0x158),0);
  }
  *(undefined2 *)(lStack_40 + 0x170) = *(undefined2 *)(param_2 + 0x170);
  FUN_10aa17db4(lStack_40 + 0x178,*(undefined8 *)(param_2 + 0x178),*(undefined8 *)(param_2 + 0x180))
  ;
  FUN_10aa17e38(lStack_40 + 0x188,*(undefined8 *)(param_2 + 0x188),*(undefined8 *)(param_2 + 400));
  *param_1 = lStack_40;
  param_1[1] = lStack_38;
  return;
}



/* Entry: 10aa3c1d8; end: 10aa3c543;  */

/* WARNING: Removing unreachable block (ram,0x00010aa3c304) */

void FUN_10aa3c1d8(long *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plStack_50;
  long *plStack_48;
  
  if (param_2 == 0) {
    plVar3 = (long *)0x1b0;
    __Znwm();
    plVar3[1] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)&PTR_DAT_110c3d4e8;
    plVar6 = plVar3 + 3;
    FUN_10aa3b7e4(plVar6,0);
    plStack_50 = plVar6;
    plStack_48 = plVar3;
    FUN_10aa70540(&plStack_50,plVar3 + 8,plVar6);
    FUN_10aa703dc(param_1,&plStack_50);
    plVar6 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar3 = plStack_48 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
  }
  else {
    lVar7 = *(long *)(param_2 + 0x858);
    plVar6 = *(long **)(param_2 + 0x860);
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = *plVar3 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    plVar3 = (long *)0x198;
    __Znwm();
    FUN_10aa3b7e4();
    if (plVar6 != (long *)0x0) {
      plVar4 = plVar6 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar4 = plVar6 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = *plVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
    plVar4 = (long *)0x30;
    plStack_50 = plVar3;
    __Znwm();
    *plVar4 = (long)&PTR_DAT_110c3d488;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = (long)plVar3;
    plVar4[4] = lVar7;
    plVar4[5] = (long)plVar6;
    plStack_48 = plVar4;
    FUN_10aa70540(&plStack_50,plVar3 + 5,plVar3);
    FUN_10aa703dc(param_1,&plStack_50);
    plVar3 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar4 = plStack_48 + 1;
      do {
        lVar5 = *plVar4;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar2) {
          *plVar4 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
      }
    }
    if ((lVar7 != 0) && (plVar3 = (long *)*param_1, plVar3 != (long *)0x0)) {
      plStack_48 = (long *)param_1[1];
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = *plVar4 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plStack_50 = plVar3;
      FUN_10aa88c30(lVar7,&plStack_50);
      plVar3 = plStack_48;
      if (plStack_48 != (long *)0x0) {
        plVar4 = plStack_48 + 1;
        do {
          lVar7 = *plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *plVar4 = lVar7 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_48 + 0x10))(plStack_48);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        }
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar3 = plVar6 + 1;
      do {
        lVar7 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar7 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar6);
        return;
      }
    }
  }
  return;
}



/* Entry: 10aa3c544; end: 10aa3c5c7;  */

bool FUN_10aa3c544(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  uint uStack_14;
  
  if ((param_2 < 0x12) && (param_3 < 0x12)) {
    bVar1 = (*(uint *)(param_1 + (ulong)param_2 * 4 + 0x100) >> (ulong)(param_3 & 0x1f) & 1) == 0;
  }
  else {
    bVar1 = true;
    if ((param_2 < 0xffff) && (param_3 < 0xffff)) {
      uStack_14 = param_3 | param_2 << 0x10;
      if (param_3 <= param_2) {
        uStack_14 = param_2 | param_3 << 0x10;
      }
      param_1 = param_1 + 0x148;
      func_0x0001072720a4(param_1,&uStack_14);
      bVar1 = param_1 == 0;
    }
  }
  return bVar1;
}



/* Entry: 10aa3c5c8; end: 10aa3c69f;  */

void FUN_10aa3c5c8(long param_1,uint param_2,uint param_3,int param_4)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  uint uStack_24;
  
  if ((param_2 < 0x12) && (param_3 < 0x12)) {
    uVar3 = 1 << (ulong)(param_3 & 0x1f);
    param_1 = param_1 + 0x100;
    uVar2 = 0;
    if (param_4 == 0) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + (ulong)param_2 * 4) =
         *(uint *)(param_1 + (ulong)param_2 * 4) & (uVar3 ^ 0xffffffff) | uVar2;
    uVar3 = 1 << (ulong)(param_2 & 0x1f);
    uVar2 = 0;
    if (param_4 == 0) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + (ulong)param_3 * 4) =
         *(uint *)(param_1 + (ulong)param_3 * 4) & (uVar3 ^ 0xffffffff) | uVar2;
  }
  else if ((param_2 < 0xffff) && (param_3 < 0xffff)) {
    uStack_24 = param_3 | param_2 << 0x10;
    if (param_3 <= param_2) {
      uStack_24 = param_2 | param_3 << 0x10;
    }
    uVar4 = param_1 + 0x148;
    puVar5 = &uStack_24;
    if (param_4 == 0) {
      func_0x000107270fb0(uVar4,puVar5,&uStack_24);
      uVar4 = (ulong)puVar5 & 1;
    }
    else {
      func_0x000107272144();
    }
    if (uVar4 != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0xac0);
      sVar1 = *(short *)(lVar6 + 0x3a) + 1;
      *(short *)(lVar6 + 0x3a) = sVar1;
      *(short *)(param_1 + 0x170) = sVar1;
    }
  }
  return;
}



/* Entry: 10aa3c6a0; end: 10aa3c793;  */

void FUN_10aa3c6a0(void)

{
  return;
}



/* Entry: 10aa3c794; end: 10aa3c7a7;  */

void FUN_10aa3c794(void)

{
  FUN_10aa4da20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa3c7a8; end: 10aa3c807;  */

undefined8 * FUN_10aa3c7a8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10aa3c808; end: 10aa3c923;  */

undefined8 FUN_10aa3c808(void)

{
  return 0xeb76020423cc3559;
}



/* Entry: 10aa3c924; end: 10aa3c98b;  */

void FUN_10aa3c924(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x30;
        FUN_10aa3c98c(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10aa3c98c; end: 10aa3c9cb;  */

void FUN_10aa3c98c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x18);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 10aa3c9cc; end: 10aa3ca57;  */

void FUN_10aa3c9cc(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    FUN_10aa3ca58(param_1,param_4);
    puVar4 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar5 = param_2[1];
      uVar6 = *param_2;
      puVar4[1] = param_2[1];
      *puVar4 = uVar6;
      if (lVar5 != 0) {
        plVar1 = (long *)(lVar5 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar4 = puVar4 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar4;
  }
  return;
}



/* Entry: 10aa3ca58; end: 10aa3ca93;  */

void FUN_10aa3ca58(ulong *param_1,ulong param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 >> 0x3c == 0) {
    uVar3 = param_2;
    FUN_10aa3caa8();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + uVar3 * 0x10;
    return;
  }
  FUN_10aa3ca94();
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    __Znwm((long)plVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    lVar2 = plVar1[1];
    lVar4 = lVar5;
    if (lVar2 != lVar5) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010aa500f4();
      } while (lVar2 != lVar5);
      lVar4 = *plVar1;
    }
    plVar1[1] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar4);
    return;
  }
  return;
}



/* Entry: 10aa3ca94; end: 10aa3caa7;  */

void FUN_10aa3ca94(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)plVar1 >> 0x3c == 0) {
    __Znwm((long)plVar1 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        func_0x00010aa500f4();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10aa3caa8; end: 10aa3cb37;  */

void FUN_10aa3caa8(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if ((ulong)param_1 >> 0x3c == 0) {
    __Znwm((long)param_1 << 4);
    return;
  }
  func_0x000109ffded8();
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010aa500f4();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa3cb38; end: 10aa3cb4b;  */

void FUN_10aa3cb38(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  lVar4 = *plVar1;
  if (lVar4 != 0) {
    lVar2 = plVar1[1];
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar2 = lVar2 + -0x10;
        FUN_10aa611d0();
      } while (lVar2 != lVar4);
      lVar3 = *plVar1;
    }
    plVar1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar3);
    return;
  }
  return;
}



/* Entry: 10aa3cb4c; end: 10aa3cc03;  */

void FUN_10aa3cb4c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        FUN_10aa611d0();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10aa3cc04; end: 10aa3cc77;  */

void FUN_10aa3cc04(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)*param_1;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)param_1[1];
    plVar1 = plVar2;
    if (plVar3 != plVar2) {
      do {
        plVar3 = plVar3 + -1;
        plVar1 = (long *)*plVar3;
        *plVar3 = 0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
      } while (plVar3 != plVar2);
      plVar1 = (long *)*param_1;
    }
    param_1[1] = plVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar1);
    return;
  }
  return;
}



/* Entry: 10aa3cc78; end: 10aa3cc8b;  */

void FUN_10aa3cc78(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  
  plVar11 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
LAB_10aa3ccb8:
  do {
    plVar9 = plVar11;
    uVar18 = (long)param_2 - (long)plVar9 >> 3;
    if (uVar18 - 2 == 0 || (long)uVar18 < 2) {
      if (uVar18 < 2) {
        return;
      }
      if (uVar18 == 2) {
        lVar13 = *plVar9;
        if (*(int *)(param_2[-1] + 8) < *(int *)(lVar13 + 8)) {
          *plVar9 = param_2[-1];
          param_2[-1] = lVar13;
          return;
        }
        return;
      }
    }
    else {
      if (uVar18 == 3) {
        lVar13 = *plVar9;
        lVar15 = plVar9[1];
        iVar3 = *(int *)(lVar15 + 8);
        iVar4 = *(int *)(lVar13 + 8);
        lVar16 = param_2[-1];
        if (iVar3 < iVar4) {
          if (*(int *)(lVar16 + 8) < iVar3) {
            *plVar9 = lVar16;
          }
          else {
            *plVar9 = lVar15;
            plVar9[1] = lVar13;
            if (iVar4 <= *(int *)(param_2[-1] + 8)) {
              return;
            }
            plVar9[1] = param_2[-1];
          }
          param_2[-1] = lVar13;
          return;
        }
        if (*(int *)(lVar16 + 8) < iVar3) {
          plVar9[1] = lVar16;
          param_2[-1] = lVar15;
          lVar13 = *plVar9;
          if (*(int *)(plVar9[1] + 8) < *(int *)(lVar13 + 8)) {
            *plVar9 = plVar9[1];
            plVar9[1] = lVar13;
            return;
          }
          return;
        }
        return;
      }
      if (uVar18 == 4) {
        plVar10 = plVar9 + 1;
        lVar13 = *plVar10;
        plVar8 = plVar9 + 2;
        lVar15 = *plVar8;
        iVar3 = *(int *)(lVar13 + 8);
        lVar16 = *plVar9;
        iVar4 = *(int *)(lVar16 + 8);
        iVar5 = *(int *)(lVar15 + 8);
        plVar11 = plVar9;
        if (iVar3 < iVar4) {
          lVar12 = lVar16;
          plVar14 = plVar8;
          if (iVar3 <= iVar5) {
            *plVar9 = lVar13;
            plVar9[1] = lVar16;
            lVar13 = lVar15;
            plVar11 = plVar10;
            goto joined_r0x00010aa3d6f0;
          }
        }
        else {
          lVar19 = lVar15;
          if (iVar3 <= iVar5) goto LAB_10aa3d7b0;
          *plVar10 = lVar15;
          *plVar8 = lVar13;
          plVar14 = plVar10;
          lVar12 = lVar13;
joined_r0x00010aa3d6f0:
          lVar19 = lVar13;
          if (iVar4 <= iVar5) goto LAB_10aa3d7b0;
        }
        *plVar11 = lVar15;
        *plVar14 = lVar16;
        lVar19 = lVar12;
LAB_10aa3d7b0:
        if (*(int *)(lVar19 + 8) <= *(int *)(param_2[-1] + 8)) {
          return;
        }
        *plVar8 = param_2[-1];
        param_2[-1] = lVar19;
        lVar15 = *plVar8;
        iVar3 = *(int *)(lVar15 + 8);
        lVar13 = *plVar10;
        if (iVar3 < *(int *)(lVar13 + 8)) {
          plVar9[1] = lVar15;
          plVar9[2] = lVar13;
          lVar13 = *plVar9;
          if (iVar3 < *(int *)(lVar13 + 8)) {
            *plVar9 = lVar15;
            plVar9[1] = lVar13;
            return;
          }
          return;
        }
        return;
      }
      if (uVar18 == 5) {
        plVar11 = plVar9 + 1;
        plVar10 = plVar9 + 2;
        plVar8 = plVar9 + 3;
        lVar15 = *plVar11;
        iVar3 = *(int *)(lVar15 + 8);
        lVar16 = *plVar9;
        iVar4 = *(int *)(lVar16 + 8);
        lVar13 = *plVar10;
        if (iVar3 < iVar4) {
          if (*(int *)(lVar13 + 8) < iVar3) {
            *plVar9 = lVar13;
          }
          else {
            *plVar9 = lVar15;
            *plVar11 = lVar16;
            lVar13 = *plVar10;
            if (iVar4 <= *(int *)(lVar13 + 8)) goto LAB_10aa3d8c8;
            *plVar11 = lVar13;
          }
          *plVar10 = lVar16;
          lVar13 = lVar16;
        }
        else if (*(int *)(lVar13 + 8) < iVar3) {
          *plVar11 = lVar13;
          *plVar10 = lVar15;
          lVar16 = *plVar9;
          lVar13 = lVar15;
          if (*(int *)(*plVar11 + 8) < *(int *)(lVar16 + 8)) {
            *plVar9 = *plVar11;
            *plVar11 = lVar16;
            lVar13 = *plVar10;
          }
        }
LAB_10aa3d8c8:
        if (*(int *)(*plVar8 + 8) < *(int *)(lVar13 + 8)) {
          *plVar10 = *plVar8;
          *plVar8 = lVar13;
          lVar13 = *plVar11;
          if (*(int *)(*plVar10 + 8) < *(int *)(lVar13 + 8)) {
            *plVar11 = *plVar10;
            *plVar10 = lVar13;
            lVar13 = *plVar9;
            if (*(int *)(*plVar11 + 8) < *(int *)(lVar13 + 8)) {
              *plVar9 = *plVar11;
              *plVar11 = lVar13;
            }
          }
        }
        lVar13 = param_2[-1];
        lVar15 = *plVar8;
        if (*(int *)(lVar13 + 8) < *(int *)(lVar15 + 8)) {
          *plVar8 = lVar13;
          param_2[-1] = lVar15;
          lVar13 = *plVar10;
          if (*(int *)(*plVar8 + 8) < *(int *)(lVar13 + 8)) {
            *plVar10 = *plVar8;
            *plVar8 = lVar13;
            lVar13 = *plVar11;
            if (*(int *)(*plVar10 + 8) < *(int *)(lVar13 + 8)) {
              *plVar11 = *plVar10;
              *plVar10 = lVar13;
              lVar13 = *plVar9;
              if (*(int *)(*plVar11 + 8) < *(int *)(lVar13 + 8)) {
                *plVar9 = *plVar11;
                *plVar11 = lVar13;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar18 < 0x18) {
      plVar11 = plVar9 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar9 == param_2 || plVar11 == param_2) {
          return;
        }
        lVar16 = -8;
        lVar13 = 8;
        lVar15 = 0;
        do {
          lVar19 = lVar13;
          lVar13 = *plVar11;
          if (*(int *)(lVar13 + 8) < *(int *)(*(long *)((long)plVar9 + lVar15) + 8)) {
            plVar8 = (long *)0x0;
            *plVar11 = 0;
            lVar12 = *(long *)((long)plVar9 + lVar15);
            plVar10 = plVar11;
            lVar15 = lVar16;
            do {
              plVar10[-1] = 0;
              *plVar10 = lVar12;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 8))();
              }
              if (lVar15 == 0) goto LAB_10aa3d7a8;
              plVar14 = plVar10 + -1;
              plVar8 = (long *)*plVar14;
              lVar12 = plVar10[-2];
              lVar15 = lVar15 + 8;
              plVar10 = plVar14;
            } while (*(int *)(lVar13 + 8) < *(int *)(lVar12 + 8));
            *plVar14 = lVar13;
            if (plVar8 != (long *)0x0) {
              (**(code **)(*plVar8 + 8))();
            }
          }
          plVar11 = plVar11 + 1;
          lVar16 = lVar16 + -8;
          lVar13 = lVar19 + 8;
          lVar15 = lVar19;
          if (plVar11 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar9 == param_2 || plVar11 == param_2) {
        return;
      }
      lVar13 = 0;
      plVar10 = plVar9;
      do {
        plVar8 = plVar11;
        lVar15 = *plVar10;
        lVar16 = *plVar8;
        if (*(int *)(lVar16 + 8) < *(int *)(lVar15 + 8)) {
          plVar11 = (long *)0x0;
          *plVar8 = 0;
          lVar19 = lVar13;
          while( true ) {
            plVar10 = (long *)((long)plVar9 + lVar19);
            *plVar10 = 0;
            plVar10[1] = lVar15;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
            plVar11 = plVar9;
            if (lVar19 == 0) break;
            lVar15 = ((long *)((long)plVar9 + lVar19))[-1];
            plVar11 = (long *)((long)plVar9 + lVar19);
            if (*(int *)(lVar15 + 8) <= *(int *)(lVar16 + 8)) break;
            plVar11 = (long *)*plVar10;
            lVar19 = lVar19 + -8;
          }
          plVar10 = (long *)*plVar11;
          *plVar11 = lVar16;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        lVar13 = lVar13 + 8;
        plVar11 = plVar8 + 1;
        plVar10 = plVar8;
        if (plVar8 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar9 == param_2) {
        return;
      }
      uVar17 = uVar18 - 2 >> 1;
      uVar21 = uVar17;
      do {
        if ((long)uVar21 <= (long)uVar17) {
          uVar1 = uVar21 << 1 | 1;
          plVar11 = plVar9 + uVar1;
          uVar20 = uVar21 * 2 + 2;
          if ((long)uVar20 < (long)uVar18) {
            lVar13 = plVar11[1];
            plVar10 = plVar11 + 1;
            if (*(int *)(lVar13 + 8) <= *(int *)(*plVar11 + 8)) {
              plVar10 = plVar11;
              lVar13 = *plVar11;
              uVar20 = uVar1;
            }
          }
          else {
            plVar10 = plVar11;
            lVar13 = *plVar11;
            uVar20 = uVar1;
          }
          plVar11 = plVar9 + uVar21;
          lVar15 = *plVar11;
          if (*(int *)(lVar15 + 8) <= *(int *)(lVar13 + 8)) {
            *plVar11 = 0;
            lVar13 = *plVar10;
            do {
              plVar8 = plVar10;
              *plVar8 = 0;
              plVar10 = (long *)*plVar11;
              *plVar11 = lVar13;
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 8))();
              }
              if ((long)uVar17 < (long)uVar20) break;
              uVar1 = uVar20 << 1 | 1;
              plVar11 = plVar9 + uVar1;
              uVar20 = uVar20 * 2 + 2;
              if ((long)uVar20 < (long)uVar18) {
                lVar13 = plVar11[1];
                plVar10 = plVar11 + 1;
                if (*(int *)(lVar13 + 8) <= *(int *)(*plVar11 + 8)) {
                  plVar10 = plVar11;
                  lVar13 = *plVar11;
                  uVar20 = uVar1;
                }
              }
              else {
                plVar10 = plVar11;
                lVar13 = *plVar11;
                uVar20 = uVar1;
              }
              plVar11 = plVar8;
            } while (*(int *)(lVar15 + 8) <= *(int *)(lVar13 + 8));
            plVar11 = (long *)*plVar8;
            *plVar8 = lVar15;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
        }
        bVar2 = uVar21 != 0;
        uVar21 = uVar21 - 1;
      } while (bVar2);
      do {
        uVar21 = 0;
        lVar13 = *plVar9;
        *plVar9 = 0;
        plVar11 = plVar9;
        do {
          plVar10 = plVar11 + uVar21 + 1;
          uVar20 = uVar21 << 1 | 1;
          uVar17 = uVar21 * 2 + 2;
          if ((long)uVar17 < (long)uVar18) {
            lVar15 = plVar11[uVar21 + 2];
            lVar16 = uVar21 + 1;
            plVar8 = plVar11 + uVar21 + 2;
            uVar21 = uVar17;
            if (*(int *)(lVar15 + 8) <= *(int *)(plVar11[lVar16] + 8)) {
              lVar15 = plVar11[lVar16];
              plVar8 = plVar10;
              uVar21 = uVar20;
            }
          }
          else {
            lVar15 = *plVar10;
            plVar8 = plVar10;
            uVar21 = uVar20;
          }
          *plVar8 = 0;
          plVar10 = (long *)*plVar11;
          *plVar11 = lVar15;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          plVar11 = plVar8;
        } while ((long)uVar21 <= (long)(uVar18 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar8 == param_2) {
          plVar11 = (long *)*plVar8;
          *plVar8 = lVar13;
joined_r0x00010aa3d684:
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))();
          }
        }
        else {
          lVar15 = *param_2;
          *param_2 = 0;
          plVar11 = (long *)*plVar8;
          *plVar8 = lVar15;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))();
          }
          plVar11 = (long *)*param_2;
          *param_2 = lVar13;
          if (plVar11 != (long *)0x0) {
            (**(code **)(*plVar11 + 8))();
          }
          lVar13 = (long)plVar8 + (8 - (long)plVar9) >> 3;
          if (1 < lVar13) {
            uVar21 = lVar13 - 2U >> 1;
            plVar11 = plVar9 + uVar21;
            lVar13 = *plVar8;
            if (*(int *)(*plVar11 + 8) < *(int *)(lVar13 + 8)) {
              *plVar8 = 0;
              lVar15 = *plVar11;
              do {
                plVar10 = plVar11;
                *plVar10 = 0;
                plVar11 = (long *)*plVar8;
                *plVar8 = lVar15;
                if (plVar11 != (long *)0x0) {
                  (**(code **)(*plVar11 + 8))();
                }
                if (uVar21 == 0) break;
                uVar21 = uVar21 - 1 >> 1;
                lVar15 = plVar9[uVar21];
                plVar11 = plVar9 + uVar21;
                plVar8 = plVar10;
              } while (*(int *)(lVar15 + 8) < *(int *)(lVar13 + 8));
              plVar11 = (long *)*plVar10;
              *plVar10 = lVar13;
              goto joined_r0x00010aa3d684;
            }
          }
        }
        bVar2 = (long)uVar18 < 3;
        uVar18 = uVar18 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar11 = plVar9 + (uVar18 >> 1);
    lVar13 = param_2[-1];
    iVar3 = *(int *)(lVar13 + 8);
    if (uVar18 < 0x81) {
      lVar16 = *plVar9;
      iVar4 = *(int *)(lVar16 + 8);
      lVar15 = *plVar11;
      iVar5 = *(int *)(lVar15 + 8);
      if (iVar4 < iVar5) {
        if (iVar3 < iVar4) {
          *plVar11 = lVar13;
        }
        else {
          *plVar11 = lVar16;
          *plVar9 = lVar15;
          if (iVar5 <= *(int *)(param_2[-1] + 8)) goto LAB_10aa3cf94;
          *plVar9 = param_2[-1];
        }
        param_2[-1] = lVar15;
      }
      else if (iVar3 < iVar4) {
        *plVar9 = lVar13;
        param_2[-1] = lVar16;
        lVar13 = *plVar11;
        if (*(int *)(*plVar9 + 8) < *(int *)(lVar13 + 8)) {
          *plVar11 = *plVar9;
          *plVar9 = lVar13;
        }
      }
    }
    else {
      lVar16 = *plVar11;
      iVar4 = *(int *)(lVar16 + 8);
      lVar15 = *plVar9;
      iVar5 = *(int *)(lVar15 + 8);
      if (iVar4 < iVar5) {
        if (iVar3 < iVar4) {
          *plVar9 = lVar13;
        }
        else {
          *plVar9 = lVar16;
          *plVar11 = lVar15;
          if (iVar5 <= *(int *)(param_2[-1] + 8)) goto LAB_10aa3cdf0;
          *plVar11 = param_2[-1];
        }
        param_2[-1] = lVar15;
      }
      else if (iVar3 < iVar4) {
        *plVar11 = lVar13;
        param_2[-1] = lVar16;
        lVar13 = *plVar9;
        if (*(int *)(*plVar11 + 8) < *(int *)(lVar13 + 8)) {
          *plVar9 = *plVar11;
          *plVar11 = lVar13;
        }
      }
LAB_10aa3cdf0:
      plVar10 = plVar11 + -1;
      lVar15 = *plVar10;
      iVar3 = *(int *)(lVar15 + 8);
      lVar13 = plVar9[1];
      iVar4 = *(int *)(lVar13 + 8);
      lVar16 = param_2[-2];
      if (iVar3 < iVar4) {
        if (*(int *)(lVar16 + 8) < iVar3) {
          plVar9[1] = lVar16;
        }
        else {
          plVar9[1] = lVar15;
          *plVar10 = lVar13;
          if (iVar4 <= *(int *)(param_2[-2] + 8)) goto LAB_10aa3ce9c;
          *plVar10 = param_2[-2];
        }
        param_2[-2] = lVar13;
      }
      else if (*(int *)(lVar16 + 8) < iVar3) {
        *plVar10 = lVar16;
        param_2[-2] = lVar15;
        lVar13 = plVar9[1];
        if (*(int *)(*plVar10 + 8) < *(int *)(lVar13 + 8)) {
          plVar9[1] = *plVar10;
          *plVar10 = lVar13;
        }
      }
LAB_10aa3ce9c:
      plVar8 = plVar11 + 1;
      lVar15 = *plVar8;
      iVar3 = *(int *)(lVar15 + 8);
      lVar13 = plVar9[2];
      iVar4 = *(int *)(lVar13 + 8);
      lVar16 = param_2[-3];
      if (iVar3 < iVar4) {
        if (*(int *)(lVar16 + 8) < iVar3) {
          plVar9[2] = lVar16;
        }
        else {
          plVar9[2] = lVar15;
          *plVar8 = lVar13;
          if (iVar4 <= *(int *)(param_2[-3] + 8)) goto LAB_10aa3cf24;
          *plVar8 = param_2[-3];
        }
        param_2[-3] = lVar13;
      }
      else if (*(int *)(lVar16 + 8) < iVar3) {
        *plVar8 = lVar16;
        param_2[-3] = lVar15;
        lVar13 = plVar9[2];
        if (*(int *)(*plVar8 + 8) < *(int *)(lVar13 + 8)) {
          plVar9[2] = *plVar8;
          *plVar8 = lVar13;
        }
      }
LAB_10aa3cf24:
      lVar13 = plVar11[-1];
      lVar15 = *plVar11;
      iVar3 = *(int *)(lVar15 + 8);
      iVar4 = *(int *)(lVar13 + 8);
      lVar16 = plVar11[1];
      iVar5 = *(int *)(lVar16 + 8);
      if (iVar3 < iVar4) {
        lVar19 = lVar15;
        if (iVar3 <= iVar5) {
          plVar11[-1] = lVar15;
          *plVar11 = lVar13;
          plVar10 = plVar11;
          lVar15 = lVar13;
          lVar19 = lVar16;
          if (iVar4 <= iVar5) goto LAB_10aa3cf88;
        }
LAB_10aa3cf80:
        *plVar10 = lVar16;
        *plVar8 = lVar13;
        lVar15 = lVar19;
      }
      else if (iVar5 < iVar3) {
        *plVar11 = lVar16;
        plVar11[1] = lVar15;
        plVar8 = plVar11;
        lVar15 = lVar16;
        lVar19 = lVar13;
        if (iVar5 < iVar4) goto LAB_10aa3cf80;
      }
LAB_10aa3cf88:
      lVar13 = *plVar9;
      *plVar9 = lVar15;
      *plVar11 = lVar13;
    }
LAB_10aa3cf94:
    param_3 = param_3 + -1;
    lVar13 = *plVar9;
    plVar11 = plVar9;
    if (((param_4 & 1) != 0) || (iVar3 = *(int *)(lVar13 + 8), *(int *)(plVar9[-1] + 8) < iVar3)) {
      lVar15 = 0;
      *plVar9 = 0;
      do {
        plVar11 = (long *)((long)plVar9 + lVar15 + 8);
        if (plVar11 == param_2) goto LAB_10aa3d7a8;
        lVar16 = *plVar11;
        iVar3 = *(int *)(lVar13 + 8);
        lVar15 = lVar15 + 8;
      } while (*(int *)(lVar16 + 8) < iVar3);
      plVar10 = (long *)((long)plVar9 + lVar15);
      plVar8 = param_2;
      if (lVar15 == 8) {
        do {
          if (plVar8 <= plVar10) break;
          plVar8 = plVar8 + -1;
        } while (iVar3 <= *(int *)(*plVar8 + 8));
      }
      else {
        do {
          if (plVar8 == plVar9) {
LAB_10aa3d7a8:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa3d7ac);
            (*pcVar6)();
          }
          plVar8 = plVar8 + -1;
        } while (iVar3 <= *(int *)(*plVar8 + 8));
      }
      plVar11 = plVar10;
      if (plVar10 < plVar8) {
        lVar15 = *plVar8;
        plVar14 = plVar8;
        do {
          *plVar11 = lVar15;
          *plVar14 = lVar16;
          do {
            plVar11 = plVar11 + 1;
            if (plVar11 == param_2) goto LAB_10aa3d7a8;
            lVar16 = *plVar11;
          } while (*(int *)(lVar16 + 8) < iVar3);
          do {
            if (plVar14 == plVar9) goto LAB_10aa3d7a8;
            plVar14 = plVar14 + -1;
            lVar15 = *plVar14;
          } while (iVar3 <= *(int *)(lVar15 + 8));
        } while (plVar11 < plVar14);
      }
      plVar14 = plVar11 + -1;
      if (plVar14 != plVar9) {
        lVar15 = *plVar14;
        *plVar14 = 0;
        plVar7 = (long *)*plVar9;
        *plVar9 = lVar15;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      plVar7 = (long *)*plVar14;
      *plVar14 = lVar13;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (plVar10 < plVar8) {
LAB_10aa3d104:
        FUN_10aa3cc8c(plVar9,plVar14,param_3,(uint)param_4 & 1);
        param_4 = 0;
      }
      else {
        plVar10 = plVar9;
        FUN_10aa3d9a8(plVar9,plVar14);
        plVar8 = plVar11;
        FUN_10aa3d9a8(plVar11,param_2);
        if ((int)plVar8 == 0) {
          if (((ulong)plVar10 & 1) == 0) goto LAB_10aa3d104;
        }
        else {
          plVar11 = plVar9;
          param_2 = plVar14;
          if (((ulong)plVar10 & 1) != 0) {
            return;
          }
        }
      }
      goto LAB_10aa3ccb8;
    }
    *plVar9 = 0;
    if (iVar3 < *(int *)(param_2[-1] + 8)) {
      do {
        plVar11 = plVar11 + 1;
        if (plVar11 == param_2) goto LAB_10aa3d7a8;
      } while (*(int *)(*plVar11 + 8) <= iVar3);
    }
    else {
      do {
        plVar11 = plVar11 + 1;
        if (param_2 <= plVar11) break;
      } while (*(int *)(*plVar11 + 8) <= iVar3);
    }
    plVar10 = param_2;
    if (plVar11 < param_2) {
      do {
        if (plVar10 == plVar9) goto LAB_10aa3d7a8;
        plVar10 = plVar10 + -1;
      } while (iVar3 < *(int *)(*plVar10 + 8));
    }
    if (plVar11 < plVar10) {
      lVar15 = *plVar11;
      lVar16 = *plVar10;
      do {
        *plVar11 = lVar16;
        *plVar10 = lVar15;
        do {
          plVar11 = plVar11 + 1;
          if (plVar11 == param_2) goto LAB_10aa3d7a8;
          lVar15 = *plVar11;
        } while (*(int *)(lVar15 + 8) <= iVar3);
        do {
          if (plVar10 == plVar9) goto LAB_10aa3d7a8;
          plVar10 = plVar10 + -1;
          lVar16 = *plVar10;
        } while (iVar3 < *(int *)(lVar16 + 8));
      } while (plVar11 < plVar10);
    }
    plVar10 = plVar11 + -1;
    if (plVar10 != plVar9) {
      lVar15 = *plVar10;
      *plVar10 = 0;
      plVar8 = (long *)*plVar9;
      *plVar9 = lVar15;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    param_4 = 0;
    plVar9 = (long *)*plVar10;
    *plVar10 = lVar13;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
      param_4 = 0;
    }
  } while( true );
}



/* Entry: 10aa3cc8c; end: 10aa3d833;  */

void FUN_10aa3cc8c(long *param_1,long *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  
LAB_10aa3ccb8:
  do {
    plVar9 = param_1;
    uVar17 = (long)param_2 - (long)plVar9 >> 3;
    if (uVar17 - 2 == 0 || (long)uVar17 < 2) {
      if (uVar17 < 2) {
        return;
      }
      if (uVar17 == 2) {
        lVar13 = *plVar9;
        if (*(int *)(param_2[-1] + 8) < *(int *)(lVar13 + 8)) {
          *plVar9 = param_2[-1];
          param_2[-1] = lVar13;
          return;
        }
        return;
      }
    }
    else {
      if (uVar17 == 3) {
        lVar13 = *plVar9;
        lVar14 = plVar9[1];
        iVar3 = *(int *)(lVar14 + 8);
        iVar4 = *(int *)(lVar13 + 8);
        lVar15 = param_2[-1];
        if (iVar3 < iVar4) {
          if (*(int *)(lVar15 + 8) < iVar3) {
            *plVar9 = lVar15;
          }
          else {
            *plVar9 = lVar14;
            plVar9[1] = lVar13;
            if (iVar4 <= *(int *)(param_2[-1] + 8)) {
              return;
            }
            plVar9[1] = param_2[-1];
          }
          param_2[-1] = lVar13;
          return;
        }
        if (*(int *)(lVar15 + 8) < iVar3) {
          plVar9[1] = lVar15;
          param_2[-1] = lVar14;
          lVar13 = *plVar9;
          if (*(int *)(plVar9[1] + 8) < *(int *)(lVar13 + 8)) {
            *plVar9 = plVar9[1];
            plVar9[1] = lVar13;
            return;
          }
          return;
        }
        return;
      }
      if (uVar17 == 4) {
        plVar8 = plVar9 + 1;
        lVar13 = *plVar8;
        plVar11 = plVar9 + 2;
        lVar14 = *plVar11;
        iVar3 = *(int *)(lVar13 + 8);
        lVar15 = *plVar9;
        iVar4 = *(int *)(lVar15 + 8);
        iVar5 = *(int *)(lVar14 + 8);
        plVar10 = plVar9;
        if (iVar3 < iVar4) {
          lVar12 = lVar15;
          plVar7 = plVar11;
          if (iVar3 <= iVar5) {
            *plVar9 = lVar13;
            plVar9[1] = lVar15;
            lVar13 = lVar14;
            plVar10 = plVar8;
            goto joined_r0x00010aa3d6f0;
          }
        }
        else {
          lVar18 = lVar14;
          if (iVar3 <= iVar5) goto LAB_10aa3d7b0;
          *plVar8 = lVar14;
          *plVar11 = lVar13;
          plVar7 = plVar8;
          lVar12 = lVar13;
joined_r0x00010aa3d6f0:
          lVar18 = lVar13;
          if (iVar4 <= iVar5) goto LAB_10aa3d7b0;
        }
        *plVar10 = lVar14;
        *plVar7 = lVar15;
        lVar18 = lVar12;
LAB_10aa3d7b0:
        if (*(int *)(lVar18 + 8) <= *(int *)(param_2[-1] + 8)) {
          return;
        }
        *plVar11 = param_2[-1];
        param_2[-1] = lVar18;
        lVar14 = *plVar11;
        iVar3 = *(int *)(lVar14 + 8);
        lVar13 = *plVar8;
        if (iVar3 < *(int *)(lVar13 + 8)) {
          plVar9[1] = lVar14;
          plVar9[2] = lVar13;
          lVar13 = *plVar9;
          if (iVar3 < *(int *)(lVar13 + 8)) {
            *plVar9 = lVar14;
            plVar9[1] = lVar13;
            return;
          }
          return;
        }
        return;
      }
      if (uVar17 == 5) {
        plVar10 = plVar9 + 1;
        plVar8 = plVar9 + 2;
        plVar11 = plVar9 + 3;
        lVar14 = *plVar10;
        iVar3 = *(int *)(lVar14 + 8);
        lVar15 = *plVar9;
        iVar4 = *(int *)(lVar15 + 8);
        lVar13 = *plVar8;
        if (iVar3 < iVar4) {
          if (*(int *)(lVar13 + 8) < iVar3) {
            *plVar9 = lVar13;
          }
          else {
            *plVar9 = lVar14;
            *plVar10 = lVar15;
            lVar13 = *plVar8;
            if (iVar4 <= *(int *)(lVar13 + 8)) goto LAB_10aa3d8c8;
            *plVar10 = lVar13;
          }
          *plVar8 = lVar15;
          lVar13 = lVar15;
        }
        else if (*(int *)(lVar13 + 8) < iVar3) {
          *plVar10 = lVar13;
          *plVar8 = lVar14;
          lVar15 = *plVar9;
          lVar13 = lVar14;
          if (*(int *)(*plVar10 + 8) < *(int *)(lVar15 + 8)) {
            *plVar9 = *plVar10;
            *plVar10 = lVar15;
            lVar13 = *plVar8;
          }
        }
LAB_10aa3d8c8:
        if (*(int *)(*plVar11 + 8) < *(int *)(lVar13 + 8)) {
          *plVar8 = *plVar11;
          *plVar11 = lVar13;
          lVar13 = *plVar10;
          if (*(int *)(*plVar8 + 8) < *(int *)(lVar13 + 8)) {
            *plVar10 = *plVar8;
            *plVar8 = lVar13;
            lVar13 = *plVar9;
            if (*(int *)(*plVar10 + 8) < *(int *)(lVar13 + 8)) {
              *plVar9 = *plVar10;
              *plVar10 = lVar13;
            }
          }
        }
        lVar13 = param_2[-1];
        lVar14 = *plVar11;
        if (*(int *)(lVar13 + 8) < *(int *)(lVar14 + 8)) {
          *plVar11 = lVar13;
          param_2[-1] = lVar14;
          lVar13 = *plVar8;
          if (*(int *)(*plVar11 + 8) < *(int *)(lVar13 + 8)) {
            *plVar8 = *plVar11;
            *plVar11 = lVar13;
            lVar13 = *plVar10;
            if (*(int *)(*plVar8 + 8) < *(int *)(lVar13 + 8)) {
              *plVar10 = *plVar8;
              *plVar8 = lVar13;
              lVar13 = *plVar9;
              if (*(int *)(*plVar10 + 8) < *(int *)(lVar13 + 8)) {
                *plVar9 = *plVar10;
                *plVar10 = lVar13;
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar17 < 0x18) {
      plVar10 = plVar9 + 1;
      if ((param_4 & 1) == 0) {
        if (plVar9 == param_2 || plVar10 == param_2) {
          return;
        }
        lVar15 = -8;
        lVar13 = 8;
        lVar14 = 0;
        do {
          lVar18 = lVar13;
          lVar13 = *plVar10;
          if (*(int *)(lVar13 + 8) < *(int *)(*(long *)((long)plVar9 + lVar14) + 8)) {
            plVar11 = (long *)0x0;
            *plVar10 = 0;
            lVar12 = *(long *)((long)plVar9 + lVar14);
            plVar8 = plVar10;
            lVar14 = lVar15;
            do {
              plVar8[-1] = 0;
              *plVar8 = lVar12;
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 8))();
              }
              if (lVar14 == 0) goto LAB_10aa3d7a8;
              plVar7 = plVar8 + -1;
              plVar11 = (long *)*plVar7;
              lVar12 = plVar8[-2];
              lVar14 = lVar14 + 8;
              plVar8 = plVar7;
            } while (*(int *)(lVar13 + 8) < *(int *)(lVar12 + 8));
            *plVar7 = lVar13;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
          }
          plVar10 = plVar10 + 1;
          lVar15 = lVar15 + -8;
          lVar13 = lVar18 + 8;
          lVar14 = lVar18;
          if (plVar10 == param_2) {
            return;
          }
        } while( true );
      }
      if (plVar9 == param_2 || plVar10 == param_2) {
        return;
      }
      lVar13 = 0;
      plVar8 = plVar9;
      do {
        plVar11 = plVar10;
        lVar14 = *plVar8;
        lVar15 = *plVar11;
        if (*(int *)(lVar15 + 8) < *(int *)(lVar14 + 8)) {
          plVar10 = (long *)0x0;
          *plVar11 = 0;
          lVar18 = lVar13;
          while( true ) {
            plVar8 = (long *)((long)plVar9 + lVar18);
            *plVar8 = 0;
            plVar8[1] = lVar14;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
            plVar10 = plVar9;
            if (lVar18 == 0) break;
            lVar14 = ((long *)((long)plVar9 + lVar18))[-1];
            plVar10 = (long *)((long)plVar9 + lVar18);
            if (*(int *)(lVar14 + 8) <= *(int *)(lVar15 + 8)) break;
            plVar10 = (long *)*plVar8;
            lVar18 = lVar18 + -8;
          }
          plVar8 = (long *)*plVar10;
          *plVar10 = lVar15;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))();
          }
        }
        lVar13 = lVar13 + 8;
        plVar10 = plVar11 + 1;
        plVar8 = plVar11;
        if (plVar11 + 1 == param_2) {
          return;
        }
      } while( true );
    }
    if (param_3 == 0) {
      if (plVar9 == param_2) {
        return;
      }
      uVar16 = uVar17 - 2 >> 1;
      uVar20 = uVar16;
      do {
        if ((long)uVar20 <= (long)uVar16) {
          uVar1 = uVar20 << 1 | 1;
          plVar10 = plVar9 + uVar1;
          uVar19 = uVar20 * 2 + 2;
          if ((long)uVar19 < (long)uVar17) {
            lVar13 = plVar10[1];
            plVar8 = plVar10 + 1;
            if (*(int *)(lVar13 + 8) <= *(int *)(*plVar10 + 8)) {
              plVar8 = plVar10;
              lVar13 = *plVar10;
              uVar19 = uVar1;
            }
          }
          else {
            plVar8 = plVar10;
            lVar13 = *plVar10;
            uVar19 = uVar1;
          }
          plVar10 = plVar9 + uVar20;
          lVar14 = *plVar10;
          if (*(int *)(lVar14 + 8) <= *(int *)(lVar13 + 8)) {
            *plVar10 = 0;
            lVar13 = *plVar8;
            do {
              plVar11 = plVar8;
              *plVar11 = 0;
              plVar8 = (long *)*plVar10;
              *plVar10 = lVar13;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 8))();
              }
              if ((long)uVar16 < (long)uVar19) break;
              uVar1 = uVar19 << 1 | 1;
              plVar10 = plVar9 + uVar1;
              uVar19 = uVar19 * 2 + 2;
              if ((long)uVar19 < (long)uVar17) {
                lVar13 = plVar10[1];
                plVar8 = plVar10 + 1;
                if (*(int *)(lVar13 + 8) <= *(int *)(*plVar10 + 8)) {
                  plVar8 = plVar10;
                  lVar13 = *plVar10;
                  uVar19 = uVar1;
                }
              }
              else {
                plVar8 = plVar10;
                lVar13 = *plVar10;
                uVar19 = uVar1;
              }
              plVar10 = plVar11;
            } while (*(int *)(lVar14 + 8) <= *(int *)(lVar13 + 8));
            plVar10 = (long *)*plVar11;
            *plVar11 = lVar14;
            if (plVar10 != (long *)0x0) {
              (**(code **)(*plVar10 + 8))();
            }
          }
        }
        bVar2 = uVar20 != 0;
        uVar20 = uVar20 - 1;
      } while (bVar2);
      do {
        uVar20 = 0;
        lVar13 = *plVar9;
        *plVar9 = 0;
        plVar10 = plVar9;
        do {
          plVar8 = plVar10 + uVar20 + 1;
          uVar19 = uVar20 << 1 | 1;
          uVar16 = uVar20 * 2 + 2;
          if ((long)uVar16 < (long)uVar17) {
            lVar14 = plVar10[uVar20 + 2];
            lVar15 = uVar20 + 1;
            plVar11 = plVar10 + uVar20 + 2;
            uVar20 = uVar16;
            if (*(int *)(lVar14 + 8) <= *(int *)(plVar10[lVar15] + 8)) {
              lVar14 = plVar10[lVar15];
              plVar11 = plVar8;
              uVar20 = uVar19;
            }
          }
          else {
            lVar14 = *plVar8;
            plVar11 = plVar8;
            uVar20 = uVar19;
          }
          *plVar11 = 0;
          plVar8 = (long *)*plVar10;
          *plVar10 = lVar14;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))();
          }
          plVar10 = plVar11;
        } while ((long)uVar20 <= (long)(uVar17 - 2 >> 1));
        param_2 = param_2 + -1;
        if (plVar11 == param_2) {
          plVar10 = (long *)*plVar11;
          *plVar11 = lVar13;
joined_r0x00010aa3d684:
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
        }
        else {
          lVar14 = *param_2;
          *param_2 = 0;
          plVar10 = (long *)*plVar11;
          *plVar11 = lVar14;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          plVar10 = (long *)*param_2;
          *param_2 = lVar13;
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          lVar13 = (long)plVar11 + (8 - (long)plVar9) >> 3;
          if (1 < lVar13) {
            uVar20 = lVar13 - 2U >> 1;
            plVar10 = plVar9 + uVar20;
            lVar13 = *plVar11;
            if (*(int *)(*plVar10 + 8) < *(int *)(lVar13 + 8)) {
              *plVar11 = 0;
              lVar14 = *plVar10;
              do {
                plVar8 = plVar10;
                *plVar8 = 0;
                plVar10 = (long *)*plVar11;
                *plVar11 = lVar14;
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 8))();
                }
                if (uVar20 == 0) break;
                uVar20 = uVar20 - 1 >> 1;
                lVar14 = plVar9[uVar20];
                plVar10 = plVar9 + uVar20;
                plVar11 = plVar8;
              } while (*(int *)(lVar14 + 8) < *(int *)(lVar13 + 8));
              plVar10 = (long *)*plVar8;
              *plVar8 = lVar13;
              goto joined_r0x00010aa3d684;
            }
          }
        }
        bVar2 = (long)uVar17 < 3;
        uVar17 = uVar17 - 1;
        if (bVar2) {
          return;
        }
      } while( true );
    }
    plVar10 = plVar9 + (uVar17 >> 1);
    lVar13 = param_2[-1];
    iVar3 = *(int *)(lVar13 + 8);
    if (uVar17 < 0x81) {
      lVar15 = *plVar9;
      iVar4 = *(int *)(lVar15 + 8);
      lVar14 = *plVar10;
      iVar5 = *(int *)(lVar14 + 8);
      if (iVar4 < iVar5) {
        if (iVar3 < iVar4) {
          *plVar10 = lVar13;
        }
        else {
          *plVar10 = lVar15;
          *plVar9 = lVar14;
          if (iVar5 <= *(int *)(param_2[-1] + 8)) goto LAB_10aa3cf94;
          *plVar9 = param_2[-1];
        }
        param_2[-1] = lVar14;
      }
      else if (iVar3 < iVar4) {
        *plVar9 = lVar13;
        param_2[-1] = lVar15;
        lVar13 = *plVar10;
        if (*(int *)(*plVar9 + 8) < *(int *)(lVar13 + 8)) {
          *plVar10 = *plVar9;
          *plVar9 = lVar13;
        }
      }
    }
    else {
      lVar15 = *plVar10;
      iVar4 = *(int *)(lVar15 + 8);
      lVar14 = *plVar9;
      iVar5 = *(int *)(lVar14 + 8);
      if (iVar4 < iVar5) {
        if (iVar3 < iVar4) {
          *plVar9 = lVar13;
        }
        else {
          *plVar9 = lVar15;
          *plVar10 = lVar14;
          if (iVar5 <= *(int *)(param_2[-1] + 8)) goto LAB_10aa3cdf0;
          *plVar10 = param_2[-1];
        }
        param_2[-1] = lVar14;
      }
      else if (iVar3 < iVar4) {
        *plVar10 = lVar13;
        param_2[-1] = lVar15;
        lVar13 = *plVar9;
        if (*(int *)(*plVar10 + 8) < *(int *)(lVar13 + 8)) {
          *plVar9 = *plVar10;
          *plVar10 = lVar13;
        }
      }
LAB_10aa3cdf0:
      plVar8 = plVar10 + -1;
      lVar14 = *plVar8;
      iVar3 = *(int *)(lVar14 + 8);
      lVar13 = plVar9[1];
      iVar4 = *(int *)(lVar13 + 8);
      lVar15 = param_2[-2];
      if (iVar3 < iVar4) {
        if (*(int *)(lVar15 + 8) < iVar3) {
          plVar9[1] = lVar15;
        }
        else {
          plVar9[1] = lVar14;
          *plVar8 = lVar13;
          if (iVar4 <= *(int *)(param_2[-2] + 8)) goto LAB_10aa3ce9c;
          *plVar8 = param_2[-2];
        }
        param_2[-2] = lVar13;
      }
      else if (*(int *)(lVar15 + 8) < iVar3) {
        *plVar8 = lVar15;
        param_2[-2] = lVar14;
        lVar13 = plVar9[1];
        if (*(int *)(*plVar8 + 8) < *(int *)(lVar13 + 8)) {
          plVar9[1] = *plVar8;
          *plVar8 = lVar13;
        }
      }
LAB_10aa3ce9c:
      plVar11 = plVar10 + 1;
      lVar14 = *plVar11;
      iVar3 = *(int *)(lVar14 + 8);
      lVar13 = plVar9[2];
      iVar4 = *(int *)(lVar13 + 8);
      lVar15 = param_2[-3];
      if (iVar3 < iVar4) {
        if (*(int *)(lVar15 + 8) < iVar3) {
          plVar9[2] = lVar15;
        }
        else {
          plVar9[2] = lVar14;
          *plVar11 = lVar13;
          if (iVar4 <= *(int *)(param_2[-3] + 8)) goto LAB_10aa3cf24;
          *plVar11 = param_2[-3];
        }
        param_2[-3] = lVar13;
      }
      else if (*(int *)(lVar15 + 8) < iVar3) {
        *plVar11 = lVar15;
        param_2[-3] = lVar14;
        lVar13 = plVar9[2];
        if (*(int *)(*plVar11 + 8) < *(int *)(lVar13 + 8)) {
          plVar9[2] = *plVar11;
          *plVar11 = lVar13;
        }
      }
LAB_10aa3cf24:
      lVar13 = plVar10[-1];
      lVar14 = *plVar10;
      iVar3 = *(int *)(lVar14 + 8);
      iVar4 = *(int *)(lVar13 + 8);
      lVar15 = plVar10[1];
      iVar5 = *(int *)(lVar15 + 8);
      if (iVar3 < iVar4) {
        lVar18 = lVar14;
        if (iVar3 <= iVar5) {
          plVar10[-1] = lVar14;
          *plVar10 = lVar13;
          plVar8 = plVar10;
          lVar14 = lVar13;
          lVar18 = lVar15;
          if (iVar4 <= iVar5) goto LAB_10aa3cf88;
        }
LAB_10aa3cf80:
        *plVar8 = lVar15;
        *plVar11 = lVar13;
        lVar14 = lVar18;
      }
      else if (iVar5 < iVar3) {
        *plVar10 = lVar15;
        plVar10[1] = lVar14;
        plVar11 = plVar10;
        lVar14 = lVar15;
        lVar18 = lVar13;
        if (iVar5 < iVar4) goto LAB_10aa3cf80;
      }
LAB_10aa3cf88:
      lVar13 = *plVar9;
      *plVar9 = lVar14;
      *plVar10 = lVar13;
    }
LAB_10aa3cf94:
    param_3 = param_3 + -1;
    lVar13 = *plVar9;
    param_1 = plVar9;
    if (((param_4 & 1) != 0) || (iVar3 = *(int *)(lVar13 + 8), *(int *)(plVar9[-1] + 8) < iVar3)) {
      lVar14 = 0;
      *plVar9 = 0;
      do {
        plVar10 = (long *)((long)plVar9 + lVar14 + 8);
        if (plVar10 == param_2) goto LAB_10aa3d7a8;
        lVar15 = *plVar10;
        iVar3 = *(int *)(lVar13 + 8);
        lVar14 = lVar14 + 8;
      } while (*(int *)(lVar15 + 8) < iVar3);
      plVar10 = (long *)((long)plVar9 + lVar14);
      plVar8 = param_2;
      if (lVar14 == 8) {
        do {
          if (plVar8 <= plVar10) break;
          plVar8 = plVar8 + -1;
        } while (iVar3 <= *(int *)(*plVar8 + 8));
      }
      else {
        do {
          if (plVar8 == plVar9) {
LAB_10aa3d7a8:
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10aa3d7ac);
            (*pcVar6)();
          }
          plVar8 = plVar8 + -1;
        } while (iVar3 <= *(int *)(*plVar8 + 8));
      }
      param_1 = plVar10;
      if (plVar10 < plVar8) {
        lVar14 = *plVar8;
        plVar11 = plVar8;
        do {
          *param_1 = lVar14;
          *plVar11 = lVar15;
          do {
            param_1 = param_1 + 1;
            if (param_1 == param_2) goto LAB_10aa3d7a8;
            lVar15 = *param_1;
          } while (*(int *)(lVar15 + 8) < iVar3);
          do {
            if (plVar11 == plVar9) goto LAB_10aa3d7a8;
            plVar11 = plVar11 + -1;
            lVar14 = *plVar11;
          } while (iVar3 <= *(int *)(lVar14 + 8));
        } while (param_1 < plVar11);
      }
      plVar11 = param_1 + -1;
      if (plVar11 != plVar9) {
        lVar14 = *plVar11;
        *plVar11 = 0;
        plVar7 = (long *)*plVar9;
        *plVar9 = lVar14;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
      }
      plVar7 = (long *)*plVar11;
      *plVar11 = lVar13;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (plVar10 < plVar8) {
LAB_10aa3d104:
        FUN_10aa3cc8c(plVar9,plVar11,param_3,param_4 & 1);
        param_4 = 0;
      }
      else {
        plVar10 = plVar9;
        FUN_10aa3d9a8(plVar9,plVar11);
        plVar8 = param_1;
        FUN_10aa3d9a8(param_1,param_2);
        if ((int)plVar8 == 0) {
          if (((ulong)plVar10 & 1) == 0) goto LAB_10aa3d104;
        }
        else {
          param_1 = plVar9;
          param_2 = plVar11;
          if (((ulong)plVar10 & 1) != 0) {
            return;
          }
        }
      }
      goto LAB_10aa3ccb8;
    }
    *plVar9 = 0;
    if (iVar3 < *(int *)(param_2[-1] + 8)) {
      do {
        param_1 = param_1 + 1;
        if (param_1 == param_2) goto LAB_10aa3d7a8;
      } while (*(int *)(*param_1 + 8) <= iVar3);
    }
    else {
      do {
        param_1 = param_1 + 1;
        if (param_2 <= param_1) break;
      } while (*(int *)(*param_1 + 8) <= iVar3);
    }
    plVar10 = param_2;
    if (param_1 < param_2) {
      do {
        if (plVar10 == plVar9) goto LAB_10aa3d7a8;
        plVar10 = plVar10 + -1;
      } while (iVar3 < *(int *)(*plVar10 + 8));
    }
    if (param_1 < plVar10) {
      lVar14 = *param_1;
      lVar15 = *plVar10;
      do {
        *param_1 = lVar15;
        *plVar10 = lVar14;
        do {
          param_1 = param_1 + 1;
          if (param_1 == param_2) goto LAB_10aa3d7a8;
          lVar14 = *param_1;
        } while (*(int *)(lVar14 + 8) <= iVar3);
        do {
          if (plVar10 == plVar9) goto LAB_10aa3d7a8;
          plVar10 = plVar10 + -1;
          lVar15 = *plVar10;
        } while (iVar3 < *(int *)(lVar15 + 8));
      } while (param_1 < plVar10);
    }
    plVar10 = param_1 + -1;
    if (plVar10 != plVar9) {
      lVar14 = *plVar10;
      *plVar10 = 0;
      plVar8 = (long *)*plVar9;
      *plVar9 = lVar14;
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
    }
    param_4 = 0;
    plVar9 = (long *)*plVar10;
    *plVar10 = lVar13;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 8))();
      param_4 = 0;
    }
  } while( true );
}



/* Entry: 10aa3d834; end: 10aa3d9a7;  */

void FUN_10aa3d834(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *param_2;
  iVar1 = *(int *)(lVar3 + 8);
  lVar4 = *param_1;
  iVar2 = *(int *)(lVar4 + 8);
  lVar5 = *param_3;
  if (iVar1 < iVar2) {
    if (*(int *)(lVar5 + 8) < iVar1) {
      *param_1 = lVar5;
    }
    else {
      *param_1 = lVar3;
      *param_2 = lVar4;
      lVar5 = *param_3;
      if (iVar2 <= *(int *)(lVar5 + 8)) goto LAB_10aa3d8c8;
      *param_2 = lVar5;
    }
    *param_3 = lVar4;
    lVar5 = lVar4;
  }
  else if (*(int *)(lVar5 + 8) < iVar1) {
    *param_2 = lVar5;
    *param_3 = lVar3;
    lVar4 = *param_1;
    lVar5 = lVar3;
    if (*(int *)(*param_2 + 8) < *(int *)(lVar4 + 8)) {
      *param_1 = *param_2;
      *param_2 = lVar4;
      lVar5 = *param_3;
    }
  }
LAB_10aa3d8c8:
  if (*(int *)(*param_4 + 8) < *(int *)(lVar5 + 8)) {
    *param_3 = *param_4;
    *param_4 = lVar5;
    lVar5 = *param_2;
    if (*(int *)(*param_3 + 8) < *(int *)(lVar5 + 8)) {
      *param_2 = *param_3;
      *param_3 = lVar5;
      lVar5 = *param_1;
      if (*(int *)(*param_2 + 8) < *(int *)(lVar5 + 8)) {
        *param_1 = *param_2;
        *param_2 = lVar5;
      }
    }
  }
  lVar5 = *param_4;
  if (*(int *)(*param_5 + 8) < *(int *)(lVar5 + 8)) {
    *param_4 = *param_5;
    *param_5 = lVar5;
    lVar5 = *param_3;
    if (*(int *)(*param_4 + 8) < *(int *)(lVar5 + 8)) {
      *param_3 = *param_4;
      *param_4 = lVar5;
      lVar5 = *param_2;
      if (*(int *)(*param_3 + 8) < *(int *)(lVar5 + 8)) {
        *param_2 = *param_3;
        *param_3 = lVar5;
        lVar5 = *param_1;
        if (*(int *)(*param_2 + 8) < *(int *)(lVar5 + 8)) {
          *param_1 = *param_2;
          *param_2 = lVar5;
        }
      }
    }
  }
  return;
}



/* Entry: 10aa3d9a8; end: 10aa3dcef;  */

bool FUN_10aa3d9a8(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  
  uVar6 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar6 < 3) {
    if (uVar6 < 2) {
      return true;
    }
    if (uVar6 == 2) {
      lVar7 = *param_1;
      if (*(int *)(param_2[-1] + 8) < *(int *)(lVar7 + 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar7;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar6 == 3) {
      lVar7 = *param_1;
      lVar8 = param_1[1];
      iVar12 = *(int *)(lVar8 + 8);
      iVar1 = *(int *)(lVar7 + 8);
      lVar9 = param_2[-1];
      if (iVar12 < iVar1) {
        if (*(int *)(lVar9 + 8) < iVar12) {
          *param_1 = lVar9;
        }
        else {
          *param_1 = lVar8;
          param_1[1] = lVar7;
          if (iVar1 <= *(int *)(param_2[-1] + 8)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = lVar7;
        return true;
      }
      if (*(int *)(lVar9 + 8) < iVar12) {
        param_1[1] = lVar9;
        param_2[-1] = lVar8;
        lVar7 = *param_1;
        if (*(int *)(param_1[1] + 8) < *(int *)(lVar7 + 8)) {
          *param_1 = param_1[1];
          param_1[1] = lVar7;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar6 == 4) {
      plVar10 = param_1 + 1;
      lVar7 = *plVar10;
      plVar4 = param_1 + 2;
      lVar8 = *plVar4;
      iVar12 = *(int *)(lVar7 + 8);
      lVar9 = *param_1;
      iVar1 = *(int *)(lVar9 + 8);
      iVar2 = *(int *)(lVar8 + 8);
      plVar3 = param_1;
      if (iVar12 < iVar1) {
        lVar5 = lVar9;
        plVar11 = plVar4;
        if (iVar12 <= iVar2) {
          *param_1 = lVar7;
          param_1[1] = lVar9;
          lVar7 = lVar8;
          plVar3 = plVar10;
          goto joined_r0x00010aa3dc40;
        }
      }
      else {
        lVar13 = lVar8;
        if (iVar12 <= iVar2) goto LAB_10aa3dc58;
        *plVar10 = lVar8;
        *plVar4 = lVar7;
        plVar11 = plVar10;
        lVar5 = lVar7;
joined_r0x00010aa3dc40:
        lVar13 = lVar7;
        if (iVar1 <= iVar2) goto LAB_10aa3dc58;
      }
      *plVar3 = lVar8;
      *plVar11 = lVar9;
      lVar13 = lVar5;
LAB_10aa3dc58:
      if (*(int *)(lVar13 + 8) <= *(int *)(param_2[-1] + 8)) {
        return true;
      }
      *plVar4 = param_2[-1];
      param_2[-1] = lVar13;
      lVar8 = *plVar4;
      iVar12 = *(int *)(lVar8 + 8);
      lVar7 = *plVar10;
      if (iVar12 < *(int *)(lVar7 + 8)) {
        param_1[1] = lVar8;
        param_1[2] = lVar7;
        lVar7 = *param_1;
        if (iVar12 < *(int *)(lVar7 + 8)) {
          *param_1 = lVar8;
          param_1[1] = lVar7;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar6 == 5) {
      FUN_10aa3d834(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  plVar3 = param_1 + 2;
  lVar7 = *plVar3;
  plVar4 = param_1 + 1;
  lVar9 = *plVar4;
  iVar12 = *(int *)(lVar9 + 8);
  lVar8 = *param_1;
  iVar1 = *(int *)(lVar8 + 8);
  iVar2 = *(int *)(lVar7 + 8);
  plVar10 = param_1;
  if (iVar12 < iVar1) {
    plVar11 = plVar3;
    if (iVar12 <= iVar2) {
      *param_1 = lVar9;
      param_1[1] = lVar8;
      plVar10 = plVar4;
      plVar4 = plVar3;
      goto LAB_10aa3db4c;
    }
  }
  else {
    if (iVar12 <= iVar2) goto LAB_10aa3db5c;
    *plVar4 = lVar7;
    *plVar3 = lVar9;
LAB_10aa3db4c:
    plVar11 = plVar4;
    if (iVar1 <= iVar2) goto LAB_10aa3db5c;
  }
  *plVar10 = lVar7;
  *plVar11 = lVar8;
LAB_10aa3db5c:
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    iVar12 = 0;
    plVar10 = param_1 + 3;
    do {
      lVar9 = *plVar10;
      lVar8 = *plVar3;
      if (*(int *)(lVar9 + 8) < *(int *)(lVar8 + 8)) {
        plVar3 = (long *)0x0;
        *plVar10 = 0;
        lVar13 = lVar7;
        while( true ) {
          *(undefined8 *)((long)param_1 + lVar13 + 0x10) = 0;
          *(long *)((long)param_1 + lVar13 + 0x18) = lVar8;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          plVar3 = param_1;
          if (lVar13 == -0x10) goto LAB_10aa3dbe4;
          lVar8 = *(long *)((long)param_1 + lVar13 + 8);
          if (*(int *)(lVar8 + 8) <= *(int *)(lVar9 + 8)) break;
          plVar3 = *(long **)((long)param_1 + lVar13 + 0x10);
          lVar13 = lVar13 + -8;
        }
        plVar3 = (long *)((long)param_1 + lVar13 + 0x10);
LAB_10aa3dbe4:
        plVar4 = (long *)*plVar3;
        *plVar3 = lVar9;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 8))();
        }
        iVar12 = iVar12 + 1;
        if (iVar12 == 8) {
          return plVar10 + 1 == param_2;
        }
      }
      plVar4 = plVar10 + 1;
      lVar7 = lVar7 + 8;
      plVar3 = plVar10;
      plVar10 = plVar4;
    } while (plVar4 != param_2);
  }
  return true;
}



/* Entry: 10aa3dcf0; end: 10aa3dd03;  */

void FUN_10aa3dcf0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *puVar1 = &PTR_FUN_110c3d550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa3dd04; end: 10aa3dd13;  */

void FUN_10aa3dd04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3d550;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10aa3dd14; end: 10aa3dd33;  */

void FUN_10aa3dd14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3d550;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa3dd34; end: 10aa3dd43;  */

void FUN_10aa3dd34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010aa3dd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10aa3dd44; end: 10aa3dd9b;  */

long FUN_10aa3dd44(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1;
}



/* Entry: 10aa3dd9c; end: 10aa3df37;  */

void FUN_10aa3dd9c(long *param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  puVar10 = (undefined8 *)*param_1;
  if ((ulong)(param_1[2] - (long)puVar10 >> 4) < param_4) {
    plVar4 = param_1;
    FUN_10aa3df38();
    if (param_4 >> 0x3c != 0) {
      FUN_10a26e820();
      lVar9 = *plVar4;
      if (lVar9 != 0) {
        lVar5 = plVar4[1];
        lVar7 = lVar9;
        if (lVar5 != lVar9) {
          do {
            lVar5 = lVar5 + -0x10;
            func_0x00010a26e868();
          } while (lVar5 != lVar9);
          lVar7 = *plVar4;
        }
        plVar4[1] = lVar9;
        __ZdlPv(lVar7);
        *plVar4 = 0;
        plVar4[1] = 0;
        plVar4[2] = 0;
      }
      return;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    FUN_10a26e7e8(param_1,uVar8);
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      lVar9 = param_2[1];
      uVar11 = *param_2;
      puVar6[1] = param_2[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  else {
    puVar6 = (undefined8 *)param_1[1];
    lVar9 = (long)puVar6 - (long)puVar10;
    if (param_4 <= (ulong)(lVar9 >> 4)) {
      if (param_2 != param_3) {
        do {
          func_0x00010aa3df94(puVar10,param_2);
          param_2 = param_2 + 2;
          puVar10 = puVar10 + 2;
        } while (param_2 != param_3);
        puVar6 = (undefined8 *)param_1[1];
      }
      while (puVar6 != puVar10) {
        puVar6 = puVar6 + -2;
        func_0x00010a26e868();
      }
      param_1[1] = (long)puVar10;
      return;
    }
    puVar1 = (undefined8 *)((long)param_2 + lVar9);
    if (puVar6 != puVar10) {
      do {
        func_0x00010aa3df94(puVar10,param_2);
        param_2 = param_2 + 2;
        puVar10 = puVar10 + 2;
        lVar9 = lVar9 + -0x10;
      } while (lVar9 != 0);
      puVar6 = (undefined8 *)param_1[1];
    }
    for (; puVar1 != param_3; puVar1 = puVar1 + 2) {
      lVar9 = puVar1[1];
      uVar11 = *puVar1;
      puVar6[1] = puVar1[1];
      *puVar6 = uVar11;
      if (lVar9 != 0) {
        plVar4 = (long *)(lVar9 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar3) {
            *plVar4 = *plVar4 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      puVar6 = puVar6 + 2;
    }
  }
  param_1[1] = (long)puVar6;
  return;
}



/* Entry: 10aa3df38; end: 10aa3e00f;  */

void FUN_10aa3df38(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    lVar2 = lVar3;
    if (lVar1 != lVar3) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x00010a26e868();
      } while (lVar1 != lVar3);
      lVar2 = *param_1;
    }
    param_1[1] = lVar3;
    __ZdlPv(lVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Entry: 10aa3e010; end: 10aa3e13b;  */

long * FUN_10aa3e010(long *param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  plVar7 = (long *)*param_1;
  plVar4 = param_1;
  if ((ulong)(param_1[2] - (long)plVar7 >> 4) < param_4) {
    plVar3 = param_1;
    plVar6 = param_2;
    func_0x00010a4aebec();
    if (param_4 >> 0x3c != 0) {
      func_0x00010a4aecd0();
      param_1[1] = param_4;
      __Unwind_Resume();
      for (; plVar3 != plVar6; plVar3 = plVar3 + 2) {
        lVar10 = plVar3[1];
        lVar9 = *plVar3;
        if (plVar3[1] != 0) {
          plVar4 = (long *)(plVar3[1] + 0x10);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *plVar4 = *plVar4 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lVar5 = plVar7[1];
        plVar7[1] = lVar10;
        *plVar7 = lVar9;
        if (lVar5 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        plVar7 = plVar7 + 2;
      }
      return plVar7;
    }
    uVar8 = param_1[2] - *param_1 >> 3;
    if (uVar8 <= param_4) {
      uVar8 = param_4;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar8 = 0xfffffffffffffff;
    }
    FUN_10a60f1e8(param_1,uVar8);
    func_0x00010a60f220(param_1,param_2,param_3,param_1[1]);
  }
  else {
    lVar9 = param_1[1] - (long)plVar7;
    if (param_4 <= (ulong)(lVar9 >> 4)) {
      FUN_10aa3e13c(param_2,param_3);
      plVar4 = param_2;
      for (plVar7 = (long *)param_1[1]; plVar7 != param_2; plVar7 = plVar7 + -2) {
        plVar4 = (long *)plVar7[-1];
        if (plVar4 != (long *)0x0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
      param_1[1] = (long)param_2;
      return plVar4;
    }
    FUN_10aa3e13c(param_2,(long)param_2 + lVar9);
    func_0x00010a60f220(param_1,(long)param_2 + lVar9,param_3,param_1[1]);
  }
  param_1[1] = (long)plVar4;
  return plVar4;
}



/* Entry: 10aa3e13c; end: 10aa3e1b3;  */

undefined8 * FUN_10aa3e13c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    uVar6 = param_1[1];
    uVar5 = *param_1;
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar4 = param_3[1];
    param_3[1] = uVar6;
    *param_3 = uVar5;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}



/* Entry: 10aa3e1b4; end: 10aa3e21f;  */

void FUN_10aa3e1b4(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar5 = **(long **)(param_2 + 0x10);
  if (*(ulong *)(param_2 + 0x18) < (ulong)((*(long **)(param_2 + 0x10))[1] - lVar5 >> 4)) {
    puVar2 = (undefined8 *)(lVar5 + *(ulong *)(param_2 + 0x18) * 0x10);
    uVar7 = param_1[1];
    uVar6 = *param_1;
    if (param_1[1] != 0) {
      plVar1 = (long *)(param_1[1] + 0x10);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar5 = puVar2[1];
    puVar2[1] = uVar7;
    *puVar2 = uVar6;
    if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
      return;
    }
  }
  return;
}



/* Entry: 10aa3e220; end: 10aa3e25b;  */

void FUN_10aa3e220(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((ulong)param_2 >> 0x3b == 0) {
    puVar2 = param_2;
    FUN_10aa3e270();
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2 + (long)puVar2 * 4;
    return;
  }
  FUN_10aa3e25c();
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b != 0) {
    func_0x000109ffded8();
    puVar2 = (undefined8 *)&DAT_10f62a4d8;
    FUN_109ffde64();
    if ((undefined8 *)0x666666666666666 < puVar2) {
      func_0x000109ffded8();
      puVar3 = puVar2;
      if (puVar2 != param_2) {
        do {
          uVar4 = *puVar3;
          *(undefined8 *)((long)param_3 + 6) = *(undefined8 *)((long)puVar3 + 6);
          *param_3 = uVar4;
          param_3[3] = 0;
          param_3[4] = 0;
          param_3[2] = 0;
          uVar4 = puVar3[2];
          param_3[3] = puVar3[3];
          param_3[2] = uVar4;
          param_3[4] = puVar3[4];
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3 = puVar3 + 5;
          param_3 = param_3 + 5;
        } while (puVar3 != param_2);
        do {
          if (puVar2[2] != 0) {
            puVar2[3] = puVar2[2];
            __ZdlPv();
          }
          puVar2 = puVar2 + 5;
        } while (puVar2 != param_2);
      }
      return;
    }
    __Znwm((long)puVar2 * 0x28);
    return;
  }
  __Znwm((long)puVar1 << 5);
  return;
}



/* Entry: 10aa3e25c; end: 10aa3e26f;  */

void FUN_10aa3e25c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3b == 0) {
    __Znwm((long)puVar1 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < puVar2) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        uVar4 = *puVar3;
        *(undefined8 *)((long)param_3 + 6) = *(undefined8 *)((long)puVar3 + 6);
        *param_3 = uVar4;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[2] = 0;
        uVar4 = puVar3[2];
        param_3[3] = puVar3[3];
        param_3[2] = uVar4;
        param_3[4] = puVar3[4];
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3 = puVar3 + 5;
        param_3 = param_3 + 5;
      } while (puVar3 != param_2);
      do {
        if (puVar2[2] != 0) {
          puVar2[3] = puVar2[2];
          __ZdlPv();
        }
        puVar2 = puVar2 + 5;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 * 0x28);
  return;
}



/* Entry: 10aa3e270; end: 10aa3e2a3;  */

void FUN_10aa3e270(ulong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 >> 0x3b == 0) {
    __Znwm(param_1 << 5);
    return;
  }
  func_0x000109ffded8();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar3 = *puVar2;
        *(undefined8 *)((long)param_3 + 6) = *(undefined8 *)((long)puVar2 + 6);
        *param_3 = uVar3;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[2] = 0;
        uVar3 = puVar2[2];
        param_3[3] = puVar2[3];
        param_3[2] = uVar3;
        param_3[4] = puVar2[4];
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2 = puVar2 + 5;
        param_3 = param_3 + 5;
      } while (puVar2 != param_2);
      do {
        if (puVar1[2] != 0) {
          puVar1[3] = puVar1[2];
          __ZdlPv();
        }
        puVar1 = puVar1 + 5;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x28);
  return;
}



/* Entry: 10aa3e2a4; end: 10aa3e2b7;  */

void FUN_10aa3e2a4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x666666666666666 < puVar1) {
    func_0x000109ffded8();
    puVar2 = puVar1;
    if (puVar1 != param_2) {
      do {
        uVar3 = *puVar2;
        *(undefined8 *)((long)param_3 + 6) = *(undefined8 *)((long)puVar2 + 6);
        *param_3 = uVar3;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[2] = 0;
        uVar3 = puVar2[2];
        param_3[3] = puVar2[3];
        param_3[2] = uVar3;
        param_3[4] = puVar2[4];
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2 = puVar2 + 5;
        param_3 = param_3 + 5;
      } while (puVar2 != param_2);
      do {
        if (puVar1[2] != 0) {
          puVar1[3] = puVar1[2];
          __ZdlPv();
        }
        puVar1 = puVar1 + 5;
      } while (puVar1 != param_2);
    }
    return;
  }
  __Znwm((long)puVar1 * 0x28);
  return;
}



/* Entry: 10aa3e2b8; end: 10aa3e3e3;  */

void FUN_10aa3e2b8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((undefined8 *)0x666666666666666 < param_1) {
    func_0x000109ffded8();
    puVar1 = param_1;
    if (param_1 != param_2) {
      do {
        uVar2 = *puVar1;
        *(undefined8 *)((long)param_3 + 6) = *(undefined8 *)((long)puVar1 + 6);
        *param_3 = uVar2;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[2] = 0;
        uVar2 = puVar1[2];
        param_3[3] = puVar1[3];
        param_3[2] = uVar2;
        param_3[4] = puVar1[4];
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1 = puVar1 + 5;
        param_3 = param_3 + 5;
      } while (puVar1 != param_2);
      do {
        if (param_1[2] != 0) {
          param_1[3] = param_1[2];
          __ZdlPv();
        }
        param_1 = param_1 + 5;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x28);
  return;
}



/* Entry: 10aa3e3e4; end: 10aa3f34b;  */

void FUN_10aa3e3e4(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  short *psVar1;
  code *pcVar2;
  bool bVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  short sVar24;
  ulong *puVar25;
  ulong *puVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uStack_80;
  ulong uStack_78;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined6 uStack_30;
  undefined2 uStack_2a;
  
LAB_10aa3e420:
  puVar12 = param_2 + -5;
  puVar6 = param_1;
LAB_10aa3e438:
  do {
    param_1 = puVar6;
    uVar21 = (long)param_2 - (long)param_1;
    uVar22 = ((long)uVar21 >> 3) * -0x3333333333333333;
    if (uVar22 - 2 != 0 && 1 < (long)uVar22) {
      if (uVar22 != 3) {
        if (uVar22 == 4) {
          FUN_10aa3f3e0(param_1,param_1 + 5,param_1 + 10);
          if (param_2[-5] == param_1[10]) {
            if (*(short *)((long)param_2 + -0x1c) == -1) {
              return;
            }
            if (*(short *)((long)param_1 + 0x5c) != -1) {
              return;
            }
          }
          else if (param_1[10] <= param_2[-5]) {
            return;
          }
          FUN_10aa3f34c(param_1 + 10);
          if (param_1[10] == param_1[5]) {
            if (*(short *)((long)param_1 + 0x5c) == -1) {
              return;
            }
            if (*(short *)((long)param_1 + 0x34) != -1) {
              return;
            }
          }
          else if (param_1[5] <= param_1[10]) {
            return;
          }
          FUN_10aa3f34c(param_1 + 5,param_1 + 10);
          if (param_1[5] == *param_1) {
            if (*(short *)((long)param_1 + 0x34) == -1) {
              return;
            }
            if (*(short *)((long)param_1 + 0xc) != -1) {
              return;
            }
          }
          else if (*param_1 <= param_1[5]) {
            return;
          }
          puVar6 = param_1 + 5;
          goto code_r0x00010aa3f34c;
        }
        if (uVar22 != 5) goto LAB_10aa3e478;
        puVar6 = param_1 + 5;
        puVar4 = param_1 + 10;
        puVar5 = param_1 + 0xf;
        FUN_10aa3f3e0();
        if (*puVar5 == *puVar4) {
          if (*(short *)((long)param_1 + 0x84) != -1 && *(short *)((long)param_1 + 0x5c) == -1)
          goto LAB_10aa3f594;
        }
        else if (*puVar5 < *puVar4) {
LAB_10aa3f594:
          FUN_10aa3f34c(puVar4,puVar5);
          if (*puVar4 == *puVar6) {
            if ((*(short *)((long)param_1 + 0x5c) != -1) && (*(short *)((long)param_1 + 0x34) == -1)
               ) goto LAB_10aa3f5d4;
          }
          else if (*puVar4 < *puVar6) {
LAB_10aa3f5d4:
            FUN_10aa3f34c(puVar6,puVar4);
            if (*puVar6 == *param_1) {
              if ((*(short *)((long)param_1 + 0x34) != -1) &&
                 (*(short *)((long)param_1 + 0xc) == -1)) goto LAB_10aa3f614;
            }
            else if (*puVar6 < *param_1) {
LAB_10aa3f614:
              FUN_10aa3f34c(param_1,puVar6);
            }
          }
        }
        if (*puVar12 == *puVar5) {
          if (*(short *)((long)param_2 + -0x1c) == -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0x84) != -1) {
            return;
          }
        }
        else if (*puVar5 <= *puVar12) {
          return;
        }
        FUN_10aa3f34c(puVar5,puVar12);
        if (*puVar5 == *puVar4) {
          if (*(short *)((long)param_1 + 0x84) == -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0x5c) != -1) {
            return;
          }
        }
        else if (*puVar4 <= *puVar5) {
          return;
        }
        FUN_10aa3f34c(puVar4,puVar5);
        if (*puVar4 == *puVar6) {
          if (*(short *)((long)param_1 + 0x5c) == -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0x34) != -1) {
            return;
          }
        }
        else if (*puVar6 <= *puVar4) {
          return;
        }
        FUN_10aa3f34c(puVar6,puVar4);
        if (*puVar6 == *param_1) {
          if (*(short *)((long)param_1 + 0x34) == -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0xc) != -1) {
            return;
          }
        }
        else if (*param_1 <= *puVar6) {
          return;
        }
        goto code_r0x00010aa3f34c;
      }
      puVar4 = param_1 + 5;
      uVar21 = *puVar4;
      if (uVar21 == *param_1) {
        if (*(short *)((long)param_1 + 0x34) == -1 || *(short *)((long)param_1 + 0xc) != -1)
        goto LAB_10aa3f440;
LAB_10aa3f410:
        puVar6 = puVar12;
        if (*puVar12 == uVar21) {
          if (*(short *)((long)param_2 + -0x1c) != -1 && *(short *)((long)param_1 + 0x34) == -1)
          goto code_r0x00010aa3f34c;
        }
        else if (*puVar12 < uVar21) goto code_r0x00010aa3f34c;
        FUN_10aa3f34c(param_1,puVar4);
        if (*puVar12 != *puVar4) {
          param_1 = puVar4;
          if (*puVar4 <= *puVar12) {
            return;
          }
          goto code_r0x00010aa3f34c;
        }
        if (*(short *)((long)param_2 + -0x1c) == -1) {
          return;
        }
        sVar24 = *(short *)((long)param_1 + 0x34);
        param_1 = puVar4;
      }
      else {
        if (uVar21 < *param_1) goto LAB_10aa3f410;
LAB_10aa3f440:
        if (*puVar12 == uVar21) {
          if (*(short *)((long)param_2 + -0x1c) == -1 || *(short *)((long)param_1 + 0x34) != -1) {
            return;
          }
        }
        else if (uVar21 <= *puVar12) {
          return;
        }
        FUN_10aa3f34c(puVar4,puVar12);
        if (*puVar4 != *param_1) {
          puVar6 = puVar4;
          if (*param_1 <= *puVar4) {
            return;
          }
          goto code_r0x00010aa3f34c;
        }
        if (*(short *)((long)param_1 + 0x34) == -1) {
          return;
        }
        sVar24 = *(short *)((long)param_1 + 0xc);
        puVar12 = puVar4;
      }
      puVar6 = puVar12;
      if (sVar24 != -1) {
        return;
      }
code_r0x00010aa3f34c:
      uStack_30 = (undefined6)*param_1;
      uVar9 = *(undefined8 *)((long)param_1 + 6);
      uStack_2a = (undefined2)uVar9;
      puVar12 = param_1 + 2;
      uVar19 = param_1[3];
      uVar16 = *puVar12;
      uVar22 = param_1[4];
      *puVar12 = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      uVar21 = *puVar6;
      *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)puVar6 + 6);
      *param_1 = uVar21;
      func_0x00010aa3fbe4(puVar12,puVar6 + 2);
      *puVar6 = CONCAT26(uStack_2a,uStack_30);
      *(undefined8 *)((long)puVar6 + 6) = uVar9;
      if (puVar6[2] != 0) {
        puVar6[3] = puVar6[2];
        __ZdlPv();
      }
      puVar6[3] = uVar19;
      puVar6[2] = uVar16;
      puVar6[4] = uVar22;
      return;
    }
    if (uVar22 < 2) {
      return;
    }
    if (uVar22 == 2) {
      puVar6 = param_2 + -5;
      if (*puVar6 == *param_1) {
        if (*(short *)((long)param_2 + -0x1c) == -1) {
          return;
        }
        if (*(short *)((long)param_1 + 0xc) != -1) {
          return;
        }
      }
      else if (*param_1 <= *puVar6) {
        return;
      }
      goto code_r0x00010aa3f34c;
    }
LAB_10aa3e478:
    if ((long)uVar21 < 0x3c0) {
      puVar6 = param_1 + 5;
      bVar3 = param_1 == param_2 || puVar6 == param_2;
      if ((param_4 & 1) == 0) {
        if (bVar3) {
          return;
        }
        puVar12 = param_1;
        lVar10 = 0x28;
        lVar18 = 0;
        goto LAB_10aa3f130;
      }
      if (bVar3) {
        return;
      }
      lVar10 = 0;
      puVar12 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar19 = uVar22 - 2 >> 1;
      uVar16 = uVar19;
      goto LAB_10aa3ec68;
    }
    puVar6 = param_1 + (uVar22 >> 1) * 5;
    if (uVar21 < 0x1401) {
      FUN_10aa3f3e0(puVar6,param_1,puVar12);
    }
    else {
      FUN_10aa3f3e0(param_1,puVar6,puVar12);
      FUN_10aa3f3e0(param_1 + 5,puVar6 + -5,param_2 + -10);
      FUN_10aa3f3e0(param_1 + 10,puVar6 + 5,param_2 + -0xf);
      FUN_10aa3f3e0(puVar6 + -5,puVar6,puVar6 + 5);
      uVar21 = *param_1;
      uStack_68 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 6) >> 0x10);
      uStack_6a = (undefined2)(uVar21 >> 0x30);
      puVar4 = param_1 + 2;
      uVar20 = param_1[3];
      uVar19 = *puVar4;
      uVar16 = param_1[4];
      *puVar4 = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      uVar22 = *puVar6;
      *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)puVar6 + 6);
      *param_1 = uVar22;
      func_0x00010aa3fbe4(puVar4,puVar6 + 2);
      *(ulong *)((long)puVar6 + 6) = CONCAT62(uStack_68,uStack_6a);
      *puVar6 = uVar21;
      if (puVar6[2] != 0) {
        puVar6[3] = puVar6[2];
        __ZdlPv();
      }
      puVar6[3] = uVar20;
      puVar6[2] = uVar19;
      puVar6[4] = uVar16;
    }
    param_3 = param_3 + -1;
    uVar21 = *param_1;
    if ((param_4 & 1) != 0) {
LAB_10aa3e5a0:
      puVar4 = param_1 + 2;
      uVar20 = param_1[3];
      uVar19 = *puVar4;
      uVar22 = param_1[1];
      sVar24 = *(short *)((long)param_1 + 0xc);
      uVar16 = param_1[4];
      *puVar4 = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      if (param_1 + 5 != param_2) {
        lVar10 = 0;
        do {
          uVar7 = *(ulong *)((long)param_1 + lVar10 + 0x28);
          if (uVar7 == uVar21) {
            if ((sVar24 != -1) || (*(short *)((long)param_1 + lVar10 + 0x34) == -1))
            goto LAB_10aa3e614;
          }
          else if (uVar21 <= uVar7) goto LAB_10aa3e614;
          lVar18 = lVar10 + 0x50;
          lVar10 = lVar10 + 0x28;
          if ((ulong *)((long)param_1 + lVar18) == param_2) break;
        } while( true );
      }
      goto LAB_10aa3f248;
    }
    if (param_1[-5] == uVar21) {
      sVar24 = *(short *)((long)param_1 + 0xc);
      if ((*(short *)((long)param_1 - 0x1c) != -1) && (sVar24 == -1)) goto LAB_10aa3e5a0;
    }
    else {
      if (param_1[-5] < uVar21) goto LAB_10aa3e5a0;
      sVar24 = *(short *)((long)param_1 + 0xc);
    }
    puVar4 = param_1 + 2;
    uVar20 = param_1[3];
    uVar19 = *puVar4;
    uVar22 = param_1[1];
    uVar16 = param_1[4];
    *puVar4 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    if (uVar21 == *puVar12) {
      puVar6 = param_1;
      if ((sVar24 != -1) && (*(short *)((long)param_2 + -0x1c) == -1)) goto LAB_10aa3e85c;
LAB_10aa3e898:
      do {
        while( true ) {
          puVar5 = puVar6;
          puVar6 = puVar5 + 5;
          if (param_2 <= puVar6) goto LAB_10aa3e8d0;
          if (uVar21 == *puVar6) break;
          if (uVar21 < *puVar6) goto LAB_10aa3e8d0;
        }
      } while ((sVar24 == -1) || (*(short *)((long)puVar5 + 0x34) != -1));
    }
    else {
      puVar6 = param_1;
      if (*puVar12 <= uVar21) goto LAB_10aa3e898;
LAB_10aa3e85c:
      do {
        while( true ) {
          puVar5 = puVar6;
          puVar6 = puVar5 + 5;
          if (puVar6 == param_2) goto LAB_10aa3f248;
          if (uVar21 == *puVar6) break;
          if (uVar21 < *puVar6) goto LAB_10aa3e8d0;
        }
      } while ((sVar24 == -1) || (*(short *)((long)puVar5 + 0x34) != -1));
    }
LAB_10aa3e8d0:
    puVar5 = param_2;
    if (puVar6 < param_2) {
      puVar5 = puVar12;
      if (param_2 != param_1) {
        do {
          if (uVar21 == *puVar5) {
            if ((sVar24 == -1) || (*(short *)((long)puVar5 + 0xc) != -1)) goto LAB_10aa3e928;
          }
          else if (*puVar5 <= uVar21) goto LAB_10aa3e928;
          bVar3 = puVar5 == param_1;
          puVar5 = puVar5 + -5;
          if (bVar3) break;
        } while( true );
      }
      goto LAB_10aa3f248;
    }
LAB_10aa3e928:
    if (puVar6 < puVar5) {
      FUN_10aa3f34c(puVar6,puVar5);
      do {
        while( true ) {
          puVar17 = puVar6;
          puVar6 = puVar17 + 5;
          if (puVar6 == param_2) goto LAB_10aa3f248;
          if (uVar21 == *puVar6) break;
          if (uVar21 < *puVar6) goto LAB_10aa3e970;
        }
      } while ((sVar24 == -1) || (*(short *)((long)puVar17 + 0x34) != -1));
LAB_10aa3e970:
      puVar17 = puVar5;
      if (puVar5 != param_1) {
        do {
          puVar5 = puVar17 + -5;
          if (uVar21 == *puVar5) {
            if ((sVar24 == -1) || (*(short *)((long)puVar17 - 0x1c) != -1)) goto LAB_10aa3e928;
          }
          else if (*puVar5 <= uVar21) goto LAB_10aa3e928;
          puVar17 = puVar5;
          if (puVar5 == param_1) break;
        } while( true );
      }
      goto LAB_10aa3f248;
    }
    if (puVar6 + -5 != param_1) {
      uVar7 = puVar6[-5];
      *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)puVar6 + -0x22);
      *param_1 = uVar7;
      func_0x00010aa3fbe4(puVar4,puVar6 + -3);
    }
    puVar6[-5] = uVar21;
    *(int *)(puVar6 + -4) = (int)uVar22;
    *(short *)((long)puVar6 + -0x1c) = sVar24;
    if (puVar6[-3] != 0) {
      puVar6[-2] = puVar6[-3];
      __ZdlPv();
    }
    param_4 = 0;
    puVar6[-2] = uVar20;
    puVar6[-3] = uVar19;
    puVar6[-1] = uVar16;
  } while( true );
LAB_10aa3eaf0:
  puVar4 = puVar6;
  uVar21 = puVar12[5];
  if (uVar21 == *puVar12) {
    sVar24 = *(short *)((long)puVar12 + 0x34);
    if (sVar24 != -1 && *(short *)((long)puVar12 + 0xc) == -1) goto LAB_10aa3eb28;
  }
  else if (uVar21 < *puVar12) {
    sVar24 = *(short *)((long)puVar12 + 0x34);
LAB_10aa3eb28:
    uVar22 = puVar12[6];
    uVar16 = puVar12[7];
    uVar20 = puVar12[9];
    uVar19 = puVar12[8];
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[7] = 0;
    *puVar4 = *puVar12;
    *(undefined8 *)((long)puVar4 + 6) = *(undefined8 *)((long)puVar12 + 6);
    puVar6 = puVar12 + 2;
    func_0x00010aa3fbe4(puVar4 + 2,puVar6);
    lVar18 = lVar10;
    puVar5 = param_1;
    if (puVar12 != param_1) {
      do {
        puVar5 = puVar12;
        puVar17 = (ulong *)((long)param_1 + lVar18);
        uVar7 = puVar17[-5];
        if (uVar21 == uVar7) {
          puVar12 = puVar5;
          if ((sVar24 == -1) || (*(short *)((long)puVar17 + -0x1c) != -1)) goto LAB_10aa3ec10;
        }
        else if (uVar7 <= uVar21) {
          puVar5 = (ulong *)((long)param_1 + lVar18);
          puVar6 = puVar5 + 2;
          puVar12 = puVar5;
          goto LAB_10aa3ec10;
        }
        puVar12 = puVar5 + -5;
        *puVar17 = puVar17[-5];
        *(undefined8 *)((long)puVar17 + 6) = *(undefined8 *)((long)puVar17 + -0x22);
        puVar6 = puVar5 + -3;
        func_0x00010aa3fbe4((long)param_1 + lVar18 + 0x10,(long)param_1 + lVar18 + -0x18);
        lVar18 = lVar18 + -0x28;
      } while (lVar18 != 0);
      puVar6 = param_1 + 2;
      puVar5 = param_1;
    }
LAB_10aa3ec10:
    *puVar5 = uVar21;
    *(int *)(puVar5 + 1) = (int)uVar22;
    *(short *)((long)puVar5 + 0xc) = sVar24;
    if (*puVar6 != 0) {
      puVar5[3] = *puVar6;
      __ZdlPv();
      puVar12[3] = 0;
      puVar12[4] = 0;
    }
    *puVar6 = uVar16;
    puVar5[4] = uVar20;
    puVar5[3] = uVar19;
  }
  lVar10 = lVar10 + 0x28;
  puVar6 = puVar4 + 5;
  puVar12 = puVar4;
  if (puVar4 + 5 == param_2) {
    return;
  }
  goto LAB_10aa3eaf0;
LAB_10aa3f130:
  lVar14 = lVar10;
  uVar21 = *puVar6;
  if (uVar21 == *puVar12) {
    sVar24 = *(short *)((long)puVar12 + 0x34);
    if (sVar24 != -1 && *(short *)((long)puVar12 + 0xc) == -1) goto LAB_10aa3f168;
  }
  else if (uVar21 < *puVar12) {
    sVar24 = *(short *)((long)puVar12 + 0x34);
LAB_10aa3f168:
    uVar22 = puVar12[6];
    uVar19 = puVar12[7];
    uVar7 = puVar12[9];
    uVar20 = puVar12[8];
    puVar12[8] = 0;
    puVar12[9] = 0;
    puVar12[7] = 0;
    puVar12 = (ulong *)((long)param_1 + lVar18);
    uVar16 = *puVar12;
    *(undefined8 *)((long)puVar6 + 6) = *(undefined8 *)((long)puVar12 + 6);
    *puVar6 = uVar16;
    func_0x00010aa3fbe4(puVar6 + 2,puVar12 + 2);
    do {
      puVar6 = (ulong *)((long)param_1 + lVar18);
      uVar16 = puVar6[-5];
      if (uVar21 == uVar16) {
        if ((sVar24 == -1) || (*(short *)((long)puVar6 + -0x1c) != -1)) goto LAB_10aa3f204;
      }
      else if (uVar16 <= uVar21) goto LAB_10aa3f204;
      lVar10 = lVar18 + -0x28;
      *puVar6 = puVar6[-5];
      *(undefined8 *)((long)puVar6 + 6) = *(undefined8 *)((long)puVar6 + -0x22);
      func_0x00010aa3fbe4((long)param_1 + lVar18 + 0x10,(long)param_1 + lVar18 + -0x18);
      lVar18 = lVar10;
      if (lVar10 == -0x28) {
LAB_10aa3f248:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10aa3f24c);
        (*pcVar2)();
      }
    } while( true );
  }
  goto LAB_10aa3f230;
LAB_10aa3f204:
  puVar6 = (ulong *)((long)param_1 + lVar18);
  *puVar6 = uVar21;
  *(int *)(puVar6 + 1) = (int)uVar22;
  *(short *)((long)puVar6 + 0xc) = sVar24;
  if (puVar6[2] != 0) {
    puVar6[3] = puVar6[2];
    __ZdlPv();
  }
  puVar6[2] = uVar19;
  puVar6[4] = uVar7;
  puVar6[3] = uVar20;
LAB_10aa3f230:
  puVar12 = (ulong *)((long)param_1 + lVar14);
  puVar6 = (ulong *)((long)param_1 + lVar14 + 0x28);
  lVar10 = lVar14 + 0x28;
  lVar18 = lVar14;
  if (puVar6 == param_2) {
    return;
  }
  goto LAB_10aa3f130;
LAB_10aa3ec68:
  do {
    if ((long)uVar16 <= (long)uVar19) {
      uVar7 = uVar16 << 1 | 1;
      puVar6 = param_1 + uVar7 * 5;
      uVar20 = uVar16 * 2 + 2;
      if ((long)uVar20 < (long)uVar22) {
        uVar13 = puVar6[5];
        if (*puVar6 == uVar13) {
          if (*(short *)((long)puVar6 + 0xc) != -1 && *(short *)((long)puVar6 + 0x34) == -1)
          goto LAB_10aa3ecac;
        }
        else if (*puVar6 < uVar13) {
LAB_10aa3ecac:
          uVar7 = uVar20;
          puVar6 = puVar6 + 5;
        }
      }
      puVar12 = param_1 + uVar16 * 5;
      uVar20 = *puVar12;
      if (*puVar6 == uVar20) {
        sVar24 = *(short *)((long)puVar12 + 0xc);
        if (*(short *)((long)puVar6 + 0xc) == -1 || sVar24 != -1) goto LAB_10aa3ecf8;
      }
      else if (uVar20 <= *puVar6) {
        sVar24 = *(short *)((long)puVar12 + 0xc);
LAB_10aa3ecf8:
        uVar13 = puVar12[1];
        puVar4 = puVar12 + 2;
        uVar8 = *puVar4;
        uVar28 = puVar12[4];
        uVar27 = puVar12[3];
        *puVar4 = 0;
        puVar12[3] = 0;
        puVar12[4] = 0;
        uVar9 = *(undefined8 *)((long)puVar6 + 6);
        *puVar12 = *puVar6;
        *(undefined8 *)((long)puVar12 + 6) = uVar9;
        while( true ) {
          func_0x00010aa3fbe4(puVar4,puVar6 + 2);
          if ((long)uVar19 < (long)uVar7) break;
          lVar10 = uVar7 * 2;
          uVar7 = uVar7 << 1 | 1;
          puVar12 = param_1 + uVar7 * 5;
          uVar11 = lVar10 + 2;
          if ((long)uVar11 < (long)uVar22) {
            uVar15 = puVar12[5];
            if (*puVar12 == uVar15) {
              if (*(short *)((long)puVar12 + 0xc) != -1 && *(short *)((long)puVar12 + 0x34) == -1)
              goto LAB_10aa3ed80;
            }
            else if (*puVar12 < uVar15) {
LAB_10aa3ed80:
              uVar7 = uVar11;
              puVar12 = puVar12 + 5;
            }
          }
          if (*puVar12 == uVar20) {
            if ((sVar24 == -1) && (*(short *)((long)puVar12 + 0xc) != -1)) break;
          }
          else if (*puVar12 < uVar20) break;
          uVar11 = *puVar12;
          *(undefined8 *)((long)puVar6 + 6) = *(undefined8 *)((long)puVar12 + 6);
          *puVar6 = uVar11;
          puVar4 = puVar6 + 2;
          puVar6 = puVar12;
        }
        *puVar6 = uVar20;
        *(int *)(puVar6 + 1) = (int)uVar13;
        *(short *)((long)puVar6 + 0xc) = sVar24;
        if (puVar6[2] != 0) {
          puVar6[3] = puVar6[2];
          __ZdlPv();
        }
        puVar6[2] = uVar8;
        puVar6[4] = uVar28;
        puVar6[3] = uVar27;
      }
    }
    bVar3 = uVar16 != 0;
    uVar16 = uVar16 - 1;
  } while (bVar3);
  lVar10 = (uVar21 >> 3) * -0x3333333333333333;
  do {
    uVar22 = *param_1;
    uStack_68 = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 6) >> 0x10);
    uStack_6a = (undefined2)(uVar22 >> 0x30);
    uVar16 = param_1[2];
    uStack_78 = param_1[4];
    uStack_80 = param_1[3];
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
    uVar21 = 0;
    puVar6 = param_1;
    do {
      puVar12 = puVar6 + uVar21 * 5 + 5;
      uVar20 = uVar21 << 1 | 1;
      uVar19 = uVar21 * 2 + 2;
      if ((long)uVar19 < lVar10) {
        uVar7 = puVar6[uVar21 * 5 + 10];
        if (puVar6[uVar21 * 5 + 5] == uVar7) {
          if (*(short *)((long)puVar6 + uVar21 * 0x28 + 0x34) != -1 &&
              *(short *)((long)puVar6 + uVar21 * 0x28 + 0x5c) == -1) goto LAB_10aa3eee0;
        }
        else if (puVar6[uVar21 * 5 + 5] < uVar7) {
LAB_10aa3eee0:
          uVar20 = uVar19;
          puVar12 = puVar6 + uVar21 * 5 + 10;
        }
      }
      uVar21 = *puVar12;
      *(undefined8 *)((long)puVar6 + 6) = *(undefined8 *)((long)puVar12 + 6);
      *puVar6 = uVar21;
      func_0x00010aa3fbe4(puVar6 + 2,puVar12 + 2);
      uVar21 = uVar20;
      puVar6 = puVar12;
    } while ((long)uVar20 <= (long)(lVar10 - 2U >> 1));
    puVar6 = param_2 + -5;
    if (puVar12 == puVar6) {
      *(ulong *)((long)puVar12 + 6) = CONCAT62(uStack_68,uStack_6a);
      *puVar12 = uVar22;
      if (puVar12[2] != 0) {
        puVar12[3] = puVar12[2];
        __ZdlPv();
        puVar12[3] = 0;
        puVar12[4] = 0;
      }
      puVar12[2] = uVar16;
LAB_10aa3f100:
      puVar12[4] = uStack_78;
      puVar12[3] = uStack_80;
    }
    else {
      uVar21 = *puVar6;
      *(undefined8 *)((long)puVar12 + 6) = *(undefined8 *)((long)param_2 - 0x22);
      *puVar12 = uVar21;
      func_0x00010aa3fbe4(puVar12 + 2,param_2 + -3);
      *(ulong *)((long)param_2 - 0x22) = CONCAT62(uStack_68,uStack_6a);
      *puVar6 = uVar22;
      if (param_2[-3] != 0) {
        param_2[-2] = param_2[-3];
        __ZdlPv();
      }
      param_2[-3] = uVar16;
      param_2[-1] = uStack_78;
      param_2[-2] = uStack_80;
      uVar21 = (long)puVar12 + (0x28 - (long)param_1);
      if (0x28 < (long)uVar21) {
        uVar22 = (uVar21 >> 3) * -0x3333333333333333 - 2;
        uVar21 = uVar22 >> 1;
        puVar4 = param_1 + uVar21 * 5;
        uVar16 = *puVar12;
        if (*puVar4 == uVar16) {
          if (*(short *)((long)puVar4 + 0xc) != -1 && *(short *)((long)puVar12 + 0xc) == -1) {
            sVar24 = -1;
            goto LAB_10aa3f014;
          }
        }
        else if (*puVar4 < uVar16) {
          sVar24 = *(short *)((long)puVar12 + 0xc);
LAB_10aa3f014:
          uVar19 = puVar12[1];
          uVar20 = puVar12[2];
          uStack_78 = puVar12[4];
          uStack_80 = puVar12[3];
          puVar12[3] = 0;
          puVar12[4] = 0;
          puVar12[2] = 0;
          uVar9 = *(undefined8 *)((long)puVar4 + 6);
          *puVar12 = *puVar4;
          *(undefined8 *)((long)puVar12 + 6) = uVar9;
          puVar5 = puVar4 + 2;
          func_0x00010aa3fbe4(puVar12 + 2,puVar5);
          puVar12 = puVar4;
          while (1 < uVar22) {
            uVar22 = uVar21 - 1;
            uVar21 = uVar22 >> 1;
            puVar4 = param_1 + uVar21 * 5;
            if (*puVar4 == uVar16) {
              if ((sVar24 != -1) || (*(short *)((long)puVar4 + 0xc) == -1)) break;
            }
            else if (uVar16 <= *puVar4) break;
            uVar7 = *puVar4;
            *(undefined8 *)((long)puVar12 + 6) = *(undefined8 *)((long)puVar4 + 6);
            *puVar12 = uVar7;
            puVar5 = puVar4 + 2;
            func_0x00010aa3fbe4(puVar12 + 2,puVar5);
            puVar12 = puVar4;
          }
          *puVar12 = uVar16;
          *(int *)(puVar12 + 1) = (int)uVar19;
          *(short *)((long)puVar12 + 0xc) = sVar24;
          if (puVar12[2] != 0) {
            puVar12[3] = puVar12[2];
            __ZdlPv();
            puVar12[3] = 0;
            puVar12[4] = 0;
          }
          *puVar5 = uVar20;
          goto LAB_10aa3f100;
        }
      }
    }
    bVar3 = lVar10 < 3;
    lVar10 = lVar10 + -1;
    param_2 = puVar6;
    if (bVar3) {
      return;
    }
  } while( true );
LAB_10aa3e614:
  puVar5 = (ulong *)((long)param_1 + lVar10 + 0x28);
  if (lVar10 != 0) {
    puVar17 = puVar12;
    if (param_2 != param_1) {
      do {
        if (*puVar17 == uVar21) {
          if ((sVar24 == -1) && (*(short *)((long)puVar17 + 0xc) != -1)) goto LAB_10aa3e6b4;
        }
        else if (*puVar17 < uVar21) goto LAB_10aa3e6b4;
        bVar3 = puVar17 == param_1;
        puVar17 = puVar17 + -5;
        if (bVar3) break;
      } while( true );
    }
    goto LAB_10aa3f248;
  }
  puVar6 = puVar12;
  puVar17 = param_2;
  if (puVar5 < param_2) {
    do {
      puVar17 = puVar6;
      if (*puVar6 == uVar21) {
        if ((puVar6 <= puVar5) || (sVar24 == -1 && *(short *)((long)puVar6 + 0xc) != -1)) break;
      }
      else if (*puVar6 < uVar21 || puVar6 <= puVar5) break;
      puVar6 = puVar6 + -5;
    } while( true );
  }
LAB_10aa3e6b4:
  puVar6 = puVar5;
  puVar23 = puVar5;
  puVar25 = puVar17;
  if (puVar5 < puVar17) {
LAB_10aa3e6cc:
    FUN_10aa3f34c(puVar23,puVar25);
    do {
      while( true ) {
        puVar6 = puVar23 + 5;
        if (puVar6 == param_2) goto LAB_10aa3f248;
        if (*puVar6 != uVar21) break;
        if ((sVar24 != -1) ||
           (psVar1 = (short *)((long)puVar23 + 0x34), puVar23 = puVar6, *psVar1 == -1))
        goto LAB_10aa3e70c;
      }
      puVar23 = puVar6;
    } while (*puVar6 < uVar21);
LAB_10aa3e70c:
    if (puVar25 != param_1) {
      do {
        puVar26 = puVar25 + -5;
        if (*puVar26 == uVar21) {
          if ((sVar24 == -1) && (*(short *)((long)puVar25 - 0x1c) != -1)) goto LAB_10aa3e750;
        }
        else if (*puVar26 < uVar21) goto LAB_10aa3e750;
        puVar25 = puVar26;
        if (puVar26 == param_1) break;
      } while( true );
    }
    goto LAB_10aa3f248;
  }
LAB_10aa3e760:
  puVar23 = puVar6 + -5;
  if (puVar23 != param_1) {
    uVar7 = *puVar23;
    *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)puVar6 - 0x22);
    *param_1 = uVar7;
    func_0x00010aa3fbe4(puVar4,puVar6 + -3);
  }
  puVar6[-5] = uVar21;
  *(int *)(puVar6 + -4) = (int)uVar22;
  *(short *)((long)puVar6 - 0x1c) = sVar24;
  if (puVar6[-3] != 0) {
    puVar6[-2] = puVar6[-3];
    __ZdlPv();
  }
  puVar6[-2] = uVar20;
  puVar6[-3] = uVar19;
  puVar6[-1] = uVar16;
  if (puVar17 <= puVar5) {
    puVar4 = param_1;
    FUN_10aa3f744(param_1,puVar23);
    puVar5 = puVar6;
    FUN_10aa3f744(puVar6,param_2);
    if ((int)puVar5 != 0) goto LAB_10aa3ea14;
    if (((ulong)puVar4 & 1) != 0) goto LAB_10aa3e438;
  }
  FUN_10aa3e3e4(param_1,puVar23,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_10aa3e438;
LAB_10aa3e750:
  puVar23 = puVar6;
  puVar25 = puVar26;
  if (puVar26 <= puVar6) goto LAB_10aa3e760;
  goto LAB_10aa3e6cc;
LAB_10aa3ea14:
  param_2 = puVar23;
  if (((ulong)puVar4 & 1) != 0) {
    return;
  }
  goto LAB_10aa3e420;
}



/* Entry: 10aa3f34c; end: 10aa3f3df;  */

void FUN_10aa3f34c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined6 uStack_30;
  undefined2 uStack_2a;
  
  uStack_30 = (undefined6)*param_1;
  uVar1 = *(undefined8 *)((long)param_1 + 6);
  uStack_2a = (undefined2)uVar1;
  puVar2 = param_1 + 2;
  uVar6 = param_1[3];
  uVar5 = *puVar2;
  uVar4 = param_1[4];
  *puVar2 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar3 = *param_2;
  *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)param_2 + 6);
  *param_1 = uVar3;
  func_0x00010aa3fbe4(puVar2,param_2 + 2);
  *param_2 = CONCAT26(uStack_2a,uStack_30);
  *(undefined8 *)((long)param_2 + 6) = uVar1;
  if (param_2[2] != 0) {
    param_2[3] = param_2[2];
    __ZdlPv();
  }
  param_2[3] = uVar6;
  param_2[2] = uVar5;
  param_2[4] = uVar4;
  return;
}



/* Entry: 10aa3f3e0; end: 10aa3f537;  */

void FUN_10aa3f3e0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  short sVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined6 uStack_30;
  undefined2 uStack_2a;
  
  uVar4 = *param_2;
  if (uVar4 == *param_1) {
    if (*(short *)((long)param_2 + 0xc) != -1 && *(short *)((long)param_1 + 0xc) == -1)
    goto LAB_10aa3f410;
LAB_10aa3f440:
    if (*param_3 == uVar4) {
      if (*(short *)((long)param_3 + 0xc) == -1 || *(short *)((long)param_2 + 0xc) != -1) {
        return;
      }
    }
    else if (uVar4 <= *param_3) {
      return;
    }
    FUN_10aa3f34c(param_2,param_3);
    param_3 = param_2;
    if (*param_2 != *param_1) {
      if (*param_1 <= *param_2) {
        return;
      }
      goto LAB_10aa3f518;
    }
    if (*(short *)((long)param_2 + 0xc) == -1) {
      return;
    }
    sVar1 = *(short *)((long)param_1 + 0xc);
    param_2 = param_1;
  }
  else {
    if (*param_1 <= uVar4) goto LAB_10aa3f440;
LAB_10aa3f410:
    if (*param_3 == uVar4) {
      if (*(short *)((long)param_3 + 0xc) != -1 && *(short *)((long)param_2 + 0xc) == -1)
      goto LAB_10aa3f518;
    }
    else if (*param_3 < uVar4) goto LAB_10aa3f518;
    FUN_10aa3f34c(param_1,param_2);
    if (*param_3 != *param_2) {
      param_1 = param_2;
      if (*param_2 <= *param_3) {
        return;
      }
      goto LAB_10aa3f518;
    }
    if (*(short *)((long)param_3 + 0xc) == -1) {
      return;
    }
    sVar1 = *(short *)((long)param_2 + 0xc);
  }
  param_1 = param_2;
  if (sVar1 != -1) {
    return;
  }
LAB_10aa3f518:
  uStack_30 = (undefined6)*param_1;
  uVar2 = *(undefined8 *)((long)param_1 + 6);
  uStack_2a = (undefined2)uVar2;
  puVar3 = param_1 + 2;
  uVar7 = param_1[3];
  uVar6 = *puVar3;
  uVar5 = param_1[4];
  *puVar3 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = *param_3;
  *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)param_3 + 6);
  *param_1 = uVar4;
  func_0x00010aa3fbe4(puVar3,param_3 + 2);
  *param_3 = CONCAT26(uStack_2a,uStack_30);
  *(undefined8 *)((long)param_3 + 6) = uVar2;
  if (param_3[2] != 0) {
    param_3[3] = param_3[2];
    __ZdlPv();
  }
  param_3[3] = uVar7;
  param_3[2] = uVar6;
  param_3[4] = uVar5;
  return;
}



/* Entry: 10aa3f538; end: 10aa3f743;  */

void FUN_10aa3f538(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined6 uStack_30;
  undefined2 uStack_2a;
  
  FUN_10aa3f3e0();
  if (*param_4 == *param_3) {
    if (*(short *)((long)param_4 + 0xc) != -1 && *(short *)((long)param_3 + 0xc) == -1)
    goto LAB_10aa3f594;
  }
  else if (*param_4 < *param_3) {
LAB_10aa3f594:
    FUN_10aa3f34c(param_3,param_4);
    if (*param_3 == *param_2) {
      if ((*(short *)((long)param_3 + 0xc) != -1) && (*(short *)((long)param_2 + 0xc) == -1))
      goto LAB_10aa3f5d4;
    }
    else if (*param_3 < *param_2) {
LAB_10aa3f5d4:
      FUN_10aa3f34c(param_2,param_3);
      if (*param_2 == *param_1) {
        if ((*(short *)((long)param_2 + 0xc) != -1) && (*(short *)((long)param_1 + 0xc) == -1))
        goto LAB_10aa3f614;
      }
      else if (*param_2 < *param_1) {
LAB_10aa3f614:
        FUN_10aa3f34c(param_1,param_2);
      }
    }
  }
  if (*param_5 == *param_4) {
    if (*(short *)((long)param_5 + 0xc) == -1) {
      return;
    }
    if (*(short *)((long)param_4 + 0xc) != -1) {
      return;
    }
  }
  else if (*param_4 <= *param_5) {
    return;
  }
  FUN_10aa3f34c(param_4,param_5);
  if (*param_4 == *param_3) {
    if (*(short *)((long)param_4 + 0xc) == -1) {
      return;
    }
    if (*(short *)((long)param_3 + 0xc) != -1) {
      return;
    }
  }
  else if (*param_3 <= *param_4) {
    return;
  }
  FUN_10aa3f34c(param_3,param_4);
  if (*param_3 == *param_2) {
    if (*(short *)((long)param_3 + 0xc) == -1) {
      return;
    }
    if (*(short *)((long)param_2 + 0xc) != -1) {
      return;
    }
  }
  else if (*param_2 <= *param_3) {
    return;
  }
  FUN_10aa3f34c(param_2,param_3);
  if (*param_2 == *param_1) {
    if ((*(short *)((long)param_2 + 0xc) != -1) && (*(short *)((long)param_1 + 0xc) == -1))
    goto code_r0x00010aa3f34c;
  }
  else if (*param_2 < *param_1) {
code_r0x00010aa3f34c:
    uStack_30 = (undefined6)*param_1;
    uVar1 = *(undefined8 *)((long)param_1 + 6);
    uStack_2a = (undefined2)uVar1;
    puVar2 = param_1 + 2;
    uVar6 = param_1[3];
    uVar5 = *puVar2;
    uVar4 = param_1[4];
    *puVar2 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    uVar3 = *param_2;
    *(undefined8 *)((long)param_1 + 6) = *(undefined8 *)((long)param_2 + 6);
    *param_1 = uVar3;
    func_0x00010aa3fbe4(puVar2,param_2 + 2);
    *param_2 = CONCAT26(uStack_2a,uStack_30);
    *(undefined8 *)((long)param_2 + 6) = uVar1;
    if (param_2[2] != 0) {
      param_2[3] = param_2[2];
      __ZdlPv();
    }
    param_2[3] = uVar6;
    param_2[2] = uVar5;
    param_2[4] = uVar4;
    return;
  }
  return;
}



/* Entry: 10aa3f744; end: 10aa3fab3;  */

bool FUN_10aa3f744(ulong *param_1,ulong *param_2)

{
  short sVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar4 = ((long)param_2 - (long)param_1 >> 3) * -0x3333333333333333;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 != 2) {
LAB_10aa3f7f8:
      FUN_10aa3f3e0(param_1,param_1 + 5,param_1 + 10);
      if (param_1 + 0xf == param_2) {
        return true;
      }
      lVar9 = 0;
      iVar7 = 0;
      puVar3 = param_1 + 10;
      puVar12 = param_1 + 0xf;
      do {
        uVar4 = *puVar12;
        if (uVar4 == *puVar3) {
          sVar1 = *(short *)((long)puVar12 + 0xc);
          if (sVar1 != -1 && *(short *)((long)puVar3 + 0xc) == -1) goto LAB_10aa3f858;
        }
        else if (uVar4 < *puVar3) {
          sVar1 = *(short *)((long)puVar12 + 0xc);
LAB_10aa3f858:
          uVar2 = puVar12[1];
          puVar6 = puVar12 + 2;
          uVar5 = *puVar6;
          uVar14 = puVar12[4];
          uVar13 = puVar12[3];
          *puVar6 = 0;
          puVar12[3] = 0;
          puVar12[4] = 0;
          *puVar12 = *puVar3;
          *(undefined8 *)((long)puVar12 + 6) = *(undefined8 *)((long)puVar3 + 6);
          puVar10 = puVar3 + 2;
          func_0x00010aa3fbe4(puVar6,puVar10);
          lVar11 = lVar9;
          do {
            puVar6 = (ulong *)((long)param_1 + lVar11 + 0x28);
            uVar8 = *puVar6;
            if (uVar4 == uVar8) {
              if ((sVar1 == -1) || (*(short *)((long)param_1 + lVar11 + 0x34) != -1)) {
                puVar10 = (ulong *)((long)param_1 + lVar11 + 0x60);
                puVar3 = (ulong *)((long)param_1 + lVar11 + 0x50);
                goto LAB_10aa3f924;
              }
            }
            else if (uVar8 <= uVar4) goto LAB_10aa3f924;
            *(ulong *)((long)param_1 + lVar11 + 0x50) = *puVar6;
            *(undefined8 *)((long)param_1 + lVar11 + 0x56) =
                 *(undefined8 *)((long)param_1 + lVar11 + 0x2e);
            puVar10 = puVar3 + -3;
            func_0x00010aa3fbe4((long)param_1 + lVar11 + 0x60,(long)param_1 + lVar11 + 0x38);
            lVar11 = lVar11 + -0x28;
            puVar3 = puVar3 + -5;
          } while (lVar11 != -0x50);
          puVar10 = param_1 + 2;
          puVar3 = param_1;
LAB_10aa3f924:
          *puVar3 = uVar4;
          *(int *)(puVar3 + 1) = (int)uVar2;
          *(short *)((long)puVar3 + 0xc) = sVar1;
          if (*puVar10 != 0) {
            puVar3[3] = *puVar10;
            __ZdlPv();
          }
          *puVar10 = uVar5;
          puVar3[4] = uVar14;
          puVar3[3] = uVar13;
          iVar7 = iVar7 + 1;
          if (iVar7 == 8) {
            return puVar12 + 5 == param_2;
          }
        }
        puVar10 = puVar12 + 5;
        lVar9 = lVar9 + 0x28;
        puVar3 = puVar12;
        puVar12 = puVar10;
        if (puVar10 == param_2) {
          return true;
        }
      } while( true );
    }
    puVar3 = param_2 + -5;
    if (*puVar3 == *param_1) {
      if (*(short *)((long)param_2 + -0x1c) == -1) {
        return true;
      }
      if (*(short *)((long)param_1 + 0xc) != -1) {
        return true;
      }
    }
    else if (*param_1 <= *puVar3) {
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      FUN_10aa3f3e0(param_1,param_1 + 5,param_2 + -5);
      return true;
    }
    if (uVar4 != 4) {
      if (uVar4 == 5) {
        FUN_10aa3f538(param_1,param_1 + 5,param_1 + 10,param_1 + 0xf,param_2 + -5);
        return true;
      }
      goto LAB_10aa3f7f8;
    }
    FUN_10aa3f3e0(param_1,param_1 + 5,param_1 + 10);
    if (param_2[-5] == param_1[10]) {
      if (*(short *)((long)param_2 + -0x1c) == -1) {
        return true;
      }
      if (*(short *)((long)param_1 + 0x5c) != -1) {
        return true;
      }
    }
    else if (param_1[10] <= param_2[-5]) {
      return true;
    }
    FUN_10aa3f34c(param_1 + 10);
    if (param_1[10] == param_1[5]) {
      if (*(short *)((long)param_1 + 0x5c) == -1) {
        return true;
      }
      if (*(short *)((long)param_1 + 0x34) != -1) {
        return true;
      }
    }
    else if (param_1[5] <= param_1[10]) {
      return true;
    }
    FUN_10aa3f34c(param_1 + 5,param_1 + 10);
    if (param_1[5] == *param_1) {
      if (*(short *)((long)param_1 + 0x34) == -1) {
        return true;
      }
      if (*(short *)((long)param_1 + 0xc) != -1) {
        return true;
      }
    }
    else if (*param_1 <= param_1[5]) {
      return true;
    }
    puVar3 = param_1 + 5;
  }
  FUN_10aa3f34c(param_1,puVar3);
  return true;
}



/* Entry: 10aa3fab4; end: 10aa3fac7;  */

void FUN_10aa3fab4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar2 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if ((undefined8 *)0x555555555555555 < puVar2) {
    func_0x000109ffded8();
    puVar3 = puVar2;
    if (puVar2 != param_2) {
      do {
        uVar4 = *puVar3;
        param_3[1] = puVar3[1];
        *param_3 = uVar4;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar1 = *(undefined4 *)(puVar3 + 2);
        *(undefined1 *)((long)param_3 + 0x14) = *(undefined1 *)((long)puVar3 + 0x14);
        *(undefined4 *)(param_3 + 2) = uVar1;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[3] = 0;
        uVar4 = puVar3[3];
        param_3[4] = puVar3[4];
        param_3[3] = uVar4;
        param_3[5] = puVar3[5];
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3 = puVar3 + 6;
        param_3 = param_3 + 6;
      } while (puVar3 != param_2);
      do {
        FUN_10aa3c98c(puVar2);
        puVar2 = puVar2 + 6;
      } while (puVar2 != param_2);
    }
    return;
  }
  __Znwm((long)puVar2 * 0x30);
  return;
}



/* Entry: 10aa3fac8; end: 10aa3fc33;  */

void FUN_10aa3fac8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if ((undefined8 *)0x555555555555555 < param_1) {
    func_0x000109ffded8();
    puVar2 = param_1;
    if (param_1 != param_2) {
      do {
        uVar3 = *puVar2;
        param_3[1] = puVar2[1];
        *param_3 = uVar3;
        *puVar2 = 0;
        puVar2[1] = 0;
        uVar1 = *(undefined4 *)(puVar2 + 2);
        *(undefined1 *)((long)param_3 + 0x14) = *(undefined1 *)((long)puVar2 + 0x14);
        *(undefined4 *)(param_3 + 2) = uVar1;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[3] = 0;
        uVar3 = puVar2[3];
        param_3[4] = puVar2[4];
        param_3[3] = uVar3;
        param_3[5] = puVar2[5];
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2 = puVar2 + 6;
        param_3 = param_3 + 6;
      } while (puVar2 != param_2);
      do {
        FUN_10aa3c98c(param_1);
        param_1 = param_1 + 6;
      } while (param_1 != param_2);
    }
    return;
  }
  __Znwm((long)param_1 * 0x30);
  return;
}



/* Entry: 10aa3fc34; end: 10aa40b2f;  */

void FUN_10aa3fc34(undefined8 *param_1,undefined8 *param_2,long param_3,uint param_4)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  undefined5 uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  int *piVar28;
  ulong uVar29;
  undefined8 *puVar30;
  int *piVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_68;
  undefined1 uStack_64;
  
  do {
    puVar16 = param_2 + -6;
    puVar17 = param_2 + -0xc;
    puVar14 = param_2 + -0x12;
    puVar9 = param_1;
LAB_10aa3fc84:
    param_1 = puVar9;
    uVar27 = (long)param_2 - (long)param_1;
    uVar29 = ((long)uVar27 >> 4) * -0x5555555555555555;
    if (uVar29 - 2 != 0 && 1 < (long)uVar29) {
      if (uVar29 == 3) {
        iVar26 = *(int *)(param_1 + 8);
        if (iVar26 < *(int *)(param_1 + 2)) {
          if (iVar26 <= *(int *)(param_2 + -4)) {
            FUN_10aa40b30(param_1,param_1 + 6);
            if (*(int *)(param_1 + 8) <= *(int *)(param_2 + -4)) {
              return;
            }
            param_1 = param_1 + 6;
          }
          goto code_r0x00010aa40b30;
        }
        if (iVar26 <= *(int *)(param_2 + -4)) {
          return;
        }
      }
      else {
        if (uVar29 == 4) {
          puVar9 = param_1 + 6;
          puVar17 = param_1 + 0xc;
          iVar26 = *(int *)(param_1 + 8);
          puVar14 = param_1;
          if (iVar26 < *(int *)(param_1 + 2)) {
            puVar11 = puVar17;
            if ((*(int *)(param_1 + 0xe) < iVar26) ||
               (FUN_10aa40b30(param_1,puVar9), puVar14 = puVar9,
               *(int *)(param_1 + 0xe) < *(int *)(param_1 + 8))) {
LAB_10aa40ca4:
              FUN_10aa40b30(puVar14,puVar11);
            }
          }
          else if ((*(int *)(param_1 + 0xe) < iVar26) &&
                  (FUN_10aa40b30(puVar9,puVar17), puVar11 = puVar9,
                  *(int *)(param_1 + 8) < *(int *)(param_1 + 2))) goto LAB_10aa40ca4;
          if (((*(int *)(param_1 + 0xe) <= *(int *)(param_2 + -4)) ||
              (FUN_10aa40b30(puVar17,puVar16), *(int *)(param_1 + 8) <= *(int *)(param_1 + 0xe))) ||
             (FUN_10aa40b30(puVar9,puVar17), puVar16 = puVar9,
             *(int *)(param_1 + 2) <= *(int *)(param_1 + 8))) {
            return;
          }
          goto code_r0x00010aa40b30;
        }
        if (uVar29 != 5) goto LAB_10aa3fcc4;
        FUN_10aa40c14(param_1,param_1 + 6,param_1 + 0xc,param_1 + 0x12);
        if (*(int *)(param_1 + 0x14) <= *(int *)(param_2 + -4)) {
          return;
        }
        FUN_10aa40b30(param_1 + 0x12,puVar16);
        if (*(int *)(param_1 + 0xe) <= *(int *)(param_1 + 0x14)) {
          return;
        }
        FUN_10aa40b30(param_1 + 0xc,param_1 + 0x12);
        if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xe)) {
          return;
        }
        puVar16 = param_1 + 0xc;
      }
      FUN_10aa40b30(param_1 + 6,puVar16);
      if (*(int *)(param_1 + 2) <= *(int *)(param_1 + 8)) {
        return;
      }
      puVar16 = param_1 + 6;
code_r0x00010aa40b30:
      uVar37 = param_1[1];
      uVar34 = *param_1;
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *(undefined5 *)(param_1 + 2);
      puVar9 = param_1 + 3;
      uVar35 = param_1[4];
      uVar33 = *puVar9;
      uVar23 = param_1[5];
      *puVar9 = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      uVar36 = puVar16[1];
      uVar20 = *puVar16;
      *puVar16 = 0;
      puVar16[1] = 0;
      lVar10 = param_1[1];
      param_1[1] = uVar36;
      *param_1 = uVar20;
      if (lVar10 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uVar4 = *(undefined4 *)(puVar16 + 2);
      *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)puVar16 + 0x14);
      *(undefined4 *)(param_1 + 2) = uVar4;
      func_0x00010aa3fbe4(puVar9,puVar16 + 3);
      lVar10 = puVar16[1];
      puVar16[1] = uVar37;
      *puVar16 = uVar34;
      if (lVar10 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(int *)(puVar16 + 2) = (int)uVar7;
      *(char *)((long)puVar16 + 0x14) = (char)((uint5)uVar7 >> 0x20);
      if (puVar16[3] != 0) {
        puVar16[4] = puVar16[3];
        __ZdlPv();
      }
      puVar16[4] = uVar35;
      puVar16[3] = uVar33;
      puVar16[5] = uVar23;
      return;
    }
    if (uVar29 < 2) {
      return;
    }
    if (uVar29 == 2) {
      if (*(int *)(param_1 + 2) <= *(int *)(param_2 + -4)) {
        return;
      }
      goto code_r0x00010aa40b30;
    }
LAB_10aa3fcc4:
    if ((long)uVar27 < 0x480) {
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2) {
          return;
        }
        puVar16 = param_1 + 6;
        if (puVar16 == param_2) {
          return;
        }
        puVar9 = param_1;
        lVar10 = 0x30;
        lVar13 = 0;
        do {
          lVar21 = lVar10;
          if (*(int *)(puVar9 + 8) < *(int *)(puVar9 + 2)) {
            uVar36 = puVar16[1];
            uVar35 = *puVar16;
            *puVar16 = 0;
            puVar16[1] = 0;
            iVar26 = *(int *)(puVar9 + 8);
            uVar6 = *(undefined1 *)((long)puVar9 + 0x44);
            uVar20 = puVar9[10];
            uVar33 = puVar9[9];
            uVar23 = puVar9[0xb];
            puVar9[10] = 0;
            puVar9[0xb] = 0;
            puVar9[9] = 0;
            do {
              lVar25 = lVar13;
              puVar16 = (undefined8 *)((long)param_1 + lVar25);
              uVar37 = puVar16[1];
              uVar34 = *puVar16;
              *puVar16 = 0;
              puVar16[1] = 0;
              lVar10 = puVar16[7];
              puVar16[7] = uVar37;
              puVar16[6] = uVar34;
              if (lVar10 != 0) {
                __ZNSt3__119__shared_weak_count14__release_weakEv();
              }
              *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar16 + 2);
              *(undefined1 *)((long)puVar16 + 0x44) = *(undefined1 *)((long)puVar16 + 0x14);
              func_0x00010aa3fbe4(puVar16 + 9,puVar16 + 3);
              if (lVar25 == -0x30) {
LAB_10aa40b2c:
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10aa40b30);
                (*pcVar8)();
              }
              lVar13 = lVar25 + -0x30;
            } while (iVar26 < *(int *)((long)param_1 + lVar25 + -0x20));
            lVar10 = *(long *)((long)param_1 + lVar25 + 8);
            *(undefined8 *)((long)param_1 + lVar25 + 8) = uVar36;
            *(undefined8 *)((long)param_1 + lVar25) = uVar35;
            if (lVar10 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            *(int *)((long)param_1 + lVar25 + 0x10) = iVar26;
            *(undefined1 *)((long)param_1 + lVar25 + 0x14) = uVar6;
            lVar10 = *(long *)((long)param_1 + lVar25 + 0x18);
            if (lVar10 != 0) {
              *(long *)((long)param_1 + lVar25 + 0x20) = lVar10;
              __ZdlPv();
            }
            *(undefined8 *)((long)param_1 + lVar25 + 0x20) = uVar20;
            *(undefined8 *)((long)param_1 + lVar25 + 0x18) = uVar33;
            *(undefined8 *)((long)param_1 + lVar25 + 0x28) = uVar23;
          }
          puVar9 = (undefined8 *)((long)param_1 + lVar21);
          puVar16 = (undefined8 *)((long)param_1 + lVar21 + 0x30);
          lVar10 = lVar21 + 0x30;
          lVar13 = lVar21;
          if (puVar16 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2) {
        return;
      }
      if (param_1 + 6 == param_2) {
        return;
      }
      lVar10 = 0;
      puVar16 = param_1;
      puVar9 = param_1 + 6;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar24 = uVar29 - 2 >> 1;
      uVar19 = uVar24;
      goto LAB_10aa405bc;
    }
    puVar9 = param_1 + (uVar29 >> 1) * 6;
    iVar26 = *(int *)(param_2 + -4);
    if (uVar27 < 0x1801) {
      iVar5 = *(int *)(param_1 + 2);
      if (iVar5 < *(int *)(puVar9 + 2)) {
        puVar11 = puVar16;
        if ((iVar26 < iVar5) ||
           (FUN_10aa40b30(puVar9,param_1), puVar9 = param_1,
           *(int *)(param_2 + -4) < *(int *)(param_1 + 2))) {
LAB_10aa3fe18:
          FUN_10aa40b30(puVar9,puVar11);
        }
      }
      else if ((iVar26 < iVar5) &&
              (FUN_10aa40b30(param_1,puVar16), puVar11 = param_1,
              *(int *)(param_1 + 2) < *(int *)(puVar9 + 2))) goto LAB_10aa3fe18;
    }
    else {
      piVar28 = (int *)(puVar9 + 2);
      iVar5 = *piVar28;
      piVar31 = (int *)(param_1 + 2);
      puVar11 = param_1;
      if (iVar5 < *piVar31) {
        puVar12 = puVar16;
        if ((iVar26 < iVar5) ||
           (FUN_10aa40b30(param_1,puVar9), puVar11 = puVar9,
           *(int *)(param_2 + -4) < *(int *)(puVar9 + 2))) {
LAB_10aa3fda0:
          FUN_10aa40b30(puVar11,puVar12);
        }
      }
      else if ((iVar26 < iVar5) &&
              (FUN_10aa40b30(puVar9,puVar16), puVar12 = puVar9, *(int *)(puVar9 + 2) < *piVar31))
      goto LAB_10aa3fda0;
      puVar11 = puVar9 + -6;
      iVar26 = *(int *)(puVar9 + -4);
      if (iVar26 < *(int *)(param_1 + 8)) {
        puVar12 = param_1 + 6;
        puVar15 = puVar17;
        if ((*(int *)(param_2 + -10) < iVar26) ||
           (FUN_10aa40b30(param_1 + 6,puVar11), puVar12 = puVar11,
           *(int *)(param_2 + -10) < *(int *)(puVar9 + -4))) {
LAB_10aa3fe4c:
          FUN_10aa40b30(puVar12,puVar15);
        }
      }
      else if ((*(int *)(param_2 + -10) < iVar26) &&
              (FUN_10aa40b30(puVar11,puVar17), *(int *)(puVar9 + -4) < *(int *)(param_1 + 8))) {
        puVar12 = param_1 + 6;
        puVar15 = puVar11;
        goto LAB_10aa3fe4c;
      }
      iVar26 = *(int *)(puVar9 + 8);
      if (iVar26 < *(int *)(param_1 + 0xe)) {
        puVar12 = param_1 + 0xc;
        puVar15 = puVar14;
        if (iVar26 <= *(int *)(param_2 + -0x10)) {
          FUN_10aa40b30(puVar12,puVar9 + 6);
          if (*(int *)(puVar9 + 8) <= *(int *)(param_2 + -0x10)) goto LAB_10aa3fec4;
          puVar12 = puVar9 + 6;
        }
LAB_10aa3fec0:
        FUN_10aa40b30(puVar12,puVar15);
      }
      else if ((*(int *)(param_2 + -0x10) < iVar26) &&
              (FUN_10aa40b30(puVar9 + 6,puVar14), *(int *)(puVar9 + 8) < *(int *)(param_1 + 0xe))) {
        puVar12 = param_1 + 0xc;
        puVar15 = puVar9 + 6;
        goto LAB_10aa3fec0;
      }
LAB_10aa3fec4:
      iVar26 = *(int *)(puVar9 + 2);
      if (iVar26 < *(int *)(puVar9 + -4)) {
        if (*(int *)(puVar9 + 8) < iVar26) {
          puVar12 = puVar9 + 6;
        }
        else {
          FUN_10aa40b30(puVar11,puVar9);
          if (*(int *)(puVar9 + 2) <= *(int *)(puVar9 + 8)) goto LAB_10aa3ff44;
          puVar11 = puVar9;
          puVar12 = puVar9 + 6;
        }
LAB_10aa3ff40:
        FUN_10aa40b30(puVar11,puVar12);
      }
      else if ((*(int *)(puVar9 + 8) < iVar26) &&
              (FUN_10aa40b30(puVar9,puVar9 + 6), puVar12 = puVar9,
              *(int *)(puVar9 + 2) < *(int *)(puVar9 + -4))) goto LAB_10aa3ff40;
LAB_10aa3ff44:
      uVar37 = param_1[1];
      uVar34 = *param_1;
      *param_1 = 0;
      param_1[1] = 0;
      uVar7 = *(undefined5 *)piVar31;
      puVar11 = param_1 + 3;
      uVar35 = param_1[4];
      uVar33 = *puVar11;
      uVar23 = param_1[5];
      *puVar11 = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      uVar36 = puVar9[1];
      uVar20 = *puVar9;
      *puVar9 = 0;
      puVar9[1] = 0;
      lVar10 = param_1[1];
      param_1[1] = uVar36;
      *param_1 = uVar20;
      if (lVar10 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      iVar26 = *piVar28;
      *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)puVar9 + 0x14);
      *piVar31 = iVar26;
      func_0x00010aa3fbe4(puVar11,puVar9 + 3);
      lVar10 = puVar9[1];
      puVar9[1] = uVar37;
      *puVar9 = uVar34;
      if (lVar10 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      iStack_68 = (int)uVar7;
      uStack_64 = (undefined1)((uint5)uVar7 >> 0x20);
      *(undefined1 *)((long)puVar9 + 0x14) = uStack_64;
      *piVar28 = iStack_68;
      if (puVar9[3] != 0) {
        puVar9[4] = puVar9[3];
        __ZdlPv();
      }
      puVar9[4] = uVar35;
      puVar9[3] = uVar33;
      puVar9[5] = uVar23;
    }
    param_3 = param_3 + -1;
    if ((param_4 & 1) == 0) {
      iVar26 = *(int *)(param_1 + 2);
      if (iVar26 <= *(int *)(param_1 + -4)) {
        uVar36 = param_1[1];
        uVar35 = *param_1;
        *param_1 = 0;
        param_1[1] = 0;
        uVar6 = *(undefined1 *)((long)param_1 + 0x14);
        puVar12 = param_1 + 3;
        uVar20 = param_1[4];
        uVar33 = *puVar12;
        uVar23 = param_1[5];
        *puVar12 = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        puVar11 = param_1;
        if (iVar26 < *(int *)(param_2 + -4)) {
          do {
            puVar9 = puVar11 + 6;
            if (puVar9 == param_2) goto LAB_10aa40b2c;
            piVar28 = (int *)(puVar11 + 8);
            puVar11 = puVar9;
          } while (*piVar28 <= iVar26);
        }
        else {
          do {
            puVar9 = puVar11 + 6;
            if (param_2 <= puVar9) break;
            piVar28 = (int *)(puVar11 + 8);
            puVar11 = puVar9;
          } while (*piVar28 <= iVar26);
        }
        puVar15 = param_2;
        puVar11 = param_2;
        if (puVar9 < param_2) {
          do {
            if (puVar15 == param_1) goto LAB_10aa40b2c;
            puVar11 = puVar15 + -6;
            piVar28 = (int *)(puVar15 + -4);
            puVar15 = puVar11;
          } while (iVar26 < *piVar28);
        }
        while (puVar9 < puVar11) {
          FUN_10aa40b30(puVar9,puVar11);
          puVar15 = puVar9;
          do {
            puVar9 = puVar15 + 6;
            if (puVar9 == param_2) goto LAB_10aa40b2c;
            piVar28 = (int *)(puVar15 + 8);
            puVar15 = puVar9;
          } while (*piVar28 <= iVar26);
          do {
            if (puVar11 == param_1) goto LAB_10aa40b2c;
            puVar15 = puVar11 + -6;
            piVar28 = (int *)(puVar11 + -4);
            puVar11 = puVar15;
          } while (iVar26 < *piVar28);
        }
        puVar11 = puVar9 + -6;
        if (puVar11 != param_1) {
          uVar37 = puVar9[-5];
          uVar34 = *puVar11;
          *puVar11 = 0;
          puVar9[-5] = 0;
          lVar10 = param_1[1];
          param_1[1] = uVar37;
          *param_1 = uVar34;
          if (lVar10 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          uVar4 = *(undefined4 *)(puVar9 + -4);
          *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)puVar9 + -0x1c);
          *(undefined4 *)(param_1 + 2) = uVar4;
          func_0x00010aa3fbe4(puVar12,puVar9 + -3);
        }
        lVar10 = puVar9[-5];
        puVar9[-5] = uVar36;
        puVar9[-6] = uVar35;
        if (lVar10 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *(int *)(puVar9 + -4) = iVar26;
        *(undefined1 *)((long)puVar9 + -0x1c) = uVar6;
        if (puVar9[-3] != 0) {
          puVar9[-2] = puVar9[-3];
          __ZdlPv();
        }
        param_4 = 0;
        puVar9[-2] = uVar20;
        puVar9[-3] = uVar33;
        puVar9[-1] = uVar23;
        goto LAB_10aa3fc84;
      }
    }
    else {
      iVar26 = *(int *)(param_1 + 2);
    }
    lVar10 = 0;
    uVar36 = param_1[1];
    uVar35 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    uVar6 = *(undefined1 *)((long)param_1 + 0x14);
    puVar11 = param_1 + 3;
    uVar20 = param_1[4];
    uVar33 = *puVar11;
    uVar23 = param_1[5];
    *puVar11 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    do {
      if ((undefined8 *)((long)param_1 + lVar10 + 0x30) == param_2) goto LAB_10aa40b2c;
      lVar13 = lVar10 + 0x40;
      lVar10 = lVar10 + 0x30;
    } while (*(int *)((long)param_1 + lVar13) < iVar26);
    puVar12 = (undefined8 *)((long)param_1 + lVar10);
    puVar9 = param_2;
    if (lVar10 == 0x30) {
      do {
        puVar15 = puVar9;
        if (puVar9 <= puVar12) break;
        puVar15 = puVar9 + -6;
        piVar28 = (int *)(puVar9 + -4);
        puVar9 = puVar15;
      } while (iVar26 <= *piVar28);
    }
    else {
      do {
        if (puVar9 == param_1) goto LAB_10aa40b2c;
        puVar15 = puVar9 + -6;
        piVar28 = (int *)(puVar9 + -4);
        puVar9 = puVar15;
      } while (iVar26 <= *piVar28);
    }
    puVar9 = puVar12;
    puVar30 = puVar12;
    puVar18 = puVar15;
    if (puVar12 < puVar15) {
      do {
        FUN_10aa40b30(puVar30,puVar18);
        do {
          puVar9 = puVar30 + 6;
          if (puVar9 == param_2) goto LAB_10aa40b2c;
          piVar28 = (int *)(puVar30 + 8);
          puVar30 = puVar9;
        } while (*piVar28 < iVar26);
        do {
          if (puVar18 == param_1) goto LAB_10aa40b2c;
          puVar32 = puVar18 + -6;
          piVar28 = (int *)(puVar18 + -4);
          puVar18 = puVar32;
        } while (iVar26 <= *piVar28);
      } while (puVar9 < puVar32);
    }
    puVar30 = puVar9 + -6;
    if (puVar30 != param_1) {
      uVar37 = puVar9[-5];
      uVar34 = *puVar30;
      *puVar30 = 0;
      puVar9[-5] = 0;
      lVar10 = param_1[1];
      param_1[1] = uVar37;
      *param_1 = uVar34;
      if (lVar10 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      uVar4 = *(undefined4 *)(puVar9 + -4);
      *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)puVar9 + -0x1c);
      *(undefined4 *)(param_1 + 2) = uVar4;
      func_0x00010aa3fbe4(puVar11,puVar9 + -3);
    }
    lVar10 = puVar9[-5];
    puVar9[-5] = uVar36;
    puVar9[-6] = uVar35;
    if (lVar10 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(int *)(puVar9 + -4) = iVar26;
    *(undefined1 *)((long)puVar9 + -0x1c) = uVar6;
    if (puVar9[-3] != 0) {
      puVar9[-2] = puVar9[-3];
      __ZdlPv();
    }
    puVar9[-2] = uVar20;
    puVar9[-3] = uVar33;
    puVar9[-1] = uVar23;
    if (puVar12 < puVar15) goto LAB_10aa401cc;
    puVar11 = param_1;
    FUN_10aa40d18(param_1,puVar30);
    puVar12 = puVar9;
    FUN_10aa40d18(puVar9,param_2);
    if ((int)puVar12 == 0) goto code_r0x00010aa401c8;
    param_2 = puVar30;
    if (((ulong)puVar11 & 1) != 0) {
      return;
    }
  } while( true );
LAB_10aa404ac:
  if (*(int *)(puVar16 + 8) < *(int *)(puVar16 + 2)) {
    uVar36 = puVar9[1];
    uVar35 = *puVar9;
    *puVar9 = 0;
    puVar9[1] = 0;
    iVar26 = *(int *)(puVar16 + 8);
    uVar6 = *(undefined1 *)((long)puVar16 + 0x44);
    uVar23 = puVar16[9];
    uVar20 = puVar16[0xb];
    uVar33 = puVar16[10];
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    puVar16[9] = 0;
    lVar13 = lVar10;
    do {
      lVar21 = lVar13;
      puVar16 = (undefined8 *)((long)param_1 + lVar21);
      uVar37 = puVar16[1];
      uVar34 = *puVar16;
      *puVar16 = 0;
      puVar16[1] = 0;
      lVar13 = puVar16[7];
      puVar16[7] = uVar37;
      puVar16[6] = uVar34;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)(puVar16 + 2);
      *(undefined1 *)((long)puVar16 + 0x44) = *(undefined1 *)((long)puVar16 + 0x14);
      func_0x00010aa3fbe4(puVar16 + 9,puVar16 + 3);
      puVar16 = param_1;
      if (lVar21 == 0) goto LAB_10aa4054c;
      lVar13 = lVar21 + -0x30;
    } while (iVar26 < *(int *)((long)param_1 + lVar21 + -0x20));
    puVar16 = (undefined8 *)((long)param_1 + lVar21);
LAB_10aa4054c:
    lVar13 = puVar16[1];
    puVar16[1] = uVar36;
    *puVar16 = uVar35;
    if (lVar13 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(int *)((long)param_1 + lVar21 + 0x10) = iVar26;
    *(undefined1 *)((long)param_1 + lVar21 + 0x14) = uVar6;
    lVar13 = *(long *)((long)param_1 + lVar21 + 0x18);
    if (lVar13 != 0) {
      puVar16[4] = lVar13;
      __ZdlPv();
      *(undefined8 *)((long)param_1 + lVar21 + 0x20) = 0;
      *(undefined8 *)((long)param_1 + lVar21 + 0x28) = 0;
    }
    *(undefined8 *)((long)param_1 + lVar21 + 0x18) = uVar23;
    puVar16[5] = uVar20;
    puVar16[4] = uVar33;
  }
  puVar17 = puVar9 + 6;
  lVar10 = lVar10 + 0x30;
  puVar16 = puVar9;
  puVar9 = puVar17;
  if (puVar17 == param_2) {
    return;
  }
  goto LAB_10aa404ac;
LAB_10aa405bc:
  do {
    if ((long)uVar19 <= (long)uVar24) {
      uVar2 = uVar19 << 1 | 1;
      puVar16 = param_1 + uVar2 * 6;
      uVar1 = uVar19 * 2 + 2;
      uVar22 = uVar2;
      if ((long)uVar1 < (long)uVar29) {
        piVar28 = (int *)(puVar16 + 2);
        piVar31 = (int *)(puVar16 + 8);
        lVar10 = 0x30;
        if (*piVar31 <= *piVar28) {
          lVar10 = 0;
        }
        puVar16 = (undefined8 *)((long)puVar16 + lVar10);
        uVar22 = uVar1;
        if (*piVar31 <= *piVar28) {
          uVar22 = uVar2;
        }
      }
      puVar9 = param_1 + uVar19 * 6;
      iVar26 = *(int *)(puVar9 + 2);
      if (iVar26 <= *(int *)(puVar16 + 2)) {
        uVar35 = puVar9[1];
        uVar33 = *puVar9;
        *puVar9 = 0;
        puVar9[1] = 0;
        uVar6 = *(undefined1 *)((long)puVar9 + 0x14);
        uVar36 = puVar9[4];
        uVar20 = puVar9[3];
        uVar23 = puVar9[5];
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        do {
          puVar17 = puVar16;
          uVar37 = puVar17[1];
          uVar34 = *puVar17;
          *puVar17 = 0;
          puVar17[1] = 0;
          lVar10 = puVar9[1];
          puVar9[1] = uVar37;
          *puVar9 = uVar34;
          if (lVar10 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          uVar4 = *(undefined4 *)(puVar17 + 2);
          *(undefined1 *)((long)puVar9 + 0x14) = *(undefined1 *)((long)puVar17 + 0x14);
          *(undefined4 *)(puVar9 + 2) = uVar4;
          func_0x00010aa3fbe4(puVar9 + 3,puVar17 + 3);
          if ((long)uVar24 < (long)uVar22) break;
          uVar2 = uVar22 << 1 | 1;
          puVar16 = param_1 + uVar2 * 6;
          uVar1 = uVar22 * 2 + 2;
          uVar22 = uVar2;
          if ((long)uVar1 < (long)uVar29) {
            piVar28 = (int *)(puVar16 + 2);
            piVar31 = (int *)(puVar16 + 8);
            lVar10 = 0x30;
            if (*piVar31 <= *piVar28) {
              lVar10 = 0;
            }
            puVar16 = (undefined8 *)((long)puVar16 + lVar10);
            uVar22 = uVar1;
            if (*piVar31 <= *piVar28) {
              uVar22 = uVar2;
            }
          }
          puVar9 = puVar17;
        } while (iVar26 <= *(int *)(puVar16 + 2));
        lVar10 = puVar17[1];
        puVar17[1] = uVar35;
        *puVar17 = uVar33;
        if (lVar10 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *(int *)(puVar17 + 2) = iVar26;
        *(undefined1 *)((long)puVar17 + 0x14) = uVar6;
        if (puVar17[3] != 0) {
          puVar17[4] = puVar17[3];
          __ZdlPv();
        }
        puVar17[4] = uVar36;
        puVar17[3] = uVar20;
        puVar17[5] = uVar23;
      }
    }
    bVar3 = uVar19 != 0;
    uVar19 = uVar19 - 1;
  } while (bVar3);
  lVar10 = (uVar27 >> 4) * -0x5555555555555555;
  do {
    uVar23 = *param_1;
    uVar33 = param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    uVar6 = *(undefined1 *)((long)param_1 + 0x14);
    iVar26 = *(int *)(param_1 + 2);
    uVar20 = param_1[3];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    puVar16 = param_1;
    uVar27 = 0;
    do {
      uVar19 = uVar27 << 1 | 1;
      uVar29 = uVar27 * 2 + 2;
      puVar9 = puVar16 + uVar27 * 6 + 6;
      uVar24 = uVar19;
      if (((long)uVar29 < lVar10) &&
         (puVar9 = puVar16 + uVar27 * 6 + 0xc, uVar24 = uVar29,
         *(int *)(puVar16 + uVar27 * 6 + 0xe) <= *(int *)(puVar16 + uVar27 * 6 + 8))) {
        puVar9 = puVar16 + uVar27 * 6 + 6;
        uVar24 = uVar19;
      }
      uVar36 = puVar9[1];
      uVar35 = *puVar9;
      *puVar9 = 0;
      puVar9[1] = 0;
      lVar13 = puVar16[1];
      puVar16[1] = uVar36;
      *puVar16 = uVar35;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      piVar28 = (int *)(puVar9 + 2);
      iVar5 = *piVar28;
      *(undefined1 *)((long)puVar16 + 0x14) = *(undefined1 *)((long)puVar9 + 0x14);
      *(int *)(puVar16 + 2) = iVar5;
      func_0x00010aa3fbe4(puVar16 + 3,puVar9 + 3);
      puVar16 = puVar9;
      uVar27 = uVar24;
    } while ((long)uVar24 <= (long)(lVar10 - 2U >> 1));
    puVar16 = param_2 + -6;
    if (puVar9 == puVar16) {
      lVar13 = puVar9[1];
      *puVar9 = uVar23;
      puVar9[1] = uVar33;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *piVar28 = iVar26;
      *(undefined1 *)((long)puVar9 + 0x14) = uVar6;
      if (puVar9[3] != 0) {
        puVar9[4] = puVar9[3];
        __ZdlPv();
        puVar9[4] = 0;
        puVar9[5] = 0;
      }
      puVar9[3] = uVar20;
LAB_10aa409b8:
      puVar9[5] = uStack_78;
      puVar9[4] = uStack_80;
    }
    else {
      uVar36 = param_2[-5];
      uVar35 = param_2[-6];
      *puVar16 = 0;
      param_2[-5] = 0;
      lVar13 = puVar9[1];
      puVar9[1] = uVar36;
      *puVar9 = uVar35;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      iVar5 = *(int *)(param_2 + -4);
      *(undefined1 *)((long)puVar9 + 0x14) = *(undefined1 *)((long)param_2 + -0x1c);
      *piVar28 = iVar5;
      func_0x00010aa3fbe4(puVar9 + 3,param_2 + -3);
      lVar13 = param_2[-5];
      param_2[-6] = uVar23;
      param_2[-5] = uVar33;
      if (lVar13 != 0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      *(undefined1 *)((long)param_2 + -0x1c) = uVar6;
      *(int *)(param_2 + -4) = iVar26;
      if (param_2[-3] != 0) {
        param_2[-2] = param_2[-3];
        __ZdlPv();
      }
      param_2[-3] = uVar20;
      param_2[-1] = uStack_78;
      param_2[-2] = uStack_80;
      uVar27 = (long)puVar9 + (0x30 - (long)param_1);
      if (0x30 < (long)uVar27) {
        uVar27 = (uVar27 >> 4) * -0x5555555555555555 - 2 >> 1;
        iVar26 = *piVar28;
        if (*(int *)(param_1 + uVar27 * 6 + 2) < iVar26) {
          uVar20 = puVar9[1];
          uVar33 = *puVar9;
          *puVar9 = 0;
          puVar9[1] = 0;
          uVar6 = *(undefined1 *)((long)puVar9 + 0x14);
          uVar23 = puVar9[3];
          uStack_78 = puVar9[5];
          uStack_80 = puVar9[4];
          puVar9[4] = 0;
          puVar9[5] = 0;
          puVar9[3] = 0;
          puVar17 = param_1 + uVar27 * 6;
          puVar14 = puVar9;
          do {
            puVar9 = puVar17;
            uVar36 = puVar9[1];
            uVar35 = *puVar9;
            *puVar9 = 0;
            puVar9[1] = 0;
            lVar13 = puVar14[1];
            puVar14[1] = uVar36;
            *puVar14 = uVar35;
            if (lVar13 != 0) {
              __ZNSt3__119__shared_weak_count14__release_weakEv();
            }
            uVar4 = *(undefined4 *)(puVar9 + 2);
            *(undefined1 *)((long)puVar14 + 0x14) = *(undefined1 *)((long)puVar9 + 0x14);
            *(undefined4 *)(puVar14 + 2) = uVar4;
            func_0x00010aa3fbe4(puVar14 + 3,puVar9 + 3);
            if (uVar27 == 0) break;
            uVar27 = uVar27 - 1 >> 1;
            puVar17 = param_1 + uVar27 * 6;
            puVar14 = puVar9;
          } while (*(int *)(param_1 + uVar27 * 6 + 2) < iVar26);
          lVar13 = puVar9[1];
          puVar9[1] = uVar20;
          *puVar9 = uVar33;
          if (lVar13 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(int *)(puVar9 + 2) = iVar26;
          *(undefined1 *)((long)puVar9 + 0x14) = uVar6;
          if (puVar9[3] != 0) {
            puVar9[4] = puVar9[3];
            __ZdlPv();
            puVar9[4] = 0;
            puVar9[5] = 0;
          }
          puVar9[3] = uVar23;
          goto LAB_10aa409b8;
        }
      }
    }
    bVar3 = lVar10 < 3;
    param_2 = puVar16;
    lVar10 = lVar10 + -1;
    if (bVar3) {
      return;
    }
  } while( true );
code_r0x00010aa401c8:
  if (((ulong)puVar11 & 1) == 0) {
LAB_10aa401cc:
    FUN_10aa3fc34(param_1,puVar30,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_10aa3fc84;
}



/* Entry: 10aa40b30; end: 10aa40c13;  */

void FUN_10aa40b30(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = param_1[1];
  uVar11 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = *(undefined4 *)(param_1 + 2);
  uVar3 = *(undefined1 *)((long)param_1 + 0x14);
  puVar5 = param_1 + 3;
  uVar9 = param_1[4];
  uVar7 = *puVar5;
  uVar6 = param_1[5];
  *puVar5 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar10 = param_2[1];
  uVar8 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar4 = param_1[1];
  param_1[1] = uVar10;
  *param_1 = uVar8;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  uVar2 = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = uVar2;
  func_0x00010aa3fbe4(puVar5,param_2 + 3);
  lVar4 = param_2[1];
  param_2[1] = uVar12;
  *param_2 = uVar11;
  if (lVar4 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined4 *)(param_2 + 2) = uVar1;
  *(undefined1 *)((long)param_2 + 0x14) = uVar3;
  if (param_2[3] != 0) {
    param_2[4] = param_2[3];
    __ZdlPv();
  }
  param_2[4] = uVar9;
  param_2[3] = uVar7;
  param_2[5] = uVar6;
  return;
}



/* Entry: 10aa40c14; end: 10aa40d17;  */

void FUN_10aa40c14(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  iVar1 = *(int *)(param_2 + 2);
  puVar6 = param_1;
  if (iVar1 < *(int *)(param_1 + 2)) {
    puVar7 = param_3;
    if ((iVar1 <= *(int *)(param_3 + 2)) &&
       (FUN_10aa40b30(param_1,param_2), puVar6 = param_2,
       *(int *)(param_2 + 2) <= *(int *)(param_3 + 2))) goto LAB_10aa40ca8;
  }
  else if ((iVar1 <= *(int *)(param_3 + 2)) ||
          (FUN_10aa40b30(param_2,param_3), puVar7 = param_2,
          *(int *)(param_1 + 2) <= *(int *)(param_2 + 2))) goto LAB_10aa40ca8;
  FUN_10aa40b30(puVar6,puVar7);
LAB_10aa40ca8:
  if (((*(int *)(param_4 + 0x10) < *(int *)(param_3 + 2)) &&
      (FUN_10aa40b30(param_3,param_4), *(int *)(param_3 + 2) < *(int *)(param_2 + 2))) &&
     (FUN_10aa40b30(param_2,param_3), *(int *)(param_2 + 2) < *(int *)(param_1 + 2))) {
    uVar14 = param_1[1];
    uVar13 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar4 = *(undefined1 *)((long)param_1 + 0x14);
    puVar6 = param_1 + 3;
    uVar11 = param_1[4];
    uVar9 = *puVar6;
    uVar8 = param_1[5];
    *puVar6 = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar12 = param_2[1];
    uVar10 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    lVar5 = param_1[1];
    param_1[1] = uVar12;
    *param_1 = uVar10;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar3 = *(undefined4 *)(param_2 + 2);
    *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
    *(undefined4 *)(param_1 + 2) = uVar3;
    func_0x00010aa3fbe4(puVar6,param_2 + 3);
    lVar5 = param_2[1];
    param_2[1] = uVar14;
    *param_2 = uVar13;
    if (lVar5 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    *(undefined4 *)(param_2 + 2) = uVar2;
    *(undefined1 *)((long)param_2 + 0x14) = uVar4;
    if (param_2[3] != 0) {
      param_2[4] = param_2[3];
      __ZdlPv();
    }
    param_2[4] = uVar11;
    param_2[3] = uVar9;
    param_2[5] = uVar8;
    return;
  }
  return;
}



/* Entry: 10aa40d18; end: 10aa4105b;  */

bool FUN_10aa40d18(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar7 = ((long)param_2 - (long)param_1 >> 4) * -0x5555555555555555;
  if (2 < (long)uVar7) {
    if (uVar7 == 3) {
      puVar5 = param_2 + -6;
      iVar11 = *(int *)(param_1 + 8);
      if (iVar11 < *(int *)(param_1 + 2)) {
        if (iVar11 <= *(int *)(param_2 + -4)) {
          FUN_10aa40b30(param_1,param_1 + 6);
          if (*(int *)(param_1 + 8) <= *(int *)(param_2 + -4)) {
            return true;
          }
          param_1 = param_1 + 6;
        }
        goto LAB_10aa40eec;
      }
      if (iVar11 <= *(int *)(param_2 + -4)) {
        return true;
      }
    }
    else {
      if (uVar7 == 4) {
        FUN_10aa40c14(param_1,param_1 + 6,param_1 + 0xc,param_2 + -6);
        return true;
      }
      if (uVar7 != 5) goto LAB_10aa40e28;
      FUN_10aa40c14(param_1,param_1 + 6,param_1 + 0xc,param_1 + 0x12);
      if (*(int *)(param_1 + 0x14) <= *(int *)(param_2 + -4)) {
        return true;
      }
      FUN_10aa40b30(param_1 + 0x12,param_2 + -6);
      if (*(int *)(param_1 + 0xe) <= *(int *)(param_1 + 0x14)) {
        return true;
      }
      FUN_10aa40b30(param_1 + 0xc,param_1 + 0x12);
      if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xe)) {
        return true;
      }
      puVar5 = param_1 + 0xc;
    }
    FUN_10aa40b30(param_1 + 6,puVar5);
    if (*(int *)(param_1 + 2) <= *(int *)(param_1 + 8)) {
      return true;
    }
    puVar5 = param_1 + 6;
LAB_10aa40eec:
    FUN_10aa40b30(param_1,puVar5);
    return true;
  }
  if (uVar7 < 2) {
    return true;
  }
  if (uVar7 == 2) {
    if (*(int *)(param_1 + 2) <= *(int *)(param_2 + -4)) {
      return true;
    }
    puVar5 = param_2 + -6;
    goto LAB_10aa40eec;
  }
LAB_10aa40e28:
  puVar5 = param_1 + 0xc;
  iVar11 = *(int *)(param_1 + 8);
  puVar3 = param_1;
  if (iVar11 < *(int *)(param_1 + 2)) {
    puVar6 = puVar5;
    if (iVar11 <= *(int *)(param_1 + 0xe)) {
      FUN_10aa40b30(param_1,param_1 + 6);
      if (*(int *)(param_1 + 8) <= *(int *)(param_1 + 0xe)) goto LAB_10aa40f1c;
      puVar3 = param_1 + 6;
    }
  }
  else {
    if ((iVar11 <= *(int *)(param_1 + 0xe)) ||
       (FUN_10aa40b30(param_1 + 6,puVar5), *(int *)(param_1 + 2) <= *(int *)(param_1 + 8)))
    goto LAB_10aa40f1c;
    puVar6 = param_1 + 6;
  }
  FUN_10aa40b30(puVar3,puVar6);
LAB_10aa40f1c:
  if (param_1 + 0x12 != param_2) {
    lVar10 = 0;
    iVar11 = 0;
    puVar3 = param_1 + 0x12;
    do {
      iVar1 = *(int *)(puVar3 + 2);
      if (iVar1 < *(int *)(puVar5 + 2)) {
        uVar17 = puVar3[1];
        uVar16 = *puVar3;
        *puVar3 = 0;
        puVar3[1] = 0;
        uVar2 = *(undefined1 *)((long)puVar3 + 0x14);
        uVar9 = puVar3[3];
        uVar14 = puVar3[5];
        uVar12 = puVar3[4];
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        lVar4 = lVar10;
        do {
          lVar8 = lVar4;
          uVar15 = *(undefined8 *)((long)param_1 + lVar8 + 0x68);
          uVar13 = *(undefined8 *)((long)param_1 + lVar8 + 0x60);
          *(undefined8 *)((long)param_1 + lVar8 + 0x60) = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0x68) = 0;
          lVar4 = *(long *)((long)param_1 + lVar8 + 0x98);
          *(undefined8 *)((long)param_1 + lVar8 + 0x98) = uVar15;
          *(undefined8 *)((long)param_1 + lVar8 + 0x90) = uVar13;
          if (lVar4 != 0) {
            __ZNSt3__119__shared_weak_count14__release_weakEv();
          }
          *(undefined4 *)((long)param_1 + lVar8 + 0xa0) =
               *(undefined4 *)((long)param_1 + lVar8 + 0x70);
          *(undefined1 *)((long)param_1 + lVar8 + 0xa4) =
               *(undefined1 *)((long)param_1 + lVar8 + 0x74);
          func_0x00010aa3fbe4((long)param_1 + lVar8 + 0xa8,(long)param_1 + lVar8 + 0x78);
          puVar5 = param_1;
          if (lVar8 == -0x60) goto LAB_10aa40fcc;
          lVar4 = lVar8 + -0x30;
        } while (iVar1 < *(int *)((long)param_1 + lVar8 + 0x40));
        puVar5 = (undefined8 *)((long)param_1 + lVar8 + 0x60);
LAB_10aa40fcc:
        lVar4 = puVar5[1];
        puVar5[1] = uVar17;
        *puVar5 = uVar16;
        if (lVar4 != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        *(int *)((long)param_1 + lVar8 + 0x70) = iVar1;
        *(undefined1 *)((long)puVar5 + 0x14) = uVar2;
        lVar4 = *(long *)((long)param_1 + lVar8 + 0x78);
        if (lVar4 != 0) {
          puVar5[4] = lVar4;
          __ZdlPv();
        }
        *(undefined8 *)((long)param_1 + lVar8 + 0x78) = uVar9;
        puVar5[5] = uVar14;
        puVar5[4] = uVar12;
        iVar11 = iVar11 + 1;
        if (iVar11 == 8) {
          return puVar3 + 6 == param_2;
        }
      }
      puVar6 = puVar3 + 6;
      lVar10 = lVar10 + 0x30;
      puVar5 = puVar3;
      puVar3 = puVar6;
    } while (puVar6 != param_2);
  }
  return true;
}



/* Entry: 10aa4105c; end: 10aa410df;  */

long FUN_10aa4105c(long param_1,long param_2,long param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    FUN_10aa410e0(param_3,param_1);
    param_3 = param_3 + 0x30;
  }
  return param_3;
}



/* Entry: 10aa410e0; end: 10aa411a3;  */

undefined8 * FUN_10aa410e0(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = param_2[1];
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0x10);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  uVar2 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x14);
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  lVar7 = param_2[3];
  lVar6 = param_2[4] - lVar7;
  if (lVar6 != 0) {
    FUN_10aa3e220(param_1 + 3,lVar6 >> 5);
    lVar8 = param_1[4];
    _memmove(lVar8,lVar7,lVar6);
    param_1[4] = lVar8 + lVar6;
  }
  return param_1;
}



/* Entry: 10aa411a4; end: 10aa4134b;  */

undefined1  [16] FUN_10aa411a4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar8 = param_2;
  do {
    if (param_1 == param_2) {
      auVar17._8_8_ = puVar8;
      auVar17._0_8_ = param_3;
      return auVar17;
    }
    uVar16 = param_1[1];
    uVar15 = *param_1;
    if (param_1[1] != 0) {
      plVar13 = (long *)(param_1[1] + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = *plVar13 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar4 = param_3[1];
    param_3[1] = uVar16;
    *param_3 = uVar15;
    if (lVar4 != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    uVar1 = *(undefined4 *)(param_1 + 2);
    *(undefined1 *)((long)param_3 + 0x14) = *(undefined1 *)((long)param_1 + 0x14);
    *(undefined4 *)(param_3 + 2) = uVar1;
    if (param_3 != param_1) {
      plVar13 = param_3 + 3;
      lVar4 = *plVar13;
      puVar7 = (undefined8 *)param_1[3];
      puVar9 = (undefined8 *)param_1[4];
      uVar12 = (long)puVar9 - (long)puVar7;
      uVar10 = param_3[5];
      if (uVar10 - lVar4 < uVar12) {
        if (lVar4 != 0) {
          param_3[4] = lVar4;
          __ZdlPv(lVar4);
          uVar10 = 0;
          *plVar13 = 0;
          param_3[4] = 0;
          param_3[5] = 0;
        }
        puVar11 = (undefined8 *)((long)uVar12 >> 5);
        if ((ulong)puVar11 >> 0x3b != 0) {
          FUN_10aa3e25c();
          puVar5 = &DAT_10f62a4d8;
          FUN_109ffde64();
          if ((ulong)puVar5 >> 0x3c == 0) {
            lVar4 = (long)puVar5 << 4;
            __Znwm(lVar4);
            auVar18._8_8_ = puVar5;
            auVar18._0_8_ = lVar4;
            return auVar18;
          }
          func_0x000109ffded8();
          puVar6 = (ulong *)&DAT_10f62a4d8;
          FUN_109ffde64();
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
          lVar4 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            puVar7 = puVar8;
            puVar9 = puVar8;
            FUN_10aa41360();
            *puVar6 = (ulong)puVar7;
            puVar6[2] = (ulong)(puVar7 + (long)puVar9 * 2);
            lVar4 = (long)puVar8 << 4;
            _bzero();
            puVar6[1] = (ulong)(puVar7 + (long)puVar8 * 2);
          }
          auVar19._8_8_ = lVar4;
          auVar19._0_8_ = puVar6;
          return auVar19;
        }
        puVar8 = (undefined8 *)((long)uVar10 >> 4);
        if ((undefined8 *)((long)uVar10 >> 4) <= puVar11) {
          puVar8 = puVar11;
        }
        if (0x7fffffffffffffdf < uVar10) {
          puVar8 = (undefined8 *)0x7ffffffffffffff;
        }
        FUN_10aa3e220(plVar13);
        lVar14 = param_3[4];
        if (puVar9 != puVar7) {
          _memmove(lVar14,puVar7,uVar12);
          puVar8 = puVar7;
        }
        lVar14 = lVar14 + uVar12;
      }
      else {
        lVar14 = param_3[4];
        uVar10 = lVar14 - lVar4;
        if (uVar10 < uVar12) {
          if (lVar14 != lVar4) {
            _memmove(lVar4,puVar7,uVar10);
            lVar14 = param_3[4];
          }
          puVar8 = (undefined8 *)((long)puVar7 + uVar10);
          lVar4 = (long)puVar9 - (long)puVar8;
          if (lVar4 != 0) {
            _memmove(lVar14,puVar8,lVar4);
          }
          lVar14 = lVar14 + lVar4;
        }
        else {
          if (puVar9 != puVar7) {
            _memmove(lVar4,puVar7,uVar12);
            puVar8 = puVar7;
          }
          lVar14 = lVar4 + uVar12;
        }
      }
      param_3[4] = lVar14;
    }
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while( true );
}



/* Entry: 10aa4134c; end: 10aa4135f;  */

undefined1  [16] FUN_10aa4134c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  puVar1 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar1 >> 0x3c == 0) {
    lVar2 = (long)puVar1 << 4;
    __Znwm(lVar2);
    auVar5._8_8_ = puVar1;
    auVar5._0_8_ = lVar2;
    return auVar5;
  }
  func_0x000109ffded8();
  plVar3 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *plVar3 = 0;
  plVar3[1] = 0;
  plVar3[2] = 0;
  lVar2 = 0;
  if (param_2 != 0) {
    lVar4 = param_2;
    lVar2 = param_2;
    FUN_10aa41360();
    *plVar3 = lVar4;
    plVar3[2] = lVar4 + lVar2 * 0x10;
    lVar2 = param_2 << 4;
    _bzero();
    plVar3[1] = lVar4 + param_2 * 0x10;
  }
  auVar6._8_8_ = lVar2;
  auVar6._0_8_ = plVar3;
  return auVar6;
}



/* Entry: 10aa41360; end: 10aa41393;  */

undefined1  [16] FUN_10aa41360(ulong param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (param_1 >> 0x3c == 0) {
    lVar1 = param_1 << 4;
    __Znwm(lVar1);
    auVar4._8_8_ = param_1;
    auVar4._0_8_ = lVar1;
    return auVar4;
  }
  func_0x000109ffded8();
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *plVar2 = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  lVar1 = 0;
  if (param_2 != 0) {
    lVar3 = param_2;
    lVar1 = param_2;
    FUN_10aa41360();
    *plVar2 = lVar3;
    plVar2[2] = lVar3 + lVar1 * 0x10;
    lVar1 = param_2 << 4;
    _bzero();
    plVar2[1] = lVar3 + param_2 * 0x10;
  }
  auVar5._8_8_ = lVar1;
  auVar5._0_8_ = plVar2;
  return auVar5;
}



/* Entry: 10aa41394; end: 10aa413a7;  */

long * FUN_10aa41394(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_109ffde64();
  *plVar1 = 0;
  plVar1[1] = 0;
  plVar1[2] = 0;
  if (param_2 != 0) {
    lVar2 = param_2;
    lVar3 = param_2;
    FUN_10aa41360();
    *plVar1 = lVar2;
    plVar1[2] = lVar2 + lVar3 * 0x10;
    _bzero();
    plVar1[1] = lVar2 + param_2 * 0x10;
  }
  return plVar1;
}



/* Entry: 10aa413a8; end: 10aa41423;  */

long * FUN_10aa413a8(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    lVar1 = param_2;
    lVar2 = param_2;
    FUN_10aa41360();
    *param_1 = lVar1;
    param_1[2] = lVar1 + lVar2 * 0x10;
    _bzero();
    param_1[1] = lVar1 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 10aa41424; end: 10aa4143b;  */

void FUN_10aa41424(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10aa4143c; end: 10aa414cb;  */

long FUN_10aa4143c(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    __ZdlPv();
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10aa414cc; end: 10aa416b3;  */

long FUN_10aa414cc(long param_1,long *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar9 = *param_2;
  if (((lVar9 != *(long *)(param_1 + 0x20)) &&
      ((*(uint *)(param_1 + 0x44) & *(uint *)(param_2 + 1)) != 0)) &&
     ((*(uint *)(param_1 + 0x40) & *(uint *)((long)param_2 + 0xc)) != 0)) {
    uVar2 = *(undefined8 *)(lVar9 + 0x120);
    FUN_10aa29848(uVar2,param_1 + 0x48);
    if ((int)uVar2 != 0) {
      lStack_78 = *(long *)(lVar9 + 0xd0);
      lStack_68 = lVar9 + 0x10;
      uStack_80 = 0;
      uStack_60 = 0;
      uStack_58 = 0xffffffffffffffff;
      ppuStack_b8 = (undefined **)(*(long *)(param_1 + 8) + 0x2d0);
      uStack_b0 = 0;
      plVar3 = *(long **)(*(long *)(param_1 + 8) +
                          (long)*(int *)(*(long *)(param_1 + 0x18) + 8) * 0x120 +
                          (long)*(int *)(lStack_78 + 8) * 8 + 0x2b98);
      lStack_70 = lVar9;
      (**(code **)(*plVar3 + 0x10))(plVar3,&ppuStack_b8,param_1 + 0x10,&uStack_80);
      if (plVar3 != (long *)0x0) {
        uStack_88 = 0;
        ppuStack_b8 = &PTR_FUN_110c3b970;
        uStack_b0 = 0;
        lStack_a8 = param_1 + 0x10;
        puStack_a0 = &uStack_80;
        (**(code **)(*plVar3 + 0x10))();
        (**(code **)*plVar3)(plVar3);
        lVar4 = *(long *)(param_1 + 8) + 0x2d0;
        func_0x000109807930(lVar4,plVar3);
        if (uStack_88._4_4_ != 0) {
          plVar3 = *(long **)(param_1 + 0xa8);
          if (plVar3 < *(long **)(param_1 + 0xb0)) {
            plVar10 = plVar3 + 1;
            *plVar3 = lVar9;
          }
          else {
            lVar7 = *(long *)(param_1 + 0xa0);
            lVar8 = (long)plVar3 - lVar7;
            uVar1 = (lVar8 >> 3) + 1;
            if (uVar1 >> 0x3d != 0) {
              FUN_10aa416d4();
LAB_10aa416b0:
              func_0x000109ffded8();
              return lVar4;
            }
            uVar5 = (long)*(long **)(param_1 + 0xb0) - lVar7;
            uVar6 = (long)uVar5 >> 2;
            if (uVar6 <= uVar1) {
              uVar6 = uVar1;
            }
            if (0x7ffffffffffffff7 < uVar5) {
              uVar6 = 0x1fffffffffffffff;
            }
            if (uVar6 >> 0x3d != 0) goto LAB_10aa416b0;
            lVar4 = uVar6 << 3;
            __Znwm();
            plVar3 = (long *)(lVar4 + lVar8);
            plVar10 = plVar3 + 1;
            *plVar3 = lVar9;
            _memcpy(plVar3 + -(lVar8 >> 3),lVar7,lVar8);
            *(long **)(param_1 + 0xa0) = plVar3 + -(lVar8 >> 3);
            *(long **)(param_1 + 0xa8) = plVar10;
            *(ulong *)(param_1 + 0xb0) = lVar4 + uVar6 * 8;
            if (lVar7 != 0) {
              __ZdlPv(lVar7);
            }
          }
          *(long **)(param_1 + 0xa8) = plVar10;
        }
      }
    }
  }
  return 1;
}



/* Entry: 10aa416b4; end: 10aa416d3;  */

void FUN_10aa416b4(void)

{
  return;
}



/* Entry: 10aa416d4; end: 10aa416fb;  */

void FUN_10aa416d4(undefined8 param_1,ulong *param_2,long param_3,ulong param_4)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  short sVar16;
  ulong *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  ulong *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  
  FUN_109ffde64(&DAT_10f62a4d8);
  puVar6 = &DAT_10f62a4d8;
  FUN_109ffde64();
  if ((ulong)puVar6 >> 0x3d == 0) {
    __Znwm((long)puVar6 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar7 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
LAB_10aa41778:
  puVar11 = param_2 + -2;
  puVar17 = puVar7;
LAB_10aa4178c:
  do {
    puVar7 = puVar17;
    uVar13 = (long)param_2 - (long)puVar7 >> 4;
    if (uVar13 - 2 == 0 || (long)uVar13 < 2) {
      if (uVar13 < 2) {
        return;
      }
      if (uVar13 == 2) {
        puVar17 = param_2 + -2;
        uVar13 = (long)*(int *)((long)param_2 + -4);
        if (*puVar17 != 0) {
          uVar13 = *puVar17;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0xc);
        if (*puVar7 != 0) {
          uVar10 = *puVar7;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)puVar7 + 10) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar15 = puVar7[1];
        uVar13 = *puVar7;
        uVar10 = *puVar17;
        puVar7[1] = param_2[-1];
        *puVar7 = uVar10;
        param_2[-1] = uVar15;
        *puVar17 = uVar13;
        return;
      }
    }
    else {
      if (uVar13 == 3) {
        puVar17 = puVar7 + 2;
        uVar13 = (long)*(int *)((long)puVar7 + 0x1c);
        if (*puVar17 != 0) {
          uVar13 = *puVar17;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0xc);
        if (*puVar7 != 0) {
          uVar10 = *puVar7;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)puVar7 + 0x1a) != -1 || *(short *)((long)puVar7 + 10) == -1) {
LAB_10aa4243c:
            uVar10 = (long)*(int *)((long)param_2 + -4);
            if (*puVar11 != 0) {
              uVar10 = *puVar11;
            }
            if (uVar10 == uVar13) {
              if (*(short *)((long)param_2 + -6) != -1) {
                return;
              }
              if (*(short *)((long)puVar7 + 0x1a) == -1) {
                return;
              }
            }
            else if (uVar13 <= uVar10) {
              return;
            }
            uVar10 = puVar7[3];
            uVar13 = *puVar17;
            uVar15 = *puVar11;
            puVar7[3] = param_2[-1];
            *puVar17 = uVar15;
            param_2[-1] = uVar10;
            *puVar11 = uVar13;
            uVar13 = (long)*(int *)((long)puVar7 + 0x1c);
            if (*puVar17 != 0) {
              uVar13 = *puVar17;
            }
            uVar10 = (long)*(int *)((long)puVar7 + 0xc);
            if (*puVar7 != 0) {
              uVar10 = *puVar7;
            }
            if (uVar13 == uVar10) {
              if (*(short *)((long)puVar7 + 0x1a) != -1) {
                return;
              }
              if (*(short *)((long)puVar7 + 10) == -1) {
                return;
              }
            }
            else if (uVar10 <= uVar13) {
              return;
            }
            uVar10 = puVar7[1];
            uVar13 = *puVar7;
            puVar7[1] = puVar7[3];
            *puVar7 = *puVar17;
            puVar7[3] = uVar10;
            *puVar17 = uVar13;
            return;
          }
        }
        else if (uVar10 <= uVar13) goto LAB_10aa4243c;
        uVar10 = (long)*(int *)((long)param_2 + -4);
        if (*puVar11 != 0) {
          uVar10 = *puVar11;
        }
        if (uVar10 == uVar13) {
          if ((*(short *)((long)param_2 + -6) == -1) && (*(short *)((long)puVar7 + 0x1a) != -1)) {
LAB_10aa42428:
            uVar10 = puVar7[1];
            uVar13 = *puVar7;
            uVar15 = *puVar11;
            puVar7[1] = param_2[-1];
            *puVar7 = uVar15;
            goto LAB_10aa4253c;
          }
        }
        else if (uVar10 < uVar13) goto LAB_10aa42428;
        uVar10 = puVar7[1];
        uVar13 = *puVar7;
        puVar7[1] = puVar7[3];
        *puVar7 = *puVar17;
        puVar7[3] = uVar10;
        *puVar17 = uVar13;
        uVar13 = (long)*(int *)((long)param_2 + -4);
        if (*puVar11 != 0) {
          uVar13 = *puVar11;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0x1c);
        if (*puVar17 != 0) {
          uVar10 = *puVar17;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)puVar7 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[3];
        uVar13 = *puVar17;
        uVar15 = *puVar11;
        puVar7[3] = param_2[-1];
        *puVar17 = uVar15;
LAB_10aa4253c:
        param_2[-1] = uVar10;
        *puVar11 = uVar13;
        return;
      }
      if (uVar13 == 4) {
        puVar17 = puVar7 + 2;
        puVar8 = puVar7 + 4;
        FUN_10aa423b0();
        uVar13 = (long)*(int *)((long)param_2 + -4);
        if (*puVar11 != 0) {
          uVar13 = *puVar11;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0x2c);
        if (*puVar8 != 0) {
          uVar10 = *puVar8;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)puVar7 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[5];
        uVar13 = *puVar8;
        uVar15 = *puVar11;
        puVar7[5] = param_2[-1];
        *puVar8 = uVar15;
        param_2[-1] = uVar10;
        *puVar11 = uVar13;
        uVar13 = (long)*(int *)((long)puVar7 + 0x2c);
        if (*puVar8 != 0) {
          uVar13 = *puVar8;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0x1c);
        if (*puVar17 != 0) {
          uVar10 = *puVar17;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)puVar7 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)puVar7 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[3];
        uVar13 = *puVar17;
        puVar7[3] = puVar7[5];
        *puVar17 = *puVar8;
        puVar7[5] = uVar10;
        *puVar8 = uVar13;
        uVar13 = (long)*(int *)((long)puVar7 + 0x1c);
        if (*puVar17 != 0) {
          uVar13 = *puVar17;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0xc);
        if (*puVar7 != 0) {
          uVar10 = *puVar7;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)puVar7 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)puVar7 + 10) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[1];
        uVar13 = *puVar7;
        puVar7[1] = puVar7[3];
        *puVar7 = *puVar17;
        puVar7[3] = uVar10;
        *puVar17 = uVar13;
        return;
      }
      if (uVar13 == 5) {
        puVar17 = puVar7 + 2;
        puVar8 = puVar7 + 4;
        puVar9 = puVar7 + 6;
        FUN_10aa42560();
        uVar13 = (long)*(int *)((long)param_2 + -4);
        if (*puVar11 != 0) {
          uVar13 = *puVar11;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0x3c);
        if (*puVar9 != 0) {
          uVar10 = *puVar9;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)puVar7 + 0x3a) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[7];
        uVar13 = *puVar9;
        uVar15 = *puVar11;
        puVar7[7] = param_2[-1];
        *puVar9 = uVar15;
        param_2[-1] = uVar10;
        *puVar11 = uVar13;
        uVar13 = (long)*(int *)((long)puVar7 + 0x3c);
        if (*puVar9 != 0) {
          uVar13 = *puVar9;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0x2c);
        if (*puVar8 != 0) {
          uVar10 = *puVar8;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)puVar7 + 0x3a) != -1) {
            return;
          }
          if (*(short *)((long)puVar7 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[5];
        uVar13 = *puVar8;
        puVar7[5] = puVar7[7];
        *puVar8 = *puVar9;
        puVar7[7] = uVar10;
        *puVar9 = uVar13;
        uVar13 = (long)*(int *)((long)puVar7 + 0x2c);
        if (*puVar8 != 0) {
          uVar13 = *puVar8;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0x1c);
        if (*puVar17 != 0) {
          uVar10 = *puVar17;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)puVar7 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)puVar7 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[3];
        uVar13 = *puVar17;
        puVar7[3] = puVar7[5];
        *puVar17 = *puVar8;
        puVar7[5] = uVar10;
        *puVar8 = uVar13;
        uVar13 = (long)*(int *)((long)puVar7 + 0x1c);
        if (*puVar17 != 0) {
          uVar13 = *puVar17;
        }
        uVar10 = (long)*(int *)((long)puVar7 + 0xc);
        if (*puVar7 != 0) {
          uVar10 = *puVar7;
        }
        if (uVar13 == uVar10) {
          if (*(short *)((long)puVar7 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)puVar7 + 10) == -1) {
            return;
          }
        }
        else if (uVar10 <= uVar13) {
          return;
        }
        uVar10 = puVar7[1];
        uVar13 = *puVar7;
        puVar7[1] = puVar7[3];
        *puVar7 = *puVar17;
        puVar7[3] = uVar10;
        *puVar17 = uVar13;
        return;
      }
    }
    if ((long)uVar13 < 0x18) {
      puVar17 = puVar7 + 2;
      bVar5 = puVar7 == param_2 || puVar17 == param_2;
      if ((param_4 & 1) == 0) {
        if (bVar5) {
          return;
        }
        lVar18 = 0;
        lVar20 = 0x10;
        puVar11 = puVar7;
        goto LAB_10aa422b0;
      }
      if (bVar5) {
        return;
      }
      lVar18 = 0;
      puVar11 = puVar7;
      break;
    }
    if (param_3 == 0) {
      if (puVar7 == param_2) {
        return;
      }
      uVar15 = uVar13 - 2 >> 1;
      uVar10 = uVar15;
      goto LAB_10aa41f20;
    }
    puVar17 = puVar7 + (uVar13 & 0xfffffffffffffffe);
    if (uVar13 < 0x81) {
      FUN_10aa423b0(puVar17,puVar7,puVar11);
    }
    else {
      FUN_10aa423b0(puVar7,puVar17,puVar11);
      FUN_10aa423b0(puVar7 + 2,puVar17 + -2,param_2 + -4);
      FUN_10aa423b0(puVar7 + 4,puVar17 + 2,param_2 + -6);
      FUN_10aa423b0(puVar17 + -2,puVar17,puVar17 + 2);
      uVar15 = puVar7[1];
      uVar13 = *puVar7;
      uVar10 = *puVar17;
      puVar7[1] = puVar17[1];
      *puVar7 = uVar10;
      puVar17[1] = uVar15;
      *puVar17 = uVar13;
    }
    param_3 = param_3 + -1;
    uVar13 = *puVar7;
    if ((param_4 & 1) != 0) {
      iVar14 = *(int *)((long)puVar7 + 0xc);
LAB_10aa418ac:
      if (puVar7 + 2 != param_2) {
        uVar15 = puVar7[1];
        sVar16 = *(short *)((long)puVar7 + 10);
        lVar18 = 0;
        uVar10 = (long)iVar14;
        if (uVar13 != 0) {
          uVar10 = uVar13;
        }
        do {
          uVar22 = *(ulong *)((long)puVar7 + lVar18 + 0x10);
          uVar21 = (long)*(int *)((long)puVar7 + lVar18 + 0x1c);
          if (uVar22 != 0) {
            uVar21 = uVar22;
          }
          if (uVar21 == uVar10) {
            if ((sVar16 == -1) || (*(short *)((long)puVar7 + lVar18 + 0x1a) != -1))
            goto LAB_10aa41920;
          }
          else if (uVar10 <= uVar21) goto LAB_10aa41920;
          lVar20 = lVar18 + 0x20;
          lVar18 = lVar18 + 0x10;
          if ((ulong *)((long)puVar7 + lVar20) == param_2) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    uVar10 = (long)*(int *)((long)puVar7 + -4);
    if (puVar7[-2] != 0) {
      uVar10 = puVar7[-2];
    }
    iVar14 = *(int *)((long)puVar7 + 0xc);
    uVar15 = (long)iVar14;
    if (uVar13 != 0) {
      uVar15 = uVar13;
    }
    if (uVar10 == uVar15) {
      sVar16 = *(short *)((long)puVar7 + 10);
      if ((*(short *)((long)puVar7 + -6) == -1) && (sVar16 != -1)) goto LAB_10aa418ac;
    }
    else {
      if (uVar10 < uVar15) goto LAB_10aa418ac;
      sVar16 = *(short *)((long)puVar7 + 10);
    }
    uVar21 = puVar7[1];
    uVar10 = (long)*(int *)((long)param_2 + -4);
    if (param_2[-2] != 0) {
      uVar10 = param_2[-2];
    }
    if (uVar15 == uVar10) {
      puVar17 = puVar7;
      if ((sVar16 != -1) || (*(short *)((long)param_2 + -6) == -1)) goto LAB_10aa41b8c;
LAB_10aa41b40:
      do {
        while( true ) {
          puVar8 = puVar17;
          puVar17 = puVar8 + 2;
          if (puVar17 == param_2) goto LAB_10aa423ac;
          uVar10 = (long)*(int *)((long)puVar8 + 0x1c);
          if (*puVar17 != 0) {
            uVar10 = *puVar17;
          }
          if (uVar15 != uVar10) break;
          if ((sVar16 == -1) && (*(short *)((long)puVar8 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar10 <= uVar15);
    }
    else {
      puVar17 = puVar7;
      if (uVar15 < uVar10) goto LAB_10aa41b40;
LAB_10aa41b8c:
      do {
        while( true ) {
          puVar8 = puVar17;
          puVar17 = puVar8 + 2;
          if (param_2 <= puVar17) goto LAB_10aa41bd0;
          uVar10 = (long)*(int *)((long)puVar8 + 0x1c);
          if (*puVar17 != 0) {
            uVar10 = *puVar17;
          }
          if (uVar15 != uVar10) break;
          if ((sVar16 == -1) && (*(short *)((long)puVar8 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar10 <= uVar15);
    }
LAB_10aa41bd0:
    puVar8 = param_2;
    if (puVar17 < param_2) {
      puVar8 = puVar11;
      if (param_2 != puVar7) {
        do {
          uVar10 = (long)*(int *)((long)puVar8 + 0xc);
          if (*puVar8 != 0) {
            uVar10 = *puVar8;
          }
          if (uVar15 == uVar10) {
            if ((sVar16 != -1) || (*(short *)((long)puVar8 + 10) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar10 <= uVar15) goto LAB_10aa41c2c;
          bVar5 = puVar8 == puVar7;
          puVar8 = puVar8 + -2;
          if (bVar5) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
LAB_10aa41c2c:
    if (puVar17 < puVar8) {
      uVar19 = puVar17[1];
      uVar10 = *puVar17;
      uVar22 = *puVar8;
      puVar17[1] = puVar8[1];
      *puVar17 = uVar22;
      puVar8[1] = uVar19;
      *puVar8 = uVar10;
      do {
        while( true ) {
          puVar9 = puVar17;
          puVar17 = puVar9 + 2;
          if (puVar17 == param_2) goto LAB_10aa423ac;
          uVar10 = (long)*(int *)((long)puVar9 + 0x1c);
          if (*puVar17 != 0) {
            uVar10 = *puVar17;
          }
          if (uVar15 != uVar10) break;
          if ((sVar16 == -1) && (*(short *)((long)puVar9 + 0x1a) != -1)) goto LAB_10aa41c8c;
        }
      } while (uVar10 <= uVar15);
LAB_10aa41c8c:
      puVar9 = puVar8;
      if (puVar8 != puVar7) {
        do {
          puVar8 = puVar9 + -2;
          uVar10 = (long)*(int *)((long)puVar9 + -4);
          if (*puVar8 != 0) {
            uVar10 = *puVar8;
          }
          if (uVar15 == uVar10) {
            if ((sVar16 != -1) || (*(short *)((long)puVar9 + -6) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar10 <= uVar15) goto LAB_10aa41c2c;
          puVar9 = puVar8;
          if (puVar8 == puVar7) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    if (puVar17 + -2 != puVar7) {
      uVar10 = puVar17[-2];
      puVar7[1] = puVar17[-1];
      *puVar7 = uVar10;
    }
    param_4 = 0;
    puVar17[-2] = uVar13;
    *(short *)(puVar17 + -1) = (short)uVar21;
    *(short *)((long)puVar17 + -6) = sVar16;
    *(int *)((long)puVar17 + -4) = iVar14;
  } while( true );
LAB_10aa41e14:
  uVar10 = puVar11[2];
  iVar14 = *(int *)((long)puVar11 + 0x1c);
  uVar13 = (long)iVar14;
  if (uVar10 != 0) {
    uVar13 = uVar10;
  }
  uVar15 = (long)*(int *)((long)puVar11 + 0xc);
  if (*puVar11 != 0) {
    uVar15 = *puVar11;
  }
  if (uVar13 == uVar15) {
    if (*(short *)((long)puVar11 + 0x1a) == -1 && *(short *)((long)puVar11 + 10) != -1) {
      sVar16 = -1;
LAB_10aa41e68:
      uVar15 = puVar11[3];
      uVar21 = *puVar11;
      puVar17[1] = puVar11[1];
      *puVar17 = uVar21;
      puVar8 = puVar7;
      lVar20 = lVar18;
      if (puVar11 != puVar7) {
        do {
          puVar9 = (ulong *)((long)puVar7 + lVar20);
          uVar22 = puVar9[-2];
          uVar21 = (long)*(int *)((long)puVar9 + -4);
          if (uVar22 != 0) {
            uVar21 = uVar22;
          }
          if (uVar13 == uVar21) {
            if ((sVar16 != -1) || (*(short *)((long)puVar9 + -6) == -1)) {
              puVar8 = (ulong *)((long)puVar7 + lVar20);
              break;
            }
          }
          else {
            puVar8 = puVar11;
            if (uVar21 <= uVar13) break;
          }
          puVar11 = puVar11 + -2;
          puVar9[1] = puVar9[-1];
          *puVar9 = puVar9[-2];
          lVar20 = lVar20 + -0x10;
          puVar8 = puVar7;
        } while (lVar20 != 0);
      }
      *puVar8 = uVar10;
      *(short *)(puVar8 + 1) = (short)uVar15;
      *(short *)((long)puVar8 + 10) = sVar16;
      *(int *)((long)puVar8 + 0xc) = iVar14;
    }
  }
  else if (uVar13 < uVar15) {
    sVar16 = *(short *)((long)puVar11 + 0x1a);
    goto LAB_10aa41e68;
  }
  puVar8 = puVar17 + 2;
  lVar18 = lVar18 + 0x10;
  puVar11 = puVar17;
  puVar17 = puVar8;
  if (puVar8 == param_2) {
    return;
  }
  goto LAB_10aa41e14;
LAB_10aa422b0:
  uVar10 = *puVar17;
  iVar14 = *(int *)((long)puVar11 + 0x1c);
  uVar13 = (long)iVar14;
  if (uVar10 != 0) {
    uVar13 = uVar10;
  }
  uVar15 = (long)*(int *)((long)puVar11 + 0xc);
  if (*puVar11 != 0) {
    uVar15 = *puVar11;
  }
  if (uVar13 == uVar15) {
    if (*(short *)((long)puVar11 + 0x1a) == -1 && *(short *)((long)puVar11 + 10) != -1) {
      sVar16 = -1;
LAB_10aa42304:
      uVar15 = puVar11[3];
      uVar21 = *(ulong *)((long)puVar7 + lVar18);
      puVar17[1] = ((ulong *)((long)puVar7 + lVar18))[1];
      *puVar17 = uVar21;
      do {
        puVar17 = (ulong *)((long)puVar7 + lVar18);
        uVar22 = puVar17[-2];
        uVar21 = (long)*(int *)((long)puVar17 + -4);
        if (uVar22 != 0) {
          uVar21 = uVar22;
        }
        if (uVar13 == uVar21) {
          if ((sVar16 != -1) || (*(short *)((long)puVar17 + -6) == -1)) goto LAB_10aa42364;
        }
        else if (uVar21 <= uVar13) goto LAB_10aa42364;
        lVar18 = lVar18 + -0x10;
        puVar17[1] = puVar17[-1];
        *puVar17 = puVar17[-2];
        if (lVar18 == -0x10) {
LAB_10aa423ac:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa423b0);
          (*pcVar4)();
        }
      } while( true );
    }
  }
  else if (uVar13 < uVar15) {
    sVar16 = *(short *)((long)puVar11 + 0x1a);
    goto LAB_10aa42304;
  }
  goto LAB_10aa42378;
LAB_10aa42364:
  puVar17 = (ulong *)((long)puVar7 + lVar18);
  *puVar17 = uVar10;
  *(short *)(puVar17 + 1) = (short)uVar15;
  *(short *)((long)puVar17 + 10) = sVar16;
  *(int *)((long)puVar17 + 0xc) = iVar14;
LAB_10aa42378:
  puVar11 = (ulong *)((long)puVar7 + lVar20);
  puVar17 = (ulong *)((long)puVar7 + lVar20 + 0x10);
  lVar18 = lVar20;
  lVar20 = lVar20 + 0x10;
  if (puVar17 == param_2) {
    return;
  }
  goto LAB_10aa422b0;
LAB_10aa41f20:
  do {
    if ((long)uVar10 <= (long)uVar15) {
      uVar22 = uVar10 << 1 | 1;
      puVar17 = puVar7 + uVar22 * 2;
      uVar21 = uVar10 * 2 + 2;
      if ((long)uVar21 < (long)uVar13) {
        uVar25 = puVar17[2];
        uVar19 = (long)*(int *)((long)puVar17 + 0xc);
        if (*puVar17 != 0) {
          uVar19 = *puVar17;
        }
        uVar26 = (long)*(int *)((long)puVar17 + 0x1c);
        if (uVar25 != 0) {
          uVar26 = uVar25;
        }
        if (uVar19 == uVar26) {
          if (*(short *)((long)puVar17 + 10) == -1 && *(short *)((long)puVar17 + 0x1a) != -1) {
LAB_10aa41f90:
            puVar17 = puVar17 + 2;
            uVar22 = uVar21;
          }
        }
        else if (uVar19 < uVar26) goto LAB_10aa41f90;
      }
      puVar11 = puVar7 + uVar10 * 2;
      uVar21 = (long)*(int *)((long)puVar17 + 0xc);
      if (*puVar17 != 0) {
        uVar21 = *puVar17;
      }
      uVar25 = *puVar11;
      iVar14 = *(int *)((long)puVar11 + 0xc);
      uVar19 = (long)iVar14;
      if (uVar25 != 0) {
        uVar19 = uVar25;
      }
      if (uVar21 == uVar19) {
        sVar16 = *(short *)((long)puVar11 + 10);
        if (*(short *)((long)puVar17 + 10) != -1 || sVar16 == -1) {
LAB_10aa41fe4:
          uVar21 = puVar11[1];
LAB_10aa41fe8:
          do {
            puVar8 = puVar17;
            uVar26 = *puVar8;
            puVar11[1] = puVar8[1];
            *puVar11 = uVar26;
            if ((long)uVar15 < (long)uVar22) break;
            lVar18 = uVar22 * 2;
            uVar22 = uVar22 << 1 | 1;
            puVar17 = puVar7 + uVar22 * 2;
            uVar26 = lVar18 + 2;
            if ((long)uVar26 < (long)uVar13) {
              uVar12 = puVar17[2];
              uVar2 = (long)*(int *)((long)puVar17 + 0xc);
              if (*puVar17 != 0) {
                uVar2 = *puVar17;
              }
              uVar3 = (long)*(int *)((long)puVar17 + 0x1c);
              if (uVar12 != 0) {
                uVar3 = uVar12;
              }
              if (uVar2 == uVar3) {
                if (*(short *)((long)puVar17 + 10) == -1 && *(short *)((long)puVar17 + 0x1a) != -1)
                {
LAB_10aa42064:
                  puVar17 = puVar17 + 2;
                  uVar22 = uVar26;
                }
              }
              else if (uVar2 < uVar3) goto LAB_10aa42064;
            }
            uVar26 = (long)*(int *)((long)puVar17 + 0xc);
            if (*puVar17 != 0) {
              uVar26 = *puVar17;
            }
            puVar11 = puVar8;
            if (uVar26 != uVar19) {
              if (uVar26 < uVar19) break;
              goto LAB_10aa41fe8;
            }
          } while ((sVar16 == -1) || (*(short *)((long)puVar17 + 10) != -1));
          *puVar8 = uVar25;
          *(short *)(puVar8 + 1) = (short)uVar21;
          *(short *)((long)puVar8 + 10) = sVar16;
          *(int *)((long)puVar8 + 0xc) = iVar14;
        }
      }
      else if (uVar19 <= uVar21) {
        sVar16 = *(short *)((long)puVar11 + 10);
        goto LAB_10aa41fe4;
      }
    }
    bVar5 = uVar10 != 0;
    uVar10 = uVar10 - 1;
  } while (bVar5);
  do {
    uVar21 = puVar7[1];
    uVar15 = *puVar7;
    puVar17 = puVar7;
    uVar10 = 0;
    do {
      puVar11 = puVar17 + uVar10 * 2 + 2;
      uVar19 = uVar10 << 1 | 1;
      uVar22 = uVar10 * 2 + 2;
      if ((long)uVar22 < (long)uVar13) {
        uVar26 = puVar17[uVar10 * 2 + 4];
        uVar25 = (long)*(int *)((long)puVar17 + uVar10 * 0x10 + 0x1c);
        if (puVar17[uVar10 * 2 + 2] != 0) {
          uVar25 = puVar17[uVar10 * 2 + 2];
        }
        uVar2 = (long)*(int *)((long)puVar17 + uVar10 * 0x10 + 0x2c);
        if (uVar26 != 0) {
          uVar2 = uVar26;
        }
        if (uVar25 == uVar2) {
          if (*(short *)((long)puVar17 + uVar10 * 0x10 + 0x1a) == -1 &&
              *(short *)((long)puVar17 + uVar10 * 0x10 + 0x2a) != -1) {
LAB_10aa42148:
            puVar11 = puVar17 + uVar10 * 2 + 4;
            uVar19 = uVar22;
          }
        }
        else if (uVar25 < uVar2) goto LAB_10aa42148;
      }
      uVar10 = *puVar11;
      puVar17[1] = puVar11[1];
      *puVar17 = uVar10;
      puVar17 = puVar11;
      uVar10 = uVar19;
    } while ((long)uVar19 <= (long)(uVar13 - 2 >> 1));
    puVar17 = param_2 + -2;
    if (puVar11 == puVar17) {
      puVar11[1] = uVar21;
      *puVar11 = uVar15;
    }
    else {
      uVar10 = *puVar17;
      puVar11[1] = param_2[-1];
      *puVar11 = uVar10;
      param_2[-1] = uVar21;
      *puVar17 = uVar15;
      lVar18 = (long)((long)puVar11 + (0x10 - (long)puVar7)) >> 4;
      uVar10 = lVar18 - 2;
      if (1 < lVar18) {
        uVar21 = uVar10 >> 1;
        puVar8 = puVar7 + uVar21 * 2;
        uVar15 = (long)*(int *)((long)puVar8 + 0xc);
        if (*puVar8 != 0) {
          uVar15 = *puVar8;
        }
        uVar19 = *puVar11;
        iVar14 = *(int *)((long)puVar11 + 0xc);
        uVar22 = (long)iVar14;
        if (uVar19 != 0) {
          uVar22 = uVar19;
        }
        if (uVar15 == uVar22) {
          sVar16 = *(short *)((long)puVar11 + 10);
          if (*(short *)((long)puVar8 + 10) == -1 && sVar16 != -1) {
LAB_10aa421ec:
            uVar15 = puVar11[1];
            uVar25 = *puVar8;
            puVar11[1] = puVar8[1];
            *puVar11 = uVar25;
            while (1 < uVar10) {
              uVar10 = uVar21 - 1;
              uVar21 = uVar10 >> 1;
              puVar11 = puVar7 + uVar21 * 2;
              uVar25 = (long)*(int *)((long)puVar11 + 0xc);
              if (*puVar11 != 0) {
                uVar25 = *puVar11;
              }
              if (uVar25 == uVar22) {
                if ((sVar16 == -1) || (*(short *)((long)puVar11 + 10) != -1)) break;
              }
              else if (uVar22 <= uVar25) break;
              uVar25 = *puVar11;
              puVar8[1] = puVar11[1];
              *puVar8 = uVar25;
              puVar8 = puVar11;
            }
            *puVar8 = uVar19;
            *(short *)(puVar8 + 1) = (short)uVar15;
            *(short *)((long)puVar8 + 10) = sVar16;
            *(int *)((long)puVar8 + 0xc) = iVar14;
          }
        }
        else if (uVar15 < uVar22) {
          sVar16 = *(short *)((long)puVar11 + 10);
          goto LAB_10aa421ec;
        }
      }
    }
    bVar5 = (long)uVar13 < 3;
    uVar13 = uVar13 - 1;
    param_2 = puVar17;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_10aa41920:
  puVar8 = (ulong *)((long)puVar7 + lVar18 + 0x10);
  if (lVar18 != 0) {
    puVar9 = puVar11;
    if (param_2 != puVar7) {
      do {
        uVar21 = (long)*(int *)((long)puVar9 + 0xc);
        if (*puVar9 != 0) {
          uVar21 = *puVar9;
        }
        if (uVar21 == uVar10) {
          if ((sVar16 != -1) && (*(short *)((long)puVar9 + 10) == -1)) goto LAB_10aa419dc;
        }
        else if (uVar21 < uVar10) goto LAB_10aa419dc;
        bVar5 = puVar9 == puVar7;
        puVar9 = puVar9 + -2;
        if (bVar5) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
  puVar17 = puVar11;
  puVar9 = param_2;
  if (puVar8 < param_2) {
    do {
      uVar21 = (long)*(int *)((long)puVar17 + 0xc);
      if (*puVar17 != 0) {
        uVar21 = *puVar17;
      }
      puVar9 = puVar17;
      if (uVar21 == uVar10) {
        if ((puVar17 <= puVar8) || (sVar16 != -1 && *(short *)((long)puVar17 + 10) == -1)) break;
      }
      else if ((puVar17 <= puVar8) || (uVar21 < uVar10)) break;
      puVar17 = puVar17 + -2;
    } while( true );
  }
LAB_10aa419dc:
  puVar23 = puVar9;
  puVar17 = puVar8;
  puVar27 = puVar8;
  if (puVar8 < puVar9) {
LAB_10aa419ec:
    uVar19 = puVar27[1];
    uVar21 = *puVar27;
    uVar22 = *puVar23;
    puVar27[1] = puVar23[1];
    *puVar27 = uVar22;
    puVar23[1] = uVar19;
    *puVar23 = uVar21;
    do {
      while( true ) {
        puVar17 = puVar27 + 2;
        if (puVar17 == param_2) goto LAB_10aa423ac;
        uVar21 = (long)*(int *)((long)puVar27 + 0x1c);
        if (*puVar17 != 0) {
          uVar21 = *puVar17;
        }
        if (uVar21 != uVar10) break;
        if ((sVar16 == -1) ||
           (psVar1 = (short *)((long)puVar27 + 0x1a), puVar27 = puVar17, *psVar1 != -1))
        goto LAB_10aa41a44;
      }
      puVar27 = puVar17;
    } while (uVar21 < uVar10);
LAB_10aa41a44:
    if (puVar23 != puVar7) {
      do {
        puVar24 = puVar23 + -2;
        uVar21 = (long)*(int *)((long)puVar23 + -4);
        if (*puVar24 != 0) {
          uVar21 = *puVar24;
        }
        if (uVar21 == uVar10) {
          if ((sVar16 != -1) && (*(short *)((long)puVar23 + -6) == -1)) goto LAB_10aa41a94;
        }
        else if (uVar21 < uVar10) goto LAB_10aa41a94;
        puVar23 = puVar24;
        if (puVar24 == puVar7) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
LAB_10aa41a9c:
  puVar23 = puVar17 + -2;
  if (puVar23 != puVar7) {
    uVar10 = *puVar23;
    puVar7[1] = puVar17[-1];
    *puVar7 = uVar10;
  }
  puVar17[-2] = uVar13;
  *(short *)(puVar17 + -1) = (short)uVar15;
  *(short *)((long)puVar17 + -6) = sVar16;
  *(int *)((long)puVar17 + -4) = iVar14;
  if (puVar9 <= puVar8) {
    puVar8 = puVar7;
    FUN_10aa42860(puVar7,puVar23);
    puVar9 = puVar17;
    FUN_10aa42860(puVar17,param_2);
    if ((int)puVar9 != 0) goto LAB_10aa41d08;
    if (((ulong)puVar8 & 1) != 0) goto LAB_10aa4178c;
  }
  FUN_10aa41744(puVar7,puVar23,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_10aa4178c;
LAB_10aa41a94:
  puVar23 = puVar24;
  puVar27 = puVar17;
  if (puVar24 <= puVar17) goto LAB_10aa41a9c;
  goto LAB_10aa419ec;
LAB_10aa41d08:
  param_2 = puVar23;
  if (((ulong)puVar8 & 1) != 0) {
    return;
  }
  goto LAB_10aa41778;
}



/* Entry: 10aa416fc; end: 10aa4172f;  */

void FUN_10aa416fc(ulong param_1,ulong *param_2,long param_3,ulong param_4)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  short sVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  
  if (param_1 >> 0x3d == 0) {
    __Znwm(param_1 << 3);
    return;
  }
  func_0x000109ffded8();
  puVar6 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
LAB_10aa41778:
  puVar10 = param_2 + -2;
  puVar16 = puVar6;
LAB_10aa4178c:
  do {
    puVar6 = puVar16;
    uVar12 = (long)param_2 - (long)puVar6 >> 4;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        puVar16 = param_2 + -2;
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 10) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar14 = puVar6[1];
        uVar12 = *puVar6;
        uVar9 = *puVar16;
        puVar6[1] = param_2[-1];
        *puVar6 = uVar9;
        param_2[-1] = uVar14;
        *puVar16 = uVar12;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        puVar16 = puVar6 + 2;
        uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x1a) != -1 || *(short *)((long)puVar6 + 10) == -1) {
LAB_10aa4243c:
            uVar9 = (long)*(int *)((long)param_2 + -4);
            if (*puVar10 != 0) {
              uVar9 = *puVar10;
            }
            if (uVar9 == uVar12) {
              if (*(short *)((long)param_2 + -6) != -1) {
                return;
              }
              if (*(short *)((long)puVar6 + 0x1a) == -1) {
                return;
              }
            }
            else if (uVar12 <= uVar9) {
              return;
            }
            uVar9 = puVar6[3];
            uVar12 = *puVar16;
            uVar14 = *puVar10;
            puVar6[3] = param_2[-1];
            *puVar16 = uVar14;
            param_2[-1] = uVar9;
            *puVar10 = uVar12;
            uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
            if (*puVar16 != 0) {
              uVar12 = *puVar16;
            }
            uVar9 = (long)*(int *)((long)puVar6 + 0xc);
            if (*puVar6 != 0) {
              uVar9 = *puVar6;
            }
            if (uVar12 == uVar9) {
              if (*(short *)((long)puVar6 + 0x1a) != -1) {
                return;
              }
              if (*(short *)((long)puVar6 + 10) == -1) {
                return;
              }
            }
            else if (uVar9 <= uVar12) {
              return;
            }
            uVar9 = puVar6[1];
            uVar12 = *puVar6;
            puVar6[1] = puVar6[3];
            *puVar6 = *puVar16;
            puVar6[3] = uVar9;
            *puVar16 = uVar12;
            return;
          }
        }
        else if (uVar9 <= uVar12) goto LAB_10aa4243c;
        uVar9 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar9 = *puVar10;
        }
        if (uVar9 == uVar12) {
          if ((*(short *)((long)param_2 + -6) == -1) && (*(short *)((long)puVar6 + 0x1a) != -1)) {
LAB_10aa42428:
            uVar9 = puVar6[1];
            uVar12 = *puVar6;
            uVar14 = *puVar10;
            puVar6[1] = param_2[-1];
            *puVar6 = uVar14;
            goto LAB_10aa4253c;
          }
        }
        else if (uVar9 < uVar12) goto LAB_10aa42428;
        uVar9 = puVar6[1];
        uVar12 = *puVar6;
        puVar6[1] = puVar6[3];
        *puVar6 = *puVar16;
        puVar6[3] = uVar9;
        *puVar16 = uVar12;
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar12 = *puVar10;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar9 = *puVar16;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[3];
        uVar12 = *puVar16;
        uVar14 = *puVar10;
        puVar6[3] = param_2[-1];
        *puVar16 = uVar14;
LAB_10aa4253c:
        param_2[-1] = uVar9;
        *puVar10 = uVar12;
        return;
      }
      if (uVar12 == 4) {
        puVar16 = puVar6 + 2;
        puVar7 = puVar6 + 4;
        FUN_10aa423b0();
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar12 = *puVar10;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar9 = *puVar7;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)puVar6 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[5];
        uVar12 = *puVar7;
        uVar14 = *puVar10;
        puVar6[5] = param_2[-1];
        *puVar7 = uVar14;
        param_2[-1] = uVar9;
        *puVar10 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar12 = *puVar7;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar9 = *puVar16;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[3];
        uVar12 = *puVar16;
        puVar6[3] = puVar6[5];
        *puVar16 = *puVar7;
        puVar6[5] = uVar9;
        *puVar7 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 10) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[1];
        uVar12 = *puVar6;
        puVar6[1] = puVar6[3];
        *puVar6 = *puVar16;
        puVar6[3] = uVar9;
        *puVar16 = uVar12;
        return;
      }
      if (uVar12 == 5) {
        puVar16 = puVar6 + 2;
        puVar7 = puVar6 + 4;
        puVar8 = puVar6 + 6;
        FUN_10aa42560();
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar12 = *puVar10;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x3c);
        if (*puVar8 != 0) {
          uVar9 = *puVar8;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)puVar6 + 0x3a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[7];
        uVar12 = *puVar8;
        uVar14 = *puVar10;
        puVar6[7] = param_2[-1];
        *puVar8 = uVar14;
        param_2[-1] = uVar9;
        *puVar10 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x3c);
        if (*puVar8 != 0) {
          uVar12 = *puVar8;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar9 = *puVar7;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x3a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[5];
        uVar12 = *puVar7;
        puVar6[5] = puVar6[7];
        *puVar7 = *puVar8;
        puVar6[7] = uVar9;
        *puVar8 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar12 = *puVar7;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar9 = *puVar16;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[3];
        uVar12 = *puVar16;
        puVar6[3] = puVar6[5];
        *puVar16 = *puVar7;
        puVar6[5] = uVar9;
        *puVar7 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 10) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[1];
        uVar12 = *puVar6;
        puVar6[1] = puVar6[3];
        *puVar6 = *puVar16;
        puVar6[3] = uVar9;
        *puVar16 = uVar12;
        return;
      }
    }
    if ((long)uVar12 < 0x18) {
      puVar16 = puVar6 + 2;
      bVar5 = puVar6 == param_2 || puVar16 == param_2;
      if ((param_4 & 1) == 0) {
        if (bVar5) {
          return;
        }
        lVar17 = 0;
        lVar19 = 0x10;
        puVar10 = puVar6;
        goto LAB_10aa422b0;
      }
      if (bVar5) {
        return;
      }
      lVar17 = 0;
      puVar10 = puVar6;
      break;
    }
    if (param_3 == 0) {
      if (puVar6 == param_2) {
        return;
      }
      uVar14 = uVar12 - 2 >> 1;
      uVar9 = uVar14;
      goto LAB_10aa41f20;
    }
    puVar16 = puVar6 + (uVar12 & 0xfffffffffffffffe);
    if (uVar12 < 0x81) {
      FUN_10aa423b0(puVar16,puVar6,puVar10);
    }
    else {
      FUN_10aa423b0(puVar6,puVar16,puVar10);
      FUN_10aa423b0(puVar6 + 2,puVar16 + -2,param_2 + -4);
      FUN_10aa423b0(puVar6 + 4,puVar16 + 2,param_2 + -6);
      FUN_10aa423b0(puVar16 + -2,puVar16,puVar16 + 2);
      uVar14 = puVar6[1];
      uVar12 = *puVar6;
      uVar9 = *puVar16;
      puVar6[1] = puVar16[1];
      *puVar6 = uVar9;
      puVar16[1] = uVar14;
      *puVar16 = uVar12;
    }
    param_3 = param_3 + -1;
    uVar12 = *puVar6;
    if ((param_4 & 1) != 0) {
      iVar13 = *(int *)((long)puVar6 + 0xc);
LAB_10aa418ac:
      if (puVar6 + 2 != param_2) {
        uVar14 = puVar6[1];
        sVar15 = *(short *)((long)puVar6 + 10);
        lVar17 = 0;
        uVar9 = (long)iVar13;
        if (uVar12 != 0) {
          uVar9 = uVar12;
        }
        do {
          uVar21 = *(ulong *)((long)puVar6 + lVar17 + 0x10);
          uVar20 = (long)*(int *)((long)puVar6 + lVar17 + 0x1c);
          if (uVar21 != 0) {
            uVar20 = uVar21;
          }
          if (uVar20 == uVar9) {
            if ((sVar15 == -1) || (*(short *)((long)puVar6 + lVar17 + 0x1a) != -1))
            goto LAB_10aa41920;
          }
          else if (uVar9 <= uVar20) goto LAB_10aa41920;
          lVar19 = lVar17 + 0x20;
          lVar17 = lVar17 + 0x10;
          if ((ulong *)((long)puVar6 + lVar19) == param_2) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    uVar9 = (long)*(int *)((long)puVar6 + -4);
    if (puVar6[-2] != 0) {
      uVar9 = puVar6[-2];
    }
    iVar13 = *(int *)((long)puVar6 + 0xc);
    uVar14 = (long)iVar13;
    if (uVar12 != 0) {
      uVar14 = uVar12;
    }
    if (uVar9 == uVar14) {
      sVar15 = *(short *)((long)puVar6 + 10);
      if ((*(short *)((long)puVar6 + -6) == -1) && (sVar15 != -1)) goto LAB_10aa418ac;
    }
    else {
      if (uVar9 < uVar14) goto LAB_10aa418ac;
      sVar15 = *(short *)((long)puVar6 + 10);
    }
    uVar20 = puVar6[1];
    uVar9 = (long)*(int *)((long)param_2 + -4);
    if (param_2[-2] != 0) {
      uVar9 = param_2[-2];
    }
    if (uVar14 == uVar9) {
      puVar16 = puVar6;
      if ((sVar15 != -1) || (*(short *)((long)param_2 + -6) == -1)) goto LAB_10aa41b8c;
LAB_10aa41b40:
      do {
        while( true ) {
          puVar7 = puVar16;
          puVar16 = puVar7 + 2;
          if (puVar16 == param_2) goto LAB_10aa423ac;
          uVar9 = (long)*(int *)((long)puVar7 + 0x1c);
          if (*puVar16 != 0) {
            uVar9 = *puVar16;
          }
          if (uVar14 != uVar9) break;
          if ((sVar15 == -1) && (*(short *)((long)puVar7 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar9 <= uVar14);
    }
    else {
      puVar16 = puVar6;
      if (uVar14 < uVar9) goto LAB_10aa41b40;
LAB_10aa41b8c:
      do {
        while( true ) {
          puVar7 = puVar16;
          puVar16 = puVar7 + 2;
          if (param_2 <= puVar16) goto LAB_10aa41bd0;
          uVar9 = (long)*(int *)((long)puVar7 + 0x1c);
          if (*puVar16 != 0) {
            uVar9 = *puVar16;
          }
          if (uVar14 != uVar9) break;
          if ((sVar15 == -1) && (*(short *)((long)puVar7 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar9 <= uVar14);
    }
LAB_10aa41bd0:
    puVar7 = param_2;
    if (puVar16 < param_2) {
      puVar7 = puVar10;
      if (param_2 != puVar6) {
        do {
          uVar9 = (long)*(int *)((long)puVar7 + 0xc);
          if (*puVar7 != 0) {
            uVar9 = *puVar7;
          }
          if (uVar14 == uVar9) {
            if ((sVar15 != -1) || (*(short *)((long)puVar7 + 10) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar9 <= uVar14) goto LAB_10aa41c2c;
          bVar5 = puVar7 == puVar6;
          puVar7 = puVar7 + -2;
          if (bVar5) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
LAB_10aa41c2c:
    if (puVar16 < puVar7) {
      uVar18 = puVar16[1];
      uVar9 = *puVar16;
      uVar21 = *puVar7;
      puVar16[1] = puVar7[1];
      *puVar16 = uVar21;
      puVar7[1] = uVar18;
      *puVar7 = uVar9;
      do {
        while( true ) {
          puVar8 = puVar16;
          puVar16 = puVar8 + 2;
          if (puVar16 == param_2) goto LAB_10aa423ac;
          uVar9 = (long)*(int *)((long)puVar8 + 0x1c);
          if (*puVar16 != 0) {
            uVar9 = *puVar16;
          }
          if (uVar14 != uVar9) break;
          if ((sVar15 == -1) && (*(short *)((long)puVar8 + 0x1a) != -1)) goto LAB_10aa41c8c;
        }
      } while (uVar9 <= uVar14);
LAB_10aa41c8c:
      puVar8 = puVar7;
      if (puVar7 != puVar6) {
        do {
          puVar7 = puVar8 + -2;
          uVar9 = (long)*(int *)((long)puVar8 + -4);
          if (*puVar7 != 0) {
            uVar9 = *puVar7;
          }
          if (uVar14 == uVar9) {
            if ((sVar15 != -1) || (*(short *)((long)puVar8 + -6) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar9 <= uVar14) goto LAB_10aa41c2c;
          puVar8 = puVar7;
          if (puVar7 == puVar6) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    if (puVar16 + -2 != puVar6) {
      uVar9 = puVar16[-2];
      puVar6[1] = puVar16[-1];
      *puVar6 = uVar9;
    }
    param_4 = 0;
    puVar16[-2] = uVar12;
    *(short *)(puVar16 + -1) = (short)uVar20;
    *(short *)((long)puVar16 + -6) = sVar15;
    *(int *)((long)puVar16 + -4) = iVar13;
  } while( true );
LAB_10aa41e14:
  uVar9 = puVar10[2];
  iVar13 = *(int *)((long)puVar10 + 0x1c);
  uVar12 = (long)iVar13;
  if (uVar9 != 0) {
    uVar12 = uVar9;
  }
  uVar14 = (long)*(int *)((long)puVar10 + 0xc);
  if (*puVar10 != 0) {
    uVar14 = *puVar10;
  }
  if (uVar12 == uVar14) {
    if (*(short *)((long)puVar10 + 0x1a) == -1 && *(short *)((long)puVar10 + 10) != -1) {
      sVar15 = -1;
LAB_10aa41e68:
      uVar14 = puVar10[3];
      uVar20 = *puVar10;
      puVar16[1] = puVar10[1];
      *puVar16 = uVar20;
      puVar7 = puVar6;
      lVar19 = lVar17;
      if (puVar10 != puVar6) {
        do {
          puVar8 = (ulong *)((long)puVar6 + lVar19);
          uVar21 = puVar8[-2];
          uVar20 = (long)*(int *)((long)puVar8 + -4);
          if (uVar21 != 0) {
            uVar20 = uVar21;
          }
          if (uVar12 == uVar20) {
            if ((sVar15 != -1) || (*(short *)((long)puVar8 + -6) == -1)) {
              puVar7 = (ulong *)((long)puVar6 + lVar19);
              break;
            }
          }
          else {
            puVar7 = puVar10;
            if (uVar20 <= uVar12) break;
          }
          puVar10 = puVar10 + -2;
          puVar8[1] = puVar8[-1];
          *puVar8 = puVar8[-2];
          lVar19 = lVar19 + -0x10;
          puVar7 = puVar6;
        } while (lVar19 != 0);
      }
      *puVar7 = uVar9;
      *(short *)(puVar7 + 1) = (short)uVar14;
      *(short *)((long)puVar7 + 10) = sVar15;
      *(int *)((long)puVar7 + 0xc) = iVar13;
    }
  }
  else if (uVar12 < uVar14) {
    sVar15 = *(short *)((long)puVar10 + 0x1a);
    goto LAB_10aa41e68;
  }
  puVar7 = puVar16 + 2;
  lVar17 = lVar17 + 0x10;
  puVar10 = puVar16;
  puVar16 = puVar7;
  if (puVar7 == param_2) {
    return;
  }
  goto LAB_10aa41e14;
LAB_10aa422b0:
  uVar9 = *puVar16;
  iVar13 = *(int *)((long)puVar10 + 0x1c);
  uVar12 = (long)iVar13;
  if (uVar9 != 0) {
    uVar12 = uVar9;
  }
  uVar14 = (long)*(int *)((long)puVar10 + 0xc);
  if (*puVar10 != 0) {
    uVar14 = *puVar10;
  }
  if (uVar12 == uVar14) {
    if (*(short *)((long)puVar10 + 0x1a) == -1 && *(short *)((long)puVar10 + 10) != -1) {
      sVar15 = -1;
LAB_10aa42304:
      uVar14 = puVar10[3];
      uVar20 = *(ulong *)((long)puVar6 + lVar17);
      puVar16[1] = ((ulong *)((long)puVar6 + lVar17))[1];
      *puVar16 = uVar20;
      do {
        puVar16 = (ulong *)((long)puVar6 + lVar17);
        uVar21 = puVar16[-2];
        uVar20 = (long)*(int *)((long)puVar16 + -4);
        if (uVar21 != 0) {
          uVar20 = uVar21;
        }
        if (uVar12 == uVar20) {
          if ((sVar15 != -1) || (*(short *)((long)puVar16 + -6) == -1)) goto LAB_10aa42364;
        }
        else if (uVar20 <= uVar12) goto LAB_10aa42364;
        lVar17 = lVar17 + -0x10;
        puVar16[1] = puVar16[-1];
        *puVar16 = puVar16[-2];
        if (lVar17 == -0x10) {
LAB_10aa423ac:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa423b0);
          (*pcVar4)();
        }
      } while( true );
    }
  }
  else if (uVar12 < uVar14) {
    sVar15 = *(short *)((long)puVar10 + 0x1a);
    goto LAB_10aa42304;
  }
  goto LAB_10aa42378;
LAB_10aa42364:
  puVar16 = (ulong *)((long)puVar6 + lVar17);
  *puVar16 = uVar9;
  *(short *)(puVar16 + 1) = (short)uVar14;
  *(short *)((long)puVar16 + 10) = sVar15;
  *(int *)((long)puVar16 + 0xc) = iVar13;
LAB_10aa42378:
  puVar10 = (ulong *)((long)puVar6 + lVar19);
  puVar16 = (ulong *)((long)puVar6 + lVar19 + 0x10);
  lVar17 = lVar19;
  lVar19 = lVar19 + 0x10;
  if (puVar16 == param_2) {
    return;
  }
  goto LAB_10aa422b0;
LAB_10aa41f20:
  do {
    if ((long)uVar9 <= (long)uVar14) {
      uVar21 = uVar9 << 1 | 1;
      puVar16 = puVar6 + uVar21 * 2;
      uVar20 = uVar9 * 2 + 2;
      if ((long)uVar20 < (long)uVar12) {
        uVar24 = puVar16[2];
        uVar18 = (long)*(int *)((long)puVar16 + 0xc);
        if (*puVar16 != 0) {
          uVar18 = *puVar16;
        }
        uVar25 = (long)*(int *)((long)puVar16 + 0x1c);
        if (uVar24 != 0) {
          uVar25 = uVar24;
        }
        if (uVar18 == uVar25) {
          if (*(short *)((long)puVar16 + 10) == -1 && *(short *)((long)puVar16 + 0x1a) != -1) {
LAB_10aa41f90:
            puVar16 = puVar16 + 2;
            uVar21 = uVar20;
          }
        }
        else if (uVar18 < uVar25) goto LAB_10aa41f90;
      }
      puVar10 = puVar6 + uVar9 * 2;
      uVar20 = (long)*(int *)((long)puVar16 + 0xc);
      if (*puVar16 != 0) {
        uVar20 = *puVar16;
      }
      uVar24 = *puVar10;
      iVar13 = *(int *)((long)puVar10 + 0xc);
      uVar18 = (long)iVar13;
      if (uVar24 != 0) {
        uVar18 = uVar24;
      }
      if (uVar20 == uVar18) {
        sVar15 = *(short *)((long)puVar10 + 10);
        if (*(short *)((long)puVar16 + 10) != -1 || sVar15 == -1) {
LAB_10aa41fe4:
          uVar20 = puVar10[1];
LAB_10aa41fe8:
          do {
            puVar7 = puVar16;
            uVar25 = *puVar7;
            puVar10[1] = puVar7[1];
            *puVar10 = uVar25;
            if ((long)uVar14 < (long)uVar21) break;
            lVar17 = uVar21 * 2;
            uVar21 = uVar21 << 1 | 1;
            puVar16 = puVar6 + uVar21 * 2;
            uVar25 = lVar17 + 2;
            if ((long)uVar25 < (long)uVar12) {
              uVar11 = puVar16[2];
              uVar2 = (long)*(int *)((long)puVar16 + 0xc);
              if (*puVar16 != 0) {
                uVar2 = *puVar16;
              }
              uVar3 = (long)*(int *)((long)puVar16 + 0x1c);
              if (uVar11 != 0) {
                uVar3 = uVar11;
              }
              if (uVar2 == uVar3) {
                if (*(short *)((long)puVar16 + 10) == -1 && *(short *)((long)puVar16 + 0x1a) != -1)
                {
LAB_10aa42064:
                  puVar16 = puVar16 + 2;
                  uVar21 = uVar25;
                }
              }
              else if (uVar2 < uVar3) goto LAB_10aa42064;
            }
            uVar25 = (long)*(int *)((long)puVar16 + 0xc);
            if (*puVar16 != 0) {
              uVar25 = *puVar16;
            }
            puVar10 = puVar7;
            if (uVar25 != uVar18) {
              if (uVar25 < uVar18) break;
              goto LAB_10aa41fe8;
            }
          } while ((sVar15 == -1) || (*(short *)((long)puVar16 + 10) != -1));
          *puVar7 = uVar24;
          *(short *)(puVar7 + 1) = (short)uVar20;
          *(short *)((long)puVar7 + 10) = sVar15;
          *(int *)((long)puVar7 + 0xc) = iVar13;
        }
      }
      else if (uVar18 <= uVar20) {
        sVar15 = *(short *)((long)puVar10 + 10);
        goto LAB_10aa41fe4;
      }
    }
    bVar5 = uVar9 != 0;
    uVar9 = uVar9 - 1;
  } while (bVar5);
  do {
    uVar20 = puVar6[1];
    uVar14 = *puVar6;
    puVar16 = puVar6;
    uVar9 = 0;
    do {
      puVar10 = puVar16 + uVar9 * 2 + 2;
      uVar18 = uVar9 << 1 | 1;
      uVar21 = uVar9 * 2 + 2;
      if ((long)uVar21 < (long)uVar12) {
        uVar25 = puVar16[uVar9 * 2 + 4];
        uVar24 = (long)*(int *)((long)puVar16 + uVar9 * 0x10 + 0x1c);
        if (puVar16[uVar9 * 2 + 2] != 0) {
          uVar24 = puVar16[uVar9 * 2 + 2];
        }
        uVar2 = (long)*(int *)((long)puVar16 + uVar9 * 0x10 + 0x2c);
        if (uVar25 != 0) {
          uVar2 = uVar25;
        }
        if (uVar24 == uVar2) {
          if (*(short *)((long)puVar16 + uVar9 * 0x10 + 0x1a) == -1 &&
              *(short *)((long)puVar16 + uVar9 * 0x10 + 0x2a) != -1) {
LAB_10aa42148:
            puVar10 = puVar16 + uVar9 * 2 + 4;
            uVar18 = uVar21;
          }
        }
        else if (uVar24 < uVar2) goto LAB_10aa42148;
      }
      uVar9 = *puVar10;
      puVar16[1] = puVar10[1];
      *puVar16 = uVar9;
      puVar16 = puVar10;
      uVar9 = uVar18;
    } while ((long)uVar18 <= (long)(uVar12 - 2 >> 1));
    puVar16 = param_2 + -2;
    if (puVar10 == puVar16) {
      puVar10[1] = uVar20;
      *puVar10 = uVar14;
    }
    else {
      uVar9 = *puVar16;
      puVar10[1] = param_2[-1];
      *puVar10 = uVar9;
      param_2[-1] = uVar20;
      *puVar16 = uVar14;
      lVar17 = (long)((long)puVar10 + (0x10 - (long)puVar6)) >> 4;
      uVar9 = lVar17 - 2;
      if (1 < lVar17) {
        uVar20 = uVar9 >> 1;
        puVar7 = puVar6 + uVar20 * 2;
        uVar14 = (long)*(int *)((long)puVar7 + 0xc);
        if (*puVar7 != 0) {
          uVar14 = *puVar7;
        }
        uVar18 = *puVar10;
        iVar13 = *(int *)((long)puVar10 + 0xc);
        uVar21 = (long)iVar13;
        if (uVar18 != 0) {
          uVar21 = uVar18;
        }
        if (uVar14 == uVar21) {
          sVar15 = *(short *)((long)puVar10 + 10);
          if (*(short *)((long)puVar7 + 10) == -1 && sVar15 != -1) {
LAB_10aa421ec:
            uVar14 = puVar10[1];
            uVar24 = *puVar7;
            puVar10[1] = puVar7[1];
            *puVar10 = uVar24;
            while (1 < uVar9) {
              uVar9 = uVar20 - 1;
              uVar20 = uVar9 >> 1;
              puVar10 = puVar6 + uVar20 * 2;
              uVar24 = (long)*(int *)((long)puVar10 + 0xc);
              if (*puVar10 != 0) {
                uVar24 = *puVar10;
              }
              if (uVar24 == uVar21) {
                if ((sVar15 == -1) || (*(short *)((long)puVar10 + 10) != -1)) break;
              }
              else if (uVar21 <= uVar24) break;
              uVar24 = *puVar10;
              puVar7[1] = puVar10[1];
              *puVar7 = uVar24;
              puVar7 = puVar10;
            }
            *puVar7 = uVar18;
            *(short *)(puVar7 + 1) = (short)uVar14;
            *(short *)((long)puVar7 + 10) = sVar15;
            *(int *)((long)puVar7 + 0xc) = iVar13;
          }
        }
        else if (uVar14 < uVar21) {
          sVar15 = *(short *)((long)puVar10 + 10);
          goto LAB_10aa421ec;
        }
      }
    }
    bVar5 = (long)uVar12 < 3;
    uVar12 = uVar12 - 1;
    param_2 = puVar16;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_10aa41920:
  puVar7 = (ulong *)((long)puVar6 + lVar17 + 0x10);
  if (lVar17 != 0) {
    puVar8 = puVar10;
    if (param_2 != puVar6) {
      do {
        uVar20 = (long)*(int *)((long)puVar8 + 0xc);
        if (*puVar8 != 0) {
          uVar20 = *puVar8;
        }
        if (uVar20 == uVar9) {
          if ((sVar15 != -1) && (*(short *)((long)puVar8 + 10) == -1)) goto LAB_10aa419dc;
        }
        else if (uVar20 < uVar9) goto LAB_10aa419dc;
        bVar5 = puVar8 == puVar6;
        puVar8 = puVar8 + -2;
        if (bVar5) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
  puVar16 = puVar10;
  puVar8 = param_2;
  if (puVar7 < param_2) {
    do {
      uVar20 = (long)*(int *)((long)puVar16 + 0xc);
      if (*puVar16 != 0) {
        uVar20 = *puVar16;
      }
      puVar8 = puVar16;
      if (uVar20 == uVar9) {
        if ((puVar16 <= puVar7) || (sVar15 != -1 && *(short *)((long)puVar16 + 10) == -1)) break;
      }
      else if ((puVar16 <= puVar7) || (uVar20 < uVar9)) break;
      puVar16 = puVar16 + -2;
    } while( true );
  }
LAB_10aa419dc:
  puVar22 = puVar8;
  puVar16 = puVar7;
  puVar26 = puVar7;
  if (puVar7 < puVar8) {
LAB_10aa419ec:
    uVar18 = puVar26[1];
    uVar20 = *puVar26;
    uVar21 = *puVar22;
    puVar26[1] = puVar22[1];
    *puVar26 = uVar21;
    puVar22[1] = uVar18;
    *puVar22 = uVar20;
    do {
      while( true ) {
        puVar16 = puVar26 + 2;
        if (puVar16 == param_2) goto LAB_10aa423ac;
        uVar20 = (long)*(int *)((long)puVar26 + 0x1c);
        if (*puVar16 != 0) {
          uVar20 = *puVar16;
        }
        if (uVar20 != uVar9) break;
        if ((sVar15 == -1) ||
           (psVar1 = (short *)((long)puVar26 + 0x1a), puVar26 = puVar16, *psVar1 != -1))
        goto LAB_10aa41a44;
      }
      puVar26 = puVar16;
    } while (uVar20 < uVar9);
LAB_10aa41a44:
    if (puVar22 != puVar6) {
      do {
        puVar23 = puVar22 + -2;
        uVar20 = (long)*(int *)((long)puVar22 + -4);
        if (*puVar23 != 0) {
          uVar20 = *puVar23;
        }
        if (uVar20 == uVar9) {
          if ((sVar15 != -1) && (*(short *)((long)puVar22 + -6) == -1)) goto LAB_10aa41a94;
        }
        else if (uVar20 < uVar9) goto LAB_10aa41a94;
        puVar22 = puVar23;
        if (puVar23 == puVar6) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
LAB_10aa41a9c:
  puVar22 = puVar16 + -2;
  if (puVar22 != puVar6) {
    uVar9 = *puVar22;
    puVar6[1] = puVar16[-1];
    *puVar6 = uVar9;
  }
  puVar16[-2] = uVar12;
  *(short *)(puVar16 + -1) = (short)uVar14;
  *(short *)((long)puVar16 + -6) = sVar15;
  *(int *)((long)puVar16 + -4) = iVar13;
  if (puVar8 <= puVar7) {
    puVar7 = puVar6;
    FUN_10aa42860(puVar6,puVar22);
    puVar8 = puVar16;
    FUN_10aa42860(puVar16,param_2);
    if ((int)puVar8 != 0) goto LAB_10aa41d08;
    if (((ulong)puVar7 & 1) != 0) goto LAB_10aa4178c;
  }
  FUN_10aa41744(puVar6,puVar22,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_10aa4178c;
LAB_10aa41a94:
  puVar22 = puVar23;
  puVar26 = puVar16;
  if (puVar23 <= puVar16) goto LAB_10aa41a9c;
  goto LAB_10aa419ec;
LAB_10aa41d08:
  param_2 = puVar22;
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  goto LAB_10aa41778;
}



/* Entry: 10aa41730; end: 10aa41743;  */

void FUN_10aa41730(undefined8 param_1,ulong *param_2,long param_3,ulong param_4)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  short sVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  
  puVar6 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
LAB_10aa41778:
  puVar10 = param_2 + -2;
  puVar16 = puVar6;
LAB_10aa4178c:
  do {
    puVar6 = puVar16;
    uVar12 = (long)param_2 - (long)puVar6 >> 4;
    if (uVar12 - 2 == 0 || (long)uVar12 < 2) {
      if (uVar12 < 2) {
        return;
      }
      if (uVar12 == 2) {
        puVar16 = param_2 + -2;
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 10) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar14 = puVar6[1];
        uVar12 = *puVar6;
        uVar9 = *puVar16;
        puVar6[1] = param_2[-1];
        *puVar6 = uVar9;
        param_2[-1] = uVar14;
        *puVar16 = uVar12;
        return;
      }
    }
    else {
      if (uVar12 == 3) {
        puVar16 = puVar6 + 2;
        uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x1a) != -1 || *(short *)((long)puVar6 + 10) == -1) {
LAB_10aa4243c:
            uVar9 = (long)*(int *)((long)param_2 + -4);
            if (*puVar10 != 0) {
              uVar9 = *puVar10;
            }
            if (uVar9 == uVar12) {
              if (*(short *)((long)param_2 + -6) != -1) {
                return;
              }
              if (*(short *)((long)puVar6 + 0x1a) == -1) {
                return;
              }
            }
            else if (uVar12 <= uVar9) {
              return;
            }
            uVar9 = puVar6[3];
            uVar12 = *puVar16;
            uVar14 = *puVar10;
            puVar6[3] = param_2[-1];
            *puVar16 = uVar14;
            param_2[-1] = uVar9;
            *puVar10 = uVar12;
            uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
            if (*puVar16 != 0) {
              uVar12 = *puVar16;
            }
            uVar9 = (long)*(int *)((long)puVar6 + 0xc);
            if (*puVar6 != 0) {
              uVar9 = *puVar6;
            }
            if (uVar12 == uVar9) {
              if (*(short *)((long)puVar6 + 0x1a) != -1) {
                return;
              }
              if (*(short *)((long)puVar6 + 10) == -1) {
                return;
              }
            }
            else if (uVar9 <= uVar12) {
              return;
            }
            uVar9 = puVar6[1];
            uVar12 = *puVar6;
            puVar6[1] = puVar6[3];
            *puVar6 = *puVar16;
            puVar6[3] = uVar9;
            *puVar16 = uVar12;
            return;
          }
        }
        else if (uVar9 <= uVar12) goto LAB_10aa4243c;
        uVar9 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar9 = *puVar10;
        }
        if (uVar9 == uVar12) {
          if ((*(short *)((long)param_2 + -6) == -1) && (*(short *)((long)puVar6 + 0x1a) != -1)) {
LAB_10aa42428:
            uVar9 = puVar6[1];
            uVar12 = *puVar6;
            uVar14 = *puVar10;
            puVar6[1] = param_2[-1];
            *puVar6 = uVar14;
            goto LAB_10aa4253c;
          }
        }
        else if (uVar9 < uVar12) goto LAB_10aa42428;
        uVar9 = puVar6[1];
        uVar12 = *puVar6;
        puVar6[1] = puVar6[3];
        *puVar6 = *puVar16;
        puVar6[3] = uVar9;
        *puVar16 = uVar12;
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar12 = *puVar10;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar9 = *puVar16;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[3];
        uVar12 = *puVar16;
        uVar14 = *puVar10;
        puVar6[3] = param_2[-1];
        *puVar16 = uVar14;
LAB_10aa4253c:
        param_2[-1] = uVar9;
        *puVar10 = uVar12;
        return;
      }
      if (uVar12 == 4) {
        puVar16 = puVar6 + 2;
        puVar7 = puVar6 + 4;
        FUN_10aa423b0();
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar12 = *puVar10;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar9 = *puVar7;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)puVar6 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[5];
        uVar12 = *puVar7;
        uVar14 = *puVar10;
        puVar6[5] = param_2[-1];
        *puVar7 = uVar14;
        param_2[-1] = uVar9;
        *puVar10 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar12 = *puVar7;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar9 = *puVar16;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[3];
        uVar12 = *puVar16;
        puVar6[3] = puVar6[5];
        *puVar16 = *puVar7;
        puVar6[5] = uVar9;
        *puVar7 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 10) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[1];
        uVar12 = *puVar6;
        puVar6[1] = puVar6[3];
        *puVar6 = *puVar16;
        puVar6[3] = uVar9;
        *puVar16 = uVar12;
        return;
      }
      if (uVar12 == 5) {
        puVar16 = puVar6 + 2;
        puVar7 = puVar6 + 4;
        puVar8 = puVar6 + 6;
        FUN_10aa42560();
        uVar12 = (long)*(int *)((long)param_2 + -4);
        if (*puVar10 != 0) {
          uVar12 = *puVar10;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x3c);
        if (*puVar8 != 0) {
          uVar9 = *puVar8;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)puVar6 + 0x3a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[7];
        uVar12 = *puVar8;
        uVar14 = *puVar10;
        puVar6[7] = param_2[-1];
        *puVar8 = uVar14;
        param_2[-1] = uVar9;
        *puVar10 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x3c);
        if (*puVar8 != 0) {
          uVar12 = *puVar8;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar9 = *puVar7;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x3a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[5];
        uVar12 = *puVar7;
        puVar6[5] = puVar6[7];
        *puVar7 = *puVar8;
        puVar6[7] = uVar9;
        *puVar8 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x2c);
        if (*puVar7 != 0) {
          uVar12 = *puVar7;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar9 = *puVar16;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[3];
        uVar12 = *puVar16;
        puVar6[3] = puVar6[5];
        *puVar16 = *puVar7;
        puVar6[5] = uVar9;
        *puVar7 = uVar12;
        uVar12 = (long)*(int *)((long)puVar6 + 0x1c);
        if (*puVar16 != 0) {
          uVar12 = *puVar16;
        }
        uVar9 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar9 = *puVar6;
        }
        if (uVar12 == uVar9) {
          if (*(short *)((long)puVar6 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)puVar6 + 10) == -1) {
            return;
          }
        }
        else if (uVar9 <= uVar12) {
          return;
        }
        uVar9 = puVar6[1];
        uVar12 = *puVar6;
        puVar6[1] = puVar6[3];
        *puVar6 = *puVar16;
        puVar6[3] = uVar9;
        *puVar16 = uVar12;
        return;
      }
    }
    if ((long)uVar12 < 0x18) {
      puVar16 = puVar6 + 2;
      bVar5 = puVar6 == param_2 || puVar16 == param_2;
      if ((param_4 & 1) == 0) {
        if (bVar5) {
          return;
        }
        lVar17 = 0;
        lVar19 = 0x10;
        puVar10 = puVar6;
        goto LAB_10aa422b0;
      }
      if (bVar5) {
        return;
      }
      lVar17 = 0;
      puVar10 = puVar6;
      break;
    }
    if (param_3 == 0) {
      if (puVar6 == param_2) {
        return;
      }
      uVar14 = uVar12 - 2 >> 1;
      uVar9 = uVar14;
      goto LAB_10aa41f20;
    }
    puVar16 = puVar6 + (uVar12 & 0xfffffffffffffffe);
    if (uVar12 < 0x81) {
      FUN_10aa423b0(puVar16,puVar6,puVar10);
    }
    else {
      FUN_10aa423b0(puVar6,puVar16,puVar10);
      FUN_10aa423b0(puVar6 + 2,puVar16 + -2,param_2 + -4);
      FUN_10aa423b0(puVar6 + 4,puVar16 + 2,param_2 + -6);
      FUN_10aa423b0(puVar16 + -2,puVar16,puVar16 + 2);
      uVar14 = puVar6[1];
      uVar12 = *puVar6;
      uVar9 = *puVar16;
      puVar6[1] = puVar16[1];
      *puVar6 = uVar9;
      puVar16[1] = uVar14;
      *puVar16 = uVar12;
    }
    param_3 = param_3 + -1;
    uVar12 = *puVar6;
    if ((param_4 & 1) != 0) {
      iVar13 = *(int *)((long)puVar6 + 0xc);
LAB_10aa418ac:
      if (puVar6 + 2 != param_2) {
        uVar14 = puVar6[1];
        sVar15 = *(short *)((long)puVar6 + 10);
        lVar17 = 0;
        uVar9 = (long)iVar13;
        if (uVar12 != 0) {
          uVar9 = uVar12;
        }
        do {
          uVar21 = *(ulong *)((long)puVar6 + lVar17 + 0x10);
          uVar20 = (long)*(int *)((long)puVar6 + lVar17 + 0x1c);
          if (uVar21 != 0) {
            uVar20 = uVar21;
          }
          if (uVar20 == uVar9) {
            if ((sVar15 == -1) || (*(short *)((long)puVar6 + lVar17 + 0x1a) != -1))
            goto LAB_10aa41920;
          }
          else if (uVar9 <= uVar20) goto LAB_10aa41920;
          lVar19 = lVar17 + 0x20;
          lVar17 = lVar17 + 0x10;
          if ((ulong *)((long)puVar6 + lVar19) == param_2) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    uVar9 = (long)*(int *)((long)puVar6 + -4);
    if (puVar6[-2] != 0) {
      uVar9 = puVar6[-2];
    }
    iVar13 = *(int *)((long)puVar6 + 0xc);
    uVar14 = (long)iVar13;
    if (uVar12 != 0) {
      uVar14 = uVar12;
    }
    if (uVar9 == uVar14) {
      sVar15 = *(short *)((long)puVar6 + 10);
      if ((*(short *)((long)puVar6 + -6) == -1) && (sVar15 != -1)) goto LAB_10aa418ac;
    }
    else {
      if (uVar9 < uVar14) goto LAB_10aa418ac;
      sVar15 = *(short *)((long)puVar6 + 10);
    }
    uVar20 = puVar6[1];
    uVar9 = (long)*(int *)((long)param_2 + -4);
    if (param_2[-2] != 0) {
      uVar9 = param_2[-2];
    }
    if (uVar14 == uVar9) {
      puVar16 = puVar6;
      if ((sVar15 != -1) || (*(short *)((long)param_2 + -6) == -1)) goto LAB_10aa41b8c;
LAB_10aa41b40:
      do {
        while( true ) {
          puVar7 = puVar16;
          puVar16 = puVar7 + 2;
          if (puVar16 == param_2) goto LAB_10aa423ac;
          uVar9 = (long)*(int *)((long)puVar7 + 0x1c);
          if (*puVar16 != 0) {
            uVar9 = *puVar16;
          }
          if (uVar14 != uVar9) break;
          if ((sVar15 == -1) && (*(short *)((long)puVar7 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar9 <= uVar14);
    }
    else {
      puVar16 = puVar6;
      if (uVar14 < uVar9) goto LAB_10aa41b40;
LAB_10aa41b8c:
      do {
        while( true ) {
          puVar7 = puVar16;
          puVar16 = puVar7 + 2;
          if (param_2 <= puVar16) goto LAB_10aa41bd0;
          uVar9 = (long)*(int *)((long)puVar7 + 0x1c);
          if (*puVar16 != 0) {
            uVar9 = *puVar16;
          }
          if (uVar14 != uVar9) break;
          if ((sVar15 == -1) && (*(short *)((long)puVar7 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar9 <= uVar14);
    }
LAB_10aa41bd0:
    puVar7 = param_2;
    if (puVar16 < param_2) {
      puVar7 = puVar10;
      if (param_2 != puVar6) {
        do {
          uVar9 = (long)*(int *)((long)puVar7 + 0xc);
          if (*puVar7 != 0) {
            uVar9 = *puVar7;
          }
          if (uVar14 == uVar9) {
            if ((sVar15 != -1) || (*(short *)((long)puVar7 + 10) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar9 <= uVar14) goto LAB_10aa41c2c;
          bVar5 = puVar7 == puVar6;
          puVar7 = puVar7 + -2;
          if (bVar5) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
LAB_10aa41c2c:
    if (puVar16 < puVar7) {
      uVar18 = puVar16[1];
      uVar9 = *puVar16;
      uVar21 = *puVar7;
      puVar16[1] = puVar7[1];
      *puVar16 = uVar21;
      puVar7[1] = uVar18;
      *puVar7 = uVar9;
      do {
        while( true ) {
          puVar8 = puVar16;
          puVar16 = puVar8 + 2;
          if (puVar16 == param_2) goto LAB_10aa423ac;
          uVar9 = (long)*(int *)((long)puVar8 + 0x1c);
          if (*puVar16 != 0) {
            uVar9 = *puVar16;
          }
          if (uVar14 != uVar9) break;
          if ((sVar15 == -1) && (*(short *)((long)puVar8 + 0x1a) != -1)) goto LAB_10aa41c8c;
        }
      } while (uVar9 <= uVar14);
LAB_10aa41c8c:
      puVar8 = puVar7;
      if (puVar7 != puVar6) {
        do {
          puVar7 = puVar8 + -2;
          uVar9 = (long)*(int *)((long)puVar8 + -4);
          if (*puVar7 != 0) {
            uVar9 = *puVar7;
          }
          if (uVar14 == uVar9) {
            if ((sVar15 != -1) || (*(short *)((long)puVar8 + -6) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar9 <= uVar14) goto LAB_10aa41c2c;
          puVar8 = puVar7;
          if (puVar7 == puVar6) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    if (puVar16 + -2 != puVar6) {
      uVar9 = puVar16[-2];
      puVar6[1] = puVar16[-1];
      *puVar6 = uVar9;
    }
    param_4 = 0;
    puVar16[-2] = uVar12;
    *(short *)(puVar16 + -1) = (short)uVar20;
    *(short *)((long)puVar16 + -6) = sVar15;
    *(int *)((long)puVar16 + -4) = iVar13;
  } while( true );
LAB_10aa41e14:
  uVar9 = puVar10[2];
  iVar13 = *(int *)((long)puVar10 + 0x1c);
  uVar12 = (long)iVar13;
  if (uVar9 != 0) {
    uVar12 = uVar9;
  }
  uVar14 = (long)*(int *)((long)puVar10 + 0xc);
  if (*puVar10 != 0) {
    uVar14 = *puVar10;
  }
  if (uVar12 == uVar14) {
    if (*(short *)((long)puVar10 + 0x1a) == -1 && *(short *)((long)puVar10 + 10) != -1) {
      sVar15 = -1;
LAB_10aa41e68:
      uVar14 = puVar10[3];
      uVar20 = *puVar10;
      puVar16[1] = puVar10[1];
      *puVar16 = uVar20;
      puVar7 = puVar6;
      lVar19 = lVar17;
      if (puVar10 != puVar6) {
        do {
          puVar8 = (ulong *)((long)puVar6 + lVar19);
          uVar21 = puVar8[-2];
          uVar20 = (long)*(int *)((long)puVar8 + -4);
          if (uVar21 != 0) {
            uVar20 = uVar21;
          }
          if (uVar12 == uVar20) {
            if ((sVar15 != -1) || (*(short *)((long)puVar8 + -6) == -1)) {
              puVar7 = (ulong *)((long)puVar6 + lVar19);
              break;
            }
          }
          else {
            puVar7 = puVar10;
            if (uVar20 <= uVar12) break;
          }
          puVar10 = puVar10 + -2;
          puVar8[1] = puVar8[-1];
          *puVar8 = puVar8[-2];
          lVar19 = lVar19 + -0x10;
          puVar7 = puVar6;
        } while (lVar19 != 0);
      }
      *puVar7 = uVar9;
      *(short *)(puVar7 + 1) = (short)uVar14;
      *(short *)((long)puVar7 + 10) = sVar15;
      *(int *)((long)puVar7 + 0xc) = iVar13;
    }
  }
  else if (uVar12 < uVar14) {
    sVar15 = *(short *)((long)puVar10 + 0x1a);
    goto LAB_10aa41e68;
  }
  puVar7 = puVar16 + 2;
  lVar17 = lVar17 + 0x10;
  puVar10 = puVar16;
  puVar16 = puVar7;
  if (puVar7 == param_2) {
    return;
  }
  goto LAB_10aa41e14;
LAB_10aa422b0:
  uVar9 = *puVar16;
  iVar13 = *(int *)((long)puVar10 + 0x1c);
  uVar12 = (long)iVar13;
  if (uVar9 != 0) {
    uVar12 = uVar9;
  }
  uVar14 = (long)*(int *)((long)puVar10 + 0xc);
  if (*puVar10 != 0) {
    uVar14 = *puVar10;
  }
  if (uVar12 == uVar14) {
    if (*(short *)((long)puVar10 + 0x1a) == -1 && *(short *)((long)puVar10 + 10) != -1) {
      sVar15 = -1;
LAB_10aa42304:
      uVar14 = puVar10[3];
      uVar20 = *(ulong *)((long)puVar6 + lVar17);
      puVar16[1] = ((ulong *)((long)puVar6 + lVar17))[1];
      *puVar16 = uVar20;
      do {
        puVar16 = (ulong *)((long)puVar6 + lVar17);
        uVar21 = puVar16[-2];
        uVar20 = (long)*(int *)((long)puVar16 + -4);
        if (uVar21 != 0) {
          uVar20 = uVar21;
        }
        if (uVar12 == uVar20) {
          if ((sVar15 != -1) || (*(short *)((long)puVar16 + -6) == -1)) goto LAB_10aa42364;
        }
        else if (uVar20 <= uVar12) goto LAB_10aa42364;
        lVar17 = lVar17 + -0x10;
        puVar16[1] = puVar16[-1];
        *puVar16 = puVar16[-2];
        if (lVar17 == -0x10) {
LAB_10aa423ac:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa423b0);
          (*pcVar4)();
        }
      } while( true );
    }
  }
  else if (uVar12 < uVar14) {
    sVar15 = *(short *)((long)puVar10 + 0x1a);
    goto LAB_10aa42304;
  }
  goto LAB_10aa42378;
LAB_10aa42364:
  puVar16 = (ulong *)((long)puVar6 + lVar17);
  *puVar16 = uVar9;
  *(short *)(puVar16 + 1) = (short)uVar14;
  *(short *)((long)puVar16 + 10) = sVar15;
  *(int *)((long)puVar16 + 0xc) = iVar13;
LAB_10aa42378:
  puVar10 = (ulong *)((long)puVar6 + lVar19);
  puVar16 = (ulong *)((long)puVar6 + lVar19 + 0x10);
  lVar17 = lVar19;
  lVar19 = lVar19 + 0x10;
  if (puVar16 == param_2) {
    return;
  }
  goto LAB_10aa422b0;
LAB_10aa41f20:
  do {
    if ((long)uVar9 <= (long)uVar14) {
      uVar21 = uVar9 << 1 | 1;
      puVar16 = puVar6 + uVar21 * 2;
      uVar20 = uVar9 * 2 + 2;
      if ((long)uVar20 < (long)uVar12) {
        uVar24 = puVar16[2];
        uVar18 = (long)*(int *)((long)puVar16 + 0xc);
        if (*puVar16 != 0) {
          uVar18 = *puVar16;
        }
        uVar25 = (long)*(int *)((long)puVar16 + 0x1c);
        if (uVar24 != 0) {
          uVar25 = uVar24;
        }
        if (uVar18 == uVar25) {
          if (*(short *)((long)puVar16 + 10) == -1 && *(short *)((long)puVar16 + 0x1a) != -1) {
LAB_10aa41f90:
            puVar16 = puVar16 + 2;
            uVar21 = uVar20;
          }
        }
        else if (uVar18 < uVar25) goto LAB_10aa41f90;
      }
      puVar10 = puVar6 + uVar9 * 2;
      uVar20 = (long)*(int *)((long)puVar16 + 0xc);
      if (*puVar16 != 0) {
        uVar20 = *puVar16;
      }
      uVar24 = *puVar10;
      iVar13 = *(int *)((long)puVar10 + 0xc);
      uVar18 = (long)iVar13;
      if (uVar24 != 0) {
        uVar18 = uVar24;
      }
      if (uVar20 == uVar18) {
        sVar15 = *(short *)((long)puVar10 + 10);
        if (*(short *)((long)puVar16 + 10) != -1 || sVar15 == -1) {
LAB_10aa41fe4:
          uVar20 = puVar10[1];
LAB_10aa41fe8:
          do {
            puVar7 = puVar16;
            uVar25 = *puVar7;
            puVar10[1] = puVar7[1];
            *puVar10 = uVar25;
            if ((long)uVar14 < (long)uVar21) break;
            lVar17 = uVar21 * 2;
            uVar21 = uVar21 << 1 | 1;
            puVar16 = puVar6 + uVar21 * 2;
            uVar25 = lVar17 + 2;
            if ((long)uVar25 < (long)uVar12) {
              uVar11 = puVar16[2];
              uVar2 = (long)*(int *)((long)puVar16 + 0xc);
              if (*puVar16 != 0) {
                uVar2 = *puVar16;
              }
              uVar3 = (long)*(int *)((long)puVar16 + 0x1c);
              if (uVar11 != 0) {
                uVar3 = uVar11;
              }
              if (uVar2 == uVar3) {
                if (*(short *)((long)puVar16 + 10) == -1 && *(short *)((long)puVar16 + 0x1a) != -1)
                {
LAB_10aa42064:
                  puVar16 = puVar16 + 2;
                  uVar21 = uVar25;
                }
              }
              else if (uVar2 < uVar3) goto LAB_10aa42064;
            }
            uVar25 = (long)*(int *)((long)puVar16 + 0xc);
            if (*puVar16 != 0) {
              uVar25 = *puVar16;
            }
            puVar10 = puVar7;
            if (uVar25 != uVar18) {
              if (uVar25 < uVar18) break;
              goto LAB_10aa41fe8;
            }
          } while ((sVar15 == -1) || (*(short *)((long)puVar16 + 10) != -1));
          *puVar7 = uVar24;
          *(short *)(puVar7 + 1) = (short)uVar20;
          *(short *)((long)puVar7 + 10) = sVar15;
          *(int *)((long)puVar7 + 0xc) = iVar13;
        }
      }
      else if (uVar18 <= uVar20) {
        sVar15 = *(short *)((long)puVar10 + 10);
        goto LAB_10aa41fe4;
      }
    }
    bVar5 = uVar9 != 0;
    uVar9 = uVar9 - 1;
  } while (bVar5);
  do {
    uVar20 = puVar6[1];
    uVar14 = *puVar6;
    puVar16 = puVar6;
    uVar9 = 0;
    do {
      puVar10 = puVar16 + uVar9 * 2 + 2;
      uVar18 = uVar9 << 1 | 1;
      uVar21 = uVar9 * 2 + 2;
      if ((long)uVar21 < (long)uVar12) {
        uVar25 = puVar16[uVar9 * 2 + 4];
        uVar24 = (long)*(int *)((long)puVar16 + uVar9 * 0x10 + 0x1c);
        if (puVar16[uVar9 * 2 + 2] != 0) {
          uVar24 = puVar16[uVar9 * 2 + 2];
        }
        uVar2 = (long)*(int *)((long)puVar16 + uVar9 * 0x10 + 0x2c);
        if (uVar25 != 0) {
          uVar2 = uVar25;
        }
        if (uVar24 == uVar2) {
          if (*(short *)((long)puVar16 + uVar9 * 0x10 + 0x1a) == -1 &&
              *(short *)((long)puVar16 + uVar9 * 0x10 + 0x2a) != -1) {
LAB_10aa42148:
            puVar10 = puVar16 + uVar9 * 2 + 4;
            uVar18 = uVar21;
          }
        }
        else if (uVar24 < uVar2) goto LAB_10aa42148;
      }
      uVar9 = *puVar10;
      puVar16[1] = puVar10[1];
      *puVar16 = uVar9;
      puVar16 = puVar10;
      uVar9 = uVar18;
    } while ((long)uVar18 <= (long)(uVar12 - 2 >> 1));
    puVar16 = param_2 + -2;
    if (puVar10 == puVar16) {
      puVar10[1] = uVar20;
      *puVar10 = uVar14;
    }
    else {
      uVar9 = *puVar16;
      puVar10[1] = param_2[-1];
      *puVar10 = uVar9;
      param_2[-1] = uVar20;
      *puVar16 = uVar14;
      lVar17 = (long)((long)puVar10 + (0x10 - (long)puVar6)) >> 4;
      uVar9 = lVar17 - 2;
      if (1 < lVar17) {
        uVar20 = uVar9 >> 1;
        puVar7 = puVar6 + uVar20 * 2;
        uVar14 = (long)*(int *)((long)puVar7 + 0xc);
        if (*puVar7 != 0) {
          uVar14 = *puVar7;
        }
        uVar18 = *puVar10;
        iVar13 = *(int *)((long)puVar10 + 0xc);
        uVar21 = (long)iVar13;
        if (uVar18 != 0) {
          uVar21 = uVar18;
        }
        if (uVar14 == uVar21) {
          sVar15 = *(short *)((long)puVar10 + 10);
          if (*(short *)((long)puVar7 + 10) == -1 && sVar15 != -1) {
LAB_10aa421ec:
            uVar14 = puVar10[1];
            uVar24 = *puVar7;
            puVar10[1] = puVar7[1];
            *puVar10 = uVar24;
            while (1 < uVar9) {
              uVar9 = uVar20 - 1;
              uVar20 = uVar9 >> 1;
              puVar10 = puVar6 + uVar20 * 2;
              uVar24 = (long)*(int *)((long)puVar10 + 0xc);
              if (*puVar10 != 0) {
                uVar24 = *puVar10;
              }
              if (uVar24 == uVar21) {
                if ((sVar15 == -1) || (*(short *)((long)puVar10 + 10) != -1)) break;
              }
              else if (uVar21 <= uVar24) break;
              uVar24 = *puVar10;
              puVar7[1] = puVar10[1];
              *puVar7 = uVar24;
              puVar7 = puVar10;
            }
            *puVar7 = uVar18;
            *(short *)(puVar7 + 1) = (short)uVar14;
            *(short *)((long)puVar7 + 10) = sVar15;
            *(int *)((long)puVar7 + 0xc) = iVar13;
          }
        }
        else if (uVar14 < uVar21) {
          sVar15 = *(short *)((long)puVar10 + 10);
          goto LAB_10aa421ec;
        }
      }
    }
    bVar5 = (long)uVar12 < 3;
    uVar12 = uVar12 - 1;
    param_2 = puVar16;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_10aa41920:
  puVar7 = (ulong *)((long)puVar6 + lVar17 + 0x10);
  if (lVar17 != 0) {
    puVar8 = puVar10;
    if (param_2 != puVar6) {
      do {
        uVar20 = (long)*(int *)((long)puVar8 + 0xc);
        if (*puVar8 != 0) {
          uVar20 = *puVar8;
        }
        if (uVar20 == uVar9) {
          if ((sVar15 != -1) && (*(short *)((long)puVar8 + 10) == -1)) goto LAB_10aa419dc;
        }
        else if (uVar20 < uVar9) goto LAB_10aa419dc;
        bVar5 = puVar8 == puVar6;
        puVar8 = puVar8 + -2;
        if (bVar5) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
  puVar16 = puVar10;
  puVar8 = param_2;
  if (puVar7 < param_2) {
    do {
      uVar20 = (long)*(int *)((long)puVar16 + 0xc);
      if (*puVar16 != 0) {
        uVar20 = *puVar16;
      }
      puVar8 = puVar16;
      if (uVar20 == uVar9) {
        if ((puVar16 <= puVar7) || (sVar15 != -1 && *(short *)((long)puVar16 + 10) == -1)) break;
      }
      else if ((puVar16 <= puVar7) || (uVar20 < uVar9)) break;
      puVar16 = puVar16 + -2;
    } while( true );
  }
LAB_10aa419dc:
  puVar22 = puVar8;
  puVar16 = puVar7;
  puVar26 = puVar7;
  if (puVar7 < puVar8) {
LAB_10aa419ec:
    uVar18 = puVar26[1];
    uVar20 = *puVar26;
    uVar21 = *puVar22;
    puVar26[1] = puVar22[1];
    *puVar26 = uVar21;
    puVar22[1] = uVar18;
    *puVar22 = uVar20;
    do {
      while( true ) {
        puVar16 = puVar26 + 2;
        if (puVar16 == param_2) goto LAB_10aa423ac;
        uVar20 = (long)*(int *)((long)puVar26 + 0x1c);
        if (*puVar16 != 0) {
          uVar20 = *puVar16;
        }
        if (uVar20 != uVar9) break;
        if ((sVar15 == -1) ||
           (psVar1 = (short *)((long)puVar26 + 0x1a), puVar26 = puVar16, *psVar1 != -1))
        goto LAB_10aa41a44;
      }
      puVar26 = puVar16;
    } while (uVar20 < uVar9);
LAB_10aa41a44:
    if (puVar22 != puVar6) {
      do {
        puVar23 = puVar22 + -2;
        uVar20 = (long)*(int *)((long)puVar22 + -4);
        if (*puVar23 != 0) {
          uVar20 = *puVar23;
        }
        if (uVar20 == uVar9) {
          if ((sVar15 != -1) && (*(short *)((long)puVar22 + -6) == -1)) goto LAB_10aa41a94;
        }
        else if (uVar20 < uVar9) goto LAB_10aa41a94;
        puVar22 = puVar23;
        if (puVar23 == puVar6) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
LAB_10aa41a9c:
  puVar22 = puVar16 + -2;
  if (puVar22 != puVar6) {
    uVar9 = *puVar22;
    puVar6[1] = puVar16[-1];
    *puVar6 = uVar9;
  }
  puVar16[-2] = uVar12;
  *(short *)(puVar16 + -1) = (short)uVar14;
  *(short *)((long)puVar16 + -6) = sVar15;
  *(int *)((long)puVar16 + -4) = iVar13;
  if (puVar8 <= puVar7) {
    puVar7 = puVar6;
    FUN_10aa42860(puVar6,puVar22);
    puVar8 = puVar16;
    FUN_10aa42860(puVar16,param_2);
    if ((int)puVar8 != 0) goto LAB_10aa41d08;
    if (((ulong)puVar7 & 1) != 0) goto LAB_10aa4178c;
  }
  FUN_10aa41744(puVar6,puVar22,param_3,(uint)param_4 & 1);
  param_4 = 0;
  goto LAB_10aa4178c;
LAB_10aa41a94:
  puVar22 = puVar23;
  puVar26 = puVar16;
  if (puVar23 <= puVar16) goto LAB_10aa41a9c;
  goto LAB_10aa419ec;
LAB_10aa41d08:
  param_2 = puVar22;
  if (((ulong)puVar7 & 1) != 0) {
    return;
  }
  goto LAB_10aa41778;
}



/* Entry: 10aa41744; end: 10aa423af;  */

void FUN_10aa41744(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  short *psVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  short sVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  
LAB_10aa41778:
  puVar9 = param_2 + -2;
  puVar15 = param_1;
LAB_10aa4178c:
  do {
    param_1 = puVar15;
    uVar11 = (long)param_2 - (long)param_1 >> 4;
    if (uVar11 - 2 == 0 || (long)uVar11 < 2) {
      if (uVar11 < 2) {
        return;
      }
      if (uVar11 == 2) {
        puVar15 = param_2 + -2;
        uVar11 = (long)*(int *)((long)param_2 + -4);
        if (*puVar15 != 0) {
          uVar11 = *puVar15;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0xc);
        if (*param_1 != 0) {
          uVar8 = *param_1;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)param_1 + 10) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar13 = param_1[1];
        uVar11 = *param_1;
        uVar8 = *puVar15;
        param_1[1] = param_2[-1];
        *param_1 = uVar8;
        param_2[-1] = uVar13;
        *puVar15 = uVar11;
        return;
      }
    }
    else {
      if (uVar11 == 3) {
        puVar15 = param_1 + 2;
        uVar11 = (long)*(int *)((long)param_1 + 0x1c);
        if (*puVar15 != 0) {
          uVar11 = *puVar15;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0xc);
        if (*param_1 != 0) {
          uVar8 = *param_1;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_1 + 0x1a) != -1 || *(short *)((long)param_1 + 10) == -1) {
LAB_10aa4243c:
            uVar8 = (long)*(int *)((long)param_2 + -4);
            if (*puVar9 != 0) {
              uVar8 = *puVar9;
            }
            if (uVar8 == uVar11) {
              if (*(short *)((long)param_2 + -6) != -1) {
                return;
              }
              if (*(short *)((long)param_1 + 0x1a) == -1) {
                return;
              }
            }
            else if (uVar11 <= uVar8) {
              return;
            }
            uVar8 = param_1[3];
            uVar11 = *puVar15;
            uVar13 = *puVar9;
            param_1[3] = param_2[-1];
            *puVar15 = uVar13;
            param_2[-1] = uVar8;
            *puVar9 = uVar11;
            uVar11 = (long)*(int *)((long)param_1 + 0x1c);
            if (*puVar15 != 0) {
              uVar11 = *puVar15;
            }
            uVar8 = (long)*(int *)((long)param_1 + 0xc);
            if (*param_1 != 0) {
              uVar8 = *param_1;
            }
            if (uVar11 == uVar8) {
              if (*(short *)((long)param_1 + 0x1a) != -1) {
                return;
              }
              if (*(short *)((long)param_1 + 10) == -1) {
                return;
              }
            }
            else if (uVar8 <= uVar11) {
              return;
            }
            uVar8 = param_1[1];
            uVar11 = *param_1;
            param_1[1] = param_1[3];
            *param_1 = *puVar15;
            param_1[3] = uVar8;
            *puVar15 = uVar11;
            return;
          }
        }
        else if (uVar8 <= uVar11) goto LAB_10aa4243c;
        uVar8 = (long)*(int *)((long)param_2 + -4);
        if (*puVar9 != 0) {
          uVar8 = *puVar9;
        }
        if (uVar8 == uVar11) {
          if ((*(short *)((long)param_2 + -6) == -1) && (*(short *)((long)param_1 + 0x1a) != -1)) {
LAB_10aa42428:
            uVar8 = param_1[1];
            uVar11 = *param_1;
            uVar13 = *puVar9;
            param_1[1] = param_2[-1];
            *param_1 = uVar13;
            goto LAB_10aa4253c;
          }
        }
        else if (uVar8 < uVar11) goto LAB_10aa42428;
        uVar8 = param_1[1];
        uVar11 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar15;
        param_1[3] = uVar8;
        *puVar15 = uVar11;
        uVar11 = (long)*(int *)((long)param_2 + -4);
        if (*puVar9 != 0) {
          uVar11 = *puVar9;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0x1c);
        if (*puVar15 != 0) {
          uVar8 = *puVar15;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_2 + -6) != -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[3];
        uVar11 = *puVar15;
        uVar13 = *puVar9;
        param_1[3] = param_2[-1];
        *puVar15 = uVar13;
LAB_10aa4253c:
        param_2[-1] = uVar8;
        *puVar9 = uVar11;
        return;
      }
      if (uVar11 == 4) {
        puVar15 = param_1 + 2;
        puVar6 = param_1 + 4;
        FUN_10aa423b0();
        uVar11 = (long)*(int *)((long)param_2 + -4);
        if (*puVar9 != 0) {
          uVar11 = *puVar9;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0x2c);
        if (*puVar6 != 0) {
          uVar8 = *puVar6;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)param_1 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[5];
        uVar11 = *puVar6;
        uVar13 = *puVar9;
        param_1[5] = param_2[-1];
        *puVar6 = uVar13;
        param_2[-1] = uVar8;
        *puVar9 = uVar11;
        uVar11 = (long)*(int *)((long)param_1 + 0x2c);
        if (*puVar6 != 0) {
          uVar11 = *puVar6;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0x1c);
        if (*puVar15 != 0) {
          uVar8 = *puVar15;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_1 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[3];
        uVar11 = *puVar15;
        param_1[3] = param_1[5];
        *puVar15 = *puVar6;
        param_1[5] = uVar8;
        *puVar6 = uVar11;
        uVar11 = (long)*(int *)((long)param_1 + 0x1c);
        if (*puVar15 != 0) {
          uVar11 = *puVar15;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0xc);
        if (*param_1 != 0) {
          uVar8 = *param_1;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_1 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)param_1 + 10) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[1];
        uVar11 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar15;
        param_1[3] = uVar8;
        *puVar15 = uVar11;
        return;
      }
      if (uVar11 == 5) {
        puVar15 = param_1 + 2;
        puVar6 = param_1 + 4;
        puVar7 = param_1 + 6;
        FUN_10aa42560();
        uVar11 = (long)*(int *)((long)param_2 + -4);
        if (*puVar9 != 0) {
          uVar11 = *puVar9;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0x3c);
        if (*puVar7 != 0) {
          uVar8 = *puVar7;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_2 + -6) != -1 || *(short *)((long)param_1 + 0x3a) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[7];
        uVar11 = *puVar7;
        uVar13 = *puVar9;
        param_1[7] = param_2[-1];
        *puVar7 = uVar13;
        param_2[-1] = uVar8;
        *puVar9 = uVar11;
        uVar11 = (long)*(int *)((long)param_1 + 0x3c);
        if (*puVar7 != 0) {
          uVar11 = *puVar7;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0x2c);
        if (*puVar6 != 0) {
          uVar8 = *puVar6;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_1 + 0x3a) != -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0x2a) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[5];
        uVar11 = *puVar6;
        param_1[5] = param_1[7];
        *puVar6 = *puVar7;
        param_1[7] = uVar8;
        *puVar7 = uVar11;
        uVar11 = (long)*(int *)((long)param_1 + 0x2c);
        if (*puVar6 != 0) {
          uVar11 = *puVar6;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0x1c);
        if (*puVar15 != 0) {
          uVar8 = *puVar15;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_1 + 0x2a) != -1) {
            return;
          }
          if (*(short *)((long)param_1 + 0x1a) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[3];
        uVar11 = *puVar15;
        param_1[3] = param_1[5];
        *puVar15 = *puVar6;
        param_1[5] = uVar8;
        *puVar6 = uVar11;
        uVar11 = (long)*(int *)((long)param_1 + 0x1c);
        if (*puVar15 != 0) {
          uVar11 = *puVar15;
        }
        uVar8 = (long)*(int *)((long)param_1 + 0xc);
        if (*param_1 != 0) {
          uVar8 = *param_1;
        }
        if (uVar11 == uVar8) {
          if (*(short *)((long)param_1 + 0x1a) != -1) {
            return;
          }
          if (*(short *)((long)param_1 + 10) == -1) {
            return;
          }
        }
        else if (uVar8 <= uVar11) {
          return;
        }
        uVar8 = param_1[1];
        uVar11 = *param_1;
        param_1[1] = param_1[3];
        *param_1 = *puVar15;
        param_1[3] = uVar8;
        *puVar15 = uVar11;
        return;
      }
    }
    if ((long)uVar11 < 0x18) {
      puVar15 = param_1 + 2;
      bVar5 = param_1 == param_2 || puVar15 == param_2;
      if ((param_4 & 1) == 0) {
        if (bVar5) {
          return;
        }
        lVar16 = 0;
        lVar18 = 0x10;
        puVar9 = param_1;
        goto LAB_10aa422b0;
      }
      if (bVar5) {
        return;
      }
      lVar16 = 0;
      puVar9 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar13 = uVar11 - 2 >> 1;
      uVar8 = uVar13;
      goto LAB_10aa41f20;
    }
    puVar15 = param_1 + (uVar11 & 0xfffffffffffffffe);
    if (uVar11 < 0x81) {
      FUN_10aa423b0(puVar15,param_1,puVar9);
    }
    else {
      FUN_10aa423b0(param_1,puVar15,puVar9);
      FUN_10aa423b0(param_1 + 2,puVar15 + -2,param_2 + -4);
      FUN_10aa423b0(param_1 + 4,puVar15 + 2,param_2 + -6);
      FUN_10aa423b0(puVar15 + -2,puVar15,puVar15 + 2);
      uVar13 = param_1[1];
      uVar11 = *param_1;
      uVar8 = *puVar15;
      param_1[1] = puVar15[1];
      *param_1 = uVar8;
      puVar15[1] = uVar13;
      *puVar15 = uVar11;
    }
    param_3 = param_3 + -1;
    uVar11 = *param_1;
    if ((param_4 & 1) != 0) {
      iVar12 = *(int *)((long)param_1 + 0xc);
LAB_10aa418ac:
      if (param_1 + 2 != param_2) {
        uVar13 = param_1[1];
        sVar14 = *(short *)((long)param_1 + 10);
        lVar16 = 0;
        uVar8 = (long)iVar12;
        if (uVar11 != 0) {
          uVar8 = uVar11;
        }
        do {
          uVar20 = *(ulong *)((long)param_1 + lVar16 + 0x10);
          uVar19 = (long)*(int *)((long)param_1 + lVar16 + 0x1c);
          if (uVar20 != 0) {
            uVar19 = uVar20;
          }
          if (uVar19 == uVar8) {
            if ((sVar14 == -1) || (*(short *)((long)param_1 + lVar16 + 0x1a) != -1))
            goto LAB_10aa41920;
          }
          else if (uVar8 <= uVar19) goto LAB_10aa41920;
          lVar18 = lVar16 + 0x20;
          lVar16 = lVar16 + 0x10;
          if ((ulong *)((long)param_1 + lVar18) == param_2) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    uVar8 = (long)*(int *)((long)param_1 - 4);
    if (param_1[-2] != 0) {
      uVar8 = param_1[-2];
    }
    iVar12 = *(int *)((long)param_1 + 0xc);
    uVar13 = (long)iVar12;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    if (uVar8 == uVar13) {
      sVar14 = *(short *)((long)param_1 + 10);
      if ((*(short *)((long)param_1 - 6) == -1) && (sVar14 != -1)) goto LAB_10aa418ac;
    }
    else {
      if (uVar8 < uVar13) goto LAB_10aa418ac;
      sVar14 = *(short *)((long)param_1 + 10);
    }
    uVar19 = param_1[1];
    uVar8 = (long)*(int *)((long)param_2 + -4);
    if (param_2[-2] != 0) {
      uVar8 = param_2[-2];
    }
    if (uVar13 == uVar8) {
      puVar15 = param_1;
      if ((sVar14 != -1) || (*(short *)((long)param_2 + -6) == -1)) goto LAB_10aa41b8c;
LAB_10aa41b40:
      do {
        while( true ) {
          puVar6 = puVar15;
          puVar15 = puVar6 + 2;
          if (puVar15 == param_2) goto LAB_10aa423ac;
          uVar8 = (long)*(int *)((long)puVar6 + 0x1c);
          if (*puVar15 != 0) {
            uVar8 = *puVar15;
          }
          if (uVar13 != uVar8) break;
          if ((sVar14 == -1) && (*(short *)((long)puVar6 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar8 <= uVar13);
    }
    else {
      puVar15 = param_1;
      if (uVar13 < uVar8) goto LAB_10aa41b40;
LAB_10aa41b8c:
      do {
        while( true ) {
          puVar6 = puVar15;
          puVar15 = puVar6 + 2;
          if (param_2 <= puVar15) goto LAB_10aa41bd0;
          uVar8 = (long)*(int *)((long)puVar6 + 0x1c);
          if (*puVar15 != 0) {
            uVar8 = *puVar15;
          }
          if (uVar13 != uVar8) break;
          if ((sVar14 == -1) && (*(short *)((long)puVar6 + 0x1a) != -1)) goto LAB_10aa41bd0;
        }
      } while (uVar8 <= uVar13);
    }
LAB_10aa41bd0:
    puVar6 = param_2;
    if (puVar15 < param_2) {
      puVar6 = puVar9;
      if (param_2 != param_1) {
        do {
          uVar8 = (long)*(int *)((long)puVar6 + 0xc);
          if (*puVar6 != 0) {
            uVar8 = *puVar6;
          }
          if (uVar13 == uVar8) {
            if ((sVar14 != -1) || (*(short *)((long)puVar6 + 10) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar8 <= uVar13) goto LAB_10aa41c2c;
          bVar5 = puVar6 == param_1;
          puVar6 = puVar6 + -2;
          if (bVar5) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
LAB_10aa41c2c:
    if (puVar15 < puVar6) {
      uVar17 = puVar15[1];
      uVar8 = *puVar15;
      uVar20 = *puVar6;
      puVar15[1] = puVar6[1];
      *puVar15 = uVar20;
      puVar6[1] = uVar17;
      *puVar6 = uVar8;
      do {
        while( true ) {
          puVar7 = puVar15;
          puVar15 = puVar7 + 2;
          if (puVar15 == param_2) goto LAB_10aa423ac;
          uVar8 = (long)*(int *)((long)puVar7 + 0x1c);
          if (*puVar15 != 0) {
            uVar8 = *puVar15;
          }
          if (uVar13 != uVar8) break;
          if ((sVar14 == -1) && (*(short *)((long)puVar7 + 0x1a) != -1)) goto LAB_10aa41c8c;
        }
      } while (uVar8 <= uVar13);
LAB_10aa41c8c:
      puVar7 = puVar6;
      if (puVar6 != param_1) {
        do {
          puVar6 = puVar7 + -2;
          uVar8 = (long)*(int *)((long)puVar7 - 4);
          if (*puVar6 != 0) {
            uVar8 = *puVar6;
          }
          if (uVar13 == uVar8) {
            if ((sVar14 != -1) || (*(short *)((long)puVar7 - 6) == -1)) goto LAB_10aa41c2c;
          }
          else if (uVar8 <= uVar13) goto LAB_10aa41c2c;
          puVar7 = puVar6;
          if (puVar6 == param_1) break;
        } while( true );
      }
      goto LAB_10aa423ac;
    }
    if (puVar15 + -2 != param_1) {
      uVar8 = puVar15[-2];
      param_1[1] = puVar15[-1];
      *param_1 = uVar8;
    }
    param_4 = 0;
    puVar15[-2] = uVar11;
    *(short *)(puVar15 + -1) = (short)uVar19;
    *(short *)((long)puVar15 + -6) = sVar14;
    *(int *)((long)puVar15 + -4) = iVar12;
  } while( true );
LAB_10aa41e14:
  uVar8 = puVar9[2];
  iVar12 = *(int *)((long)puVar9 + 0x1c);
  uVar11 = (long)iVar12;
  if (uVar8 != 0) {
    uVar11 = uVar8;
  }
  uVar13 = (long)*(int *)((long)puVar9 + 0xc);
  if (*puVar9 != 0) {
    uVar13 = *puVar9;
  }
  if (uVar11 == uVar13) {
    if (*(short *)((long)puVar9 + 0x1a) == -1 && *(short *)((long)puVar9 + 10) != -1) {
      sVar14 = -1;
LAB_10aa41e68:
      uVar13 = puVar9[3];
      uVar19 = *puVar9;
      puVar15[1] = puVar9[1];
      *puVar15 = uVar19;
      puVar6 = param_1;
      lVar18 = lVar16;
      if (puVar9 != param_1) {
        do {
          puVar7 = (ulong *)((long)param_1 + lVar18);
          uVar20 = puVar7[-2];
          uVar19 = (long)*(int *)((long)puVar7 + -4);
          if (uVar20 != 0) {
            uVar19 = uVar20;
          }
          if (uVar11 == uVar19) {
            if ((sVar14 != -1) || (*(short *)((long)puVar7 + -6) == -1)) {
              puVar6 = (ulong *)((long)param_1 + lVar18);
              break;
            }
          }
          else {
            puVar6 = puVar9;
            if (uVar19 <= uVar11) break;
          }
          puVar9 = puVar9 + -2;
          puVar7[1] = puVar7[-1];
          *puVar7 = puVar7[-2];
          lVar18 = lVar18 + -0x10;
          puVar6 = param_1;
        } while (lVar18 != 0);
      }
      *puVar6 = uVar8;
      *(short *)(puVar6 + 1) = (short)uVar13;
      *(short *)((long)puVar6 + 10) = sVar14;
      *(int *)((long)puVar6 + 0xc) = iVar12;
    }
  }
  else if (uVar11 < uVar13) {
    sVar14 = *(short *)((long)puVar9 + 0x1a);
    goto LAB_10aa41e68;
  }
  puVar6 = puVar15 + 2;
  lVar16 = lVar16 + 0x10;
  puVar9 = puVar15;
  puVar15 = puVar6;
  if (puVar6 == param_2) {
    return;
  }
  goto LAB_10aa41e14;
LAB_10aa422b0:
  uVar8 = *puVar15;
  iVar12 = *(int *)((long)puVar9 + 0x1c);
  uVar11 = (long)iVar12;
  if (uVar8 != 0) {
    uVar11 = uVar8;
  }
  uVar13 = (long)*(int *)((long)puVar9 + 0xc);
  if (*puVar9 != 0) {
    uVar13 = *puVar9;
  }
  if (uVar11 == uVar13) {
    if (*(short *)((long)puVar9 + 0x1a) == -1 && *(short *)((long)puVar9 + 10) != -1) {
      sVar14 = -1;
LAB_10aa42304:
      uVar13 = puVar9[3];
      uVar19 = *(ulong *)((long)param_1 + lVar16);
      puVar15[1] = ((ulong *)((long)param_1 + lVar16))[1];
      *puVar15 = uVar19;
      do {
        puVar15 = (ulong *)((long)param_1 + lVar16);
        uVar20 = puVar15[-2];
        uVar19 = (long)*(int *)((long)puVar15 + -4);
        if (uVar20 != 0) {
          uVar19 = uVar20;
        }
        if (uVar11 == uVar19) {
          if ((sVar14 != -1) || (*(short *)((long)puVar15 + -6) == -1)) goto LAB_10aa42364;
        }
        else if (uVar19 <= uVar11) goto LAB_10aa42364;
        lVar16 = lVar16 + -0x10;
        puVar15[1] = puVar15[-1];
        *puVar15 = puVar15[-2];
        if (lVar16 == -0x10) {
LAB_10aa423ac:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa423b0);
          (*pcVar4)();
        }
      } while( true );
    }
  }
  else if (uVar11 < uVar13) {
    sVar14 = *(short *)((long)puVar9 + 0x1a);
    goto LAB_10aa42304;
  }
  goto LAB_10aa42378;
LAB_10aa42364:
  puVar15 = (ulong *)((long)param_1 + lVar16);
  *puVar15 = uVar8;
  *(short *)(puVar15 + 1) = (short)uVar13;
  *(short *)((long)puVar15 + 10) = sVar14;
  *(int *)((long)puVar15 + 0xc) = iVar12;
LAB_10aa42378:
  puVar9 = (ulong *)((long)param_1 + lVar18);
  puVar15 = (ulong *)((long)param_1 + lVar18 + 0x10);
  lVar16 = lVar18;
  lVar18 = lVar18 + 0x10;
  if (puVar15 == param_2) {
    return;
  }
  goto LAB_10aa422b0;
LAB_10aa41f20:
  do {
    if ((long)uVar8 <= (long)uVar13) {
      uVar20 = uVar8 << 1 | 1;
      puVar15 = param_1 + uVar20 * 2;
      uVar19 = uVar8 * 2 + 2;
      if ((long)uVar19 < (long)uVar11) {
        uVar23 = puVar15[2];
        uVar17 = (long)*(int *)((long)puVar15 + 0xc);
        if (*puVar15 != 0) {
          uVar17 = *puVar15;
        }
        uVar24 = (long)*(int *)((long)puVar15 + 0x1c);
        if (uVar23 != 0) {
          uVar24 = uVar23;
        }
        if (uVar17 == uVar24) {
          if (*(short *)((long)puVar15 + 10) == -1 && *(short *)((long)puVar15 + 0x1a) != -1) {
LAB_10aa41f90:
            puVar15 = puVar15 + 2;
            uVar20 = uVar19;
          }
        }
        else if (uVar17 < uVar24) goto LAB_10aa41f90;
      }
      puVar9 = param_1 + uVar8 * 2;
      uVar19 = (long)*(int *)((long)puVar15 + 0xc);
      if (*puVar15 != 0) {
        uVar19 = *puVar15;
      }
      uVar23 = *puVar9;
      iVar12 = *(int *)((long)puVar9 + 0xc);
      uVar17 = (long)iVar12;
      if (uVar23 != 0) {
        uVar17 = uVar23;
      }
      if (uVar19 == uVar17) {
        sVar14 = *(short *)((long)puVar9 + 10);
        if (*(short *)((long)puVar15 + 10) != -1 || sVar14 == -1) {
LAB_10aa41fe4:
          uVar19 = puVar9[1];
LAB_10aa41fe8:
          do {
            puVar6 = puVar15;
            uVar24 = *puVar6;
            puVar9[1] = puVar6[1];
            *puVar9 = uVar24;
            if ((long)uVar13 < (long)uVar20) break;
            lVar16 = uVar20 * 2;
            uVar20 = uVar20 << 1 | 1;
            puVar15 = param_1 + uVar20 * 2;
            uVar24 = lVar16 + 2;
            if ((long)uVar24 < (long)uVar11) {
              uVar10 = puVar15[2];
              uVar2 = (long)*(int *)((long)puVar15 + 0xc);
              if (*puVar15 != 0) {
                uVar2 = *puVar15;
              }
              uVar3 = (long)*(int *)((long)puVar15 + 0x1c);
              if (uVar10 != 0) {
                uVar3 = uVar10;
              }
              if (uVar2 == uVar3) {
                if (*(short *)((long)puVar15 + 10) == -1 && *(short *)((long)puVar15 + 0x1a) != -1)
                {
LAB_10aa42064:
                  puVar15 = puVar15 + 2;
                  uVar20 = uVar24;
                }
              }
              else if (uVar2 < uVar3) goto LAB_10aa42064;
            }
            uVar24 = (long)*(int *)((long)puVar15 + 0xc);
            if (*puVar15 != 0) {
              uVar24 = *puVar15;
            }
            puVar9 = puVar6;
            if (uVar24 != uVar17) {
              if (uVar24 < uVar17) break;
              goto LAB_10aa41fe8;
            }
          } while ((sVar14 == -1) || (*(short *)((long)puVar15 + 10) != -1));
          *puVar6 = uVar23;
          *(short *)(puVar6 + 1) = (short)uVar19;
          *(short *)((long)puVar6 + 10) = sVar14;
          *(int *)((long)puVar6 + 0xc) = iVar12;
        }
      }
      else if (uVar17 <= uVar19) {
        sVar14 = *(short *)((long)puVar9 + 10);
        goto LAB_10aa41fe4;
      }
    }
    bVar5 = uVar8 != 0;
    uVar8 = uVar8 - 1;
  } while (bVar5);
  do {
    uVar19 = param_1[1];
    uVar13 = *param_1;
    puVar15 = param_1;
    uVar8 = 0;
    do {
      puVar9 = puVar15 + uVar8 * 2 + 2;
      uVar17 = uVar8 << 1 | 1;
      uVar20 = uVar8 * 2 + 2;
      if ((long)uVar20 < (long)uVar11) {
        uVar24 = puVar15[uVar8 * 2 + 4];
        uVar23 = (long)*(int *)((long)puVar15 + uVar8 * 0x10 + 0x1c);
        if (puVar15[uVar8 * 2 + 2] != 0) {
          uVar23 = puVar15[uVar8 * 2 + 2];
        }
        uVar2 = (long)*(int *)((long)puVar15 + uVar8 * 0x10 + 0x2c);
        if (uVar24 != 0) {
          uVar2 = uVar24;
        }
        if (uVar23 == uVar2) {
          if (*(short *)((long)puVar15 + uVar8 * 0x10 + 0x1a) == -1 &&
              *(short *)((long)puVar15 + uVar8 * 0x10 + 0x2a) != -1) {
LAB_10aa42148:
            puVar9 = puVar15 + uVar8 * 2 + 4;
            uVar17 = uVar20;
          }
        }
        else if (uVar23 < uVar2) goto LAB_10aa42148;
      }
      uVar8 = *puVar9;
      puVar15[1] = puVar9[1];
      *puVar15 = uVar8;
      puVar15 = puVar9;
      uVar8 = uVar17;
    } while ((long)uVar17 <= (long)(uVar11 - 2 >> 1));
    puVar15 = param_2 + -2;
    if (puVar9 == puVar15) {
      puVar9[1] = uVar19;
      *puVar9 = uVar13;
    }
    else {
      uVar8 = *puVar15;
      puVar9[1] = param_2[-1];
      *puVar9 = uVar8;
      param_2[-1] = uVar19;
      *puVar15 = uVar13;
      lVar16 = (long)puVar9 + (0x10 - (long)param_1) >> 4;
      uVar8 = lVar16 - 2;
      if (1 < lVar16) {
        uVar19 = uVar8 >> 1;
        puVar6 = param_1 + uVar19 * 2;
        uVar13 = (long)*(int *)((long)puVar6 + 0xc);
        if (*puVar6 != 0) {
          uVar13 = *puVar6;
        }
        uVar17 = *puVar9;
        iVar12 = *(int *)((long)puVar9 + 0xc);
        uVar20 = (long)iVar12;
        if (uVar17 != 0) {
          uVar20 = uVar17;
        }
        if (uVar13 == uVar20) {
          sVar14 = *(short *)((long)puVar9 + 10);
          if (*(short *)((long)puVar6 + 10) == -1 && sVar14 != -1) {
LAB_10aa421ec:
            uVar13 = puVar9[1];
            uVar23 = *puVar6;
            puVar9[1] = puVar6[1];
            *puVar9 = uVar23;
            while (1 < uVar8) {
              uVar8 = uVar19 - 1;
              uVar19 = uVar8 >> 1;
              puVar9 = param_1 + uVar19 * 2;
              uVar23 = (long)*(int *)((long)puVar9 + 0xc);
              if (*puVar9 != 0) {
                uVar23 = *puVar9;
              }
              if (uVar23 == uVar20) {
                if ((sVar14 == -1) || (*(short *)((long)puVar9 + 10) != -1)) break;
              }
              else if (uVar20 <= uVar23) break;
              uVar23 = *puVar9;
              puVar6[1] = puVar9[1];
              *puVar6 = uVar23;
              puVar6 = puVar9;
            }
            *puVar6 = uVar17;
            *(short *)(puVar6 + 1) = (short)uVar13;
            *(short *)((long)puVar6 + 10) = sVar14;
            *(int *)((long)puVar6 + 0xc) = iVar12;
          }
        }
        else if (uVar13 < uVar20) {
          sVar14 = *(short *)((long)puVar9 + 10);
          goto LAB_10aa421ec;
        }
      }
    }
    bVar5 = (long)uVar11 < 3;
    uVar11 = uVar11 - 1;
    param_2 = puVar15;
    if (bVar5) {
      return;
    }
  } while( true );
LAB_10aa41920:
  puVar6 = (ulong *)((long)param_1 + lVar16 + 0x10);
  if (lVar16 != 0) {
    puVar7 = puVar9;
    if (param_2 != param_1) {
      do {
        uVar19 = (long)*(int *)((long)puVar7 + 0xc);
        if (*puVar7 != 0) {
          uVar19 = *puVar7;
        }
        if (uVar19 == uVar8) {
          if ((sVar14 != -1) && (*(short *)((long)puVar7 + 10) == -1)) goto LAB_10aa419dc;
        }
        else if (uVar19 < uVar8) goto LAB_10aa419dc;
        bVar5 = puVar7 == param_1;
        puVar7 = puVar7 + -2;
        if (bVar5) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
  puVar15 = puVar9;
  puVar7 = param_2;
  if (puVar6 < param_2) {
    do {
      uVar19 = (long)*(int *)((long)puVar15 + 0xc);
      if (*puVar15 != 0) {
        uVar19 = *puVar15;
      }
      puVar7 = puVar15;
      if (uVar19 == uVar8) {
        if ((puVar15 <= puVar6) || (sVar14 != -1 && *(short *)((long)puVar15 + 10) == -1)) break;
      }
      else if ((puVar15 <= puVar6) || (uVar19 < uVar8)) break;
      puVar15 = puVar15 + -2;
    } while( true );
  }
LAB_10aa419dc:
  puVar21 = puVar7;
  puVar15 = puVar6;
  puVar25 = puVar6;
  if (puVar6 < puVar7) {
LAB_10aa419ec:
    uVar17 = puVar25[1];
    uVar19 = *puVar25;
    uVar20 = *puVar21;
    puVar25[1] = puVar21[1];
    *puVar25 = uVar20;
    puVar21[1] = uVar17;
    *puVar21 = uVar19;
    do {
      while( true ) {
        puVar15 = puVar25 + 2;
        if (puVar15 == param_2) goto LAB_10aa423ac;
        uVar19 = (long)*(int *)((long)puVar25 + 0x1c);
        if (*puVar15 != 0) {
          uVar19 = *puVar15;
        }
        if (uVar19 != uVar8) break;
        if ((sVar14 == -1) ||
           (psVar1 = (short *)((long)puVar25 + 0x1a), puVar25 = puVar15, *psVar1 != -1))
        goto LAB_10aa41a44;
      }
      puVar25 = puVar15;
    } while (uVar19 < uVar8);
LAB_10aa41a44:
    if (puVar21 != param_1) {
      do {
        puVar22 = puVar21 + -2;
        uVar19 = (long)*(int *)((long)puVar21 - 4);
        if (*puVar22 != 0) {
          uVar19 = *puVar22;
        }
        if (uVar19 == uVar8) {
          if ((sVar14 != -1) && (*(short *)((long)puVar21 - 6) == -1)) goto LAB_10aa41a94;
        }
        else if (uVar19 < uVar8) goto LAB_10aa41a94;
        puVar21 = puVar22;
        if (puVar22 == param_1) break;
      } while( true );
    }
    goto LAB_10aa423ac;
  }
LAB_10aa41a9c:
  puVar21 = puVar15 + -2;
  if (puVar21 != param_1) {
    uVar8 = *puVar21;
    param_1[1] = puVar15[-1];
    *param_1 = uVar8;
  }
  puVar15[-2] = uVar11;
  *(short *)(puVar15 + -1) = (short)uVar13;
  *(short *)((long)puVar15 - 6) = sVar14;
  *(int *)((long)puVar15 - 4) = iVar12;
  if (puVar7 <= puVar6) {
    puVar6 = param_1;
    FUN_10aa42860(param_1,puVar21);
    puVar7 = puVar15;
    FUN_10aa42860(puVar15,param_2);
    if ((int)puVar7 != 0) goto LAB_10aa41d08;
    if (((ulong)puVar6 & 1) != 0) goto LAB_10aa4178c;
  }
  FUN_10aa41744(param_1,puVar21,param_3,param_4 & 1);
  param_4 = 0;
  goto LAB_10aa4178c;
LAB_10aa41a94:
  puVar21 = puVar22;
  puVar25 = puVar15;
  if (puVar22 <= puVar15) goto LAB_10aa41a9c;
  goto LAB_10aa419ec;
LAB_10aa41d08:
  param_2 = puVar21;
  if (((ulong)puVar6 & 1) != 0) {
    return;
  }
  goto LAB_10aa41778;
}



/* Entry: 10aa423b0; end: 10aa4255f;  */

void FUN_10aa423b0(ulong *param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = (long)*(int *)((long)param_2 + 0xc);
  if (*param_2 != 0) {
    uVar1 = *param_2;
  }
  uVar2 = (long)*(int *)((long)param_1 + 0xc);
  if (*param_1 != 0) {
    uVar2 = *param_1;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_2 + 10) != -1 || *(short *)((long)param_1 + 10) == -1) {
LAB_10aa4243c:
      uVar2 = (long)*(int *)((long)param_3 + 0xc);
      if (*param_3 != 0) {
        uVar2 = *param_3;
      }
      if (uVar2 == uVar1) {
        if (*(short *)((long)param_3 + 10) != -1) {
          return;
        }
        if (*(short *)((long)param_2 + 10) == -1) {
          return;
        }
      }
      else if (uVar1 <= uVar2) {
        return;
      }
      uVar2 = param_2[1];
      uVar1 = *param_2;
      uVar3 = *param_3;
      param_2[1] = param_3[1];
      *param_2 = uVar3;
      param_3[1] = uVar2;
      *param_3 = uVar1;
      uVar1 = (long)*(int *)((long)param_2 + 0xc);
      if (*param_2 != 0) {
        uVar1 = *param_2;
      }
      uVar2 = (long)*(int *)((long)param_1 + 0xc);
      if (*param_1 != 0) {
        uVar2 = *param_1;
      }
      if (uVar1 == uVar2) {
        if (*(short *)((long)param_2 + 10) != -1) {
          return;
        }
        if (*(short *)((long)param_1 + 10) == -1) {
          return;
        }
      }
      else if (uVar2 <= uVar1) {
        return;
      }
      uVar2 = param_1[1];
      uVar1 = *param_1;
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_2[1] = uVar2;
      *param_2 = uVar1;
      return;
    }
  }
  else if (uVar2 <= uVar1) goto LAB_10aa4243c;
  uVar2 = (long)*(int *)((long)param_3 + 0xc);
  if (*param_3 != 0) {
    uVar2 = *param_3;
  }
  if (uVar2 == uVar1) {
    if ((*(short *)((long)param_3 + 10) == -1) && (*(short *)((long)param_2 + 10) != -1)) {
LAB_10aa42428:
      uVar2 = param_1[1];
      uVar1 = *param_1;
      uVar3 = *param_3;
      param_1[1] = param_3[1];
      *param_1 = uVar3;
      goto LAB_10aa4253c;
    }
  }
  else if (uVar2 < uVar1) goto LAB_10aa42428;
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  uVar1 = (long)*(int *)((long)param_3 + 0xc);
  if (*param_3 != 0) {
    uVar1 = *param_3;
  }
  uVar2 = (long)*(int *)((long)param_2 + 0xc);
  if (*param_2 != 0) {
    uVar2 = *param_2;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_3 + 10) != -1) {
      return;
    }
    if (*(short *)((long)param_2 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar3;
LAB_10aa4253c:
  param_3[1] = uVar2;
  *param_3 = uVar1;
  return;
}



/* Entry: 10aa42560; end: 10aa426ab;  */

void FUN_10aa42560(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_10aa423b0();
  uVar1 = (long)*(int *)((long)param_4 + 0xc);
  if (*param_4 != 0) {
    uVar1 = *param_4;
  }
  uVar2 = (long)*(int *)((long)param_3 + 0xc);
  if (*param_3 != 0) {
    uVar2 = *param_3;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_4 + 10) != -1 || *(short *)((long)param_3 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = *param_4;
  param_3[1] = param_4[1];
  *param_3 = uVar3;
  param_4[1] = uVar2;
  *param_4 = uVar1;
  uVar1 = (long)*(int *)((long)param_3 + 0xc);
  if (*param_3 != 0) {
    uVar1 = *param_3;
  }
  uVar2 = (long)*(int *)((long)param_2 + 0xc);
  if (*param_2 != 0) {
    uVar2 = *param_2;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_3 + 10) != -1) {
      return;
    }
    if (*(short *)((long)param_2 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar3;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  uVar1 = (long)*(int *)((long)param_2 + 0xc);
  if (*param_2 != 0) {
    uVar1 = *param_2;
  }
  uVar2 = (long)*(int *)((long)param_1 + 0xc);
  if (*param_1 != 0) {
    uVar2 = *param_1;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_2 + 10) != -1) {
      return;
    }
    if (*(short *)((long)param_1 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}



/* Entry: 10aa426ac; end: 10aa4285f;  */

void FUN_10aa426ac(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4,ulong *param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  FUN_10aa42560();
  uVar1 = (long)*(int *)((long)param_5 + 0xc);
  if (*param_5 != 0) {
    uVar1 = *param_5;
  }
  uVar2 = (long)*(int *)((long)param_4 + 0xc);
  if (*param_4 != 0) {
    uVar2 = *param_4;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_5 + 10) != -1 || *(short *)((long)param_4 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_4[1];
  uVar1 = *param_4;
  uVar3 = *param_5;
  param_4[1] = param_5[1];
  *param_4 = uVar3;
  param_5[1] = uVar2;
  *param_5 = uVar1;
  uVar1 = (long)*(int *)((long)param_4 + 0xc);
  if (*param_4 != 0) {
    uVar1 = *param_4;
  }
  uVar2 = (long)*(int *)((long)param_3 + 0xc);
  if (*param_3 != 0) {
    uVar2 = *param_3;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_4 + 10) != -1) {
      return;
    }
    if (*(short *)((long)param_3 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_3[1];
  uVar1 = *param_3;
  uVar3 = *param_4;
  param_3[1] = param_4[1];
  *param_3 = uVar3;
  param_4[1] = uVar2;
  *param_4 = uVar1;
  uVar1 = (long)*(int *)((long)param_3 + 0xc);
  if (*param_3 != 0) {
    uVar1 = *param_3;
  }
  uVar2 = (long)*(int *)((long)param_2 + 0xc);
  if (*param_2 != 0) {
    uVar2 = *param_2;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_3 + 10) != -1) {
      return;
    }
    if (*(short *)((long)param_2 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar3;
  param_3[1] = uVar2;
  *param_3 = uVar1;
  uVar1 = (long)*(int *)((long)param_2 + 0xc);
  if (*param_2 != 0) {
    uVar1 = *param_2;
  }
  uVar2 = (long)*(int *)((long)param_1 + 0xc);
  if (*param_1 != 0) {
    uVar2 = *param_1;
  }
  if (uVar1 == uVar2) {
    if (*(short *)((long)param_2 + 10) != -1) {
      return;
    }
    if (*(short *)((long)param_1 + 10) == -1) {
      return;
    }
  }
  else if (uVar2 <= uVar1) {
    return;
  }
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}



/* Entry: 10aa42860; end: 10aa42aa3;  */

bool FUN_10aa42860(ulong *param_1,ulong *param_2)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  short sVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  
  uVar4 = (long)param_2 - (long)param_1 >> 4;
  if ((long)uVar4 < 3) {
    if (uVar4 < 2) {
      return true;
    }
    if (uVar4 == 2) {
      puVar2 = param_2 + -2;
      uVar4 = (long)*(int *)((long)param_2 + -4);
      if (*puVar2 != 0) {
        uVar4 = *puVar2;
      }
      uVar8 = (long)*(int *)((long)param_1 + 0xc);
      if (*param_1 != 0) {
        uVar8 = *param_1;
      }
      if (uVar4 == uVar8) {
        if (*(short *)((long)param_2 + -6) != -1) {
          return true;
        }
        if (*(short *)((long)param_1 + 10) == -1) {
          return true;
        }
      }
      else if (uVar8 <= uVar4) {
        return true;
      }
      uVar8 = param_1[1];
      uVar4 = *param_1;
      uVar14 = *puVar2;
      param_1[1] = param_2[-1];
      *param_1 = uVar14;
      param_2[-1] = uVar8;
      *puVar2 = uVar4;
      return true;
    }
  }
  else {
    if (uVar4 == 3) {
      FUN_10aa423b0(param_1,param_1 + 2,param_2 + -2);
      return true;
    }
    if (uVar4 == 4) {
      FUN_10aa42560(param_1,param_1 + 2,param_1 + 4,param_2 + -2);
      return true;
    }
    if (uVar4 == 5) {
      FUN_10aa426ac(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
      return true;
    }
  }
  FUN_10aa423b0(param_1,param_1 + 2,param_1 + 4);
  if (param_1 + 6 != param_2) {
    lVar6 = 0;
    iVar7 = 0;
    puVar2 = param_1 + 6;
    puVar11 = param_1 + 4;
    do {
      puVar5 = puVar2;
      uVar8 = *puVar5;
      iVar1 = *(int *)((long)puVar5 + 0xc);
      uVar4 = (long)iVar1;
      if (uVar8 != 0) {
        uVar4 = uVar8;
      }
      uVar14 = (long)*(int *)((long)puVar11 + 0xc);
      if (*puVar11 != 0) {
        uVar14 = *puVar11;
      }
      if (uVar4 == uVar14) {
        if (*(short *)((long)puVar5 + 10) == -1 && *(short *)((long)puVar11 + 10) != -1) {
          sVar9 = -1;
LAB_10aa429a8:
          uVar14 = puVar5[1];
          uVar13 = *puVar11;
          puVar5[1] = puVar11[1];
          *puVar5 = uVar13;
          lVar10 = lVar6;
          do {
            puVar2 = (ulong *)((long)param_1 + lVar10 + 0x10);
            uVar3 = *puVar2;
            uVar13 = (long)*(int *)((long)param_1 + lVar10 + 0x1c);
            if (uVar3 != 0) {
              uVar13 = uVar3;
            }
            if (uVar4 == uVar13) {
              puVar12 = puVar11;
              if ((sVar9 != -1) || (*(short *)((long)param_1 + lVar10 + 0x1a) == -1)) break;
            }
            else if (uVar13 <= uVar4) {
              puVar12 = (ulong *)((long)param_1 + lVar10 + 0x20);
              break;
            }
            puVar11 = puVar11 + -2;
            *(undefined8 *)((long)param_1 + lVar10 + 0x28) =
                 *(undefined8 *)((long)param_1 + lVar10 + 0x18);
            *(ulong *)((long)param_1 + lVar10 + 0x20) = *puVar2;
            lVar10 = lVar10 + -0x10;
            puVar12 = param_1;
          } while (lVar10 != -0x20);
          *puVar12 = uVar8;
          *(short *)(puVar12 + 1) = (short)uVar14;
          *(short *)((long)puVar12 + 10) = sVar9;
          *(int *)((long)puVar12 + 0xc) = iVar1;
          iVar7 = iVar7 + 1;
          if (iVar7 == 8) {
            return puVar5 + 2 == param_2;
          }
        }
      }
      else if (uVar4 < uVar14) {
        sVar9 = *(short *)((long)puVar5 + 10);
        goto LAB_10aa429a8;
      }
      lVar6 = lVar6 + 0x10;
      puVar2 = puVar5 + 2;
      puVar11 = puVar5;
    } while (puVar5 + 2 != param_2);
  }
  return true;
}



/* Entry: 10aa42aa4; end: 10aa42b3b;  */

long * FUN_10aa42aa4(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    if (param_2 >> 0x3d != 0) {
      FUN_10aa42b3c();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10aa42b20);
      (*pcVar1)();
    }
    lVar2 = param_2 * 8;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_2 * 8;
    _memset_pattern16();
    param_1[1] = lVar2 + param_2 * 8;
  }
  return param_1;
}



/* Entry: 10aa42b3c; end: 10aa42b4f;  */

void FUN_10aa42b3c(undefined8 param_1,ulong *param_2,long param_3,ulong param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *puVar12;
  ulong *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  undefined2 uVar17;
  uint uVar18;
  long lVar19;
  ulong *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong *puVar26;
  
  puVar5 = (ulong *)&DAT_10f62a4d8;
  FUN_109ffde64();
LAB_10aa42b7c:
  puVar12 = param_2 + -1;
  puVar11 = param_2 + -2;
  puVar26 = param_2 + -3;
  puVar13 = puVar5;
LAB_10aa42b8c:
  do {
    puVar5 = puVar13;
    uVar15 = (long)param_2 - (long)puVar5 >> 3;
    if (uVar15 - 2 == 0 || (long)uVar15 < 2) {
      if (uVar15 < 2) {
        return;
      }
      if (uVar15 == 2) {
        puVar13 = param_2 + -1;
        if ((int)(uint)*puVar5 <= (int)(uint)*puVar13) {
          return;
        }
        uVar10 = *puVar5;
        uVar15 = *puVar13;
        *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar5 = (uint)uVar15;
        *(uint *)puVar13 = (uint)uVar10;
        uVar17 = (undefined2)(uVar10 >> 0x20);
LAB_10aa437a0:
        *(undefined2 *)((long)param_2 + -4) = uVar17;
        return;
      }
    }
    else {
      if (uVar15 == 3) {
        puVar13 = puVar5 + 1;
        uVar8 = (uint)*puVar13;
        puVar12 = param_2 + -1;
        if ((int)uVar8 < (int)(uint)*puVar5) {
          uVar18 = (uint)*puVar5;
          uVar17 = (undefined2)(*puVar5 >> 0x20);
          if ((int)(uint)*puVar12 < (int)uVar8) {
            uVar15 = *puVar12;
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)param_2 + -4);
            *(uint *)puVar5 = (uint)uVar15;
            *(undefined2 *)((long)param_2 + -4) = uVar17;
            *(uint *)puVar12 = uVar18;
            return;
          }
          *(uint *)puVar5 = (uint)*puVar13;
          *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
          *(uint *)(puVar5 + 1) = uVar18;
          *(undefined2 *)((long)puVar5 + 0xc) = uVar17;
          if ((int)uVar18 <= (int)(uint)*puVar12) {
            return;
          }
          uVar10 = *puVar13;
          uVar15 = *puVar12;
          *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)puVar13 = (uint)uVar15;
          *(uint *)puVar12 = (uint)uVar10;
          uVar17 = (undefined2)(uVar10 >> 0x20);
          goto LAB_10aa437a0;
        }
        if ((int)uVar8 <= (int)(uint)*puVar12) {
          return;
        }
        uVar10 = puVar5[1];
        uVar15 = *puVar12;
        *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar13 = (uint)uVar15;
        *(uint *)puVar12 = (uint)uVar10;
        *(short *)((long)param_2 + -4) = (short)(uVar10 >> 0x20);
LAB_10aa43848:
        if ((int)(uint)*puVar5 <= (int)(uint)puVar5[1]) {
          return;
        }
        uVar15 = *puVar5;
        *(uint *)puVar5 = (uint)puVar5[1];
        *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
        *(uint *)(puVar5 + 1) = (uint)uVar15;
        *(short *)((long)puVar5 + 0xc) = (short)(uVar15 >> 0x20);
        return;
      }
      if (uVar15 == 4) {
        puVar13 = puVar5 + 1;
        uVar8 = (uint)*puVar13;
        puVar11 = puVar5 + 2;
        uVar18 = (uint)*puVar11;
        uVar15 = (ulong)uVar18;
        if ((int)uVar8 < (int)(uint)*puVar5) {
          uVar10 = *puVar5;
          uVar14 = (uint)uVar10;
          uVar17 = (undefined2)(uVar10 >> 0x20);
          if ((int)uVar18 < (int)uVar8) {
            *(uint *)puVar5 = (uint)*puVar11;
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0x14);
            *(uint *)(puVar5 + 2) = uVar14;
            *(undefined2 *)((long)puVar5 + 0x14) = uVar17;
            uVar15 = uVar10;
          }
          else {
            *(uint *)puVar5 = (uint)*puVar13;
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
            *(uint *)(puVar5 + 1) = uVar14;
            *(undefined2 *)((long)puVar5 + 0xc) = uVar17;
            if ((int)uVar18 < (int)uVar14) {
              uVar15 = *puVar13;
              *(uint *)puVar13 = (uint)*puVar11;
              *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar5 + 0x14);
              *(uint *)puVar11 = (uint)uVar15;
              *(short *)((long)puVar5 + 0x14) = (short)(uVar15 >> 0x20);
            }
          }
        }
        else if ((int)uVar18 < (int)uVar8) {
          uVar15 = *puVar13;
          uVar10 = *puVar11;
          *(uint *)puVar13 = (uint)uVar10;
          *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar5 + 0x14);
          *(uint *)puVar11 = (uint)uVar15;
          *(short *)((long)puVar5 + 0x14) = (short)(uVar15 >> 0x20);
          if ((int)(uint)uVar10 < (int)(uint)*puVar5) {
            uVar10 = *puVar5;
            *(uint *)puVar5 = (uint)*puVar13;
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
            *(uint *)(puVar5 + 1) = (uint)uVar10;
            *(short *)((long)puVar5 + 0xc) = (short)(uVar10 >> 0x20);
          }
        }
        if ((int)uVar15 <= (int)(uint)*puVar12) {
          return;
        }
        uVar10 = *puVar11;
        uVar15 = *puVar12;
        *(undefined2 *)((long)puVar5 + 0x14) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar11 = (uint)uVar15;
        *(uint *)puVar12 = (uint)uVar10;
        *(short *)((long)param_2 + -4) = (short)(uVar10 >> 0x20);
        if ((int)(uint)*puVar13 <= (int)(uint)*puVar11) {
          return;
        }
        uVar15 = puVar5[1];
        *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar5 + 0x14);
        *(uint *)puVar13 = (uint)*puVar11;
        *(uint *)(puVar5 + 2) = (uint)uVar15;
        *(short *)((long)puVar5 + 0x14) = (short)(uVar15 >> 0x20);
        goto LAB_10aa43848;
      }
      if (uVar15 == 5) {
        puVar13 = puVar5 + 1;
        puVar11 = puVar5 + 2;
        puVar26 = puVar5 + 3;
        uVar8 = (uint)*puVar13;
        uVar18 = (uint)*puVar11;
        uVar15 = (ulong)uVar18;
        if ((int)uVar8 < (int)(uint)*puVar5) {
          uVar15 = *puVar5;
          uVar14 = (uint)uVar15;
          uVar17 = (undefined2)(uVar15 >> 0x20);
          if ((int)uVar18 < (int)uVar8) {
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0x14);
            *(uint *)puVar5 = (uint)*puVar11;
            *(undefined2 *)((long)puVar5 + 0x14) = uVar17;
            *(uint *)puVar11 = uVar14;
          }
          else {
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
            *(uint *)puVar5 = (uint)*puVar13;
            *(undefined2 *)((long)puVar5 + 0xc) = uVar17;
            *(uint *)puVar13 = uVar14;
            uVar15 = (ulong)(uint)*puVar11;
            if ((int)(uint)*puVar11 < (int)uVar14) {
              uVar15 = *puVar13;
              *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar5 + 0x14);
              *(uint *)puVar13 = (uint)*puVar11;
              *(uint *)puVar11 = (uint)uVar15;
              *(short *)((long)puVar5 + 0x14) = (short)(uVar15 >> 0x20);
            }
          }
        }
        else if ((int)uVar18 < (int)uVar8) {
          uVar15 = *puVar13;
          *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar5 + 0x14);
          *(uint *)puVar13 = (uint)*puVar11;
          *(uint *)puVar11 = (uint)uVar15;
          *(short *)((long)puVar5 + 0x14) = (short)(uVar15 >> 0x20);
          if ((int)(uint)*puVar13 < (int)(uint)*puVar5) {
            uVar15 = *puVar5;
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
            *(uint *)puVar5 = (uint)*puVar13;
            *(uint *)puVar13 = (uint)uVar15;
            *(short *)((long)puVar5 + 0xc) = (short)(uVar15 >> 0x20);
            uVar15 = (ulong)(uint)*puVar11;
          }
        }
        if ((int)(uint)*puVar26 < (int)uVar15) {
          uVar15 = *puVar11;
          *(undefined2 *)((long)puVar5 + 0x14) = *(undefined2 *)((long)puVar5 + 0x1c);
          *(uint *)puVar11 = (uint)*puVar26;
          *(uint *)puVar26 = (uint)uVar15;
          *(short *)((long)puVar5 + 0x1c) = (short)(uVar15 >> 0x20);
          if ((int)(uint)*puVar11 < (int)(uint)*puVar13) {
            uVar15 = *puVar13;
            *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar5 + 0x14);
            *(uint *)puVar13 = (uint)*puVar11;
            *(uint *)puVar11 = (uint)uVar15;
            *(short *)((long)puVar5 + 0x14) = (short)(uVar15 >> 0x20);
            if ((int)(uint)*puVar13 < (int)(uint)*puVar5) {
              uVar15 = *puVar5;
              *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
              *(uint *)puVar5 = (uint)*puVar13;
              *(uint *)puVar13 = (uint)uVar15;
              *(short *)((long)puVar5 + 0xc) = (short)(uVar15 >> 0x20);
            }
          }
        }
        if ((int)(uint)*puVar12 < (int)(uint)*puVar26) {
          uVar10 = *puVar26;
          uVar15 = *puVar12;
          *(undefined2 *)((long)puVar5 + 0x1c) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)puVar26 = (uint)uVar15;
          *(uint *)puVar12 = (uint)uVar10;
          *(short *)((long)param_2 + -4) = (short)(uVar10 >> 0x20);
          if ((int)(uint)*puVar26 < (int)(uint)*puVar11) {
            uVar15 = *puVar11;
            *(undefined2 *)((long)puVar5 + 0x14) = *(undefined2 *)((long)puVar5 + 0x1c);
            *(uint *)puVar11 = (uint)*puVar26;
            *(uint *)puVar26 = (uint)uVar15;
            *(short *)((long)puVar5 + 0x1c) = (short)(uVar15 >> 0x20);
            if ((int)(uint)*puVar11 < (int)(uint)*puVar13) {
              uVar15 = *puVar13;
              *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar5 + 0x14);
              *(uint *)puVar13 = (uint)*puVar11;
              *(uint *)puVar11 = (uint)uVar15;
              *(short *)((long)puVar5 + 0x14) = (short)(uVar15 >> 0x20);
              if ((int)(uint)*puVar13 < (int)(uint)*puVar5) {
                uVar15 = *puVar5;
                *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar5 + 0xc);
                *(uint *)puVar5 = (uint)*puVar13;
                *(uint *)puVar13 = (uint)uVar15;
                *(short *)((long)puVar5 + 0xc) = (short)(uVar15 >> 0x20);
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar15 < 0x18) {
      puVar13 = puVar5 + 1;
      if ((param_4 & 1) == 0) {
        if (puVar5 == param_2 || puVar13 == param_2) {
          return;
        }
        lVar19 = 0;
        lVar21 = 8;
        do {
          if ((int)(uint)*puVar13 < *(int *)((long)puVar5 + lVar19)) {
            uVar15 = *puVar13;
            do {
              lVar16 = lVar19;
              puVar1 = (undefined4 *)((long)puVar5 + lVar16);
              puVar1[2] = *puVar1;
              *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar1 + 1);
              if (lVar16 == -8) {
LAB_10aa43758:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa4375c);
                (*pcVar4)();
              }
              iVar9 = (int)uVar15;
              lVar19 = lVar16 + -8;
            } while (iVar9 < (int)puVar1[-2]);
            *(int *)((long)puVar5 + lVar16) = iVar9;
            *(short *)((long)puVar5 + lVar16 + 4) = (short)(uVar15 >> 0x20);
          }
          puVar13 = (ulong *)((long)puVar5 + lVar21 + 8);
          lVar19 = lVar21;
          lVar21 = lVar21 + 8;
          if (puVar13 == param_2) {
            return;
          }
        } while( true );
      }
      if (puVar5 == param_2 || puVar13 == param_2) {
        return;
      }
      lVar19 = 0;
      puVar12 = puVar5;
      break;
    }
    if (param_3 == 0) {
      if (puVar5 == param_2) {
        return;
      }
      uVar22 = uVar15 - 2 >> 1;
      uVar10 = uVar22;
      goto LAB_10aa43460;
    }
    puVar13 = puVar5 + (uVar15 >> 1);
    uVar8 = (uint)*puVar12;
    if (uVar15 < 0x81) {
      uVar18 = (uint)*puVar5;
      if ((int)uVar18 < (int)(uint)*puVar13) {
        uVar14 = (uint)*puVar13;
        uVar17 = (undefined2)(*puVar13 >> 0x20);
        if ((int)uVar8 < (int)uVar18) {
          uVar15 = *puVar12;
          *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)puVar13 = (uint)uVar15;
          *(undefined2 *)((long)param_2 + -4) = uVar17;
          *(uint *)puVar12 = uVar14;
        }
        else {
          uVar15 = *puVar5;
          *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar5 + 4);
          *(uint *)puVar13 = (uint)uVar15;
          *(undefined2 *)((long)puVar5 + 4) = uVar17;
          *(uint *)puVar5 = uVar14;
          if ((int)(uint)*puVar12 < (int)uVar14) {
            uVar10 = *puVar5;
            uVar15 = *puVar12;
            *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)param_2 + -4);
            *(uint *)puVar5 = (uint)uVar15;
            *(uint *)puVar12 = (uint)uVar10;
            *(short *)((long)param_2 + -4) = (short)(uVar10 >> 0x20);
          }
        }
      }
      else if ((int)uVar8 < (int)uVar18) {
        uVar10 = *puVar5;
        uVar15 = *puVar12;
        *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar5 = (uint)uVar15;
        *(uint *)puVar12 = (uint)uVar10;
        *(short *)((long)param_2 + -4) = (short)(uVar10 >> 0x20);
        if ((int)(uint)*puVar5 < (int)(uint)*puVar13) {
          uVar10 = *puVar13;
          uVar15 = *puVar5;
          *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar5 + 4);
          *(uint *)puVar13 = (uint)uVar15;
          *(uint *)puVar5 = (uint)uVar10;
          *(short *)((long)puVar5 + 4) = (short)(uVar10 >> 0x20);
        }
      }
    }
    else {
      uVar18 = (uint)*puVar13;
      if ((int)uVar18 < (int)(uint)*puVar5) {
        uVar14 = (uint)*puVar5;
        uVar17 = (undefined2)(*puVar5 >> 0x20);
        if ((int)uVar8 < (int)uVar18) {
          uVar15 = *puVar12;
          *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)puVar5 = (uint)uVar15;
          *(undefined2 *)((long)param_2 + -4) = uVar17;
          *(uint *)puVar12 = uVar14;
        }
        else {
          uVar15 = *puVar13;
          *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar13 + 4);
          *(uint *)puVar5 = (uint)uVar15;
          *(undefined2 *)((long)puVar13 + 4) = uVar17;
          *(uint *)puVar13 = uVar14;
          if ((int)(uint)*puVar12 < (int)uVar14) {
            uVar10 = *puVar13;
            uVar15 = *puVar12;
            *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)param_2 + -4);
            *(uint *)puVar13 = (uint)uVar15;
            *(uint *)puVar12 = (uint)uVar10;
            *(short *)((long)param_2 + -4) = (short)(uVar10 >> 0x20);
          }
        }
      }
      else if ((int)uVar8 < (int)uVar18) {
        uVar10 = *puVar13;
        uVar15 = *puVar12;
        *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar13 = (uint)uVar15;
        *(uint *)puVar12 = (uint)uVar10;
        *(short *)((long)param_2 + -4) = (short)(uVar10 >> 0x20);
        if ((int)(uint)*puVar13 < (int)(uint)*puVar5) {
          uVar10 = *puVar5;
          uVar15 = *puVar13;
          *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar13 + 4);
          *(uint *)puVar5 = (uint)uVar15;
          *(uint *)puVar13 = (uint)uVar10;
          *(short *)((long)puVar13 + 4) = (short)(uVar10 >> 0x20);
        }
      }
      puVar7 = puVar5 + 1;
      puVar6 = puVar13 + -1;
      uVar8 = (uint)*puVar6;
      if ((int)uVar8 < (int)(uint)*puVar7) {
        uVar18 = (uint)*puVar7;
        uVar17 = (undefined2)(*puVar7 >> 0x20);
        if ((int)(uint)*puVar11 < (int)uVar8) {
          uVar15 = *puVar11;
          *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)param_2 + -0xc);
          *(uint *)puVar7 = (uint)uVar15;
          *(undefined2 *)((long)param_2 + -0xc) = uVar17;
          *(uint *)puVar11 = uVar18;
        }
        else {
          uVar15 = *puVar6;
          *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar13 + -4);
          *(uint *)puVar7 = (uint)uVar15;
          *(undefined2 *)((long)puVar13 + -4) = uVar17;
          *(uint *)puVar6 = uVar18;
          if ((int)(uint)*puVar11 < (int)uVar18) {
            uVar10 = *puVar6;
            uVar15 = *puVar11;
            *(undefined2 *)((long)puVar13 + -4) = *(undefined2 *)((long)param_2 + -0xc);
            *(uint *)puVar6 = (uint)uVar15;
            *(uint *)puVar11 = (uint)uVar10;
            *(short *)((long)param_2 + -0xc) = (short)(uVar10 >> 0x20);
          }
        }
      }
      else if ((int)(uint)*puVar11 < (int)uVar8) {
        uVar10 = *puVar6;
        uVar15 = *puVar11;
        *(undefined2 *)((long)puVar13 + -4) = *(undefined2 *)((long)param_2 + -0xc);
        *(uint *)puVar6 = (uint)uVar15;
        *(uint *)puVar11 = (uint)uVar10;
        *(short *)((long)param_2 + -0xc) = (short)(uVar10 >> 0x20);
        if ((int)(uint)*puVar6 < (int)(uint)*puVar7) {
          uVar10 = *puVar7;
          uVar15 = *puVar6;
          *(undefined2 *)((long)puVar5 + 0xc) = *(undefined2 *)((long)puVar13 + -4);
          *(uint *)puVar7 = (uint)uVar15;
          *(uint *)puVar6 = (uint)uVar10;
          *(short *)((long)puVar13 + -4) = (short)(uVar10 >> 0x20);
        }
      }
      puVar20 = puVar5 + 2;
      puVar7 = puVar13 + 1;
      uVar8 = (uint)*puVar7;
      if ((int)uVar8 < (int)(uint)*puVar20) {
        uVar18 = (uint)*puVar20;
        uVar17 = (undefined2)(*puVar20 >> 0x20);
        if ((int)(uint)*puVar26 < (int)uVar8) {
          uVar15 = *puVar26;
          *(undefined2 *)((long)puVar5 + 0x14) = *(undefined2 *)((long)param_2 + -0x14);
          *(uint *)puVar20 = (uint)uVar15;
          *(undefined2 *)((long)param_2 + -0x14) = uVar17;
          *(uint *)puVar26 = uVar18;
        }
        else {
          uVar15 = *puVar7;
          *(undefined2 *)((long)puVar5 + 0x14) = *(undefined2 *)((long)puVar13 + 0xc);
          *(uint *)puVar20 = (uint)uVar15;
          *(undefined2 *)((long)puVar13 + 0xc) = uVar17;
          *(uint *)puVar7 = uVar18;
          if ((int)(uint)*puVar26 < (int)uVar18) {
            uVar10 = *puVar7;
            uVar15 = *puVar26;
            *(undefined2 *)((long)puVar13 + 0xc) = *(undefined2 *)((long)param_2 + -0x14);
            *(uint *)puVar7 = (uint)uVar15;
            *(uint *)puVar26 = (uint)uVar10;
            *(short *)((long)param_2 + -0x14) = (short)(uVar10 >> 0x20);
          }
        }
      }
      else if ((int)(uint)*puVar26 < (int)uVar8) {
        uVar10 = *puVar7;
        uVar15 = *puVar26;
        *(undefined2 *)((long)puVar13 + 0xc) = *(undefined2 *)((long)param_2 + -0x14);
        *(uint *)puVar7 = (uint)uVar15;
        *(uint *)puVar26 = (uint)uVar10;
        *(short *)((long)param_2 + -0x14) = (short)(uVar10 >> 0x20);
        if ((int)(uint)*puVar7 < (int)(uint)*puVar20) {
          uVar10 = *puVar20;
          uVar15 = *puVar7;
          *(undefined2 *)((long)puVar5 + 0x14) = *(undefined2 *)((long)puVar13 + 0xc);
          *(uint *)puVar20 = (uint)uVar15;
          *(uint *)puVar7 = (uint)uVar10;
          *(short *)((long)puVar13 + 0xc) = (short)(uVar10 >> 0x20);
        }
      }
      uVar8 = (uint)*puVar13;
      uVar18 = (uint)puVar13[1];
      if ((int)uVar8 < (int)(uint)puVar13[-1]) {
        uVar14 = (uint)*puVar6;
        uVar17 = (undefined2)(*puVar6 >> 0x20);
        if ((int)uVar18 < (int)uVar8) {
          *(uint *)puVar6 = (uint)*puVar7;
          *(undefined2 *)((long)puVar13 + -4) = *(undefined2 *)((long)puVar13 + 0xc);
          *(uint *)puVar7 = uVar14;
          *(undefined2 *)((long)puVar13 + 0xc) = uVar17;
        }
        else {
          *(uint *)puVar6 = (uint)*puVar13;
          *(undefined2 *)((long)puVar13 + -4) = *(undefined2 *)((long)puVar13 + 4);
          *(uint *)puVar13 = uVar14;
          *(undefined2 *)((long)puVar13 + 4) = uVar17;
          if ((int)uVar18 < (int)uVar14) {
            uVar15 = *puVar13;
            *(uint *)puVar13 = (uint)*puVar7;
            *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar13 + 0xc);
            *(uint *)(puVar13 + 1) = (uint)uVar15;
            *(short *)((long)puVar13 + 0xc) = (short)(uVar15 >> 0x20);
          }
        }
      }
      else if ((int)uVar18 < (int)uVar8) {
        uVar10 = *puVar13;
        uVar15 = *puVar7;
        *(uint *)puVar13 = (uint)uVar15;
        *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar13 + 0xc);
        *(uint *)(puVar13 + 1) = (uint)uVar10;
        *(short *)((long)puVar13 + 0xc) = (short)(uVar10 >> 0x20);
        if ((int)(uint)uVar15 < (int)(uint)puVar13[-1]) {
          uVar15 = puVar13[-1];
          *(uint *)puVar6 = (uint)*puVar13;
          *(undefined2 *)((long)puVar13 + -4) = *(undefined2 *)((long)puVar13 + 4);
          *(uint *)puVar13 = (uint)uVar15;
          *(short *)((long)puVar13 + 4) = (short)(uVar15 >> 0x20);
        }
      }
      uVar10 = *puVar5;
      uVar15 = *puVar13;
      *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar13 + 4);
      *(uint *)puVar5 = (uint)uVar15;
      *(uint *)puVar13 = (uint)uVar10;
      *(short *)((long)puVar13 + 4) = (short)(uVar10 >> 0x20);
    }
    param_3 = param_3 + -1;
    if (((param_4 & 1) != 0) || ((int)(uint)puVar5[-1] < (int)(uint)*puVar5)) {
      lVar19 = 0;
      uVar15 = *puVar5;
      do {
        puVar13 = (ulong *)((long)puVar5 + lVar19 + 8);
        if (puVar13 == param_2) goto LAB_10aa43758;
        lVar19 = lVar19 + 8;
        uVar8 = (uint)uVar15;
      } while ((int)(uint)*puVar13 < (int)uVar8);
      puVar6 = (ulong *)((long)puVar5 + lVar19);
      puVar7 = param_2;
      if (lVar19 == 8) {
        do {
          if (puVar7 <= puVar6) break;
          puVar7 = puVar7 + -1;
        } while ((int)uVar8 <= (int)(uint)*puVar7);
      }
      else {
        do {
          if (puVar7 == puVar5) goto LAB_10aa43758;
          puVar7 = puVar7 + -1;
        } while ((int)uVar8 <= (int)(uint)*puVar7);
      }
      puVar20 = puVar7;
      puVar13 = puVar6;
      if (puVar6 < puVar7) {
        do {
          uVar22 = *puVar13;
          uVar10 = *puVar20;
          *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar20 + 4);
          *(uint *)puVar13 = (uint)uVar10;
          *(uint *)puVar20 = (uint)uVar22;
          *(short *)((long)puVar20 + 4) = (short)(uVar22 >> 0x20);
          do {
            puVar13 = puVar13 + 1;
            if (puVar13 == param_2) goto LAB_10aa43758;
          } while ((int)(uint)*puVar13 < (int)uVar8);
          do {
            if (puVar20 == puVar5) goto LAB_10aa43758;
            puVar20 = puVar20 + -1;
          } while ((int)uVar8 <= (int)(uint)*puVar20);
        } while (puVar13 < puVar20);
      }
      puVar20 = puVar13 + -1;
      if (puVar20 != puVar5) {
        uVar10 = *puVar20;
        *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar13 + -4);
        *(uint *)puVar5 = (uint)uVar10;
      }
      *(uint *)(puVar13 + -1) = uVar8;
      *(short *)((long)puVar13 + -4) = (short)(uVar15 >> 0x20);
      if (puVar7 <= puVar6) {
        puVar6 = puVar5;
        FUN_10aa43ad0(puVar5,puVar20);
        puVar7 = puVar13;
        FUN_10aa43ad0(puVar13,param_2);
        if ((int)puVar7 != 0) goto LAB_10aa432c0;
        if (((ulong)puVar6 & 1) != 0) goto LAB_10aa42b8c;
      }
      FUN_10aa42b50(puVar5,puVar20,param_3,(uint)param_4 & 1);
      param_4 = 0;
      goto LAB_10aa42b8c;
    }
    uVar15 = *puVar5;
    uVar8 = (uint)uVar15;
    puVar13 = puVar5;
    if ((int)uVar8 < (int)(uint)*puVar12) {
      do {
        puVar13 = puVar13 + 1;
        if (puVar13 == param_2) goto LAB_10aa43758;
      } while ((int)(uint)*puVar13 <= (int)uVar8);
    }
    else {
      do {
        puVar13 = puVar13 + 1;
        if (param_2 <= puVar13) break;
      } while ((int)(uint)*puVar13 <= (int)uVar8);
    }
    puVar6 = param_2;
    if (puVar13 < param_2) {
      do {
        if (puVar6 == puVar5) goto LAB_10aa43758;
        puVar6 = puVar6 + -1;
      } while ((int)uVar8 < (int)(uint)*puVar6);
    }
    while (puVar13 < puVar6) {
      uVar22 = *puVar13;
      uVar10 = *puVar6;
      *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar6 + 4);
      *(uint *)puVar13 = (uint)uVar10;
      *(uint *)puVar6 = (uint)uVar22;
      *(short *)((long)puVar6 + 4) = (short)(uVar22 >> 0x20);
      do {
        puVar13 = puVar13 + 1;
        if (puVar13 == param_2) goto LAB_10aa43758;
      } while ((int)(uint)*puVar13 <= (int)uVar8);
      do {
        if (puVar6 == puVar5) goto LAB_10aa43758;
        puVar6 = puVar6 + -1;
      } while ((int)uVar8 < (int)(uint)*puVar6);
    }
    if (puVar13 + -1 != puVar5) {
      uVar10 = puVar13[-1];
      *(undefined2 *)((long)puVar5 + 4) = *(undefined2 *)((long)puVar13 + -4);
      *(uint *)puVar5 = (uint)uVar10;
    }
    param_4 = 0;
    *(uint *)(puVar13 + -1) = uVar8;
    *(short *)((long)puVar13 + -4) = (short)(uVar15 >> 0x20);
  } while( true );
LAB_10aa433dc:
  puVar11 = puVar13;
  if ((int)(uint)puVar12[1] < (int)(uint)*puVar12) {
    uVar15 = *puVar11;
    lVar21 = lVar19;
    do {
      lVar16 = lVar21;
      puVar1 = (undefined4 *)((long)puVar5 + lVar16);
      puVar1[2] = *puVar1;
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar1 + 1);
      uVar8 = (uint)uVar15;
      puVar13 = puVar5;
      if (lVar16 == 0) goto LAB_10aa43430;
      lVar21 = lVar16 + -8;
    } while ((int)uVar8 < (int)puVar1[-2]);
    puVar13 = (ulong *)((long)puVar5 + lVar16);
LAB_10aa43430:
    *(uint *)puVar13 = uVar8;
    *(short *)((long)puVar13 + 4) = (short)(uVar15 >> 0x20);
  }
  lVar19 = lVar19 + 8;
  puVar13 = puVar11 + 1;
  puVar12 = puVar11;
  if (puVar11 + 1 == param_2) {
    return;
  }
  goto LAB_10aa433dc;
LAB_10aa43460:
  do {
    if ((long)uVar10 <= (long)uVar22) {
      uVar25 = uVar10 << 1 | 1;
      puVar13 = puVar5 + uVar25;
      uVar23 = uVar10 * 2 + 2;
      if ((long)uVar23 < (long)uVar15) {
        uVar18 = (uint)*puVar13;
        uVar14 = (uint)puVar13[1];
        uVar8 = uVar18;
        if ((int)uVar18 <= (int)uVar14) {
          uVar8 = uVar14;
        }
        puVar12 = puVar13 + 1;
        if ((int)uVar14 <= (int)uVar18) {
          puVar12 = puVar13;
          uVar23 = uVar25;
        }
      }
      else {
        uVar8 = (uint)*puVar13;
        puVar12 = puVar13;
        uVar23 = uVar25;
      }
      puVar13 = puVar5 + uVar10;
      if ((int)(uint)*puVar13 <= (int)uVar8) {
        uVar25 = *puVar13;
        do {
          puVar11 = puVar12;
          uVar24 = *puVar11;
          *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar11 + 4);
          *(uint *)puVar13 = (uint)uVar24;
          uVar8 = (uint)uVar25;
          if ((long)uVar22 < (long)uVar23) break;
          uVar24 = uVar23 << 1 | 1;
          puVar13 = puVar5 + uVar24;
          uVar23 = uVar23 * 2 + 2;
          if ((long)uVar23 < (long)uVar15) {
            uVar14 = (uint)*puVar13;
            uVar3 = (uint)puVar13[1];
            uVar18 = uVar14;
            if ((int)uVar14 <= (int)uVar3) {
              uVar18 = uVar3;
            }
            puVar12 = puVar13 + 1;
            if ((int)uVar3 <= (int)uVar14) {
              puVar12 = puVar13;
              uVar23 = uVar24;
            }
          }
          else {
            uVar18 = (uint)*puVar13;
            puVar12 = puVar13;
            uVar23 = uVar24;
          }
          puVar13 = puVar11;
        } while ((int)uVar8 <= (int)uVar18);
        *(uint *)puVar11 = uVar8;
        *(short *)((long)puVar11 + 4) = (short)(uVar25 >> 0x20);
      }
    }
    bVar2 = uVar10 != 0;
    uVar10 = uVar10 - 1;
  } while (bVar2);
  do {
    uVar22 = *puVar5;
    puVar13 = puVar5;
    uVar10 = 0;
    do {
      uVar25 = uVar10 << 1 | 1;
      uVar23 = uVar10 * 2 + 2;
      puVar12 = puVar13 + uVar10 + 1;
      uVar24 = uVar25;
      if (((long)uVar23 < (long)uVar15) &&
         (puVar12 = puVar13 + uVar10 + 2, uVar24 = uVar23,
         (int)(uint)puVar13[uVar10 + 2] <= (int)(uint)puVar13[uVar10 + 1])) {
        puVar12 = puVar13 + uVar10 + 1;
        uVar24 = uVar25;
      }
      uVar10 = *puVar12;
      *(undefined2 *)((long)puVar13 + 4) = *(undefined2 *)((long)puVar12 + 4);
      *(uint *)puVar13 = (uint)uVar10;
      puVar13 = puVar12;
      uVar10 = uVar24;
    } while ((long)uVar24 <= (long)(uVar15 - 2 >> 1));
    puVar13 = param_2 + -1;
    uVar8 = (uint)uVar22;
    uVar17 = (undefined2)(uVar22 >> 0x20);
    if (puVar12 == puVar13) {
      *(uint *)puVar12 = uVar8;
LAB_10aa4364c:
      *(undefined2 *)((long)puVar12 + 4) = uVar17;
    }
    else {
      uVar10 = *puVar13;
      *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)param_2 + -4);
      *(uint *)puVar12 = (uint)uVar10;
      *(undefined2 *)((long)param_2 + -4) = uVar17;
      *(uint *)puVar13 = uVar8;
      lVar19 = (long)((long)puVar12 + (8 - (long)puVar5)) >> 3;
      if (1 < lVar19) {
        uVar10 = lVar19 - 2U >> 1;
        if ((int)(uint)puVar5[uVar10] < (int)(uint)*puVar12) {
          uVar22 = *puVar12;
          puVar11 = puVar12;
          puVar26 = puVar5 + uVar10;
          do {
            puVar12 = puVar26;
            uVar23 = *puVar12;
            *(undefined2 *)((long)puVar11 + 4) = *(undefined2 *)((long)puVar12 + 4);
            *(uint *)puVar11 = (uint)uVar23;
            uVar8 = (uint)uVar22;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1 >> 1;
            puVar11 = puVar12;
            puVar26 = puVar5 + uVar10;
          } while ((int)(uint)puVar5[uVar10] < (int)uVar8);
          uVar17 = (undefined2)(uVar22 >> 0x20);
          *(uint *)puVar12 = uVar8;
          goto LAB_10aa4364c;
        }
      }
    }
    bVar2 = (long)uVar15 < 3;
    uVar15 = uVar15 - 1;
    param_2 = puVar13;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_10aa432c0:
  param_2 = puVar20;
  if (((ulong)puVar6 & 1) != 0) {
    return;
  }
  goto LAB_10aa42b7c;
}



/* Entry: 10aa42b50; end: 10aa43893;  */

void FUN_10aa42b50(ulong *param_1,ulong *param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  ulong *puVar5;
  ulong *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong *puVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined2 uVar16;
  uint uVar17;
  long lVar18;
  ulong *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong *puVar25;
  
LAB_10aa42b7c:
  puVar11 = param_2 + -1;
  puVar10 = param_2 + -2;
  puVar25 = param_2 + -3;
  puVar12 = param_1;
LAB_10aa42b8c:
  do {
    param_1 = puVar12;
    uVar14 = (long)param_2 - (long)param_1 >> 3;
    if (uVar14 - 2 == 0 || (long)uVar14 < 2) {
      if (uVar14 < 2) {
        return;
      }
      if (uVar14 == 2) {
        puVar12 = param_2 + -1;
        if ((int)(uint)*param_1 <= (int)(uint)*puVar12) {
          return;
        }
        uVar9 = *param_1;
        uVar14 = *puVar12;
        *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)param_1 = (uint)uVar14;
        *(uint *)puVar12 = (uint)uVar9;
        uVar16 = (undefined2)(uVar9 >> 0x20);
LAB_10aa437a0:
        *(undefined2 *)((long)param_2 + -4) = uVar16;
        return;
      }
    }
    else {
      if (uVar14 == 3) {
        puVar12 = param_1 + 1;
        uVar7 = (uint)*puVar12;
        puVar11 = param_2 + -1;
        if ((int)uVar7 < (int)(uint)*param_1) {
          uVar17 = (uint)*param_1;
          uVar16 = (undefined2)(*param_1 >> 0x20);
          if ((int)(uint)*puVar11 < (int)uVar7) {
            uVar14 = *puVar11;
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + -4);
            *(uint *)param_1 = (uint)uVar14;
            *(undefined2 *)((long)param_2 + -4) = uVar16;
            *(uint *)puVar11 = uVar17;
            return;
          }
          *(uint *)param_1 = (uint)*puVar12;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
          *(uint *)(param_1 + 1) = uVar17;
          *(undefined2 *)((long)param_1 + 0xc) = uVar16;
          if ((int)uVar17 <= (int)(uint)*puVar11) {
            return;
          }
          uVar9 = *puVar12;
          uVar14 = *puVar11;
          *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)puVar12 = (uint)uVar14;
          *(uint *)puVar11 = (uint)uVar9;
          uVar16 = (undefined2)(uVar9 >> 0x20);
          goto LAB_10aa437a0;
        }
        if ((int)uVar7 <= (int)(uint)*puVar11) {
          return;
        }
        uVar9 = param_1[1];
        uVar14 = *puVar11;
        *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar12 = (uint)uVar14;
        *(uint *)puVar11 = (uint)uVar9;
        *(short *)((long)param_2 + -4) = (short)(uVar9 >> 0x20);
LAB_10aa43848:
        if ((int)(uint)*param_1 <= (int)(uint)param_1[1]) {
          return;
        }
        uVar14 = *param_1;
        *(uint *)param_1 = (uint)param_1[1];
        *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
        *(uint *)(param_1 + 1) = (uint)uVar14;
        *(short *)((long)param_1 + 0xc) = (short)(uVar14 >> 0x20);
        return;
      }
      if (uVar14 == 4) {
        puVar12 = param_1 + 1;
        uVar7 = (uint)*puVar12;
        puVar10 = param_1 + 2;
        uVar17 = (uint)*puVar10;
        uVar14 = (ulong)uVar17;
        if ((int)uVar7 < (int)(uint)*param_1) {
          uVar9 = *param_1;
          uVar13 = (uint)uVar9;
          uVar16 = (undefined2)(uVar9 >> 0x20);
          if ((int)uVar17 < (int)uVar7) {
            *(uint *)param_1 = (uint)*puVar10;
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0x14);
            *(uint *)(param_1 + 2) = uVar13;
            *(undefined2 *)((long)param_1 + 0x14) = uVar16;
            uVar14 = uVar9;
          }
          else {
            *(uint *)param_1 = (uint)*puVar12;
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
            *(uint *)(param_1 + 1) = uVar13;
            *(undefined2 *)((long)param_1 + 0xc) = uVar16;
            if ((int)uVar17 < (int)uVar13) {
              uVar14 = *puVar12;
              *(uint *)puVar12 = (uint)*puVar10;
              *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
              *(uint *)puVar10 = (uint)uVar14;
              *(short *)((long)param_1 + 0x14) = (short)(uVar14 >> 0x20);
            }
          }
        }
        else if ((int)uVar17 < (int)uVar7) {
          uVar14 = *puVar12;
          uVar9 = *puVar10;
          *(uint *)puVar12 = (uint)uVar9;
          *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
          *(uint *)puVar10 = (uint)uVar14;
          *(short *)((long)param_1 + 0x14) = (short)(uVar14 >> 0x20);
          if ((int)(uint)uVar9 < (int)(uint)*param_1) {
            uVar9 = *param_1;
            *(uint *)param_1 = (uint)*puVar12;
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
            *(uint *)(param_1 + 1) = (uint)uVar9;
            *(short *)((long)param_1 + 0xc) = (short)(uVar9 >> 0x20);
          }
        }
        if ((int)uVar14 <= (int)(uint)*puVar11) {
          return;
        }
        uVar9 = *puVar10;
        uVar14 = *puVar11;
        *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar10 = (uint)uVar14;
        *(uint *)puVar11 = (uint)uVar9;
        *(short *)((long)param_2 + -4) = (short)(uVar9 >> 0x20);
        if ((int)(uint)*puVar12 <= (int)(uint)*puVar10) {
          return;
        }
        uVar14 = param_1[1];
        *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
        *(uint *)puVar12 = (uint)*puVar10;
        *(uint *)(param_1 + 2) = (uint)uVar14;
        *(short *)((long)param_1 + 0x14) = (short)(uVar14 >> 0x20);
        goto LAB_10aa43848;
      }
      if (uVar14 == 5) {
        puVar12 = param_1 + 1;
        puVar10 = param_1 + 2;
        puVar25 = param_1 + 3;
        uVar7 = (uint)*puVar12;
        uVar17 = (uint)*puVar10;
        uVar14 = (ulong)uVar17;
        if ((int)uVar7 < (int)(uint)*param_1) {
          uVar14 = *param_1;
          uVar13 = (uint)uVar14;
          uVar16 = (undefined2)(uVar14 >> 0x20);
          if ((int)uVar17 < (int)uVar7) {
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0x14);
            *(uint *)param_1 = (uint)*puVar10;
            *(undefined2 *)((long)param_1 + 0x14) = uVar16;
            *(uint *)puVar10 = uVar13;
          }
          else {
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
            *(uint *)param_1 = (uint)*puVar12;
            *(undefined2 *)((long)param_1 + 0xc) = uVar16;
            *(uint *)puVar12 = uVar13;
            uVar14 = (ulong)(uint)*puVar10;
            if ((int)(uint)*puVar10 < (int)uVar13) {
              uVar14 = *puVar12;
              *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
              *(uint *)puVar12 = (uint)*puVar10;
              *(uint *)puVar10 = (uint)uVar14;
              *(short *)((long)param_1 + 0x14) = (short)(uVar14 >> 0x20);
            }
          }
        }
        else if ((int)uVar17 < (int)uVar7) {
          uVar14 = *puVar12;
          *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
          *(uint *)puVar12 = (uint)*puVar10;
          *(uint *)puVar10 = (uint)uVar14;
          *(short *)((long)param_1 + 0x14) = (short)(uVar14 >> 0x20);
          if ((int)(uint)*puVar12 < (int)(uint)*param_1) {
            uVar14 = *param_1;
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
            *(uint *)param_1 = (uint)*puVar12;
            *(uint *)puVar12 = (uint)uVar14;
            *(short *)((long)param_1 + 0xc) = (short)(uVar14 >> 0x20);
            uVar14 = (ulong)(uint)*puVar10;
          }
        }
        if ((int)(uint)*puVar25 < (int)uVar14) {
          uVar14 = *puVar10;
          *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_1 + 0x1c);
          *(uint *)puVar10 = (uint)*puVar25;
          *(uint *)puVar25 = (uint)uVar14;
          *(short *)((long)param_1 + 0x1c) = (short)(uVar14 >> 0x20);
          if ((int)(uint)*puVar10 < (int)(uint)*puVar12) {
            uVar14 = *puVar12;
            *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
            *(uint *)puVar12 = (uint)*puVar10;
            *(uint *)puVar10 = (uint)uVar14;
            *(short *)((long)param_1 + 0x14) = (short)(uVar14 >> 0x20);
            if ((int)(uint)*puVar12 < (int)(uint)*param_1) {
              uVar14 = *param_1;
              *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
              *(uint *)param_1 = (uint)*puVar12;
              *(uint *)puVar12 = (uint)uVar14;
              *(short *)((long)param_1 + 0xc) = (short)(uVar14 >> 0x20);
            }
          }
        }
        if ((int)(uint)*puVar11 < (int)(uint)*puVar25) {
          uVar9 = *puVar25;
          uVar14 = *puVar11;
          *(undefined2 *)((long)param_1 + 0x1c) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)puVar25 = (uint)uVar14;
          *(uint *)puVar11 = (uint)uVar9;
          *(short *)((long)param_2 + -4) = (short)(uVar9 >> 0x20);
          if ((int)(uint)*puVar25 < (int)(uint)*puVar10) {
            uVar14 = *puVar10;
            *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_1 + 0x1c);
            *(uint *)puVar10 = (uint)*puVar25;
            *(uint *)puVar25 = (uint)uVar14;
            *(short *)((long)param_1 + 0x1c) = (short)(uVar14 >> 0x20);
            if ((int)(uint)*puVar10 < (int)(uint)*puVar12) {
              uVar14 = *puVar12;
              *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_1 + 0x14);
              *(uint *)puVar12 = (uint)*puVar10;
              *(uint *)puVar10 = (uint)uVar14;
              *(short *)((long)param_1 + 0x14) = (short)(uVar14 >> 0x20);
              if ((int)(uint)*puVar12 < (int)(uint)*param_1) {
                uVar14 = *param_1;
                *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_1 + 0xc);
                *(uint *)param_1 = (uint)*puVar12;
                *(uint *)puVar12 = (uint)uVar14;
                *(short *)((long)param_1 + 0xc) = (short)(uVar14 >> 0x20);
              }
            }
          }
        }
        return;
      }
    }
    if ((long)uVar14 < 0x18) {
      puVar12 = param_1 + 1;
      if ((param_4 & 1) == 0) {
        if (param_1 == param_2 || puVar12 == param_2) {
          return;
        }
        lVar18 = 0;
        lVar20 = 8;
        do {
          if ((int)(uint)*puVar12 < *(int *)((long)param_1 + lVar18)) {
            uVar14 = *puVar12;
            do {
              lVar15 = lVar18;
              puVar1 = (undefined4 *)((long)param_1 + lVar15);
              puVar1[2] = *puVar1;
              *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar1 + 1);
              if (lVar15 == -8) {
LAB_10aa43758:
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10aa4375c);
                (*pcVar4)();
              }
              iVar8 = (int)uVar14;
              lVar18 = lVar15 + -8;
            } while (iVar8 < (int)puVar1[-2]);
            *(int *)((long)param_1 + lVar15) = iVar8;
            *(short *)((long)param_1 + lVar15 + 4) = (short)(uVar14 >> 0x20);
          }
          puVar12 = (ulong *)((long)param_1 + lVar20 + 8);
          lVar18 = lVar20;
          lVar20 = lVar20 + 8;
          if (puVar12 == param_2) {
            return;
          }
        } while( true );
      }
      if (param_1 == param_2 || puVar12 == param_2) {
        return;
      }
      lVar18 = 0;
      puVar11 = param_1;
      break;
    }
    if (param_3 == 0) {
      if (param_1 == param_2) {
        return;
      }
      uVar21 = uVar14 - 2 >> 1;
      uVar9 = uVar21;
      goto LAB_10aa43460;
    }
    puVar12 = param_1 + (uVar14 >> 1);
    uVar7 = (uint)*puVar11;
    if (uVar14 < 0x81) {
      uVar17 = (uint)*param_1;
      if ((int)uVar17 < (int)(uint)*puVar12) {
        uVar13 = (uint)*puVar12;
        uVar16 = (undefined2)(*puVar12 >> 0x20);
        if ((int)uVar7 < (int)uVar17) {
          uVar14 = *puVar11;
          *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)puVar12 = (uint)uVar14;
          *(undefined2 *)((long)param_2 + -4) = uVar16;
          *(uint *)puVar11 = uVar13;
        }
        else {
          uVar14 = *param_1;
          *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)param_1 + 4);
          *(uint *)puVar12 = (uint)uVar14;
          *(undefined2 *)((long)param_1 + 4) = uVar16;
          *(uint *)param_1 = uVar13;
          if ((int)(uint)*puVar11 < (int)uVar13) {
            uVar9 = *param_1;
            uVar14 = *puVar11;
            *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + -4);
            *(uint *)param_1 = (uint)uVar14;
            *(uint *)puVar11 = (uint)uVar9;
            *(short *)((long)param_2 + -4) = (short)(uVar9 >> 0x20);
          }
        }
      }
      else if ((int)uVar7 < (int)uVar17) {
        uVar9 = *param_1;
        uVar14 = *puVar11;
        *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)param_1 = (uint)uVar14;
        *(uint *)puVar11 = (uint)uVar9;
        *(short *)((long)param_2 + -4) = (short)(uVar9 >> 0x20);
        if ((int)(uint)*param_1 < (int)(uint)*puVar12) {
          uVar9 = *puVar12;
          uVar14 = *param_1;
          *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)param_1 + 4);
          *(uint *)puVar12 = (uint)uVar14;
          *(uint *)param_1 = (uint)uVar9;
          *(short *)((long)param_1 + 4) = (short)(uVar9 >> 0x20);
        }
      }
    }
    else {
      uVar17 = (uint)*puVar12;
      if ((int)uVar17 < (int)(uint)*param_1) {
        uVar13 = (uint)*param_1;
        uVar16 = (undefined2)(*param_1 >> 0x20);
        if ((int)uVar7 < (int)uVar17) {
          uVar14 = *puVar11;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + -4);
          *(uint *)param_1 = (uint)uVar14;
          *(undefined2 *)((long)param_2 + -4) = uVar16;
          *(uint *)puVar11 = uVar13;
        }
        else {
          uVar14 = *puVar12;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)puVar12 + 4);
          *(uint *)param_1 = (uint)uVar14;
          *(undefined2 *)((long)puVar12 + 4) = uVar16;
          *(uint *)puVar12 = uVar13;
          if ((int)(uint)*puVar11 < (int)uVar13) {
            uVar9 = *puVar12;
            uVar14 = *puVar11;
            *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)param_2 + -4);
            *(uint *)puVar12 = (uint)uVar14;
            *(uint *)puVar11 = (uint)uVar9;
            *(short *)((long)param_2 + -4) = (short)(uVar9 >> 0x20);
          }
        }
      }
      else if ((int)uVar7 < (int)uVar17) {
        uVar9 = *puVar12;
        uVar14 = *puVar11;
        *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)param_2 + -4);
        *(uint *)puVar12 = (uint)uVar14;
        *(uint *)puVar11 = (uint)uVar9;
        *(short *)((long)param_2 + -4) = (short)(uVar9 >> 0x20);
        if ((int)(uint)*puVar12 < (int)(uint)*param_1) {
          uVar9 = *param_1;
          uVar14 = *puVar12;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)puVar12 + 4);
          *(uint *)param_1 = (uint)uVar14;
          *(uint *)puVar12 = (uint)uVar9;
          *(short *)((long)puVar12 + 4) = (short)(uVar9 >> 0x20);
        }
      }
      puVar6 = param_1 + 1;
      puVar5 = puVar12 + -1;
      uVar7 = (uint)*puVar5;
      if ((int)uVar7 < (int)(uint)*puVar6) {
        uVar17 = (uint)*puVar6;
        uVar16 = (undefined2)(*puVar6 >> 0x20);
        if ((int)(uint)*puVar10 < (int)uVar7) {
          uVar14 = *puVar10;
          *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + -0xc);
          *(uint *)puVar6 = (uint)uVar14;
          *(undefined2 *)((long)param_2 + -0xc) = uVar16;
          *(uint *)puVar10 = uVar17;
        }
        else {
          uVar14 = *puVar5;
          *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)puVar12 + -4);
          *(uint *)puVar6 = (uint)uVar14;
          *(undefined2 *)((long)puVar12 + -4) = uVar16;
          *(uint *)puVar5 = uVar17;
          if ((int)(uint)*puVar10 < (int)uVar17) {
            uVar9 = *puVar5;
            uVar14 = *puVar10;
            *(undefined2 *)((long)puVar12 + -4) = *(undefined2 *)((long)param_2 + -0xc);
            *(uint *)puVar5 = (uint)uVar14;
            *(uint *)puVar10 = (uint)uVar9;
            *(short *)((long)param_2 + -0xc) = (short)(uVar9 >> 0x20);
          }
        }
      }
      else if ((int)(uint)*puVar10 < (int)uVar7) {
        uVar9 = *puVar5;
        uVar14 = *puVar10;
        *(undefined2 *)((long)puVar12 + -4) = *(undefined2 *)((long)param_2 + -0xc);
        *(uint *)puVar5 = (uint)uVar14;
        *(uint *)puVar10 = (uint)uVar9;
        *(short *)((long)param_2 + -0xc) = (short)(uVar9 >> 0x20);
        if ((int)(uint)*puVar5 < (int)(uint)*puVar6) {
          uVar9 = *puVar6;
          uVar14 = *puVar5;
          *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)puVar12 + -4);
          *(uint *)puVar6 = (uint)uVar14;
          *(uint *)puVar5 = (uint)uVar9;
          *(short *)((long)puVar12 + -4) = (short)(uVar9 >> 0x20);
        }
      }
      puVar19 = param_1 + 2;
      puVar6 = puVar12 + 1;
      uVar7 = (uint)*puVar6;
      if ((int)uVar7 < (int)(uint)*puVar19) {
        uVar17 = (uint)*puVar19;
        uVar16 = (undefined2)(*puVar19 >> 0x20);
        if ((int)(uint)*puVar25 < (int)uVar7) {
          uVar14 = *puVar25;
          *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)param_2 + -0x14);
          *(uint *)puVar19 = (uint)uVar14;
          *(undefined2 *)((long)param_2 + -0x14) = uVar16;
          *(uint *)puVar25 = uVar17;
        }
        else {
          uVar14 = *puVar6;
          *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)puVar12 + 0xc);
          *(uint *)puVar19 = (uint)uVar14;
          *(undefined2 *)((long)puVar12 + 0xc) = uVar16;
          *(uint *)puVar6 = uVar17;
          if ((int)(uint)*puVar25 < (int)uVar17) {
            uVar9 = *puVar6;
            uVar14 = *puVar25;
            *(undefined2 *)((long)puVar12 + 0xc) = *(undefined2 *)((long)param_2 + -0x14);
            *(uint *)puVar6 = (uint)uVar14;
            *(uint *)puVar25 = (uint)uVar9;
            *(short *)((long)param_2 + -0x14) = (short)(uVar9 >> 0x20);
          }
        }
      }
      else if ((int)(uint)*puVar25 < (int)uVar7) {
        uVar9 = *puVar6;
        uVar14 = *puVar25;
        *(undefined2 *)((long)puVar12 + 0xc) = *(undefined2 *)((long)param_2 + -0x14);
        *(uint *)puVar6 = (uint)uVar14;
        *(uint *)puVar25 = (uint)uVar9;
        *(short *)((long)param_2 + -0x14) = (short)(uVar9 >> 0x20);
        if ((int)(uint)*puVar6 < (int)(uint)*puVar19) {
          uVar9 = *puVar19;
          uVar14 = *puVar6;
          *(undefined2 *)((long)param_1 + 0x14) = *(undefined2 *)((long)puVar12 + 0xc);
          *(uint *)puVar19 = (uint)uVar14;
          *(uint *)puVar6 = (uint)uVar9;
          *(short *)((long)puVar12 + 0xc) = (short)(uVar9 >> 0x20);
        }
      }
      uVar7 = (uint)*puVar12;
      uVar17 = (uint)puVar12[1];
      if ((int)uVar7 < (int)(uint)puVar12[-1]) {
        uVar13 = (uint)*puVar5;
        uVar16 = (undefined2)(*puVar5 >> 0x20);
        if ((int)uVar17 < (int)uVar7) {
          *(uint *)puVar5 = (uint)*puVar6;
          *(undefined2 *)((long)puVar12 + -4) = *(undefined2 *)((long)puVar12 + 0xc);
          *(uint *)puVar6 = uVar13;
          *(undefined2 *)((long)puVar12 + 0xc) = uVar16;
        }
        else {
          *(uint *)puVar5 = (uint)*puVar12;
          *(undefined2 *)((long)puVar12 + -4) = *(undefined2 *)((long)puVar12 + 4);
          *(uint *)puVar12 = uVar13;
          *(undefined2 *)((long)puVar12 + 4) = uVar16;
          if ((int)uVar17 < (int)uVar13) {
            uVar14 = *puVar12;
            *(uint *)puVar12 = (uint)*puVar6;
            *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)puVar12 + 0xc);
            *(uint *)(puVar12 + 1) = (uint)uVar14;
            *(short *)((long)puVar12 + 0xc) = (short)(uVar14 >> 0x20);
          }
        }
      }
      else if ((int)uVar17 < (int)uVar7) {
        uVar9 = *puVar12;
        uVar14 = *puVar6;
        *(uint *)puVar12 = (uint)uVar14;
        *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)puVar12 + 0xc);
        *(uint *)(puVar12 + 1) = (uint)uVar9;
        *(short *)((long)puVar12 + 0xc) = (short)(uVar9 >> 0x20);
        if ((int)(uint)uVar14 < (int)(uint)puVar12[-1]) {
          uVar14 = puVar12[-1];
          *(uint *)puVar5 = (uint)*puVar12;
          *(undefined2 *)((long)puVar12 + -4) = *(undefined2 *)((long)puVar12 + 4);
          *(uint *)puVar12 = (uint)uVar14;
          *(short *)((long)puVar12 + 4) = (short)(uVar14 >> 0x20);
        }
      }
      uVar9 = *param_1;
      uVar14 = *puVar12;
      *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)puVar12 + 4);
      *(uint *)param_1 = (uint)uVar14;
      *(uint *)puVar12 = (uint)uVar9;
      *(short *)((long)puVar12 + 4) = (short)(uVar9 >> 0x20);
    }
    param_3 = param_3 + -1;
    if (((param_4 & 1) != 0) || ((int)(uint)param_1[-1] < (int)(uint)*param_1)) {
      lVar18 = 0;
      uVar14 = *param_1;
      do {
        puVar12 = (ulong *)((long)param_1 + lVar18 + 8);
        if (puVar12 == param_2) goto LAB_10aa43758;
        lVar18 = lVar18 + 8;
        uVar7 = (uint)uVar14;
      } while ((int)(uint)*puVar12 < (int)uVar7);
      puVar5 = (ulong *)((long)param_1 + lVar18);
      puVar6 = param_2;
      if (lVar18 == 8) {
        do {
          if (puVar6 <= puVar5) break;
          puVar6 = puVar6 + -1;
        } while ((int)uVar7 <= (int)(uint)*puVar6);
      }
      else {
        do {
          if (puVar6 == param_1) goto LAB_10aa43758;
          puVar6 = puVar6 + -1;
        } while ((int)uVar7 <= (int)(uint)*puVar6);
      }
      puVar19 = puVar6;
      puVar12 = puVar5;
      if (puVar5 < puVar6) {
        do {
          uVar21 = *puVar12;
          uVar9 = *puVar19;
          *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)puVar19 + 4);
          *(uint *)puVar12 = (uint)uVar9;
          *(uint *)puVar19 = (uint)uVar21;
          *(short *)((long)puVar19 + 4) = (short)(uVar21 >> 0x20);
          do {
            puVar12 = puVar12 + 1;
            if (puVar12 == param_2) goto LAB_10aa43758;
          } while ((int)(uint)*puVar12 < (int)uVar7);
          do {
            if (puVar19 == param_1) goto LAB_10aa43758;
            puVar19 = puVar19 + -1;
          } while ((int)uVar7 <= (int)(uint)*puVar19);
        } while (puVar12 < puVar19);
      }
      puVar19 = puVar12 + -1;
      if (puVar19 != param_1) {
        uVar9 = *puVar19;
        *(short *)((long)param_1 + 4) = (short)*(uint *)((long)puVar12 - 4);
        *(uint *)param_1 = (uint)uVar9;
      }
      *(uint *)(puVar12 + -1) = uVar7;
      *(short *)((long)puVar12 - 4) = (short)(uVar14 >> 0x20);
      if (puVar6 <= puVar5) {
        puVar5 = param_1;
        FUN_10aa43ad0(param_1,puVar19);
        puVar6 = puVar12;
        FUN_10aa43ad0(puVar12,param_2);
        if ((int)puVar6 != 0) goto LAB_10aa432c0;
        if (((ulong)puVar5 & 1) != 0) goto LAB_10aa42b8c;
      }
      FUN_10aa42b50(param_1,puVar19,param_3,param_4 & 1);
      param_4 = 0;
      goto LAB_10aa42b8c;
    }
    uVar14 = *param_1;
    uVar7 = (uint)uVar14;
    puVar12 = param_1;
    if ((int)uVar7 < (int)(uint)*puVar11) {
      do {
        puVar12 = puVar12 + 1;
        if (puVar12 == param_2) goto LAB_10aa43758;
      } while ((int)(uint)*puVar12 <= (int)uVar7);
    }
    else {
      do {
        puVar12 = puVar12 + 1;
        if (param_2 <= puVar12) break;
      } while ((int)(uint)*puVar12 <= (int)uVar7);
    }
    puVar5 = param_2;
    if (puVar12 < param_2) {
      do {
        if (puVar5 == param_1) goto LAB_10aa43758;
        puVar5 = puVar5 + -1;
      } while ((int)uVar7 < (int)(uint)*puVar5);
    }
    while (puVar12 < puVar5) {
      uVar21 = *puVar12;
      uVar9 = *puVar5;
      *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)puVar5 + 4);
      *(uint *)puVar12 = (uint)uVar9;
      *(uint *)puVar5 = (uint)uVar21;
      *(short *)((long)puVar5 + 4) = (short)(uVar21 >> 0x20);
      do {
        puVar12 = puVar12 + 1;
        if (puVar12 == param_2) goto LAB_10aa43758;
      } while ((int)(uint)*puVar12 <= (int)uVar7);
      do {
        if (puVar5 == param_1) goto LAB_10aa43758;
        puVar5 = puVar5 + -1;
      } while ((int)uVar7 < (int)(uint)*puVar5);
    }
    if (puVar12 + -1 != param_1) {
      uVar9 = puVar12[-1];
      *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)puVar12 + -4);
      *(uint *)param_1 = (uint)uVar9;
    }
    param_4 = 0;
    *(uint *)(puVar12 + -1) = uVar7;
    *(short *)((long)puVar12 + -4) = (short)(uVar14 >> 0x20);
  } while( true );
LAB_10aa433dc:
  puVar10 = puVar12;
  if ((int)(uint)puVar11[1] < (int)(uint)*puVar11) {
    uVar14 = *puVar10;
    lVar20 = lVar18;
    do {
      lVar15 = lVar20;
      puVar1 = (undefined4 *)((long)param_1 + lVar15);
      puVar1[2] = *puVar1;
      *(undefined2 *)(puVar1 + 3) = *(undefined2 *)(puVar1 + 1);
      uVar7 = (uint)uVar14;
      puVar12 = param_1;
      if (lVar15 == 0) goto LAB_10aa43430;
      lVar20 = lVar15 + -8;
    } while ((int)uVar7 < (int)puVar1[-2]);
    puVar12 = (ulong *)((long)param_1 + lVar15);
LAB_10aa43430:
    *(uint *)puVar12 = uVar7;
    *(short *)((long)puVar12 + 4) = (short)(uVar14 >> 0x20);
  }
  lVar18 = lVar18 + 8;
  puVar12 = puVar10 + 1;
  puVar11 = puVar10;
  if (puVar10 + 1 == param_2) {
    return;
  }
  goto LAB_10aa433dc;
LAB_10aa43460:
  do {
    if ((long)uVar9 <= (long)uVar21) {
      uVar24 = uVar9 << 1 | 1;
      puVar12 = param_1 + uVar24;
      uVar22 = uVar9 * 2 + 2;
      if ((long)uVar22 < (long)uVar14) {
        uVar17 = (uint)*puVar12;
        uVar13 = (uint)puVar12[1];
        uVar7 = uVar17;
        if ((int)uVar17 <= (int)uVar13) {
          uVar7 = uVar13;
        }
        puVar11 = puVar12 + 1;
        if ((int)uVar13 <= (int)uVar17) {
          puVar11 = puVar12;
          uVar22 = uVar24;
        }
      }
      else {
        uVar7 = (uint)*puVar12;
        puVar11 = puVar12;
        uVar22 = uVar24;
      }
      puVar12 = param_1 + uVar9;
      if ((int)(uint)*puVar12 <= (int)uVar7) {
        uVar24 = *puVar12;
        do {
          puVar10 = puVar11;
          uVar23 = *puVar10;
          *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)puVar10 + 4);
          *(uint *)puVar12 = (uint)uVar23;
          uVar7 = (uint)uVar24;
          if ((long)uVar21 < (long)uVar22) break;
          uVar23 = uVar22 << 1 | 1;
          puVar12 = param_1 + uVar23;
          uVar22 = uVar22 * 2 + 2;
          if ((long)uVar22 < (long)uVar14) {
            uVar13 = (uint)*puVar12;
            uVar3 = (uint)puVar12[1];
            uVar17 = uVar13;
            if ((int)uVar13 <= (int)uVar3) {
              uVar17 = uVar3;
            }
            puVar11 = puVar12 + 1;
            if ((int)uVar3 <= (int)uVar13) {
              puVar11 = puVar12;
              uVar22 = uVar23;
            }
          }
          else {
            uVar17 = (uint)*puVar12;
            puVar11 = puVar12;
            uVar22 = uVar23;
          }
          puVar12 = puVar10;
        } while ((int)uVar7 <= (int)uVar17);
        *(uint *)puVar10 = uVar7;
        *(short *)((long)puVar10 + 4) = (short)(uVar24 >> 0x20);
      }
    }
    bVar2 = uVar9 != 0;
    uVar9 = uVar9 - 1;
  } while (bVar2);
  do {
    uVar21 = *param_1;
    puVar12 = param_1;
    uVar9 = 0;
    do {
      uVar24 = uVar9 << 1 | 1;
      uVar22 = uVar9 * 2 + 2;
      puVar11 = puVar12 + uVar9 + 1;
      uVar23 = uVar24;
      if (((long)uVar22 < (long)uVar14) &&
         (puVar11 = puVar12 + uVar9 + 2, uVar23 = uVar22,
         (int)(uint)puVar12[uVar9 + 2] <= (int)(uint)puVar12[uVar9 + 1])) {
        puVar11 = puVar12 + uVar9 + 1;
        uVar23 = uVar24;
      }
      uVar9 = *puVar11;
      *(undefined2 *)((long)puVar12 + 4) = *(undefined2 *)((long)puVar11 + 4);
      *(uint *)puVar12 = (uint)uVar9;
      puVar12 = puVar11;
      uVar9 = uVar23;
    } while ((long)uVar23 <= (long)(uVar14 - 2 >> 1));
    puVar12 = param_2 + -1;
    uVar7 = (uint)uVar21;
    uVar16 = (undefined2)(uVar21 >> 0x20);
    if (puVar11 == puVar12) {
      *(uint *)puVar11 = uVar7;
LAB_10aa4364c:
      *(undefined2 *)((long)puVar11 + 4) = uVar16;
    }
    else {
      uVar9 = *puVar12;
      *(short *)((long)puVar11 + 4) = (short)*(uint *)((long)param_2 - 4);
      *(uint *)puVar11 = (uint)uVar9;
      *(undefined2 *)((long)param_2 - 4) = uVar16;
      *(uint *)puVar12 = uVar7;
      lVar18 = (long)puVar11 + (8 - (long)param_1) >> 3;
      if (1 < lVar18) {
        uVar9 = lVar18 - 2U >> 1;
        if ((int)(uint)param_1[uVar9] < (int)(uint)*puVar11) {
          uVar21 = *puVar11;
          puVar10 = puVar11;
          puVar25 = param_1 + uVar9;
          do {
            puVar11 = puVar25;
            uVar22 = *puVar11;
            *(undefined2 *)((long)puVar10 + 4) = *(undefined2 *)((long)puVar11 + 4);
            *(uint *)puVar10 = (uint)uVar22;
            uVar7 = (uint)uVar21;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1 >> 1;
            puVar10 = puVar11;
            puVar25 = param_1 + uVar9;
          } while ((int)(uint)param_1[uVar9] < (int)uVar7);
          uVar16 = (undefined2)(uVar21 >> 0x20);
          *(uint *)puVar11 = uVar7;
          goto LAB_10aa4364c;
        }
      }
    }
    bVar2 = (long)uVar14 < 3;
    uVar14 = uVar14 - 1;
    param_2 = puVar12;
    if (bVar2) {
      return;
    }
  } while( true );
LAB_10aa432c0:
  param_2 = puVar19;
  if (((ulong)puVar5 & 1) != 0) {
    return;
  }
  goto LAB_10aa42b7c;
}



/* Entry: 10aa43894; end: 10aa43acf;  */

void FUN_10aa43894(ulong *param_1,ulong *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar2 = (uint)*param_2;
  uVar1 = *param_3;
  uVar4 = (ulong)uVar1;
  if ((int)uVar2 < (int)(uint)*param_1) {
    uVar4 = *param_1;
    uVar7 = (uint)uVar4;
    uVar3 = (undefined2)(uVar4 >> 0x20);
    if ((int)uVar1 < (int)uVar2) {
      uVar2 = *param_3;
      *(short *)((long)param_1 + 4) = (short)param_3[1];
      *(uint *)param_1 = uVar2;
      *(undefined2 *)(param_3 + 1) = uVar3;
      *param_3 = uVar7;
    }
    else {
      uVar4 = *param_2;
      *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + 4);
      *(uint *)param_1 = (uint)uVar4;
      *(undefined2 *)((long)param_2 + 4) = uVar3;
      *(uint *)param_2 = uVar7;
      uVar4 = (ulong)*param_3;
      if ((int)*param_3 < (int)uVar7) {
        uVar4 = *param_2;
        uVar2 = *param_3;
        *(short *)((long)param_2 + 4) = (short)param_3[1];
        *(uint *)param_2 = uVar2;
        *param_3 = (uint)uVar4;
        *(short *)(param_3 + 1) = (short)(uVar4 >> 0x20);
      }
    }
  }
  else if ((int)uVar1 < (int)uVar2) {
    uVar4 = *param_2;
    uVar2 = *param_3;
    *(short *)((long)param_2 + 4) = (short)param_3[1];
    *(uint *)param_2 = uVar2;
    *param_3 = (uint)uVar4;
    *(short *)(param_3 + 1) = (short)(uVar4 >> 0x20);
    if ((int)(uint)*param_2 < (int)(uint)*param_1) {
      uVar6 = *param_1;
      uVar4 = *param_2;
      *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + 4);
      *(uint *)param_1 = (uint)uVar4;
      *(uint *)param_2 = (uint)uVar6;
      *(short *)((long)param_2 + 4) = (short)(uVar6 >> 0x20);
      uVar4 = (ulong)*param_3;
    }
  }
  if ((int)*param_4 < (int)uVar4) {
    uVar5 = *(undefined8 *)param_3;
    uVar2 = *param_4;
    *(short *)(param_3 + 1) = (short)param_4[1];
    *param_3 = uVar2;
    *param_4 = (uint)uVar5;
    *(short *)(param_4 + 1) = (short)((ulong)uVar5 >> 0x20);
    if ((int)*param_3 < (int)(uint)*param_2) {
      uVar4 = *param_2;
      uVar2 = *param_3;
      *(short *)((long)param_2 + 4) = (short)param_3[1];
      *(uint *)param_2 = uVar2;
      *param_3 = (uint)uVar4;
      *(short *)(param_3 + 1) = (short)(uVar4 >> 0x20);
      if ((int)(uint)*param_2 < (int)(uint)*param_1) {
        uVar6 = *param_1;
        uVar4 = *param_2;
        *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + 4);
        *(uint *)param_1 = (uint)uVar4;
        *(uint *)param_2 = (uint)uVar6;
        *(short *)((long)param_2 + 4) = (short)(uVar6 >> 0x20);
      }
    }
  }
  if ((int)*param_5 < (int)*param_4) {
    uVar5 = *(undefined8 *)param_4;
    uVar2 = *param_5;
    *(short *)(param_4 + 1) = (short)param_5[1];
    *param_4 = uVar2;
    *param_5 = (uint)uVar5;
    *(short *)(param_5 + 1) = (short)((ulong)uVar5 >> 0x20);
    if ((int)*param_4 < (int)*param_3) {
      uVar5 = *(undefined8 *)param_3;
      uVar2 = *param_4;
      *(short *)(param_3 + 1) = (short)param_4[1];
      *param_3 = uVar2;
      *param_4 = (uint)uVar5;
      *(short *)(param_4 + 1) = (short)((ulong)uVar5 >> 0x20);
      if ((int)*param_3 < (int)(uint)*param_2) {
        uVar4 = *param_2;
        uVar2 = *param_3;
        *(short *)((long)param_2 + 4) = (short)param_3[1];
        *(uint *)param_2 = uVar2;
        *param_3 = (uint)uVar4;
        *(short *)(param_3 + 1) = (short)(uVar4 >> 0x20);
        if ((int)(uint)*param_2 < (int)(uint)*param_1) {
          uVar6 = *param_1;
          uVar4 = *param_2;
          *(undefined2 *)((long)param_1 + 4) = *(undefined2 *)((long)param_2 + 4);
          *(uint *)param_1 = (uint)uVar4;
          *(uint *)param_2 = (uint)uVar6;
          *(short *)((long)param_2 + 4) = (short)(uVar6 >> 0x20);
        }
      }
    }
  }
  return;
}


