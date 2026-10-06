/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a7f812c; end: 10a7f82b7;  */

undefined8 *
FUN_10a7f812c(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             ulong param_5,undefined8 *param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  long unaff_x19;
  long *plVar7;
  undefined8 *unaff_x25;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  long *plStack_68;
  undefined8 uStack_60;
  undefined1 uStack_51;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  uStack_60 = param_2;
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000109ffde50();
    puVar5 = *(undefined8 **)(unaff_x19 + 0x60);
    FUN_10a0da1b8();
    func_0x00010a061678();
    FUN_10a0617bc();
    if (*(char *)(unaff_x19 + 0x27) < '\0') {
      __ZdlPv(*unaff_x25);
    }
    __Unwind_Resume();
    uVar9 = puVar5[1];
    uVar8 = *puVar5;
    if (puVar5[1] != 0) {
      plVar7 = (long *)(puVar5[1] + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar4) {
          *plVar7 = *plVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar7 = (long *)param_1[1];
    param_1[1] = uVar9;
    *param_1 = uVar8;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return param_1;
  }
  puVar5 = param_1 + 2;
  if (param_5 < 0x17) {
    *(char *)((long)param_1 + 0x27) = (char)param_5;
    if (param_5 == 0) goto LAB_10a7f81c4;
  }
  else {
    puVar2 = (undefined8 *)0x19;
    if ((param_5 | 7) != 0x17) {
      puVar2 = (undefined8 *)((param_5 | 7) + 1);
    }
    puVar5 = puVar2;
    __Znwm();
    param_1[3] = param_5;
    param_1[4] = (ulong)puVar2 | 0x8000000000000000;
    param_1[2] = puVar5;
  }
  _memmove(puVar5,param_4,param_5);
LAB_10a7f81c4:
  *(undefined1 *)((long)puVar5 + param_5) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  uVar9 = param_6[1];
  uVar8 = *param_6;
  param_1[0xc] = 0;
  param_1[0xb] = param_1 + 0xc;
  param_1[8] = uVar9;
  param_1[7] = uVar8;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  FUN_10a81451c(auStack_70,&uStack_51,&uStack_60);
  FUN_10a02bf24(param_1 + 9,auStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar7 = plStack_68 + 1;
    do {
      lVar6 = *plVar7;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  *(undefined1 *)(param_1[9] + 8) = 1;
  return param_1;
}



/* Entry: 10a7f82b8; end: 10a7f8333;  */

undefined8 * FUN_10a7f82b8(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  if (param_2[1] != 0) {
    plVar5 = (long *)(param_2[1] + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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



/* Entry: 10a7f8334; end: 10a7f8493;  */

void FUN_10a7f8334(long param_1,int param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  
  uVar7 = *(ulong *)(param_1 + 0x10);
  if (uVar7 == 0) {
    return;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
LAB_10a7f8428:
      *(uint *)(uVar7 + 0x10) = *(uint *)(uVar7 + 0x10) | 2;
      uVar2 = *(ulong *)(uVar7 + 0x50);
      if (uVar2 == 0) {
        uVar2 = *(ulong *)(uVar7 + 8);
        if ((uVar2 & 1) != 0) {
          uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
        }
        func_0x00010932f598();
        *(ulong *)(uVar7 + 0x50) = uVar2;
      }
      *(uint *)(uVar2 + 0x10) = *(uint *)(uVar2 + 0x10) | 4;
      if (*(ulong *)(uVar2 + 0x28) != 0) {
        return;
      }
      uVar7 = *(ulong *)(uVar2 + 8);
      if ((uVar7 & 1) != 0) {
        uVar7 = *(ulong *)(uVar7 & 0xfffffffffffffffe);
      }
      func_0x00010932ed6c();
      *(ulong *)(uVar2 + 0x28) = uVar7;
      return;
    }
    if (param_2 == 1) {
      puVar5 = &UNK_10f570f7f;
      lVar6 = 4;
      goto LAB_10a7f83b0;
    }
  }
  else {
    if (param_2 == 2) {
      puVar5 = &UNK_10f67a034;
      lVar6 = 5;
      goto LAB_10a7f83b0;
    }
    if (param_2 == 3) {
      puVar5 = &UNK_10f67a03a;
      lVar6 = 0x15;
      goto LAB_10a7f83b0;
    }
  }
  lVar6 = 0;
  puVar5 = &UNK_10f678718;
LAB_10a7f83b0:
  uVar2 = *(ulong *)(uVar7 + 0x30);
  puVar8 = (ulong *)(uVar7 + 0x30);
  if ((uVar2 & 1) != 0) {
    puVar8 = (ulong *)(uVar2 + 7);
  }
  if (*(int *)(uVar7 + 0x38) != 0) {
    lVar9 = (long)*(int *)(uVar7 + 0x38) << 3;
    do {
      uVar7 = *puVar8;
      puVar4 = (undefined8 *)(*(ulong *)(uVar7 + 0x48) & 0xfffffffffffffffc);
      lVar3 = (long)*(char *)((long)puVar4 + 0x17);
      if (lVar3 < 0) {
        lVar3 = puVar4[1];
        puVar4 = (undefined8 *)*puVar4;
      }
      if ((lVar6 == lVar3) && (puVar1 = puVar5, _memcmp(puVar5,puVar4,lVar6), (int)puVar1 == 0))
      goto LAB_10a7f8428;
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return;
}



/* Entry: 10a7f8494; end: 10a7f854f;  */

void FUN_10a7f8494(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *(long *)(param_2 + 0x68);
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 0x70);
  lVar3 = *(long *)(lVar3 + 0xb8);
  if ((*(byte *)(lVar3 + 0x1e0) & 1) != 0) {
    FUN_10a12d754(&uStack_50,*(undefined8 *)(lVar3 + 0x50),param_3);
    puVar2 = (undefined8 *)0x38;
    __Znwm();
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &PTR_FUN_110ba7a48;
    puVar2[4] = uStack_48;
    puVar2[3] = uStack_50;
    puVar2[6] = uStack_38;
    puVar2[5] = uStack_40;
    *param_1 = (long)(puVar2 + 3);
    param_1[1] = (long)puVar2;
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 0x70);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a7f8528);
  (*pcVar1)();
}



/* Entry: 10a7f8550; end: 10a7f85df;  */

undefined1  [16] FUN_10a7f8550(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x19;
  auVar1._0_8_ = &UNK_10f65ce18;
  return auVar1;
}



/* Entry: 10a7f85e0; end: 10a7f88af;  */

void FUN_10a7f85e0(ulong param_1)

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
  
  func_0x000109887da8(appuStack_c8,&UNK_10f65ce18,0x19);
  pppuVar1 = (undefined8 ***)appuStack_c8[0];
  if (-1 < cStack_b1) {
    pppuVar1 = appuStack_c8;
  }
  *(undefined ***)(param_1 + 0x1b0) = &PTR_DAT_110c205e8;
  pppuVar2 = (undefined8 ***)&UNK_10f678718;
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
  uStack_58 = 0x1240000012a;
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  uStack_48 = 0;
  uStack_40 = 0;
  ppuStack_a0 = pppuVar1;
  func_0x00010a052690(param_1 + 0x168,&ppuStack_a0);
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    ppuStack_b0 = &PTR_DAT_110c205e8;
    uStack_a8 = 0;
    ppuStack_a0 = (undefined8 **)&PTR_DAT_110c4efc0;
    uStack_98 = 0;
    uStack_90 = CONCAT71(uStack_90._1_7_,1);
    func_0x0001098949cc(param_1,pppuVar1,&ppuStack_b0,&ppuStack_a0);
  }
  if (cStack_b1 < '\0') {
    __ZdlPv(appuStack_c8[0]);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678e4a,FUN_10a814b9c,FUN_10a814c54);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,0x19,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f679074,FUN_10a814ebc,FUN_10a814fa8);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f678eb0,FUN_10a815060,FUN_10a81517c);
  }
  uVar7 = param_1;
  FUN_10a0051e8(param_1,100,1,0xffffffff,0xffffffff,0xffffffff);
  if ((uVar7 & 1) == 0) {
    FUN_10a052828(param_1,&DAT_10f6798ca,FUN_10a815288,FUN_10a815344);
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
      FUN_10a054234(param_1,&ppuStack_a0,param_1 + 0x1b8,&UNK_10f65ce18,0x19);
      FUN_10a05431c(param_1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10a7f8894);
  (*pcVar6)();
}



/* Entry: 10a7f88b0; end: 10a7f894f;  */

void FUN_10a7f88b0(long param_1,long *param_2)

{
  long *plVar1;
  
  func_0x00010aa70acc();
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1d670);
  *(int *)(param_1 + 0xe0) = (int)plVar1;
  FUN_10a7e5834(param_1 + 0xe8,param_2,&PTR_DAT_110c1d2f0);
  FUN_10a7e58e4(param_1 + 0xe8,param_2,0,&PTR_DAT_110c1d310);
  FUN_10a20248c(param_2,&PTR_DAT_110c20520,param_1 + 0x130);
  (**(code **)(*param_2 + 0x58))(param_2,&PTR_s_isDefault_110c1d690,1);
  *(char *)(param_1 + 0x140) = (char)param_2;
  return;
}



/* Entry: 10a7f8950; end: 10a7f8a43;  */

void FUN_10a7f8950(long param_1,long *param_2)

{
  long lVar1;
  undefined1 uStack_3a;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  
  func_0x00010aa70b70();
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1d670,*(undefined4 *)(param_1 + 0xe0));
  FUN_10a009b20(param_2,&PTR_DAT_110c1d2f0,param_1 + 0xe8,&UNK_10f63349d,0xe);
  uStack_3a = 0;
  puStack_38 = &uStack_3a;
  lVar1 = param_1 + 0x108;
  FUN_10a814778(lVar1,&uStack_3a,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  FUN_10a009b20(param_2,&PTR_DAT_110c1d310,lVar1 + 0x18,&UNK_10f63349d,0xe);
  FUN_10a202aac(param_2,&PTR_DAT_110c20520,param_1 + 0x130,&UNK_10f645f59,0x1a);
  (**(code **)(*param_2 + 0x70))
            (param_2,&PTR_s_isDefault_110c1d690,*(undefined1 *)(param_1 + 0x140));
  return;
}



/* Entry: 10a7f8a44; end: 10a7f8ae3;  */

void FUN_10a7f8a44(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *param_1 = puVar1;
  param_1[2] = 0x8000000000000020;
  param_1[1] = 0x19;
  puVar1[1] = 0x636172546e6f7372;
  *puVar1 = 0x65502e7465737341;
  *(undefined8 *)((long)puVar1 + 0x11) = 0x65706f6353676e69;
  *(undefined8 *)((long)puVar1 + 9) = 0x6b636172546e6f73;
  *(undefined1 *)((long)puVar1 + 0x19) = 0;
  return;
}



/* Entry: 10a7f8ae4; end: 10a7f8b47;  */

void FUN_10a7f8ae4(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 uStack_11;
  
  uVar1 = param_2[1];
  puVar2 = (undefined8 *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)param_2 + 0x17);
    puVar2 = param_2;
  }
  if (uVar1 == 0) {
LAB_10a7f8b2c:
    uVar3 = 0;
  }
  else {
    do {
      uVar3 = uVar1;
      if (uVar3 == 0) goto LAB_10a7f8b2c;
      uVar1 = uVar3 - 1;
    } while (*(char *)((long)puVar2 + (uVar3 - 1)) != ':');
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
            (param_1,param_2,uVar3,0xffffffffffffffff,&uStack_11);
  return;
}



/* Entry: 10a7f8b48; end: 10a7f8bcf;  */

float FUN_10a7f8b48(long param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pfVar1 = (float *)(param_1 + (long)(param_2 * 3) * 4);
  fVar2 = *pfVar1;
  fVar4 = SQRT(fVar2 * fVar2 + pfVar1[1] * pfVar1[1] + pfVar1[2] * pfVar1[2]);
  fVar3 = fVar4 * 0.5;
  ___sincosf_stret(fVar3);
  return fVar3 * (fVar2 / (fVar4 + 1e-06));
}



/* Entry: 10a7f8bd0; end: 10a7f8dc3;  */

/* WARNING: Type propagation algorithm not settling */

float FUN_10a7f8bd0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fStack_30;
  float fStack_2c;
  float afStack_28 [10];
  
  lVar5 = 0;
  afStack_28[6] = 1.0;
  afStack_28[0] = 0.0;
  afStack_28[1] = 0.0;
  _fStack_30 = 0x3f800000;
  afStack_28[4] = 0.0;
  afStack_28[5] = 0.0;
  afStack_28[2] = 1.0;
  afStack_28[3] = 0.0;
  do {
    iVar6 = 0;
    pfVar1 = (float *)(param_1 + lVar5 * 0x10);
    fVar8 = pfVar1[2];
    fVar9 = (float)*(undefined8 *)pfVar1;
    fVar11 = (float)((ulong)*(undefined8 *)pfVar1 >> 0x20);
    fVar9 = SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar8 * fVar8);
    if (fVar9 <= 1e-07) {
      fVar9 = 1e-07;
    }
    for (; (pfVar7 = pfVar1 + 1, pfVar2 = &fStack_2c, iVar6 == 1 ||
           (pfVar7 = pfVar1, pfVar2 = &fStack_30, iVar6 != 2)); iVar6 = iVar6 + 1) {
      *(float *)((long)pfVar2 + lVar5 * 0xc) = *pfVar7 / fVar9;
    }
    afStack_28[lVar5 * 3] = fVar8 / fVar9;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  fVar10 = (fStack_30 - afStack_28[2]) - afStack_28[6];
  fVar8 = (afStack_28[2] - fStack_30) - afStack_28[6];
  fVar11 = (afStack_28[6] - fStack_30) - afStack_28[2];
  afStack_28[6] = fStack_30 + afStack_28[2] + afStack_28[6];
  fVar9 = fVar10;
  if (fVar10 <= afStack_28[6]) {
    fVar9 = afStack_28[6];
  }
  bVar3 = 2;
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
    bVar3 = afStack_28[6] < fVar10;
  }
  bVar4 = 3;
  if (fVar11 <= fVar8) {
    fVar11 = fVar8;
    bVar4 = bVar3;
  }
  fVar9 = SQRT(fVar11 + 1.0) * 0.5;
  fVar8 = 0.25 / fVar9;
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      fVar9 = fVar8 * (afStack_28[3] - afStack_28[5]);
    }
  }
  else if (bVar4 == 2) {
    fVar9 = fVar8 * (fStack_2c + afStack_28[1]);
  }
  else {
    fVar9 = fVar8 * (afStack_28[4] + afStack_28[0]);
  }
  return fVar9;
}



/* Entry: 10a7f8dc4; end: 10a7f8ebb;  */

void FUN_10a7f8dc4(float param_1,float param_2,float param_3,undefined8 *param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  undefined1 in_b1;
  undefined1 in_register_00005021;
  undefined1 in_register_00005022;
  undefined1 in_register_00005023;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  FUN_10a7f8b48(param_6,param_7);
  fVar7 = (float)CONCAT13(in_register_00005023,
                          CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1))) *
          (float)CONCAT13(in_register_00005023,
                          CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)));
  fVar9 = param_1 * (float)CONCAT13(in_register_00005023,
                                    CONCAT12(in_register_00005022,
                                             CONCAT11(in_register_00005021,in_b1)));
  fVar10 = fVar9 + param_2 * param_3;
  fVar9 = fVar9 - param_2 * param_3;
  fVar8 = *(float *)(param_5 + (long)(int)param_7 * 4);
  uVar4 = NEON_rev64(CONCAT44(param_3,param_2),4);
  fVar2 = (float)CONCAT13(in_register_00005023,
                          CONCAT12(in_register_00005022,CONCAT11(in_register_00005021,in_b1)));
  fVar5 = (float)uVar4 * fVar2;
  fVar2 = (float)((ulong)uVar4 >> 0x20) * fVar2;
  fVar3 = param_2 * param_1 - fVar5;
  fVar5 = fVar5 + param_2 * param_1;
  fVar6 = fVar2 + param_3 * param_1;
  fVar2 = fVar2 - param_3 * param_1;
  fVar1 = ((param_1 * param_1 + param_2 * param_2) * -2.0 + 1.0) * fVar8;
  param_4[1] = CONCAT44(fVar8 * 0.0,(fVar3 + fVar3) * fVar8);
  *param_4 = CONCAT44((fVar10 + fVar10) * fVar8,((fVar7 + param_2 * param_2) * -2.0 + 1.0) * fVar8);
  param_4[3] = CONCAT44(fVar8 * 0.0,(fVar6 + fVar6) * fVar8);
  param_4[2] = CONCAT17((char)((uint)fVar1 >> 0x18),
                        CONCAT16((char)((uint)fVar1 >> 0x10),
                                 CONCAT15((char)((uint)fVar1 >> 8),
                                          CONCAT14(SUB41(fVar1,0),(fVar9 + fVar9) * fVar8))));
  param_4[5] = CONCAT44(fVar8 * 0.0,((param_1 * param_1 + fVar7) * -2.0 + 1.0) * fVar8);
  param_4[4] = CONCAT44((fVar2 + fVar2) * fVar8,(fVar5 + fVar5) * fVar8);
  param_4[6] = 0;
  param_4[7] = 0x3f80000000000000;
  return;
}



/* Entry: 10a7f8ebc; end: 10a7f90f7;  */

void FUN_10a7f8ebc(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  long lStack_d0;
  long lStack_c8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  uStack_88 = 0;
  lStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0x3f800000;
  for (lVar12 = *(long *)(param_2 + 0x198); lVar12 != param_2 + 400; lVar12 = *(long *)(lVar12 + 8))
  {
    lVar10 = *(long *)(lVar12 + 0x10);
    lVar5 = *param_3;
    FUN_10a7fdc3c(lVar5,param_3[1],lVar10);
    if (lVar5 != 0) {
      uVar2 = *(undefined4 *)(lVar5 + 0x18);
      lVar6 = lStack_90;
      func_0x00010a7fdd08(lStack_90,uStack_88,uVar2);
      if (lVar6 != 0) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        goto LAB_10a7f9078;
      }
      plVar7 = &lStack_90;
      FUN_10a7fdda0(plVar7,uVar2,(undefined4 *)(lVar5 + 0x18));
      plVar7[3] = lVar10;
    }
  }
  lStack_b0 = 0;
  lStack_a8 = 0;
  lStack_a0 = 0;
  FUN_10a7fdb80(&lStack_b0,param_2);
  lVar12 = *param_3;
  FUN_10a7fdc3c(lVar12,param_3[1],param_2);
  if (lVar12 == 0) {
    FUN_109ffdddc(&UNK_10f639994);
  }
  else {
    iVar3 = *(int *)(lVar12 + 0x18);
    uVar9 = (param_4[1] - *param_4 >> 3) * -0x5555555555555555;
    if ((ulong)(long)iVar3 <= uVar9 && uVar9 - (long)iVar3 != 0) {
      puVar8 = (undefined8 *)(*param_4 + (long)iVar3 * 0x18);
      puVar11 = (undefined4 *)*puVar8;
      puVar1 = (undefined4 *)puVar8[1];
      do {
        if (puVar11 == puVar1) {
          param_1[1] = lStack_a8;
          *param_1 = lStack_b0;
          param_1[2] = lStack_a0;
LAB_10a7f9078:
          FUN_10a7fe398(&lStack_90);
          return;
        }
        uVar2 = *puVar11;
        lVar12 = lStack_90;
        uStack_b4 = uVar2;
        func_0x00010a7fdd08(lStack_90,uStack_88,uVar2);
        if (lVar12 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
LAB_10a7f9068:
          if (lStack_b0 != 0) {
            lStack_a8 = lStack_b0;
            __ZdlPv();
          }
          goto LAB_10a7f9078;
        }
        plVar7 = &lStack_90;
        FUN_10a7fdda0(plVar7,uVar2,&uStack_b4);
        FUN_10a7f8ebc(&lStack_d0,plVar7[3],param_3,param_4);
        lVar5 = lStack_c8;
        lVar12 = lStack_d0;
        if (lStack_d0 == lStack_c8) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[2] = 0;
        }
        else {
          FUN_10a7fe150(&lStack_b0,lStack_a8,lStack_d0,lStack_c8,lStack_c8 - lStack_d0 >> 3);
        }
        if (lVar12 != 0) {
          __ZdlPv(lVar12);
        }
        if (lVar12 == lVar5) goto LAB_10a7f9068;
        puVar11 = puVar11 + 1;
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a7f90b0);
  (*pcVar4)();
}



/* Entry: 10a7f90f8; end: 10a7f9117;  */

undefined1  [16] FUN_10a7f90f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x26;
  auVar1._0_8_ = &UNK_10f67a217;
  return auVar1;
}



/* Entry: 10a7f9118; end: 10a7f917f;  */

bool FUN_10a7f9118(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf67a217;
    _memcmp(&UNK_10f67a217,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7f9180; end: 10a7f9187;  */

bool FUN_10a7f9180(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x26) {
    iVar2 = 0xf67a217;
    _memcmp(&UNK_10f67a217,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if (param_3 == 0x21) {
    iVar2 = 0xf69fa3d;
    _memcmp(&UNK_10f69fa3d,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0x14) &&
     ((*param_2 == 0x624f7265646e6552 && param_2[1] == 0x766f72507463656a) &&
      (int)param_2[2] == 0x72656469)) {
    return true;
  }
  if (param_3 == 0xc) {
    bVar1 = false;
    if (*param_2 == 0x624f747069726353) {
      bVar1 = (int)param_2[1] == 0x7463656a;
    }
  }
  else {
    if (param_3 != 8) {
      return false;
    }
    bVar1 = *param_2 == 0x72656469766f7250;
  }
  return bVar1;
}



/* Entry: 10a7f9188; end: 10a7f92af;  */

void FUN_10a7f9188(undefined8 param_1)

{
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  uStack_90 = 0xffffffff00000001;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  puStack_80 = &UNK_10f678718;
  uStack_78 = 0;
  puStack_70 = &UNK_10f678718;
  uStack_68 = 0;
  uStack_60 = 0x118;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a7f92b0(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6798d6;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000064;
  puStack_70 = &UNK_10f678718;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = &UNK_10f678718;
  uStack_38 = 0;
  FUN_10a8155f4();
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f678e4a;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  func_0x00010a815898(param_1,&puStack_98);
  uStack_90 = 0;
  uStack_88 = 0;
  puStack_98 = &DAT_10f6798e0;
  uStack_78 = 0xffffffffffffffff;
  puStack_80 = (undefined *)0x100000019;
  uStack_68 = 0;
  puStack_70 = (undefined *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  puStack_40 = (undefined *)0x0;
  uStack_38 = 0;
  FUN_10a815b40(param_1,&puStack_98);
  FUN_10a815d3c(param_1);
  return;
}



/* Entry: 10a7f92b0; end: 10a7f9387;  */

/* WARNING: Removing unreachable block (ram,0x00010a7f9348) */

undefined1  [16] FUN_10a7f92b0(undefined8 param_1,long param_2)

{
  undefined1 **ppuVar1;
  undefined1 auVar2 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [24];
  
  ppuVar1 = &puStack_90;
  func_0x000109887da8(auStack_48,&UNK_10f67a217,0x26);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a8154f8(param_1,&puStack_90,100);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a7f9388; end: 10a7f9613;  */

long * FUN_10a7f9388(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined4 auStack_80 [2];
  long *plStack_78;
  long lStack_70;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long **pplStack_38;
  
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x33] = (long)&PTR_FUN_110c383b8;
  *(undefined2 *)(param_1 + 0x36) = 0x100;
  plVar5 = param_1;
  FUN_10ac63ebc(param_1,&PTR_PTR_110c1d910,param_2);
  FUN_10a0040d0(plVar5 + 0x1d,&PTR_PTR_110c1d940);
  *param_1 = (long)&PTR_FUN_110c1d6e8;
  param_1[2] = (long)&PTR_FUN_110c1d7c8;
  param_1[5] = (long)&PTR_DAT_110c1d7f8;
  param_1[0x33] = (long)&PTR_DAT_110c1d8d0;
  param_1[0x1d] = (long)&PTR_DAT_110c1d858;
  *(undefined4 *)(param_1 + 0x22) = 0;
  plVar5 = param_1 + 0x23;
  param_1[0x2d] = 0;
  param_1[0x24] = 0;
  *plVar5 = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  if ((*(byte *)(param_1 + 0x36) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x36) = 1;
    param_1[0x35] = param_2;
    if (param_2 != 0) {
      param_1[0x34] = *(long *)(*(long *)(param_2 + 0x850) + 0x2c);
    }
  }
  FUN_10a5ae998(param_1[0x20],&PTR_DAT_110b99f08,param_2,param_1 + 0x1d);
  *(undefined4 *)((long)param_1 + 0x74) = 0;
  FUN_10a0d0194(auStack_80,&pplStack_38);
  func_0x00010a19b5ac(plVar5,auStack_80);
  plVar4 = plStack_78;
  if (plStack_78 != (long *)0x0) {
    plVar1 = plStack_78 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_78 + 0x10))(plStack_78);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
    }
  }
  *(undefined8 *)(*plVar5 + 0xe8) = 1;
  FUN_10a7e2c24(auStack_80);
  lVar6 = *plVar5;
  *(undefined4 *)(lVar6 + 0xf0) = auStack_80[0];
  if ((undefined4 *)(lVar6 + 0xf0) != auStack_80) {
    FUN_10a1903c4(lVar6 + 0xf8,plStack_78,lStack_70,
                  (lStack_70 - (long)plStack_78 >> 3) * 0x6db6db6db6db6db7);
  }
  *(undefined8 *)(lVar6 + 0x118) = uStack_58;
  *(undefined8 *)(lVar6 + 0x110) = uStack_60;
  *(undefined8 *)(lVar6 + 0x128) = uStack_48;
  *(undefined8 *)(lVar6 + 0x120) = uStack_50;
  *(undefined8 *)(lVar6 + 0x130) = uStack_40;
  pplStack_38 = &plStack_78;
  func_0x00010a190844(&pplStack_38);
  if (*(char *)((long)param_1 + 0xba) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xba) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if (*(char *)((long)param_1 + 0xb9) != '\x01') {
    *(undefined1 *)((long)param_1 + 0xb9) = 1;
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  return param_1;
}



/* Entry: 10a7f9614; end: 10a7f971b;  */

void FUN_10a7f9614(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f6798ef,0x2b);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7f971c; end: 10a7f9723;  */

void FUN_10a7f971c(undefined8 param_1)

{
  undefined **appuStack_150 [2];
  undefined **ppuStack_140;
  undefined **ppuStack_138;
  undefined1 auStack_130 [56];
  undefined8 uStack_f8;
  char cStack_e1;
  undefined **appuStack_d0 [19];
  undefined1 uStack_31;
  
  FUN_109febc44(appuStack_150);
  FUN_10a002568(&ppuStack_140,&UNK_10f6798ef,0x2b);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_138,&uStack_31);
  appuStack_150[0] = &PTR_SUB_1108a5a38;
  ppuStack_140 = &PTR_DAT_1108a5a60;
  appuStack_d0[0] = &PTR_DAT_1108a5a88;
  ppuStack_138 = &PTR_DAT_11088d7b0;
  if (cStack_e1 < '\0') {
    __ZdlPv(uStack_f8);
  }
  ppuStack_138 = (undefined **)
                 (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  __ZNSt3__16localeD1Ev(auStack_130);
  __ZNSt3__114basic_iostreamIcNS_11char_traitsIcEEED2Ev(appuStack_150,&PTR_PTR_1108a5aa0);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_d0);
  return;
}



/* Entry: 10a7f9724; end: 10a7f9787;  */

void FUN_10a7f9724(long param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined ***pppuVar2;
  long *plVar3;
  undefined **ppuVar4;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 *puStack_a8;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined1 uStack_50;
  long lStack_28;
  
  plVar3 = param_2;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1d960);
  *(int *)(param_1 + 0x110) = (int)plVar3;
  FUN_10a7e5834(param_1 + 0x128,param_2,&PTR_DAT_110c1d2f0);
  ppuVar4 = &PTR_DAT_110c1d980;
  lStack_58 = param_1 + 0x128;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_68 = FUN_10a8146d0;
  ppuStack_60 = &PTR_FUN_110c201f8;
  uStack_50 = 0;
  FUN_10a7e353c(param_2,&PTR_DAT_110c1d980,&pcStack_68,0);
  pppuVar1 = &ppuStack_60;
  (*(code *)*ppuStack_60)();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  (*(code *)*ppuStack_60)(&ppuStack_60);
  __Unwind_Resume();
  func_0x00010aa70b70();
  (**(code **)(*ppuVar4 + 0x40))(ppuVar4,&PTR_DAT_110c1bae8,*(undefined4 *)(pppuVar1 + 0x1c));
  FUN_10a009b20(ppuVar4,&PTR_DAT_110c1bb08,pppuVar1 + 0x1f,&UNK_10f63349d,0xe);
  uStack_aa = 0;
  puStack_a8 = &uStack_aa;
  pppuVar2 = pppuVar1 + 0x23;
  FUN_10a814778(pppuVar2,&uStack_aa,&UNK_10dd5b8f9,&puStack_a8,&uStack_a9);
  FUN_10a009b20(ppuVar4,&PTR_DAT_110c1bb28,pppuVar2 + 3,&UNK_10f63349d,0xe);
  FUN_10a202aac(ppuVar4,&PTR_DAT_110c20520,pppuVar1 + 0x1d,&UNK_10f645f59,0x1a);
  (**(code **)(*ppuVar4 + 0x70))
            (ppuVar4,&PTR_s_isDefault_110c1bb48,*(undefined1 *)(pppuVar1 + 0x28));
  return;
}



/* Entry: 10a7f9788; end: 10a7f98df;  */

void FUN_10a7f9788(long param_1,long *param_2)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  puStack_48 = &UNK_10f67a217;
  uStack_40 = 0x26;
  (**(code **)(*param_2 + 0x30))(param_2,&PTR_DAT_110c1f658,&puStack_48);
  (**(code **)(*param_2 + 0x40))(param_2,&PTR_DAT_110c1d960,*(undefined4 *)(param_1 + 0x110));
  FUN_10a009b20(param_2,&PTR_DAT_110c1d2f0,param_1 + 0x128,&UNK_10f63349d,0xe);
  uStack_32 = 0;
  puStack_48 = &uStack_32;
  param_1 = param_1 + 0x148;
  FUN_10a814778(param_1,&uStack_32,&UNK_10dd5b8f9,&puStack_48,&uStack_31);
  FUN_10a009b20(param_2,&PTR_DAT_110c1d980,param_1 + 0x18,&UNK_10f63349d,0xe);
  return;
}



/* Entry: 10a7f98e0; end: 10a7f9ab3;  */

void FUN_10a7f98e0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lStack_68;
  long *plStack_60;
  char cStack_51;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  FUN_10a7e20bc(param_1 + 0x128);
  FUN_10a7e2370(param_1 + 0x128,0);
  lStack_68 = *(long *)(param_1 + 0x138);
  plVar2 = *(long **)(param_1 + 0x140);
  plStack_60 = plVar2;
  if (plVar2 == (long *)0x0) {
    if (lStack_68 == 0) {
      return;
    }
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lStack_68 == 0) {
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 != 0) {
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      return;
    }
  }
  uVar5 = param_1 + 0x128;
  FUN_10a7e26a4(uVar5,0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if ((uVar5 & 1) != 0) {
    cStack_51 = '\t';
    uVar5 = (ulong)plStack_60 >> 0x10;
    plStack_60 = (long *)CONCAT62((int6)uVar5,0x79);
    lStack_68 = 0x646f427265707075;
    plStack_48 = *(long **)(param_1 + 0x140);
    uStack_50 = *(undefined8 *)(param_1 + 0x138);
    if (*(long *)(param_1 + 0x140) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x140) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_40 = *(undefined4 *)(param_1 + 0x110);
    uStack_3c = 0x40;
    uStack_38 = 0;
    if ((*(byte *)(param_2 + 0x2d0) & 1) == 0) {
      *(undefined8 *)(param_2 + 0x2b8) = 0;
      *(undefined8 *)(param_2 + 0x2c0) = 0;
      *(undefined8 *)(param_2 + 0x2c8) = 0;
      *(undefined1 *)(param_2 + 0x2d0) = 1;
    }
    FUN_10aacfb98((undefined8 *)(param_2 + 0x2b8),&lStack_68);
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (cStack_51 < '\0') {
      __ZdlPv(lStack_68);
    }
  }
  return;
}



/* Entry: 10a7f9ab4; end: 10a7f9abb;  */

void FUN_10a7f9ab4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lStack_68;
  long *plStack_60;
  char cStack_51;
  undefined8 uStack_50;
  long *plStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 uStack_38;
  
  FUN_10a7e20bc(param_1 + 0x40);
  FUN_10a7e2370(param_1 + 0x40,0);
  lStack_68 = *(long *)(param_1 + 0x50);
  plVar2 = *(long **)(param_1 + 0x58);
  plStack_60 = plVar2;
  if (plVar2 == (long *)0x0) {
    if (lStack_68 == 0) {
      return;
    }
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lStack_68 == 0) {
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 != 0) {
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      return;
    }
  }
  uVar5 = param_1 + 0x40;
  FUN_10a7e26a4(uVar5,0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if ((uVar5 & 1) != 0) {
    cStack_51 = '\t';
    uVar5 = (ulong)plStack_60 >> 0x10;
    plStack_60 = (long *)CONCAT62((int6)uVar5,0x79);
    lStack_68 = 0x646f427265707075;
    plStack_48 = *(long **)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    if (*(long *)(param_1 + 0x58) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x58) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_40 = *(undefined4 *)(param_1 + 0x28);
    uStack_3c = 0x40;
    uStack_38 = 0;
    if ((*(byte *)(param_2 + 0x2d0) & 1) == 0) {
      *(undefined8 *)(param_2 + 0x2b8) = 0;
      *(undefined8 *)(param_2 + 0x2c0) = 0;
      *(undefined8 *)(param_2 + 0x2c8) = 0;
      *(undefined1 *)(param_2 + 0x2d0) = 1;
    }
    FUN_10aacfb98((undefined8 *)(param_2 + 0x2b8),&lStack_68);
    plVar2 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plStack_48 + 0x10))(plStack_48);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (cStack_51 < '\0') {
      __ZdlPv(lStack_68);
    }
  }
  return;
}



/* Entry: 10a7f9abc; end: 10a7f9ce7;  */

void FUN_10a7f9abc(long *param_1,undefined *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined **unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar5 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)plVar5 + 0x74) = 0;
    unaff_x23 = plVar5[0x27];
    plVar7 = (long *)plVar5[0x28];
    *(long *)((long)register0x00000008 + -0x80) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x78) = plVar7;
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    unaff_x21 = *(undefined **)(param_2 + 0x80);
    param_2 = &UNK_10f67a23e;
    func_0x00010aacfd38(unaff_x21,&UNK_10f67a23e,9,(int)plVar5[0x22]);
    if (((unaff_x23 != 0 && unaff_x21 != (undefined *)0x0) && (*(int *)(unaff_x21 + 0x38) != 0)) &&
       (((byte)unaff_x21[0x10] >> 4 & 1) != 0)) {
      func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x70),"body");
      func_0x0001074e1df0((undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0x70),1);
      if (*(char *)((long)register0x00000008 + -0x59) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x70));
      }
      unaff_x22 = plVar5 + 0x2e;
      puVar6 = (undefined1 *)((long)register0x00000008 + -0xa8);
      FUN_10a513e58(puVar6,unaff_x22);
      unaff_x24 = &PTR_PTR_1132cfc60;
      if (((ulong)puVar6 & 1) == 0) {
        ppuVar2 = unaff_x24;
        if (*(undefined ***)(unaff_x23 + 0x68) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(unaff_x23 + 0x68);
        }
        unaff_x25 = (long *)((long)register0x00000008 + -0xa8);
        FUN_10a7e3e7c(plVar5[0x23],ppuVar2,(undefined1 *)((long)register0x00000008 + -0xa8));
        if (unaff_x22 != unaff_x25) {
          *(undefined4 *)(plVar5 + 0x32) = *(undefined4 *)((long)register0x00000008 + -0x88);
          func_0x00010729c334(unaff_x22,*(undefined8 *)((long)register0x00000008 + -0x98),0);
        }
      }
      ppuVar2 = unaff_x24;
      if (*(undefined ***)(unaff_x23 + 0x68) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(unaff_x23 + 0x68);
      }
      param_2 = unaff_x21;
      FUN_10a7e4114(plVar5[0x23],unaff_x21,ppuVar2,&UNK_10e482af0);
      *(undefined4 *)((long)plVar5 + 0x74) = 2;
      func_0x000107c2826c((undefined1 *)((long)register0x00000008 + -0xa8));
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 1;
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
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    unaff_x20 = plVar5;
    (**(code **)(*plVar5 + 0xa0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x59) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x70));
    }
    func_0x00010a052434((undefined1 *)((long)register0x00000008 + -0x80));
    (**(code **)(*plVar5 + 0xa0))(plVar5);
    __Unwind_Resume(unaff_x20);
    unaff_x30 = FUN_10a7f9ce8;
    plVar7 = unaff_x20;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    param_1 = plVar7 + -0x1d;
    unaff_x19 = plVar5;
  }
  return;
}



/* Entry: 10a7f9ce8; end: 10a7f9cef;  */

void FUN_10a7f9ce8(long *param_1,undefined *param_2)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  long *unaff_x19;
  long *unaff_x20;
  undefined *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined **unaff_x24;
  long *unaff_x25;
  undefined8 unaff_x26;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar7 = param_1 + -0x1d;
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(long **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(undefined ***)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    *(undefined4 *)((long)param_1 + -0x74) = 0;
    unaff_x23 = param_1[10];
    plVar3 = (long *)param_1[0xb];
    *(long *)((long)register0x00000008 + -0x80) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x78) = plVar3;
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    unaff_x21 = *(undefined **)(param_2 + 0x80);
    param_2 = &UNK_10f67a23e;
    func_0x00010aacfd38(unaff_x21,&UNK_10f67a23e,9,(int)param_1[5]);
    if (((unaff_x23 != 0 && unaff_x21 != (undefined *)0x0) && (*(int *)(unaff_x21 + 0x38) != 0)) &&
       (((byte)unaff_x21[0x10] >> 4 & 1) != 0)) {
      func_0x000107c2b054((undefined1 *)((long)register0x00000008 + -0x70),"body");
      func_0x0001074e1df0((undefined1 *)((long)register0x00000008 + -0xa8),
                          (undefined1 *)((long)register0x00000008 + -0x70),1);
      if (*(char *)((long)register0x00000008 + -0x59) < '\0') {
        __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x70));
      }
      unaff_x22 = param_1 + 0x11;
      puVar6 = (undefined1 *)((long)register0x00000008 + -0xa8);
      FUN_10a513e58(puVar6,unaff_x22);
      unaff_x24 = &PTR_PTR_1132cfc60;
      if (((ulong)puVar6 & 1) == 0) {
        ppuVar2 = unaff_x24;
        if (*(undefined ***)(unaff_x23 + 0x68) != (undefined **)0x0) {
          ppuVar2 = *(undefined ***)(unaff_x23 + 0x68);
        }
        unaff_x25 = (long *)((long)register0x00000008 + -0xa8);
        FUN_10a7e3e7c(param_1[6],ppuVar2,(undefined1 *)((long)register0x00000008 + -0xa8));
        if (unaff_x22 != unaff_x25) {
          *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)((long)register0x00000008 + -0x88);
          func_0x00010729c334(unaff_x22,*(undefined8 *)((long)register0x00000008 + -0x98),0);
        }
      }
      ppuVar2 = unaff_x24;
      if (*(undefined ***)(unaff_x23 + 0x68) != (undefined **)0x0) {
        ppuVar2 = *(undefined ***)(unaff_x23 + 0x68);
      }
      param_2 = unaff_x21;
      FUN_10a7e4114(param_1[6],unaff_x21,ppuVar2,&UNK_10e482af0);
      *(undefined4 *)((long)param_1 + -0x74) = 2;
      func_0x000107c2826c((undefined1 *)((long)register0x00000008 + -0xa8));
    }
    if (plVar3 != (long *)0x0) {
      plVar1 = plVar3 + 1;
      do {
        lVar8 = *plVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = lVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
      }
    }
    unaff_x20 = plVar7;
    (**(code **)(*plVar7 + 0xa0))();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58))
    break;
    ___stack_chk_fail();
    if (*(char *)((long)register0x00000008 + -0x59) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x70));
    }
    func_0x00010a052434((undefined1 *)((long)register0x00000008 + -0x80));
    (**(code **)(*plVar7 + 0xa0))(plVar7);
    __Unwind_Resume(unaff_x20);
    unaff_x30 = FUN_10a7f9ce8;
    param_1 = unaff_x20;
    func_0x000104bd46a0();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xb0);
    unaff_x19 = plVar7;
  }
  return;
}



/* Entry: 10a7f9cf0; end: 10a7f9d1f;  */

/* WARNING: Removing unreachable block (ram,0x00010a14edfc) */
/* WARNING: Removing unreachable block (ram,0x00010a14ee00) */
/* WARNING: Removing unreachable block (ram,0x00010a14ee24) */
/* WARNING: Removing unreachable block (ram,0x00010a14ee28) */
/* WARNING: Removing unreachable block (ram,0x00010a14ee30) */

void FUN_10a7f9cf0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_10a7e1f90(param_1 + 0x128);
  plVar1 = (long *)(param_1 + 0x170);
  lVar3 = 0;
  lVar2 = *(long *)(param_1 + 0x178);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(*plVar1 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar2 != lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x180);
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    lVar3 = 0;
    func_0x000107c28270(plVar1,uVar4);
  }
  for (; lVar3 != 0; lVar3 = lVar3 + 0x18) {
    func_0x000107c2827c(plVar1,lVar3,lVar3);
  }
  return;
}



/* Entry: 10a7f9d20; end: 10a7f9d2f;  */

void FUN_10a7f9d20(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 uStack_2a;
  undefined1 uStack_29;
  undefined1 *puStack_28;
  
  lVar1 = param_1 + 0x128;
  uStack_2a = 0;
  puStack_28 = &uStack_2a;
  param_1 = param_1 + 0x148;
  FUN_10a814778(param_1,&uStack_2a,&UNK_10dd5b8f9,&puStack_28,&uStack_29);
  FUN_10a7f82b8(param_1 + 0x18,param_2);
  lVar2 = lVar1;
  FUN_10a7f8334(lVar1,uStack_2a);
  if (lVar2 != 0) {
    if ((*(ulong *)(lVar2 + 0x38) & 3) != 0) {
      puVar3 = (undefined8 *)(*(ulong *)(lVar2 + 0x38) & 0xfffffffffffffffc);
      if (*(char *)((long)puVar3 + 0x17) < '\0') {
        *(undefined1 *)*puVar3 = 0;
        puVar3[1] = 0;
      }
      else {
        *(undefined1 *)puVar3 = 0;
        *(undefined1 *)((long)puVar3 + 0x17) = 0;
      }
    }
    *(uint *)(lVar2 + 0x10) = *(uint *)(lVar2 + 0x10) & 0xfffffffd;
  }
  FUN_10a7e2370(lVar1,uStack_2a);
  return;
}



/* Entry: 10a7f9d30; end: 10a7f9e1f;  */

undefined8 * FUN_10a7f9d30(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  *param_1 = &PTR_DAT_110c1d9b0;
  param_1[1] = uVar4;
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = *param_2;
    plVar6 = (long *)param_2[1];
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 1;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      param_1[3] = uVar4;
      param_1[4] = plVar6;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar3 = false;
      goto LAB_10a7f9db0;
    }
  }
  plVar6 = (long *)0x0;
  param_1[3] = uVar4;
  param_1[4] = 0;
  bVar3 = true;
LAB_10a7f9db0:
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  if (!bVar3) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



/* Entry: 10a7f9e20; end: 10a7f9fe3;  */

void FUN_10a7f9e20(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lStack_78;
  long *plStack_70;
  char cStack_61;
  undefined8 uStack_60;
  long *plStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  lVar7 = *(long *)(param_1 + 8);
  lStack_78 = *(long *)(lVar7 + 0x130);
  plVar2 = *(long **)(lVar7 + 0x138);
  plStack_70 = plVar2;
  if (plVar2 == (long *)0x0) {
    if (lStack_78 == 0) {
      return;
    }
  }
  else {
    plVar1 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lStack_78 == 0) {
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 != 0) {
        return;
      }
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      return;
    }
  }
  uVar5 = lVar7 + 0x120;
  FUN_10a7e26a4(uVar5,0);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  if ((uVar5 & 1) != 0) {
    cStack_61 = '\t';
    uVar5 = (ulong)plStack_70 >> 0x10;
    plStack_70 = (long *)CONCAT62((int6)uVar5,0x79);
    lStack_78 = 0x646f427265707075;
    plStack_58 = *(long **)(lVar7 + 0x138);
    uStack_60 = *(undefined8 *)(lVar7 + 0x130);
    if (*(long *)(lVar7 + 0x138) != 0) {
      plVar2 = (long *)(*(long *)(lVar7 + 0x138) + 8);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = *plVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    uStack_50 = *(undefined4 *)(param_1 + 0xa0);
    uStack_4c = 0;
    uStack_48 = 0;
    if ((*(byte *)(param_2 + 0x2d0) & 1) == 0) {
      *(undefined8 *)(param_2 + 0x2b8) = 0;
      *(undefined8 *)(param_2 + 0x2c0) = 0;
      *(undefined8 *)(param_2 + 0x2c8) = 0;
      *(undefined1 *)(param_2 + 0x2d0) = 1;
    }
    FUN_10aacfb98((undefined8 *)(param_2 + 0x2b8),&lStack_78);
    plVar2 = plStack_58;
    if (plStack_58 != (long *)0x0) {
      plVar1 = plStack_58 + 1;
      do {
        lVar7 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar7 == 0) {
        (**(code **)(*plStack_58 + 0x10))(plStack_58);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
      }
    }
    if (cStack_61 < '\0') {
      __ZdlPv(lStack_78);
    }
  }
  return;
}



/* Entry: 10a7f9fe4; end: 10a7f9feb;  */

void FUN_10a7f9fe4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  return;
}



/* Entry: 10a7f9fec; end: 10a7fa127;  */

long FUN_10a7f9fec(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined **ppuVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  
  lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x130);
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x138);
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar8 != 0) {
    lVar6 = *(long *)(param_2 + 0x80);
    func_0x00010aacfd38(lVar6,&UNK_10f67a23e,9,*(undefined4 *)(param_1 + 0xa0));
    if (lVar6 != 0) {
      ppuVar7 = *(undefined ***)(lVar8 + 0x68);
      ppuVar2 = &PTR_PTR_1132cfc60;
      if (ppuVar7 != (undefined **)0x0) {
        ppuVar2 = ppuVar7;
      }
      ppuVar7 = &PTR_PTR_1132d70f0;
      if ((undefined **)ppuVar2[0x1a] != (undefined **)0x0) {
        ppuVar7 = (undefined **)ppuVar2[0x1a];
      }
      param_1 = param_1 + 0x18;
      FUN_10a7e6300(param_1,lVar6,ppuVar7,param_3,param_4,param_5,param_6,&UNK_10e482af0);
      goto joined_r0x00010a7fa0bc;
    }
  }
  param_1 = 0;
joined_r0x00010a7fa0bc:
  if (plVar3 != (long *)0x0) {
    plVar1 = plVar3 + 1;
    do {
      lVar8 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar8 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
    }
  }
  return param_1;
}



/* Entry: 10a7fa128; end: 10a7fa14f;  */

void FUN_10a7fa128(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(param_2 + 0x98);
  uVar5 = *(undefined8 *)(param_2 + 0x90);
  param_1[1] = *(undefined8 *)(param_2 + 0x98);
  *param_1 = uVar5;
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
  return;
}



/* Entry: 10a7fa150; end: 10a7fa43b;  */

long * FUN_10a7fa150(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined **ppuVar4;
  char cVar5;
  bool bVar6;
  code **ppcVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  undefined **ppuVar13;
  code *pcVar14;
  undefined8 uStack_f8;
  long *plStack_f0;
  code *pcStack_e8;
  undefined **ppuStack_e0;
  undefined8 *puStack_d8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = 0;
  plStack_f0 = (long *)0x0;
  lVar12 = *(long *)(param_2 + 8);
  pcStack_e8 = FUN_10a815e84;
  ppuStack_e0 = &PTR_FUN_110c20270;
  puStack_d8 = &uStack_f8;
  if (lVar12 == 0) {
    pcStack_a8 = (code *)0x0;
    FUN_10a2e9e64(&pcStack_e8,&pcStack_a8);
    goto LAB_10a7fa314;
  }
  if (param_3 == 0) {
    FUN_10a00a184(&pcStack_a8,lVar12);
    FUN_10a815df8(&pcStack_e8,&pcStack_a8);
    if (ppuStack_a0 == (undefined **)0x0) goto LAB_10a7fa314;
    ppuVar4 = ppuStack_a0 + 1;
    do {
      puVar11 = *ppuVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
      if (bVar6) {
        *ppuVar4 = puVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_10a7fa2f8:
    ppuVar4 = ppuStack_a0;
    if (puVar11 == (undefined *)0x0) {
      (**(code **)(*ppuStack_a0 + 0x10))(ppuStack_a0);
      __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar4);
    }
  }
  else {
    pcVar3 = *(code **)(lVar12 + 0x40);
    ppuVar4 = *(undefined ***)(lVar12 + 0x48);
    if (*(char *)(param_3 + 0xb8) == '\x01') {
      pcStack_a8 = FUN_10a815e84;
      ppuStack_a0 = &PTR_FUN_110c20270;
      puStack_98 = &uStack_f8;
      FUN_10a069d9c(param_3,pcVar3,ppuVar4,&pcStack_a8);
    }
    else {
      lVar8 = param_3 + 0x88;
      pcStack_a8 = pcVar3;
      ppuStack_a0 = ppuVar4;
      func_0x00010a35bf90(lVar8,&pcStack_a8);
      pppuVar2 = &ppuStack_a0;
      ppcVar7 = &pcStack_a8;
      if (lVar8 != 0) {
        pppuVar2 = (undefined ***)(lVar8 + 0x28);
        ppcVar7 = (code **)(lVar8 + 0x20);
      }
      ppuVar13 = *pppuVar2;
      pcVar14 = *ppcVar7;
      if (pcVar3 == pcVar14 && ppuVar4 == ppuVar13) {
        FUN_10a00a184(&pcStack_a8,lVar12);
        FUN_10a815df8(&pcStack_e8,&pcStack_a8);
        if (ppuStack_a0 == (undefined **)0x0) goto LAB_10a7fa314;
        ppuVar4 = ppuStack_a0 + 1;
        do {
          puVar11 = *ppuVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(ppuVar4,0x10);
          if (bVar6) {
            *ppuVar4 = puVar11 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        goto LAB_10a7fa2f8;
      }
      pcStack_a8 = pcStack_e8;
      (*(code *)ppuStack_e0[3])(&ppuStack_a0,&ppuStack_e0);
      FUN_10a069d9c(param_3,pcVar14,ppuVar13,&pcStack_a8);
    }
    (*(code *)*ppuStack_a0)(&ppuStack_a0);
  }
LAB_10a7fa314:
  (*(code *)*ppuStack_e0)(&ppuStack_e0);
  lVar8 = 0xa8;
  __Znwm();
  lVar12 = lVar8;
  FUN_10a7f9d30();
  *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  plVar9 = (long *)(lVar12 + 0x18);
  FUN_10a7e7b20(plVar9,param_3,param_2 + 0x18);
  plVar10 = plStack_f0;
  *param_1 = lVar8;
  if (plStack_f0 != (long *)0x0) {
    plVar1 = plStack_f0 + 1;
    do {
      lVar12 = *plVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*plStack_f0 + 0x10))(plStack_f0);
      __ZNSt3__119__shared_weak_count14__release_weakEv();
      plVar9 = plVar10;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    func_0x00010a0548c0(&pcStack_a8);
    (*(code *)*ppuStack_e0)(&ppuStack_e0);
    func_0x00010a0548c0(&uStack_f8);
    __Unwind_Resume();
    *plVar9 = (long)&PTR_FUN_110c1b600;
    plVar9[2] = (long)&PTR_FUN_110c1b6a0;
    plVar9[7] = (long)&PTR_FUN_110c1b6f8;
    if (*(char *)((long)plVar9 + 0xff) < '\0') {
      __ZdlPv(plVar9[0x1d]);
    }
    *plVar9 = (long)&PTR_FUN_110c3ec18;
    plVar9[2] = (long)&PTR_DAT_110c3ecb8;
    plVar9[7] = (long)&PTR_DAT_110c3ed10;
    func_0x00010aa92258(plVar9 + 0x1a);
    if (plVar9[0x19] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    __ZNSt3__15mutexD1Ev(plVar9 + 0x10);
    if (plVar9[0xf] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    if (*(char *)((long)plVar9 + 0x6f) < '\0') {
      __ZdlPv(plVar9[0xb]);
    }
    if (plVar9[6] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
    plVar9[2] = (long)&PTR_DAT_110b17898;
    func_0x00010a004dac(plVar9 + 3);
    return plVar9;
  }
  return plVar9;
}



/* Entry: 10a7fa43c; end: 10a7fa43f;  */

undefined8 * FUN_10a7fa43c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b600;
  param_1[2] = &PTR_FUN_110c1b6a0;
  param_1[7] = &PTR_FUN_110c1b6f8;
  if (*(char *)((long)param_1 + 0xff) < '\0') {
    __ZdlPv(param_1[0x1d]);
  }
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



/* Entry: 10a7fa440; end: 10a7fa453;  */

void FUN_10a7fa440(void)

{
  FUN_10a7fff74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fa454; end: 10a7fa45b;  */

undefined8 * FUN_10a7fa454(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_FUN_110c1b600;
  *param_1 = &PTR_FUN_110c1b6a0;
  param_1[5] = &PTR_FUN_110c1b6f8;
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    __ZdlPv(param_1[0x1b]);
  }
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a7fa45c; end: 10a7fa473;  */

void FUN_10a7fa45c(long param_1)

{
  FUN_10a7fff74(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fa474; end: 10a7fa47b;  */

undefined8 * FUN_10a7fa474(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -7;
  *puVar1 = &PTR_FUN_110c1b600;
  param_1[-5] = &PTR_FUN_110c1b6a0;
  *param_1 = &PTR_FUN_110c1b6f8;
  if (*(char *)((long)param_1 + 199) < '\0') {
    __ZdlPv(param_1[0x16]);
  }
  *puVar1 = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return puVar1;
}



/* Entry: 10a7fa47c; end: 10a7fa493;  */

void FUN_10a7fa47c(long param_1)

{
  FUN_10a7fff74(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fa494; end: 10a7fa687;  */

undefined8 * FUN_10a7fa494(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c1b718;
  func_0x00010a80716c(param_1 + 0xc);
  func_0x00010a807114(param_1 + 10);
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    __ZdlPv(param_1[7]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a7fa688; end: 10a7fa68f;  */

undefined8 FUN_10a7fa688(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 10a7fa690; end: 10a7faa53;  */

undefined8 * FUN_10a7fa690(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c202a0;
  *param_1 = &PTR_FUN_110c20348;
  param_1[5] = &PTR_DAT_110c203a0;
  func_0x00010a051c70(param_1 + 0x21);
  func_0x00010a052434(param_1 + 0x1f);
  func_0x00010a0524e4(param_1 + 0x1d);
  func_0x00010a2021cc(param_1 + 0x1b);
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a7faa54; end: 10a7faa5b;  */

undefined8 FUN_10a7faa54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x110);
}



/* Entry: 10a7faa5c; end: 10a7fb047;  */

undefined8 * FUN_10a7faa5c(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar2 = param_1 + -2;
  *puVar2 = &PTR_DAT_110c1b7d0;
  *param_1 = &PTR_FUN_110c1b8b8;
  param_1[3] = &PTR_DAT_110c1b8e8;
  param_1[0x2c] = &PTR_FUN_110c1b9c0;
  param_1[0x1b] = &PTR_DAT_110c1b948;
  func_0x000107c2826c(param_1 + 0x27);
  func_0x00010a052434(param_1 + 0x25);
  FUN_10a0cfe2c(param_1 + 0x23);
  FUN_10a80be94(param_1 + 0x20);
  param_1[0x1b] = &PTR_DAT_110c1dea0;
  param_1[0x2c] = &PTR_FUN_110c1df18;
  func_0x00010a004e5c(param_1 + 0x1e);
  func_0x00010a004e04(param_1 + 0x1c);
  *puVar2 = &PTR_FUN_110c1dae8;
  *param_1 = &PTR_FUN_110c68030;
  param_1[3] = &PTR_DAT_110c68060;
  param_1[0x2c] = &PTR_FUN_110c1dbe8;
  FUN_10a0cfe2c(param_1 + 0x19);
  func_0x00010a1980a8(param_1 + 0x16);
  *puVar2 = &PTR_FUN_110c1dd80;
  *param_1 = &PTR_FUN_110bb3b30;
  param_1[3] = &PTR_DAT_110bb3b60;
  param_1[0x2c] = &PTR_DAT_110c1de50;
  func_0x00010a1f9d14(param_1 + 0x11);
  *puVar2 = &PTR_DAT_110c60a00;
  *param_1 = &PTR_DAT_110c60a88;
  param_1[3] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 9);
  puVar6 = (undefined8 *)param_1[10];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 8;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 1);
  if ((param_1[0x10] != 0) && (lVar1 = *(long *)(param_1[0x10] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,puVar2);
  }
  if (*(char *)((long)param_1 + 0x7f) < '\0') {
    __ZdlPv(param_1[0xd]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar4;
  *plVar4 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[7] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[3] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 4);
  *param_1 = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 1);
  return puVar2;
}



/* Entry: 10a7fb048; end: 10a7fb04f;  */

undefined8 FUN_10a7fb048(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10a7fb050; end: 10a7fb30f;  */

undefined8 * FUN_10a7fb050(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110c1b7d0;
  puVar1[2] = &PTR_FUN_110c1b8b8;
  puVar1[5] = &PTR_DAT_110c1b8e8;
  puVar1[0x2e] = &PTR_FUN_110c1b9c0;
  puVar1[0x1d] = &PTR_DAT_110c1b948;
  func_0x000107c2826c(puVar1 + 0x29);
  func_0x00010a052434(puVar1 + 0x27);
  FUN_10a0cfe2c(puVar1 + 0x25);
  FUN_10a80be94(puVar1 + 0x22);
  puVar1[0x1d] = &PTR_DAT_110c1dea0;
  puVar1[0x2e] = &PTR_FUN_110c1df18;
  func_0x00010a004e5c(puVar1 + 0x20);
  func_0x00010a004e04(puVar1 + 0x1e);
  *puVar1 = &PTR_FUN_110c1dae8;
  puVar1[2] = &PTR_FUN_110c68030;
  puVar1[5] = &PTR_DAT_110c68060;
  puVar1[0x2e] = &PTR_FUN_110c1dbe8;
  FUN_10a0cfe2c(puVar1 + 0x1b);
  func_0x00010a1980a8(puVar1 + 0x18);
  *puVar1 = &PTR_FUN_110c1dd80;
  puVar1[2] = &PTR_FUN_110bb3b30;
  puVar1[5] = &PTR_DAT_110bb3b60;
  puVar1[0x2e] = &PTR_DAT_110c1de50;
  func_0x00010a1f9d14(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a7fb310; end: 10a7fb317;  */

undefined8 FUN_10a7fb310(long param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



/* Entry: 10a7fb318; end: 10a7fb5ef;  */

undefined8 * FUN_10a7fb318(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -2;
  *puVar1 = &PTR_DAT_110c203c0;
  *param_1 = &PTR_FUN_110c20468;
  param_1[5] = &PTR_DAT_110c204c0;
  func_0x00010a2021cc(param_1 + 0x24);
  func_0x00010a051c70(param_1 + 0x1f);
  func_0x00010a052434(param_1 + 0x1d);
  func_0x00010a0524e4(param_1 + 0x1b);
  *puVar1 = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return puVar1;
}



/* Entry: 10a7fb5f0; end: 10a7fb5fb;  */

void FUN_10a7fb5f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a7fb5fc; end: 10a7fb60f;  */

void FUN_10a7fb5fc(void)

{
  func_0x00010a80000c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb610; end: 10a7fb637;  */

void FUN_10a7fb610(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  
  lVar2 = *(long *)(param_2 + 0x140);
  *param_1 = *(undefined8 *)(param_2 + 0x138);
  param_1[1] = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar2 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return;
}



/* Entry: 10a7fb638; end: 10a7fb64b;  */

void FUN_10a7fb638(void)

{
  func_0x00010a8000a8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb64c; end: 10a7fb673;  */

long FUN_10a7fb64c(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a7fb674; end: 10a7fb68b;  */

void FUN_10a7fb674(long param_1)

{
  func_0x00010a8000a8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb68c; end: 10a7fb693;  */

undefined8 * FUN_10a7fb68c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_DAT_110c1bc30;
  param_1[-3] = &PTR_FUN_110c1bd88;
  *param_1 = &PTR_FUN_110c1bdb8;
  param_1[0x6e] = &PTR_FUN_110c1bf00;
  param_1[0x10] = &PTR_FUN_110c1be10;
  param_1[0x4c] = &PTR_FUN_110c1be30;
  param_1[0x4d] = &PTR_DAT_110c1be60;
  param_1[0x52] = &PTR_DAT_110c1bea8;
  FUN_10a0617bc(param_1 + 0x6c);
  plVar2 = (long *)param_1[0x6b];
  param_1[0x6b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x69);
  if (param_1[0x61] != 0) {
    param_1[0x62] = param_1[0x61];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x60];
  param_1[0x60] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x5e);
  func_0x00010a0523dc(param_1 + 0x5c);
  func_0x00010a3a7670(param_1 + 0x5a);
  FUN_10a00dc2c(param_1 + 0x52);
  param_1[0x4d] = &PTR_DAT_110c1e2b8;
  param_1[0x6e] = &PTR_FUN_110c1e330;
  func_0x00010a004e5c(param_1 + 0x50);
  func_0x00010a004e04(param_1 + 0x4e);
  *puVar1 = &PTR_FUN_110c1dfe8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x6e] = &PTR_DAT_110c1e148;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c1e198;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x6e] = &PTR_DAT_110c1e268;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + 5;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar3 = *(long *)(param_1[0xd] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a7fb694; end: 10a7fb6ab;  */

void FUN_10a7fb694(long param_1)

{
  func_0x00010a8000a8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb6ac; end: 10a7fb6b3;  */

undefined8 * FUN_10a7fb6ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_DAT_110c1bc30;
  param_1[-0x13] = &PTR_FUN_110c1bd88;
  param_1[-0x10] = &PTR_FUN_110c1bdb8;
  param_1[0x5e] = &PTR_FUN_110c1bf00;
  *param_1 = &PTR_FUN_110c1be10;
  param_1[0x3c] = &PTR_FUN_110c1be30;
  param_1[0x3d] = &PTR_DAT_110c1be60;
  param_1[0x42] = &PTR_DAT_110c1bea8;
  FUN_10a0617bc(param_1 + 0x5c);
  plVar2 = (long *)param_1[0x5b];
  param_1[0x5b] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x59);
  if (param_1[0x51] != 0) {
    param_1[0x52] = param_1[0x51];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x50];
  param_1[0x50] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x4e);
  func_0x00010a0523dc(param_1 + 0x4c);
  func_0x00010a3a7670(param_1 + 0x4a);
  FUN_10a00dc2c(param_1 + 0x42);
  param_1[0x3d] = &PTR_DAT_110c1e2b8;
  param_1[0x5e] = &PTR_FUN_110c1e330;
  func_0x00010a004e5c(param_1 + 0x40);
  func_0x00010a004e04(param_1 + 0x3e);
  *puVar1 = &PTR_FUN_110c1dfe8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x5e] = &PTR_DAT_110c1e148;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c1e198;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x5e] = &PTR_DAT_110c1e268;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + -0xb;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar3 = *(long *)(param_1[-3] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a7fb6b4; end: 10a7fb6cb;  */

void FUN_10a7fb6b4(long param_1)

{
  func_0x00010a8000a8(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb6cc; end: 10a7fb6d3;  */

undefined8 * FUN_10a7fb6cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_DAT_110c1bc30;
  param_1[-0x4f] = &PTR_FUN_110c1bd88;
  param_1[-0x4c] = &PTR_FUN_110c1bdb8;
  param_1[0x22] = &PTR_FUN_110c1bf00;
  param_1[-0x3c] = &PTR_FUN_110c1be10;
  *param_1 = &PTR_FUN_110c1be30;
  param_1[1] = &PTR_DAT_110c1be60;
  param_1[6] = &PTR_DAT_110c1bea8;
  FUN_10a0617bc(param_1 + 0x20);
  plVar2 = (long *)param_1[0x1f];
  param_1[0x1f] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x1d);
  if (param_1[0x15] != 0) {
    param_1[0x16] = param_1[0x15];
    __ZdlPv();
  }
  plVar2 = (long *)param_1[0x14];
  param_1[0x14] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(param_1 + 0x12);
  func_0x00010a0523dc(param_1 + 0x10);
  func_0x00010a3a7670(param_1 + 0xe);
  FUN_10a00dc2c(param_1 + 6);
  param_1[1] = &PTR_DAT_110c1e2b8;
  param_1[0x22] = &PTR_FUN_110c1e330;
  func_0x00010a004e5c(param_1 + 4);
  func_0x00010a004e04(param_1 + 2);
  *puVar1 = &PTR_FUN_110c1dfe8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x22] = &PTR_DAT_110c1e148;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c1e198;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x22] = &PTR_DAT_110c1e268;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + -0x47;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar3 = *(long *)(param_1[-0x3f] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a7fb6d4; end: 10a7fb6eb;  */

void FUN_10a7fb6d4(long param_1)

{
  func_0x00010a8000a8(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb6ec; end: 10a7fb6fb;  */

long FUN_10a7fb6ec(long param_1)

{
  return param_1 + 0x58;
}



/* Entry: 10a7fb6fc; end: 10a7fb713;  */

void FUN_10a7fb6fc(long param_1)

{
  func_0x00010a8000a8(param_1 + -0x290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb714; end: 10a7fb723;  */

undefined8 FUN_10a7fb714(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10a7fb724; end: 10a7fb73b;  */

void FUN_10a7fb724(long param_1)

{
  func_0x00010a8000a8(param_1 + -0x2b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb73c; end: 10a7fb74b;  */

undefined8 * FUN_10a7fb73c(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_DAT_110c1bc30;
  puVar1[2] = &PTR_FUN_110c1bd88;
  puVar1[5] = &PTR_FUN_110c1bdb8;
  puVar1[0x73] = &PTR_FUN_110c1bf00;
  puVar1[0x15] = &PTR_FUN_110c1be10;
  puVar1[0x51] = &PTR_FUN_110c1be30;
  puVar1[0x52] = &PTR_DAT_110c1be60;
  puVar1[0x57] = &PTR_DAT_110c1bea8;
  FUN_10a0617bc(puVar1 + 0x71);
  plVar2 = (long *)puVar1[0x70];
  puVar1[0x70] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(puVar1 + 0x6e);
  if (puVar1[0x66] != 0) {
    puVar1[0x67] = puVar1[0x66];
    __ZdlPv();
  }
  plVar2 = (long *)puVar1[0x65];
  puVar1[0x65] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x00010a0523dc(puVar1 + 99);
  func_0x00010a0523dc(puVar1 + 0x61);
  func_0x00010a3a7670(puVar1 + 0x5f);
  FUN_10a00dc2c(puVar1 + 0x57);
  puVar1[0x52] = &PTR_DAT_110c1e2b8;
  puVar1[0x73] = &PTR_FUN_110c1e330;
  func_0x00010a004e5c(puVar1 + 0x55);
  func_0x00010a004e04(puVar1 + 0x53);
  *puVar1 = &PTR_FUN_110c1dfe8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x73] = &PTR_DAT_110c1e148;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c1e198;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x73] = &PTR_DAT_110c1e268;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = puVar1 + 10;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar3 = *(long *)(puVar1[0x12] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a7fb74c; end: 10a7fb77b;  */

void FUN_10a7fb74c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a8000a8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7fb77c; end: 10a7fb77f;  */

undefined8 * FUN_10a7fb77c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c1c348;
  param_1[2] = &PTR_FUN_110c1c498;
  param_1[5] = &PTR_FUN_110c1c4c8;
  param_1[0x6f] = &PTR_FUN_110c1c5e8;
  param_1[0x15] = &PTR_FUN_110c1c520;
  param_1[0x51] = &PTR_FUN_110c1c548;
  param_1[0x56] = &PTR_DAT_110c1c590;
  plVar1 = (long *)param_1[0x6d];
  param_1[0x6d] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  FUN_10a0da1b8(param_1 + 0x6a,param_1[0x6b]);
  func_0x00010a061678(param_1 + 0x68);
  FUN_10a0617bc(param_1 + 100);
  if (*(char *)((long)param_1 + 799) < '\0') {
    __ZdlPv(param_1[0x61]);
  }
  func_0x00010a0523dc(param_1 + 0x5d);
  func_0x00010a3a7670(param_1 + 0x5b);
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c1e6a8;
  param_1[0x6f] = &PTR_FUN_110c1e720;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c1e3d8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x6f] = &PTR_DAT_110c1e538;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c1e588;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x6f] = &PTR_DAT_110c1e658;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar3; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar1 = param_1 + 10;
  if ((*plVar1 != 0) && (*(undefined ***)(*(long *)(*plVar1 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar2 = *(long *)(param_1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar1;
  *plVar1 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar1);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a7fb780; end: 10a7fb793;  */

void FUN_10a7fb780(void)

{
  func_0x00010a800244();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb794; end: 10a7fb7b3;  */

long FUN_10a7fb794(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a7fb7b4; end: 10a7fb7cb;  */

void FUN_10a7fb7b4(long param_1)

{
  func_0x00010a800244(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb7cc; end: 10a7fb7d3;  */

undefined8 * FUN_10a7fb7cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c1c348;
  param_1[-3] = &PTR_FUN_110c1c498;
  *param_1 = &PTR_FUN_110c1c4c8;
  param_1[0x6a] = &PTR_FUN_110c1c5e8;
  param_1[0x10] = &PTR_FUN_110c1c520;
  param_1[0x4c] = &PTR_FUN_110c1c548;
  param_1[0x51] = &PTR_DAT_110c1c590;
  plVar2 = (long *)param_1[0x68];
  param_1[0x68] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0da1b8(param_1 + 0x65,param_1[0x66]);
  func_0x00010a061678(param_1 + 99);
  FUN_10a0617bc(param_1 + 0x5f);
  if (*(char *)((long)param_1 + 0x2f7) < '\0') {
    __ZdlPv(param_1[0x5c]);
  }
  func_0x00010a0523dc(param_1 + 0x58);
  func_0x00010a3a7670(param_1 + 0x56);
  FUN_10a00dc2c(param_1 + 0x51);
  param_1[0x4c] = &PTR_DAT_110c1e6a8;
  param_1[0x6a] = &PTR_FUN_110c1e720;
  func_0x00010a004e5c(param_1 + 0x4f);
  func_0x00010a004e04(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110c1e3d8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x6a] = &PTR_DAT_110c1e538;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c1e588;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x6a] = &PTR_DAT_110c1e658;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + 5;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar3 = *(long *)(param_1[0xd] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a7fb7d4; end: 10a7fb7eb;  */

void FUN_10a7fb7d4(long param_1)

{
  func_0x00010a800244(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb7ec; end: 10a7fb7f3;  */

undefined8 * FUN_10a7fb7ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c1c348;
  param_1[-0x13] = &PTR_FUN_110c1c498;
  param_1[-0x10] = &PTR_FUN_110c1c4c8;
  param_1[0x5a] = &PTR_FUN_110c1c5e8;
  *param_1 = &PTR_FUN_110c1c520;
  param_1[0x3c] = &PTR_FUN_110c1c548;
  param_1[0x41] = &PTR_DAT_110c1c590;
  plVar2 = (long *)param_1[0x58];
  param_1[0x58] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0da1b8(param_1 + 0x55,param_1[0x56]);
  func_0x00010a061678(param_1 + 0x53);
  FUN_10a0617bc(param_1 + 0x4f);
  if (*(char *)((long)param_1 + 0x277) < '\0') {
    __ZdlPv(param_1[0x4c]);
  }
  func_0x00010a0523dc(param_1 + 0x48);
  func_0x00010a3a7670(param_1 + 0x46);
  FUN_10a00dc2c(param_1 + 0x41);
  param_1[0x3c] = &PTR_DAT_110c1e6a8;
  param_1[0x5a] = &PTR_FUN_110c1e720;
  func_0x00010a004e5c(param_1 + 0x3f);
  func_0x00010a004e04(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110c1e3d8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x5a] = &PTR_DAT_110c1e538;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c1e588;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x5a] = &PTR_DAT_110c1e658;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + -0xb;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar3 = *(long *)(param_1[-3] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a7fb7f4; end: 10a7fb80b;  */

void FUN_10a7fb7f4(long param_1)

{
  func_0x00010a800244(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb80c; end: 10a7fb813;  */

undefined8 * FUN_10a7fb80c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110c1c348;
  param_1[-0x4f] = &PTR_FUN_110c1c498;
  param_1[-0x4c] = &PTR_FUN_110c1c4c8;
  param_1[0x1e] = &PTR_FUN_110c1c5e8;
  param_1[-0x3c] = &PTR_FUN_110c1c520;
  *param_1 = &PTR_FUN_110c1c548;
  param_1[5] = &PTR_DAT_110c1c590;
  plVar2 = (long *)param_1[0x1c];
  param_1[0x1c] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0da1b8(param_1 + 0x19,param_1[0x1a]);
  func_0x00010a061678(param_1 + 0x17);
  FUN_10a0617bc(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  func_0x00010a0523dc(param_1 + 0xc);
  func_0x00010a3a7670(param_1 + 10);
  FUN_10a00dc2c(param_1 + 5);
  *param_1 = &PTR_DAT_110c1e6a8;
  param_1[0x1e] = &PTR_FUN_110c1e720;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_FUN_110c1e3d8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x1e] = &PTR_DAT_110c1e538;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c1e588;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x1e] = &PTR_DAT_110c1e658;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = param_1 + -0x47;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar3 = *(long *)(param_1[-0x3f] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a7fb814; end: 10a7fb82b;  */

void FUN_10a7fb814(long param_1)

{
  func_0x00010a800244(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb82c; end: 10a7fb83b;  */

undefined8 FUN_10a7fb82c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10a7fb83c; end: 10a7fb853;  */

void FUN_10a7fb83c(long param_1)

{
  func_0x00010a800244(param_1 + -0x2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb854; end: 10a7fb863;  */

undefined8 * FUN_10a7fb854(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c1c348;
  puVar1[2] = &PTR_FUN_110c1c498;
  puVar1[5] = &PTR_FUN_110c1c4c8;
  puVar1[0x6f] = &PTR_FUN_110c1c5e8;
  puVar1[0x15] = &PTR_FUN_110c1c520;
  puVar1[0x51] = &PTR_FUN_110c1c548;
  puVar1[0x56] = &PTR_DAT_110c1c590;
  plVar2 = (long *)puVar1[0x6d];
  puVar1[0x6d] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  FUN_10a0da1b8(puVar1 + 0x6a,puVar1[0x6b]);
  func_0x00010a061678(puVar1 + 0x68);
  FUN_10a0617bc(puVar1 + 100);
  if (*(char *)((long)puVar1 + 799) < '\0') {
    __ZdlPv(puVar1[0x61]);
  }
  func_0x00010a0523dc(puVar1 + 0x5d);
  func_0x00010a3a7670(puVar1 + 0x5b);
  FUN_10a00dc2c(puVar1 + 0x56);
  puVar1[0x51] = &PTR_DAT_110c1e6a8;
  puVar1[0x6f] = &PTR_FUN_110c1e720;
  func_0x00010a004e5c(puVar1 + 0x54);
  func_0x00010a004e04(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110c1e3d8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x6f] = &PTR_DAT_110c1e538;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c1e588;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x6f] = &PTR_DAT_110c1e658;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar4 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar4; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar4);
  plVar2 = puVar1 + 10;
  if ((*plVar2 != 0) && (*(undefined ***)(*(long *)(*plVar2 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar3 = *(long *)(puVar1[0x12] + 0x828), lVar3 != 0)) {
    FUN_10a1dfb2c(lVar3,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar4;
  FUN_10ac78cf4(appuStack_180);
  lVar3 = *plVar2;
  *plVar2 = 0;
  if (lVar3 != 0) {
    FUN_10ac7d690(plVar2);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a7fb864; end: 10a7fb893;  */

void FUN_10a7fb864(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a800244((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7fb894; end: 10a7fb897;  */

undefined8 * FUN_10a7fb894(undefined8 *param_1)

{
  long lVar1;
  undefined **ppuVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  *param_1 = &PTR_FUN_110c1c6f8;
  param_1[2] = &PTR_FUN_110c1c848;
  param_1[5] = &PTR_FUN_110c1c878;
  param_1[0x15] = &PTR_FUN_110c1c8d0;
  param_1[0x6d] = &PTR_FUN_110c1c998;
  param_1[0x51] = &PTR_FUN_110c1c8f8;
  param_1[0x56] = &PTR_DAT_110c1c940;
  FUN_10a0da1b8(param_1 + 0x6a,param_1[0x6b]);
  func_0x00010a061678(param_1 + 0x68);
  FUN_10a0617bc(param_1 + 100);
  if (*(char *)((long)param_1 + 799) < '\0') {
    __ZdlPv(param_1[0x61]);
  }
  func_0x00010a0523dc(param_1 + 0x5d);
  func_0x00010a3a7670(param_1 + 0x5b);
  FUN_10a00dc2c(param_1 + 0x56);
  param_1[0x51] = &PTR_DAT_110c1ea88;
  param_1[0x6d] = &PTR_FUN_110c1eb00;
  func_0x00010a004e5c(param_1 + 0x54);
  func_0x00010a004e04(param_1 + 0x52);
  *param_1 = &PTR_FUN_110c1e7b8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x6d] = &PTR_DAT_110c1e918;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c1e968;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x6d] = &PTR_DAT_110c1ea38;
  FUN_10a042dcc(param_1 + 0x13);
  *param_1 = &PTR_DAT_110c60a00;
  param_1[2] = &PTR_DAT_110c60a88;
  param_1[5] = &PTR_DAT_110c60ab8;
  ppuVar2 = (undefined **)(param_1 + 0xb);
  puVar5 = (undefined8 *)param_1[0xc];
  for (puVar4 = (undefined8 *)*ppuVar2; puVar4 != puVar5; puVar4 = puVar4 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar4,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar2);
  plVar3 = param_1 + 10;
  if ((*plVar3 != 0) && (*(undefined ***)(*(long *)(*plVar3 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + 3);
  if ((param_1[0x12] != 0) && (lVar1 = *(long *)(param_1[0x12] + 0x828), lVar1 != 0)) {
    FUN_10a1dfb2c(lVar1,param_1);
  }
  if (*(char *)((long)param_1 + 0x8f) < '\0') {
    __ZdlPv(param_1[0xf]);
  }
  appuStack_180[0] = ppuVar2;
  FUN_10ac78cf4(appuStack_180);
  lVar1 = *plVar3;
  *plVar3 = 0;
  if (lVar1 != 0) {
    FUN_10ac7d690(plVar3);
  }
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 6);
  param_1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + 3);
  return param_1;
}



/* Entry: 10a7fb898; end: 10a7fb8ab;  */

void FUN_10a7fb898(void)

{
  func_0x00010a8003c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb8ac; end: 10a7fb8cb;  */

long FUN_10a7fb8ac(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a7fb8cc; end: 10a7fb8e3;  */

void FUN_10a7fb8cc(long param_1)

{
  func_0x00010a8003c4(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb8e4; end: 10a7fb8eb;  */

undefined8 * FUN_10a7fb8e4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -5;
  *puVar1 = &PTR_FUN_110c1c6f8;
  param_1[-3] = &PTR_FUN_110c1c848;
  *param_1 = &PTR_FUN_110c1c878;
  param_1[0x10] = &PTR_FUN_110c1c8d0;
  param_1[0x68] = &PTR_FUN_110c1c998;
  param_1[0x4c] = &PTR_FUN_110c1c8f8;
  param_1[0x51] = &PTR_DAT_110c1c940;
  FUN_10a0da1b8(param_1 + 0x65,param_1[0x66]);
  func_0x00010a061678(param_1 + 99);
  FUN_10a0617bc(param_1 + 0x5f);
  if (*(char *)((long)param_1 + 0x2f7) < '\0') {
    __ZdlPv(param_1[0x5c]);
  }
  func_0x00010a0523dc(param_1 + 0x58);
  func_0x00010a3a7670(param_1 + 0x56);
  FUN_10a00dc2c(param_1 + 0x51);
  param_1[0x4c] = &PTR_DAT_110c1ea88;
  param_1[0x68] = &PTR_FUN_110c1eb00;
  func_0x00010a004e5c(param_1 + 0x4f);
  func_0x00010a004e04(param_1 + 0x4d);
  *puVar1 = &PTR_FUN_110c1e7b8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x68] = &PTR_DAT_110c1e918;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c1e968;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x68] = &PTR_DAT_110c1ea38;
  FUN_10a042dcc(param_1 + 0xe);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-3] = &PTR_DAT_110c60a88;
  *param_1 = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + 6);
  puVar6 = (undefined8 *)param_1[7];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + 5;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -2);
  if ((param_1[0xd] != 0) && (lVar2 = *(long *)(param_1[0xd] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    __ZdlPv(param_1[10]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  param_1[-3] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -2);
  return puVar1;
}



/* Entry: 10a7fb8ec; end: 10a7fb903;  */

void FUN_10a7fb8ec(long param_1)

{
  func_0x00010a8003c4(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb904; end: 10a7fb90b;  */

undefined8 * FUN_10a7fb904(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x15;
  *puVar1 = &PTR_FUN_110c1c6f8;
  param_1[-0x13] = &PTR_FUN_110c1c848;
  param_1[-0x10] = &PTR_FUN_110c1c878;
  *param_1 = &PTR_FUN_110c1c8d0;
  param_1[0x58] = &PTR_FUN_110c1c998;
  param_1[0x3c] = &PTR_FUN_110c1c8f8;
  param_1[0x41] = &PTR_DAT_110c1c940;
  FUN_10a0da1b8(param_1 + 0x55,param_1[0x56]);
  func_0x00010a061678(param_1 + 0x53);
  FUN_10a0617bc(param_1 + 0x4f);
  if (*(char *)((long)param_1 + 0x277) < '\0') {
    __ZdlPv(param_1[0x4c]);
  }
  func_0x00010a0523dc(param_1 + 0x48);
  func_0x00010a3a7670(param_1 + 0x46);
  FUN_10a00dc2c(param_1 + 0x41);
  param_1[0x3c] = &PTR_DAT_110c1ea88;
  param_1[0x58] = &PTR_FUN_110c1eb00;
  func_0x00010a004e5c(param_1 + 0x3f);
  func_0x00010a004e04(param_1 + 0x3d);
  *puVar1 = &PTR_FUN_110c1e7b8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x58] = &PTR_DAT_110c1e918;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c1e968;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x58] = &PTR_DAT_110c1ea38;
  FUN_10a042dcc(param_1 + -2);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x13] = &PTR_DAT_110c60a88;
  param_1[-0x10] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -10);
  puVar6 = (undefined8 *)param_1[-9];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0xb;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x12);
  if ((param_1[-3] != 0) && (lVar2 = *(long *)(param_1[-3] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x19) < '\0') {
    __ZdlPv(param_1[-6]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0xc] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x10] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0xf);
  param_1[-0x13] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x12);
  return puVar1;
}



/* Entry: 10a7fb90c; end: 10a7fb923;  */

void FUN_10a7fb90c(long param_1)

{
  func_0x00010a8003c4(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb924; end: 10a7fb92b;  */

undefined8 * FUN_10a7fb924(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = param_1 + -0x51;
  *puVar1 = &PTR_FUN_110c1c6f8;
  param_1[-0x4f] = &PTR_FUN_110c1c848;
  param_1[-0x4c] = &PTR_FUN_110c1c878;
  param_1[-0x3c] = &PTR_FUN_110c1c8d0;
  param_1[0x1c] = &PTR_FUN_110c1c998;
  *param_1 = &PTR_FUN_110c1c8f8;
  param_1[5] = &PTR_DAT_110c1c940;
  FUN_10a0da1b8(param_1 + 0x19,param_1[0x1a]);
  func_0x00010a061678(param_1 + 0x17);
  FUN_10a0617bc(param_1 + 0x13);
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    __ZdlPv(param_1[0x10]);
  }
  func_0x00010a0523dc(param_1 + 0xc);
  func_0x00010a3a7670(param_1 + 10);
  FUN_10a00dc2c(param_1 + 5);
  *param_1 = &PTR_DAT_110c1ea88;
  param_1[0x1c] = &PTR_FUN_110c1eb00;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar1 = &PTR_FUN_110c1e7b8;
  param_1[-0x4f] = &PTR_FUN_110bb3968;
  param_1[-0x4c] = &PTR_DAT_110bb3998;
  param_1[0x1c] = &PTR_DAT_110c1e918;
  param_1[-0x3c] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -4);
  func_0x00010a042c64(param_1 + -9);
  func_0x00010a0523dc(param_1 + -0xc);
  if (*(char *)(param_1 + -0x15) == '\x01') {
    func_0x00010a042d30(param_1 + -0x17);
  }
  param_1[-0x3c] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x3c);
  *puVar1 = &PTR_DAT_110c1e968;
  param_1[-0x4f] = &PTR_FUN_110b9f848;
  param_1[-0x4c] = &PTR_DAT_110b9f878;
  param_1[0x1c] = &PTR_DAT_110c1ea38;
  FUN_10a042dcc(param_1 + -0x3e);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x4f] = &PTR_DAT_110c60a88;
  param_1[-0x4c] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x46);
  puVar6 = (undefined8 *)param_1[-0x45];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = param_1 + -0x47;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x4e);
  if ((param_1[-0x3f] != 0) && (lVar2 = *(long *)(param_1[-0x3f] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x1f9) < '\0') {
    __ZdlPv(param_1[-0x42]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x48] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x4c] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x4b);
  param_1[-0x4f] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x4e);
  return puVar1;
}



/* Entry: 10a7fb92c; end: 10a7fb943;  */

void FUN_10a7fb92c(long param_1)

{
  func_0x00010a8003c4(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb944; end: 10a7fb953;  */

undefined8 FUN_10a7fb944(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10a7fb954; end: 10a7fb96b;  */

void FUN_10a7fb954(long param_1)

{
  func_0x00010a8003c4(param_1 + -0x2b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb96c; end: 10a7fb97b;  */

undefined8 * FUN_10a7fb96c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [272];
  undefined1 auStack_188 [8];
  undefined **appuStack_180 [2];
  undefined1 auStack_170 [272];
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_110c1c6f8;
  puVar1[2] = &PTR_FUN_110c1c848;
  puVar1[5] = &PTR_FUN_110c1c878;
  puVar1[0x15] = &PTR_FUN_110c1c8d0;
  puVar1[0x6d] = &PTR_FUN_110c1c998;
  puVar1[0x51] = &PTR_FUN_110c1c8f8;
  puVar1[0x56] = &PTR_DAT_110c1c940;
  FUN_10a0da1b8(puVar1 + 0x6a,puVar1[0x6b]);
  func_0x00010a061678(puVar1 + 0x68);
  FUN_10a0617bc(puVar1 + 100);
  if (*(char *)((long)puVar1 + 799) < '\0') {
    __ZdlPv(puVar1[0x61]);
  }
  func_0x00010a0523dc(puVar1 + 0x5d);
  func_0x00010a3a7670(puVar1 + 0x5b);
  FUN_10a00dc2c(puVar1 + 0x56);
  puVar1[0x51] = &PTR_DAT_110c1ea88;
  puVar1[0x6d] = &PTR_FUN_110c1eb00;
  func_0x00010a004e5c(puVar1 + 0x54);
  func_0x00010a004e04(puVar1 + 0x52);
  *puVar1 = &PTR_FUN_110c1e7b8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x6d] = &PTR_DAT_110c1e918;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c1e968;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x6d] = &PTR_DAT_110c1ea38;
  FUN_10a042dcc(puVar1 + 0x13);
  *puVar1 = &PTR_DAT_110c60a00;
  puVar1[2] = &PTR_DAT_110c60a88;
  puVar1[5] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(puVar1 + 0xb);
  puVar6 = (undefined8 *)puVar1[0xc];
  for (puVar5 = (undefined8 *)*ppuVar3; puVar5 != puVar6; puVar5 = puVar5 + 1) {
    FUN_10a009538(auStack_2a8,&UNK_10f69ea0f);
    __ZNSt13runtime_errorC2ERKS_(appuStack_180,auStack_2a8);
    _memcpy(auStack_170,auStack_298,0x110);
    appuStack_180[0] = &PTR_FUN_110b99e70;
    FUN_10a05bde0(auStack_188,appuStack_180);
    __ZNSt13runtime_errorD2Ev(appuStack_180);
    func_0x000109d1b350(*puVar5,auStack_188);
    __ZNSt13exception_ptrD1Ev(auStack_188);
    __ZNSt13runtime_errorD2Ev(auStack_2a8);
  }
  FUN_10ac634b8(ppuVar3);
  plVar4 = puVar1 + 10;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(puVar1 + 3);
  if ((puVar1[0x12] != 0) && (lVar2 = *(long *)(puVar1[0x12] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)puVar1 + 0x8f) < '\0') {
    __ZdlPv(puVar1[0xf]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (puVar1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  puVar1[5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 6);
  puVar1[2] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(puVar1 + 3);
  return puVar1;
}



/* Entry: 10a7fb97c; end: 10a7fb9ab;  */

void FUN_10a7fb97c(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a8003c4((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a7fb9ac; end: 10a7fb9af;  */

void FUN_10a7fb9ac(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puStack_28;
  
  *param_1 = &PTR_FUN_110c1ca30;
  param_1[2] = &PTR_FUN_110c1cb18;
  param_1[5] = &PTR_FUN_110c1cb48;
  param_1[0x43] = &PTR_DAT_110c1cc20;
  param_1[0x1d] = &PTR_FUN_110c1cba8;
  puStack_28 = param_1 + 0x40;
  FUN_10a7fe6e0(&puStack_28);
  if (param_1[0x3d] != 0) {
    param_1[0x3e] = param_1[0x3d];
    __ZdlPv();
  }
  lVar1 = param_1[0x3c];
  param_1[0x3c] = 0;
  if (lVar1 != 0) {
    FUN_10a812cc0();
  }
  lVar1 = param_1[0x3b];
  param_1[0x3b] = 0;
  if (lVar1 != 0) {
    FUN_10a812cc0();
  }
  func_0x00010a7f0e54(param_1 + 0x3a,0);
  FUN_10a3786c8(param_1 + 0x31);
  FUN_10a0e3194(param_1 + 0x2f);
  func_0x00010a140010(param_1 + 0x2c);
  FUN_10a0cfe2c(param_1 + 0x2a);
  func_0x00010a2915d0(param_1 + 0x28);
  func_0x00010a052434(param_1 + 0x26);
  func_0x00010a3a7670(param_1 + 0x23);
  param_1[0x1d] = &PTR_DAT_110c1ef50;
  param_1[0x43] = &PTR_FUN_110c1efc8;
  func_0x00010a004e5c(param_1 + 0x20);
  func_0x00010a004e04(param_1 + 0x1e);
  *param_1 = &PTR_FUN_110c1eb98;
  param_1[2] = &PTR_FUN_110c68030;
  param_1[5] = &PTR_DAT_110c68060;
  param_1[0x43] = &PTR_FUN_110c1ec98;
  FUN_10a0cfe2c(param_1 + 0x1b);
  func_0x00010a1980a8(param_1 + 0x18);
  *param_1 = &PTR_FUN_110c1ee30;
  param_1[2] = &PTR_FUN_110bb3b30;
  param_1[5] = &PTR_DAT_110bb3b60;
  param_1[0x43] = &PTR_DAT_110c1ef00;
  func_0x00010a1f9d14(param_1 + 0x13);
  FUN_10ac63308(param_1);
  return;
}



/* Entry: 10a7fb9b0; end: 10a7fb9c3;  */

void FUN_10a7fb9b0(void)

{
  func_0x00010a80052c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a7fb9c4; end: 10a7fb9d3;  */

undefined8 FUN_10a7fb9c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x118);
}


