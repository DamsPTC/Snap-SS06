/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10826bfbc; end: 10826bfcf;  */

void FUN_10826bfbc(void)

{
  func_0x00010826bf7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10826bfd0; end: 10826c03b;  */

void FUN_10826bfd0(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    uStack_30 = 0;
    uStack_28 = 0;
    func_0x00010812f1a8(param_1 + 0x68,&uStack_30);
    plVar2 = *(long **)(param_1 + 0x10);
    if (plVar2 == (long *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = (long)plVar2 + *(long *)(*plVar2 + -0x18);
    }
    FUN_10826c03c(*(undefined8 *)(param_1 + 0x38),lVar1,*(undefined4 *)(param_1 + 8),&uStack_30);
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 10826c03c; end: 10826c043;  */

/* WARNING: Removing unreachable block (ram,0x00010829fa8c) */

void FUN_10826c03c(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  if ((((param_4 == 0) || (FUN_10821a6d8(), (param_4 & 1) == 0)) &&
      ((**(code **)(*param_2 + 0x58))(), param_2 != (long *)0x0)) &&
     (*(int *)((long)param_2 + 0xc) == 2)) {
    *(undefined4 *)((long)param_2 + 0xc) = 1;
  }
  return;
}



/* Entry: 10826c044; end: 10826c2a3;  */

undefined8 FUN_10826c044(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 in_ZR;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_108;
  long lStack_100;
  undefined1 auStack_f8 [144];
  int iStack_68;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(**(long **)(param_1[7] + 0x80) + 0x88))
            (auStack_f8,*(long **)(param_1[7] + 0x80),param_1[2],param_2,0);
  if (iStack_68 != 0) {
    lVar8 = param_1[7] + 0xd8;
    FUN_108271d4c(lVar8,auStack_f8,param_2,0);
    param_1[10] = lVar8;
    if (lVar8 != 0) {
      FUN_10826d1e4();
      param_1[0xf] = *(long *)(*(long *)(param_2 + 0x98) + 0x20);
      lVar8 = param_1[9];
      if (lVar8 == 0) {
        FUN_10826c2a4(param_1,param_1[10]);
        if (param_1[9] == 0) goto LAB_10826c1bc;
        FUN_1082681a4(param_1[7]);
        lStack_100 = *(long *)(param_1[8] + 0x10);
        if (lStack_100 != 0) {
          piVar1 = (int *)(lStack_100 + 8);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        uStack_108 = 0;
        FUN_108269080();
        FUN_10826b890(&lStack_100);
        FUN_108267bbc(&uStack_108);
        lVar8 = param_1[9];
      }
      uVar5 = *(undefined8 *)(param_1[10] + 8);
      FUN_10826adf8(uVar5);
      _objc_retainAutoreleasedReturnValue();
      FUN_10826ada0(lVar8,uVar5);
      func_0x00010826cf34();
      lVar8 = param_1[9];
      lVar2 = param_1[10];
      lVar11 = *(long *)(param_2 + 0x88);
      lVar6 = lVar11;
      FUN_10826c364(lVar11);
      FUN_10826d634(lVar2,lVar8,lVar11 + 0x84,lVar6);
      plVar7 = param_1;
      (**(code **)(*param_1 + 0x18))();
      if ((*(byte *)(plVar7[2] + 0x7d) >> 1 & 1) == 0) {
        uVar9 = (ulong)(*(byte *)(*(long *)(param_2 + 0x88) + 0x40) >> 2) & 1;
      }
      else {
        uVar9 = 1;
      }
      puVar10 = (undefined8 *)param_1[9];
      in_ZR = puVar10[0x31] == uVar9;
      if (!(bool)in_ZR) {
        func_0x00010c21a1a0(*puVar10);
        puVar10[0x31] = uVar9;
      }
      if ((*(byte *)(*(long *)(param_2 + 0x88) + 0x40) >> 5 & 1) == 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1[8] + 0x10) + 0xb0);
        FUN_10826d9d0(param_1[9],uVar5,(int)param_1[1],0,uVar5);
      }
      param_1[0xb] = *(long *)(&UNK_10df12218 + (ulong)*(byte *)(param_2 + 0xa0) * 8);
      func_0x00010838ed50(param_1 + 0xd,param_3);
      uVar5 = 1;
      goto LAB_10826c234;
    }
  }
LAB_10826c1bc:
  uVar5 = 0;
LAB_10826c234:
  func_0x00010826cfa4();
  func_0x00010826cfb0(uStack_58);
  if ((bool)in_ZR) {
    return uVar5;
  }
  ___stack_chk_fail();
  FUN_10826b890(&lStack_100);
  puVar10 = &uStack_108;
  FUN_108267bbc();
  func_0x00010826cfa4();
  func_0x00010826cf2c();
  uVar5 = puVar10[7];
  FUN_1082681a4();
  FUN_108266a6c();
  puVar10[9] = uVar5;
  uVar5 = puVar10[0xc];
  func_0x00010bf40cc0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010826cf3c();
  func_0x00010c1be600(uVar5);
  func_0x00010c2536a0(puVar10[0xc]);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be600();
  func_0x00010826cf3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return uVar5;
}



/* Entry: 10826c2a4; end: 10826c363;  */

void FUN_10826c2a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_1082681a4();
  FUN_108266a6c();
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf40cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010826cf3c();
  func_0x00010c1be600(uVar1);
  func_0x00010c2536a0(*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be600();
  func_0x00010826cf3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10826c364; end: 10826c393;  */

long FUN_10826c364(long param_1)

{
  int iVar1;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    return *(long *)(param_1 + 0x48);
  }
  if ((bRam0000000113826bf8 & 1) == 0) {
    iVar1 = 0x13826bf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113826bf0 = 0x74704002;
      ___cxa_guard_release(0x113826bf8);
    }
  }
  if ((bRam0000000113826c18 & 1) == 0) {
    iVar1 = 0x13826c18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam0000000113826c08 = 0x100000033;
      uRam0000000113826c10 = 0;
      ppuRam0000000113826c00 = &PTR_DAT_110a38308;
      uRam0000000113826c14 = uRam0000000113826bf0;
      ___cxa_guard_release(0x113826c18);
    }
  }
  return 0x113826c00;
}



/* Entry: 10826c394; end: 10826c3cf;  */

undefined8 FUN_10826c394(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10826d424(*(undefined8 *)(param_1 + 0x50),param_2,param_4,param_3);
  FUN_10826d7ec(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));
  return 1;
}



/* Entry: 10826c3d0; end: 10826c493;  */

void FUN_10826c3d0(float param_1,float param_2,float param_3,float param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *(undefined8 *)(param_5 + 0x60);
  func_0x00010bf40cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010826cf3c();
  func_0x00010c17c800((double)param_1,(double)param_2,(double)param_3,(double)param_4,uVar1);
  func_0x00010c1be600(uVar1,param_6,2);
  uVar2 = param_5;
  FUN_10826c494();
  if ((uVar2 & 1) == 0) {
    func_0x00010826cf80(param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10826c494; end: 10826c5f7;  */

bool FUN_10826c494(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uStack_50;
  ulong uStack_48;
  
  *(undefined8 *)(param_1 + 0x48) = 0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x40) + 0x18);
  if (lVar6 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x60);
    func_0x00010bf40cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar2;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar6;
    FUN_108269b88(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ecb40(lVar7);
    _objc_release(lVar2);
    func_0x00010c20c1c0(lVar7);
    func_0x00010c09aca0();
    if (lVar7 == 1) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x10);
      uVar5 = *(ulong *)(lVar7 + 0xb0) >> 0x20;
      uVar3 = (ulong)*(uint *)(param_1 + 8);
      FUN_10826c7b0(uVar3,uVar5,0);
      uVar8 = *(undefined8 *)(param_1 + 0x38);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      uStack_50 = uVar3;
      uStack_48 = uVar5;
      func_0x00010c2536a0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      FUN_10826aa90(uVar8,lVar7,lVar6,&uStack_50,uVar4);
      *(undefined8 *)(param_1 + 0x48) = uVar8;
      func_0x00010826cf34();
    }
    func_0x00010826cf44();
    bVar1 = *(long *)(param_1 + 0x48) != 0;
  }
  return bVar1;
}



/* Entry: 10826c5f8; end: 10826c6f7;  */

void FUN_10826c5f8(ulong param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [88];
  char cStack_50;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  (**(code **)(**(long **)(*(long *)(param_1 + 0x40) + 0x20) + 0x50))(auStack_a8);
  FUN_108283a78();
  if (cStack_50 == '\x01') {
    func_0x00010826cf54();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c2536a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3 == 0;
  func_0x00010c17c8c0();
  uVar5 = 2;
  func_0x00010c1be600(uVar2);
  uVar3 = param_1;
  FUN_10826c494();
  if ((uVar3 & 1) == 0) {
    func_0x00010826cf80();
    uVar3 = param_1;
  }
  func_0x00010826cf88();
  func_0x00010826cfb0(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    if (cStack_50 == '\x01') {
      func_0x00010826cf54();
    }
    func_0x00010826cf2c();
    FUN_1082a1288(param_2,uVar5,0);
    uVar4 = uVar3;
    FUN_10826c494();
    if ((uVar4 & 1) != 0) {
      return;
    }
    uVar2 = *(undefined8 *)(uVar3 + 0x38);
    FUN_1082681a4();
    FUN_108266a6c();
    *(undefined8 *)(uVar3 + 0x48) = uVar2;
    uVar2 = *(undefined8 *)(uVar3 + 0x60);
    func_0x00010bf40cc0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010826cf3c();
    func_0x00010c1be600(uVar2);
    func_0x00010c2536a0(*(undefined8 *)(uVar3 + 0x60));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1be600();
    func_0x00010826cf3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10826c6f8; end: 10826c7af;  */

void FUN_10826c6f8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  FUN_1082a1288(param_2,param_3,0);
  uVar2 = param_1;
  FUN_10826c494();
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  FUN_1082681a4();
  FUN_108266a6c();
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf40cc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010826cf3c();
  func_0x00010c1be600(uVar1);
  func_0x00010c2536a0(*(undefined8 *)(param_1 + 0x60));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1be600();
  func_0x00010826cf3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10826c7b0; end: 10826c7d7;  */

void FUN_10826c7b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10826ce74();
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010826cea0(&uStack_20);
  return;
}



/* Entry: 10826c7d8; end: 10826c937;  */

void FUN_10826c7d8(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (*param_4 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1 + 0x20;
    FUN_10826c938(lVar1,param_4);
    func_0x00010826cf90();
    plStack_48 = *(long **)(param_1 + 0x20);
    if (plStack_48 != (long *)0x0) {
      (**(code **)(*plStack_48 + 0x10))(plStack_48);
    }
    FUN_108264668(lVar1 + 0x220,&plStack_48);
    FUN_1082647e4(&plStack_48);
    uVar2 = 1;
  }
  if (*param_3 != 0) {
    FUN_10826c978(*(undefined8 *)(param_1 + 0x48),*param_3,0,uVar2);
    lVar1 = param_1 + 0x28;
    FUN_10826c938(lVar1,param_3);
    func_0x00010826cf90();
    plStack_50 = *(long **)(param_1 + 0x28);
    if (plStack_50 != (long *)0x0) {
      (**(code **)(*plStack_50 + 0x10))(plStack_50);
    }
    FUN_108264668(lVar1 + 0x220,&plStack_50);
    FUN_1082647e4(&plStack_50);
  }
  if (*param_2 != 0) {
    lVar1 = param_1 + 0x18;
    FUN_10826c938(lVar1,param_2);
    func_0x00010826cf90();
    plStack_58 = *(long **)(param_1 + 0x18);
    if (plStack_58 != (long *)0x0) {
      (**(code **)(*plStack_58 + 0x10))(plStack_58);
    }
    FUN_108264668(lVar1 + 0x220,&plStack_58);
    FUN_1082647e4(&plStack_58);
  }
  return;
}



/* Entry: 10826c938; end: 10826c977;  */

long * FUN_10826c938(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  plVar1 = (long *)*param_1;
  *param_1 = lVar2;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  return param_1;
}



/* Entry: 10826c978; end: 10826c9df;  */

void FUN_10826c978(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  if (param_2 != 0) {
    param_2 = param_2 + -0xb0;
    FUN_1082643a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_10826cd58(param_1,param_2,param_3,param_4 + 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 10826c9e0; end: 10826ca1f;  */

void FUN_10826c9e0(undefined8 param_1,int param_2,int param_3)

{
  long unaff_x21;
  
  FUN_10826cef4();
                    /* WARNING: Could not recover jumptable at 0x00010bf89b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (**(undefined8 **)(unaff_x21 + 0x48),PTR_s_drawPrimitives_vertexStart_verte_1125c0068,
             *(undefined8 *)(unaff_x21 + 0x58),(long)param_3,(long)param_2);
  return;
}



/* Entry: 10826ca20; end: 10826cab3;  */

void FUN_10826ca20(long param_1)

{
  long lVar1;
  int in_w5;
  
  FUN_10826c978(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20),
                *(long *)(param_1 + 0x78) * (long)in_w5,0);
  lVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x18) + -0xb0;
  }
  FUN_1082643a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf89980(**(undefined8 **)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10826cab4; end: 10826cb17;  */

void FUN_10826cab4(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  func_0x00010826cf0c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bf89b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (**(undefined8 **)(param_1 + 0x48),PTR_s_drawPrimitives_vertexStart_verte_1125c0078,
             *(undefined8 *)(param_1 + 0x58),(long)param_5,(long)param_4,(long)param_2,(long)param_3
            );
  return;
}



/* Entry: 10826cb18; end: 10826cbdf;  */

void FUN_10826cb18(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  func_0x00010826cf0c(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x20));
  lVar1 = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(param_1 + 0x18) + -0xb0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x48);
  FUN_1082643a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf899c0(*puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10826cbe0; end: 10826cc7b;  */

void FUN_10826cbe0(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long unaff_x21;
  undefined8 *puVar2;
  
  FUN_10826cef4();
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + -0xb0;
  }
  while (0 < param_4) {
    puVar2 = *(undefined8 **)(unaff_x21 + 0x48);
    FUN_1082643a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf89ae0(*puVar2);
    func_0x00010826cf34();
    param_4 = param_4 + -1;
  }
  return;
}



/* Entry: 10826cc7c; end: 10826cd57;  */

void FUN_10826cc7c(undefined8 param_1,long param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  undefined8 *puVar3;
  
  FUN_10826cef4();
  lVar1 = 0;
  if (*(long *)(unaff_x21 + 0x18) != 0) {
    lVar1 = *(long *)(unaff_x21 + 0x18) + -0xb0;
  }
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + -0xb0;
  }
  while (0 < param_4) {
    puVar3 = *(undefined8 **)(unaff_x21 + 0x48);
    FUN_1082643a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1082643a0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf899e0(*puVar3);
    func_0x00010826cf68();
    func_0x00010826cf4c();
    param_4 = param_4 + -1;
  }
  return;
}



/* Entry: 10826cd58; end: 10826ce17;  */

void FUN_10826cd58(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + param_4 + 3;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 == param_2) {
    if (param_1[param_4 + 6] != param_3) {
      func_0x00010c220f20(*param_1,param_3,param_3,param_4);
      param_1[param_4 + 6] = param_3;
    }
    return;
  }
  puVar1 = param_1 + param_4 + 3;
  _objc_loadWeakRetained();
  if (puVar1 == param_2) {
    lVar2 = param_1[param_4 + 6];
    _objc_release();
    if (lVar2 == param_3) {
      return;
    }
  }
  else {
    _objc_release();
  }
  func_0x00010c220f00(*param_1);
  _objc_storeWeak(param_1 + param_4 + 3,param_2);
  param_1[param_4 + 6] = param_3;
  return;
}



/* Entry: 10826ce18; end: 10826ce33;  */

undefined8 FUN_10826ce18(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10826ce34; end: 10826ce73;  */

void FUN_10826ce34(void)

{
  code *pcVar1;
  
  func_0x00010826cf70(&UNK_10f48046e);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10826ce54);
  (*pcVar1)();
}



/* Entry: 10826ce74; end: 10826ceaf;  */

undefined1  [16] FUN_10826ce74(int param_1,int param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  iVar2 = (int)((ulong)param_4 >> 0x20);
  uVar3 = (uint)(param_3 >> 0x20);
  uVar1 = param_2 - iVar2;
  if (param_1 != 1) {
    uVar1 = uVar3;
  }
  auVar4._12_4_ = iVar2 - uVar3;
  auVar4._8_4_ = (int)param_4 - (int)param_3;
  auVar4._0_8_ = param_3 & 0xffffffff | (ulong)uVar1 << 0x20;
  return auVar4;
}



/* Entry: 10826ceb0; end: 10826cef3;  */

void FUN_10826ceb0(undefined8 *param_1,long param_2,long param_3)

{
  if (param_1[param_3 + 6] != param_2) {
    func_0x00010c220f20(*param_1,param_2,param_2,param_3);
    param_1[param_3 + 6] = param_2;
  }
  return;
}



/* Entry: 10826cef4; end: 10826cfc3;  */

void FUN_10826cef4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = *(long *)(param_1 + 0x20) + -0xb0;
    FUN_1082643a0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10826cd58(uVar2,lVar1,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10826cfc4; end: 10826d0cb;  */

long * FUN_10826cfc4(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_4;
  FUN_108268418();
  _objc_retainAutoreleasedReturnValue();
  param_1[1] = lVar1;
  lVar1 = param_5 + 0xd8;
  func_0x000108271f2c(lVar1,param_2,param_3);
  *param_1 = lVar1;
  FUN_1082681a4(param_5);
  uStack_48 = 0;
  if (*param_1 != 0) {
    do {
      func_0x00010826e334();
      uStack_48 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  uStack_50 = 0;
  FUN_1082673d4(&uStack_48);
  FUN_10826ddb4(&uStack_50);
  FUN_1082681a4(param_5);
  uStack_58 = 0;
  if (*(long *)(param_4 + 0x18) != 0) {
    do {
      func_0x00010826e334();
      uStack_58 = extraout_x8_00;
    } while (extraout_w11_00 != 0);
  }
  uStack_48 = 0;
  FUN_108269080();
  FUN_10826b890(&uStack_58);
  FUN_10826b5e8(&uStack_48);
  return param_1;
}



/* Entry: 10826d0cc; end: 10826d1e3;  */

undefined8 *
FUN_10826d0cc(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 *param_9,undefined8 *param_10,undefined8 *param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[1] = uVar1;
  param_1[2] = param_4;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  uVar1 = *param_5;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  param_1[0xb] = 0x100000000;
  uVar2 = *param_9;
  *param_9 = 0;
  uVar1 = *param_10;
  *param_10 = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1f;
  *(undefined4 *)(param_1 + 9) = param_8;
  param_1[10] = 0;
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  uVar1 = *param_11;
  param_1[0xf] = param_11[1];
  param_1[0xe] = uVar1;
  param_1[0x10] = param_11[2];
  *param_11 = 0;
  param_11[1] = 0;
  param_11[2] = 0;
  FUN_108270b8c(param_1 + 0x11,param_6,param_7);
  return param_1;
}



/* Entry: 10826d1e4; end: 10826d34f;  */

void FUN_10826d1e4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  long *param_5,long param_6,long param_7)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined **extraout_x8;
  undefined **ppuVar8;
  int extraout_w11;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined **ppuStack_a0;
  long *plStack_98;
  long lStack_90;
  undefined ***pppuStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined **ppuStack_68;
  long *plStack_60;
  undefined ***pppuStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10826d350(param_5,*(undefined8 *)(*(long *)(param_6 + 0x10) + 0xb0),
                *(undefined4 *)(param_7 + 0x78));
  (**(code **)(*(long *)param_5[0xc] + 0x10))
            ((long *)param_5[0xc],param_5 + 0x11,*(undefined8 *)(*(long *)(*param_5 + 0x10) + 0x10),
             *(undefined8 *)(param_7 + 0x98));
  lVar10 = 0;
  while( true ) {
    lVar2 = *(long *)(param_7 + 0x88);
    uVar1 = lVar10 == *(int *)(lVar2 + 0x78);
    if (*(int *)(lVar2 + 0x78) <= lVar10) break;
    ppuStack_68 = &PTR_FUN_110a33400;
    plStack_60 = param_5;
    pppuStack_50 = &ppuStack_68;
    func_0x00010829610c(*(undefined8 *)(*(long *)(lVar2 + 0x50) + lVar10 * 8),&ppuStack_68,
                        *(undefined8 *)(param_5[0xe] + lVar10 * 8));
    FUN_10826df70(&ppuStack_68);
    lVar10 = lVar10 + 1;
  }
  func_0x0001082a3468(lVar2,param_5 + 0x11,(long)param_5 + 0x24);
  plVar11 = (long *)param_5[0xd];
  uVar3 = *(undefined8 *)(param_7 + 0x88);
  FUN_10826c364();
  (**(code **)(*plVar11 + 0x28))(plVar11,param_5 + 0x11);
  *(undefined1 *)(param_5 + 0x17) = 1;
  FUN_1082a4964(&ppuStack_68,param_7);
  pppuVar6 = &ppuStack_68;
  func_0x0001082b10dc(param_5 + 6);
  FUN_1082681a4(*param_5);
  uVar13 = (undefined4)param_3;
  uVar12 = (undefined4)param_1;
  iVar7 = (int)uVar3;
  ppuVar8 = (undefined **)0x0;
  if (param_5[1] != 0) {
    do {
      func_0x00010826e334();
      uVar13 = (undefined4)param_3;
      uVar12 = (undefined4)param_1;
      iVar7 = (int)uVar3;
      ppuVar8 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  pppuVar4 = &ppuStack_68;
  ppuStack_68 = ppuVar8;
  FUN_1082673d4();
  func_0x00010826e3d4(uStack_48);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    pppuVar5 = pppuVar4;
    func_0x00010826e2b4();
    ppuStack_a0 = &PTR_FUN_110a33400;
    pcStack_78 = FUN_10826d350;
    iVar9 = (int)((ulong)pppuVar6 >> 0x20);
    if ((*(int *)(pppuVar5 + 4) != iVar7) ||
       (*(int *)(pppuVar5 + 3) != (int)pppuVar6 || *(int *)((long)pppuVar5 + 0x1c) != iVar9)) {
      plStack_98 = plVar11;
      lStack_90 = param_7;
      pppuStack_88 = pppuVar4;
      puStack_80 = &stack0xfffffffffffffff0;
      pppuVar5[3] = (undefined **)pppuVar6;
      *(int *)(pppuVar5 + 4) = iVar7;
      FUN_10826d8e8(pppuVar6,iVar7 == 0);
      uStack_b0 = uVar12;
      uStack_ac = param_2;
      uStack_a8 = uVar13;
      uStack_a4 = param_4;
      FUN_1082b6150(pppuVar5 + 0x11,*(undefined4 *)((long)pppuVar5 + 0x24),1,&uStack_b0);
      if (*(int *)(pppuVar5 + 5) != -1) {
        uVar3 = NEON_fmov(0xbf800000,4);
        uStack_b8 = (CONCAT44((int)((ulong)uVar3 >> 0x20),(float)iVar9) ^ 0x3f80000000000000) &
                    ~CONCAT44(-(uint)((int)((uint)(iVar7 == 0) << 0x1f) < 0),
                              -(uint)((int)((uint)(iVar7 == 0) << 0x1f) < 0)) ^ 0x3f80000000000000;
        func_0x000108270dd4(pppuVar5 + 0x11,*(int *)(pppuVar5 + 5),1,&uStack_b8);
      }
    }
    return;
  }
  return;
}



/* Entry: 10826d350; end: 10826d423;  */

void FUN_10826d350(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  undefined8 uVar2;
  ulong uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar1 = (int)((ulong)param_6 >> 0x20);
  if ((*(int *)(param_5 + 0x20) != param_7) ||
     (*(int *)(param_5 + 0x18) != (int)param_6 || *(int *)(param_5 + 0x1c) != iVar1)) {
    *(undefined8 *)(param_5 + 0x18) = param_6;
    *(int *)(param_5 + 0x20) = param_7;
    uStack_40 = param_1;
    uStack_38 = param_3;
    FUN_10826d8e8(param_6,param_7 == 0);
    uStack_3c = param_2;
    uStack_34 = param_4;
    FUN_1082b6150(param_5 + 0x88,*(undefined4 *)(param_5 + 0x24),1,&uStack_40);
    if (*(int *)(param_5 + 0x28) != -1) {
      uVar2 = NEON_fmov(0xbf800000,4);
      uStack_48 = (CONCAT44((int)((ulong)uVar2 >> 0x20),(float)iVar1) ^ 0x3f80000000000000) &
                  ~CONCAT44(-(uint)((int)((uint)(param_7 == 0) << 0x1f) < 0),
                            -(uint)((int)((uint)(param_7 == 0) << 0x1f) < 0)) ^ 0x3f80000000000000;
      func_0x000108270dd4(param_5 + 0x88,*(int *)(param_5 + 0x28),1,&uStack_48);
    }
  }
  return;
}



/* Entry: 10826d424; end: 10826d57b;  */

void FUN_10826d424(long param_1,long *param_2,long *param_3,long param_4)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined ***pppuVar5;
  long lVar6;
  long *plStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined ***pppuStack_58;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10826d57c(param_1 + 0x50);
  for (lVar6 = 0; uVar1 = lVar6 == (int)param_2[8], lVar6 < (int)param_2[8]; lVar6 = lVar6 + 1) {
    plVar2 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2,lVar6);
    plVar3 = *(long **)(*(long *)(param_4 + lVar6 * 8) + 0x10);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x58))();
    }
    lStack_68 = plVar2[1];
    ppuStack_70 = (undefined **)*plVar2;
    plStack_78 = plVar3;
    FUN_10826d59c(param_1 + 0x50,&ppuStack_70,&plStack_78,param_1);
  }
  ppuVar4 = (undefined **)*param_3;
  if ((ppuVar4 != (undefined **)0x0) &&
     ((**(code **)(*ppuVar4 + 0x18))(), ppuVar4 != (undefined **)0x0)) {
    plStack_78 = (long *)((ulong)plStack_78 & 0xffffffff00000000);
    func_0x00010826e398();
    if (ppuVar4 != (undefined **)0x0) {
      (**(code **)(*ppuVar4 + 0x58))();
    }
    ppuStack_70 = ppuVar4;
    func_0x00010826d5e8(param_1 + 0x50,&plStack_78,&ppuStack_70,param_1);
  }
  ppuStack_70 = &PTR_FUN_110a33490;
  pppuStack_58 = &ppuStack_70;
  lStack_68 = param_1;
  FUN_1082a33c0(param_3,&ppuStack_70);
  FUN_10826e20c();
  func_0x00010826e3d4(uStack_48);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  pppuVar5 = &ppuStack_70;
  FUN_10826e20c();
  func_0x00010826e2b4();
  FUN_10826de14();
  *(undefined4 *)(pppuVar5 + 1) = 0;
  return;
}



/* Entry: 10826d57c; end: 10826d59b;  */

void FUN_10826d57c(long param_1)

{
  FUN_10826de14();
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 10826d59c; end: 10826d633;  */

void FUN_10826d59c(void)

{
  char in_NG;
  char in_OV;
  
  func_0x00010826e2e4();
  if (in_NG == in_OV) {
    func_0x00010826e324();
    func_0x00010826e3c0();
    func_0x00010826e2d0();
    func_0x00010826e314();
  }
  else {
    func_0x00010826e2d0();
  }
  func_0x00010826e3ac();
  return;
}



/* Entry: 10826d634; end: 10826d67f;  */

void FUN_10826d634(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  FUN_10826d680();
  FUN_10826d68c();
  lVar4 = *param_1 + 0xd8;
  FUN_108271eb0(lVar4,param_1 + 6,(int)param_1[4]);
  if ((*(uint *)(param_1 + 6) & 1) == 0) {
    if ((*(uint *)(param_1 + 6) >> 4 & 1) == 0) {
      func_0x00010c20a5e0(*param_2);
    }
    else {
      func_0x00010c20a600(*param_2);
    }
  }
  lVar5 = lVar4;
  FUN_10826d9b0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10826d958(param_2,lVar5);
  func_0x00010826e298();
  FUN_1082681a4(*param_1);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_40 = 0;
  lStack_38 = lVar4;
  FUN_1082673d4(&lStack_38);
  FUN_10826ddb4(&uStack_40);
  return;
}



/* Entry: 10826d680; end: 10826d68b;  */

void FUN_10826d680(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  plVar3 = (long *)*param_1;
  uVar1 = *(uint *)(param_1 + 0x12);
  if ((uVar1 != 0) && ((char)param_1[0x17] == '\x01')) {
    *(undefined1 *)(param_1 + 0x17) = 0;
    if (*(uint *)(plVar3[2] + 0x48) < uVar1) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar4 = (ulong)*(uint *)(param_1 + 0x12);
      FUN_1082afe88();
      plVar2 = plVar3;
      FUN_1082a0214();
      _memcpy((long)plVar2 + uVar4,param_1[0x15],(int)param_1[0x12]);
      plVar2 = plVar3;
      FUN_1082643a0(plVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271154();
      FUN_10826cd58();
      _objc_release(plVar2);
      FUN_1082643a0(plVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108271154();
      FUN_108270f64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(plVar3);
      return;
    }
    func_0x00010c220f40(*param_2,plVar3,param_1[0x15],uVar1,0);
                    /* WARNING: Could not recover jumptable at 0x00010c19f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*param_2,PTR_s_setFragmentBytes_length_atIndex__112645630,param_1[0x15],
               (int)param_1[0x12],0);
    return;
  }
  return;
}



/* Entry: 10826d68c; end: 10826d6f7;  */

void FUN_10826d68c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_38;
  byte bStack_37;
  byte bStack_36;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if ((param_2 != (undefined8 *)0x0) &&
     (func_0x00010826d91c(&uStack_38,param_4), (bStack_37 & 0xfe) == 10 || (bStack_36 & 0xfe) == 10)
     ) {
    func_0x00010826d954(uStack_34,uStack_30,uStack_2c,uStack_28,param_3);
    func_0x00010c171980(*param_2);
  }
  return;
}



/* Entry: 10826d6f8; end: 10826d7eb;  */

void FUN_10826d6f8(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar4 = *param_1 + 0xd8;
  FUN_108271eb0(lVar4,param_1 + 6,(int)param_1[4]);
  if ((*(uint *)(param_1 + 6) & 1) == 0) {
    if ((*(uint *)(param_1 + 6) >> 4 & 1) == 0) {
      func_0x00010c20a5e0(*param_2);
    }
    else {
      func_0x00010c20a600(*param_2);
    }
  }
  lVar5 = lVar4;
  FUN_10826d9b0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10826d958(param_2,lVar5);
  func_0x00010826e298();
  FUN_1082681a4(*param_1);
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_40 = 0;
  lStack_38 = lVar4;
  FUN_1082673d4(&lStack_38);
  FUN_10826ddb4(&uStack_40);
  return;
}



/* Entry: 10826d7ec; end: 10826d86f;  */

void FUN_10826d7ec(void)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x00010826e354();
  lVar2 = 0;
  while( true ) {
    if (*(int *)(unaff_x20 + 0x48) <= lVar2) {
      return;
    }
    if ((*(int *)(unaff_x20 + 0x58) <= lVar2) ||
       (FUN_10826ae1c(), *(int *)(unaff_x20 + 0x58) <= lVar2)) break;
    FUN_10826d870();
    lVar2 = lVar2 + 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10826d870);
  (*pcVar1)();
}



/* Entry: 10826d870; end: 10826d8e7;  */

void FUN_10826d870(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1[param_3 + 0x1d] != param_2) {
    uVar2 = *param_1;
    lVar1 = param_2;
    func_0x00010826dccc(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0a0(uVar2);
    _objc_release(lVar1);
    param_1[param_3 + 0x1d] = param_2;
  }
  return;
}



/* Entry: 10826d8e8; end: 10826d957;  */

float FUN_10826d8e8(int param_1)

{
  return 2.0 / (float)param_1;
}



/* Entry: 10826d958; end: 10826d9af;  */

void FUN_10826d958(long param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010826e354();
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  _objc_release();
  if (unaff_x19 != param_1) {
    func_0x00010c18bf80(*unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeWeak_11034d338)(unaff_x20 + 2);
    return;
  }
  return;
}



/* Entry: 10826d9b0; end: 10826d9cf;  */

void FUN_10826d9b0(void)

{
  func_0x00010826e380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10826d9d0; end: 10826da8b;  */

void FUN_10826d9d0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lStack_60 = 0;
  puVar1 = &uStack_40;
  lStack_58 = param_2;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x00010821b838(puVar1,&lStack_60);
  if ((int)puVar1 == 0) {
    uStack_38._0_4_ = 0;
    uStack_40._0_4_ = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  else {
  }
  lStack_60 = (long)(int)uStack_40;
  lStack_50 = (long)((int)uStack_38 - (int)uStack_40);
  iVar2 = uStack_40._4_4_;
  if (param_3 != 0) {
    iVar2 = (int)((ulong)param_2 >> 0x20) - uStack_38._4_4_;
  }
  lStack_58 = (long)iVar2;
  lStack_48 = (long)(uStack_38._4_4_ - uStack_40._4_4_);
  FUN_10826da8c(param_1,&lStack_60);
  return;
}



/* Entry: 10826da8c; end: 10826db0f;  */

void FUN_10826da8c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  
  if ((((param_1[0x2d] != *param_2) || (param_1[0x2e] != param_2[1])) ||
      (param_1[0x2f] != param_2[2])) || (param_1[0x30] != param_2[3])) {
    lStack_38 = param_2[1];
    lStack_40 = *param_2;
    lStack_28 = param_2[3];
    lStack_30 = param_2[2];
    func_0x00010c1f69a0(*param_1,param_2,&lStack_40);
    lVar1 = *param_2;
    lVar3 = param_2[3];
    lVar2 = param_2[2];
    param_1[0x2e] = param_2[1];
    param_1[0x2d] = lVar1;
    param_1[0x30] = lVar3;
    param_1[0x2f] = lVar2;
  }
  return;
}



/* Entry: 10826db10; end: 10826dbfb;  */

bool FUN_10826db10(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  
  func_0x00010826e354();
  lVar5 = -1;
  lVar6 = 8;
  while( true ) {
    lVar1 = lVar5 + 1;
    lVar4 = (long)*(int *)(unaff_x20 + 0x58);
    if (lVar4 <= lVar1) {
      return lVar4 <= lVar1;
    }
    lVar3 = unaff_x19;
    func_0x00010c26ce20();
    _objc_retainAutoreleasedReturnValue();
    if (*(int *)(unaff_x20 + 0x58) <= lVar1) break;
    if (lVar3 == *(long *)(*(long *)(unaff_x20 + 0x50) + lVar6)) {
      func_0x00010826e298();
      return false;
    }
    lVar3 = unaff_x19;
    func_0x00010c13ae60();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar5 + 1;
    if (*(int *)(unaff_x20 + 0x58) <= lVar5) break;
    lVar7 = *(long *)(*(long *)(unaff_x20 + 0x50) + lVar6);
    _objc_release();
    func_0x00010826e298();
    lVar6 = lVar6 + 0x10;
    if (lVar3 == lVar7) {
      return lVar4 <= lVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10826dbf0);
  (*pcVar2)();
}



/* Entry: 10826dbfc; end: 10826dc6b;  */

undefined8 FUN_10826dbfc(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010826dc30(&uStack_28);
  return param_1;
}



/* Entry: 10826dc6c; end: 10826dc73;  */

void FUN_10826dc6c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010826e354(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010826dca8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10826dc74; end: 10826dceb;  */

void FUN_10826dc74(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010826e354();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -8;
    func_0x00010826dca8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10826dcec; end: 10826dd73;  */

undefined8 FUN_10826dcec(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  
  uVar1 = *param_2;
  FUN_10826dd74(uVar1 & 0xf);
  FUN_10826e248(uVar1 >> 4 & 0xf);
  FUN_10826e248(uVar1 >> 8 & 0xf);
  FUN_10826e248(uVar1 >> 0xc);
  return param_1;
}



/* Entry: 10826dd74; end: 10826ddb3;  */

undefined4
FUN_10826dd74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             ulong param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 auStack_10 [4];
  
  auStack_10[0] = param_1;
  auStack_10[1] = param_2;
  auStack_10[2] = param_3;
  auStack_10[3] = param_4;
  if (param_5 < 4) {
    uVar2 = auStack_10[param_5];
  }
  else if (param_5 == 4) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f800000;
    if (param_5 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10826dda8);
      (*pcVar1)();
    }
  }
  return uVar2;
}



/* Entry: 10826ddb4; end: 10826dddf;  */

long * FUN_10826ddb4(long *param_1)

{
  if (*param_1 != 0) {
    FUN_108267400();
  }
  return param_1;
}



/* Entry: 10826dde0; end: 10826de13;  */

undefined8 * FUN_10826dde0(undefined8 *param_1)

{
  FUN_10826de14();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  return param_1;
}



/* Entry: 10826de14; end: 10826deb7;  */

void FUN_10826de14(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 0x10;
    do {
      func_0x00010826de4c();
      uVar2 = uVar2 + 0x10;
    } while (uVar2 < uVar1);
  }
  return;
}



/* Entry: 10826deb8; end: 10826debf;  */

void FUN_10826deb8(void)

{
  return;
}



/* Entry: 10826dec0; end: 10826dee7;  */

void FUN_10826dec0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010826e374();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a33400;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10826dee8; end: 10826df2b;  */

void FUN_10826dee8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a33400;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10826df2c; end: 10826df63;  */

long FUN_10826df2c(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a33470);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10826df64; end: 10826df6f;  */

undefined ** FUN_10826df64(void)

{
  return &PTR_DAT_110a33470;
}



/* Entry: 10826df70; end: 10826dfab;  */

long FUN_10826df70(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010826e38c(uVar1);
  return param_1;
}



/* Entry: 10826dfac; end: 10826dfcf;  */

void FUN_10826dfac(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if ((int)param_2 <= (int)(*(uint *)(param_1 + 1) ^ 0x7fffffff)) {
    pcStack_18 = (code *)0x7fffffff;
    puStack_20 = (undefined1 *)0x10;
    FUN_10840fe24(&puStack_20,*(uint *)(param_1 + 1) + (int)param_2);
    return;
  }
  func_0x00010bdb1a68();
  pcStack_18 = FUN_10826dfd0;
  puStack_20 = &stack0xfffffffffffffff0;
  FUN_10826e058();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10826dfd0; end: 10826e027;  */

void FUN_10826dfd0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  FUN_10826e058();
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 4;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 10826e028; end: 10826e057;  */

void FUN_10826e028(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x7fffffff;
  uStack_20 = 0x10;
  FUN_10840fe24(&uStack_20,param_1);
  return;
}



/* Entry: 10826e058; end: 10826e0ab;  */

void FUN_10826e058(void)

{
  undefined8 *puVar1;
  long unaff_x19;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010826e354();
  lVar2 = 0;
  for (lVar3 = 0; lVar3 < (int)unaff_x20[1]; lVar3 = lVar3 + 1) {
    puVar1 = (undefined8 *)(*unaff_x20 + lVar2);
    uVar5 = puVar1[1];
    uVar4 = *puVar1;
    puVar1[1] = 0;
    ((undefined8 *)(unaff_x19 + lVar2))[1] = uVar5;
    *(undefined8 *)(unaff_x19 + lVar2) = uVar4;
    func_0x00010826de4c();
    lVar2 = lVar2 + 0x10;
  }
  return;
}



/* Entry: 10826e0ac; end: 10826e0b3;  */

void FUN_10826e0ac(void)

{
  return;
}



/* Entry: 10826e0b4; end: 10826e0db;  */

void FUN_10826e0b4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  
  func_0x00010826e374();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  *param_1 = &PTR_FUN_110a33490;
  param_1[1] = uVar1;
  return;
}



/* Entry: 10826e0dc; end: 10826e0ff;  */

void FUN_10826e0dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a33490;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10826e100; end: 10826e18f;  */

void FUN_10826e100(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  FUN_10826e1d4(param_2);
  if (*(int *)(lVar3 + 0x58) < (int)(*(uint *)(lVar3 + 0x5c) >> 1)) {
    func_0x00010826e2bc(*(long *)(lVar3 + 0x50) + (long)*(int *)(lVar3 + 0x58) * 0x10);
  }
  else {
    lVar1 = lVar3 + 0x50;
    uVar2 = 1;
    FUN_10826dfac(0x3ff8000000000000,lVar1,1);
    func_0x00010826e2bc(lVar1 + (long)*(int *)(lVar3 + 0x58) * 0x10);
    FUN_10826dfd0(lVar3 + 0x50,lVar1,uVar2);
  }
  *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + 1;
  return;
}



/* Entry: 10826e190; end: 10826e1c7;  */

long FUN_10826e190(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110a334f0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10826e1c8; end: 10826e1d3;  */

undefined ** FUN_10826e1c8(void)

{
  return &PTR_DAT_110a334f0;
}



/* Entry: 10826e1d4; end: 10826e20b;  */

void FUN_10826e1d4(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar1 + 0x18))();
  func_0x00010826e398();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010826e200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x58))();
    return;
  }
  return;
}



/* Entry: 10826e20c; end: 10826e247;  */

long FUN_10826e20c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010826e38c(uVar1);
  return param_1;
}



/* Entry: 10826e248; end: 10826e3e7;  */

undefined4 FUN_10826e248(ulong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 auStack_10 [4];
  
  if (param_1 < 4) {
    uVar2 = auStack_10[param_1];
  }
  else if (param_1 == 4) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f800000;
    if (param_1 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10826dda8);
      (*pcVar1)();
    }
  }
  return uVar2;
}



/* Entry: 10826e3e8; end: 10826e4cf;  */

/* WARNING: Possible PIC construction at 0x00010826e46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010826e470) */
/* WARNING: Removing unreachable block (ram,0x00010826e4a0) */
/* WARNING: Removing unreachable block (ram,0x00010826e4c0) */
/* WARNING: Removing unreachable block (ram,0x00010826e518) */
/* WARNING: Removing unreachable block (ram,0x00010826e56c) */
/* WARNING: Removing unreachable block (ram,0x00010826e5b8) */
/* WARNING: Removing unreachable block (ram,0x00010826e51c) */
/* WARNING: Removing unreachable block (ram,0x00010826e570) */
/* WARNING: Removing unreachable block (ram,0x00010826e564) */
/* WARNING: Removing unreachable block (ram,0x00010826e5bc) */
/* WARNING: Removing unreachable block (ram,0x00010826e5e8) */
/* WARNING: Removing unreachable block (ram,0x00010826e5f4) */
/* WARNING: Removing unreachable block (ram,0x00010826e5fc) */
/* WARNING: Removing unreachable block (ram,0x00010826e60c) */
/* WARNING: Removing unreachable block (ram,0x00010826e624) */
/* WARNING: Removing unreachable block (ram,0x00010826e634) */
/* WARNING: Removing unreachable block (ram,0x00010826e65c) */
/* WARNING: Removing unreachable block (ram,0x00010826e6fc) */
/* WARNING: Removing unreachable block (ram,0x00010826e704) */
/* WARNING: Removing unreachable block (ram,0x00010826e758) */
/* WARNING: Removing unreachable block (ram,0x00010826e764) */
/* WARNING: Removing unreachable block (ram,0x00010826e768) */
/* WARNING: Removing unreachable block (ram,0x00010826e770) */
/* WARNING: Removing unreachable block (ram,0x00010826e778) */
/* WARNING: Removing unreachable block (ram,0x00010826e784) */
/* WARNING: Removing unreachable block (ram,0x00010826e81c) */
/* WARNING: Removing unreachable block (ram,0x00010826e820) */
/* WARNING: Removing unreachable block (ram,0x00010826e860) */
/* WARNING: Removing unreachable block (ram,0x00010826e86c) */
/* WARNING: Removing unreachable block (ram,0x00010826e870) */
/* WARNING: Removing unreachable block (ram,0x00010826e89c) */
/* WARNING: Removing unreachable block (ram,0x00010826e8a4) */
/* WARNING: Removing unreachable block (ram,0x00010826e8c4) */
/* WARNING: Removing unreachable block (ram,0x00010826e8cc) */
/* WARNING: Removing unreachable block (ram,0x00010826e8ec) */
/* WARNING: Removing unreachable block (ram,0x00010826e8f0) */
/* WARNING: Removing unreachable block (ram,0x00010826e8f4) */
/* WARNING: Removing unreachable block (ram,0x00010826e908) */
/* WARNING: Removing unreachable block (ram,0x00010826e91c) */
/* WARNING: Removing unreachable block (ram,0x00010826e920) */
/* WARNING: Removing unreachable block (ram,0x00010826e998) */
/* WARNING: Removing unreachable block (ram,0x00010826ea10) */
/* WARNING: Removing unreachable block (ram,0x00010826ea1c) */
/* WARNING: Removing unreachable block (ram,0x00010826ea2c) */
/* WARNING: Removing unreachable block (ram,0x00010826ea3c) */
/* WARNING: Removing unreachable block (ram,0x00010826eaa0) */
/* WARNING: Removing unreachable block (ram,0x00010826eab4) */
/* WARNING: Removing unreachable block (ram,0x00010826eb0c) */
/* WARNING: Removing unreachable block (ram,0x00010826ebd4) */
/* WARNING: Removing unreachable block (ram,0x00010826eba4) */
/* WARNING: Removing unreachable block (ram,0x00010826ebac) */
/* WARNING: Removing unreachable block (ram,0x00010826ebd8) */
/* WARNING: Removing unreachable block (ram,0x00010826ebf0) */
/* WARNING: Removing unreachable block (ram,0x00010826ec08) */
/* WARNING: Removing unreachable block (ram,0x00010826ec7c) */
/* WARNING: Removing unreachable block (ram,0x00010826ec18) */
/* WARNING: Removing unreachable block (ram,0x00010826ec28) */
/* WARNING: Removing unreachable block (ram,0x00010826ec40) */
/* WARNING: Removing unreachable block (ram,0x00010826ec50) */
/* WARNING: Removing unreachable block (ram,0x00010826ec8c) */
/* WARNING: Removing unreachable block (ram,0x00010826ec74) */
/* WARNING: Removing unreachable block (ram,0x00010826ec90) */
/* WARNING: Removing unreachable block (ram,0x00010826ec98) */
/* WARNING: Removing unreachable block (ram,0x00010826ecac) */
/* WARNING: Removing unreachable block (ram,0x00010826ecb0) */
/* WARNING: Removing unreachable block (ram,0x00010826ecc0) */
/* WARNING: Removing unreachable block (ram,0x00010826ece4) */
/* WARNING: Removing unreachable block (ram,0x00010826ecf8) */
/* WARNING: Removing unreachable block (ram,0x00010826ecc8) */
/* WARNING: Removing unreachable block (ram,0x00010826ecd8) */
/* WARNING: Removing unreachable block (ram,0x00010826ed04) */
/* WARNING: Removing unreachable block (ram,0x00010826ed0c) */
/* WARNING: Removing unreachable block (ram,0x00010826ed14) */
/* WARNING: Removing unreachable block (ram,0x00010826edb0) */
/* WARNING: Removing unreachable block (ram,0x00010826ed48) */
/* WARNING: Removing unreachable block (ram,0x00010826ed50) */
/* WARNING: Removing unreachable block (ram,0x00010826ed58) */
/* WARNING: Removing unreachable block (ram,0x00010826edb8) */
/* WARNING: Removing unreachable block (ram,0x00010826ee50) */
/* WARNING: Removing unreachable block (ram,0x00010826ed7c) */
/* WARNING: Removing unreachable block (ram,0x00010826ee5c) */
/* WARNING: Removing unreachable block (ram,0x00010826ece0) */
/* WARNING: Removing unreachable block (ram,0x00010826ee64) */
/* WARNING: Removing unreachable block (ram,0x00010826eed0) */
/* WARNING: Removing unreachable block (ram,0x00010826eed4) */
/* WARNING: Removing unreachable block (ram,0x00010826ef10) */
/* WARNING: Removing unreachable block (ram,0x00010826ef18) */
/* WARNING: Removing unreachable block (ram,0x00010826ef24) */
/* WARNING: Removing unreachable block (ram,0x00010826ef34) */
/* WARNING: Removing unreachable block (ram,0x00010826ef48) */
/* WARNING: Removing unreachable block (ram,0x00010826eabc) */
/* WARNING: Removing unreachable block (ram,0x00010826eaf8) */
/* WARNING: Removing unreachable block (ram,0x00010826ef4c) */
/* WARNING: Removing unreachable block (ram,0x00010826f000) */
/* WARNING: Removing unreachable block (ram,0x00010826ef6c) */
/* WARNING: Removing unreachable block (ram,0x00010826f00c) */
/* WARNING: Removing unreachable block (ram,0x00010826f014) */
/* WARNING: Removing unreachable block (ram,0x00010826f018) */
/* WARNING: Removing unreachable block (ram,0x00010826ef8c) */
/* WARNING: Removing unreachable block (ram,0x00010826f068) */
/* WARNING: Removing unreachable block (ram,0x00010826f06c) */
/* WARNING: Removing unreachable block (ram,0x00010826f090) */
/* WARNING: Removing unreachable block (ram,0x00010826f154) */
/* WARNING: Removing unreachable block (ram,0x00010826f158) */
/* WARNING: Removing unreachable block (ram,0x00010826f160) */
/* WARNING: Removing unreachable block (ram,0x00010826f164) */
/* WARNING: Removing unreachable block (ram,0x00010826efcc) */
/* WARNING: Removing unreachable block (ram,0x00010826eff8) */
/* WARNING: Removing unreachable block (ram,0x00010826f180) */
/* WARNING: Removing unreachable block (ram,0x00010826f01c) */
/* WARNING: Removing unreachable block (ram,0x00010826f034) */
/* WARNING: Removing unreachable block (ram,0x00010826f038) */
/* WARNING: Removing unreachable block (ram,0x00010826f18c) */
/* WARNING: Removing unreachable block (ram,0x00010826f1a8) */
/* WARNING: Removing unreachable block (ram,0x00010826f1b0) */
/* WARNING: Removing unreachable block (ram,0x00010826f1bc) */
/* WARNING: Removing unreachable block (ram,0x00010826f1cc) */
/* WARNING: Removing unreachable block (ram,0x00010826f314) */
/* WARNING: Removing unreachable block (ram,0x00010826f31c) */
/* WARNING: Removing unreachable block (ram,0x00010826f328) */
/* WARNING: Removing unreachable block (ram,0x00010826f338) */
/* WARNING: Removing unreachable block (ram,0x00010826f34c) */
/* WARNING: Removing unreachable block (ram,0x00010826f444) */
/* WARNING: Removing unreachable block (ram,0x00010826f454) */
/* WARNING: Removing unreachable block (ram,0x00010826f460) */
/* WARNING: Removing unreachable block (ram,0x00010826f044) */
/* WARNING: Removing unreachable block (ram,0x00010826e78c) */
/* WARNING: Removing unreachable block (ram,0x00010826e7f8) */
/* WARNING: Removing unreachable block (ram,0x00010826e810) */
/* WARNING: Removing unreachable block (ram,0x00010826e664) */
/* WARNING: Removing unreachable block (ram,0x00010826e6d0) */
/* WARNING: Removing unreachable block (ram,0x00010826e6f0) */
/* WARNING: Removing unreachable block (ram,0x00010826e484) */

undefined ***
FUN_10826e3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined1 auStack_7e0 [16];
  undefined **ppuStack_7d0;
  undefined1 auStack_7c8 [512];
  undefined1 auStack_5c8 [512];
  undefined1 auStack_3c8 [8];
  undefined1 auStack_3c0 [8];
  undefined1 auStack_3b8 [40];
  undefined1 auStack_390 [40];
  undefined1 auStack_368 [48];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [280];
  undefined1 auStack_208 [456];
  
  func_0x000108270a74();
  FUN_10826ffb4(auStack_7e0,&UNK_10f4804c6);
  FUN_10826f46c(&ppuStack_7d0,param_1,param_2,param_3);
  uVar1 = 0;
  FUN_1082da6e8();
  if ((uVar1 & 1) != 0) {
    FUN_10826e4d0(&ppuStack_7d0,param_2,param_3,param_4);
  }
  ppuStack_7d0 = &PTR_FUN_110a33520;
  func_0x000108270040(auStack_208);
  FUN_1082706c0(auStack_320);
  ppuStack_7d0 = &PTR_DAT_110a38ba8;
  FUN_1081f8340(auStack_338);
  func_0x00010827024c(auStack_368);
  func_0x00010829e8f8(auStack_390);
  FUN_10826dbfc(auStack_3b8);
  func_0x00010826de94(auStack_3c0);
  func_0x00010826de70(auStack_3c8);
  func_0x0001082da088(auStack_5c8);
  func_0x0001082da088(auStack_7c8);
  return &ppuStack_7d0;
}



/* Entry: 10826e4d0; end: 10826f467;  */

undefined8 * FUN_10826e4d0(long *param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint extraout_w8;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  undefined **ppuVar17;
  uint extraout_w9;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  ulong uStack_208;
  long lStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  undefined8 uStack_1d0;
  undefined2 uStack_1c8;
  undefined1 uStack_1c6;
  undefined1 uStack_1c5;
  undefined2 uStack_1c4;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined8 uStack_19c;
  undefined8 uStack_190;
  undefined4 uStack_188;
  undefined8 uStack_180;
  undefined4 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined2 uStack_120;
  int3 iStack_110;
  undefined5 uStack_10d;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined2 uStack_f8;
  undefined1 uStack_f6;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  long *aplStack_80 [4];
  
  func_0x000108270a74();
  plVar18 = *(long **)(*(long *)(param_1[0x95] + 0x20) + 0x90);
  aplStack_80[2] = (long *)extraout_x8;
  if ((param_4 == (undefined8 *)0x0) && (plVar18 != (long *)0x0)) {
    func_0x00010813fad0(&uStack_1c0,*(undefined8 *)(param_2 + 0x88),*(int *)(param_2 + 0x90) << 2);
    (**(code **)(*plVar18 + 0x10))(&lStack_b0,plVar18,uStack_1c0);
    lVar20 = lStack_b0;
    lStack_b0 = 0;
    func_0x0001082708dc(0);
    func_0x0001082708dc(uStack_1c0);
    if (lVar20 == 0) {
LAB_10826e570:
      plVar19 = (long *)0x80;
      __Znwm();
      lVar20 = 0;
      plVar19[6] = 0;
      plVar19[5] = 0;
      plVar19[4] = 0;
      plVar19[3] = 0;
      plVar19[2] = 0;
      plVar19[1] = 0;
      *plVar19 = (long)&PTR_FUN_110a408d8;
      plVar19[8] = 0;
      plVar19[7] = 0;
      plVar19[10] = 0;
      plVar19[9] = 0;
      plVar19[0xc] = 0;
      plVar19[0xb] = 0;
      plVar19[0xe] = 0;
      plVar19[0xd] = 0;
      plVar19[0xf] = 0;
    }
    else {
      plVar19 = (long *)0x0;
    }
  }
  else {
    if (plVar18 != (long *)0x0) goto LAB_10826e570;
    lVar20 = 0;
    plVar19 = (long *)0x0;
  }
  puVar11 = (undefined8 *)PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
  _objc_alloc_init();
  lVar22 = *(long *)(param_3 + 0x98);
  if (plVar19 != (long *)0x0) {
    func_0x0001082709e0();
    func_0x0001082709ac();
    func_0x0001082709e0();
    func_0x000108270b28();
  }
  puVar12 = PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248;
  _objc_alloc_init(PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248);
  iVar10 = *(int *)(lVar22 + 0x1c);
  if (plVar19 != (long *)0x0) {
    func_0x000108270948();
    (*extraout_x8_00)(plVar19,iVar10);
  }
  FUN_10829e390(&uStack_1c0,lVar22 + 0x10);
  while (uStack_1c0 != 0) {
    func_0x000108270ad0();
    puVar13 = puVar12;
    func_0x00010bf0e700(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108270954();
    FUN_1082707c4(uStack_a8 & 0xffffffff);
    func_0x00010c19ec40(puVar13);
    func_0x000108270ab8();
    func_0x00010c1d0bc0(puVar13);
    func_0x00010c1741c0(puVar13);
    if (plVar19 != (long *)0x0) {
      func_0x000108270948();
      func_0x000108270b1c();
      func_0x0001082709e0();
      (*extraout_x8_01)(plVar19,extraout_w8 | extraout_w9);
      func_0x0001082709e0();
      func_0x0001082709ac();
    }
    func_0x000108270908();
    func_0x000108270b34();
  }
  if (iVar10 != 0) {
    puVar13 = puVar12;
    func_0x00010c08d240(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108270908();
    func_0x00010c20a6e0(puVar13);
    func_0x00010c20a740(puVar13);
    func_0x00010c20e740(puVar13);
    if (plVar19 != (long *)0x0) {
      func_0x0001082709e0();
      func_0x000108270940();
    }
    func_0x000108270900();
  }
  iVar10 = *(int *)(lVar22 + 0x34);
  if (plVar19 != (long *)0x0) {
    func_0x000108270948();
    func_0x0001082709ac();
  }
  FUN_10829e390(&uStack_1c0,lVar22 + 0x28);
  while (uStack_1c0 != 0) {
    func_0x000108270ad0();
    puVar13 = puVar12;
    func_0x00010bf0e700(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108270908();
    FUN_1082707c4(uStack_a8 & 0xffffffff);
    func_0x00010c19ec40(puVar13);
    func_0x000108270ab8();
    func_0x00010c1d0bc0(puVar13);
    func_0x00010c1741c0(puVar13);
    if (plVar19 != (long *)0x0) {
      func_0x000108270948();
      func_0x000108270b10();
      func_0x0001082709e0();
      func_0x000108270b1c();
      func_0x0001082709e0();
      func_0x000108270b28();
    }
    func_0x000108270900();
    func_0x000108270b34();
  }
  if (iVar10 != 0) {
    func_0x00010c08d240(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108270900();
    func_0x000108270af4();
    func_0x000108270980();
    func_0x000108270aec();
    if (plVar19 != (long *)0x0) {
      func_0x0001082709e0();
      func_0x000108270940();
    }
    func_0x0001082708e8();
  }
  func_0x00010c220f60(puVar11);
  func_0x000108270b40();
  iVar10 = *(int *)(param_3 + 0x18);
  if ((*(byte *)(param_3 + 0xc) & *(int *)(param_3 + 8) == 2) == 0) {
    iVar10 = 0;
  }
  if (iVar10 != 0) {
    uVar21 = *(undefined8 *)(param_3 + 0x88);
    puVar12 = PTR__OBJC_CLASS___MTLRenderPipelineColorAttachmentDescriptor_1126d94f0;
    _objc_alloc_init(PTR__OBJC_CLASS___MTLRenderPipelineColorAttachmentDescriptor_1126d94f0);
    func_0x00010c1dc0a0();
    if (plVar19 != (long *)0x0) {
      func_0x000108270948();
      func_0x000108270b10();
    }
    FUN_10826c364(uVar21);
    func_0x00010826d91c(&uStack_1c0);
    uVar24 = uStack_1c0 & 0xff;
    cVar5 = uStack_1c0._1_1_;
    bVar7 = uStack_1c0._1_1_ != '\x01';
    cVar6 = uStack_1c0._2_1_;
    bVar8 = uStack_1c0._2_1_ != '\0';
    func_0x00010c1719c0(puVar12);
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x20))(plVar19,(bVar7 || bVar8) || 1 < uVar24);
    }
    if ((bVar7 || bVar8) || 1 < uVar24) {
      func_0x000108270808(cVar5);
      func_0x00010c206fe0(puVar12);
      func_0x000108270808(cVar6);
      func_0x00010c18c360(puVar12);
      func_0x00010c1edfe0(puVar12);
      func_0x000108270808(cVar5);
      func_0x00010c206c60(puVar12);
      func_0x000108270808(cVar6);
      func_0x00010c18c2c0(puVar12);
      func_0x00010c167800(puVar12);
      if (plVar19 != (long *)0x0) {
        func_0x00010c247a80(puVar12);
        func_0x000108270948();
        func_0x000108270940();
        func_0x00010bf6edc0(puVar12);
        func_0x000108270948();
        func_0x000108270940();
        func_0x00010c140740(puVar12);
        func_0x000108270948();
        func_0x000108270940();
        func_0x00010c247560(puVar12);
        func_0x000108270948();
        func_0x000108270940();
        func_0x00010bf6ebc0(puVar12);
        func_0x000108270948();
        func_0x000108270940();
        func_0x00010bf01b80(puVar12);
        func_0x000108270948();
        func_0x000108270940();
      }
    }
    func_0x00010c227420(puVar12);
    if (plVar19 != (long *)0x0) {
      func_0x000108270940(*(undefined8 *)(*plVar19 + 0x20));
    }
    func_0x00010bf40cc0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d04c0();
    func_0x000108270900();
    func_0x0001082708e8();
    func_0x00010c1e75e0(puVar11);
    plVar14 = param_1;
    (**(code **)(*param_1 + 0x10))();
    FUN_108265f18();
    func_0x00010c20a580(puVar11);
    if (plVar19 != (long *)0x0) {
      func_0x00010c2536c0(puVar11);
      func_0x000108270948();
      func_0x000108270940();
    }
    if (param_4 == (undefined8 *)0x0) {
      aplStack_80[0] = (long *)0x0;
      aplStack_80[1] = (long *)0x0;
      func_0x0001082dbc68(param_1);
      iVar10 = 0;
      uStack_108 = 0xffffffffffffffff;
      uStack_100 = 0;
      uStack_f8 = 0x101;
      uStack_f6 = 1;
      uStack_f4 = 0x32;
      uStack_f0 = 0x10000;
      uStack_ec = 0;
      uStack_e8 = 1;
      lVar22 = param_1[0x95];
      _iStack_110 = CONCAT53(0xffffffff00,
                             (uint3)*(byte *)(*(long *)(*(long *)(lVar22 + 0x20) + 0x10) + 0x9f) <<
                             0x10);
      uStack_190 = 0;
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_130 = 0;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
      uStack_19c = 0;
      uStack_1a4 = 0;
      uStack_1a0 = 0;
      uStack_128 = 1;
      uStack_120 = 1;
      if ((plVar18 != (long *)0x0) && (lVar20 != 0)) {
        func_0x00010838a448(&uStack_1c0,*(undefined8 *)(lVar20 + 0x18),
                            *(undefined8 *)(lVar20 + 0x20));
        iVar10 = (int)&uStack_1c0;
        FUN_1082a2a60();
        lVar22 = param_1[0x95];
      }
      ppuVar17 = *(undefined ***)(*(long *)(*(long *)(lVar22 + 0x20) + 0x10) + 0x40);
      ppuVar1 = &PTR_PTR_113254df0;
      if (ppuVar17 != (undefined **)0x0) {
        ppuVar1 = ppuVar17;
      }
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      lStack_b0 = 0;
      uStack_1c4 = 0;
      uStack_1c8 = 0;
      uStack_1c6 = 0;
      uStack_1c5 = 0;
      if (lVar20 == 0) {
LAB_10826ecb0:
        uVar9 = uStack_a0._7_1_ == 0;
        uVar24 = uStack_a8;
        if (-1 < uStack_a0) {
          uVar24 = (ulong)uStack_a0._7_1_;
        }
        if (uVar24 == 0) {
          lVar22 = plVar14[2];
          func_0x000108270968(lVar22,param_1 + 3);
          if ((int)lVar22 != 0) {
            uVar24 = (ulong)uStack_88._7_1_;
            goto LAB_10826ed04;
          }
          goto LAB_10826edb0;
        }
        uVar24 = (ulong)uStack_88._7_1_;
        uVar9 = uStack_88._7_1_ == 0;
        uVar2 = uStack_90;
        if (-1 < uStack_88) {
          uVar2 = uVar24;
        }
        if (uVar2 == 0) {
LAB_10826ed04:
          uVar9 = uStack_88._7_1_ == 0;
          uVar2 = uStack_90;
          if (-1 < (char)uStack_88._7_1_) {
            uVar2 = uVar24;
          }
          if (uVar2 == 0) {
            lVar22 = plVar14[2];
            func_0x0001082709fc(lVar22,(long)param_1 + *(long *)(param_1[0x3d] + -0x18) + 0x1f8);
            if ((int)lVar22 == 0) goto LAB_10826edb0;
          }
          if ((plVar18 != (long *)0x0) && (lVar20 == 0)) {
            FUN_1083aa8a4(&uStack_1d0,plVar19 + 9);
            uVar21 = uStack_1d0;
            if (*(int *)(*(long *)(*(long *)(param_1[0x95] + 0x20) + 0x10) + 0x68) == 0) {
              uStack_c8 = 0;
              uStack_d0 = 0;
              uStack_b8 = 0;
              uStack_c0 = 0;
              uStack_d8 = 0;
              uStack_e0 = 0;
              FUN_1083232f0(auStack_1e8,param_1 + 3);
              func_0x000107c27b9c(&uStack_e0,auStack_1e8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
              FUN_1083232f0(auStack_1e8,(long)param_1 + *(long *)(param_1[0x3d] + -0x18) + 0x1f8);
              func_0x000107c27b9c(&uStack_c8,auStack_1e8);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
              uStack_1f0 = uStack_1d0;
              uStack_1d0 = 0;
              FUN_10826f540(param_1,&uStack_e0,&uStack_1c8,&iStack_110,&uStack_1f0,1);
              func_0x0001082708dc(uStack_1f0);
              do {
                func_0x0001082709ec();
                func_0x000108270a94();
              } while (!(bool)uVar9);
            }
            else {
              uStack_1d0 = 0;
              uStack_1f8 = uVar21;
              FUN_10826f540(param_1,&lStack_b0,&uStack_1c8,0,&uStack_1f8,0);
              func_0x0001082708dc(uStack_1f8);
            }
            func_0x0001082708dc(uStack_1d0);
          }
        }
        plVar14 = param_1;
        FUN_10826f69c(param_1,&lStack_b0,(ulong)CONCAT12(uStack_1c6,uStack_1c8),ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        plVar18 = aplStack_80[0];
        aplStack_80[0] = plVar14;
        _objc_release(plVar18);
        plVar18 = param_1;
        FUN_10826f69c(param_1,&uStack_98,(ulong)CONCAT21(uStack_1c4,uStack_1c5),ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        bVar7 = false;
        aplStack_80[1] = plVar18;
        if ((plVar14 != (long *)0x0) && (plVar18 != (long *)0x0)) {
          func_0x00010c0d8900(plVar14);
          func_0x00010827098c();
          func_0x00010c220f80();
          func_0x0001082708e8();
          func_0x00010c0d8900(plVar18);
          func_0x00010827098c();
          func_0x00010c19f060();
          func_0x0001082708e8();
          bVar7 = true;
        }
      }
      else {
        if (iVar10 == 0x4d534c20) {
          func_0x000108270a24(&uStack_1c0,&lStack_b0);
          goto LAB_10826ecb0;
        }
        if (iVar10 != 0x534b534c) goto LAB_10826ecb0;
        uStack_c8 = 0;
        uStack_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        uStack_d8 = 0;
        uStack_e0 = 0;
        puVar15 = &uStack_1c0;
        func_0x000108270a24(puVar15,&uStack_e0);
        if ((int)puVar15 == 0) {
LAB_10826ec74:
          bVar7 = true;
        }
        else {
          lVar22 = plVar14[2];
          func_0x000108270968(lVar22,&uStack_e0);
          if ((int)lVar22 != 0) {
            uVar24 = plVar14[2];
            func_0x0001082709fc(uVar24,&uStack_c8);
            if ((uVar24 & 1) != 0) goto LAB_10826ec74;
          }
          bVar7 = false;
        }
        lVar22 = 0x18;
        do {
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                    ((long)&uStack_e0 + lVar22);
          lVar22 = lVar22 + -0x18;
        } while (lVar22 != -0x18);
        uVar9 = 1;
        if (bVar7) goto LAB_10826ecb0;
LAB_10826edb0:
        bVar7 = false;
      }
      do {
        func_0x0001082709ec();
        func_0x000108270a94();
      } while (!(bool)uVar9);
      func_0x000108270a44(&uStack_1c0);
      lVar20 = 8;
      do {
        _objc_release(*(undefined8 *)((long)aplStack_80 + lVar20));
        lVar20 = lVar20 + -8;
      } while (lVar20 != -8);
      if (!bVar7) goto LAB_10826f018;
    }
    else {
      func_0x000108270b54(*param_4);
      func_0x00010827098c();
      func_0x00010c220f80();
      func_0x0001082708e8();
      func_0x000108270b48(param_4[1]);
      func_0x00010827098c();
      func_0x00010c19f060();
      func_0x0001082708e8();
      if (*(char *)(param_4 + 2) == '\x01') {
        func_0x0001082dbc1c(param_1,&UNK_10f4804e0);
      }
    }
    puVar15 = puVar11;
    func_0x00010c298dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar15 == (undefined8 *)0x0) {
      puVar12 = &UNK_10f4804eb;
    }
    else {
      puVar15 = puVar11;
      func_0x00010bfb6880();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar15 != (undefined8 *)0x0) {
        lVar22 = param_1[0x95];
        FUN_1082635ac();
        _objc_retainAutoreleasedReturnValue();
        lStack_200 = 0;
        func_0x00010c0d8ec0();
        lVar20 = lStack_200;
        _objc_retain(lStack_200);
        func_0x000108270900();
        if (lVar20 == 0) {
          if (lVar22 == 0) goto LAB_10826eff8;
          FUN_10826f750(&uStack_1c0,lVar22);
          uVar3 = *(uint *)(param_1 + 0xb8);
          uVar4 = *(uint *)((long)param_1 + 0x5c4);
          iVar10 = 0;
          if ((uVar4 & uVar3) != 0) {
            iVar10 = (uVar4 - (uVar4 & uVar3)) + 1;
          }
          puVar23 = (undefined8 *)0xc0;
          __Znwm(0xc0);
          uStack_208 = uStack_1c0;
          lVar20 = param_1[0x95];
          uStack_1c0 = 0;
          puVar15 = puVar11;
          func_0x00010bf40cc0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar16 = puVar15;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0fca60();
          lStack_210 = param_1[0x81];
          lStack_218 = param_1[0x82];
          lStack_228 = param_1[0x84];
          lStack_230 = param_1[0x83];
          lStack_220 = param_1[0x85];
          param_1[0x82] = 0;
          param_1[0x81] = 0;
          param_1[0x84] = 0;
          param_1[0x83] = 0;
          param_1[0x85] = 0;
          FUN_10826d0cc(puVar23,lVar20,&uStack_208,puVar16,param_1 + 0x7f,param_1 + 0x98,
                        iVar10 + uVar3,*(undefined4 *)((long)param_1 + 0x564),&lStack_210,
                        &lStack_218,&lStack_230);
          FUN_10826dbfc(&lStack_230);
          if (lStack_218 != 0) {
            func_0x00010827091c();
          }
          if (lStack_210 != 0) {
            func_0x00010827091c();
          }
          func_0x000108270900();
          _objc_release(puVar15);
          FUN_10826b5c0(&uStack_208);
          FUN_10826b5c0(&uStack_1c0);
        }
        else {
          func_0x00010c09e4e0(lVar20);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bf260e0(lVar20);
          func_0x000108270a14();
          func_0x000108270900();
LAB_10826eff8:
          puVar23 = (undefined8 *)0x0;
        }
        func_0x0001082708e8();
        func_0x000108270954();
        goto LAB_10826f01c;
      }
      puVar12 = &UNK_10f480512;
    }
    FUN_10841076c(puVar12);
  }
LAB_10826f018:
  puVar23 = (undefined8 *)0x0;
LAB_10826f01c:
  uVar9 = plVar19 == (long *)0x0;
  puVar15 = puVar11;
  _objc_release();
  func_0x000108270a0c();
  if (plVar19 != (long *)0x0) {
    func_0x000108270a34();
  }
  func_0x0001082709b8(aplStack_80[2]);
  if ((bool)uVar9) {
    return puVar23;
  }
  ___stack_chk_fail();
  func_0x0001082708dc(uStack_1f0);
  do {
    func_0x0001082709ec();
    func_0x000108270a94();
  } while (!(bool)uVar9);
  func_0x0001082708dc(uStack_1d0);
  do {
    func_0x0001082709ec();
    func_0x000108270a94();
  } while (!(bool)uVar9);
  func_0x000108270a44(&uStack_1c0);
  lVar20 = 8;
  do {
    _objc_release(*(undefined8 *)((long)aplStack_80 + lVar20));
    lVar20 = lVar20 + -8;
  } while (lVar20 != -8);
  _objc_release(puVar11);
  func_0x000108270a0c();
  if (plVar19 != (long *)0x0) {
    func_0x000108270a34();
  }
  __Unwind_Resume();
  *puVar15 = &PTR_FUN_110a33520;
  func_0x000108270040(puVar15 + 0xb9);
  FUN_1082706c0(puVar15 + 0x96);
  *puVar15 = &PTR_DAT_110a38ba8;
  FUN_1081f8340(puVar15 + 0x93);
  func_0x00010827024c(puVar15 + 0x8d);
  func_0x00010829e8f8(puVar15 + 0x88);
  FUN_10826dbfc(puVar15 + 0x83);
  func_0x00010826de94(puVar15 + 0x82);
  func_0x00010826de70(puVar15 + 0x81);
  func_0x0001082da088(puVar15 + 0x41);
  func_0x0001082da088(puVar15 + 1);
  return puVar15;
}



/* Entry: 10826f468; end: 10826f46b;  */

undefined8 * FUN_10826f468(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a33520;
  func_0x000108270040(param_1 + 0xb9);
  FUN_1082706c0(param_1 + 0x96);
  *param_1 = &PTR_DAT_110a38ba8;
  FUN_1081f8340(param_1 + 0x93);
  func_0x00010827024c(param_1 + 0x8d);
  func_0x00010829e8f8(param_1 + 0x88);
  FUN_10826dbfc(param_1 + 0x83);
  func_0x00010826de94(param_1 + 0x82);
  func_0x00010826de70(param_1 + 0x81);
  func_0x0001082da088(param_1 + 0x41);
  func_0x0001082da088(param_1 + 1);
  return param_1;
}



/* Entry: 10826f46c; end: 10826f4df;  */

undefined8 *
FUN_10826f46c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_1082da5a8(param_1,param_3,param_4);
  *puVar1 = &PTR_FUN_110a33520;
  puVar1[0x95] = param_2;
  FUN_108270424(puVar1 + 0x96,param_1);
  FUN_1082705e8(param_1 + 0xb9,param_1);
  return param_1;
}



/* Entry: 10826f4e0; end: 10826f4fb;  */

undefined8 FUN_10826f4e0(long param_1)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x4a8) + 0x10);
}



/* Entry: 10826f4fc; end: 10826f53f;  */

long * FUN_10826f4fc(long *param_1,char *param_2)

{
  long lVar1;
  long lStack_28;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    param_1 = param_1 + 3;
    if (*(int *)*param_1 == 0) {
      FUN_1083a3348(&lStack_28);
      lVar1 = *param_1;
      if (lVar1 != lStack_28) {
        *param_1 = lStack_28;
        lStack_28 = lVar1;
      }
      FUN_1083a3ca0(lStack_28);
      return param_1;
    }
    FUN_1083a3a90(param_1,&UNK_10f480587);
  }
  return param_1;
}



/* Entry: 10826f540; end: 10826f69b;  */

void FUN_10826f540(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010813fad0(&uStack_58,*(undefined8 *)(param_1[0x7d] + 0x88),
                      *(int *)(param_1[0x7d] + 0x90) << 2);
  lVar3 = param_1[0x7e];
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x10))(param_1);
  FUN_1082a4360(&uStack_60,lVar3,plVar2);
  uStack_80 = 0;
  uStack_78 = 0x100000000;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_88 = param_4;
  FUN_108262b24(&uStack_68,param_5);
  uVar1 = 0x534b534c;
  if (param_6 == 0) {
    uVar1 = 0x4d534c20;
  }
  FUN_1082a2878(&uStack_90,uVar1,param_2,param_3,2,&uStack_88);
  plVar2 = *(long **)(*(long *)(param_1[0x95] + 0x20) + 0x90);
  (**(code **)(*plVar2 + 0x20))(plVar2,uStack_58,uStack_90,&uStack_60);
  FUN_1082708dc(uStack_90);
  func_0x000108270798(&uStack_88);
  FUN_1083a3ca0(uStack_60);
  func_0x000108270a0c();
  return;
}



/* Entry: 10826f69c; end: 10826f707;  */

void FUN_10826f69c(long param_1,undefined8 param_2,char param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x4a8);
  FUN_108275bf8(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 != 0) && (param_3 != '\0')) {
    func_0x0001082dbc1c(param_1,&UNK_10f4804e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10826f708; end: 10826f74f;  */

void FUN_10826f708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_108321028(param_1,FUN_10832ab74,&UNK_10f480659,param_2,param_3,param_4,param_5,param_6,param_7
               );
  return;
}



/* Entry: 10826f750; end: 10826f7b3;  */

void FUN_10826f750(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = 0x18;
  __Znwm();
  FUN_10827084c();
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10826f7b4; end: 10826ff0b;  */

undefined4 * FUN_10826f7b4(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  undefined8 extraout_x8;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  bool bVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined4 uStack_1e0;
  undefined2 uStack_1dc;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined2 uStack_198;
  undefined1 uStack_196;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined1 uStack_188;
  undefined1 auStack_178 [161];
  byte bStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000108270a74();
  uStack_70 = extraout_x8;
  func_0x0001082662a0(auStack_178,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  iVar3 = (int)auStack_178;
  FUN_1082a2a60();
  lVar13 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  ppuVar15 = *(undefined ***)(lVar13 + 0x40);
  ppuVar1 = &PTR_PTR_113254df0;
  if (ppuVar15 != (undefined **)0x0) {
    ppuVar1 = ppuVar15;
  }
  uStack_1a8 = 0xffffffffffffffff;
  uStack_1a0 = 0;
  uStack_198 = 0x101;
  uStack_196 = 1;
  uStack_194 = 0x32;
  uStack_190 = 0x10000;
  uStack_18c = 0;
  uStack_188 = 1;
  uStack_1b0 = CONCAT53(0xffffffff00,(uint3)*(byte *)(lVar13 + 0x9f) << 0x10);
  uStack_1d0 = 0;
  uStack_1c8 = 0x100000000;
  uStack_1c0 = 0;
  uStack_1b8 = 0;
  puStack_1d8 = &uStack_1b0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_1dc = 0;
  uStack_1e0 = 0;
  puVar7 = auStack_178;
  puVar12 = &uStack_1e0;
  FUN_1082a2abc(puVar7,&uStack_a0,puVar12,2,&puStack_1d8);
  if (((ulong)puVar7 & 1) == 0) {
    puVar17 = (undefined4 *)0x0;
    goto LAB_10826fd68;
  }
  func_0x0001082708f0();
  puVar8 = (undefined4 *)PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_1126d4240;
  _objc_alloc_init();
  puVar9 = PTR__OBJC_CLASS___MTLVertexDescriptor_1126d4248;
  _objc_alloc_init();
  puVar10 = puVar9;
  func_0x0001082708f0();
  func_0x0001082708f0();
  func_0x0001082708f0();
  uVar4 = (uint)puVar10;
  for (uVar18 = 0; uVar5 = (uint)puVar10, (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) != uVar18;
      uVar18 = uVar18 + 1) {
    puVar11 = puVar9;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar11;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar11);
    func_0x0001082708f0();
    func_0x00010c19ec40(puVar10);
    func_0x0001082708f0();
    func_0x00010c1d0bc0(puVar10);
    func_0x0001082708f0();
    func_0x00010c1741c0();
    func_0x0001082708e8();
  }
  if (uVar4 != 0) {
    puVar10 = puVar9;
    func_0x00010c08d240();
    uVar5 = (uint)puVar10;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108270908();
    func_0x00010c20a6e0();
    func_0x000108270980();
    func_0x0001082708f0();
    func_0x000108270aec();
    func_0x0001082708e8();
  }
  func_0x0001082708f0();
  for (uVar18 = (ulong)(uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)); uVar18 != 0;
      uVar18 = uVar18 - 1) {
    puVar10 = puVar9;
    func_0x00010bf0e700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108270908();
    func_0x0001082708f0();
    func_0x00010c19ec40(puVar10);
    func_0x0001082708f0();
    func_0x00010c1d0bc0(puVar10);
    func_0x0001082708f0();
    func_0x00010c1741c0(puVar10);
    func_0x0001082708e8();
  }
  if (uVar5 != 0) {
    func_0x00010c08d240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    func_0x000108270908();
    func_0x000108270af4();
    func_0x000108270980();
    func_0x0001082708f0();
    func_0x000108270aec();
    func_0x0001082708e8();
  }
  func_0x00010c220f60(puVar8);
  func_0x000108270954();
  puVar9 = PTR__OBJC_CLASS___MTLRenderPipelineColorAttachmentDescriptor_1126d94f0;
  _objc_alloc_init();
  func_0x0001082708f0();
  func_0x00010c1dc0a0(puVar9);
  FUN_10838a528(auStack_178);
  func_0x00010c1719c0(puVar9);
  puVar10 = puVar9;
  func_0x00010c06d540();
  if ((int)puVar10 != 0) {
    func_0x0001082708f0();
    func_0x00010c206fe0(puVar9);
    func_0x0001082708f0();
    func_0x00010c18c360(puVar9);
    func_0x0001082708f0();
    func_0x00010c1edfe0(puVar9);
    func_0x0001082708f0();
    func_0x00010c206c60(puVar9);
    func_0x0001082708f0();
    func_0x00010c18c2c0(puVar9);
    func_0x0001082708f0();
    func_0x00010c167800(puVar9);
  }
  FUN_10838a528();
  func_0x00010c227420(puVar9);
  puVar12 = puVar8;
  func_0x00010bf40cc0();
  iVar6 = (int)puVar12;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0();
  func_0x0001082708e8();
  func_0x000108270954();
  func_0x0001082708f0();
  puVar12 = (undefined4 *)(long)iVar6;
  puVar17 = puVar8;
  func_0x00010c20a580();
  if ((bStack_d7 & 1) == 0) {
    if (iVar3 == 0x534b534c) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_c8 = 0;
      uStack_d0 = 0;
      uVar18 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x10);
      puVar12 = (undefined4 *)0x1;
      FUN_10826f708(uVar18,&uStack_a0,1,&uStack_1b0,&uStack_d0,&uStack_1e0,ppuVar1);
      if ((uVar18 & 1) == 0) {
LAB_10826fcb8:
        bVar16 = false;
      }
      else {
        lVar13 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        puVar12 = (undefined4 *)0x0;
        FUN_10826f708(lVar13,&uStack_88,0,&uStack_1b0,&uStack_b8,(ulong)&uStack_1e0 | 3,ppuVar1);
        if ((int)lVar13 == 0) goto LAB_10826fcb8;
        func_0x000108270b6c();
        FUN_108275bf8();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = *param_3;
        *param_3 = lVar13;
        func_0x0001082709f4(lVar14);
        func_0x000108270b6c();
        FUN_108275bf8();
        _objc_retainAutoreleasedReturnValue();
        lVar14 = param_3[1];
        param_3[1] = lVar13;
        func_0x0001082709f4(lVar14);
        bVar16 = true;
      }
      lVar13 = 0x18;
      do {
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                  ((long)&uStack_d0 + lVar13);
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x18);
      if (!bVar16) goto LAB_10826fd60;
    }
    else {
      if (iVar3 != 0x4d534c20) goto LAB_10826fd60;
      func_0x000108270b6c();
      FUN_108275bf8();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = *param_3;
      *param_3 = (long)puVar17;
      func_0x0001082709f4(lVar13);
      func_0x000108270b6c();
      FUN_108275bf8();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = param_3[1];
      param_3[1] = (long)puVar17;
      func_0x0001082709f4(lVar13);
    }
    func_0x000108270b54(*param_3);
    func_0x00010c220f80(puVar8);
    func_0x0001082708e8();
    func_0x000108270b48(param_3[1]);
    func_0x00010c19f060(puVar8);
    func_0x0001082708e8();
    FUN_1082635ac(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d8ea0();
    func_0x0001082708e8();
    *(bool *)(param_3 + 2) = uStack_1e0._3_1_ != '\0';
    puVar17 = (undefined4 *)0x1;
    puVar12 = puVar8;
  }
  else {
LAB_10826fd60:
    puVar17 = (undefined4 *)0x0;
  }
  func_0x00010827099c();
LAB_10826fd68:
  lVar13 = 0x18;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev((long)&uStack_a0 + lVar13);
    lVar13 = lVar13 + -0x18;
    uVar2 = lVar13 == -0x18;
  } while (!(bool)uVar2);
  func_0x000108270798();
  func_0x000108270a44(auStack_178);
  func_0x0001082709b8(uStack_70);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001082708e8();
    func_0x00010827099c();
    lVar13 = 0x18;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
                ((long)&uStack_a0 + lVar13);
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x18);
    func_0x000108270798(&puStack_1d8);
    func_0x000108270a44(auStack_178);
    func_0x000108270b00();
    _objc_retain(puVar12);
    if (puVar12 != (undefined4 *)0x0) {
      func_0x00010c09e4e0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf260e0();
      func_0x000108270a14();
      func_0x0001082708e8();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar12);
    return puVar12;
  }
  return puVar17;
}



/* Entry: 10826ff0c; end: 10826ff87;  */

void FUN_10826ff0c(undefined8 param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c09e4e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bf260e0();
    func_0x000108270a14();
    func_0x0001082708e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10826ff88; end: 10826ff9b;  */

void FUN_10826ff88(void)

{
  func_0x000108270004();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10826ff9c; end: 10826ffb3;  */

long FUN_10826ff9c(long param_1)

{
  return param_1 + 0x4b0;
}



/* Entry: 10826ffb4; end: 108270087;  */

long * FUN_10826ffb4(long *param_1,char *param_2)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = param_2;
  if ((*param_2 == 'C') && (pcVar2 = (char *)0x0, param_2[1] != '\0')) {
    pcVar2 = param_2;
  }
  lVar1 = 0x3f;
  _newlocale(0x3f,pcVar2,0);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    _uselocale();
  }
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 108270088; end: 10827008f;  */

void FUN_108270088(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10827008c);
  (*pcVar1)();
}



/* Entry: 108270090; end: 1082700b3;  */

undefined8 FUN_108270090(undefined8 param_1)

{
  FUN_1082700b4();
  FUN_10840fc40();
  return param_1;
}



/* Entry: 1082700b4; end: 10827016f;  */

void FUN_1082700b4(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w9;
  int iVar2;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  
  func_0x0001082709cc();
  func_0x000108270110();
  func_0x000108270a84();
  FUN_1082701c4();
  while ((func_0x000108270a64(), lVar1 = extraout_x8, iVar2 = iStack_30, !(bool)in_ZR ||
         ((extraout_x9 != 0 &&
          (func_0x000108270a54(), lVar1 = extraout_x8_00, iVar2 = extraout_w9, !(bool)in_ZR))))) {
    in_ZR = 0;
    func_0x00010827024c(lVar1 + iVar2);
    func_0x000108270134(auStack_40);
  }
  func_0x000108270b08();
  return;
}



/* Entry: 108270170; end: 1082701c3;  */

void FUN_108270170(undefined8 *param_1)

{
  if ((*(long *)*param_1 != 0) && (*(long *)(*(long *)*param_1 + 8) != 0)) {
    return;
  }
  return;
}



/* Entry: 1082701c4; end: 10827027f;  */

undefined8 * FUN_1082701c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  func_0x0001082701e8();
  return param_1;
}



/* Entry: 108270280; end: 1082702a3;  */

undefined8 FUN_108270280(undefined8 param_1)

{
  FUN_10840fc40();
  return param_1;
}



/* Entry: 1082702a4; end: 1082702c7;  */

undefined8 FUN_1082702a4(undefined8 param_1)

{
  FUN_1082702c8();
  FUN_10840fc40();
  return param_1;
}



/* Entry: 1082702c8; end: 1082703eb;  */

void FUN_1082702c8(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  int extraout_w9;
  int iVar2;
  long extraout_x9;
  undefined1 auStack_40 [16];
  int iStack_30;
  
  func_0x0001082709cc();
  func_0x000108270328();
  func_0x000108270a84();
  func_0x000108270388();
  while ((func_0x000108270a64(), lVar1 = extraout_x8, iVar2 = iStack_30, !(bool)in_ZR ||
         ((extraout_x9 != 0 &&
          (func_0x000108270a54(), lVar1 = extraout_x8_00, iVar2 = extraout_w9, !(bool)in_ZR))))) {
    in_ZR = 0;
    FUN_1083a3c7c(lVar1 + iVar2 + 8);
    func_0x00010827034c(auStack_40);
  }
  func_0x000108270b08();
  return;
}



/* Entry: 1082703ec; end: 108270423;  */

undefined8 * FUN_1082703ec(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    _uselocale(*param_1);
    _freelocale(param_1[1]);
  }
  return param_1;
}



/* Entry: 108270424; end: 108270473;  */

void FUN_108270424(undefined8 *param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x19;
  
  func_0x000108270b78();
  *param_1 = extraout_x8;
  param_1[1] = param_2;
  func_0x000108270b60(param_1 + 2);
  func_0x000108270b60(unaff_x19 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x100) = 0;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x108) = 0x100000000;
  return;
}



/* Entry: 108270474; end: 10827047b;  */

void FUN_108270474(undefined8 *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  param_1[2] = 0;
  uVar1 = param_3 + 7U >> 3;
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  uVar2 = 0x20000040000;
  if ((param_2 & 0xfffffffd) != 1) {
    uVar2 = 0x20000000000;
  }
  *param_1 = param_1 + 2;
  param_1[1] = uVar2 | ((param_2 & 3) << 0x10 | (uint)uVar1);
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x68;
  *(undefined8 *)((long)param_1 + 0x24) = 0x20;
  *(undefined4 *)((long)param_1 + 0x2c) = 0;
  return;
}



/* Entry: 10827047c; end: 10827049f;  */

undefined8 FUN_10827047c(undefined8 param_1)

{
  FUN_1082704a0();
  FUN_10840fc40();
  return param_1;
}


