/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1087d4a88; end: 1087d4ad7;  */

long FUN_1087d4a88(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010864247c(param_1);
  }
  return param_1;
}



/* Entry: 1087d4ad8; end: 1087d4b53;  */

undefined1 * FUN_1087d4ad8(undefined8 *param_1,long param_2,int param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined1 auStack_38 [24];
  
  if (param_3 == 2) {
    ppuVar1 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(param_2 + 0x18) != (undefined **)0x0) {
      ppuVar1 = *(undefined ***)(param_2 + 0x18);
    }
    func_0x000107c29ee0(auStack_38,ppuVar1);
    puVar2 = auStack_38;
    func_0x000107c28078(puVar2,*param_1);
    func_0x000107c27914(auStack_38);
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



/* Entry: 1087d4b54; end: 1087d4b67;  */

void FUN_1087d4b54(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 1087d4b68; end: 1087d4c3f;  */

void FUN_1087d4b68(long param_1)

{
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x0001087d8dd8();
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < *(ulong *)(param_1 + 0x10)) {
    func_0x0001087d8bd4(uVar3);
    lVar2 = uVar3 + 0x18;
    unaff_x19[1] = lVar2;
  }
  else {
    plVar1 = unaff_x19;
    func_0x00010528d470();
    func_0x00010528d210(auStack_58,plVar1,(unaff_x19[1] - *unaff_x19) / 0x18,
                        (ulong *)(param_1 + 0x10));
    func_0x0001087d8bd4(lStack_48);
    lStack_48 = lStack_48 + 0x18;
    func_0x00010528d1ec();
    lVar2 = unaff_x19[1];
    func_0x00010528d384(auStack_58);
  }
  unaff_x19[1] = lVar2;
  return;
}



/* Entry: 1087d4c40; end: 1087d4d33;  */

void FUN_1087d4c40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x28;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x28);
  }
  *puVar1 = &PTR_DAT_110a91af0;
  puVar1[1] = param_1;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined1 *)((long)puVar1 + 0x14) = 0;
  return;
}



/* Entry: 1087d4d34; end: 1087d4d3f;  */

void FUN_1087d4d34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71be0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087d4d40; end: 1087d4d53;  */

void FUN_1087d4d40(void)

{
  FUN_1087d4d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d4d54; end: 1087d4d5b;  */

void FUN_1087d4d54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087d8724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087d4d5c; end: 1087d4d87;  */

long FUN_1087d4d5c(long param_1)

{
  func_0x000107c27f98(param_1 + 0x10);
  func_0x000107c27f9c(param_1 + 8);
  return param_1;
}



/* Entry: 1087d4d88; end: 1087d4d9b;  */

void FUN_1087d4d88(void)

{
  FUN_1087d4d5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d4d9c; end: 1087d4e13;  */

void FUN_1087d4d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_3d0 [24];
  undefined1 auStack_3b8 [904];
  
  FUN_1087a2c74(auStack_3d0);
  FUN_108685044(auStack_3b8,param_3);
  FUN_1087d4ec0(*(undefined8 *)(param_1 + 0x10),(undefined8 *)(param_1 + 0x10),auStack_3d0);
  FUN_1087d30e0(auStack_3d0);
  return;
}



/* Entry: 1087d4e14; end: 1087d4e17;  */

void FUN_1087d4e14(void)

{
  return;
}



/* Entry: 1087d4e18; end: 1087d4e6f;  */

void FUN_1087d4e18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0x440;
  __Znwm();
  func_0x0001087d8414();
  *puVar1 = &PTR_FUN_110a71ce8;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x87) = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x000107c27f9c(&uStack_28);
  return;
}



/* Entry: 1087d4e70; end: 1087d4eab;  */

undefined8 * FUN_1087d4e70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71ce8;
  if (*(char *)(param_1 + 0x87) == '\x01') {
    FUN_1087d30e0(param_1 + 0x13);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087d4eac; end: 1087d4ebf;  */

void FUN_1087d4eac(void)

{
  FUN_1087d4e70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d4ec0; end: 1087d4f6b;  */

void FUN_1087d4ec0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  undefined8 uStack_38;
  
  func_0x0001087d8dd8();
  do {
    uStack_38 = 0;
    lVar1 = unaff_x19 + 0x10;
    func_0x0001087d8538(lVar1,&uStack_38);
    if ((int)lVar1 != 0) {
      if (*(char *)(unaff_x19 + 0x438) == '\x01') {
        FUN_1087d30e0(unaff_x19 + 0x98);
        *(undefined1 *)(unaff_x19 + 0x438) = 0;
      }
      FUN_1087a2c74(unaff_x19 + 0x98,param_3);
      FUN_108685044(unaff_x19 + 0xb0,param_3 + 0x18);
      *(undefined1 *)(unaff_x19 + 0x438) = 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 2;
      func_0x000107c31508();
      return;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 1087d4f6c; end: 1087d4f9f;  */

void FUN_1087d4f6c(void)

{
  undefined8 *unaff_x19;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x0001087d8694();
  FUN_1087d4e18();
  unaff_x19[1] = uStack_28;
  *unaff_x19 = uStack_30;
  func_0x0001087d8cdc();
  return;
}



/* Entry: 1087d4fa0; end: 1087d4fdb;  */

void FUN_1087d4fa0(undefined8 param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
  }
  func_0x0001087d8960(param_2);
  return;
}



/* Entry: 1087d4fdc; end: 1087d500f;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087d4fdc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087d4ec0(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087d5010; end: 1087d5287;  */

void FUN_1087d5010(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long lVar8;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087d874c();
  plVar4 = param_1;
  func_0x0001087d848c(FUN_1087d586c);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087d85e4();
  func_0x0001087d876c();
  func_0x0001087d89b8();
  func_0x0001087d873c();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_01 != 0);
  func_0x0001087d83a4();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087d8330();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087d8e20();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087d8224();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087d842c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087d82a8();
        if ((bool)in_ZR) {
          func_0x0001087d8234();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087d84b8();
          func_0x0001087d8cd4();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087d81b8(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087d82b8();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087d51cc;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087d89c8();
  unaff_x22 = *plVar4;
  func_0x0001087d8438();
  func_0x0001087d84b0();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087d83f4(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087d8904();
      FUN_1087c26bc();
      func_0x0001087d8d6c();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087d83b4();
      func_0x0001087d89fc();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d521c);
    (*pcVar2)();
  }
  func_0x0001087d8788(*unaff_x20);
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_04 != 0);
  func_0x0001087d83a4();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087d8dcc();
    func_0x0001087d8330();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087d8e20();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087d8224();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087d842c();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)(unaff_x22 + 0x90);
        func_0x0001087d82a8();
        if ((bool)uVar3) {
          func_0x0001087d8234();
          func_0x0001087d8164();
          func_0x0001087d8190();
          *(long **)(lVar8 + 8) = plVar4;
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087d82b8();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087d51cc:
        func_0x0001087d8284(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087d8728();
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d8400();
  func_0x0001087d8460();
  func_0x0001087d8484();
  func_0x0001087d856c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5288; end: 1087d54ff;  */

void FUN_1087d5288(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long lVar8;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087d874c();
  plVar4 = param_1;
  func_0x0001087d848c(FUN_1087d5ad0);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087d85e4();
  func_0x0001087d876c();
  func_0x0001087d89b8();
  func_0x0001087d873c();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_01 != 0);
  func_0x0001087d83a4();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087d8330();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087d8e20();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087d8224();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087d842c();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087d82a8();
        if ((bool)in_ZR) {
          func_0x0001087d8234();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087d84b8();
          func_0x0001087d8cd4();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087d81b8(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087d82b8();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087d5444;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087d89c8();
  unaff_x22 = *plVar4;
  func_0x0001087d8438();
  func_0x0001087d84b0();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087d83f4(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087d8904();
      FUN_1087aead8();
      func_0x0001087d8d1c();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087d83b4();
      func_0x0001087d89fc();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d5494);
    (*pcVar2)();
  }
  func_0x0001087d8788(*unaff_x20);
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_04 != 0);
  func_0x0001087d83a4();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087d8dcc();
    func_0x0001087d8330();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087d8e20();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087d8224();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087d842c();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        lVar8 = *(long *)(unaff_x22 + 0x90);
        func_0x0001087d82a8();
        if ((bool)uVar3) {
          func_0x0001087d8234();
          func_0x0001087d8164();
          func_0x0001087d8190();
          *(long **)(lVar8 + 8) = plVar4;
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087d82b8();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087d5444:
        func_0x0001087d8284(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087d8728();
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d8400();
  func_0x0001087d8460();
  func_0x0001087d8484();
  func_0x0001087d856c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5500; end: 1087d553f;  */

void FUN_1087d5500(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c28894();
  func_0x000100579ac8(param_1,param_2 + 1,param_4);
  return;
}



/* Entry: 1087d5540; end: 1087d55bb;  */

undefined8 FUN_1087d5540(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268a58);
  if ((param_2 & 0x2f) < 0x2b) {
    puVar1 = (&PTR_s_true_113268a60)[param_2 & 0x2f];
  }
  else {
    puVar1 = &UNK_10f3158c2;
  }
  FUN_108791610(param_1,auStack_38,puVar1);
  func_0x0001087d8a14();
  return param_1;
}



/* Entry: 1087d55bc; end: 1087d55db;  */

undefined4 FUN_1087d55bc(uint param_1)

{
  if (param_1 < 6) {
    return *(undefined4 *)(&UNK_10df589c8 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 1087d55dc; end: 1087d56ff;  */

void FUN_1087d55dc(long *param_1,undefined4 param_2,int param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 auStack_b0 [24];
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_b0;
  plVar3 = *(long **)(*param_1 + 0x58);
  uStack_88 = 0;
  uStack_80 = 0;
  ppuStack_98 = &PTR_FUN_110a6f328;
  uStack_90 = 0;
  uStack_78 = param_2;
  func_0x000107c278b8(auStack_48,PTR_DAT_113268a50);
  lVar1 = (ulong)(param_3 - 1U) + 0x22;
  if (4 < param_3 - 1U) {
    lVar1 = 0x21;
  }
  FUN_108791610(&ppuStack_98,auStack_48,(&PTR_s_true_113268a60)[lVar1]);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  func_0x0001087d88c0();
  func_0x000107c278b8(auStack_b0);
  func_0x0001087d85cc(param_1[1]);
  func_0x0001087d8bf4();
  FUN_108791a34(auStack_70,puVar2);
  (**(code **)(*plVar3 + 0x60))(plVar3,auStack_70);
  FUN_108788618(auStack_70);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x0001087d8550();
  return;
}



/* Entry: 1087d5700; end: 1087d57ef;  */

void FUN_1087d5700(long *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 *puVar2;
  long *plVar3;
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  plVar3 = *(long **)(*param_1 + 0x58);
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110a6f328;
  uStack_78 = 0;
  iVar1 = param_3 + 0x6001b;
  if (4 < param_3 - 1U) {
    iVar1 = 0x6001b;
  }
  uStack_60 = param_2;
  FUN_1087b8314(&ppuStack_80,iVar1);
  func_0x0001087d88c0();
  puVar2 = auStack_98;
  func_0x000107c278b8(puVar2);
  func_0x0001087d85cc(param_1[1]);
  func_0x0001087d8bf4();
  FUN_108791a34(auStack_58,puVar2);
  (**(code **)(*plVar3 + 0x60))(plVar3,auStack_58);
  FUN_108788618(auStack_58);
  func_0x0001087d8a14();
  FUN_108788618(&ppuStack_80);
  return;
}



/* Entry: 1087d57f0; end: 1087d586b;  */

undefined4 *
FUN_1087d57f0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 8;
  param_1[1] = param_2;
  FUN_1087a9638(param_1 + 2,param_3);
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x12) = param_4;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (*(char *)(param_5 + 3) == '\x01') {
    uVar2 = param_5[1];
    uVar1 = *param_5;
    *(undefined8 *)(param_1 + 0x18) = param_5[2];
    *(undefined8 *)(param_1 + 0x16) = uVar2;
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    param_5[1] = 0;
    param_5[2] = 0;
    *param_5 = 0;
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
  return param_1;
}



/* Entry: 1087d586c; end: 1087d59d7;  */

void FUN_1087d586c(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087d89c8();
    lVar7 = *plVar4;
    func_0x0001087d8438();
    func_0x0001087d84b0();
    uVar3 = lVar7 == 1;
    if ((bool)uVar3) {
      func_0x0001087d83f4(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087d8904();
        FUN_1087c26bc();
        func_0x0001087d8d6c();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087d83b4();
        func_0x0001087d89fc();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d5988);
      (*pcVar2)();
    }
    func_0x0001087d8788(param_1[7]);
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
    func_0x0001087d83a4();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087d8dcc();
      lVar7 = param_1[9];
      func_0x0001087d8254();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087d858c();
      plVar5 = extraout_x8;
      do {
        if (*plVar5 == 0) {
          func_0x0001087d8224();
          plVar5 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar6 = extraout_w11_00;
        }
        else {
          func_0x0001087d842c();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar6 = extraout_w11;
        }
        if ((uVar6 & 1) != 0) {
          func_0x0001087d8358();
          if ((bool)uVar3) {
            func_0x0001087d8234();
            func_0x0001087d8164();
            func_0x0001087d8174();
            *(long **)(lVar7 + 0x90) = plVar4;
          }
          func_0x0001087d81f8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087d8728();
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d8400();
  func_0x0001087d8460();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d59d8; end: 1087d5a1f;  */

void FUN_1087d59d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087d8400();
  func_0x0001087d8460();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5a20; end: 1087d5a97;  */

void FUN_1087d5a20(long param_1)

{
  FUN_1087d2f90(param_1 + 0x48);
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d84b0();
  func_0x0001087d8460();
  func_0x0001087d857c();
  func_0x0001087d8584();
  func_0x0001087d8400();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5a98; end: 1087d5acf;  */

void FUN_1087d5a98(void)

{
  func_0x0001087d8cfc();
  func_0x0001087d84b0();
  func_0x0001087d8460();
  func_0x0001087d857c();
  func_0x0001087d8584();
  func_0x0001087d8400();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d5ad0; end: 1087d5c3b;  */

void FUN_1087d5ad0(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *extraout_x8;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087d89c8();
    lVar7 = *plVar4;
    func_0x0001087d8438();
    func_0x0001087d84b0();
    uVar3 = lVar7 == 1;
    if ((bool)uVar3) {
      func_0x0001087d83f4(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087d8904();
        FUN_1087aead8();
        func_0x0001087d8d1c();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087d83b4();
        func_0x0001087d89fc();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d5bec);
      (*pcVar2)();
    }
    func_0x0001087d8788(param_1[7]);
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
    func_0x0001087d83a4();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087d8dcc();
      lVar7 = param_1[9];
      func_0x0001087d8254();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087d858c();
      plVar5 = extraout_x8;
      do {
        if (*plVar5 == 0) {
          func_0x0001087d8224();
          plVar5 = extraout_x8_01;
          uVar1 = extraout_w10_01;
          uVar6 = extraout_w11_00;
        }
        else {
          func_0x0001087d842c();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_00;
          uVar6 = extraout_w11;
        }
        if ((uVar6 & 1) != 0) {
          func_0x0001087d8358();
          if ((bool)uVar3) {
            func_0x0001087d8234();
            func_0x0001087d8164();
            func_0x0001087d8174();
            *(long **)(lVar7 + 0x90) = plVar4;
          }
          func_0x0001087d81f8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087d8728();
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d8400();
  func_0x0001087d8460();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5c3c; end: 1087d5c83;  */

void FUN_1087d5c3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087d8400();
  func_0x0001087d8460();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5c84; end: 1087d5cfb;  */

void FUN_1087d5c84(long param_1)

{
  FUN_1087d2f90(param_1 + 0x48);
  func_0x0001087d85dc();
  func_0x0001087d8438();
  func_0x0001087d84b0();
  func_0x0001087d8460();
  func_0x0001087d857c();
  func_0x0001087d8584();
  func_0x0001087d8400();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5cfc; end: 1087d5d33;  */

void FUN_1087d5cfc(void)

{
  func_0x0001087d8cfc();
  func_0x0001087d84b0();
  func_0x0001087d8460();
  func_0x0001087d857c();
  func_0x0001087d8584();
  func_0x0001087d8400();
  func_0x0001087d8484();
  func_0x0001087d8468();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d5d34; end: 1087d5f3b;  */

void FUN_1087d5d34(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long lVar5;
  long extraout_x8;
  long *extraout_x8_00;
  long *plVar6;
  long *extraout_x8_01;
  long *extraout_x8_02;
  undefined4 uVar7;
  ulong uVar8;
  ulong extraout_x9;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  long lVar9;
  long extraout_x10;
  ulong extraout_x11;
  ulong extraout_x11_00;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  
  if ((*(byte *)(param_1 + 0xb8) & 1) == 0) {
    plVar4 = (long *)(param_1 + 0x20);
    func_0x000107c28870();
    lVar9 = *plVar4;
    func_0x0001087d8870();
    func_0x0001087d8574();
    func_0x0001087d881c();
    uVar3 = lVar9 == 1;
    if (!(bool)uVar3) {
      if (lVar9 == 0) {
        uStack_48 = 4;
      }
      else {
        uStack_48 = 3;
      }
      uStack_50 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
      uStack_44 = 1;
      FUN_1087d4008(param_1 + 0x10,&uStack_60);
      FUN_108642450(&uStack_60);
      goto LAB_1087d5e6c;
    }
    func_0x0001087d8ae8();
    do {
      func_0x0001087d81cc();
    } while (extraout_w10 != 0);
    func_0x0001087d83f4(*(undefined8 *)(param_1 + 0xa8));
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(param_1 + 0xb8) = 1;
      lVar9 = *(long *)(param_1 + 0xa8);
      func_0x0001087d8254();
      if (*plVar4 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087d858c();
      plVar6 = extraout_x8_00;
      do {
        if (*plVar6 == 0) {
          func_0x0001087d8224();
          plVar6 = extraout_x8_02;
          uVar1 = extraout_w10_01;
          uVar8 = extraout_x11_00;
        }
        else {
          func_0x0001087d842c();
          plVar6 = extraout_x8_01;
          uVar1 = extraout_w10_00;
          uVar8 = extraout_x11;
        }
        if ((uVar8 & 1) != 0) {
          func_0x0001087d8358();
          if ((bool)uVar3) {
            func_0x0001087d8234();
            func_0x0001087d8164();
            func_0x0001087d8174();
            *(long **)(lVar9 + 0x90) = plVar4;
          }
          func_0x0001087d81f8();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087d83f4(*(undefined8 *)(param_1 + 0xa8));
  lVar9 = *(long *)(param_1 + 0xa8);
  if ((extraout_w8 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(&uStack_60,lVar9 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(&uStack_60);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d5ef4);
    (*pcVar2)();
  }
  uVar8 = 0;
  lVar5 = *(long *)(lVar9 + 0x98);
  lVar9 = *(long *)(lVar9 + 0xa0);
  while ((lVar5 != lVar9 && (*(int *)(lVar5 + 0x18) != 0))) {
    func_0x0001087d8d08();
    lVar5 = extraout_x8;
    uVar8 = extraout_x9;
    lVar9 = extraout_x10;
  }
  uVar7 = 1;
  if ((uVar8 & 1) == 0) {
    uVar7 = 2;
  }
  if (lVar5 != lVar9) {
    uVar7 = 0;
  }
  func_0x0001087d87ec(uVar7);
  func_0x0001087d8868();
  func_0x0001087d8574();
LAB_1087d5e6c:
  func_0x0001087d84c4();
  func_0x0001087d86c0();
  func_0x0001087d8400();
  func_0x000104be1594(param_1 + 0x40);
  func_0x0001087d84cc();
  func_0x000107c286d8(param_1 + 0x78);
  func_0x000107c2814c(param_1 + 0x68);
  func_0x000107c28868(param_1 + 0x58);
  func_0x0001087d84a0();
  return;
}



/* Entry: 1087d5f3c; end: 1087d5fab;  */

void FUN_1087d5f3c(long param_1)

{
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    func_0x0001087d8574();
    func_0x0001087d8868();
  }
  else {
    func_0x0001087d8870();
    func_0x0001087d8574();
    func_0x0001087d881c();
  }
  func_0x0001087d84c4();
  func_0x0001087d86c0();
  func_0x0001087d8400();
  func_0x000104be1594(param_1 + 0x40);
  func_0x0001087d84cc();
  func_0x000107c286d8(param_1 + 0x78);
  func_0x000107c2814c(param_1 + 0x68);
  func_0x000107c28868(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d5fac; end: 1087d6547;  */

void FUN_1087d5fac(long *param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  uint extraout_w8;
  uint extraout_w8_00;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long *extraout_x8_01;
  code *extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  undefined4 extraout_w9;
  uint extraout_w9_00;
  undefined4 extraout_var;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w10_04;
  int extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w10_07;
  uint uVar7;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_a0;
  long lStack_90;
  long lStack_88;
  long *plStack_80;
  uint5 uStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar6 = param_1;
  func_0x0001087d8450();
  uVar4 = 1;
  uStack_58 = extraout_x8;
  if ((char)plVar6[0x15] == '\x02') {
LAB_1087d632c:
    func_0x0001087d8d44();
    if ((extraout_w9_00 >> 5 & 1) != 0) goto LAB_1087d644c;
    func_0x0001087d8b6c();
    func_0x0001087d84c4();
    lStack_88 = param_1[8];
    lStack_90 = param_1[7];
    plStack_80 = (long *)param_1[9];
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[7] = 0;
    uVar1 = (ulong)_uStack_78 >> 0x28;
    uVar7 = (uint)_uStack_78;
    uStack_78 = (uint5)(uVar7 & 0xffffff00);
    _uStack_78 = CONCAT35((int3)uVar1,uStack_78);
    FUN_1087d4008(param_1 + 2,&lStack_90);
    FUN_108642450(&lStack_90);
    plVar6 = param_1 + 7;
LAB_1087d6380:
    FUN_108642450(plVar6);
    func_0x0001087d84cc();
    func_0x0001087d86b8();
  }
  else {
    uVar4 = (char)plVar6[0x15] == '\x01';
    if ((bool)uVar4) {
LAB_1087d62b4:
      func_0x0001087d88b8();
      lVar9 = *plVar6;
      func_0x0001087d8468();
      func_0x0001087d84c4();
      if (lVar9 != 0) {
        param_1[0x14] = param_1[0x13];
        do {
          func_0x0001087d81cc();
        } while (extraout_w10_05 != 0);
        func_0x0001087d83f4(param_1[0x14]);
        if ((extraout_w8_00 >> 1 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x15) = 2;
          lVar10 = param_1[0x14];
          func_0x0001087d8420();
          lVar9 = *plVar6;
          if (lVar9 == 0) {
            func_0x000107c3a5c0();
            lVar9 = *plVar6;
          }
          func_0x0001087d85a8();
          plVar5 = extraout_x8_06;
          do {
            if (*plVar5 != 0) {
              func_0x0001087d842c();
              plVar5 = extraout_x8_07;
              uVar7 = extraout_w10_06;
              if ((extraout_w11_01 & 1) == 0) goto LAB_1087d6328;
LAB_1087d63f4:
              func_0x0001087d8d8c();
              if ((bool)uVar4) {
                func_0x0001087d8234();
                func_0x0001087d8164();
                func_0x0001087d8174();
                *(long **)(lVar10 + 0x90) = plVar6;
              }
              func_0x0001087d83e4();
              *(long *)(extraout_x8_09 + 0x20) = lVar9;
LAB_1087d6440:
              func_0x0001087d81dc();
              goto LAB_1087d63bc;
            }
            func_0x0001087d8224();
            plVar5 = extraout_x8_08;
            uVar7 = extraout_w10_07;
            if ((extraout_w11_02 & 1) != 0) goto LAB_1087d63f4;
LAB_1087d6328:
          } while ((uVar7 >> 1 & 1) == 0);
        }
        goto LAB_1087d632c;
      }
      func_0x0001087d865c();
      plVar6 = &lStack_90;
      goto LAB_1087d6380;
    }
    func_0x0001087d88b8();
    lVar9 = *plVar6;
    func_0x0001087d8468();
    func_0x0001087d87e4();
    func_0x0001087d84cc();
    if (lVar9 != 0) {
      lStack_88 = 1;
      func_0x0001087d898c();
      plVar5 = plVar6;
      plStack_80 = plVar6;
      func_0x0001087d8970();
      plVar14 = plVar5 + 3;
      *plVar14 = extraout_x8_00;
      plVar11 = plVar5 + 5;
      *plVar11 = 0;
      plVar12 = plVar5 + 4;
      *plVar12 = 0;
      func_0x0001087d8730();
      *plVar11 = 0;
      plStack_d0 = (long *)0x0;
      func_0x0001087d8c88();
      func_0x0001087d8c60();
      func_0x0001087d8414();
      func_0x0001087d8ab0(&PTR_FUN_110a71b88);
      plStack_d0 = (long *)0x0;
      func_0x0001087d8c88();
      func_0x0001087d8ce4();
      uStack_d8 = 0;
      plStack_d0 = plVar5;
      plStack_c8 = plVar5;
      func_0x000107c27f98(&uStack_d8);
      func_0x0001087d8a44();
      func_0x0001087d8cdc();
      func_0x000107c288b0(plVar12,&plStack_d0);
      func_0x000107c2887c(plVar11,&plStack_c8);
      func_0x000107c27f98(&plStack_c8);
      func_0x000107c27f9c(&plStack_d0);
      plVar6[3] = (long)&PTR_FUN_110a71ae0;
      plStack_80 = (long *)0x0;
      param_1[0x10] = (long)plVar14;
      param_1[0x11] = (long)plVar6;
      plVar5 = &lStack_90;
      func_0x0001087d46f8();
      lVar9 = plVar6[4];
      param_1[0x13] = lVar9;
      if (lVar9 != 0) {
        do {
          func_0x0001087d81cc();
        } while (extraout_w10 != 0);
        plVar14 = (long *)param_1[0x10];
        plVar6 = (long *)param_1[0x11];
      }
      lVar9 = param_1[0xc];
      lStack_88 = param_1[0xf];
      lStack_90 = param_1[0xe];
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      _uStack_78 = param_1[5];
      plStack_80 = (long *)param_1[4];
      lStack_70 = param_1[6];
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[4] = 0;
      plStack_68 = plVar14;
      plStack_60 = plVar6;
      if (plVar6 != (long *)0x0) {
        do {
          func_0x0001087d8244();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107c28150();
      lVar13 = *(long *)(lVar9 + 0x10);
      __ZNSt3__15mutex4lockEv(lVar13 + 8);
      lVar15 = *(long *)(lVar13 + 0x70);
      func_0x0001087d8e2c();
      plStack_c8 = (long *)CONCAT44(extraout_var,extraout_w9);
      plVar6 = (long *)0x38;
      plStack_d0 = extraout_x8_01;
      __Znwm();
      lVar2 = lStack_88;
      lVar10 = lStack_90;
      lStack_90 = 0;
      lStack_88 = 0;
      plVar6[1] = lVar2;
      *plVar6 = lVar10;
      plVar6[3] = _uStack_78;
      plVar6[2] = (long)plStack_80;
      plVar6[4] = lStack_70;
      plStack_80 = (long *)0x0;
      _uStack_78 = 0;
      plVar6[6] = (long)plStack_60;
      plVar6[5] = (long)plStack_68;
      lStack_70 = 0;
      plStack_68 = (long *)0x0;
      plStack_60 = (long *)0x0;
      plStack_c0 = plVar6;
      plStack_a0 = plVar5;
      func_0x000107c28154(lVar13 + 0x48,&plStack_d0);
      func_0x0001087d89a0();
      __ZNSt3__15mutex6unlockEv(lVar13 + 8);
      if (lVar15 == 0) {
        plStack_c8 = *(long **)(lVar9 + 0x18);
        plStack_d0 = *(long **)(lVar9 + 0x10);
        if (*(long *)(lVar9 + 0x18) != 0) {
          do {
            func_0x0001087d8244();
          } while (extraout_w10_01 != 0);
        }
        func_0x0001087d8610();
        (*extraout_x8_02)();
        func_0x000107c27e74(&plStack_d0);
      }
      func_0x0001087d46a8(&lStack_90);
      func_0x000107c28874(&lStack_90);
      func_0x0001087d8800(&plStack_d0);
      plStack_d0 = (long *)0x0;
      func_0x0001087d85d4(plStack_80);
      func_0x000107c28890(&plStack_d0);
      func_0x0001087d8c18(2,plStack_80);
      plVar6 = plStack_80;
      func_0x000107c28894(plStack_80,0,param_1 + 0x12);
      func_0x000107c28898(plVar6,1,param_1 + 0x13);
      lVar9 = lStack_90;
      lStack_90 = 0;
      param_1[0x14] = lVar9;
      func_0x0001087d8730();
      plVar6 = &lStack_90;
      func_0x000107c2889c();
      param_1[7] = lVar9;
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_02 != 0);
      func_0x0001087d83f4(param_1[7]);
      if ((extraout_w8 >> 1 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x15) = 1;
        func_0x0001087d8420();
        lVar9 = *plVar6;
        if (lVar9 == 0) {
          func_0x000107c3a5c0();
          lVar9 = *plVar6;
        }
        func_0x0001087d85a8();
        plVar5 = extraout_x8_03;
        do {
          if (*plVar5 == 0) {
            func_0x0001087d8224();
            plVar5 = extraout_x8_05;
            uVar7 = extraout_w10_04;
            uVar8 = extraout_w11_00;
          }
          else {
            func_0x0001087d842c();
            plVar5 = extraout_x8_04;
            uVar7 = extraout_w10_03;
            uVar8 = extraout_w11;
          }
          if ((uVar8 & 1) != 0) {
            func_0x0001087d8294();
            if ((bool)uVar4) {
              func_0x0001087d8234();
              func_0x0001087d8164();
              func_0x0001087d8190();
              func_0x0001087d83d4();
            }
            func_0x0001087d82b8();
            *(long *)(extraout_x8_10 + 0x20) = lVar9;
            goto LAB_1087d6440;
          }
        } while ((uVar7 >> 1 & 1) == 0);
      }
      goto LAB_1087d62b4;
    }
    func_0x0001087d865c();
    FUN_108642450(&lStack_90);
  }
  func_0x0001087d8400();
  func_0x000104be1594(param_1 + 4);
  func_0x000107c27f9c(param_1 + 0x12);
  func_0x000107c286d8(param_1 + 0xe);
  func_0x000107c2814c(param_1 + 0xc);
  func_0x000107c28868(param_1 + 10);
  func_0x0001087d84a0();
LAB_1087d63bc:
  func_0x0001087d82e8(uStack_58);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_1087d644c:
  func_0x0001087d861c(&lStack_90);
  __ZSt17rethrow_exceptionSt13exception_ptr(&lStack_90);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1087d6460);
  (*pcVar3)();
}



/* Entry: 1087d6548; end: 1087d65c7;  */

void FUN_1087d6548(long param_1)

{
  if (*(char *)(param_1 + 0xa8) != '\x02') {
    if (*(char *)(param_1 + 0xa8) != '\x01') {
      func_0x000107c27f9c(param_1 + 0x38);
      func_0x0001087d87e4();
      func_0x0001087d84cc();
      goto LAB_1087d6590;
    }
    func_0x000107c27f9c(param_1 + 0x38);
  }
  func_0x0001087d84c4();
  func_0x0001087d84cc();
  func_0x0001087d86b8();
LAB_1087d6590:
  func_0x0001087d8400();
  func_0x000104be1594(param_1 + 0x20);
  func_0x000107c27f9c(param_1 + 0x90);
  func_0x000107c286d8(param_1 + 0x70);
  func_0x000107c2814c(param_1 + 0x60);
  func_0x000107c28868(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d65c8; end: 1087d6c37;  */

void FUN_1087d65c8(long param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined ***pppuVar9;
  uint extraout_w8;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  undefined4 *puVar17;
  long *plVar18;
  long lVar19;
  long lVar20;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  plVar15 = (long *)(param_1 + 0x20);
  func_0x0001087d83f4(*plVar15);
  lVar13 = *plVar15;
  if ((extraout_w8 >> 5 & 1) != 0) {
    __ZNSt13exception_ptrC1ERKS_(&ppuStack_88,lVar13 + 0x18);
    __ZSt17rethrow_exceptionSt13exception_ptr(&ppuStack_88);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d6aec);
    (*pcVar2)();
  }
  lVar12 = param_1 + 0xe8;
  FUN_1087d491c(lVar12,lVar13 + 0x98);
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(lVar13 + 0xb0);
  func_0x0001087d8938();
  if (*(char *)(param_1 + 0x104) == '\x01') {
    uVar6 = *(uint *)(param_1 + 0x100);
    if (uVar6 != 4) {
      lVar20 = **(long **)(param_1 + 0x178);
      plVar16 = *(long **)(lVar20 + 0x58);
      uStack_78 = 0;
      uStack_70 = 0;
      ppuStack_88 = &PTR_FUN_110a6f328;
      ppuStack_80 = (undefined **)0x0;
      uStack_68 = 0x19;
      uVar3 = uVar6 == 4;
      func_0x0001087d8a0c();
      func_0x0001087d88c0();
      lVar13 = param_1 + 0x120;
      func_0x000107c278b8(lVar13);
      lVar19 = *(long *)(param_1 + 0x178);
      func_0x0001087d85cc(*(undefined8 *)(lVar19 + 8));
      FUN_108791610(lVar12,param_1 + 0x120,lVar13);
      FUN_108791a34(plVar15,lVar12);
      (**(code **)(*plVar16 + 0x60))(plVar16,plVar15);
      lVar12 = *(long *)(param_1 + 0x178);
      FUN_108788618(plVar15);
      lVar13 = param_1 + 0x120;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(lVar13);
      func_0x0001087d8550();
      func_0x0001087d8a78(*(undefined8 *)(lVar12 + 0x10));
      if ((bool)uVar3) {
        plVar15 = *(long **)(lVar20 + 0x58);
        uStack_78 = 0;
        uStack_70 = 0;
        ppuStack_88 = &PTR_FUN_110a6f328;
        ppuStack_80 = (undefined **)0x0;
        uStack_68 = 0x1e;
        func_0x0001087d8a0c();
        func_0x0001087d88c0();
        lVar12 = param_1 + 0x138;
        func_0x000107c278b8(lVar12);
        func_0x0001087d85cc(*(undefined8 *)(lVar19 + 8));
        FUN_108791610(lVar13,param_1 + 0x138,lVar12);
        FUN_108791a34(param_1 + 0xc0,lVar13);
        func_0x0001087d8c74(*(undefined8 *)(*plVar15 + 0x60));
        FUN_108788618(param_1 + 0xc0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x138);
        func_0x0001087d8550();
      }
      if (uVar6 < 2) {
        lVar13 = *(long *)(param_1 + 0x178);
        *(undefined1 *)(*(long *)(lVar19 + 8) + 0x952) = 1;
        FUN_1087d3014(*(undefined8 *)(lVar13 + 0x18));
        FUN_1087d1f94(*(undefined8 *)(*(long *)(param_1 + 0x178) + 0x20));
      }
    }
    goto LAB_1087d6a94;
  }
  lVar13 = *(long *)(param_1 + 0x150);
  puVar14 = (undefined8 *)(lVar13 + 0x960);
  if (*(char *)(lVar13 + 0x9b8) == '\x01') {
    iVar11 = *(int *)(lVar13 + 0x9b0) + 1;
  }
  else {
    *(undefined8 *)(lVar13 + 0x9b0) = 0;
    *(undefined8 *)(lVar13 + 0x998) = 0;
    *(undefined8 *)(lVar13 + 0x990) = 0;
    *(undefined8 *)(lVar13 + 0x9a8) = 0;
    *(undefined8 *)(lVar13 + 0x9a0) = 0;
    *(undefined8 *)(lVar13 + 0x978) = 0;
    *(undefined8 *)(lVar13 + 0x970) = 0;
    *(undefined8 *)(lVar13 + 0x988) = 0;
    *(undefined8 *)(lVar13 + 0x980) = 0;
    *(undefined8 *)(lVar13 + 0x968) = 0;
    *puVar14 = 0;
    iVar11 = 1;
    *(undefined1 *)(lVar13 + 0x9b8) = 1;
    lVar13 = *(long *)(param_1 + 0x150);
  }
  *(int *)(lVar13 + 0x9b0) = iVar11;
  lVar13 = *(long *)(param_1 + 0xe8);
  lVar12 = *(long *)(param_1 + 0xf0);
  lVar19 = lVar13;
  if (lVar13 != lVar12) {
    while (lVar20 = lVar13, lVar13 = lVar19 + 0xf8, lVar13 != lVar12) {
      uVar6 = *(uint *)(lVar20 + 0x18);
      uVar7 = *(uint *)(lVar19 + 0x110);
      FUN_1087d55bc();
      FUN_1087d55bc();
      lVar19 = lVar13;
      if (uVar7 <= uVar6) {
        lVar13 = lVar20;
      }
    }
    uVar10 = *(undefined8 *)(param_1 + 0x150);
    *(undefined4 *)puVar14 = *(undefined4 *)(lVar20 + 0x18);
    func_0x0001087d8794(uVar10);
    func_0x0001087d8c90();
    func_0x0001087d8878();
  }
  if (*(char *)(param_1 + 0x181) != '\x01') goto LAB_1087d6a94;
  FUN_1087a580c(plVar15,*(undefined8 *)(param_1 + 0x168),param_1 + 0xe8,
                *(undefined1 *)(param_1 + 0x182));
  plVar16 = *(long **)(param_1 + 0x170);
  lVar13 = *plVar16;
  if (*(char *)(lVar13 + 0xac) == '\x01') {
    puVar14 = (undefined8 *)plVar16[1];
    lVar19 = *(long *)(param_1 + 0x28);
    for (lVar12 = *(long *)(param_1 + 0x20); lVar12 != lVar19; lVar12 = lVar12 + 0x20) {
      FUN_1087d55dc(*puVar14,0x11,*(undefined4 *)(lVar12 + 0x18));
    }
    lVar12 = *(long *)(param_1 + 0x170);
    puVar1 = *(undefined4 **)(param_1 + 0x40);
    for (puVar17 = *(undefined4 **)(param_1 + 0x38); puVar17 != puVar1; puVar17 = puVar17 + 1) {
      FUN_1087d55dc(*(undefined8 *)(*(long *)(lVar12 + 0x10) + 8),0x12,*puVar17);
    }
    lVar20 = *(long *)(param_1 + 0x170);
    lVar19 = *(long *)(param_1 + 0x58);
    for (lVar12 = *(long *)(param_1 + 0x50); lVar12 != lVar19; lVar12 = lVar12 + 4) {
      plVar16 = *(long **)(lVar20 + 0x18);
      plVar18 = *(long **)(*plVar16 + 0x58);
      ppuStack_80 = (undefined **)0x0;
      uStack_78 = 0;
      uStack_70 = 0;
      ppuStack_88 = &PTR_FUN_110a6f328;
      uStack_68 = 0x1b;
      lVar8 = param_1 + 0x108;
      func_0x000107c278b8(lVar8,"media_type");
      func_0x0001087d85cc(plVar16[1]);
      pppuVar9 = &ppuStack_88;
      FUN_108791610(pppuVar9,param_1 + 0x108,lVar8);
      FUN_108791a34(param_1 + 0x98,pppuVar9);
      (**(code **)(*plVar18 + 0x60))(plVar18,param_1 + 0x98);
      FUN_108788618(param_1 + 0x98);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x108);
      func_0x0001087d8550();
    }
    plVar16 = *(long **)(param_1 + 0x170);
  }
  if (*(char *)(lVar13 + 0xc0) == '\x01') {
    puVar14 = (undefined8 *)plVar16[4];
    lVar12 = *(long *)(param_1 + 0x70);
    for (lVar13 = *(long *)(param_1 + 0x68); lVar13 != lVar12; lVar13 = lVar13 + 0x20) {
      FUN_1087d5700(*puVar14,0x1c,*(undefined4 *)(lVar13 + 0x18));
    }
    lVar13 = *(long *)(param_1 + 0x170);
    puVar1 = *(undefined4 **)(param_1 + 0x88);
    for (puVar17 = *(undefined4 **)(param_1 + 0x80); puVar17 != puVar1; puVar17 = puVar17 + 1) {
      FUN_1087d5700(**(undefined8 **)(lVar13 + 0x28),0x1d,*puVar17);
    }
    plVar16 = *(long **)(param_1 + 0x170);
  }
  puVar14 = (undefined8 *)plVar16[6];
  bVar4 = *(int *)*puVar14 == *(int *)(puVar14[1] + 0xb8);
  if (*(int *)*puVar14 < *(int *)(puVar14[1] + 0xb8)) {
    ppuStack_80 = (undefined **)0x0;
    uStack_78 = 0;
    ppuStack_88 = (undefined **)0x0;
    func_0x0001087d8a78(puVar14[2]);
    bVar5 = false;
    if (bVar4) {
      lVar12 = *(long *)(param_1 + 0x28);
      for (lVar13 = *(long *)(param_1 + 0x20); bVar5 = lVar13 == lVar12, !bVar5;
          lVar13 = lVar13 + 0x20) {
        func_0x0001087d8ca4();
      }
    }
    func_0x0001087d8a78(puVar14[3]);
    if (bVar5) {
      lVar13 = *(long *)(param_1 + 0x68);
      lVar12 = *(long *)(param_1 + 0x70);
      if (lVar13 == lVar12) goto LAB_1087d6a54;
      for (; uVar3 = 1, lVar13 != lVar12; lVar13 = lVar13 + 0x20) {
        func_0x0001087d8ca4();
      }
    }
    else {
LAB_1087d6a54:
      uVar3 = 0;
    }
    if (ppuStack_88 != ppuStack_80) {
      *(int *)*puVar14 = *(int *)*puVar14 + 1;
      *(undefined1 *)puVar14[4] = uVar3;
      FUN_10869e39c(puVar14[5],&ppuStack_88);
    }
    func_0x0001087d8a04();
  }
  FUN_1087a628c(plVar15);
LAB_1087d6a94:
  FUN_1087d24f4(&ppuStack_88,*(undefined8 *)(param_1 + 0x160));
  func_0x0001087d8bdc();
  func_0x000107c27f9c(&ppuStack_88);
  FUN_108642450(param_1 + 0xe8);
  func_0x000107c287c8(param_1 + 0x10);
  func_0x000107c27fb8(param_1 + 0x10);
  func_0x0001087d84a0();
  return;
}



/* Entry: 1087d6c38; end: 1087d6c5f;  */

void FUN_1087d6c38(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x20);
  func_0x0001087d8400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d6c60; end: 1087d8033;  */

/* WARNING: Possible PIC construction at 0x0001087e41e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f1f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f1f44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f1f78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f1ff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2238: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f225c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f270c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f24c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f24ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f25c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f206c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f20e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f0304: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f0410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e463c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087efaa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2ed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f32c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e3e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e4038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d6e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d7450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d7490: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d7514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d7558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d7690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d7660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e9598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e9a6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2ae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2b10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f2bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e5180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e5168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e36b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087eb1ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087ea8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f401c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f4248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f3c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f3ca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087ebf68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f1bf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f0b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f0c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f39d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f3a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f3a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087efa64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e7d3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e7bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f3098: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f30bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f30f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f312c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087f3190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e74dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e7a2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e74c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e724c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087ebcf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087ebd88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087e4dd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087db198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087db250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087db400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001087d7298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001087db404) */
/* WARNING: Removing unreachable block (ram,0x0001087db254) */
/* WARNING: Removing unreachable block (ram,0x0001087db28c) */
/* WARNING: Removing unreachable block (ram,0x0001087db29c) */
/* WARNING: Removing unreachable block (ram,0x0001087db2ac) */
/* WARNING: Removing unreachable block (ram,0x0001087db2d0) */
/* WARNING: Removing unreachable block (ram,0x0001087db2e4) */
/* WARNING: Removing unreachable block (ram,0x0001087db3cc) */
/* WARNING: Removing unreachable block (ram,0x0001087db3bc) */
/* WARNING: Removing unreachable block (ram,0x0001087db3d4) */
/* WARNING: Removing unreachable block (ram,0x0001087db2b4) */
/* WARNING: Removing unreachable block (ram,0x0001087e4ddc) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e14) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e18) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e20) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e34) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e38) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e40) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e44) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e84) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e94) */
/* WARNING: Removing unreachable block (ram,0x0001087e4e98) */
/* WARNING: Removing unreachable block (ram,0x0001087e4ea0) */
/* WARNING: Removing unreachable block (ram,0x0001087e4eb4) */
/* WARNING: Removing unreachable block (ram,0x0001087e4eb8) */
/* WARNING: Removing unreachable block (ram,0x0001087e4ec0) */
/* WARNING: Removing unreachable block (ram,0x0001087e4f2c) */
/* WARNING: Removing unreachable block (ram,0x0001087e4f30) */
/* WARNING: Removing unreachable block (ram,0x0001087e4f38) */
/* WARNING: Removing unreachable block (ram,0x0001087e4f88) */
/* WARNING: Removing unreachable block (ram,0x0001087e4fc8) */
/* WARNING: Removing unreachable block (ram,0x0001087e4fd0) */
/* WARNING: Removing unreachable block (ram,0x0001087e4fdc) */
/* WARNING: Removing unreachable block (ram,0x0001087e4ff0) */
/* WARNING: Removing unreachable block (ram,0x0001087e4ff8) */
/* WARNING: Removing unreachable block (ram,0x0001087e5000) */
/* WARNING: Removing unreachable block (ram,0x0001087e5014) */
/* WARNING: Removing unreachable block (ram,0x0001087e5008) */
/* WARNING: Removing unreachable block (ram,0x0001087e501c) */
/* WARNING: Removing unreachable block (ram,0x0001087e5020) */
/* WARNING: Removing unreachable block (ram,0x0001087e5010) */
/* WARNING: Removing unreachable block (ram,0x0001087e51a4) */
/* WARNING: Removing unreachable block (ram,0x0001087e51b0) */
/* WARNING: Removing unreachable block (ram,0x0001087e51b4) */
/* WARNING: Removing unreachable block (ram,0x0001087e51c4) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd8c) */
/* WARNING: Removing unreachable block (ram,0x0001087ebda8) */
/* WARNING: Removing unreachable block (ram,0x0001087ebdf0) */
/* WARNING: Removing unreachable block (ram,0x0001087ebe4c) */
/* WARNING: Removing unreachable block (ram,0x0001087ebdf8) */
/* WARNING: Removing unreachable block (ram,0x0001087ebdfc) */
/* WARNING: Removing unreachable block (ram,0x0001087ebe04) */
/* WARNING: Removing unreachable block (ram,0x0001087ebcf8) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd18) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd20) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd2c) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd44) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd4c) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd50) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd64) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd58) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd6c) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd70) */
/* WARNING: Removing unreachable block (ram,0x0001087ebd60) */
/* WARNING: Removing unreachable block (ram,0x0001087e7250) */
/* WARNING: Removing unreachable block (ram,0x0001087e7258) */
/* WARNING: Removing unreachable block (ram,0x0001087e7274) */
/* WARNING: Removing unreachable block (ram,0x0001087e72d4) */
/* WARNING: Removing unreachable block (ram,0x0001087e7320) */
/* WARNING: Removing unreachable block (ram,0x0001087e7300) */
/* WARNING: Removing unreachable block (ram,0x0001087e7334) */
/* WARNING: Removing unreachable block (ram,0x0001087e8874) */
/* WARNING: Removing unreachable block (ram,0x0001087e7280) */
/* WARNING: Removing unreachable block (ram,0x0001087e72b4) */
/* WARNING: Removing unreachable block (ram,0x0001087e726c) */
/* WARNING: Removing unreachable block (ram,0x0001087e74c8) */
/* WARNING: Removing unreachable block (ram,0x0001087e7a30) */
/* WARNING: Removing unreachable block (ram,0x0001087e8918) */
/* WARNING: Removing unreachable block (ram,0x0001087e74e0) */
/* WARNING: Removing unreachable block (ram,0x0001087e74f4) */
/* WARNING: Removing unreachable block (ram,0x0001087e7510) */
/* WARNING: Removing unreachable block (ram,0x0001087e7a14) */
/* WARNING: Removing unreachable block (ram,0x0001087e751c) */
/* WARNING: Removing unreachable block (ram,0x0001087e752c) */
/* WARNING: Removing unreachable block (ram,0x0001087e7564) */
/* WARNING: Removing unreachable block (ram,0x0001087e79d8) */
/* WARNING: Removing unreachable block (ram,0x0001087e7508) */
/* WARNING: Removing unreachable block (ram,0x0001087f3194) */
/* WARNING: Removing unreachable block (ram,0x0001087f31a0) */
/* WARNING: Removing unreachable block (ram,0x0001087f3130) */
/* WARNING: Removing unreachable block (ram,0x0001087f3138) */
/* WARNING: Removing unreachable block (ram,0x0001087f3144) */
/* WARNING: Removing unreachable block (ram,0x0001087f318c) */
/* WARNING: Removing unreachable block (ram,0x0001087f317c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3190) */
/* WARNING: Removing unreachable block (ram,0x0001087f30fc) */
/* WARNING: Removing unreachable block (ram,0x0001087f30c0) */
/* WARNING: Removing unreachable block (ram,0x0001087f309c) */
/* WARNING: Removing unreachable block (ram,0x0001087e7bb0) */
/* WARNING: Removing unreachable block (ram,0x0001087e7d40) */
/* WARNING: Removing unreachable block (ram,0x0001087efa68) */
/* WARNING: Removing unreachable block (ram,0x0001087ef95c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3a48) */
/* WARNING: Removing unreachable block (ram,0x0001087f3a18) */
/* WARNING: Removing unreachable block (ram,0x0001087f39d4) */
/* WARNING: Removing unreachable block (ram,0x0001087f0c14) */
/* WARNING: Removing unreachable block (ram,0x0001087f0b30) */
/* WARNING: Removing unreachable block (ram,0x0001087f0ba4) */
/* WARNING: Removing unreachable block (ram,0x0001087f0bdc) */
/* WARNING: Removing unreachable block (ram,0x0001087f0be8) */
/* WARNING: Removing unreachable block (ram,0x0001087f0bfc) */
/* WARNING: Removing unreachable block (ram,0x0001087f1bfc) */
/* WARNING: Removing unreachable block (ram,0x0001087ebf6c) */
/* WARNING: Removing unreachable block (ram,0x0001087ebf98) */
/* WARNING: Removing unreachable block (ram,0x0001087ebfa8) */
/* WARNING: Removing unreachable block (ram,0x0001087ebfc8) */
/* WARNING: Removing unreachable block (ram,0x0001087ebfec) */
/* WARNING: Removing unreachable block (ram,0x0001087f3ca4) */
/* WARNING: Removing unreachable block (ram,0x0001087f3cc4) */
/* WARNING: Removing unreachable block (ram,0x0001087f3ccc) */
/* WARNING: Removing unreachable block (ram,0x0001087f3cd8) */
/* WARNING: Removing unreachable block (ram,0x0001087f3cec) */
/* WARNING: Removing unreachable block (ram,0x0001087f3cf4) */
/* WARNING: Removing unreachable block (ram,0x0001087f3cfc) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d10) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d04) */
/* WARNING: Removing unreachable block (ram,0x0001087f3da8) */
/* WARNING: Removing unreachable block (ram,0x0001087f3dbc) */
/* WARNING: Removing unreachable block (ram,0x0001087f3dc0) */
/* WARNING: Removing unreachable block (ram,0x0001087f3dd8) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d0c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d18) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d1c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d58) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d64) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d6c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d94) */
/* WARNING: Removing unreachable block (ram,0x0001087f3dfc) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d9c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3d74) */
/* WARNING: Removing unreachable block (ram,0x0001087f3c5c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3c6c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3c70) */
/* WARNING: Removing unreachable block (ram,0x0001087f3c78) */
/* WARNING: Removing unreachable block (ram,0x0001087f3c88) */
/* WARNING: Removing unreachable block (ram,0x0001087f3c8c) */
/* WARNING: Removing unreachable block (ram,0x0001087f3c94) */
/* WARNING: Removing unreachable block (ram,0x0001087f424c) */
/* WARNING: Removing unreachable block (ram,0x0001087f4260) */
/* WARNING: Removing unreachable block (ram,0x0001087f4020) */
/* WARNING: Removing unreachable block (ram,0x0001087f402c) */
/* WARNING: Removing unreachable block (ram,0x0001087f4034) */
/* WARNING: Removing unreachable block (ram,0x0001087f4060) */
/* WARNING: Removing unreachable block (ram,0x0001087f4074) */
/* WARNING: Removing unreachable block (ram,0x0001087f40ac) */
/* WARNING: Removing unreachable block (ram,0x0001087f41e8) */
/* WARNING: Removing unreachable block (ram,0x0001087f41f0) */
/* WARNING: Removing unreachable block (ram,0x0001087f4238) */
/* WARNING: Removing unreachable block (ram,0x0001087f407c) */
/* WARNING: Removing unreachable block (ram,0x0001087f4240) */
/* WARNING: Removing unreachable block (ram,0x0001087f4040) */
/* WARNING: Removing unreachable block (ram,0x0001087ea8f4) */
/* WARNING: Removing unreachable block (ram,0x0001087eb1b0) */
/* WARNING: Removing unreachable block (ram,0x0001087e36b8) */
/* WARNING: Removing unreachable block (ram,0x0001087e372c) */
/* WARNING: Removing unreachable block (ram,0x0001087e36c8) */
/* WARNING: Removing unreachable block (ram,0x0001087e3734) */
/* WARNING: Removing unreachable block (ram,0x0001087e3758) */
/* WARNING: Removing unreachable block (ram,0x0001087e377c) */
/* WARNING: Removing unreachable block (ram,0x0001087e37a0) */
/* WARNING: Removing unreachable block (ram,0x0001087e37bc) */
/* WARNING: Removing unreachable block (ram,0x0001087e37a8) */
/* WARNING: Removing unreachable block (ram,0x0001087e3760) */
/* WARNING: Removing unreachable block (ram,0x0001087e376c) */
/* WARNING: Removing unreachable block (ram,0x0001087e37ec) */
/* WARNING: Removing unreachable block (ram,0x0001087e516c) */
/* WARNING: Removing unreachable block (ram,0x0001087e5184) */
/* WARNING: Removing unreachable block (ram,0x0001087f2bf0) */
/* WARNING: Removing unreachable block (ram,0x0001087f2b64) */
/* WARNING: Removing unreachable block (ram,0x0001087f2bac) */
/* WARNING: Removing unreachable block (ram,0x0001087f2bb8) */
/* WARNING: Removing unreachable block (ram,0x0001087f2b14) */
/* WARNING: Removing unreachable block (ram,0x0001087f2b48) */
/* WARNING: Removing unreachable block (ram,0x0001087f2b38) */
/* WARNING: Removing unreachable block (ram,0x0001087f2b50) */
/* WARNING: Removing unreachable block (ram,0x0001087f2aec) */
/* WARNING: Removing unreachable block (ram,0x0001087e9a70) */
/* WARNING: Removing unreachable block (ram,0x0001087e9a88) */
/* WARNING: Removing unreachable block (ram,0x0001087e9ab0) */
/* WARNING: Removing unreachable block (ram,0x0001087e9aa8) */
/* WARNING: Removing unreachable block (ram,0x0001087e9ab4) */
/* WARNING: Removing unreachable block (ram,0x0001087e9a80) */
/* WARNING: Removing unreachable block (ram,0x0001087e9acc) */
/* WARNING: Removing unreachable block (ram,0x0001087e959c) */
/* WARNING: Removing unreachable block (ram,0x0001087e95b0) */
/* WARNING: Removing unreachable block (ram,0x0001087e95cc) */
/* WARNING: Removing unreachable block (ram,0x0001087e95c4) */
/* WARNING: Removing unreachable block (ram,0x0001087e95d0) */
/* WARNING: Removing unreachable block (ram,0x0001087e95a8) */
/* WARNING: Removing unreachable block (ram,0x0001087e95d8) */
/* WARNING: Removing unreachable block (ram,0x0001087d7664) */
/* WARNING: Removing unreachable block (ram,0x0001087d755c) */
/* WARNING: Removing unreachable block (ram,0x0001087d7574) */
/* WARNING: Removing unreachable block (ram,0x0001087d757c) */
/* WARNING: Removing unreachable block (ram,0x0001087d7580) */
/* WARNING: Removing unreachable block (ram,0x0001087d7588) */
/* WARNING: Removing unreachable block (ram,0x0001087d759c) */
/* WARNING: Removing unreachable block (ram,0x0001087d75a0) */
/* WARNING: Removing unreachable block (ram,0x0001087d75ac) */
/* WARNING: Removing unreachable block (ram,0x0001087d75c0) */
/* WARNING: Removing unreachable block (ram,0x0001087d75c4) */
/* WARNING: Removing unreachable block (ram,0x0001087d75cc) */
/* WARNING: Removing unreachable block (ram,0x0001087d75e0) */
/* WARNING: Removing unreachable block (ram,0x0001087d75e4) */
/* WARNING: Removing unreachable block (ram,0x0001087d7600) */
/* WARNING: Removing unreachable block (ram,0x0001087d75f0) */
/* WARNING: Removing unreachable block (ram,0x0001087d766c) */
/* WARNING: Removing unreachable block (ram,0x0001087d7694) */
/* WARNING: Removing unreachable block (ram,0x0001087d7698) */
/* WARNING: Removing unreachable block (ram,0x0001087d76a0) */
/* WARNING: Removing unreachable block (ram,0x0001087d76b4) */
/* WARNING: Removing unreachable block (ram,0x0001087d76b8) */
/* WARNING: Removing unreachable block (ram,0x0001087d76e4) */
/* WARNING: Removing unreachable block (ram,0x0001087d76e8) */
/* WARNING: Removing unreachable block (ram,0x0001087d7704) */
/* WARNING: Removing unreachable block (ram,0x0001087d770c) */
/* WARNING: Removing unreachable block (ram,0x0001087d7714) */
/* WARNING: Removing unreachable block (ram,0x0001087d7730) */
/* WARNING: Removing unreachable block (ram,0x0001087d7734) */
/* WARNING: Removing unreachable block (ram,0x0001087d7738) */
/* WARNING: Removing unreachable block (ram,0x0001087d7770) */
/* WARNING: Removing unreachable block (ram,0x0001087d7774) */
/* WARNING: Removing unreachable block (ram,0x0001087d7780) */
/* WARNING: Removing unreachable block (ram,0x0001087d778c) */
/* WARNING: Removing unreachable block (ram,0x0001087d7740) */
/* WARNING: Removing unreachable block (ram,0x0001087d7758) */
/* WARNING: Removing unreachable block (ram,0x0001087d7728) */
/* WARNING: Removing unreachable block (ram,0x0001087d76c4) */
/* WARNING: Removing unreachable block (ram,0x0001087d76d0) */
/* WARNING: Removing unreachable block (ram,0x0001087d76ac) */
/* WARNING: Removing unreachable block (ram,0x0001087d7688) */
/* WARNING: Removing unreachable block (ram,0x0001087d75d8) */
/* WARNING: Removing unreachable block (ram,0x0001087d7594) */
/* WARNING: Removing unreachable block (ram,0x0001087d7518) */
/* WARNING: Removing unreachable block (ram,0x0001087d7494) */
/* WARNING: Removing unreachable block (ram,0x0001087d74a8) */
/* WARNING: Removing unreachable block (ram,0x0001087d74b0) */
/* WARNING: Removing unreachable block (ram,0x0001087d77b0) */
/* WARNING: Removing unreachable block (ram,0x0001087d74b8) */
/* WARNING: Removing unreachable block (ram,0x0001087d7454) */
/* WARNING: Removing unreachable block (ram,0x0001087d6e9c) */
/* WARNING: Removing unreachable block (ram,0x0001087d6eac) */
/* WARNING: Removing unreachable block (ram,0x0001087d6ebc) */
/* WARNING: Removing unreachable block (ram,0x0001087d6ecc) */
/* WARNING: Removing unreachable block (ram,0x0001087d6ef4) */
/* WARNING: Removing unreachable block (ram,0x0001087d6efc) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f04) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f14) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f1c) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f20) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f34) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f28) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f30) */
/* WARNING: Removing unreachable block (ram,0x0001087d6f3c) */
/* WARNING: Removing unreachable block (ram,0x0001087e403c) */
/* WARNING: Removing unreachable block (ram,0x0001087e3ea0) */
/* WARNING: Removing unreachable block (ram,0x0001087e3ed0) */
/* WARNING: Removing unreachable block (ram,0x0001087e3ee0) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f00) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f08) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f14) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f24) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f2c) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f30) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f44) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f38) */
/* WARNING: Removing unreachable block (ram,0x0001087e40ac) */
/* WARNING: Removing unreachable block (ram,0x0001087e40b8) */
/* WARNING: Removing unreachable block (ram,0x0001087e40bc) */
/* WARNING: Removing unreachable block (ram,0x0001087e40cc) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f40) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f50) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f54) */
/* WARNING: Removing unreachable block (ram,0x0001087e4130) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f68) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f90) */
/* WARNING: Removing unreachable block (ram,0x0001087e4144) */
/* WARNING: Removing unreachable block (ram,0x0001087e4148) */
/* WARNING: Removing unreachable block (ram,0x0001087e3fa8) */
/* WARNING: Removing unreachable block (ram,0x0001087e3fac) */
/* WARNING: Removing unreachable block (ram,0x0001087e3fc4) */
/* WARNING: Removing unreachable block (ram,0x0001087e3fb4) */
/* WARNING: Removing unreachable block (ram,0x0001087e3fcc) */
/* WARNING: Removing unreachable block (ram,0x0001087e4000) */
/* WARNING: Removing unreachable block (ram,0x0001087e4024) */
/* WARNING: Removing unreachable block (ram,0x0001087e402c) */
/* WARNING: Removing unreachable block (ram,0x0001087e4044) */
/* WARNING: Removing unreachable block (ram,0x0001087e4064) */
/* WARNING: Removing unreachable block (ram,0x0001087e4068) */
/* WARNING: Removing unreachable block (ram,0x0001087e4034) */
/* WARNING: Removing unreachable block (ram,0x0001087e4008) */
/* WARNING: Removing unreachable block (ram,0x0001087e3f80) */
/* WARNING: Removing unreachable block (ram,0x0001087e406c) */
/* WARNING: Removing unreachable block (ram,0x0001087e4084) */
/* WARNING: Removing unreachable block (ram,0x0001087e408c) */
/* WARNING: Removing unreachable block (ram,0x0001087e40d8) */
/* WARNING: Removing unreachable block (ram,0x0001087e40e4) */
/* WARNING: Removing unreachable block (ram,0x0001087e40ec) */
/* WARNING: Removing unreachable block (ram,0x0001087e40a0) */
/* WARNING: Removing unreachable block (ram,0x0001087e40a8) */
/* WARNING: Removing unreachable block (ram,0x0001087e411c) */
/* WARNING: Removing unreachable block (ram,0x0001087e40d0) */
/* WARNING: Removing unreachable block (ram,0x0001087e8a24) */
/* WARNING: Removing unreachable block (ram,0x0001087e3e58) */
/* WARNING: Removing unreachable block (ram,0x0001087e3e80) */
/* WARNING: Removing unreachable block (ram,0x0001087e3e84) */
/* WARNING: Removing unreachable block (ram,0x0001087e3e8c) */
/* WARNING: Removing unreachable block (ram,0x0001087e3e90) */
/* WARNING: Removing unreachable block (ram,0x0001087f32c4) */
/* WARNING: Removing unreachable block (ram,0x0001087f3310) */
/* WARNING: Removing unreachable block (ram,0x0001087f32f4) */
/* WARNING: Removing unreachable block (ram,0x0001087f2ed8) */
/* WARNING: Removing unreachable block (ram,0x0001087f2ee0) */
/* WARNING: Removing unreachable block (ram,0x0001087f2ee8) */
/* WARNING: Removing unreachable block (ram,0x0001087f2e78) */
/* WARNING: Removing unreachable block (ram,0x0001087efaa4) */
/* WARNING: Removing unreachable block (ram,0x0001087e4640) */
/* WARNING: Removing unreachable block (ram,0x0001087e4650) */
/* WARNING: Removing unreachable block (ram,0x0001087e453c) */
/* WARNING: Removing unreachable block (ram,0x0001087e4594) */
/* WARNING: Removing unreachable block (ram,0x0001087e459c) */
/* WARNING: Removing unreachable block (ram,0x0001087e4550) */
/* WARNING: Removing unreachable block (ram,0x0001087e87d4) */
/* WARNING: Removing unreachable block (ram,0x0001087f0308) */
/* WARNING: Removing unreachable block (ram,0x0001087f034c) */
/* WARNING: Removing unreachable block (ram,0x0001087f03a8) */
/* WARNING: Removing unreachable block (ram,0x0001087f20e8) */
/* WARNING: Removing unreachable block (ram,0x0001087f2070) */
/* WARNING: Removing unreachable block (ram,0x0001087f20b4) */
/* WARNING: Removing unreachable block (ram,0x0001087f20bc) */
/* WARNING: Removing unreachable block (ram,0x0001087f203c) */
/* WARNING: Removing unreachable block (ram,0x0001087f2014) */
/* WARNING: Removing unreachable block (ram,0x0001087f25c4) */
/* WARNING: Removing unreachable block (ram,0x0001087f25d0) */
/* WARNING: Removing unreachable block (ram,0x0001087f252c) */
/* WARNING: Removing unreachable block (ram,0x0001087f2564) */
/* WARNING: Removing unreachable block (ram,0x0001087f2570) */
/* WARNING: Removing unreachable block (ram,0x0001087f25bc) */
/* WARNING: Removing unreachable block (ram,0x0001087f25ac) */
/* WARNING: Removing unreachable block (ram,0x0001087f25c0) */
/* WARNING: Removing unreachable block (ram,0x0001087f24f0) */
/* WARNING: Removing unreachable block (ram,0x0001087f24cc) */
/* WARNING: Removing unreachable block (ram,0x0001087f2710) */
/* WARNING: Removing unreachable block (ram,0x0001087f2114) */
/* WARNING: Removing unreachable block (ram,0x0001087f2260) */
/* WARNING: Removing unreachable block (ram,0x0001087f22c4) */
/* WARNING: Removing unreachable block (ram,0x0001087f22cc) */
/* WARNING: Removing unreachable block (ram,0x0001087f223c) */
/* WARNING: Removing unreachable block (ram,0x0001087f2304) */
/* WARNING: Removing unreachable block (ram,0x0001087f2404) */
/* WARNING: Removing unreachable block (ram,0x0001087f2410) */
/* WARNING: Removing unreachable block (ram,0x0001087f241c) */
/* WARNING: Removing unreachable block (ram,0x0001087f2420) */
/* WARNING: Removing unreachable block (ram,0x0001087f2424) */
/* WARNING: Removing unreachable block (ram,0x0001087f231c) */
/* WARNING: Removing unreachable block (ram,0x0001087f243c) */
/* WARNING: Removing unreachable block (ram,0x0001087f2324) */
/* WARNING: Removing unreachable block (ram,0x0001087f2730) */
/* WARNING: Removing unreachable block (ram,0x0001087f2764) */
/* WARNING: Removing unreachable block (ram,0x0001087f2768) */
/* WARNING: Removing unreachable block (ram,0x0001087f278c) */
/* WARNING: Removing unreachable block (ram,0x0001087f233c) */
/* WARNING: Removing unreachable block (ram,0x0001087f244c) */
/* WARNING: Removing unreachable block (ram,0x0001087f2478) */
/* WARNING: Removing unreachable block (ram,0x0001087f2480) */
/* WARNING: Removing unreachable block (ram,0x0001087f2484) */
/* WARNING: Removing unreachable block (ram,0x0001087f2344) */
/* WARNING: Removing unreachable block (ram,0x0001087f2358) */
/* WARNING: Removing unreachable block (ram,0x0001087f2360) */
/* WARNING: Removing unreachable block (ram,0x0001087f2364) */
/* WARNING: Removing unreachable block (ram,0x0001087f25dc) */
/* WARNING: Removing unreachable block (ram,0x0001087f2370) */
/* WARNING: Removing unreachable block (ram,0x0001087f2378) */
/* WARNING: Removing unreachable block (ram,0x0001087f25e4) */
/* WARNING: Removing unreachable block (ram,0x0001087f25fc) */
/* WARNING: Removing unreachable block (ram,0x0001087f25ec) */
/* WARNING: Removing unreachable block (ram,0x0001087f25f4) */
/* WARNING: Removing unreachable block (ram,0x0001087f2600) */
/* WARNING: Removing unreachable block (ram,0x0001087f2630) */
/* WARNING: Removing unreachable block (ram,0x0001087f2608) */
/* WARNING: Removing unreachable block (ram,0x0001087f2610) */
/* WARNING: Removing unreachable block (ram,0x0001087f2614) */
/* WARNING: Removing unreachable block (ram,0x0001087f2638) */
/* WARNING: Removing unreachable block (ram,0x0001087f2644) */
/* WARNING: Removing unreachable block (ram,0x0001087f2384) */
/* WARNING: Removing unreachable block (ram,0x0001087f2618) */
/* WARNING: Removing unreachable block (ram,0x0001087f2628) */
/* WARNING: Removing unreachable block (ram,0x0001087f2648) */
/* WARNING: Removing unreachable block (ram,0x0001087f2654) */
/* WARNING: Removing unreachable block (ram,0x0001087f2660) */
/* WARNING: Removing unreachable block (ram,0x0001087f2670) */
/* WARNING: Removing unreachable block (ram,0x0001087f2248) */
/* WARNING: Removing unreachable block (ram,0x0001087f224c) */
/* WARNING: Removing unreachable block (ram,0x0001087f1ff4) */
/* WARNING: Removing unreachable block (ram,0x0001087f20f4) */
/* WARNING: Removing unreachable block (ram,0x0001087f1f7c) */
/* WARNING: Removing unreachable block (ram,0x0001087f1fc0) */
/* WARNING: Removing unreachable block (ram,0x0001087f1fc8) */
/* WARNING: Removing unreachable block (ram,0x0001087f1f48) */
/* WARNING: Removing unreachable block (ram,0x0001087f1f20) */
/* WARNING: Removing unreachable block (ram,0x0001087d729c) */
/* WARNING: Removing unreachable block (ram,0x0001087d7354) */
/* WARNING: Removing unreachable block (ram,0x0001087d7358) */
/* WARNING: Removing unreachable block (ram,0x0001087d7360) */
/* WARNING: Removing unreachable block (ram,0x0001087d7368) */
/* WARNING: Removing unreachable block (ram,0x0001087d7378) */
/* WARNING: Removing unreachable block (ram,0x0001087d7380) */
/* WARNING: Removing unreachable block (ram,0x0001087d7384) */
/* WARNING: Removing unreachable block (ram,0x0001087d7398) */
/* WARNING: Removing unreachable block (ram,0x0001087d738c) */
/* WARNING: Removing unreachable block (ram,0x0001087d7394) */
/* WARNING: Removing unreachable block (ram,0x0001087d73a0) */
/* WARNING: Removing unreachable block (ram,0x0001087d72b0) */
/* WARNING: Removing unreachable block (ram,0x0001087d7310) */
/* WARNING: Removing unreachable block (ram,0x0001087d7318) */
/* WARNING: Removing unreachable block (ram,0x0001087d7328) */
/* WARNING: Removing unreachable block (ram,0x0001087d7344) */
/* WARNING: Removing unreachable block (ram,0x0001087d734c) */
/* WARNING: Removing unreachable block (ram,0x0001087d71b0) */
/* WARNING: Removing unreachable block (ram,0x0001087d71c4) */
/* WARNING: Removing unreachable block (ram,0x0001087d71b8) */
/* WARNING: Removing unreachable block (ram,0x0001087d71c0) */
/* WARNING: Removing unreachable block (ram,0x0001087d71cc) */
/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */
/* WARNING: Removing unreachable block (ram,0x0001087f1b28) */
/* WARNING: Removing unreachable block (ram,0x0001087f1b30) */
/* WARNING: Removing unreachable block (ram,0x0001087f1b34) */
/* WARNING: Removing unreachable block (ram,0x0001087f1b3c) */
/* WARNING: Removing unreachable block (ram,0x0001087f2688) */
/* WARNING: Removing unreachable block (ram,0x0001087eada0) */

undefined1  [16]
FUN_1087d6c60(undefined *******param_1,undefined ********param_2,undefined ********param_3,
             undefined8 *param_4,undefined8 *param_5,undefined8 *param_6,undefined8 param_7,
             undefined8 param_8)

{
  undefined *****pppppuVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  undefined ********ppppppppuVar9;
  undefined ********ppppppppuVar10;
  undefined ********ppppppppuVar11;
  undefined8 *puVar12;
  undefined ********ppppppppuVar13;
  ulong uVar14;
  undefined ******ppppppuVar15;
  undefined1 *puVar16;
  undefined **ppuVar17;
  int iVar18;
  undefined ********ppppppppuVar19;
  undefined *puVar20;
  byte extraout_w8;
  byte bVar21;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  uint extraout_w8_03;
  uint extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  uint extraout_w8_07;
  uint extraout_w8_08;
  uint extraout_w8_09;
  uint extraout_w8_10;
  uint extraout_w8_11;
  uint extraout_w8_12;
  undefined4 extraout_w8_13;
  uint extraout_w8_14;
  undefined4 extraout_w8_15;
  undefined4 extraout_w8_16;
  uint extraout_w8_17;
  uint extraout_w8_18;
  uint extraout_w8_19;
  uint extraout_w8_20;
  uint extraout_w8_21;
  uint extraout_w8_22;
  uint uVar22;
  int extraout_w8_23;
  int iVar23;
  uint extraout_w8_24;
  undefined4 uVar24;
  undefined ********extraout_x8;
  undefined ********ppppppppuVar25;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar26;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  code *extraout_x8_09;
  long *extraout_x8_10;
  long *extraout_x8_11;
  long *extraout_x8_12;
  code *extraout_x8_13;
  long *extraout_x8_14;
  long *extraout_x8_15;
  long *extraout_x8_16;
  long *extraout_x8_17;
  long *extraout_x8_18;
  long *extraout_x8_19;
  undefined *******extraout_x8_20;
  undefined *******extraout_x8_21;
  undefined *******extraout_x8_22;
  code *extraout_x8_23;
  code *extraout_x8_24;
  code *extraout_x8_25;
  code *extraout_x8_26;
  code *extraout_x8_27;
  code *extraout_x8_28;
  code *extraout_x8_29;
  code *extraout_x8_30;
  long extraout_x8_31;
  undefined *******extraout_x8_32;
  undefined *******extraout_x8_33;
  long extraout_x8_34;
  undefined8 *extraout_x8_35;
  undefined8 *extraout_x8_36;
  undefined8 *extraout_x8_37;
  undefined ****ppppuVar27;
  long *extraout_x8_38;
  long *extraout_x8_39;
  long *extraout_x8_40;
  undefined ********extraout_x8_41;
  undefined ********extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  undefined *******extraout_x8_45;
  undefined *******extraout_x8_46;
  long extraout_x8_47;
  undefined ********extraout_x8_48;
  undefined ********extraout_x8_49;
  long extraout_x8_50;
  ulong extraout_x8_51;
  long extraout_x8_52;
  ulong extraout_x8_53;
  ulong extraout_x8_54;
  undefined8 extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  undefined8 *extraout_x8_58;
  undefined8 *extraout_x8_59;
  long extraout_x8_60;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  undefined4 extraout_w9_04;
  undefined4 uVar28;
  uint extraout_w9_05;
  uint extraout_w9_06;
  int extraout_w9_07;
  undefined *******extraout_x9;
  undefined *******pppppppuVar29;
  undefined *******extraout_x9_00;
  undefined ********ppppppppuVar30;
  ulong extraout_x9_01;
  undefined *******extraout_x9_02;
  undefined *******pppppppuVar31;
  undefined ********ppppppppuVar32;
  long extraout_x9_03;
  undefined **ppuVar33;
  long extraout_x9_04;
  long extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  int extraout_w10_09;
  uint extraout_w10_10;
  uint extraout_w10_11;
  int extraout_w10_12;
  uint extraout_w10_13;
  uint extraout_w10_14;
  int extraout_w10_15;
  uint extraout_w10_16;
  uint extraout_w10_17;
  int extraout_w10_18;
  int extraout_w10_19;
  int extraout_w10_20;
  int extraout_w10_21;
  int extraout_w10_22;
  int extraout_w10_23;
  int extraout_w10_24;
  int extraout_w10_25;
  int extraout_w10_26;
  int extraout_w10_27;
  int extraout_w10_28;
  int extraout_w10_29;
  int extraout_w10_30;
  int extraout_w10_31;
  int extraout_w10_32;
  int extraout_w10_33;
  int extraout_w10_34;
  int extraout_w10_35;
  int extraout_w10_36;
  int extraout_w10_37;
  int extraout_w10_38;
  int extraout_w10_39;
  int extraout_w10_40;
  int extraout_w10_41;
  int extraout_w10_42;
  int extraout_w10_43;
  int extraout_w10_44;
  int extraout_w10_45;
  int extraout_w10_46;
  int extraout_w10_47;
  int extraout_w10_48;
  int extraout_w10_49;
  int extraout_w10_50;
  int extraout_w10_51;
  int extraout_w10_52;
  int extraout_w10_53;
  uint extraout_w10_54;
  uint extraout_w10_55;
  int extraout_w10_56;
  int extraout_w10_57;
  int extraout_w10_58;
  int extraout_w10_59;
  uint extraout_w10_60;
  uint extraout_w10_61;
  int extraout_w10_62;
  int extraout_w10_63;
  int extraout_w10_64;
  int extraout_w10_65;
  int extraout_w10_66;
  int extraout_w10_67;
  int extraout_w10_68;
  uint extraout_w10_69;
  uint extraout_w10_70;
  int extraout_w10_71;
  uint extraout_w10_72;
  uint extraout_w10_73;
  int extraout_w10_74;
  int extraout_w10_75;
  int extraout_w10_76;
  int extraout_w10_77;
  int extraout_w10_78;
  uint extraout_w10_79;
  uint extraout_w10_80;
  undefined *******extraout_x10;
  long extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  undefined ********extraout_x10_05;
  undefined ********extraout_x10_06;
  undefined ********extraout_x10_07;
  undefined ********ppppppppuVar34;
  undefined ********extraout_x10_08;
  int extraout_w11;
  ulong uVar35;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  ulong extraout_x11_03;
  ulong extraout_x11_04;
  ulong extraout_x11_05;
  ulong extraout_x11_06;
  ulong extraout_x11_07;
  ulong extraout_x11_08;
  ulong extraout_x11_09;
  ulong extraout_x11_10;
  undefined *******extraout_x11_11;
  undefined *******extraout_x11_12;
  ulong extraout_x11_13;
  ulong extraout_x11_14;
  ulong extraout_x11_15;
  ulong extraout_x11_16;
  ulong extraout_x11_17;
  ulong extraout_x11_18;
  ulong extraout_x11_19;
  ulong extraout_x11_20;
  ulong extraout_x11_21;
  undefined8 extraout_x11_22;
  ulong extraout_x11_23;
  ulong extraout_x11_24;
  undefined ********unaff_x20;
  long lVar36;
  undefined ********ppppppppuVar37;
  undefined ********unaff_x21;
  long lVar38;
  undefined *******pppppppuVar39;
  undefined ********ppppppppuVar40;
  undefined *******pppppppuVar41;
  undefined ********ppppppppuVar42;
  undefined ********ppppppppuVar43;
  undefined *****pppppuVar44;
  uint uVar45;
  undefined **ppuVar46;
  undefined ********ppppppppuVar47;
  long unaff_x26;
  undefined ********ppppppppuVar48;
  undefined8 unaff_x27;
  undefined *******pppppppuVar49;
  undefined ******ppppppuVar50;
  undefined ******ppppppuVar51;
  undefined ********ppppppppuVar52;
  undefined8 uVar53;
  undefined *******in_register_00005008;
  undefined ******ppppppuVar54;
  undefined ******ppppppuVar55;
  undefined ******ppppppuVar56;
  undefined ******ppppppuVar57;
  undefined ******ppppppuVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  char cStack0000000000000088;
  undefined7 uStack0000000000000089;
  ulong in_stack_00000090;
  undefined4 in_stack_0000009c;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000bc;
  undefined8 in_stack_00000100;
  undefined *******in_stack_00000108;
  undefined *******in_stack_00000298;
  char in_stack_000002af;
  char in_stack_000002b0;
  int in_stack_000002d0;
  long in_stack_000003f0;
  byte in_stack_00000408;
  byte in_stack_00000468;
  long in_stack_00000710;
  long in_stack_00000718;
  undefined *******in_stack_00000740;
  char in_stack_00000810;
  long *in_stack_000008f0;
  byte in_stack_000009c0;
  undefined ********in_stack_000009f0;
  undefined ********in_stack_000009f8;
  undefined *******in_stack_00000a00;
  int in_stack_00000a30;
  undefined *******in_stack_00000a50;
  int in_stack_00000a58;
  byte in_stack_00000a60;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *******pppppppuStack_170;
  undefined *******pppppppuStack_168;
  undefined *******pppppppuStack_160;
  undefined *******pppppppuStack_158;
  undefined *******pppppppuStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined *******pppppppuStack_128;
  undefined *******pppppppuStack_118;
  undefined8 uStack_100;
  undefined *******pppppppuStack_f8;
  undefined ******ppppppuStack_f0;
  undefined ******ppppppuStack_e8;
  undefined ******ppppppuStack_e0;
  undefined *******pppppppuStack_d8;
  undefined ******ppppppuStack_d0;
  undefined *******pppppppuStack_c8;
  undefined *******pppppppuStack_c0;
  undefined ******ppppppuStack_b8;
  undefined ******ppppppuStack_b0;
  undefined *******pppppppuStack_a8;
  undefined *******pppppppuStack_a0;
  undefined *******pppppppuStack_98;
  undefined *******pppppppuStack_90;
  undefined ******ppppppuStack_88;
  undefined *******pppppppuStack_78;
  undefined *******pppppppuStack_70;
  undefined8 uStack_68;
  
  puVar4 = &uStack_130;
  puVar3 = &uStack_130;
  puVar12 = &uStack_130;
  ppppppppuVar13 = (undefined ********)&uStack_130;
  ppppppppuVar19 = (undefined ********)&uStack_130;
  ppppppppuVar32 = (undefined ********)&stack0xfffffffffffffff0;
  ppppppppuVar43 = param_2 + 0x145;
  uVar53 = 0x1087d6c88;
  ppuVar17 = (undefined **)param_2;
  func_0x0001087d8450();
  ppppppppuVar42 = (undefined ********)(ppuVar17 + 0x1b9);
  ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x1d2);
  pppppppuStack_118 = (undefined *******)ppppppppuVar30;
  pppppppuStack_70 = (undefined *******)extraout_x8;
  ppppppppuVar47 = (undefined ********)0x1190;
  ppppppppuVar9 = (undefined ********)(ppuVar17 + 0x23e);
  ppppppuVar51 = (undefined ******)0x12f0;
  ppppppppuVar48 = (undefined ********)0x1364;
  bVar21 = *(byte *)((long)ppuVar17 + 0x1364);
  ppppppppuVar25 = (undefined ********)(ulong)bVar21;
  ppuVar33 = (undefined **)&UNK_10df58444;
  uVar35 = (ulong)*(ushort *)(&UNK_10df58444 + (long)ppppppppuVar25 * 2);
  ppppppppuVar34 = (undefined ********)(uVar35 * 4 + 0x1087d6cdc);
  ppuVar46 = &PTR___tlv_bootstrap_11340e278;
  iVar23 = (int)param_3;
  uVar8 = in_ZR;
  ppppppppuVar11 = (undefined ********)ppuVar17;
  ppppppppuVar10 = (undefined ********)ppuVar17;
  pcVar2 = (code *)ppppppppuVar25;
  ppppppppuVar37 = unaff_x20;
  ppppppppuVar40 = ppppppppuVar42;
  ppppppppuVar52 = ppppppppuVar32;
  switch(bVar21) {
  case 0:
    goto code_r0x0001087d6e84;
  case 1:
    func_0x000107c28834(ppppppppuVar42);
    func_0x0001087d85a0();
    func_0x0001087d856c();
code_r0x0001087d6d1c:
    while( true ) {
      func_0x0001087d88e4();
      pppppppuVar39 = (undefined *******)ppuVar17[0x21b];
      *ppppppppuVar42 = (undefined *******)0x0;
      ppuVar17[0x1ba] = (undefined *)0x0;
      ppppppppuVar48 = ppppppppuVar9;
      if (pppppppuVar39 == (undefined *******)0x0) break;
      __ZNSt3__119__shared_weak_count4lockEv();
      ppuVar17[0x1ba] = (undefined *)pppppppuVar39;
      if (pppppppuVar39 == (undefined *******)0x0) {
        pppppppuVar39 = *ppppppppuVar42;
      }
      else {
        pppppppuVar39 = (undefined *******)ppuVar17[0x21a];
        *ppppppppuVar42 = pppppppuVar39;
      }
      if (pppppppuVar39 == (undefined *******)0x0) break;
      pppppppuVar41 = (undefined *******)0x0;
      pppppppuVar39 = (undefined *******)*pppppppuVar39;
      *ppppppppuVar9 = pppppppuVar39;
      if (pppppppuVar39 != (undefined *******)0x0) {
        do {
          func_0x0001087d81cc();
        } while (extraout_w10 != 0);
        pppppppuVar41 = *ppppppppuVar9;
      }
      ppuVar17[0x1d2] = (undefined *)pppppppuVar41;
      ppuVar17[0x23e] = (undefined *)0x0;
      *(undefined1 *)(ppuVar17 + 0x1d3) = 1;
      func_0x0001087d856c();
      ppppppppuVar11 = ppppppppuVar42;
      func_0x000107c2994c();
      in_ZR = *(char *)(ppuVar17 + 0x1d3) == '\x01';
      if (!(bool)in_ZR) goto code_r0x0001087d7090;
      in_ZR = *(char *)(param_2 + 0x250) == '\x01';
      if ((bool)in_ZR) {
        func_0x000107c28874(ppppppppuVar42);
        func_0x0001087d8c38(ppppppppuVar9);
        func_0x0001087d82d4();
        func_0x000107c28890(ppppppppuVar9);
        *(undefined *******)((long)ppuVar17[0x1bb] + 8) = (undefined ******)0x3;
        func_0x0001087d8ba4();
        func_0x000107c28894(ppuVar17[0x1bb],0,ppuVar17 + 0x265);
        func_0x0001087d8e40();
        param_3 = (undefined ********)0x1;
        unaff_x20 = ppppppppuVar9;
        goto code_r0x0001087d6df0;
      }
      param_3 = (undefined ********)(ppuVar17 + 0x265);
      ppppppppuVar11 = ppppppppuVar9;
      FUN_1087d2eec(ppppppppuVar9,param_3,pppppppuStack_118);
      *ppppppppuVar42 = *ppppppppuVar9;
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_03 != 0);
      func_0x0001087d83c4();
      if ((extraout_w8_04 >> 1 & 1) == 0) {
        func_0x0001087d81a4(2);
        if (*ppppppppuVar11 == (undefined *******)0x0) {
          func_0x000107c3a5c0();
        }
        func_0x0001087d858c();
        plVar26 = extraout_x8_03;
        do {
          if (*plVar26 == 0) {
            func_0x0001087d8224();
            plVar26 = extraout_x8_05;
            uVar22 = extraout_w10_05;
            uVar35 = extraout_x11_02;
          }
          else {
            func_0x0001087d842c();
            plVar26 = extraout_x8_04;
            uVar22 = extraout_w10_04;
            uVar35 = extraout_x11_01;
          }
          if ((uVar35 & 1) != 0) goto code_r0x0001087d7170;
        } while ((uVar22 >> 1 & 1) == 0);
      }
code_r0x0001087d6fc4:
      ppppppppuVar11 = ppppppppuVar42;
      func_0x000107c28870();
      pppppppuVar39 = *ppppppppuVar11;
      func_0x0001087d85a0();
      func_0x0001087d8938();
      in_ZR = pppppppuVar39 == (undefined *******)0x1;
      if (!(bool)in_ZR) goto code_r0x0001087d6fe4;
      func_0x0001087d891c();
      func_0x0001087d8610();
      (*extraout_x8_09)();
      in_ZR = 0;
      if ((int)ppppppppuVar11 == 1) {
        func_0x0001087d8824();
        in_ZR = ppppppppuVar11 == (undefined ********)0x1;
        if (0 < (long)ppppppppuVar11) {
          *(undefined1 *)((long)ppuVar17[0x267] + 0x971) = 1;
          func_0x0001087d3014();
          FUN_1087d1f94(ppuVar17 + 4);
        }
      }
    }
    ppppppppuVar11 = ppppppppuVar42;
    func_0x000107c2994c();
    *(undefined1 *)(ppuVar17 + 0x1d2) = 0;
    *(undefined1 *)(ppuVar17 + 0x1d3) = 0;
code_r0x0001087d7090:
    func_0x0001087d88e4();
    func_0x0001087d8470();
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_09 != 0);
    func_0x0001087d83c4();
    unaff_x20 = ppppppppuVar9;
    if ((extraout_w8_06 >> 1 & 1) != 0) goto code_r0x0001087d70e4;
    func_0x0001087d81a4(4);
    if (*ppppppppuVar11 == (undefined *******)0x0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087d858c();
    plVar26 = extraout_x8_10;
    while (*plVar26 == 0) {
      func_0x0001087d8224();
      plVar26 = extraout_x8_12;
      uVar22 = extraout_w10_11;
      if ((extraout_x11_06 & 1) != 0) goto code_r0x0001087d7170;
code_r0x0001087d70e0:
      if ((uVar22 >> 1 & 1) != 0) goto code_r0x0001087d70e4;
    }
    func_0x0001087d842c();
    plVar26 = extraout_x8_11;
    uVar22 = extraout_w10_10;
    if ((extraout_x11_05 & 1) == 0) goto code_r0x0001087d70e0;
code_r0x0001087d7170:
    func_0x0001087d8358();
    if ((bool)in_ZR) {
      func_0x0001087d8234();
      func_0x0001087d8164();
      func_0x0001087d8174();
      ppppppppuVar48[0x12] = (undefined *******)ppppppppuVar11;
    }
    func_0x0001087d81f8();
    goto code_r0x0001087d7d40;
  case 2:
    goto code_r0x0001087d6fc4;
  case 3:
    goto code_r0x0001087d6cdc;
  case 4:
code_r0x0001087d70e4:
    func_0x0001087d8860();
    func_0x0001087d8840();
    func_0x0001087d85a0();
    param_3 = ppppppppuVar11;
    goto code_r0x0001087d70f4;
  case 5:
    ppppppppuVar11 = ppppppppuVar30;
    func_0x000107c28870();
    ppppppppuVar48 = (undefined ********)*ppppppppuVar11;
    ppuVar17[0x26b] = (undefined *)ppppppppuVar48;
    func_0x0001087d8938();
    func_0x0001087d8558(0x10d0);
    if (ppppppppuVar48 == (undefined ********)0x0) {
      func_0x0001087d8470();
      do {
        func_0x0001087d81cc();
      } while (extraout_w10_15 != 0);
      func_0x0001087d83c4();
      unaff_x20 = (undefined ********)0x0;
      if ((extraout_w8_08 >> 1 & 1) == 0) {
        func_0x0001087d81a4(6);
        if (*ppppppppuVar11 == (undefined *******)0x0) {
          func_0x000107c3a5c0();
        }
        func_0x0001087d858c();
        plVar26 = extraout_x8_17;
        do {
          if (*plVar26 == 0) {
            func_0x0001087d8224();
            plVar26 = extraout_x8_19;
            uVar22 = extraout_w10_17;
            uVar35 = extraout_x11_10;
          }
          else {
            func_0x0001087d842c();
            plVar26 = extraout_x8_18;
            uVar22 = extraout_w10_16;
            uVar35 = extraout_x11_09;
          }
          if ((uVar35 & 1) != 0) goto code_r0x0001087d7170;
        } while ((uVar22 >> 1 & 1) == 0);
      }
      goto code_r0x0001087d7404;
    }
    func_0x0001087d891c();
    if (ppppppppuVar11 != (undefined ********)0x0) {
      func_0x0001087d8610();
      (*extraout_x8_13)();
      in_ZR = (int)ppppppppuVar11 == 1;
    }
    func_0x0001087d86d4(ppuVar17[0x267]);
    func_0x0001087d82fc();
    FUN_1087d27c0(pppppppuStack_118);
    *ppppppppuVar42 = (undefined *******)*pppppppuStack_118;
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_12 != 0);
    func_0x0001087d83c4();
    unaff_x20 = ppppppppuVar48;
    unaff_x21 = ppppppppuVar30;
    if ((extraout_w8_07 >> 1 & 1) == 0) {
      func_0x0001087d81a4(7);
      unaff_x21 = (undefined ********)*ppppppppuVar11;
      if (unaff_x21 == (undefined ********)0x0) {
        func_0x000107c3a5c0();
        unaff_x21 = (undefined ********)*ppppppppuVar11;
      }
      func_0x0001087d858c();
      plVar26 = extraout_x8_14;
      do {
        if (*plVar26 == 0) {
          func_0x0001087d8224();
          plVar26 = extraout_x8_16;
          uVar22 = extraout_w10_14;
          uVar35 = extraout_x11_08;
        }
        else {
          func_0x0001087d842c();
          plVar26 = extraout_x8_15;
          uVar22 = extraout_w10_13;
          uVar35 = extraout_x11_07;
        }
        if ((uVar35 & 1) != 0) goto code_r0x0001087d7170;
      } while ((uVar22 >> 1 & 1) == 0);
    }
  case 7:
    func_0x000107c28834(ppppppppuVar42);
    func_0x0001087d85a0();
    uVar53 = 0x1087d729c;
    ppppppppuVar9 = (undefined ********)pppppppuStack_118;
    break;
  case 6:
code_r0x0001087d7404:
    func_0x0001087d8860();
    func_0x0001087d8840();
    param_3 = ppppppppuVar11;
    goto code_r0x0001087d7410;
  case 8:
    param_3 = (undefined ********)ppuVar17;
    func_0x0001087d8860();
    func_0x0001087d8840();
    goto code_r0x0001087d7410;
  case 9:
    param_3 = (undefined ********)ppuVar17;
    func_0x0001087d8860();
    func_0x0001087d8840();
code_r0x0001087d7410:
    func_0x0001087d85a0();
code_r0x0001087d7414:
    in_ZR = ppuVar17[0x145] == ppuVar17[0x146];
    if ((bool)in_ZR) {
      func_0x0001087d8ac0(ppuVar17[0x267]);
      ppuVar17[0x1f8] = (undefined *)extraout_x9;
      ppuVar17[0x1f9] = (undefined *)extraout_x10;
      ppuVar17[0x1fa] = (undefined *)extraout_x11_11;
      func_0x0001087d8b00();
      func_0x0001087d8b0c();
      if ((bool)in_ZR) {
        func_0x0001087d8c24();
      }
      else {
        *(undefined1 *)(param_2 + 0x23a) = 0;
        *(undefined1 *)(param_2 + 0x23d) = 0;
      }
      func_0x0001087d8a68(&ppppppuStack_e0);
      func_0x0001087d852c();
      func_0x0001087d8948();
      func_0x0001087d8c30();
      func_0x0001087d8a54();
      func_0x0001087d8764();
      ppppppppuVar11 = ppppppppuVar43;
    }
    else {
      param_3 = (undefined ********)(ppuVar17 + 0x148);
      FUN_108799ed8(pppppppuStack_118,ppppppppuVar43,param_3);
      func_0x0001087d8b3c();
      ppppppppuVar48 = (undefined ********)pppppppuStack_118;
      if ((bool)in_ZR) {
        func_0x0001087d8a84();
        uVar53 = 0x1087d7454;
SUB_10002b838:
        pppppppuStack_140 = (undefined *******)ppppppppuVar32;
        pcStack_138 = (code *)uVar53;
        func_0x00010002b82c();
        func_0x000107c613d0(param_3);
        func_0x000107c60c50(unaff_x20,ppuVar17,param_3);
        auVar59._8_8_ = ppuVar17;
        auVar59._0_8_ = unaff_x20;
        return auVar59;
      }
      pppppppuStack_128 = (undefined *******)ppppppppuVar43;
      if (ppuVar17[0x1d7] != ppuVar17[0x1d8]) {
        func_0x0001087d8a84();
        uVar53 = 0x1087d7518;
        goto SUB_10002b838;
      }
      lVar36 = 0;
      pppppppuVar39 = (undefined *******)0x0;
      lVar38 = 0;
      while( true ) {
        ppppppppuVar43 = (undefined ********)pppppppuStack_128;
        pppppppuVar41 = (undefined *******)ppuVar17[0x146];
        pppppppuVar29 = (undefined *******)ppuVar17[0x145];
        if (lVar38 == ((long)pppppppuVar41 - (long)pppppppuVar29) / 0x118) break;
        ppppppuStack_e0 = (undefined ******)CONCAT44(ppppppuStack_e0._4_4_,(int)lVar38);
        ppppppppuVar32 = ppppppppuVar48;
        func_0x0001077f9fe4(ppppppppuVar48,&ppppppuStack_e0);
        if ((ppppppppuVar32 == (undefined ********)0x0) &&
           ((pppppppuVar39 == (undefined *******)0x0 ||
            ((int)*(uint *)pppppppuVar39 < *(int *)((long)*pppppppuStack_128 + lVar36))))) {
          pppppppuVar39 = (undefined *******)((long)*pppppppuStack_128 + lVar36);
        }
        lVar38 = lVar38 + 1;
        lVar36 = lVar36 + 0x118;
      }
      in_ZR = true;
      if (pppppppuVar39 == (undefined *******)0x0) {
        if ((undefined *******)ppuVar17[0x1d5] != (undefined *******)0x0) {
          in_ZR = pppppppuVar29 == pppppppuVar41;
          pppppppuVar31 = pppppppuVar29;
          pppppppuVar39 = pppppppuVar29;
          if (!(bool)in_ZR) {
            while( true ) {
              pppppppuVar29 = pppppppuVar31;
              pppppppuVar39 = pppppppuVar39 + 0x23;
              in_ZR = true;
              if (pppppppuVar39 == pppppppuVar41) break;
              pppppppuVar31 = pppppppuVar39;
              if ((int)*(uint *)pppppppuVar39 <= (int)*(uint *)pppppppuVar29) {
                pppppppuVar31 = pppppppuVar29;
              }
            }
          }
          pppppppuVar39 = pppppppuVar29;
          if (pppppppuVar29 != (undefined *******)0x0) goto code_r0x0001087d7888;
        }
code_r0x0001087d7970:
        ppppppppuVar32 = (undefined ********)ppuVar17[0x267];
        FUN_108656428(ppppppppuVar42,ppppppppuVar32 + 0x94);
        func_0x000107c29edc(&ppppppuStack_e0,ppuVar17 + 0x148);
        FUN_10879d9ac(ppppppppuVar42);
        func_0x000107c27b9c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_e0);
        FUN_1087d4b54(ppuVar17 + 0x1bc);
        FUN_1086eb9e8(ppuVar17 + 0x1bf);
        ppuVar17[0x241] = (undefined *)0x0;
        ppuVar17[0x240] = (undefined *)0x0;
        ppuVar17[0x243] = (undefined *)0x0;
        ppuVar17[0x242] = (undefined *)0x0;
        ppuVar17[0x23f] = (undefined *)0x0;
        *ppppppppuVar9 = (undefined *******)0x0;
        func_0x0001087d8318();
        func_0x000107c27ed0(ppppppppuVar9);
        func_0x0001087d8318();
        func_0x00010528d190(ppuVar17 + 0x241);
        lVar36 = 0;
        lVar38 = 0;
        uStack_130 = (undefined **)ppppppppuVar32;
        for (uVar35 = 0; pppppppuVar39 = (undefined *******)ppuVar17[0x145],
            uVar35 != ((long)ppuVar17[0x146] - (long)pppppppuVar39) / 0x118; uVar35 = uVar35 + 1) {
          ppppppuStack_e0 = (undefined ******)CONCAT44(ppppppuStack_e0._4_4_,(int)uVar35);
          ppppppppuVar32 = (undefined ********)pppppppuStack_118;
          func_0x0001077f9fe4(pppppppuStack_118,&ppppppuStack_e0);
          if (ppppppppuVar32 == (undefined ********)0x0) {
            if (((undefined *******)ppuVar17[0x1d5] != (undefined *******)0x0) &&
               (uVar35 < (ulong)(((long)ppuVar17[0x187] - (long)ppuVar17[0x186]) / 0x18))) {
              FUN_1087d4b68(ppuVar17 + 0x241,(undefined *)((long)ppuVar17[0x186] + lVar38));
            }
            if (*(char *)((long)pppppppuVar39 + lVar36 + 200) == '\x01') {
              FUN_1088455a4(&ppppppuStack_e0,(undefined *)((long)pppppppuVar39 + lVar36 + 0x80));
              ppppppppuVar32 = (undefined ********)(ppuVar17 + 0x1bc);
              func_0x000107c303b0(ppppppppuVar32,0x1087d4c40);
              if (ppppppppuVar32 != (undefined ********)&ppppppuStack_e0) {
                ppppppppuVar32 = (undefined ********)ppppppppuVar32[1];
                if (((ulong)ppppppppuVar32 & 1) != 0) {
                  ppppppppuVar32 =
                       *(undefined *********)((ulong)ppppppppuVar32 & 0xfffffffffffffffe);
                }
                ppppppppuVar30 = (undefined ********)pppppppuStack_d8;
                if (((ulong)pppppppuStack_d8 & 1) != 0) {
                  ppppppppuVar30 =
                       *(undefined *********)((ulong)pppppppuStack_d8 & 0xfffffffffffffffe);
                }
                if (ppppppppuVar32 == ppppppppuVar30) {
                  func_0x00010890b3e0();
                }
                else {
                  FUN_10890b3b0();
                }
              }
              FUN_10890b038(&ppppppuStack_e0);
            }
            if (*(char *)((long)pppppppuVar39 + lVar36 + 0xe8) == '\x01') {
              FUN_108848384(&ppppppuStack_e0,(undefined *)((long)pppppppuVar39 + lVar36 + 0xd0));
              FUN_10879d9f8(ppuVar17 + 0x1bf);
              FUN_10879c7d4();
              func_0x000107c2a4cc(&ppppppuStack_e0);
              pppppppuVar41 = (undefined *******)ppuVar17[0x23f];
              if (pppppppuVar41 < ppuVar17[0x240]) {
                func_0x000107c28c7c(pppppppuVar41,(undefined *)((long)pppppppuVar39 + lVar36 + 0xd0)
                                   );
                pppppppuVar41 = pppppppuVar41 + 3;
              }
              else {
                ppppppppuVar32 = ppppppppuVar9;
                func_0x00010528d850(ppppppppuVar9,
                                    ((long)pppppppuVar41 - (long)*ppppppppuVar9) / 0x18 + 1);
                func_0x0001087d8c04(ppuVar17 + 0x21a,ppppppppuVar32,
                                    ((long)ppuVar17[0x23f] - (long)ppuVar17[0x23e]) / 0x18);
                func_0x000107c28c7c(ppuVar17[0x21c],
                                    (undefined *)((long)pppppppuVar39 + lVar36 + 0xd0));
                ppuVar17[0x21c] = (undefined *)((long)ppuVar17[0x21c] + 0x18);
                func_0x000107c27ed4(ppppppppuVar9,ppuVar17 + 0x21a);
                pppppppuVar41 = (undefined *******)ppuVar17[0x23f];
                func_0x000107c27edc(ppuVar17 + 0x21a);
              }
              ppuVar17[0x23f] = (undefined *)pppppppuVar41;
            }
          }
          lVar38 = lVar38 + 0x18;
          lVar36 = lVar36 + 0x118;
        }
        unaff_x21 = (undefined ********)0x1208;
        if ((undefined *******)ppuVar17[0x1d5] != (undefined *******)0x0) {
          FUN_10869e39c(ppuVar17 + 0x186,ppuVar17 + 0x241);
        }
        ppppppppuVar48 = (undefined ********)pppppppuStack_118;
        ppppppppuVar43 = (undefined ********)pppppppuStack_128;
        ppppppppuVar32 = (undefined ********)uStack_130;
        in_ZR = *(char *)(ppuVar17 + 0x1a0) == '\x01';
        if ((bool)in_ZR) {
          ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x19d);
          FUN_108725c44(ppppppppuVar30,ppppppppuVar9);
        }
        else {
          ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x19d);
          func_0x000107c28b94(ppppppppuVar30,ppppppppuVar9);
          *(undefined1 *)(ppuVar17 + 0x1a0) = 1;
        }
        *(uint *)(ppuVar17 + 0x1bb) = *(uint *)(ppuVar17 + 0x1bb) | 2;
        ppppppppuVar11 = (undefined ********)ppuVar17[0x1c7];
        if ((undefined ********)ppuVar17[0x1c7] == (undefined ********)0x0) {
          ppppppppuVar30 = (undefined ********)ppuVar17[0x1ba];
          if (((ulong)ppppppppuVar30 & 1) != 0) {
            func_0x0001087d8dc0();
          }
          func_0x000107c29a10();
          ppuVar17[0x1c7] = (undefined *)ppppppppuVar30;
          ppppppppuVar11 = ppppppppuVar30;
        }
        uVar8 = SUB81(ppppppppuVar30,0);
        func_0x0001087d8514();
        *(undefined1 *)(ppppppppuVar11 + 2) = uVar8;
        if (*(int *)(ppuVar17 + 0x1ce) == 0) {
          ppppppppuVar30 = ppppppppuVar42;
          FUN_10879c7c4();
          in_ZR = *(int *)((long)ppppppppuVar30 + 0x1c) == 1;
          if ((bool)in_ZR) {
            ppppppppuVar11 = ppppppppuVar30;
            ppppppppuVar30 = (undefined ********)ppppppppuVar30[2];
          }
          else {
            func_0x000107c2a4e0(ppppppppuVar30);
            *(undefined4 *)((long)ppppppppuVar30 + 0x1c) = 1;
            ppppppppuVar11 = (undefined ********)ppppppppuVar30[1];
            if (((ulong)ppppppppuVar11 & 1) != 0) {
              func_0x0001087d8dc0();
            }
            func_0x000107c29a14();
            ppppppppuVar30[2] = (undefined *******)ppppppppuVar11;
            ppppppppuVar30 = ppppppppuVar11;
          }
          uVar8 = SUB81(ppppppppuVar11,0);
          func_0x0001087d8514();
          *(undefined1 *)(ppppppppuVar30 + 2) = uVar8;
        }
        param_3 = ppppppppuVar42;
        func_0x0001087be850(ppppppppuVar32 + 0x94);
        func_0x0001087d8bc8(ppuVar17[0x267]);
        pppppppuVar39 = (undefined *******)ppuVar17[0x147];
        pppppppuVar29 = ppppppppuVar43[1];
        pppppppuVar41 = *ppppppppuVar43;
        ppppppppuVar43[1] = (undefined *******)0x0;
        ppppppppuVar43[2] = (undefined *******)0x0;
        *ppppppppuVar43 = (undefined *******)0x0;
        ppuVar17[0x201] = (undefined *)pppppppuVar29;
        ppuVar17[0x200] = (undefined *)pppppppuVar41;
        ppuVar17[0x202] = (undefined *)pppppppuVar39;
        func_0x0001087d8b00();
        *(undefined4 *)(ppuVar17 + 0x205) = 0;
        *(undefined1 *)(ppppppppuVar43 + 0xc1) = 1;
        func_0x0001087d88f4(&ppppppuStack_e0);
        func_0x0001087d852c();
        func_0x0001087d8948();
        FUN_1087a33a8(ppuVar17 + 0x1ff);
        func_0x0001087d8764();
        unaff_x20 = ppppppppuVar9;
code_r0x0001087d7cdc:
        func_0x000104be1594((long)ppuVar17 + (long)unaff_x21);
        func_0x000107c27a44(unaff_x20);
        func_0x000107c2a500(ppppppppuVar42);
      }
      else {
code_r0x0001087d7888:
        param_3 = (undefined ********)(ulong)*(uint *)pppppppuVar39;
        if (*(uint *)pppppppuVar39 == 0) goto code_r0x0001087d7970;
        func_0x0001087d8ac0();
        ppuVar17[0x1e8] = (undefined *)extraout_x9_00;
        ppuVar17[0x1e9] = (undefined *)extraout_x8_20;
        ppuVar17[0x1ea] = (undefined *)extraout_x11_12;
        func_0x0001087d8b00();
        *(undefined4 *)(ppuVar17 + 0x1ed) = 0;
        *(undefined1 *)(ppuVar17 + 0x1ee) = 1;
        func_0x0001087d3028(ppuVar17 + 0x22e,pppppppuVar39,extraout_x10_00 + 0x20);
        func_0x0001087d84dc(&ppppppuStack_e0,param_3,ppuVar17 + 0x1e7);
        func_0x0001087d852c();
        func_0x0001087d8948();
        func_0x0001087d8c30();
        FUN_1087a33a8(ppuVar17 + 0x1e7);
        func_0x0001087d8764();
      }
      FUN_10879b7ac(ppppppppuVar48);
      ppppppppuVar11 = ppppppppuVar43;
    }
    func_0x0001087d4c90(ppuVar17[0x218]);
    func_0x0001087d8508();
    func_0x0001087d8560();
    func_0x0001087d8a2c(0x1238);
    FUN_1087d30e0(ppppppppuVar11);
    func_0x0001087d8558(0x1328);
    func_0x0001087d8558(0x1308);
    func_0x0001087d8c9c();
    func_0x0001087d84f4();
    func_0x0001087d84e8();
    func_0x0001087d8400();
    func_0x0001087d84a0();
code_r0x0001087d7d40:
    func_0x0001087d82e8(pppppppuStack_70);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      do {
        if ((int)param_3 == 0) {
          __Unwind_Resume(ppppppppuVar11);
        }
        func_0x000104bd46a0();
      } while( true );
    }
    auVar70._8_8_ = param_3;
    auVar70._0_8_ = ppppppppuVar11;
    return auVar70;
  case 10:
    goto code_r0x0001087d7cdc;
  case 0xb:
    lVar38 = (long)ppuVar17 + (long)ppppppppuVar25;
    pcStack_138 = (code *)0x1087d6c88;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    func_0x0001087d8e4c();
    if (lVar38 != 0) {
      func_0x000107c278a0();
    }
    auVar67._8_8_ = param_3;
    auVar67._0_8_ = ppuVar17;
    return auVar67;
  case 0xc:
    if (param_3[3] != param_3[4]) {
      FUN_1087dbf38(&pppppppuStack_c0);
    }
    ppppppuStack_e0 = (undefined ******)((ulong)ppppppuStack_e0 & 0xffffffffffffff00);
    pppppppuStack_c8 = (undefined *******)((ulong)pppppppuStack_c8 & 0xffffffffffffff00);
    if ((*(char *)(ppuVar17 + 8) == '\x01') && (ppuVar17[5] != ppuVar17[6])) {
      FUN_108848384(&ppppppuStack_e0,ppuVar17 + 5);
      func_0x00010b4d1804(&stack0x00000088,&ppppppuStack_e0);
      func_0x000107c2a4cc(&ppppppuStack_e0);
      uVar35 = in_stack_00000090;
      puVar3 = (undefined8 *)CONCAT71(uStack0000000000000089,cStack0000000000000088);
      if (-1 < (char)in_stack_0000009c._3_1_) {
        uVar35 = (ulong)in_stack_0000009c._3_1_;
        puVar3 = (undefined8 *)&stack0x00000088;
      }
      func_0x000107c28004(&stack0x00000048,puVar3,(long)puVar3 + uVar35);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000088);
      param_3 = (undefined ********)&stack0x00000048;
      FUN_1086554b0(&ppppppuStack_e0,param_3);
      ppuVar17 = (undefined **)&stack0x00000048;
      pcStack_138 = (code *)0x1087db19c;
      goto SUB_100100fec;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&stack0x00000088,0x11340e2b0);
    func_0x0001087dc308();
    in_stack_000000bc = *(undefined4 *)ppuVar17;
    in_stack_000000b8 = uRam000000011340e2a8;
    FUN_108691254(&stack0x000000c0,ppppppppuVar43);
    func_0x000107c279a0(&stack0x000000e0,ppuVar17 + 1);
    in_stack_00000100 = 0x1190;
    ppppppppuVar30 = unaff_x20 + 0x14;
    FUN_108679cf0();
    in_stack_00000108 = *ppppppppuVar30;
    if ((long)*ppppppppuVar30 < 1) {
      in_stack_00000108 = (undefined *******)0xf731400;
    }
    in_stack_00000108 = in_stack_00000108 + 0x232;
    func_0x000107c27b7c(&stack0x00000110,&pppppppuStack_c0);
    func_0x000107c27b7c(&stack0x00000130,&ppppppuStack_e0);
    FUN_1088689d0(*unaff_x20,&stack0x00000088);
    FUN_108868e10(*unaff_x20,&stack0x00000088,&stack0x000000a0);
    param_3 = (undefined ********)&UNK_10f4bb8e7;
    uVar53 = 0x1087db254;
    goto SUB_10002b838;
  case 0xd:
    func_0x0001087daaa8();
    func_0x0001087dab24();
    goto code_r0x00010bdbd7ac;
  case 0xe:
    auVar71._8_8_ = param_3;
    auVar71._0_8_ = ppuVar17;
    return auVar71;
  case 0xf:
  case 0x27:
  case 0xad:
  case 0xf4:
    ppppppppuVar11 = (undefined ********)0xb8;
    __Znwm();
    ppppppppuVar42 = (undefined ********)(ppuVar17 + 0x1b);
    unaff_x20 = (undefined ********)(ppuVar17 + 0x1c);
  case 0xef:
    func_0x0001087e8fb4();
    *ppppppppuVar11 = (undefined *******)&PTR_FUN_110a722f0;
    *(undefined1 *)(ppppppppuVar11 + 0x13) = 0;
    *(undefined1 *)(ppppppppuVar11 + 0x16) = 0;
    pppppppuStack_f8 = (undefined *******)0x0;
    func_0x000107c27f98(&pppppppuStack_f8);
    uVar53 = 0x1087e3e58;
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)&stack0xfffffffffffffef0;
    break;
  case 0x10:
  case 0x28:
  case 0xae:
  case 0xf5:
    ppppppuStack_e0 = (undefined ******)&UNK_10df58444;
    pppppppuStack_d8 = (undefined *******)((ulong)pppppppuStack_d8 & 0xffffffffffffff00);
    param_3 = (undefined ********)&stack0xfffffffffffffee0;
    uStack_100 = ppppppppuVar25;
    pppppppuStack_f8 = (undefined *******)ppppppppuVar34;
    (*(code *)(*unaff_x21)[5])();
    func_0x0001086cf1c0(&stack0xfffffffffffffee0);
    goto LAB_1087f26e8;
  case 0x11:
  case 0x29:
  case 0xaf:
  case 0xd1:
  case 0xf6:
    goto code_r0x0001087f2e60;
  case 0x12:
  case 0x44:
  case 0xb0:
    goto code_r0x0001087f21c0;
  default:
    goto LAB_1087f3a70;
  case 0x14:
  case 0x46:
  case 0xb2:
    goto LAB_1087ef2a8;
  case 0x15:
  case 0x47:
  case 0xb3:
    ppppppppuVar30 = (undefined ********)(ppuVar17 + 4);
    if (*(char *)(ppuVar17 + 0xf) == '\x01') {
      pcStack_138 = (code *)0x1087d6c88;
      pppppppuStack_140 = (undefined *******)ppppppppuVar32;
      FUN_1088f72bc();
    }
    auVar69._8_8_ = param_3;
    auVar69._0_8_ = ppppppppuVar30;
    return auVar69;
  case 0x16:
  case 0x48:
  case 0xb4:
    goto code_r0x0001087f0a94;
  case 0x17:
    func_0x000107c27fec(&uStack_100);
    uStack_100 = (undefined ********)unaff_x21[-1];
    pppppppuVar39 = (undefined *******)uStack_100;
    if (uStack_100 != (undefined ********)0x0) {
      do {
        func_0x0001087e8700();
        pppppppuVar39 = (undefined *******)uStack_100;
      } while (extraout_w10_20 != 0);
    }
    unaff_x20 = (undefined ********)(ppuVar17 + 0x4a);
    uStack_100 = (undefined ********)0x0;
    uVar53 = 0x1087e4ddc;
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)&uStack_100;
    pppppppuRam0000000000001364 = pppppppuVar39;
    break;
  case 0x18:
    goto SUB_10002b838;
  case 0x19:
  case 0x25:
    goto code_r0x0001087f2e70;
  case 0x1a:
  case 0x34:
  case 0x61:
    auVar94._8_8_ = (long)param_3 + 0x7c3;
    auVar94._0_8_ = ppuVar17;
    return auVar94;
  case 0x1b:
    auVar80._8_8_ = param_3;
    auVar80._0_8_ = ppuVar17;
    return auVar80;
  case 0x1c:
  case 0x35:
  case 0x62:
    bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
    if (bVar5) {
      *ppppppppuVar25 = (undefined *******)&UNK_10df58448;
      ExclusiveMonitorsStatus();
    }
    auVar88._8_8_ = param_3;
    auVar88._0_8_ = ppuVar17;
    return auVar88;
  case 0x1d:
    goto code_r0x0001087ef280;
  case 0x1e:
    goto SUB_1087f1238;
  case 0x1f:
    goto code_r0x0001087f0eac;
  case 0x20:
    ppuVar17[0x41] = (undefined *)unaff_x20;
    func_0x0001087e472c(ppuVar17 + 2);
    FUN_1087e46b4(ppuVar17 + 2);
    if (*(int *)(ppuVar17 + 0x1d4) != 0) goto code_r0x0001087f0210;
    func_0x0001087f11ec(1);
    func_0x0001087f1318();
    goto LAB_1087f040c;
  case 0x21:
    goto code_r0x0001087f028c;
  case 0x22:
    goto code_r0x0001087ef278;
  case 0x23:
  case 0x3d:
    goto LAB_1087f02ac;
  case 0x24:
  case 0x38:
  case 0x5b:
    do {
      *(undefined1 *)(ppuVar17 + 7) = 0;
      if (*(int *)ppppppppuVar47 == 0) {
        if (*(char *)((long)ppppppppuVar47 + 100) == '\x01') {
code_r0x0001087f3e60:
          func_0x000107c2793c();
          func_0x0001087f5cdc();
code_r0x0001087f3e68:
          func_0x0001087f5e14();
          goto LAB_1087f3e9c;
        }
LAB_1087f3e70:
        if ((*(char *)(ppppppppuVar47 + 4) != '\x01') || (ppppppppuVar47[1] == ppppppppuVar47[2])) {
code_r0x0001087f3e8c:
          func_0x000107c2793c(ppppppppuVar43);
          func_0x0001087f5cdc();
          func_0x0001087f5e14();
          goto LAB_1087f3e9c;
        }
      }
      else {
        func_0x000107c2793c(&PTR___tlv_bootstrap_11340e278);
        func_0x0001087f5cdc();
        func_0x0001087f5e14();
LAB_1087f3e9c:
        func_0x0001087f5dfc();
      }
      if (*(char *)(ppuVar17 + 7) == '\x01') {
        func_0x0001087f5ff0();
        func_0x0001087f5cdc();
        ppppppppuVar9 = (undefined ********)pppppppuStack_118;
        param_3 = (undefined ********)&ppppppuStack_f0;
        func_0x000107c27b94();
        func_0x0001087f5dfc();
        ppppppuStack_f0 = (undefined ******)0x700000007;
        func_0x0001087f5bf0();
        func_0x0001087f5edc();
        func_0x000107c279a4();
        goto LAB_1087f4014;
      }
      func_0x000107c279a4();
      ppppppppuVar9 = (undefined ********)pppppppuStack_118;
      ppppppppuVar47 = ppppppppuVar47 + 0x12;
      if (ppppppppuVar47 == unaff_x20) goto LAB_1087f3ec0;
      *(undefined1 *)(ppuVar17 + 4) = 0;
    } while( true );
  case 0x26:
  case 0xac:
  case 0xf3:
code_r0x0001087d6df0:
    FUN_1087d5500();
    pppppppuVar39 = *ppppppppuVar42;
    *ppppppppuVar42 = (undefined *******)0x0;
    ppuVar17[0x25e] = (undefined *)pppppppuVar39;
    *unaff_x20 = (undefined *******)0x0;
    func_0x0001087d856c();
    ppppppppuVar11 = ppppppppuVar42;
    func_0x000107c2889c();
    ppuVar17[0x241] = ppuVar17[0x25e];
    do {
      func_0x0001087d81cc();
    } while (extraout_w10_00 != 0);
    func_0x0001087d83f4(ppuVar17[0x241]);
    if ((extraout_w8_03 >> 1 & 1) == 0) {
      *(undefined1 *)((long)ppuVar17 + 0x1364) = 0;
      ppppppppuVar48 = (undefined ********)ppuVar17[0x241];
      func_0x0001087d82c8();
      if (*ppppppppuVar11 == (undefined *******)0x0) {
        func_0x000107c3a5c0();
      }
      func_0x0001087d858c();
      plVar26 = extraout_x8_00;
      do {
        if (*plVar26 == 0) {
          func_0x0001087d8224();
          plVar26 = extraout_x8_02;
          uVar22 = extraout_w10_02;
          uVar35 = extraout_x11_00;
        }
        else {
          func_0x0001087d842c();
          plVar26 = extraout_x8_01;
          uVar22 = extraout_w10_01;
          uVar35 = extraout_x11;
        }
        if ((uVar35 & 1) != 0) goto code_r0x0001087d7170;
      } while ((uVar22 >> 1 & 1) == 0);
    }
    goto code_r0x0001087d6e84;
  case 0x2a:
  case 0xf7:
    while( true ) {
      func_0x0001087eff80();
LAB_1087eeffc:
      func_0x0001087f0098();
      func_0x0001087eff38();
      ___cxa_end_catch();
      func_0x0001087efea0();
      func_0x0001087eff10();
      func_0x0001087f00b0(unaff_x27);
      if ((bool)in_ZR) break;
      ___stack_chk_fail();
      if ((int)param_3 == 0) {
        do {
          func_0x0001087f00a0();
          func_0x000104bd46a0(ppuVar17);
        } while ((int)param_3 == 0);
        func_0x0001087f0040();
      }
      else {
        func_0x0001087f0028();
      }
      func_0x0001087effc8();
      func_0x0001087eff78();
      func_0x0001087effb8();
      func_0x0001087effc0();
      func_0x0001087eff88();
      func_0x0001087effb0();
      func_0x0001087effa0();
    }
    auVar86._8_8_ = param_3;
    auVar86._0_8_ = ppuVar17;
    return auVar86;
  case 0x2b:
  case 0xca:
  case 0xf8:
    FUN_1088429f0();
    puVar20 = &DAT_10f2fb62f;
    func_0x000107c28260();
    ppppppppuVar32 = &pppppppuStack_128;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppppuVar32);
    *ppuVar17 = (undefined *)unaff_x20;
    auVar96._8_8_ = puVar20;
    auVar96._0_8_ = ppppppppuVar32;
    return auVar96;
  case 0x2c:
  case 0xcb:
  case 0xf9:
    ppppppppuVar25 = (undefined ********)(ulong)*(byte *)(ppuVar17 + 0xc);
  case 0x89:
    if (((ulong)ppppppppuVar25 & 1) != 0) {
      func_0x000107c27f9c();
      func_0x0001087efea0();
      func_0x0001087efef0();
      func_0x0001087efef8();
      func_0x0001087f0018();
      goto code_r0x00010bdbd7ac;
    }
    uVar53 = 0x1087efaa4;
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)ppuVar17;
    unaff_x20 = (undefined ********)(ppuVar17 + 10);
    break;
  case 0x2d:
  case 0xfa:
    while( true ) {
      if (ppppppppuVar34 == (undefined ********)0x0) {
        func_0x0001087f5c9c();
        puVar3 = extraout_x8_59;
        uVar22 = extraout_w10_80;
        uVar35 = extraout_x11_24;
      }
      else {
        func_0x0001087f5e20();
        puVar3 = extraout_x8_58;
        uVar22 = extraout_w10_79;
        uVar35 = extraout_x11_23;
      }
      if ((uVar35 & 1) != 0) {
        func_0x0001087f5d34();
        if ((bool)in_ZR) {
          func_0x0001087f5c8c();
          func_0x0001087f5c24();
          func_0x0001087f5c54();
          func_0x0001087f5f4c();
          unaff_x21[0x12] = (undefined *******)ppppppppuVar11;
        }
        func_0x0001087f5d24();
        *(undefined *********)(extraout_x8_60 + 0x20) = ppppppppuVar42;
        func_0x0001087f5cfc(unaff_x21[0x12]);
        unaff_x21[2] = (undefined *******)0x0;
        auVar95._8_8_ = param_3;
        auVar95._0_8_ = ppppppppuVar11;
        return auVar95;
      }
      if ((uVar22 >> 1 & 1) != 0) break;
      ppppppppuVar34 = (undefined ********)*puVar3;
    }
    func_0x0001087f5e2c();
    func_0x0001087f5dd4();
    func_0x0001087f5d14();
    func_0x0001087f5d60();
    func_0x0001087f5d1c();
    func_0x0001087f5d7c();
    func_0x0001087f5d84();
    func_0x0001087f5d0c();
    func_0x0001087f5d58();
    func_0x0001087f5db0();
    param_3 = ppppppppuVar11;
    goto code_r0x00010bdbd7ac;
  case 0x2e:
  case 0xd7:
  case 0xfb:
    if (iVar23 != 0) goto LAB_1087e45a8;
    do {
      func_0x0001087e88c0();
LAB_1087e45a8:
      func_0x000104bd46a0();
    } while ((int)param_3 == 0);
    func_0x0001087e8be0();
    func_0x0001087e8ba4();
    func_0x0001087e8928();
    func_0x0001087e8bd0();
    func_0x0001087e8b70();
    func_0x0001087e8d04();
    uVar53 = 0x1087e4640;
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)(ppuVar17 + 0xf);
    break;
  case 0x2f:
  case 0xfc:
    goto code_r0x0001087f026c;
  case 0x30:
  case 0x3c:
  case 0xfd:
    goto code_r0x0001087ef2ac;
  case 0x31:
  case 0xfe:
    goto code_r0x0001087f1e80;
  case 0x32:
  case 0x50:
  case 0xff:
    ppppppppuVar30 = (undefined ********)ppuVar17;
    func_0x0001087e8800();
    func_0x0001087e8830();
    uVar53 = 0x1087e41ac;
    func_0x0001087e88c0();
    goto FUN_1087e41ac;
  case 0x33:
    pcStack_138 = (code *)0x1087d6c88;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    FUN_1088f9cb4(ppuVar17 + 3);
    ppppppppuVar32 = (undefined ********)pppppppuStack_140;
    goto SUB_100100fec;
  case 0x36:
    func_0x0001087f00c4(FUN_1087efac8);
    if (extraout_x8_44 != 0) {
      do {
        func_0x0001087efe6c();
      } while (extraout_w10_67 != 0);
    }
    pppppppuVar39 = *ppppppppuVar43;
    ppuVar17[8] = (undefined *)pppppppuVar39;
    if (pppppppuVar39 != (undefined *******)0x0) goto LAB_1087ef264;
    goto LAB_1087ef26c;
  case 0x37:
LAB_1087f1aa8:
    in_ZR = uVar8;
    goto LAB_1087f1ac4;
  case 0x39:
  case 0x8a:
    goto code_r0x0001087f3e60;
  case 0x3a:
    goto code_r0x0001087e3270;
  case 0x3b:
    func_0x000107c31420();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar17 + 0x66);
    param_3 = unaff_x21 + 8;
    FUN_10885edd8(&ppppppuStack_d0,unaff_x20[4]);
    ppppppppuVar11 = (undefined ********)&ppppppuStack_d0;
    FUN_108663a10(ppuVar17 + 0x53);
    func_0x0001087eda60();
    if (((ulong)ppuVar17[0x59] & 1) == 0) goto LAB_1087eba00;
    bVar5 = *(char *)((long)ppuVar17 + 0x2c4) == '\x01';
    in_ZR = bVar5 && *(int *)(ppuVar17 + 0x58) - 4U == 0xfffffffd;
    if (!bVar5 || 0xfffffffc < *(int *)(ppuVar17 + 0x58) - 4U) {
      ppppppuStack_d0 = (undefined ******)0x8;
      goto LAB_1087eba08;
    }
    ppppppppuVar11 = (undefined ********)unaff_x20[4];
    param_3 = (undefined ********)(ppuVar17 + 0x53);
    func_0x000107c29f64(ppuVar17 + 4,ppppppppuVar11,param_3,2);
    if ((((ulong)ppuVar17[0x3e] & 1) != 0) && (in_ZR = *(int *)(ppuVar17 + 0x25) == 1, (bool)in_ZR))
    {
      pppppppuVar39 = unaff_x20[6];
      (*(code *)(*pppppppuVar39)[2])();
      ppuVar17[0x56] = (undefined *)pppppppuVar39;
      *(undefined1 *)(ppuVar17 + 0x57) = 1;
      ppuVar17[0x3b] = (undefined *)pppppppuVar39;
      *(undefined1 *)(ppuVar17 + 0x3c) = 1;
      FUN_10885fef4(unaff_x20[4],ppuVar17 + 0x53);
      FUN_10885ff98(unaff_x20[4],ppuVar17 + 4);
      func_0x000107c31428(ppuVar17 + 0x4b);
      *(undefined1 *)(ppuVar17 + 0x5a) = 0;
      *(undefined1 *)(ppuVar17 + 0x60) = 0;
      FUN_1087ec008(ppuVar17 + 0x5a,*(undefined4 *)((long)unaff_x20 + 0x84),
                    *(undefined4 *)((long)unaff_x20 + 0x94),*(undefined4 *)(unaff_x21 + 0x28));
      ppppppppuVar11 = (undefined ********)unaff_x20[10];
      param_3 = (undefined ********)(ppuVar17 + 4);
      (*(code *)(*ppppppppuVar11)[2])(ppuVar17 + 0x69,ppppppppuVar11,param_3,0x2d0124);
      ppppppppuVar42 = (undefined ********)(ppuVar17 + 0x61);
      ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x72);
      pppppppuStack_118 = (undefined *******)(ppuVar17 + 0x75);
      *ppppppppuVar42 = (undefined *******)ppuVar17[0x69];
      do {
        func_0x0001087ed770();
      } while (extraout_w10_53 != 0);
      func_0x0001087ed954(*ppppppppuVar42);
      if ((extraout_w8_20 >> 1 & 1) == 0) {
        *(undefined1 *)(ppuVar17 + 0x7b) = 0;
        unaff_x20 = (undefined ********)ppuVar17[0x61];
        func_0x0001087ed790();
        if (*ppppppppuVar11 == (undefined *******)0x0) {
          func_0x000107c3a5c0();
        }
        func_0x0001087edc10();
        plVar26 = extraout_x8_38;
        do {
          if (*plVar26 == 0) {
            func_0x0001087ed80c();
            plVar26 = extraout_x8_40;
            uVar22 = extraout_w10_55;
            uVar35 = extraout_x11_15;
          }
          else {
            func_0x0001087ed998();
            plVar26 = extraout_x8_39;
            uVar22 = extraout_w10_54;
            uVar35 = extraout_x11_14;
          }
          if ((uVar35 & 1) != 0) {
            func_0x0001087ed9bc();
            if ((bool)in_ZR) {
              func_0x0001087ed81c();
              func_0x0001087ed780();
              func_0x0001087ed7d4();
              func_0x0001087edaf4();
            }
            func_0x0001087ed82c();
            goto LAB_1087ebc5c;
          }
        } while ((uVar22 >> 1 & 1) == 0);
      }
      FUN_10866b034(ppppppppuVar42);
      FUN_10866e480(ppuVar17 + 0x3f,ppppppppuVar42);
      func_0x0001087edab0();
      func_0x0001087edb58();
      unaff_x20 = (undefined ********)0x48;
      __Znwm();
      ppppppppuVar11 = unaff_x20 + 1;
      *ppppppppuVar11 = (undefined *******)0x0;
      func_0x0001087edbdc();
      func_0x0001087edb68();
      pppppppuStack_128 = (undefined *******)(ppuVar17 + 0x71);
      func_0x0001087edbc8();
      FUN_1087bd5d8(unaff_x20 + 4);
      pppppppuVar39 = (undefined *******)ppuVar17[0x78];
      func_0x0001087ed910();
      ppuVar17[0x6c] = (undefined *)(unaff_x20 + 3);
      ppuVar17[0x6d] = (undefined *)unaff_x20;
      ppppppuVar51 = pppppppuVar39[2];
      pppppppuVar39 = (undefined *******)ppuVar17[0x56];
      do {
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
        if (bVar5) {
          *ppppppppuVar11 = (undefined *******)((long)*ppppppppuVar11 + 1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      ppppppuStack_d0 = (undefined ******)&PTR_SUB_110a72830;
      ppuVar17[0x6e] = (undefined *)0x0;
      ppuVar17[0x6f] = (undefined *)0x0;
      ppppppuStack_b8 = (undefined ******)&ppppppuStack_d0;
      pppppppuStack_c8 = (undefined *******)(unaff_x20 + 3);
      pppppppuStack_c0 = (undefined *******)unaff_x20;
      func_0x0001087edb9c((*ppppppuVar51)[6],ppppppuVar51,pppppppuVar39,ppuVar17 + 4,
                          &ppppppuStack_d0);
      pppppppuVar39 = pppppppuStack_128;
      func_0x00010865f8f8(&ppppppuStack_d0);
      FUN_1087ec640(ppuVar17 + 0x6e);
      pppppppuVar41 = unaff_x20[4];
      ppuVar17[0x70] = (undefined *)pppppppuVar41;
      if (pppppppuVar41 == (undefined *******)0x0) {
        *ppppppppuVar30 = (undefined *******)0x0;
      }
      else {
        do {
          func_0x0001087ed770();
        } while (extraout_w10_56 != 0);
        pppppppuVar41 = (undefined *******)ppuVar17[0x70];
        *ppppppppuVar30 = pppppppuVar41;
        if (pppppppuVar41 != (undefined *******)0x0) {
          do {
            func_0x0001087ed770();
          } while (extraout_w10_57 != 0);
        }
      }
      func_0x0001087edab8();
      func_0x000107c314e0(ppuVar17 + 0x73);
      FUN_1087ec0cc(pppppppuVar39,ppppppppuVar30,ppuVar17 + 0x73);
      func_0x0001087edaa0();
      func_0x0001087edb50();
      pppppppuVar39 = (undefined *******)*pppppppuVar39;
      ppuVar17[0x76] = (undefined *)pppppppuVar39;
      if (pppppppuVar39 != (undefined *******)0x0) {
        do {
          func_0x0001087ed770();
        } while (extraout_w10_58 != 0);
      }
      pppppppuVar39 = *(undefined ********)ppuVar17[0x7a];
      ppuVar17[0x77] = (undefined *)pppppppuVar39;
      if (pppppppuVar39 != (undefined *******)0x0) {
        do {
          func_0x0001087ed770();
        } while (extraout_w10_59 != 0);
      }
      param_3 = (undefined ********)&UNK_10f4bbbea;
      uVar53 = 0x1087ebcf8;
      goto SUB_10002b838;
    }
    ppppppuStack_d0 = (undefined ******)0x700000008;
    func_0x0001087ed7e8();
    func_0x0001087edb1c();
    func_0x0001087eda58();
    goto LAB_1087ebc4c;
  case 0x3e:
    if (iVar23 == 0) {
      do {
        __Unwind_Resume(ppppppppuVar42);
        func_0x000104bd46a0();
      } while ((int)param_3 == 0);
      FUN_1088fcbd8();
      func_0x0001087f3668();
      func_0x0001087f363c();
      func_0x0001087f3620();
      func_0x0001087f35f0();
    }
    ___cxa_begin_catch(ppppppppuVar42);
    ppuVar17 = ppuVar17 + 2;
    func_0x0001053360b0(ppuVar17);
    ___cxa_end_catch();
    func_0x0001087f36b0();
    func_0x0001087f37e0();
LAB_1087f2124:
    func_0x0001087f3724();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x00010563ab98();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087f2798);
      (*pcVar2)();
    }
    auVar93._8_8_ = param_3;
    auVar93._0_8_ = ppuVar17;
    return auVar93;
  case 0x3f:
    goto code_r0x00010bdbd7ac;
  case 0x40:
  case 0xbc:
  case 0xea:
    func_0x0001087f3828();
    ppppppppuVar11 = (undefined ********)0x4f8;
    __Znwm();
    pcVar2 = FUN_1087f2e08;
    ppuVar33 = (undefined **)0x1087f3000;
    unaff_x20 = ppppppppuVar25;
code_r0x0001087f1e80:
    *ppppppppuVar11 = (undefined *******)pcVar2;
    ppppppppuVar11[1] = (undefined *******)(ppuVar33 + 0xa5);
    ppppppppuVar11[0x9d] = (undefined *******)ppppppppuVar43;
code_r0x0001087f1e8c:
    ppppppppuVar11[0x9c] = (undefined *******)ppppppppuVar42;
    func_0x0001087e472c(ppppppppuVar11 + 2);
code_r0x0001087f1e9c:
    FUN_1087e46b4(unaff_x20);
    ppppppppuVar25 = (undefined ********)param_2[0x153];
    ppuVar33 = &PTR_PTR_11326cb58;
code_r0x0001087f1eb0:
    if (ppppppppuVar25 != (undefined ********)0x0) {
      ppuVar33 = (undefined **)ppppppppuVar25;
    }
    func_0x000107c29ee0(ppppppppuVar11 + 0x8d,ppuVar33);
    param_3 = param_2 + 0x14d;
    func_0x000107c29f64(ppppppppuVar11 + 4,ppuVar17[0x1bf],param_3,0);
    unaff_x20 = ppppppppuVar11 + 0x47;
    if (((ulong)ppppppppuVar11[0x3e] & 1) == 0) {
      func_0x0001087f3580();
      func_0x0001087f365c();
      uVar53 = 0x1087f2014;
      ppuVar17 = (undefined **)ppppppppuVar11;
    }
    else {
      iVar23 = (int)ppppppppuVar11 + 0x38;
      func_0x000107c29e74();
      *(int *)(param_2 + 0x169) = iVar23;
      *(undefined1 *)((long)param_2 + 0xb4c) = 1;
      if (ppppppppuVar11[0x2f] != (undefined *******)0xfffffffffffffffe) {
        *(undefined1 *)(ppppppppuVar11 + 0x57) = 0;
        *(undefined1 *)(ppppppppuVar11 + 0x5d) = 0;
        FUN_1087ec008(ppppppppuVar11 + 0x57,*(undefined4 *)(ppuVar17 + 0x1cb),
                      *(undefined4 *)((long)ppuVar17 + 0xe64),*(undefined4 *)(param_2 + 0x16d));
        unaff_x21 = ppppppppuVar11 + 0x5e;
        param_3 = param_2 + 0x14d;
        (*(code *)(*(undefined *******)ppuVar17[0x1bb])[0xb])
                  (unaff_x21,ppuVar17[0x1bb],param_3,ppppppppuVar43,param_2 + 0x150,
                   ppppppppuVar11 + 0x57);
        ppppppppuVar42 = ppppppppuVar11 + 0x72;
        ppppppppuVar11[0x3f] = *unaff_x21;
        pppppppuVar39 = *unaff_x21 + 1;
        do {
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar39,0x10);
          if (bVar5) {
            *pppppppuVar39 = (undefined ******)((long)*pppppppuVar39 + 4);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (((uint)ppppppppuVar11[0x3f][2] >> 1 & 1) == 0) {
code_r0x0001087f21c0:
          *(undefined1 *)(ppppppppuVar11 + 0x9e) = 0;
          ppppppppuVar47 = (undefined ********)ppppppppuVar11[0x3f];
          ppuVar17 = &PTR___tlv_bootstrap_11340e278;
          (*(code *)PTR___tlv_bootstrap_11340e278)();
          ppppppppuVar48 = (undefined ********)*ppuVar17;
          if (ppppppppuVar48 == (undefined ********)0x0) {
            func_0x000107c3a5c0();
            ppppppppuVar48 = (undefined ********)*ppuVar17;
          }
          ppppppppuVar25 = ppppppppuVar47 + 2;
          ppuVar33 = (undefined **)0x1;
          do {
            ppppppppuVar34 = (undefined ********)*ppppppppuVar25;
            if (ppppppppuVar34 == (undefined ********)0x0) {
              cVar7 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
              if (bVar5) {
                *ppppppppuVar25 = (undefined *******)ppuVar33;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_1087f2388;
            }
            else {
              uVar35 = 0;
              ClearExclusiveLocal();
code_r0x0001087f2200:
              if ((uVar35 & 1) != 0) {
LAB_1087f2388:
                ppppppppuVar32 = (undefined ********)ppppppppuVar47[0x12];
                bVar21 = *(byte *)((long)ppppppppuVar32 + 1);
                uVar35 = (ulong)bVar21;
                in_ZR = 0;
                if (bVar21 == *(byte *)ppppppppuVar32) {
                  uVar22 = (uint)bVar21 << 1;
                  in_ZR = bVar21 == 0x40;
                  if (0x7f < uVar22) {
                    uVar22 = 0x80;
                  }
                  ppuVar17 = (undefined **)(ulong)(uVar22 * 0x18 + 0x10);
                  _malloc();
                  uVar35 = 0;
                  *(char *)ppuVar17 = (char)uVar22;
                  *(undefined1 *)((long)ppuVar17 + 1) = 0;
                  ppuVar17[1] = (undefined *)0x0;
                  ppppppppuVar32[1] = (undefined *******)ppuVar17;
                  ppppppppuVar47[0x12] = (undefined *******)ppuVar17;
                  ppppppppuVar32 = (undefined ********)ppuVar17;
                }
                ppppppppuVar32[uVar35 * 3 + 2] = (undefined *******)0x0;
                ppppppppuVar32[uVar35 * 3 + 3] = (undefined *******)ppppppppuVar11;
                ppppppppuVar32[uVar35 * 3 + 4] = (undefined *******)ppppppppuVar48;
                *(char *)((long)ppppppppuVar47[0x12] + 1) =
                     *(char *)((long)ppppppppuVar47[0x12] + 1) + '\x01';
                ppppppppuVar47[2] = (undefined *******)0x0;
                goto LAB_1087f2124;
              }
            }
          } while (((uint)ppppppppuVar34 >> 1 & 1) == 0);
        }
        ppuVar17 = (undefined **)ppppppppuVar11;
        param_3 = (undefined ********)(ppuVar17 + 0x3f);
        FUN_1087c6770(param_3);
        FUN_10877d4b8(unaff_x20,param_3);
        func_0x0001087f3680();
        uVar53 = 0x1087f223c;
        puVar3 = &uStack_130;
        ppppppppuVar9 = unaff_x21;
        break;
      }
      param_2[0x15b] = (undefined *******)0xfffffffffffffffe;
      *(undefined1 *)(param_2 + 0x15c) = 1;
      func_0x0001087f3580();
      func_0x0001087f365c();
      uVar53 = 0x1087f1f20;
      ppuVar17 = (undefined **)ppppppppuVar11;
    }
    goto SUB_10002b838;
  case 0x41:
    goto code_r0x0001087f02b0;
  case 0x42:
  case 0x69:
  case 0xdb:
    goto code_r0x0001087ea600;
  case 0x43:
  case 0x86:
    auVar84._8_8_ = param_3;
    auVar84._0_8_ = ppuVar17;
    return auVar84;
  case 0x49:
  case 0x78:
  case 0x9f:
    ppuVar17[0x4f] = (undefined *)in_register_00005008;
    ppuVar17[0x4e] = (undefined *)param_1;
    ppuVar17[0x50] = (undefined *)pppppppuRam000000011340e288;
    uRam000000011340e280 = 0;
    pppppppuRam000000011340e288 = (undefined *******)0x0;
    PTR___tlv_bootstrap_11340e278 = (undefined *)0x0;
    func_0x0001087adea8(ppuVar17 + 2);
    FUN_1087ad990(ppppppppuVar43,ppuVar17 + 2);
    unaff_x20[4] = (undefined *******)0x0;
    unaff_x20[1] = (undefined *******)0x0;
    *unaff_x20 = (undefined *******)0x0;
    unaff_x20[3] = (undefined *******)0x0;
    unaff_x20[2] = (undefined *******)0x0;
    ppuVar46 = (undefined **)ppuVar17[0x4e];
    ppppppppuVar37 = (undefined ********)ppuVar17[0x1c1];
    pppppppuStack_128 = (undefined *******)ppuVar17[0x1c1];
    uStack_130 = (undefined **)ppuVar17[0x1c0];
    ppppppppuVar43 = (undefined ********)0x58;
    __Znwm();
    ppppppppuVar47 = (undefined ********)(ppuVar17 + 0x50);
    if (ppppppppuVar37 != (undefined ********)0x0) {
      do {
        func_0x000107c33634();
      } while (extraout_w10_18 != 0);
    }
    ppppppppuVar48 = (undefined ********)(ppuVar17 + 0x4b);
    bVar21 = *(byte *)(ppuVar17 + 0x1c9);
    *(undefined4 *)(ppppppppuVar43 + 1) = 0;
    *ppppppppuVar43 = (undefined *******)&PTR_FUN_110a722b0;
    ppppppppuVar43[2] = (undefined *******)0x0;
    ppppppppuVar43[3] = (undefined *******)0x0;
    *(undefined1 *)(ppppppppuVar43 + 4) = 0;
    ppppppppuVar9 = unaff_x20;
  case 0xe8:
    ppppppppuVar43[6] = pppppppuStack_128;
    ppppppppuVar43[5] = (undefined *******)uStack_130;
    *(undefined4 *)(ppppppppuVar43 + 7) = 0;
    pppppppuVar39 = (undefined *******)ppuVar17[0x1c8];
    pppppppuVar41 = (undefined *******)ppuVar17[0x1c7];
    ppppppppuVar43[9] = (undefined *******)ppuVar17[0x1c8];
    ppppppppuVar43[8] = pppppppuVar41;
    if (pppppppuVar39 != (undefined *******)0x0) {
      do {
        func_0x000107c33654();
        bVar21 = extraout_w8;
      } while (extraout_w11 != 0);
    }
    ppppppppuVar42 = (undefined ********)(ppuVar17 + 0x49);
    *(byte *)(ppppppppuVar43 + 10) = bVar21;
    ppppppppuVar11 = (undefined ********)&stack0xfffffffffffffef0;
    func_0x000107c28868();
    ppppppppuVar25 = (undefined ********)ppppppppuVar48[4];
    if (ppppppppuVar25 < *ppppppppuVar47) {
      in_ZR = (undefined ********)ppuVar46 == ppppppppuVar25;
code_r0x0001087e3678:
      if ((bool)in_ZR) {
        *ppppppppuVar25 = (undefined *******)ppppppppuVar43;
        ppppppppuVar48[4] = (undefined *******)(ppppppppuVar25 + 1);
        in_ZR = 1;
      }
      else {
        ppppppppuVar11 = ppppppppuVar25 + -1;
        ppppppppuVar32 = ppppppppuVar25;
        for (ppppppppuVar30 = ppppppppuVar11; ppppppppuVar30 < ppppppppuVar25;
            ppppppppuVar30 = ppppppppuVar30 + 1) {
          pppppppuVar39 = *ppppppppuVar30;
          *ppppppppuVar30 = (undefined *******)0x0;
          *ppppppppuVar32 = pppppppuVar39;
          ppppppppuVar32 = ppppppppuVar32 + 1;
        }
        ppppppppuVar48[4] = (undefined *******)ppppppppuVar32;
        ppppppppuVar32 = ppppppppuVar11;
        while (in_ZR = ppppppppuVar11 == (undefined ********)ppuVar46, !(bool)in_ZR) {
          ppppppppuVar11 = ppppppppuVar11 + -1;
          pppppppuVar41 = *ppppppppuVar11;
          *ppppppppuVar11 = (undefined *******)0x0;
          pppppppuVar39 = *ppppppppuVar32;
          *ppppppppuVar32 = pppppppuVar41;
          if (pppppppuVar39 != (undefined *******)0x0) {
            func_0x0001087e87e8();
          }
          ppppppppuVar32 = ppppppppuVar32 + -1;
        }
        ppppppppuVar11 = (undefined ********)*ppuVar46;
        *ppuVar46 = (undefined *)ppppppppuVar43;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          func_0x0001087e87e8();
        }
      }
      ppuVar17[0x59] = (undefined *)*(undefined ********)ppuVar17[0x4e];
      func_0x0001087e86e0();
      uStack_130 = ppuVar17 + 0x53;
      ppppppuVar51 = (undefined ******)0x1;
      unaff_x20 = (undefined ********)0x18;
      ppppppppuVar40 = ppppppppuVar42;
      while( true ) {
        ppppppppuVar42 = (undefined ********)ppuVar17[0x57];
        param_3 = (undefined ********)pppppppuStack_118;
        FUN_1087e3db8(ppppppppuVar40,ppppppppuVar42,pppppppuStack_118,ppuVar17 + 4,ppuVar17[0x58]);
        ppuVar17[0x3a] = (undefined *)*ppppppppuVar40;
        do {
          func_0x0001087e8700();
        } while (extraout_w10_19 != 0);
        func_0x0001087e8868(ppuVar17[0x3a]);
        if ((extraout_w8_09 >> 1 & 1) == 0) {
          *(undefined1 *)(ppppppppuVar48 + 0xf) = 0;
          pppppppuVar39 = (undefined *******)ppuVar17[0x3a];
          if (*ppppppppuVar11 == (undefined *******)0x0) {
            func_0x000107c3a5c0();
          }
          pppppppuVar41 = pppppppuVar39 + 2;
          do {
            if (*pppppppuVar41 == (undefined ******)0x0) {
              bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar41,0x10);
              if (bVar5) {
                *pppppppuVar41 = ppppppuVar51;
                ExclusiveMonitorsStatus();
              }
              func_0x0001087e9000();
              pppppppuVar41 = extraout_x8_22;
              uVar22 = extraout_w9_03;
              uVar35 = extraout_x10_02;
            }
            else {
              func_0x0001087e900c();
              pppppppuVar41 = extraout_x8_21;
              uVar22 = extraout_w9_02;
              uVar35 = extraout_x10_01;
            }
            if ((uVar35 & 1) != 0) {
              func_0x0001087e87a8();
              if ((bool)in_ZR) {
                func_0x0001087e8788();
                func_0x0001087e86f0();
                func_0x0001087e86c4();
                pppppppuVar39[0x12] = (undefined ******)ppppppppuVar42;
              }
              func_0x0001087e874c();
              goto LAB_1087e3b4c;
            }
          } while ((uVar22 >> 1 & 1) == 0);
        }
        func_0x0001087e8868(ppuVar17[0x3a]);
        pppppppuVar39 = (undefined *******)ppuVar17[0x3a];
        if ((extraout_w8_10 >> 5 & 1) != 0) {
          __ZNSt13exception_ptrC1ERKS_(ppuVar17 + 0x56,pppppppuVar39 + 3);
          __ZSt17rethrow_exceptionSt13exception_ptr(ppuVar17 + 0x56);
          goto LAB_1087e3c14;
        }
        pppppppuVar41 = (undefined *******)ppuVar17[0x52];
        if (pppppppuVar41 < ppuVar17[0x53]) {
          FUN_1087e49f0(pppppppuVar41,pppppppuVar39 + 0x13);
          pppppppuVar41 = pppppppuVar41 + 3;
        }
        else {
          lVar36 = (long)pppppppuVar41 - (long)*ppppppppuVar9;
          lVar38 = 0;
          if (unaff_x20 != (undefined ********)0x0) {
            lVar38 = lVar36 / (long)unaff_x20;
          }
          bVar5 = 0xaaaaaaaaaaaaaa9 < lVar38 + 1U;
          if (0xaaaaaaaaaaaaaaa < lVar38 + 1U) {
            FUN_1087e4c78();
            goto LAB_1087e3c14;
          }
          lVar38 = 0;
          if (unaff_x20 != (undefined ********)0x0) {
            lVar38 = ((long)ppuVar17[0x53] - (long)*ppppppppuVar9) / (long)unaff_x20;
          }
          func_0x0001087e8d54(lVar38);
          uVar35 = extraout_x9_01;
          if (bVar5) {
            uVar35 = extraout_x11_13;
          }
          ppuVar17[0x48] = (undefined *)uStack_130;
          if (uVar35 == 0) {
            pppppppuVar29 = (undefined *******)0x0;
          }
          else {
            if (0xaaaaaaaaaaaaaaa < uVar35) goto LAB_1087e3c10;
            pppppppuVar29 = (undefined *******)(uVar35 * 0x18);
            __Znwm();
          }
          ppuVar17[0x44] = (undefined *)pppppppuVar29;
          pppppppuVar31 = (undefined *******)((long)pppppppuVar29 + lVar36);
          ppuVar17[0x46] = (undefined *)pppppppuVar31;
          ppuVar17[0x45] = (undefined *)pppppppuVar31;
          pppppppuVar29 = (undefined *******)((long)pppppppuVar29 + uVar35 * (long)unaff_x20);
          ppuVar17[0x47] = (undefined *)pppppppuVar29;
          FUN_1087e49f0(pppppppuVar31,pppppppuVar39 + 0x13);
          pppppppuVar49 = (undefined *******)ppuVar17[0x52];
          pppppppuVar39 = (undefined *******)ppuVar17[0x51];
          lVar38 = (long)pppppppuVar49 - (long)pppppppuVar39;
          pppppppuVar41 = pppppppuVar39;
          while (pppppppuVar41 != pppppppuVar49) {
            func_0x0001087e8a5c();
            pppppppuVar41 = extraout_x9_02;
          }
          for (; pppppppuVar39 != pppppppuVar49; pppppppuVar39 = pppppppuVar39 + 3) {
            FUN_1087e4c84();
          }
          pppppppuVar41 = pppppppuVar31 + 3;
          pppppppuVar39 = (undefined *******)ppuVar17[0x51];
          ppuVar17[0x51] = (undefined *)((long)pppppppuVar31 + (lVar38 / -0x18) * (long)unaff_x20);
          ppuVar17[0x45] = (undefined *)pppppppuVar39;
          ppuVar17[0x52] = (undefined *)pppppppuVar41;
          ppuVar17[0x46] = (undefined *)pppppppuVar39;
          pppppppuVar31 = (undefined *******)ppuVar17[0x53];
          ppuVar17[0x53] = (undefined *)pppppppuVar29;
          ppuVar17[0x47] = (undefined *)pppppppuVar31;
          ppuVar17[0x44] = (undefined *)pppppppuVar39;
          func_0x0001087e8d3c();
        }
        ppuVar17[0x52] = (undefined *)pppppppuVar41;
        func_0x0001087e8d34();
        func_0x0001087e8af0();
        ppppppppuVar47 = (undefined ********)ppuVar17[0x52];
        if (ppppppppuVar47[-3] == ppppppppuVar47[-2]) {
          iVar23 = 7;
        }
        else {
          iVar23 = *(int *)((long)ppppppppuVar47[-2] + -0x6c);
        }
        *(int *)(ppuVar17 + 0x44) = iVar23;
        (*(code *)(**(undefined *******)((long)ppuVar17[0x57] + 8))[1])
                  (ppuVar17 + 0x3a,*(undefined *******)((long)ppuVar17[0x57] + 8),iVar23);
        pppppppuVar39 = (undefined *******)ppuVar17[0x59];
        func_0x0001087e8ee4();
        func_0x000107c299a0(ppuVar17 + 0x3a);
        in_ZR = iVar23 == 1;
        *(undefined1 *)(pppppppuVar39 + 4) = in_ZR;
        func_0x0001087b153c(pppppppuVar39 + 2,ppuVar17 + 0x54);
        ppppppppuVar10 = (undefined ********)ppuVar17[0x54];
        if (ppppppppuVar10 == (undefined ********)0x0) break;
        func_0x0001087e885c(ppppppppuVar10,*(undefined4 *)(ppuVar17 + 6));
        (*extraout_x8_23)();
        ppppppppuVar43 = ppppppppuVar11;
code_r0x0001087e3aac:
        ppppppppuVar11 = ppppppppuVar43;
        if ((int)ppppppppuVar10 == 0) break;
        func_0x0001087e885c(*(undefined *******)((long)ppuVar17[0x57] + 0x58));
        (*extraout_x8_24)();
        in_ZR = *(int *)((long)ppuVar17 + 0x16c) == 3;
        if ((bool)in_ZR) {
          func_0x0001087e8a88();
        }
        else {
          *(undefined4 *)((long)ppuVar17 + 0x16c) = 3;
        }
        ppppppuVar15 = *(undefined *******)((long)ppuVar17[0x57] + 0x28);
        func_0x0001087e8efc();
        ppuVar17[0x3d] = ppuVar17[10];
        func_0x0001087e8820(ppuVar17[0x57]);
        (*extraout_x8_25)();
        func_0x0001087e89cc();
        *(int *)((long)ppuVar17 + 0x214) = (int)ppppppuVar51;
        *(undefined4 *)(ppuVar17 + 0x43) = extraout_w9_04;
        FUN_10886024c(ppppppuVar15,ppuVar17 + 0x3a);
        func_0x0001087e895c();
      }
      func_0x0001087e2ca8(&stack0xfffffffffffffef0,ppppppppuVar47 + -3);
      func_0x000107c279a4(&stack0xfffffffffffffef0);
      uStack_100 = (undefined ********)*uStack_130;
      ppppppppuVar9[1] = (undefined *******)0x0;
      ppppppppuVar9[2] = (undefined *******)0x0;
      *ppppppppuVar9 = (undefined *******)0x0;
      FUN_1087e2904(&pppppppuStack_f8,ppuVar17 + 4);
      func_0x0001087e885c(*(undefined *******)((long)ppuVar17[0x57] + 0x60));
      param_3 = (undefined ********)&stack0xfffffffffffffef0;
      (*extraout_x8_26)();
      func_0x0001087e8ea0();
      func_0x0001087e5c34(&stack0xfffffffffffffef0);
      func_0x0001087e8bac();
      func_0x0001087e5bec(ppppppppuVar9);
      func_0x0001087e8800();
      ppppppppuVar42 = (undefined ********)pppppppuStack_118;
      FUN_1087e2704(pppppppuStack_118);
      func_0x0001087e8930();
      func_0x0001087e8830();
LAB_1087e3b4c:
      func_0x000107c33630(pppppppuStack_70);
      if ((bool)in_ZR) {
code_r0x000100567f18:
        auVar65._8_8_ = param_3;
        auVar65._0_8_ = ppppppppuVar42;
        return auVar65;
      }
      ___stack_chk_fail();
LAB_1087e3c10:
      func_0x000104bd35f4();
LAB_1087e3c14:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087e3c18);
      (*pcVar2)();
    }
    param_3 = (undefined ********)(((long)ppppppppuVar25 - (long)*pppppppuStack_118 >> 3) + 1);
    uVar53 = 0x1087e36b8;
    ppppppppuVar30 = (undefined ********)pppppppuStack_118;
FUN_1087e41ac:
    if ((ulong)param_3 >> 0x3d != 0) {
      pppppppuStack_140 = (undefined *******)ppppppppuVar32;
      pcStack_138 = (code *)uVar53;
      func_0x0001087e87c8();
      pppppppuStack_158 = (undefined *******)FUN_1087e41f8;
      pppppppuStack_170 = (undefined *******)ppppppppuVar37;
      pppppppuStack_168 = (undefined *******)ppuVar17;
      pppppppuStack_160 = (undefined *******)&stack0xfffffffffffffeb0;
      FUN_1087e4218();
      auVar77._8_8_ = param_3;
      auVar77._0_8_ = ppppppppuVar30;
      return auVar77;
    }
    ppppppppuVar32 = (undefined ********)((long)ppppppppuVar30[2] - (long)*ppppppppuVar30 >> 2);
    if (ppppppppuVar32 <= param_3) {
      ppppppppuVar32 = param_3;
    }
    if (0x7ffffffffffffff7 < (ulong)((long)ppppppppuVar30[2] - (long)*ppppppppuVar30)) {
      ppppppppuVar32 = (undefined ********)0x1fffffffffffffff;
    }
    auVar72._8_8_ = param_3;
    auVar72._0_8_ = ppppppppuVar32;
    return auVar72;
  case 0x4a:
    goto code_r0x0001087e8a58;
  case 0x4b:
    goto code_r0x0001087eaa0c;
  case 0x4c:
    if (((ulong)ppuVar17[0x18] & 1) == 0) {
      func_0x000107c28870(ppuVar17 + 0x11);
      func_0x0001087e8be0();
      func_0x0001087e8ba4();
      func_0x0001087e8928();
      func_0x0001087e8bd0();
      func_0x0001087e8b70();
    }
    else {
      func_0x000107c28834(ppuVar17 + 0xf);
      func_0x0001087e88c8();
      func_0x0001087e88e0();
      func_0x0001087e8928();
    }
    func_0x0001087e88e0();
    func_0x0001087e88c8();
    func_0x0001087e896c();
    func_0x0001087e8e94();
    ppuVar17 = (undefined **)&pppppppuStack_128;
    uVar53 = 0x1087e7250;
    goto SUB_1087e49c4;
  case 0x4d:
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)ppuVar17;
    break;
  case 0x4e:
    goto code_r0x0001087ea658;
  case 0x4f:
  case 0x5d:
  case 0xdd:
    ppppppppuVar11 = (undefined ********)(ppuVar17 + 2);
    func_0x0001087e2ebc();
    *ppuVar17 = (undefined *)ppppppppuVar11;
    ppuVar17[1] = (undefined *)ppppppppuVar11;
    ppuVar17[2] = (undefined *)(ppppppppuVar11 + (long)param_3 * 4);
code_r0x0001087e3270:
LAB_1087e884c:
    auVar74._8_8_ = param_3;
    auVar74._0_8_ = ppppppppuVar11;
    return auVar74;
  case 0x51:
code_r0x0001087f0210:
    func_0x000107c29f64(ppuVar17 + 4);
    ppppppppuVar25 = (undefined ********)(ulong)*(byte *)(ppuVar17 + 0x3e);
  case 0xb9:
  case 0xe4:
    if (((ulong)ppppppppuVar25 & 1) == 0) {
      pppppppuStack_f8 = (undefined *******)CONCAT35(pppppppuStack_f8._5_3_,0x100000007);
      param_3 = &pppppppuStack_f8;
      FUN_1087f0524();
      func_0x0001087f11ec(0x700000001);
      func_0x0001087f1318();
      func_0x0001087f1240();
LAB_1087f040c:
      func_0x0001087f1214();
SUB_1087f1238:
      goto code_r0x00010bdbd7ac;
    }
    ppuVar17[0x43] = ppuVar17[0x1c9];
    pppppppuVar39 = unaff_x20[0xc];
    (*(code *)(*pppppppuVar39)[2])();
    unaff_x21 = (undefined ********)(ppuVar17 + 0x40);
    ppuVar17[0x44] = (undefined *)pppppppuVar39;
    ppuVar17[0x45] = ppuVar17[0x1ca];
    param_3 = (undefined ********)(ppuVar17 + 4);
code_r0x0001087f0258:
    FUN_1087f068c(unaff_x21);
    ppppppppuVar25 = (undefined ********)*unaff_x21;
    ppppppppuVar11 = unaff_x20;
code_r0x0001087f0268:
    ppuVar17[0x3f] = (undefined *)ppppppppuVar25;
code_r0x0001087f026c:
    ppppppppuVar25 = ppppppppuVar25 + 1;
    do {
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
      if (bVar5) {
        *ppppppppuVar25 = (undefined *******)((long)*ppppppppuVar25 + 4);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    ppppppppuVar25 = *(undefined *********)((long)ppuVar17[0x3f] + 0x10);
code_r0x0001087f028c:
    if (((uint)ppppppppuVar25 >> 1 & 1) == 0) {
code_r0x0001087f0290:
      *(undefined1 *)(ppuVar17 + 0x46) = 0;
      unaff_x20 = (undefined ********)ppuVar17[0x3f];
      func_0x0001087f1250();
code_r0x0001087f029c:
      ppppppppuVar42 = (undefined ********)*ppppppppuVar11;
      if (ppppppppuVar42 == (undefined ********)0x0) {
        func_0x000107c3a5c0();
code_r0x0001087f02a8:
        ppppppppuVar42 = (undefined ********)*ppppppppuVar11;
      }
LAB_1087f02ac:
      ppppppppuVar25 = unaff_x20 + 2;
code_r0x0001087f02b0:
      ppuVar33 = (undefined **)0x1;
LAB_1087f02b4:
      do {
        pppppppuVar39 = *ppppppppuVar25;
        if (pppppppuVar39 == (undefined *******)0x0) {
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar25,0x10);
          if (bVar5) {
            *ppppppppuVar25 = (undefined *******)ppuVar33;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 != '\0') goto LAB_1087f02dc;
          ppppppppuVar32 = (undefined ********)unaff_x20[0x12];
          bVar21 = *(byte *)((long)ppppppppuVar32 + 1);
          uVar35 = (ulong)bVar21;
          uVar8 = 0;
          if (bVar21 == *(byte *)ppppppppuVar32) {
            uVar8 = bVar21 == 0x40;
            func_0x0001087f1260();
            func_0x0001087f1320();
            ppppppppuVar32[1] = (undefined *******)ppppppppuVar11;
            unaff_x20[0x12] = (undefined *******)ppppppppuVar11;
            uVar35 = extraout_x8_51;
            ppppppppuVar32 = ppppppppuVar11;
          }
          uVar35 = uVar35 & 0xffffffff;
          ppppppppuVar32[uVar35 * 3 + 2] = (undefined *******)0x0;
          ppppppppuVar32[uVar35 * 3 + 3] = (undefined *******)ppuVar17;
          ppppppppuVar32[uVar35 * 3 + 4] = (undefined *******)ppppppppuVar42;
          func_0x0001087f1298();
          func_0x0001087f121c(unaff_x27);
          if ((bool)uVar8) {
            auVar90._8_8_ = param_3;
            auVar90._0_8_ = ppppppppuVar11;
            return auVar90;
          }
          ___stack_chk_fail();
          if ((int)param_3 != 0) goto LAB_1087f049c;
          do {
            func_0x0001087f12f4();
LAB_1087f049c:
            func_0x000104bd46a0(ppppppppuVar11);
          } while ((int)param_3 == 0);
          func_0x000104be1274(&pppppppuStack_128);
          func_0x00010867b9fc(&stack0xfffffffffffffef0);
          func_0x0001087f12b4();
          func_0x0001087f1240();
          func_0x0001087f1270();
          func_0x0001087f1280();
          ___cxa_end_catch();
          goto LAB_1087f040c;
        }
        ClearExclusiveLocal();
LAB_1087f02dc:
      } while (((uint)pppppppuVar39 >> 1 & 1) == 0);
    }
    func_0x000107c28834(ppuVar17 + 0x3f);
    unaff_x20 = (undefined ********)ppuVar17[0x45];
    ppppppppuVar42 = (undefined ********)ppuVar17[0x44];
    func_0x0001087f1290();
    uVar53 = 0x1087f0308;
    puVar3 = &uStack_130;
    ppppppppuVar9 = unaff_x21;
    break;
  case 0x52:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__malloc_11034c5e8)();
    auVar99._8_8_ = param_3;
    auVar99._0_8_ = ppuVar17;
    return auVar99;
  case 0x53:
    goto code_r0x0001087ebe60;
  case 0x54:
    if (ppppppppuVar25 != (undefined ********)0x0) {
      do {
        func_0x0001087f5c14();
      } while (extraout_w10_74 != 0);
    }
    goto LAB_1087f3a70;
  case 0x55:
code_r0x0001087eb688:
    param_3 = (undefined ********)&stack0xffffffffffffffb0;
    FUN_1086a10f8(param_3);
    FUN_1086ad844(ppuVar17,param_3);
    uVar8 = 1;
    goto LAB_1087eb6b4;
  case 0x57:
    goto code_r0x0001087f1eb0;
  case 0x58:
    *ppuVar17 = (undefined *)0x0;
    goto LAB_1087e8210;
  case 0x59:
  case 0x8e:
  case 0x8f:
  case 0xf1:
  case 0xf2:
    ppppppppuVar42 = (undefined ********)ppuVar17;
    if (iVar23 != 0) {
      func_0x0001087e5bec(&stack0xfffffffffffffee0);
      goto LAB_1087e8184;
    }
    goto LAB_1087e8210;
  case 0x5a:
  case 0x90:
  case 0xc0:
    if ((bVar21 & 0xfe) == 4) {
      uVar53 = 0;
LAB_1087ea4ec:
      FUN_108864abc(&stack0x00000298,*ppppppppuVar42,unaff_x20 + 6);
      FUN_1087eb63c(&stack0x00000740,&stack0x00000298);
      func_0x000107c28fcc(&stack0x00000298);
      if (in_stack_00000810 == '\x01') {
        FUN_1088605f8(*ppppppppuVar42,unaff_x20 + 6,uVar53);
      }
      else {
        func_0x0001087eb80c(*ppppppppuVar42);
        unaff_x21 = (undefined ********)0x7;
      }
      func_0x000107c28f88(&stack0x00000740);
    }
    else {
      if ((*(int *)(unaff_x20 + 0x1a) == 10) &&
         (7 < bVar21 || (1 << (ulong)(bVar21 & 0x1f) & 0xc1U) == 0)) {
        uVar53 = 3;
        goto LAB_1087ea4ec;
      }
      FUN_108864c04(*ppppppppuVar42,unaff_x20 + 6);
      func_0x0001087eb80c(*ppppppppuVar42);
      func_0x0001087eb824(*ppppppppuVar42);
      func_0x000107c29f64();
      if (in_stack_00000468 == 1) {
        (*(code *)**(undefined *******)ppuVar17[7])
                  (ppuVar17[7],unaff_x20 + 0xe,&stack0x00000298,1,&stack0x00000740,&stack0x000008f0)
        ;
        func_0x000104be1274(&stack0x000008f0);
        func_0x0001087eb804();
        if (*(int *)(unaff_x20 + 0x1a) == 0x19) {
          (*(code *)(*(undefined *******)ppuVar17[0x13])[0x1a])
                    (ppuVar17[0x13],unaff_x20 + 0xe,&stack0x000006d0);
          FUN_108868114(*ppppppppuVar42,unaff_x20 + 0xe);
        }
        else {
          (*(code *)(*(undefined *******)ppuVar17[0x13])[8])
                    (ppuVar17[0x13],unaff_x20 + 0xe,unaff_x20 + 0x11);
        }
      }
      func_0x0001087eb7e8();
      unaff_x21 = (undefined ********)0x7;
    }
    goto LAB_1087eafd0;
  case 0x5c:
    ppuVar17 = (undefined **)&ppppppuStack_f0;
  case 0x8d:
SUB_1087e49c4:
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    pcStack_138 = (code *)uVar53;
    func_0x000107c279a4(ppuVar17 + 10);
    FUN_1087a33a8(ppuVar17 + 1);
code_r0x000100567a50:
    auVar64._8_8_ = param_3;
    auVar64._0_8_ = ppuVar17;
    return auVar64;
  case 0x5e:
    func_0x0001087e8af8();
    func_0x0001087e8808();
    pcStack_138 = FUN_1087e2db0;
    pppppppuVar39 = (undefined *******)ppuVar17[1];
    if (pppppppuVar39 < ppuVar17[2]) {
      pppppppuStack_140 = (undefined *******)ppppppppuVar32;
      FUN_1087e2f60();
      ppppppppuVar30 = (undefined ********)(pppppppuVar39 + 4);
    }
    else {
      ppppppppuVar30 = (undefined ********)ppuVar17;
      pppppppuStack_140 = (undefined *******)ppppppppuVar32;
      FUN_1087e2f8c();
    }
    ppuVar17[1] = (undefined *)ppppppppuVar30;
    ppuVar17 = (undefined **)(ppppppppuVar30 + -4);
    goto code_r0x000100567a50;
  case 0x5f:
  case 0x76:
  case 0x9d:
  case 0xd6:
    *(undefined4 *)(ppuVar17 + 1) = 10;
    *ppuVar17 = (undefined *)&PTR_FUN_110a72970;
    pppppppuVar39 = param_3[1];
    pppppppuVar41 = *param_3;
    ppuVar17[3] = (undefined *)param_3[1];
    ppuVar17[2] = (undefined *)pppppppuVar41;
    if (pppppppuVar39 != (undefined *******)0x0) {
      do {
        func_0x0001087efed0();
      } while (extraout_w10_62 != 0);
    }
    lVar38 = param_4[1];
    pppppppuVar39 = (undefined *******)*param_4;
    ppuVar17[5] = (undefined *)param_4[1];
    ppuVar17[4] = (undefined *)pppppppuVar39;
    if (lVar38 != 0) {
      do {
        func_0x0001087efed0();
      } while (extraout_w10_63 != 0);
    }
    lVar38 = param_5[1];
    pppppppuVar39 = (undefined *******)*param_5;
    ppuVar17[7] = (undefined *)param_5[1];
    ppuVar17[6] = (undefined *)pppppppuVar39;
    if (lVar38 != 0) {
      do {
        func_0x0001087efed0();
      } while (extraout_w10_64 != 0);
    }
    lVar38 = param_6[1];
    pppppppuVar39 = (undefined *******)*param_6;
    ppuVar17[9] = (undefined *)param_6[1];
    ppuVar17[8] = (undefined *)pppppppuVar39;
    if (lVar38 != 0) {
      do {
        func_0x0001087efed0();
      } while (extraout_w10_65 != 0);
    }
    FUN_1087bc1b8(ppuVar17 + 10,param_8);
    pppppppuVar39 = unaff_x21[1];
    pppppppuVar41 = *unaff_x21;
    ppuVar17[0x12] = (undefined *)unaff_x21[1];
    ppuVar17[0x11] = (undefined *)pppppppuVar41;
    if (pppppppuVar39 != (undefined *******)0x0) {
      do {
        func_0x0001087efed0();
      } while (extraout_w10_66 != 0);
    }
    auVar85._8_8_ = param_8;
    auVar85._0_8_ = ppuVar17;
    return auVar85;
  case 0x60:
code_r0x0001087f0eac:
    func_0x000107c29958();
    func_0x000107c2814c(ppuVar17 + 4);
    func_0x000107c28808();
    auVar91._8_8_ = param_3;
    auVar91._0_8_ = ppuVar17;
    return auVar91;
  case 99:
    goto code_r0x0001087f2e58;
  case 100:
    goto code_r0x0001005505e4;
  case 0x65:
    goto code_r0x0001087f0258;
  case 0x66:
    func_0x0001087f35b8();
    func_0x0001087f379c();
    func_0x0001087f37c0();
    FUN_1087b95a0(ppppppppuVar42,ppuVar17);
    func_0x0001087f35f8();
    func_0x0001087f3598();
    func_0x0001087f3790();
    func_0x0001087f3688();
    func_0x0001087f3670();
    func_0x0001087f36a0();
    func_0x0001087f36b8();
    uVar53 = 0x1087f2ed8;
    ppuVar17 = (undefined **)&uStack_130;
    param_3 = ppppppppuVar42;
code_r0x0001005505e4:
    *ppuVar17 = (undefined *)&PTR_DAT_110a60a10;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    pcStack_138 = (code *)uVar53;
    func_0x0001000e30f4(ppuVar17 + 1);
    auVar63._8_8_ = param_3;
    auVar63._0_8_ = ppuVar17;
    return auVar63;
  case 0x67:
    goto code_r0x0001087ef28c;
  case 0x68:
    goto code_r0x0001087f0268;
  case 0x6a:
  case 0x91:
  case 0xc1:
    *ppuVar17 = (undefined *)ppppppppuVar25;
    ppuVar17[3] = (undefined *)&PTR_DAT_110a72c30;
    unaff_x20 = (undefined ********)(ppuVar17 + 4);
    *unaff_x20 = (undefined *******)0x0;
    ppppppuStack_f0 = (undefined ******)0x0;
    uVar53 = 0x1087f39d4;
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)&ppppppuStack_f0;
    break;
  case 0x6b:
  case 0x92:
  case 0xc2:
    goto code_r0x0001087ef294;
  case 0x6c:
  case 0x93:
  case 0xc3:
    while( true ) {
      ppppppppuVar11 = ppppppppuVar42;
      iVar23 = (int)ppppppppuVar43;
      if (iVar23 != 0) break;
LAB_1087e5288:
      func_0x0001087e8f44();
      ppppppppuVar10 = ppppppppuVar11;
LAB_1087e528c:
      func_0x000104bd46a0();
      ppppppppuVar42 = ppppppppuVar10;
      ppppppppuVar43 = param_3;
    }
    func_0x0001087e8d4c();
    func_0x0001087e8b80();
    if (iVar23 == 6) {
      ppppppppuVar43 = (undefined ********)ppuVar17[0x50];
      pppppppuVar39 = (undefined *******)ppuVar17[0x4f];
      func_0x0001087e8920();
      FUN_1087e57e0(pppppppuVar39[9],ppppppppuVar43);
      func_0x0001087e8ca0();
      uStack_100 = (undefined ********)CONCAT44(2,extraout_w8_13);
      func_0x0001087e86a0();
      func_0x0001087e8910();
      ___cxa_end_catch();
    }
    else {
      uVar8 = iVar23 == 5;
      if ((bool)uVar8) {
        ppppppppuVar43 = (undefined ********)ppuVar17[0x52];
        func_0x0001087e8920();
        func_0x0001087e8868(*ppppppppuVar43);
        if ((extraout_w8_14 >> 1 & 1) == 0) {
          func_0x0001087e9038();
          if (!(bool)uVar8) {
            uVar24 = *(undefined4 *)(param_3 + 1);
            goto LAB_1087e553c;
          }
          pppppppuVar39 = (undefined *******)ppuVar17[0x4f];
          ppppppppuVar43 = (undefined ********)pppppppuVar39[9];
          FUN_1087e57e0(ppppppppuVar43);
          ppppppuVar51 = pppppppuVar39[9];
          func_0x0001087e88f0();
          ppppppuStack_e0 = (undefined ******)CONCAT44(ppppppuStack_e0._4_4_,0x15);
          func_0x0001087e8df4();
          FUN_1087e8b54();
          func_0x0001087e8eb4();
          ppppppppuVar30 = ppppppppuVar43;
          func_0x0001087e8da0();
          func_0x0001087e8f38();
          ppppppppuVar11 = ppppppppuVar43;
          FUN_108791610(ppppppppuVar43,ppuVar17 + 0x32,ppppppppuVar30);
          FUN_108791a34(ppuVar17 + 0x18,ppppppppuVar11);
          (*(code *)(*ppppppuVar51)[0xc])(ppppppuVar51,ppuVar17 + 0x18);
          pppppppuVar39 = (undefined *******)ppuVar17[0x50];
          func_0x0001087e8d44();
          func_0x0001087e8d98();
          func_0x0001087e8cd4();
          func_0x0001087e8ac8();
          uVar24 = *(undefined4 *)(pppppppuVar39 + 1);
          uVar28 = 2;
        }
        else {
          func_0x0001087e8ca0();
          uVar24 = extraout_w8_15;
LAB_1087e553c:
          uVar28 = 6;
        }
        uStack_100 = (undefined ********)CONCAT44(uVar28,uVar24);
        func_0x0001087e86a0();
        func_0x0001087e8910();
        ___cxa_end_catch();
      }
      else {
        if (iVar23 == 4) {
          func_0x0001087e8920();
          func_0x0001087e8f90();
          FUN_1087b149c();
          func_0x0001087e8bb4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1087e5588);
          (*pcVar2)();
        }
        if (iVar23 == 3) {
          pppppppuVar41 = (undefined *******)ppuVar17[0x51];
          pppppppuVar39 = (undefined *******)ppuVar17[0x50];
          pppppppuVar29 = (undefined *******)ppuVar17[0x4f];
          func_0x0001087e8920();
          uVar35 = (ulong)*(uint *)(pppppppuVar41 + 0x2a);
          func_0x000108841bf8(uVar35);
          uVar14 = (ulong)*(uint *)(pppppppuVar39 + 1);
          FUN_1087e3048(uVar14);
          FUN_108841e44(pppppppuVar29 + 9,uVar35,uVar14,ppppppppuVar10);
          pppppppuVar39 = (undefined *******)ppuVar17[0x50];
          func_0x000107c31338();
          iVar23 = *(int *)(pppppppuVar41 + 0x2a);
          iVar18 = *(int *)(pppppppuVar39 + 1);
          ppppppppuVar30 = (undefined ********)(long)iVar18;
          FUN_1087e3048();
          func_0x0001087e8798();
          pppppppuStack_128 = (undefined *******)0x0;
          pppppppuStack_118 = (undefined *******)0x0;
          uStack_130 = (undefined **)ppppppppuVar30;
          func_0x0001087e88a4();
          ppppppppuVar43 = (undefined ********)(ppuVar17 + 0x41);
          func_0x0001087e8894();
          func_0x0001087e8b0c();
          func_0x0001087e8820(ppuVar17[0x4f]);
          (*extraout_x8_28)();
          uStack_100 = (undefined ********)CONCAT44(uStack_100._4_4_,7);
          func_0x0001087e8710((undefined ********)(long)iVar18 + (long)iVar23 * 0x7d);
          func_0x0001087e8e44();
          pppppppuVar39 = (undefined *******)ppuVar17[0x50];
          func_0x0001087e8908();
          func_0x0001087e8b3c();
          func_0x0001087e8bd8();
          uStack_100 = (undefined ********)CONCAT44(7,*(undefined4 *)(pppppppuVar39 + 1));
          func_0x0001087e86a0();
          func_0x0001087e8910();
          ppppppuStack_f0 = (undefined ******)(ulong)*(uint *)(ppppppppuVar10 + 1);
          uStack_100 = (undefined ********)((ulong)ppppppuStack_f0 & 0xff);
          pppppppuStack_f8 = (undefined *******)0x0;
          ppppppuStack_e8 = (undefined ******)0x0;
          func_0x0001087e8f1c();
          func_0x0001087e8cb4();
          func_0x0001087e8e70();
          func_0x0001087e8d2c();
          ___cxa_end_catch();
        }
        else {
          func_0x0001087e8920();
          if (iVar23 == 2) {
            pppppppuVar39 = (undefined *******)ppuVar17[0x51];
            pppppppuVar41 = (undefined *******)ppuVar17[0x50];
            func_0x000107c31338();
            iVar23 = *(int *)(pppppppuVar39 + 0x2a);
            iVar18 = *(int *)(pppppppuVar41 + 1);
            ppppppppuVar30 = (undefined ********)(long)iVar18;
            FUN_1087e3048();
            ppppppppuVar11 = ppppppppuVar30;
            func_0x0001087e8798();
            pppppppuStack_128 = (undefined *******)0x0;
            pppppppuStack_118 = (undefined *******)0x0;
            uStack_130 = (undefined **)ppppppppuVar30;
            func_0x0001087e88a4();
            ppppppppuVar43 = (undefined ********)(ppuVar17 + 0x3b);
            func_0x0001087e8894();
            func_0x0001087e8b0c();
            func_0x0001087e8820(ppuVar17[0x4f]);
            (*extraout_x8_29)();
            uStack_100 = (undefined ********)CONCAT44(uStack_100._4_4_,7);
            func_0x0001087e8710((undefined ********)(long)iVar18 + (long)iVar23 * 0x7d);
            func_0x0001087e8e44();
            pppppppuVar39 = (undefined *******)ppuVar17[0x50];
            func_0x0001087e8908();
            func_0x0001087e8b3c();
            func_0x0001087e8bd8();
            uStack_100 = (undefined ********)CONCAT44(7,*(undefined4 *)(pppppppuVar39 + 1));
            func_0x0001087e86a0();
            func_0x0001087e8910();
            func_0x0001087e8798();
            uStack_100 = ppppppppuVar11;
            func_0x0001087e8e64();
            ___cxa_end_catch();
          }
          else {
            func_0x0001087e8ca0();
            uStack_100 = (undefined ********)CONCAT44(7,extraout_w8_16);
            func_0x0001087e86a0();
            func_0x0001087e8910();
            ___cxa_end_catch();
          }
        }
      }
    }
    func_0x0001087e8838();
    if (((extraout_w8_11 >> 1 & 1) != 0) ||
       ((func_0x0001087e8838(), (extraout_w8_12 >> 5 & 1) != 0 && (*(int *)(*unaff_x20 + 7) == 0))))
    {
      pppppppuStack_118 = (undefined *******)0x0;
      uStack_130 = &PTR_FUN_110a6f328;
      pppppppuStack_128 = (undefined *******)0x0;
      func_0x0001087e8cc4();
      FUN_1087e8b54();
      FUN_108791610(&uStack_130,ppuVar17 + 0x47);
      FUN_108791a34(&uStack_100,puVar12);
      pppppppuVar39 = (undefined *******)ppuVar17[0x4f];
      func_0x0001087e8cac();
      FUN_108788618(&uStack_130);
      ppppppuVar51 = pppppppuVar39[9];
      FUN_108791a34(ppuVar17 + 0x22,&uStack_100);
      (*(code *)(*ppppppuVar51)[0xc])(ppppppuVar51,ppuVar17 + 0x22);
      func_0x0001087e8c7c();
      func_0x0001087e8ac8();
    }
    func_0x000107c28288(ppuVar17 + 0x35);
    ppppppuVar51 = *(undefined *******)((long)ppuVar17[0x4f] + 0x88);
    if (ppppppuVar51 == (undefined ******)0x0) {
      uVar24 = 0;
    }
    else {
      func_0x0001087e885c();
      uVar24 = SUB84(ppppppuVar51,0);
      (*extraout_x8_27)();
    }
    ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x35);
    FUN_1087b023c();
    pppppppuStack_f8 = (undefined *******)CONCAT44(pppppppuStack_f8._4_4_,uVar24);
    uStack_100 = ppppppppuVar30;
    func_0x0001087e8e0c();
    pppppppuVar39 = *unaff_x21;
    do {
      uStack_130 = (undefined **)0x0;
      pppppppuVar41 = pppppppuVar39 + 2;
      param_3 = (undefined ********)&uStack_130;
      func_0x0001087e87f4(pppppppuVar41,&uStack_130);
      if ((int)pppppppuVar41 != 0) {
        if (*(char *)(pppppppuVar39 + 0x23) == '\x01') {
          ppuVar17 = (undefined **)(pppppppuVar39 + 0x15);
          uVar53 = 0x1087e516c;
          goto SUB_1087e49c4;
        }
        func_0x0001087e8fa8();
        func_0x0001087e898c();
        break;
      }
    } while (((uint)uStack_130 >> 1 & 1) == 0);
    func_0x0001087e8b30();
    ppuVar17 = (undefined **)(ppppppppuVar43 + 2);
    uVar53 = 0x1087e5184;
    goto SUB_1087e49c4;
  case 0x6d:
  case 0x94:
  case 0xc4:
    goto code_r0x0001087f0290;
  case 0x6e:
  case 0x95:
  case 0xc5:
    goto code_r0x0001087f3aa8;
  case 0x6f:
  case 0x96:
  case 0xc6:
    uStack_100 = (undefined ********)0x0;
    pppppppuStack_a8 = (undefined *******)ppppppppuVar25;
    FUN_1086a76a0(&stack0x00000408,0x11c8);
    goto code_r0x0001087f0a94;
  case 0x70:
  case 0x97:
  case 199:
    func_0x0001087f36c8((*unaff_x21)[2]);
LAB_1087f26e8:
    *(undefined1 *)(ppuVar17 + 0x4f) = 0;
    *(undefined1 *)(ppuVar17 + 0x56) = 0;
    func_0x0001087f37a8(&stack0xfffffffffffffee0);
    pppppppuStack_d8 = (undefined *******)ppppppppuVar43;
    func_0x0001087f3628();
    ppuVar17 = (undefined **)&stack0xfffffffffffffee0;
    uVar53 = 0x1087f2710;
    goto SUB_1087e49c4;
  case 0x71:
  case 0x98:
    pcStack_138 = (code *)0x1087d6c88;
    ppppppppuVar11 = (undefined ********)ppuVar17;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    func_0x0001087e902c();
    ppppppppuVar11 = ppppppppuVar11 + 2;
    FUN_1087e32a4();
    ppuVar17[1] = (undefined *)ppppppppuVar11;
    goto LAB_1087e884c;
  case 0x72:
  case 0x99:
    puVar3 = &uStack_190;
    pcStack_138 = (code *)0x1087d6c88;
    pppppppuStack_168 = (undefined *******)0x0;
    pppppppuStack_170 = (undefined *******)0x0;
    pppppppuStack_158 = (undefined *******)0x0;
    pppppppuStack_160 = (undefined *******)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    FUN_108656884(ppuVar17 + 1,&uStack_190);
    FUN_1086569a0((ulong)&uStack_190 | 8);
    pppppppuVar39 = (undefined *******)*ppuVar17;
    *ppuVar17 = (undefined *)0x0;
    func_0x000107c31408(pppppppuVar39);
    FUN_1086569a0(ppuVar17 + 2);
    auVar68._8_8_ = puVar3;
    auVar68._0_8_ = ppuVar17;
    return auVar68;
  case 0x73:
  case 0x9a:
    goto code_r0x0001087e9df8;
  case 0x74:
  case 0x9b:
    FUN_108791610(ppppppppuVar42,ppuVar17 + 0x32);
    FUN_108791a34(ppuVar17 + 0x18,ppppppppuVar42);
    func_0x0001087e8f88((*unaff_x21)[0xc]);
    pppppppuVar39 = (undefined *******)ppuVar17[0x50];
    func_0x0001087e8d44();
    func_0x0001087e8d98();
    func_0x0001087e8cd4();
    func_0x0001087e8ac8();
    uStack_100 = (undefined ********)CONCAT44(2,*(undefined4 *)(pppppppuVar39 + 1));
    func_0x0001087e86a0();
    func_0x0001087e8910();
    ___cxa_end_catch();
    func_0x0001087e8838();
    if (((extraout_w8_17 >> 1 & 1) != 0) ||
       ((func_0x0001087e8838(), (extraout_w8_18 >> 5 & 1) != 0 && (*(int *)(*unaff_x20 + 7) == 0))))
    {
      func_0x0001087e88f0();
      ppppppuStack_e0 = (undefined ******)CONCAT44(ppppppuStack_e0._4_4_,0x13);
      func_0x0001087e8cc4();
      FUN_1087e8b54();
      puVar3 = &uStack_100;
      FUN_108791610(puVar3,ppuVar17 + 0x47);
      FUN_108791a34(&uStack_130,puVar3);
      pppppppuVar39 = (undefined *******)ppuVar17[0x4f];
      func_0x0001087e8cac();
      func_0x0001087e8ac8();
      ppppppuVar51 = pppppppuVar39[9];
      FUN_108791a34(ppuVar17 + 0x22,&uStack_130);
      func_0x0001087e8f88((*ppppppuVar51)[0xc]);
      func_0x0001087e8c7c();
      FUN_108788618(&uStack_130);
    }
    func_0x000107c28288(ppuVar17 + 0x35);
    ppppppuVar51 = *(undefined *******)((long)ppuVar17[0x4f] + 0x88);
    if (ppppppuVar51 == (undefined ******)0x0) {
      uVar24 = 0;
    }
    else {
      func_0x0001087e885c();
      uVar24 = SUB84(ppppppuVar51,0);
      (*extraout_x8_30)();
    }
    ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x35);
    FUN_1087b023c();
    pppppppuStack_f8 = (undefined *******)CONCAT44(pppppppuStack_f8._4_4_,uVar24);
    uStack_100 = ppppppppuVar30;
    func_0x0001087e8e0c();
    pppppppuVar39 = (undefined *******)ppuVar17[3];
    do {
      uStack_130 = (undefined **)0x0;
      pppppppuVar41 = pppppppuVar39 + 2;
      param_3 = (undefined ********)&uStack_130;
      func_0x0001087e87f4(pppppppuVar41,&uStack_130);
      if ((int)pppppppuVar41 != 0) {
        if (*(char *)(pppppppuVar39 + 0x23) == '\x01') {
          ppuVar17 = (undefined **)(pppppppuVar39 + 0x15);
          uVar53 = 0x1087e74c8;
          goto SUB_1087e49c4;
        }
        func_0x0001087e8fa8();
        func_0x0001087e898c();
        break;
      }
    } while (((uint)uStack_130 >> 1 & 1) == 0);
    func_0x0001087e8b30();
    ppuVar17 = (undefined **)(param_2 + 0x147);
    uVar53 = 0x1087e74e0;
    goto SUB_1087e49c4;
  case 0x75:
  case 0x9c:
    ppppppppuVar11 = unaff_x21;
    _memcpy();
    ppuVar17[1] = (undefined *)unaff_x21;
    ppppppppuVar25 = (undefined ********)*unaff_x20;
    unaff_x20[1] = (undefined *******)ppppppppuVar25;
    ppuVar33 = (undefined **)ppuVar17[1];
code_r0x0001087e9df8:
    *unaff_x20 = (undefined *******)ppuVar33;
    ppuVar17[1] = (undefined *)ppppppppuVar25;
    pppppppuVar39 = unaff_x20[1];
    unaff_x20[1] = (undefined *******)ppuVar17[2];
    ppuVar17[2] = (undefined *)pppppppuVar39;
    pppppppuVar39 = unaff_x20[2];
    unaff_x20[2] = (undefined *******)ppuVar17[3];
    ppuVar17[3] = (undefined *)pppppppuVar39;
    *ppuVar17 = ppuVar17[1];
    auVar79._8_8_ = param_3;
    auVar79._0_8_ = ppppppppuVar11;
    return auVar79;
  case 0x77:
  case 0x9e:
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)ppuVar17;
    break;
  case 0x79:
  case 0xa0:
    ppppppppuVar42 = (undefined ********)*ppuVar17;
    if (ppppppppuVar42 == (undefined ********)0x0) {
      func_0x000107c3a5c0();
      ppppppppuVar42 = (undefined ********)*ppppppppuVar11;
    }
  case 0xde:
    ppppppppuVar32 = unaff_x21 + 2;
    do {
      if (*ppppppppuVar32 == (undefined *******)0x0) {
        func_0x0001087ed80c();
        ppppppppuVar32 = extraout_x8_42;
        uVar22 = extraout_w10_61;
        uVar35 = extraout_x11_17;
      }
      else {
        func_0x0001087ed998();
        ppppppppuVar32 = extraout_x8_41;
        uVar22 = extraout_w10_60;
        uVar35 = extraout_x11_16;
      }
      if ((uVar35 & 1) != 0) {
        func_0x0001087ed898();
        if ((bool)in_ZR) {
          func_0x0001087ed81c();
          uVar8 = extraout_w8_00;
          if ((bool)in_CY) {
            uVar8 = extraout_w9;
          }
          func_0x0001087ed780();
          *(undefined1 *)ppppppppuVar11 = uVar8;
          func_0x0001087ed7c0(0);
          unaff_x21[0x12] = (undefined *******)ppppppppuVar11;
        }
        func_0x0001087ed8a8();
        *(undefined *********)(extraout_x8_43 + 0x20) = ppppppppuVar42;
        func_0x0001087ed888(unaff_x21[0x12]);
        unaff_x21[2] = (undefined *******)0x0;
        auVar83._8_8_ = param_3;
        auVar83._0_8_ = ppppppppuVar11;
        return auVar83;
      }
    } while ((uVar22 >> 1 & 1) == 0);
    func_0x0001087ed9dc();
    func_0x0001087ed988();
    func_0x0001087ed8cc();
    func_0x0001087ed8f8();
    func_0x0001087ed8d4();
    func_0x0001087ed944();
    func_0x0001087ed94c();
    func_0x0001087ed8c4();
    func_0x0001087ed8dc();
    func_0x0001087ed960();
    param_3 = ppppppppuVar11;
code_r0x00010bdbd7ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    auVar98._8_8_ = param_3;
    auVar98._0_8_ = ppuVar17;
    return auVar98;
  case 0x7a:
  case 0x84:
  case 0xa1:
  case 0xab:
  case 0xdf:
    goto code_r0x0001087f1e9c;
  case 0x7b:
  case 0xa2:
  case 0xe0:
    goto LAB_1087ef298;
  case 0x7c:
  case 0xa3:
  case 0xe1:
    _bzero();
    if (cStack0000000000000088 == '\x01') {
      func_0x0001087eb81c();
      if (unaff_x26 != 0) goto code_r0x0001087eb688;
    }
    else {
      func_0x0001087eb81c();
    }
    uVar8 = 0;
    *(undefined1 *)ppuVar17 = 0;
LAB_1087eb6b4:
    *(undefined1 *)(ppuVar17 + 0x1a) = uVar8;
    puVar16 = &stack0xffffffffffffffb8;
    func_0x000107c28f88(puVar16);
    auVar81._8_8_ = param_3;
    auVar81._0_8_ = puVar16;
    return auVar81;
  case 0x7e:
  case 0xa5:
  case 0xe3:
    goto LAB_1087f3e70;
  case 0x7f:
  case 0xa6:
  case 0xcc:
    ppuVar17 = ppuVar17 + 0x7d;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar17);
    goto LAB_1087eeffc;
  case 0x80:
  case 0x88:
  case 0xa7:
  case 0xcd:
    goto code_r0x0001087f1e8c;
  case 0x81:
  case 0xa8:
  case 0xce:
LAB_1087ef264:
    do {
      func_0x0001087efe6c();
      ppppppppuVar34 = extraout_x10_05;
code_r0x0001087ef268:
    } while ((int)ppppppppuVar34 != 0);
LAB_1087ef26c:
    FUN_1087ef868(ppuVar17 + 2);
code_r0x0001087ef278:
    FUN_1087ef47c(ppppppppuVar42);
code_r0x0001087ef280:
    pppppppuVar39 = *unaff_x20;
    ppuVar17[0xb] = (undefined *)pppppppuVar39;
    if (pppppppuVar39 != (undefined *******)0x0) {
code_r0x0001087ef28c:
      do {
        func_0x0001087efe6c();
        ppppppppuVar34 = extraout_x10_06;
code_r0x0001087ef294:
      } while ((int)ppppppppuVar34 != 0);
    }
LAB_1087ef298:
    ppuVar17[0xc] = ppuVar17[8];
    if ((undefined *******)ppuVar17[8] != (undefined *******)0x0) {
LAB_1087ef2a8:
      do {
        func_0x0001087efe6c();
        ppppppppuVar34 = extraout_x10_07;
code_r0x0001087ef2ac:
      } while ((int)ppppppppuVar34 != 0);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(ppuVar17 + 4);
    param_3 = (undefined ********)(ppuVar17 + 0xb);
    ppppppppuVar32 = (undefined ********)(ppuVar17 + 0xc);
    FUN_1087ef4f8(ppuVar17 + 10,param_3,ppppppppuVar32,ppuVar17 + 4);
    ppuVar17[9] = ppuVar17[10];
    do {
      func_0x0001087efe6c();
    } while (extraout_w10_68 != 0);
    func_0x0001087eff40();
    if ((extraout_w8_21 >> 1 & 1) == 0) {
      *(undefined1 *)(ppuVar17 + 0xd) = 0;
      pppppppuVar39 = (undefined *******)ppuVar17[9];
      func_0x0001087efe90();
      pppppppuVar41 = *param_3;
      if (pppppppuVar41 == (undefined *******)0x0) {
        func_0x000107c3a5c0();
        pppppppuVar41 = *param_3;
      }
      pppppppuVar29 = pppppppuVar39 + 2;
      do {
        if (*pppppppuVar29 == (undefined ******)0x0) {
          func_0x0001087efeb8();
          pppppppuVar29 = extraout_x8_46;
          uVar22 = extraout_w10_70;
          uVar35 = extraout_x11_19;
        }
        else {
          func_0x0001087f0064();
          pppppppuVar29 = extraout_x8_45;
          uVar22 = extraout_w10_69;
          uVar35 = extraout_x11_18;
        }
        if ((uVar35 & 1) != 0) {
          func_0x0001087eff50();
          if ((bool)in_ZR) {
            func_0x0001087efee0();
            uVar8 = extraout_w8_01;
            if ((bool)in_CY) {
              uVar8 = extraout_w9_00;
            }
            func_0x0001087efea8();
            *(undefined1 *)param_3 = uVar8;
            func_0x0001087efe7c(0);
            pppppppuVar39[0x12] = (undefined ******)param_3;
          }
          func_0x0001087eff28();
          *(undefined ********)(extraout_x8_47 + 0x20) = pppppppuVar41;
          func_0x0001087eff18(pppppppuVar39[0x12]);
          pppppppuVar39[2] = (undefined ******)0x0;
          auVar89._8_8_ = ppppppppuVar32;
          auVar89._0_8_ = param_3;
          return auVar89;
        }
      } while ((uVar22 >> 1 & 1) == 0);
    }
    func_0x0001087f0070();
    func_0x0001087f0020();
    func_0x0001087efec8();
    func_0x0001087eff08();
    func_0x0001087efef0();
    func_0x0001087eff90();
    func_0x0001087effa8();
    func_0x0001087efea0();
    func_0x0001087efef8();
    func_0x0001087eff78();
    goto code_r0x00010bdbd7ac;
  case 0x82:
  case 0xa9:
  case 0xcf:
    param_3 = (undefined ********)(ppuVar17 + 0x12);
    FUN_1087e5748();
    ppppppppuVar11 = (undefined ********)(ppuVar17 + 4);
    FUN_1087e4b58();
    func_0x0001087f1ca8();
    func_0x0001087f1c6c();
    if (*(int *)((long)ppuVar17 + 0x24) != 0) {
      func_0x0001087f1cc0();
      uVar8 = 0;
      if ((!(bool)in_ZR) ||
         (bVar5 = *(char *)((long)ppuVar17 + 0x6c) == '\x01',
         uVar8 = bVar5 && *(int *)(ppuVar17 + 0xd) == 5, in_ZR = uVar8,
         !bVar5 || *(int *)(ppuVar17 + 0xd) != 5)) goto LAB_1087f1aa8;
    }
LAB_1087f1ac4:
    pppppppuVar39 = (undefined *******)ppuVar17[0x14];
    ppppppppuVar30 = (undefined ********)pppppppuVar39[7];
    if ((ppppppppuVar30 != (undefined ********)0x0) &&
       (unaff_x21 = (undefined ********)pppppppuVar39[3], unaff_x21 != (undefined ********)0x0)) {
      pppppppuStack_128 = (undefined *******)pppppppuVar39[8];
      if ((undefined ********)pppppppuStack_128 != (undefined ********)0x0) {
        ppppppppuVar11 = (undefined ********)(pppppppuStack_128 + 1);
        do {
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar11,0x10);
          if (bVar5) {
            *ppppppppuVar11 = (undefined *******)((long)*ppppppppuVar11 + 1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      uStack_130 = (undefined **)ppppppppuVar30;
      func_0x000107c28150();
      ppppppppuVar42 = (undefined ********)unaff_x21[2];
      ppppppppuVar11 = ppppppppuVar42 + 1;
      __ZNSt3__15mutex4lockEv();
      func_0x0001087f1c34();
      func_0x0001087f1d04();
      func_0x0001087f1c24();
      func_0x0001087f1c90();
      func_0x0001087f1c98();
    }
    func_0x0001087f1cf8();
    func_0x0001087f1c88();
    while( true ) {
      func_0x0001087f1cb8();
      func_0x0001087f1cb0();
      func_0x0001087f1cd8();
      if ((bool)in_ZR) {
        auVar92._8_8_ = param_3;
        auVar92._0_8_ = ppppppppuVar11;
        return auVar92;
      }
      ___stack_chk_fail();
      if ((int)param_3 == 0) break;
      func_0x0001087f1ca0();
      func_0x0001087f1c98();
      func_0x0001087f1c88();
      ___cxa_begin_catch(ppppppppuVar11);
      ppppppppuVar11 = (undefined ********)(ppuVar17 + 2);
      func_0x0001053360b0();
      ___cxa_end_catch();
    }
    ppuVar17 = (undefined **)ppppppppuVar11;
    func_0x0001087f1cf0();
    pcStack_138 = FUN_1087f1be4;
    uVar53 = 0x1087f1bfc;
    puVar3 = (undefined8 *)&stack0xfffffffffffffeb0;
    ppppppppuVar9 = (undefined ********)(ppuVar17 + 0x12);
    unaff_x20 = ppppppppuVar11;
    ppppppppuVar52 = &pppppppuStack_140;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    break;
  case 0x83:
  case 0xaa:
    goto code_r0x0001087f2200;
  case 0x85:
  case 0xe7:
    if ((undefined ********)ppuVar17 != (undefined ********)0x0) {
      FUN_1087eb7d0();
    }
    ppppppppuVar11 = (undefined ********)&stack0x00000298;
    func_0x000107c287e4();
code_r0x0001087ea600:
    func_0x0001087eb830();
    if (ppppppppuVar11 != (undefined ********)0x0) {
      FUN_1087eb7d0();
    }
    if (*(int *)(unaff_x20 + 0x1b) - 1U < 2) {
      if (((ulong)unaff_x20[0x1d] & 1) == 0) {
        func_0x00010bd3f434(&stack0x00000298,&UNK_10f4bbb9d,0x26,&UNK_10f4bbbc4);
        if (-1 < in_stack_000002af) {
          in_stack_00000298 = (undefined *******)&stack0x00000298;
        }
        func_0x00010bd3f4e0(in_stack_00000298,"unknown",0xd2);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1087eb5b8);
        (*pcVar2)();
      }
      func_0x0001087eb7fc();
      uVar22 = (uint)ppppppppuVar11;
      if ((*(int *)(unaff_x20 + 0x1a) == 6) && ((*(byte *)(unaff_x20[0x19] + 2) >> 1 & 1) != 0)) {
        func_0x0001086aaa9c(&pppppppuStack_c8,unaff_x20[0x19][4]);
      }
      else {
        pppppppuStack_c8 = (undefined *******)((ulong)pppppppuStack_c8 & 0xffffffffffffff00);
        pppppppuStack_a8 = (undefined *******)((ulong)pppppppuStack_a8 & 0xffffffffffffff00);
      }
      uVar45 = *(uint *)(unaff_x20 + 0x1b);
      ppuVar46 = (undefined **)(ulong)uVar45;
      if (*(char *)(unaff_x20 + 0x29) == '\x01' && *(int *)(unaff_x20 + 0x28) == 4) {
        if (uVar45 == 1) {
          pppppppuVar41 = unaff_x20[0x27];
          pppppppuVar39 = (undefined *******)ppuVar17[0x15];
          FUN_1086cf200(&stack0x00000740);
          FUN_10868cc20(&stack0x00000298,pppppppuVar41);
          (*(code *)(*pppppppuVar39)[5])
                    (&stack0x000008f0,pppppppuVar39,unaff_x20 + 0xe,1,0x1200a8,&stack0x00000740,
                     &stack0x00000298,0,0);
          FUN_1089058f8(&stack0x00000298);
          func_0x0001086cf230(&stack0x00000740);
        }
        if ((*(int *)(unaff_x20 + 0x1a) == 0x11) &&
           (pppppppuVar39 = unaff_x20[0x1e], pppppppuVar39 != unaff_x20[0x1f])) {
          func_0x0001087eb824(*ppppppppuVar42);
          FUN_10886af30();
          if (in_stack_000002b0 == '\x01') {
            func_0x000107c28078(pppppppuVar39,&stack0x00000298);
            if (((ulong)pppppppuVar39 & 1) == 0) {
              pppppppuVar39 = (undefined *******)ppuVar17[0x19];
              func_0x000107c27994(&stack0x00000a10,&stack0x00000298);
              param_3 = (undefined ********)&stack0x00000740;
              (*(code *)(*pppppppuVar39)[6])(pppppppuVar39,param_3);
              ppuVar17 = (undefined **)&stack0x00000740;
              pcStack_138 = (code *)0x1087ea8f4;
              goto SUB_100100fec;
            }
          }
          else {
            FUN_10886b0d4(*ppppppppuVar42,unaff_x20 + 0xe,pppppppuVar39);
          }
          func_0x000107c279c4(&stack0x00000298);
        }
      }
      else {
        if (((*(char *)(unaff_x20 + 0x29) == '\0') || (*(int *)(unaff_x20 + 0x28) != 3)) ||
           (((ulong)unaff_x20[0x27][2] & 1) == 0)) {
          in_stack_00000a60 = 0;
        }
        else {
          FUN_1088fc290(&stack0x00000a10,0,unaff_x20[0x27][3]);
          in_stack_00000a60 = 1;
        }
        pppppppuVar39 = *ppppppppuVar42;
        func_0x0001087eb824();
        func_0x000107c29f64();
        if (((in_stack_00000468 & 1) != 0) && (((uVar22 | in_stack_00000408 ^ 0xffffffff) & 1) != 0)
           ) {
          in_stack_000009f8 = (undefined ********)0x0;
          in_stack_000009f0 = (undefined ********)0x0;
          in_stack_00000a00 = (undefined *******)0x0;
          if (in_stack_00000a60 == 1) {
            if (in_stack_00000a58 == 6) {
              pppppppuVar39 = in_stack_00000a50;
              FUN_1086dd09c(in_stack_00000a50,&stack0x000002b0);
            }
            else {
              if (in_stack_00000a58 != 4) goto LAB_1087ea9d8;
              FUN_1086a2e5c(&stack0x000009c8,&stack0x000002b0,in_stack_00000a50);
              pppppppuVar39 = (undefined *******)0x0;
              FUN_1086af46c();
            }
            bVar21 = 0;
LAB_1087eaaf0:
            if (in_stack_00000a60 == 1 && uVar45 == 1) {
              if ((((in_stack_000003f0 < (long)unaff_x20[0x1c]) &&
                   (pppppppuVar39 = (undefined *******)ppuVar17[0x1d],
                   pppppppuVar39 != (undefined *******)0x0)) && (in_stack_00000a58 == 4)) &&
                 ((*(byte *)(in_stack_00000a50 + 2) >> 1 & 1) != 0)) {
                (*(code *)(*pppppppuVar39)[4])
                          (pppppppuVar39,unaff_x20 + 0xe,in_stack_00000a50[10],
                           (long)in_stack_000002d0,0x2e0131);
              }
LAB_1087eab5c:
              uVar45 = (uint)pppppppuVar39;
              func_0x0001087eb7fc();
              if (unaff_x20[0x1c] == (undefined *******)0xfffffffffffffffe) {
                uVar45 = 1;
              }
              if ((uVar45 & 1) == 0) {
                func_0x000107c29940(&stack0x00000740,ppuVar17 + 0xd);
                if (in_stack_00000740 != (undefined *******)0x0) {
                  (*(code *)(*in_stack_00000740)[2])
                            (in_stack_00000740,unaff_x20 + 0xe,unaff_x20[0x1c]);
                }
                func_0x000107c29574(&stack0x00000740);
              }
            }
            else if (uVar45 == 1) goto LAB_1087eab5c;
            FUN_10885ff98(*ppppppppuVar42,&stack0x00000298);
            if ((in_stack_00000a60 == 1) && (in_stack_00000a30 != 0 && (uVar22 & 1) == 0)) {
              in_stack_000008f0 = (long *)0x0;
              FUN_1086a67dc(&stack0x00000710,&stack0x00000a28,unaff_x20 + 0xe,&stack0x000006d0,
                            ppuVar17[3],ppuVar17[0xb],&stack0x000008f0);
              if (in_stack_00000710 != in_stack_00000718) {
                FUN_1086a3928(&stack0x00000740);
                FUN_10867d03c(&stack0x000009f0,
                              (in_stack_00000718 - in_stack_00000710) / 0x1a8 +
                              ((long)in_stack_000009f8 - (long)in_stack_000009f0) / 0x1a8);
                lVar38 = in_stack_00000718 - in_stack_00000710;
                if (0 < lVar38) {
                  if ((long)in_stack_00000a00 - (long)in_stack_000009f8 < lVar38) {
                    puVar16 = &stack0x000009f0;
                    FUN_10867b544(puVar16,((long)in_stack_000009f8 - (long)in_stack_000009f0) /
                                          0x1a8 + lVar38 / 0x1a8);
                    FUN_10867b638(&pppppppuStack_a0,puVar16,
                                  ((long)in_stack_000009f8 - (long)in_stack_000009f0) / 0x1a8,
                                  &stack0x00000a00);
                    pppppppuStack_90 = (undefined *******)((long)pppppppuStack_90 + lVar38);
                    pppppppuStack_118 = (undefined *******)in_stack_000009f8;
                    for (; lVar38 != 0; lVar38 = lVar38 + -0x1a8) {
                      func_0x0001087eb7f0();
                    }
                    FUN_1086cecd8(&stack0x000009f0,&pppppppuStack_a0,pppppppuStack_118);
                    func_0x00010867b814(&pppppppuStack_a0);
                  }
                  else {
                    pppppppuStack_98 = (undefined *******)&pppppppuStack_78;
                    pppppppuStack_90 = (undefined *******)&pppppppuStack_70;
                    ppppppuStack_88 =
                         (undefined ******)((ulong)ppppppuStack_88 & 0xffffffffffffff00);
                    pppppppuStack_a0 = (undefined *******)&stack0x00000a00;
                    pppppppuStack_78 = (undefined *******)in_stack_000009f8;
                    for (; pppppppuStack_70 = (undefined *******)in_stack_000009f8,
                        in_stack_00000710 != in_stack_00000718;
                        in_stack_00000710 = in_stack_00000710 + 0x1a8) {
                      func_0x0001087eb7f0();
                      in_stack_000009f8 = (undefined ********)(pppppppuStack_70 + 0x35);
                    }
                    ppppppuStack_88 = (undefined ******)CONCAT71(ppppppuStack_88._1_7_,1);
                    FUN_10867b794(&pppppppuStack_a0);
                  }
                }
              }
              FUN_10886488c(*ppppppppuVar42,unaff_x20 + 0xe,&stack0x000008f0);
              func_0x000104be7444(&stack0x00000728,0);
              func_0x00010867b9fc(&stack0x00000710);
              func_0x00010867bb84(&stack0x000008f0);
            }
            if ((in_stack_000009f0 != in_stack_000009f8) || (((bVar21 ^ 0xff) & 1) == 0)) {
              (*(code *)**(undefined *******)ppuVar17[7])
                        (ppuVar17[7],unaff_x20 + 0xe,&stack0x00000298,1,&stack0x000009f0,
                         &stack0x00000728);
            }
            if (uVar22 == 0) {
              (*(code *)(*(undefined *******)ppuVar17[0x13])[7])
                        (ppuVar17[0x13],unaff_x20 + 0xe,unaff_x20 + 0x11,&stack0x00000a10,
                         &stack0x00000740);
            }
            else {
              func_0x000107c29940(&stack0x000008f0,ppuVar17 + 0xd);
              if (in_stack_000008f0 != (long *)0x0) {
                (**(code **)(*in_stack_000008f0 + 0x38))(in_stack_000008f0,unaff_x20 + 0xe);
              }
              func_0x000107c29574(&stack0x000008f0);
            }
            (*(code *)(*(undefined *******)ppuVar17[0x1b])[2])(&pppppppuStack_a0);
            iVar23 = *(int *)(unaff_x20 + 0x1a);
            if ((iVar23 == 5) || (iVar23 == 6 && (uVar22 & 1) == 0)) {
              if (*(char *)(unaff_x20 + 0x29) == '\x01' && *(int *)(unaff_x20 + 0x28) == 3) {
                ppppppuVar51 = (undefined ******)&PTR_PTR_11327c4f8;
                if (unaff_x20[0x27][3] != (undefined ******)0x0) {
                  ppppppuVar51 = unaff_x20[0x27][3];
                }
                if (*(int *)(ppppppuVar51 + 9) == 4) {
                  pppppuVar44 = ppppppuVar51[8];
                  FUN_10876194c(&stack0x000008f0,(long)*(int *)(pppppuVar44 + 7));
                  ppppuVar27 = pppppuVar44[6];
                  pppppuVar1 = pppppuVar44 + 6;
                  if (((ulong)ppppuVar27 & 1) != 0) {
                    pppppuVar1 = (undefined *****)((long)ppppuVar27 + 7);
                  }
                  FUN_1087623e8(pppppuVar1,pppppuVar1 + *(int *)(pppppuVar44 + 7),&stack0x000008f0);
                }
              }
              (*(code *)(*pppppppuStack_a0)[3])(pppppppuStack_a0,&stack0x000002b0,&stack0x000008f0);
              FUN_1086cd80c(&stack0x000008f0);
            }
            else if (iVar23 == 4) {
              (*(code *)(*pppppppuStack_a0)[4])(pppppppuStack_a0,&stack0x000002b0);
            }
            ppppppppuVar30 = (undefined ********)pppppppuStack_a0;
            pppppppuStack_a0 = (undefined *******)0x0;
            (*(code *)(*(undefined *******)ppuVar17[0x1b])[3])(ppuVar17[0x1b],&stack0x00000710);
            if (ppppppppuVar30 != (undefined ********)0x0) {
              FUN_1087eb7d0();
            }
            func_0x0001087eb830();
            if (ppppppppuVar30 != (undefined ********)0x0) {
              FUN_1087eb7d0();
            }
            func_0x000104be1274(&stack0x00000728);
            func_0x000107c288dc(&stack0x00000740);
          }
          else {
LAB_1087ea9d8:
            if (*(int *)(unaff_x20 + 0x21) == 1) {
              pppppppuVar39 = (undefined *******)&stack0x000002b0;
              FUN_1086dd1d8(pppppppuVar39,unaff_x20 + 0x11,*ppppppppuVar42 + 8);
LAB_1087eaa58:
              bVar21 = 0;
              if (in_stack_00000a58 == 0xc) {
                bVar21 = in_stack_00000a60;
              }
              if (bVar21 == 1) {
                pppppppuVar39 = (undefined *******)&stack0x000002b0;
                FUN_1086dcd30(pppppppuVar39,in_stack_00000a50);
              }
              if (((in_stack_00000a60 & 1) != 0) && (in_stack_00000a58 == 7)) {
                ppppppuVar51 = (undefined ******)&PTR_PTR_11326be38;
                if (in_stack_00000a50[4] != (undefined ******)0x0) {
                  ppppppuVar51 = in_stack_00000a50[4];
                }
                if (*(int *)(ppppppuVar51 + 2) == 0) {
                  FUN_1086a4624(&stack0x00000740,ppppppppuVar42,&stack0x00000298,in_stack_00000a50,
                                ppuVar17 + 9);
                  pppppppuVar39 = (undefined *******)&stack0x000009f0;
                  func_0x0001086a9b44(pppppppuVar39,&stack0x00000740);
                  func_0x0001087eb804();
                }
              }
              goto LAB_1087eaaf0;
            }
            if (*(int *)(unaff_x20 + 0x21) != 0) goto LAB_1087eaa58;
            FUN_108864abc(&stack0x00000740,*ppppppppuVar42,unaff_x20 + 6);
            FUN_1087eb63c(&stack0x000008f0,&stack0x00000740);
            func_0x000107c28fcc(&stack0x00000740);
            ppppppppuVar43 = ppppppppuVar11;
code_r0x0001087eaa0c:
            uVar22 = (uint)ppppppppuVar43;
            uVar45 = (uint)ppuVar46;
            if ((in_stack_000009c0 & 1) != 0) {
              pppppppuVar39 = (undefined *******)&stack0x000002b0;
              FUN_1086dd1d8(pppppppuVar39,&stack0x00000918,*ppppppppuVar42 + 8);
              func_0x0001087eb814();
              goto LAB_1087eaa58;
            }
            func_0x0001087eb814();
          }
          func_0x00010867b9fc(&stack0x000009f0);
        }
        func_0x0001087eb7e8();
        func_0x0001087eb700(&stack0x00000a10);
      }
      func_0x0001086d73d8(&pppppppuStack_c8);
    }
    else {
      ppppppppuVar11 = (undefined ********)ppuVar17[0x1d];
      if (ppppppppuVar11 != (undefined ********)0x0) {
code_r0x0001087ea658:
        if ((((-1 < (long)unaff_x20[0x17]) &&
             (*(char *)(unaff_x20 + 0x29) == '\x01' && *(int *)(unaff_x20 + 0x28) == 4)) &&
            (pppppppuVar39 = unaff_x20[0x27], (undefined *******)pppppppuVar39[7] == unaff_x20[0x17]
            )) && ((*(int *)(pppppppuVar39 + 0xe) == 3 &&
                   ((*(byte *)((long)pppppppuVar39[0xc] + 0x11) >> 6 & 1) != 0)))) {
          (*(code *)(*ppppppppuVar11)[4])();
        }
      }
    }
    FUN_108864c04(*ppppppppuVar42,unaff_x20 + 6);
    func_0x0001087eb80c(*ppppppppuVar42);
LAB_1087eafd0:
    func_0x000107c31428(&stack0x000006d0);
    func_0x000107c31424(&stack0x000006d0);
    pppppppuVar39 = *unaff_x20;
    pppppppuVar41 = unaff_x20[1];
    iVar23 = (int)unaff_x21;
    if ((pppppppuVar39 == pppppppuVar41) ||
       (ppppppuVar51 = pppppppuVar41[-2], pppppppuVar41[-3] == ppppppuVar51)) {
      if (iVar23 != 7) {
        iVar18 = 7;
        goto LAB_1087eb018;
      }
    }
    else {
      iVar18 = *(int *)((long)ppppppuVar51 + -0x6c);
      if (iVar23 != iVar18) {
        *(int *)((long)ppppppuVar51 + -0x6c) = iVar23;
LAB_1087eb018:
        (*(code *)(*(undefined *******)ppuVar17[0x11])[6])(ppuVar17[0x11],iVar18,unaff_x21);
        pppppppuVar39 = *unaff_x20;
      }
    }
    pppppppuVar41 = (undefined *******)ppuVar17[0x1f];
    pppppppuVar29 = unaff_x20[1];
    if (pppppppuVar39 == pppppppuVar29) {
      ppppppuVar51 = pppppppuVar29[-2];
LAB_1087eb060:
      if ((*(char *)((long)ppppppuVar51 + -0x24) != '\x01' || *(int *)(ppppppuVar51 + -5) != 2) &&
         ((*(code *)(*pppppppuVar41)[3])(pppppppuVar41,unaff_x20 + 0xe), (int)pppppppuVar41 != 0)) {
        *(undefined4 *)(ppppppuVar51 + -5) = 2;
        *(undefined1 *)((long)ppppppuVar51 + -0x24) = 1;
      }
    }
    else {
      ppppppuVar51 = pppppppuVar29[-2];
      if ((pppppppuVar29[-3] == ppppppuVar51) || (*(int *)((long)ppppppuVar51 + -0x6c) == 7))
      goto LAB_1087eb060;
    }
    func_0x000107c28288(&stack0x000006a0);
    pppppppuVar39 = unaff_x20[1];
    puVar16 = &stack0x000006a0;
    FUN_1087b023c(puVar16);
    uStack_130 = (undefined **)0x0;
    pppppppuStack_128 = (undefined *******)0x0;
    FUN_1087e2a4c(ppuVar17 + 1,ppuVar17 + 0x11,unaff_x20 + 3,pppppppuVar39 + -3,puVar16,1,
                  &stack0x00000648);
    func_0x000107c279dc(&stack0x00000648);
    pppppppuVar39 = unaff_x20[1];
    if ((*unaff_x20 == pppppppuVar39) || (pppppppuVar39[-3] == pppppppuVar39[-2])) {
      uVar24 = 7;
    }
    else {
      uVar24 = *(undefined4 *)((long)pppppppuVar39[-2] + -0x6c);
    }
    (*(code *)(*(undefined *******)ppuVar17[0x11])[4])
              (ppuVar17[0x11],&stack0x00000298,uVar24,&stack0x00000740);
    pppppppuVar41 = (undefined *******)ppuVar17[0xf];
    func_0x000107c27994(&stack0x00000280,unaff_x20 + 6);
    FUN_10864094c(&stack0x00000298,&stack0x00000280,1,&stack0xfffffffffffffef0);
    pppppppuVar39 = unaff_x20[1];
    if ((*unaff_x20 == pppppppuVar39) || (pppppppuVar39[-3] == pppppppuVar39[-2])) {
      uVar24 = 7;
    }
    else {
      uVar24 = *(undefined4 *)((long)pppppppuVar39[-2] + -0x6c);
    }
    param_3 = (undefined ********)&stack0x00000298;
    (*(code *)(*pppppppuVar41)[4])(pppppppuVar41,param_3,uVar24);
    FUN_108798a4c(&stack0x00000298);
    func_0x00010863f788(&stack0xfffffffffffffef0);
    ppuVar17 = (undefined **)&stack0x00000280;
    pcStack_138 = (code *)0x1087eb1b0;
SUB_100100fec:
    pppppppuStack_158 = (undefined *******)ppuVar17;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    func_0x000100100fd4(&pppppppuStack_158);
    auVar60._8_8_ = param_3;
    auVar60._0_8_ = ppuVar17;
    return auVar60;
  case 0x87:
    goto LAB_1087eeffc;
  case 0x8b:
  case 0xda:
    pcStack_138 = (code *)0x1087d6c88;
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    func_0x0001088bad40();
    FUN_1088b93f0(ppuVar17 + 0x3f);
    auVar97._8_8_ = param_3;
    auVar97._0_8_ = ppuVar17 + 0x3f;
    return auVar97;
  case 0x8c:
LAB_1087eba00:
    ppppppuStack_d0 = (undefined ******)0x700000008;
LAB_1087eba08:
    func_0x0001087ed7e8();
    func_0x0001087edb1c();
  case 0xd4:
LAB_1087ebc4c:
    func_0x0001087eda50();
    func_0x0001087eda28();
    func_0x0001087ed8c4();
    func_0x0001087ed9a4();
LAB_1087ebc5c:
    func_0x0001087edb04();
    if ((bool)in_ZR) {
      auVar82._8_8_ = param_3;
      auVar82._0_8_ = ppppppppuVar11;
      return auVar82;
    }
    ___stack_chk_fail();
code_r0x0001087ebe60:
    if ((int)param_3 != 0) goto LAB_1087ebe70;
    do {
      func_0x0001087ed9ac();
LAB_1087ebe70:
      func_0x000104bd46a0();
    } while ((int)param_3 == 0);
    func_0x0001087eda60();
    func_0x0001087eda70();
    func_0x0001087edb50();
    uVar53 = 0x1087ebf6c;
    puVar3 = &uStack_130;
    unaff_x21 = ppppppppuVar11;
    break;
  case 0xb5:
    goto code_r0x0001087e51a0;
  case 0xb6:
    param_3 = (undefined ********)ppuVar17;
    FUN_1087c6770();
    unaff_x20 = (undefined ********)(ppuVar17 + 0x47);
    FUN_10877d4b8(unaff_x20,param_3);
    func_0x0001087f3680();
    func_0x0001087f37cc();
    ppppppppuVar25 = (undefined ********)(ulong)*(uint *)(ppuVar17 + 0x4e);
    ppppppppuVar43 = (undefined ********)&UNK_110a60998;
code_r0x0001087f2e58:
    if ((int)ppppppppuVar25 != 1) {
code_r0x0001087f2e60:
      if ((int)ppppppppuVar25 != 0) {
        func_0x00010563ab98();
LAB_1087f3380:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1087f3384);
        (*pcVar2)();
      }
      func_0x0001087f373c();
      func_0x0001087f365c();
code_r0x0001087f2e70:
      uVar53 = 0x1087f2e78;
      goto SUB_10002b838;
    }
    ppppppppuVar42 = (undefined ********)(ppuVar17 + 0x5e);
    func_0x00010877d53c(ppppppppuVar42,unaff_x20);
    iVar23 = *(int *)(ppuVar17 + 100);
    if (iVar23 == 4) {
      func_0x0001087f35cc();
      uVar8 = 2;
      if (extraout_x8_52 < 2) {
        uVar8 = extraout_x8_52 == 1;
      }
      func_0x0001087f385c(uVar8);
      FUN_1087f2a4c();
LAB_1087f3204:
      unaff_x21 = (undefined ********)0x0;
      func_0x0001087f3850();
      ppppppppuVar42 = (undefined ********)((ulong)ppppppppuVar42 & 0xffffffff);
      uVar35 = extraout_x8_54;
    }
    else {
      cVar6 = SBORROW4(iVar23,3);
      cVar7 = iVar23 + -3 < 0;
      bVar5 = iVar23 == 3;
      if (bVar5) {
        pppppppuVar39 = *(undefined ********)((long)ppuVar17[99] + 0x30);
        *(undefined ********)((long)ppuVar17[0x9d] + 0xb0) = pppppppuVar39;
        func_0x0001087f3700();
        if (bVar5) {
          uStack_130 = (undefined **)&UNK_10f4bbc99;
          pppppppuStack_128 = (undefined *******)0x0;
          pppppppuStack_118 = (undefined *******)0x0;
          func_0x0001087f3808();
          func_0x000107c3173c(ppuVar17 + 0x6f);
          func_0x0001087f376c();
          uVar53 = extraout_x11_22;
          ppppppppuVar32 = extraout_x10_08;
          if (cVar7 == cVar6) {
            uVar53 = extraout_x8_55;
            ppppppppuVar32 = (undefined ********)(ppuVar17 + 0x6f);
          }
          func_0x00010bd3f434(ppuVar17 + 0x72,ppppppppuVar32,uVar53,&UNK_10f4bbca9);
          ppppppppuVar32 = (undefined ********)ppuVar17[0x72];
          if (-1 < *(char *)((long)ppuVar17 + 0x3a7)) {
            ppppppppuVar32 = (undefined ********)(ppuVar17 + 0x72);
          }
          func_0x0001087f36f0(ppppppppuVar32);
          goto LAB_1087f3380;
        }
        pppppppuVar41 = (undefined *******)ppuVar17[0x2f];
        if (extraout_w8_23 == 0) {
          func_0x0001087f3754();
          FUN_108681dcc(ppuVar17 + 0x3f);
          FUN_108681dcc(&uStack_130,ppuVar17 + 0x3f);
          uVar24 = 1;
          ppppppuStack_f0 = (undefined ******)CONCAT71(ppppppuStack_f0._1_7_,1);
          if ((long)pppppppuVar39 - (long)pppppppuVar41 < 2) {
            if ((long)pppppppuVar39 - (long)pppppppuVar41 == 1) {
              uVar24 = 2;
            }
            else {
              uVar24 = 3;
              if (pppppppuVar39 != pppppppuVar41) {
                uVar24 = 4;
              }
            }
          }
          FUN_1087a47ec(uVar24,&uStack_130,(undefined *******)((long)ppuVar17[0x9c] + 0x60));
          pppppppuVar39 = (undefined *******)ppuVar17[0x9c];
          func_0x000107c29564(&uStack_130);
          func_0x0001087f37e8((*pppppppuVar39[0x15])[2]);
          func_0x0001087f373c();
          func_0x0001087f365c();
          uVar53 = 0x1087f309c;
          param_3 = ppppppppuVar19;
          goto SUB_10002b838;
        }
        bVar5 = (long)pppppppuVar39 - (long)pppppppuVar41 == 1;
        if ((long)pppppppuVar39 - (long)pppppppuVar41 < 2) {
          if (bVar5) {
            iVar23 = 2;
          }
          else {
            bVar5 = pppppppuVar39 == pppppppuVar41;
            iVar23 = 3;
            if (!bVar5) {
              iVar23 = 4;
            }
          }
        }
        else {
          iVar23 = 1;
        }
        func_0x0001087f3814();
        if (bVar5) {
          if (extraout_w8_24 == 10) {
LAB_1087f3034:
            if (iVar23 == 3) {
              iVar23 = 2;
            }
            else if (iVar23 == 2) {
              iVar23 = 1;
            }
            goto LAB_1087f31b0;
          }
LAB_1087f31c8:
          uVar8 = 2;
          if (iVar23 != 1) {
            uVar8 = iVar23 == 2;
          }
        }
        else {
          if (extraout_w9_07 == 8) {
            if ((extraout_w8_24 & 0xfffffffd) == 8) goto LAB_1087f3034;
            goto LAB_1087f31c8;
          }
LAB_1087f31b0:
          if (extraout_w9_07 == 5) {
            if (extraout_w8_24 != 10) goto LAB_1087f31c8;
          }
          else if (extraout_w9_07 != 8 || (extraout_w8_24 & 0xfffffffd) != 8) goto LAB_1087f31c8;
          uVar8 = 2;
          if (1 < iVar23 - 1U) {
            uVar8 = 0;
          }
        }
        func_0x0001087f385c(uVar8);
        FUN_1087f2a4c();
        goto LAB_1087f3204;
      }
      ppppppppuVar42 = (undefined ********)0x0;
      func_0x0001087f3850();
      unaff_x21 = (undefined ********)0x7;
      uVar35 = extraout_x8_53;
    }
    FUN_1088fcbd8(ppuVar17 + 0x5e);
    if (((ulong)ppppppppuVar42 & 1) != 0) {
      ppppppppuVar42 = *(undefined *********)((long)ppuVar17[0x9c] + 0x20);
      if (*(char *)((long)ppuVar17[0x9d] + 0xb8) == '\x01') {
        uStack_130 = (undefined **)CONCAT26(uStack_130._6_2_,0x100120099);
        func_0x0001087f37d4();
        func_0x0001087f383c();
        ppppppuStack_e8 = (undefined ******)((ulong)ppppppuStack_e8 & 0xffffffffffffff00);
        func_0x0001087f371c((*ppppppppuVar42)[5]);
        func_0x0001086cf1c0(&uStack_130);
      }
      else {
        func_0x0001087f36c8((*ppppppppuVar42)[2],ppppppppuVar42);
      }
    }
    *(undefined1 *)(ppuVar17 + 0x4f) = 0;
    *(undefined1 *)(ppuVar17 + 0x56) = 0;
    uStack_130 = (undefined **)CONCAT44((int)unaff_x21,5);
    func_0x0001087f37a8(&uStack_130);
    ppppppuStack_e0 = (undefined ******)((ulong)ppppppuStack_e0 & 0xffffffffffffff00);
    pppppppuStack_c8 = (undefined *******)((ulong)pppppppuStack_c8 & 0xffffffffffffff00);
    ppuVar17 = ppuVar17 + 2;
    uVar53 = 0x1087f32c4;
    param_3 = (undefined ********)&uStack_130;
    ppppppuStack_e8 = (undefined ******)((ulong)ppppppppuVar43 | uVar35);
    goto FUN_1087e46f8;
  case 0xb7:
  case 0xeb:
    pppppppuStack_128 = (undefined *******)((ulong)pppppppuStack_128 & 0xffffffffffffff00);
    ppppppuStack_e8 = (undefined ******)((ulong)ppppppuStack_e8 & 0xffffffffffffff00);
    param_3 = &pppppppuStack_128;
    FUN_1087a47ec(ppppppppuVar43,param_3,ppuVar17 + 0xc);
    ppppppppuVar11 = ppppppppuVar43;
  case 0xed:
    func_0x000107c29564(&pppppppuStack_128);
    FUN_1087eb610(ppuVar17 + 0x1bd);
    uStack_68 = 0;
    pppppppuStack_78 = (undefined *******)&PTR_FUN_110a609a8;
    pppppppuStack_70 = (undefined *******)0x0;
    func_0x0001087f365c();
    uVar53 = 0x1087f2aec;
    unaff_x20 = ppppppppuVar11;
    goto SUB_10002b838;
  case 0xb8:
    ppuVar17 = ppuVar17 + 2;
    param_3 = (undefined ********)&stack0xfffffffffffffef0;
    goto FUN_1087e46f8;
  case 0xba:
    goto code_r0x0001087f02a8;
  case 0xbb:
    ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x1b);
    ppppppppuVar11 = (undefined ********)(ppuVar17 + 0x1c);
    ppppppppuVar48 = (undefined ********)ppuVar17;
    func_0x0001087e86e0();
    pppppppuStack_128 = (undefined *******)ppppppppuVar48;
    do {
      if (((uint)(*ppppppppuVar30)[2] >> 5 & 1) != 0) {
        func_0x0001087e8ec0(*ppppppppuVar30,ppuVar17 + 0x14);
        __ZSt17rethrow_exceptionSt13exception_ptr(ppuVar17 + 0x14);
LAB_1087e7d84:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1087e7d88);
        (*pcVar2)();
      }
      func_0x0001087e8e58();
      func_0x0001087e88e0();
      func_0x0001087e88c8();
      pppppppuVar39 = (undefined *******)ppuVar17[0x19];
      bVar5 = ppuVar17[0x1a] <= pppppppuVar39;
      if (bVar5) {
        pppppppuVar41 = (undefined *******)ppuVar17[0x18];
        if (((long)pppppppuVar39 - (long)pppppppuVar41 >> 7) + 1U >> 0x39 != 0) {
          FUN_1087e4afc();
          goto LAB_1087e7d84;
        }
        func_0x0001087e8bfc();
        lVar38 = extraout_x9_03;
        if (bVar5) {
          lVar38 = extraout_x8_31;
        }
        if (lVar38 == 0) {
          lVar38 = 0;
          ppppppppuVar48 = (undefined ********)0x0;
        }
        else {
          FUN_1087e4b08();
          ppppppppuVar48 = param_3;
        }
        lVar36 = lVar38 + ((long)pppppppuVar39 - (long)pppppppuVar41);
        param_3 = (undefined ********)(ppuVar17 + 4);
        FUN_1087e5bcc(lVar36,param_3);
        ppppppppuVar42 = (undefined ********)ppuVar17[0x18];
        ppppppppuVar25 = (undefined ********)ppuVar17[0x19];
        pppppppuVar41 = (undefined *******)((long)ppppppppuVar42 + (lVar36 - (long)ppppppppuVar25));
        ppuVar17[0x1b] = (undefined *)pppppppuVar41;
        ppuVar17[0x1c] = (undefined *)pppppppuVar41;
        ppuVar17[0x14] = (undefined *)(ppuVar17 + 0x1a);
        ppuVar17[0x15] = (undefined *)ppppppppuVar11;
        ppuVar17[0x16] = (undefined *)ppppppppuVar30;
        pppppppuVar39 = pppppppuVar41;
        for (ppppppppuVar43 = ppppppppuVar42; ppppppppuVar43 != ppppppppuVar25;
            ppppppppuVar43 = ppppppppuVar43 + 0x10) {
          param_3 = ppppppppuVar43;
          FUN_1087e5bcc(pppppppuVar39,ppppppppuVar43);
          pppppppuVar39 = *ppppppppuVar30 + 0x10;
          *ppppppppuVar30 = pppppppuVar39;
        }
        *(undefined1 *)(ppuVar17 + 0x17) = 1;
        if (ppppppppuVar42 != ppppppppuVar25) {
          ppuVar17 = (undefined **)(ppppppppuVar42 + 2);
          uVar53 = 0x1087e7bb0;
          goto SUB_1087e49c4;
        }
        pppppppuVar39 = (undefined *******)(lVar36 + 0x80);
        FUN_1087e4ba4(ppuVar17 + 0x14);
        pppppppuVar29 = (undefined *******)ppuVar17[0x18];
        ppuVar17[0x18] = (undefined *)pppppppuVar41;
        ppuVar17[0x19] = (undefined *)pppppppuVar39;
        ppuVar17[0x1a] = (undefined *)(lVar38 + (long)ppppppppuVar48 * 0x80);
        if (pppppppuVar29 != (undefined *******)0x0) {
          __ZdlPv();
        }
      }
      else {
        FUN_1087e5bcc(pppppppuVar39,ppuVar17 + 4);
        pppppppuVar39 = pppppppuVar39 + 0x10;
      }
      pppppppuVar41 = (undefined *******)ppuVar17[0x21];
      ppuVar17[0x19] = (undefined *)pppppppuVar39;
      uVar22 = *(uint *)((long)pppppppuVar39 + -0x6c);
      ppppppppuVar42 = (undefined ********)(ulong)uVar22;
      func_0x0001087e8d1c();
      if (uVar22 != 0) {
LAB_1087e7cbc:
        ppppppppuVar30 = (undefined ********)(ppuVar17 + 3);
        unaff_x21 = (undefined ********)*ppppppppuVar30;
        goto LAB_1087e7cc4;
      }
      pppppppuVar41 = pppppppuVar41 + 1;
      ppuVar17[0x21] = (undefined *)pppppppuVar41;
      uVar8 = pppppppuVar41 == (undefined *******)ppuVar17[0x20];
      if ((bool)uVar8) goto LAB_1087e7cbc;
      pppppppuVar39 = (undefined *******)ppuVar17[0x1d];
      param_3 = (undefined ********)*pppppppuVar41;
      FUN_1087e4cec(ppppppppuVar11,pppppppuVar39,param_3,ppuVar17[0x1e],ppuVar17[0x1f]);
      *ppppppppuVar30 = *ppppppppuVar11;
      do {
        func_0x0001087e8700();
      } while (extraout_w10_21 != 0);
      func_0x0001087e8868(*ppppppppuVar30);
      if ((extraout_w8_19 >> 1 & 1) == 0) {
        *(undefined1 *)(ppuVar17 + 0x22) = 0;
        pppppppuVar41 = *ppppppppuVar30;
        pppppppuVar29 = (undefined *******)*pppppppuStack_128;
        if (pppppppuVar29 == (undefined *******)0x0) {
          func_0x000107c3a5c0();
          pppppppuVar29 = (undefined *******)*pppppppuVar39;
        }
        pppppppuVar31 = pppppppuVar41 + 2;
        do {
          if (*pppppppuVar31 == (undefined ******)0x0) {
            bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar31,0x10);
            if (bVar5) {
              *pppppppuVar31 = (undefined ******)0x1;
              ExclusiveMonitorsStatus();
            }
            func_0x0001087e9000();
            pppppppuVar31 = extraout_x8_33;
            uVar22 = extraout_w9_06;
            uVar35 = extraout_x10_04;
          }
          else {
            func_0x0001087e900c();
            pppppppuVar31 = extraout_x8_32;
            uVar22 = extraout_w9_05;
            uVar35 = extraout_x10_03;
          }
          if ((uVar35 & 1) != 0) {
            func_0x0001087e87a8();
            if ((bool)uVar8) {
              func_0x0001087e8788();
              func_0x0001087e86f0();
              func_0x0001087e86c4();
              pppppppuVar41[0x12] = (undefined ******)pppppppuVar39;
            }
            func_0x0001087e87b8();
            *(undefined ********)(extraout_x8_34 + 0x20) = pppppppuVar29;
            func_0x0001087e8778(pppppppuVar41[0x12]);
            pppppppuVar41[2] = (undefined ******)0x0;
            auVar73._8_8_ = param_3;
            auVar73._0_8_ = pppppppuVar39;
            return auVar73;
          }
        } while ((uVar22 >> 1 & 1) == 0);
      }
    } while( true );
  case 0xbd:
    ppuVar17[9] = (undefined *)ppppppppuVar25;
    ppppppppuVar32 = (undefined ********)ppuVar17;
    do {
      func_0x0001087efe6c();
    } while (extraout_w10_71 != 0);
    func_0x0001087eff40();
    if ((extraout_w8_22 >> 1 & 1) == 0) {
      *(undefined1 *)(ppuVar17 + 0xc) = 1;
      func_0x0001087effd0();
      pppppppuVar39 = *ppppppppuVar32;
      if (pppppppuVar39 == (undefined *******)0x0) {
        func_0x000107c3a5c0();
        pppppppuVar39 = *ppppppppuVar32;
      }
      ppppppppuVar30 = (undefined ********)(ppuVar17 + 0x1bb);
      do {
        if (*ppppppppuVar30 == (undefined *******)0x0) {
          func_0x0001087efeb8();
          ppppppppuVar30 = extraout_x8_49;
          uVar22 = extraout_w10_73;
          uVar35 = extraout_x11_21;
        }
        else {
          func_0x0001087f0064();
          ppppppppuVar30 = extraout_x8_48;
          uVar22 = extraout_w10_72;
          uVar35 = extraout_x11_20;
        }
        if ((uVar35 & 1) != 0) {
          func_0x0001087eff50();
          if ((bool)in_ZR) {
            func_0x0001087efee0();
            uVar8 = extraout_w8_02;
            if ((bool)in_CY) {
              uVar8 = extraout_w9_01;
            }
            func_0x0001087efea8();
            *(undefined1 *)ppppppppuVar32 = uVar8;
            func_0x0001087efe7c(0);
            ppuVar17[0x1cb] = (undefined *)ppppppppuVar32;
          }
          func_0x0001087eff28();
          *(undefined ********)(extraout_x8_50 + 0x20) = pppppppuVar39;
          func_0x0001087eff18(ppuVar17[0x1cb]);
          ppuVar17[0x1bb] = (undefined *)0x0;
          goto LAB_1087ef790;
        }
      } while ((uVar22 >> 1 & 1) == 0);
    }
    func_0x0001087f0070();
    param_3 = ppppppppuVar32;
    func_0x0001087f0020();
    func_0x0001087efec8();
    func_0x0001087efea0();
    func_0x0001087efef0();
    func_0x0001087efef8();
    func_0x0001087eff78();
    func_0x0001087eff10();
LAB_1087ef790:
    auVar87._8_8_ = param_3;
    auVar87._0_8_ = ppppppppuVar32;
    return auVar87;
  case 0xbe:
    uVar53 = 0x1087efa68;
    puVar3 = &uStack_130;
    ppppppppuVar9 = (undefined ********)(ppuVar17 + 9);
    break;
  case 0xbf:
    if (iVar23 != 0) goto LAB_1087e8184;
    goto LAB_1087e8210;
  case 200:
    goto code_r0x0001087e3678;
  case 0xc9:
    goto code_r0x000100567a50;
  case 0xd0:
FUN_1087e46f8:
    ppppppppuVar30 = (undefined ********)(ppuVar17 + 1);
    pppppppuStack_140 = (undefined *******)ppppppppuVar32;
    pcStack_138 = (code *)uVar53;
    FUN_1087e4844(*ppppppppuVar30,ppppppppuVar30,param_3);
    ppppppppuVar32 = (undefined ********)pppppppuStack_140;
code_r0x0001005f9520:
    uVar53 = 0;
    ppppppppuVar48 = (undefined ********)*ppppppppuVar30;
    ppppppppuVar11 = ppppppppuVar30;
    if (ppppppppuVar48 != (undefined ********)0x0) {
      ppppppppuVar43 = ppppppppuVar48 + 1;
      do {
        pppppppuVar39 = *ppppppppuVar43;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar43,0x10);
        if (bVar5) {
          *ppppppppuVar43 = pppppppuVar39 + -0x40000000;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((ulong)pppppppuVar39 >> 0x21 == 1) {
        uVar53 = 1;
        ppppppppuVar11 = ppppppppuVar48;
        pppppppuStack_160 = (undefined *******)ppppppppuVar42;
        pppppppuStack_158 = (undefined *******)unaff_x21;
        pppppppuStack_140 = (undefined *******)ppppppppuVar32;
        (*(code *)(*ppppppppuVar48)[2])(ppppppppuVar48,1,ppppppppuVar30);
        do {
          pppppppuVar39 = *ppppppppuVar43;
          cVar7 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(ppppppppuVar43,0x10);
          if (bVar5) {
            *ppppppppuVar43 = (undefined *******)((long)pppppppuVar39 + -1);
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if ((undefined *******)((long)pppppppuVar39 + -1) == (undefined *******)0x0) {
          (*(code *)(*ppppppppuVar48)[1])(ppppppppuVar48);
          ppppppppuVar11 = ppppppppuVar48;
        }
      }
    }
    *ppppppppuVar30 = (undefined *******)0x0;
    auVar66._8_8_ = uVar53;
    auVar66._0_8_ = ppppppppuVar11;
    return auVar66;
  case 0xd2:
    goto code_r0x0001087f029c;
  case 0xd3:
  case 0xee:
    do {
      func_0x0001087ea2c0();
    } while (extraout_w10_22 != 0);
    ppppppuStack_e8 = (undefined ******)unaff_x21[1];
    ppppppuStack_f0 = (undefined ******)*unaff_x21;
    if (unaff_x21[1] != (undefined *******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_23 != 0);
    }
    pppppppuStack_128 = &ppppppuStack_e0;
    uStack_130 = (undefined **)&ppppppuStack_d0;
    func_0x0001087ea2fc();
    func_0x0001087f0100(&PTR___tlv_bootstrap_11340e278);
    func_0x000104be3970(&ppppppuStack_f0);
    func_0x000107c29118(&ppppppuStack_e0);
    func_0x000107c28cc8(&ppppppuStack_d0);
    func_0x000107c289fc(&pppppppuStack_c0);
    func_0x000107c28800(&ppppppuStack_b0);
    func_0x000107c28ab8(&pppppppuStack_a0);
    func_0x000107c28ab4(&pppppppuStack_90);
    func_0x000107c29958(&ppppppuStack_b0);
    func_0x000107c2814c(&pppppppuStack_a0);
    ppppppppuVar30 = &pppppppuStack_90;
    func_0x000107c28808();
    ppppppppuVar11 = (undefined ********)(ppuVar17 + 2);
    pppppppuVar39 = (undefined *******)ppuVar17[1];
    if (pppppppuVar39 < *ppppppppuVar11) {
      pppppppuVar41 = pppppppuVar39 + 1;
      *pppppppuVar39 = (undefined ******)&PTR___tlv_bootstrap_11340e278;
    }
    else {
      func_0x0001087ea2e4((long)pppppppuVar39 - (long)*ppuVar17 >> 3);
      pppppppuVar39 = (undefined *******)*ppuVar17;
      pppppppuVar41 = (undefined *******)ppuVar17[1];
      pppppppuStack_70 = (undefined *******)ppppppppuVar11;
      if (ppppppppuVar30 != (undefined ********)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea2d0((long)pppppppuVar41 - (long)pppppppuVar39);
      *extraout_x8_35 = &PTR___tlv_bootstrap_11340e278;
      func_0x0001087ea2b0(extraout_x8_35 + 1);
      pppppppuVar41 = (undefined *******)ppuVar17[1];
      func_0x0001087ea320();
    }
    ppuVar17[1] = (undefined *)pppppppuVar41;
    pppppppuVar41 = *unaff_x20;
    pppppppuVar39 = (undefined *******)pppppppuVar41[5];
    ppppppuVar51 = pppppppuVar41[6];
    ppppppuVar15 = (undefined ******)0x50;
    __Znwm();
    pppppppuStack_90 = pppppppuVar39;
    ppppppuStack_88 = ppppppuVar51;
    if (ppppppuVar51 != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_24 != 0);
    }
    ppppppuVar54 = pppppppuVar41[8];
    ppppppuVar50 = pppppppuVar41[7];
    if (pppppppuVar41[8] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_25 != 0);
    }
    ppppppuVar56 = pppppppuVar41[0x20];
    ppppppuVar55 = pppppppuVar41[0x1f];
    if (pppppppuVar41[0x20] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_26 != 0);
    }
    ppppppuVar58 = pppppppuVar41[0x1e];
    ppppppuVar57 = pppppppuVar41[0x1d];
    if (pppppppuVar41[0x1e] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_27 != 0);
    }
    *(undefined4 *)(ppppppuVar15 + 1) = 2;
    *ppppppuVar15 = (undefined *****)&PTR_FUN_110a72668;
    ppppppuVar15[2] = (undefined *****)pppppppuVar39;
    ppppppuVar15[3] = (undefined *****)ppppppuVar51;
    pppppppuStack_a0 = (undefined *******)0x0;
    pppppppuStack_98 = (undefined *******)0x0;
    ppppppuVar15[5] = (undefined *****)ppppppuVar54;
    ppppppuVar15[4] = (undefined *****)ppppppuVar50;
    ppppppuVar15[7] = (undefined *****)ppppppuVar56;
    ppppppuVar15[6] = (undefined *****)ppppppuVar55;
    ppppppuStack_b0 = (undefined ******)0x0;
    pppppppuStack_a8 = (undefined *******)0x0;
    ppppppuVar15[9] = (undefined *****)ppppppuVar58;
    ppppppuVar15[8] = (undefined *****)ppppppuVar57;
    pppppppuStack_90 = (undefined *******)0x0;
    ppppppuStack_88 = (undefined ******)0x0;
    func_0x0001087ea3c8();
    func_0x000107c28858(&ppppppuStack_b0);
    func_0x0001087ea330();
    ppppppppuVar30 = &pppppppuStack_90;
    func_0x000107c28800();
    pppppppuVar39 = (undefined *******)ppuVar17[1];
    if (pppppppuVar39 < ppuVar17[2]) {
      pppppppuVar41 = pppppppuVar39 + 1;
      *pppppppuVar39 = ppppppuVar15;
    }
    else {
      func_0x0001087ea2e4((long)pppppppuVar39 - (long)*ppuVar17 >> 3);
      pppppppuVar39 = (undefined *******)*ppuVar17;
      pppppppuVar41 = (undefined *******)ppuVar17[1];
      pppppppuStack_70 = (undefined *******)ppppppppuVar11;
      if (ppppppppuVar30 != (undefined ********)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea2d0((long)pppppppuVar41 - (long)pppppppuVar39);
      *extraout_x8_36 = ppppppuVar15;
      func_0x0001087ea2b0(extraout_x8_36 + 1);
      pppppppuVar41 = (undefined *******)ppuVar17[1];
      func_0x0001087ea320();
    }
    ppuVar17[1] = (undefined *)pppppppuVar41;
    uVar8 = 9 < *(uint *)(param_2 + 0x14e);
    if (*(uint *)(param_2 + 0x14e) == 10) {
      ppppppuVar51 = (undefined ******)&PTR_PTR_11326be38;
      if (param_2[0x14d][4] != (undefined ******)0x0) {
        ppppppuVar51 = param_2[0x14d][4];
      }
      uVar8 = *(int *)(ppppppuVar51 + 2) != 1;
      if (*(int *)(ppppppuVar51 + 2) - 1U < 2) {
        pppppppuVar39 = *unaff_x20;
        ppppppuVar51 = pppppppuVar39[8];
        pppppppuStack_f8 = (undefined *******)pppppppuVar39[8];
        uStack_100 = (undefined ********)pppppppuVar39[7];
        uVar53 = 0x38;
        __Znwm(0x38);
        pppppppuStack_98 = pppppppuStack_f8;
        pppppppuStack_a0 = (undefined *******)uStack_100;
        if (ppppppuVar51 != (undefined ******)0x0) {
          do {
            func_0x0001087ea2c0();
          } while (extraout_w10_28 != 0);
        }
        func_0x000107c27994(&pppppppuStack_90,pppppppuVar39 + 2);
        param_3 = &pppppppuStack_a0;
        func_0x0001087f60bc(uVar53,param_3,&pppppppuStack_90);
        ppuVar17 = (undefined **)&pppppppuStack_90;
        pcStack_138 = (code *)0x1087e959c;
        goto SUB_100100fec;
      }
    }
    pppppppuVar39 = *unaff_x20;
    ppppppuVar15 = pppppppuVar39[0x20];
    pppppppuStack_f8 = (undefined *******)pppppppuVar39[0x20];
    uStack_100 = (undefined ********)pppppppuVar39[0x1f];
    ppppppuVar51 = (undefined ******)0x40;
    __Znwm();
    if (ppppppuVar15 != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_29 != 0);
    }
    ppppppuVar50 = pppppppuVar39[0x16];
    ppppppuVar15 = pppppppuVar39[0x15];
    if (pppppppuVar39[0x16] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_30 != 0);
    }
    ppppppuVar55 = pppppppuVar39[0x14];
    ppppppuVar54 = pppppppuVar39[0x13];
    if (pppppppuVar39[0x14] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_31 != 0);
    }
    *(undefined4 *)(ppppppuVar51 + 1) = 4;
    *ppppppuVar51 = (undefined *****)&PTR_FUN_110a726a8;
    pppppppuStack_90 = (undefined *******)0x0;
    ppppppuStack_88 = (undefined ******)0x0;
    ppppppuVar51[3] = (undefined *****)pppppppuStack_f8;
    ppppppuVar51[2] = (undefined *****)uStack_100;
    ppppppuVar51[5] = (undefined *****)ppppppuVar50;
    ppppppuVar51[4] = (undefined *****)ppppppuVar15;
    pppppppuStack_a0 = (undefined *******)0x0;
    pppppppuStack_98 = (undefined *******)0x0;
    ppppppuVar51[7] = (undefined *****)ppppppuVar55;
    ppppppuVar51[6] = (undefined *****)ppppppuVar54;
    ppppppuStack_b0 = (undefined ******)0x0;
    pppppppuStack_a8 = (undefined *******)0x0;
    func_0x000107c29958(&ppppppuStack_b0);
    func_0x000107c2814c(&pppppppuStack_a0);
    ppppppppuVar30 = &pppppppuStack_90;
    func_0x000107c28858();
    func_0x0001087ea3a8();
    if ((bool)uVar8) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      ppppppppuVar48 = ppppppppuVar30;
      func_0x0001087ea39c();
      if (ppppppppuVar48 == (undefined ********)0x0) {
        ppppppppuVar30 = (undefined ********)0x0;
      }
      else {
        func_0x0001087ea328();
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *pppppppuVar39 = ppppppuVar51;
      pppppppuVar39 = pppppppuVar39 + 1;
    }
    ppuVar17[1] = (undefined *)pppppppuVar39;
    pppppppuVar41 = *unaff_x20;
    func_0x0001087ea3bc();
    uVar8 = 1;
    ppppppuVar51 = pppppppuVar41[0x1a];
    pppppppuStack_f8 = (undefined *******)pppppppuVar41[0x1a];
    uStack_100 = (undefined ********)pppppppuVar41[0x19];
    pppppppuVar39 = (undefined *******)0xa0;
    __Znwm();
    func_0x0001087ea360();
    if (ppppppuVar51 != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_32 != 0);
    }
    pppppppuStack_98 = (undefined *******)pppppppuVar41[8];
    pppppppuStack_a0 = (undefined *******)pppppppuVar41[7];
    if (pppppppuVar41[8] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_33 != 0);
    }
    pppppppuStack_a8 = (undefined *******)pppppppuVar41[10];
    ppppppuStack_b0 = pppppppuVar41[9];
    if (pppppppuVar41[10] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_34 != 0);
    }
    ppppppuStack_88 = pppppppuVar41[0x1c];
    pppppppuStack_90 = (undefined *******)pppppppuVar41[0x1b];
    if (pppppppuVar41[0x1c] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_35 != 0);
    }
    pppppppuStack_a0 = (undefined *******)pppppppuVar41[0x5d];
    pppppppuStack_98 = (undefined *******)pppppppuVar41[0x5e];
    if (pppppppuStack_98 != (undefined *******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_36 != 0);
    }
    func_0x0001087ea2fc();
    FUN_1087eb83c(pppppppuVar39);
    func_0x000107c29118(&pppppppuStack_a0);
    func_0x0001087ea3d0();
    pppppppuVar41 = &ppppppuStack_b0;
    func_0x000107c29194();
    func_0x0001087ea330();
    func_0x0001087ea338();
    func_0x0001087ea3a8();
    if ((bool)uVar8) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      func_0x0001087ea39c();
      if (pppppppuVar41 != (undefined *******)0x0) {
        func_0x0001087ea328();
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *ppppppppuVar30 = pppppppuVar39;
      ppppppppuVar30 = ppppppppuVar30 + 1;
    }
    ppuVar17[1] = (undefined *)ppppppppuVar30;
    pppppppuVar41 = *unaff_x20;
    pppppppuVar29 = (undefined *******)0x98;
    __Znwm();
    uVar8 = 1;
    pppppppuVar39 = pppppppuVar29;
    FUN_1087eea3c();
    func_0x0001087ea3a8();
    if ((bool)uVar8) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      pppppppuVar29 = pppppppuVar39;
      func_0x0001087ea39c();
      if (pppppppuVar29 == (undefined *******)0x0) {
        pppppppuVar39 = (undefined *******)0x0;
      }
      else {
        func_0x0001087ea328();
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *pppppppuVar41 = (undefined ******)pppppppuVar29;
      pppppppuVar41 = pppppppuVar41 + 1;
    }
    ppuVar17[1] = (undefined *)pppppppuVar41;
    pppppppuVar41 = *unaff_x20;
    func_0x0001087ea3bc();
    pppppppuVar29 = *unaff_x20;
    uVar8 = 1;
    ppppppuVar51 = (undefined ******)0x11b0;
    if (pppppppuVar29[0x57] != (undefined ******)0x0) {
      ppppppuVar51 = pppppppuVar29[0x57];
    }
    ppppppuVar50 = pppppppuVar41[0x1a];
    pppppppuStack_f8 = (undefined *******)pppppppuVar41[0x1a];
    uStack_100 = (undefined ********)pppppppuVar41[0x19];
    ppppppuVar15 = (undefined ******)0xa0;
    __Znwm();
    func_0x0001087ea360();
    if (ppppppuVar50 != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_37 != 0);
    }
    pppppppuStack_98 = (undefined *******)pppppppuVar41[8];
    pppppppuStack_a0 = (undefined *******)pppppppuVar41[7];
    if (pppppppuVar41[8] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_38 != 0);
    }
    pppppppuStack_a8 = (undefined *******)pppppppuVar41[0x1c];
    ppppppuStack_b0 = pppppppuVar41[0x1b];
    if (pppppppuVar41[0x1c] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_39 != 0);
    }
    pppppppuStack_90 = (undefined *******)pppppppuVar29[0x25];
    ppppppuStack_88 = pppppppuVar29[0x26];
    if (ppppppuStack_88 != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_40 != 0);
    }
    pppppppuStack_98 = (undefined *******)pppppppuVar29[0x1e];
    pppppppuStack_a0 = (undefined *******)pppppppuVar29[0x1d];
    if (pppppppuVar29[0x1e] != (undefined ******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_41 != 0);
    }
    ppppppppuVar30 = &pppppppuStack_90;
    FUN_1087edc50(ppppppuVar15,ppppppppuVar30,&pppppppuStack_a0,&ppppppuStack_b0,pppppppuVar39,
                  &pppppppuStack_90,&pppppppuStack_a0,ppppppuVar51);
    func_0x000107c288a4(&pppppppuStack_a0);
    func_0x000107c28abc(&pppppppuStack_90);
    ppppppppuVar48 = (undefined ********)&ppppppuStack_b0;
    func_0x000107c28868();
    func_0x0001087ea330();
    func_0x0001087ea338();
    func_0x0001087ea3a8();
    if ((bool)uVar8) {
      func_0x0001087ea310();
      func_0x0001087ea2e4();
      func_0x0001087ea39c();
      ppppppppuVar30 = ppppppppuVar48;
      if (ppppppppuVar48 != (undefined ********)0x0) {
        func_0x0001087ea328();
        ppppppppuVar30 = ppppppppuVar48;
      }
      func_0x0001087ea288();
      func_0x0001087ea2f0();
    }
    else {
      *pppppppuVar39 = ppppppuVar15;
      pppppppuVar39 = pppppppuVar39 + 1;
    }
    ppuVar17[1] = (undefined *)pppppppuVar39;
    if (*ppppppppuVar42 == (undefined *******)ppuVar17[0x1ba]) {
      pppppppuVar39 = *unaff_x20;
      ppppppuVar15 = pppppppuVar39[0x1a];
      pppppppuStack_f8 = (undefined *******)pppppppuVar39[0x1a];
      uStack_100 = (undefined ********)pppppppuVar39[0x19];
      ppppppuVar51 = (undefined ******)0xb8;
      __Znwm();
      func_0x0001087ea360();
      if (ppppppuVar15 != (undefined ******)0x0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_46 != 0);
      }
      pppppppuStack_a0 = (undefined *******)pppppppuVar39[0x25];
      pppppppuStack_98 = (undefined *******)pppppppuVar39[0x26];
      if (pppppppuStack_98 != (undefined *******)0x0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_47 != 0);
      }
      pppppppuStack_a8 = (undefined *******)pppppppuVar39[8];
      ppppppuStack_b0 = pppppppuVar39[7];
      if (pppppppuVar39[8] != (undefined ******)0x0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_48 != 0);
      }
      ppppppuStack_88 = pppppppuVar39[0x1e];
      pppppppuStack_90 = (undefined *******)pppppppuVar39[0x1d];
      if (pppppppuVar39[0x1e] != (undefined ******)0x0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_49 != 0);
      }
      pppppppuStack_a0 = (undefined *******)pppppppuVar39[0x31];
      pppppppuStack_98 = (undefined *******)pppppppuVar39[0x32];
      if (pppppppuStack_98 != (undefined *******)0x0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_50 != 0);
      }
      ppppppuStack_b0 = pppppppuVar39[0x33];
      pppppppuStack_a8 = (undefined *******)pppppppuVar39[0x34];
      if (pppppppuStack_a8 != (undefined *******)0x0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_51 != 0);
      }
      pppppppuStack_c0 = (undefined *******)pppppppuVar39[0x5b];
      ppppppuStack_b8 = pppppppuVar39[0x5c];
      if (ppppppuStack_b8 != (undefined ******)0x0) {
        do {
          func_0x0001087ea2c0();
        } while (extraout_w10_52 != 0);
      }
      uStack_130 = (undefined **)&pppppppuStack_c0;
      func_0x0001087ea2fc();
      FUN_1087f1d38(ppppppuVar51);
      func_0x000107c297ac(&pppppppuStack_c0);
      func_0x000107c2995c(&ppppppuStack_b0);
      func_0x000107c289fc(&pppppppuStack_a0);
      func_0x0001087ea3c8();
      func_0x0001087ea404();
      ppppppppuVar32 = &pppppppuStack_a0;
      func_0x000107c28abc();
      func_0x0001087ea338();
      pppppppuVar39 = (undefined *******)ppuVar17[1];
      if (pppppppuVar39 < ppuVar17[2]) {
        pppppppuVar41 = pppppppuVar39 + 1;
        *pppppppuVar39 = ppppppuVar51;
      }
      else {
        func_0x0001087ea2e4((long)pppppppuVar39 - (long)*ppuVar17 >> 3);
        pppppppuVar39 = (undefined *******)*ppuVar17;
        pppppppuVar41 = (undefined *******)ppuVar17[1];
        ppppppppuVar30 = ppppppppuVar32;
        if (ppppppppuVar32 == (undefined ********)0x0) {
          ppppppppuVar32 = (undefined ********)0x0;
          pppppppuStack_70 = (undefined *******)ppppppppuVar11;
        }
        else {
          pppppppuStack_70 = (undefined *******)ppppppppuVar11;
          func_0x0001087ea328();
        }
        func_0x0001087ea2d0((long)pppppppuVar41 - (long)pppppppuVar39);
        *extraout_x8_37 = ppppppuVar51;
        func_0x0001087ea2b0(extraout_x8_37 + 1);
        pppppppuVar41 = (undefined *******)ppuVar17[1];
        func_0x0001087ea320();
      }
      ppuVar17[1] = (undefined *)pppppppuVar41;
      auVar78._8_8_ = ppppppppuVar30;
      auVar78._0_8_ = ppppppppuVar32;
      return auVar78;
    }
    ppppppppuVar30 = (undefined ********)*unaff_x20;
    param_3 = ppppppppuVar30;
    FUN_10883fdec(ppppppppuVar30 + 0x31,ppppppppuVar30);
    pppppppuVar39 = ppppppppuVar30[0x16];
    pppppppuStack_f8 = ppppppppuVar30[0x16];
    uStack_100 = (undefined ********)ppppppppuVar30[0x15];
    uVar53 = 0x58;
    __Znwm(0x58);
    func_0x0001087ea360();
    if (pppppppuVar39 != (undefined *******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_42 != 0);
    }
    pppppppuStack_98 = ppppppppuVar30[0x18];
    pppppppuStack_a0 = ppppppppuVar30[0x17];
    if (ppppppppuVar30[0x18] != (undefined *******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_43 != 0);
    }
    pppppppuStack_a8 = ppppppppuVar30[8];
    ppppppuStack_b0 = (undefined ******)ppppppppuVar30[7];
    if (ppppppppuVar30[8] != (undefined *******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_44 != 0);
    }
    ppppppuStack_88 = (undefined ******)ppppppppuVar30[0x1c];
    pppppppuStack_90 = ppppppppuVar30[0x1b];
    if (ppppppppuVar30[0x1c] != (undefined *******)0x0) {
      do {
        func_0x0001087ea2c0();
      } while (extraout_w10_45 != 0);
    }
    func_0x0001087ea2fc();
    func_0x0001087f3868(uVar53);
    func_0x0001087ea3d0();
    func_0x0001087ea404();
    ppppppppuVar30 = &pppppppuStack_a0;
    ppppppppuVar9 = ppppppppuVar32;
    ppppppppuVar32 = (undefined ********)0x1087e9a70;
    goto code_r0x000100568ba4;
  case 0xd5:
    goto code_r0x0001087e3aac;
  case 0xd8:
    goto LAB_1087f02b4;
  case 0xd9:
    goto code_r0x0001087f3e68;
  case 0xdc:
    ppppppppuVar32 = (undefined ********)ppuVar17;
    _memcpy();
    ppuVar17[1] = (undefined *)unaff_x21;
    pppppppuVar39 = *unaff_x20;
    unaff_x20[1] = pppppppuVar39;
    *unaff_x20 = (undefined *******)ppuVar17[1];
    ppuVar17[1] = (undefined *)pppppppuVar39;
    pppppppuVar39 = unaff_x20[1];
    unaff_x20[1] = (undefined *******)ppuVar17[2];
    ppuVar17[2] = (undefined *)pppppppuVar39;
    pppppppuVar39 = unaff_x20[2];
    unaff_x20[2] = (undefined *******)ppuVar17[3];
    ppuVar17[3] = (undefined *)pppppppuVar39;
    *ppuVar17 = ppuVar17[1];
    auVar76._8_8_ = param_3;
    auVar76._0_8_ = ppppppppuVar32;
    return auVar76;
  case 0xe5:
    FUN_1086a7738(ppuVar17 + 2);
    puVar4 = (undefined8 *)&stack0xfffffffffffffef0;
    ppppppppuVar30 = (undefined ********)ppuVar17;
    ppuVar17 = (undefined **)pppppppuStack_128;
    unaff_x20 = (undefined ********)uStack_130;
    ppppppppuVar32 = (undefined ********)pppppppuStack_118;
code_r0x000100568ba4:
    *(undefined *********)((long)puVar4 + -0x20) = unaff_x20;
    *(undefined ***)((long)puVar4 + -0x18) = ppuVar17;
    *(undefined *********)((long)puVar4 + -0x10) = ppppppppuVar9;
    *(undefined *********)((long)puVar4 + -8) = ppppppppuVar32;
    func_0x0001005528ec();
    if (ppppppppuVar30 != (undefined ********)0x0) {
      func_0x0001000df548();
    }
    auVar61._8_8_ = param_3;
    auVar61._0_8_ = ppuVar17;
    return auVar61;
  case 0xe6:
    goto code_r0x0001087f3e8c;
  case 0xe9:
    if (iVar23 == 0) goto LAB_1087e5288;
    func_0x0001087e8cac();
    FUN_108788618();
    func_0x0001087e8b9c();
    func_0x0001087e8b4c();
    func_0x0001087e8b44();
    func_0x0001087e8d90();
    func_0x0001087e8ab4();
    func_0x0001087e8920();
    func_0x0001087e8854();
    ___cxa_end_catch();
    func_0x0001087e8800();
    func_0x0001087e8830();
    ppppppppuVar11 = ppppppppuVar13;
code_r0x0001087e51a0:
    func_0x000107c33630(uStack_68);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      ppppppppuVar10 = ppppppppuVar11;
      if ((int)param_3 != 0) goto LAB_1087e528c;
      goto LAB_1087e5288;
    }
code_r0x0001087e8a58:
    auVar75._8_8_ = param_3;
    auVar75._0_8_ = ppppppppuVar11;
    return auVar75;
  case 0xec:
    goto code_r0x0001087ef268;
  case 0xf0:
    if (iVar23 != 0) {
      func_0x0001087e895c();
      goto LAB_1087e8184;
    }
LAB_1087e8210:
    do {
      do {
        func_0x0001087e8f44();
        func_0x000104bd46a0(ppppppppuVar42);
      } while ((int)param_3 == 0);
      func_0x0001087e8d34();
      func_0x0001087e88e0();
LAB_1087e8184:
      while( true ) {
        func_0x0001087e8bac();
        func_0x0001087e5bec();
        func_0x0001087e8920();
        func_0x0001087e8854();
        ___cxa_end_catch();
        func_0x0001087e8800();
        ppppppppuVar42 = (undefined ********)(ppuVar17 + 0x4e);
        FUN_1087e2704();
        func_0x0001087e8930();
        func_0x0001087e8830();
        func_0x000107c33630(pppppppuStack_70);
        if ((bool)in_ZR) goto code_r0x000100567f18;
        ___stack_chk_fail();
        if ((int)param_3 == 0) break;
        func_0x0001087e5c34(&stack0xfffffffffffffee0);
      }
    } while( true );
  }
code_r0x00010054ebfc:
  *(undefined *********)((long)puVar3 + -0x30) = ppppppppuVar42;
  *(undefined *********)((long)puVar3 + -0x28) = unaff_x21;
  *(undefined *********)((long)puVar3 + -0x20) = unaff_x20;
  *(undefined ***)((long)puVar3 + -0x18) = ppuVar17;
  *(undefined *********)((long)puVar3 + -0x10) = ppppppppuVar52;
  *(undefined8 *)((long)puVar3 + -8) = uVar53;
  pppppppuVar39 = *ppppppppuVar9;
  if (pppppppuVar39 != (undefined *******)0x0) {
    pppppppuVar41 = pppppppuVar39 + 1;
    do {
      ppppppuVar51 = *pppppppuVar41;
      cVar7 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar41,0x10);
      if (bVar5) {
        *pppppppuVar41 = (undefined ******)((long)ppppppuVar51 + -4);
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (((ulong)ppppppuVar51 & 0x1fffffffc) == 4) {
      param_3 = (undefined ********)0x0;
      (*(code *)(*pppppppuVar39)[2])(pppppppuVar39,0,ppppppppuVar9);
      do {
        ppppppuVar51 = *pppppppuVar41;
        cVar7 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(pppppppuVar41,0x10);
        if (bVar5) {
          *pppppppuVar41 = (undefined ******)((long)ppppppuVar51 + -1);
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if ((undefined ******)((long)ppppppuVar51 + -1) == (undefined ******)0x0) {
        (*(code *)(*pppppppuVar39)[1])(pppppppuVar39);
      }
    }
  }
  auVar62._8_8_ = param_3;
  auVar62._0_8_ = ppppppppuVar9;
  return auVar62;
  while (((uint)pppppppuStack_118 >> 1 & 1) == 0) {
LAB_1087e7cc4:
    pppppppuStack_118 = (undefined *******)0x0;
    ppppppppuVar11 = unaff_x21 + 2;
    func_0x0001087e87f4(ppppppppuVar11,&pppppppuStack_118);
    if ((int)ppppppppuVar11 != 0) {
      if (*(char *)(unaff_x21 + 0x16) == '\x01') {
        FUN_1087e4c84(unaff_x21 + 0x13);
      }
      pppppppuVar39 = (undefined *******)ppuVar17[0x18];
      unaff_x21[0x14] = (undefined *******)ppuVar17[0x19];
      unaff_x21[0x13] = pppppppuVar39;
      unaff_x21[0x15] = (undefined *******)ppuVar17[0x1a];
      ppuVar17[0x18] = (undefined *)0x0;
      ppuVar17[0x19] = (undefined *)0x0;
      ppuVar17[0x1a] = (undefined *)0x0;
      *(undefined1 *)(unaff_x21 + 0x16) = 1;
      unaff_x21[2] = (undefined *******)0x2;
      func_0x000107c31508(unaff_x21,ppppppppuVar30);
      break;
    }
  }
  pcStack_138 = (code *)0x1087e7d40;
  goto code_r0x0001005f9520;
LAB_1087f3ec0:
  if (*(int *)((long)ppuVar17[0x3c] + 0xa0) == 0x11) {
    unaff_x20 = (undefined ********)ppuVar17[0x2f];
    unaff_x21 = (undefined ********)((long)ppuVar17[0x3c] + 0x58);
    func_0x0001086ce5d8();
    ppppppppuVar42 = unaff_x21;
    FUN_1086bc264();
    ppppppppuVar32 = ppppppppuVar42;
    func_0x0001087f48a0();
    if (*(char *)(unaff_x20 + 0xb) == '\x01') {
      func_0x000107c29edc(&ppppppuStack_f0,unaff_x20 + 8);
      if (((ulong)ppppppppuVar32[1] & 1) != 0) {
        func_0x0001087f5f38();
      }
      func_0x0001087f5fb0(ppppppppuVar32 + 4);
      func_0x0001087f5dfc();
      func_0x000107c29edc(&ppppppuStack_f0,unaff_x20 + 5);
      if (((ulong)ppppppppuVar32[1] & 1) != 0) {
        func_0x0001087f5f38();
      }
      func_0x0001087f5fb0(ppppppppuVar32 + 3);
      func_0x0001087f5dfc();
LAB_1087f3fc8:
      func_0x000107c29edc(&ppppppuStack_f0,unaff_x20 + 1);
      if (((ulong)ppppppppuVar32[1] & 1) != 0) {
        func_0x0001087f5f38();
      }
      func_0x0001087f5fb0(ppppppppuVar32 + 2);
      func_0x0001087f5dfc();
      *(undefined1 *)(ppppppppuVar42 + 2) = 0;
      *(undefined1 *)((long)unaff_x21 + 0x34) = 1;
      ppppppuStack_f0 = (undefined ******)0x7;
    }
    else {
      func_0x0001087f607c(ppppppppuVar32[3]);
      lVar38 = extraout_x8_56;
      if (extraout_x8_56 < 0) {
        lVar38 = *(long *)(extraout_x9_04 + 8);
      }
      if (lVar38 != 0) {
        func_0x0001087f607c(ppppppppuVar32[4]);
        lVar38 = extraout_x8_57;
        if (extraout_x8_57 < 0) {
          lVar38 = *(long *)(extraout_x9_05 + 8);
        }
        if (lVar38 != 0) goto LAB_1087f3fc8;
      }
      ppppppuStack_f0 = (undefined ******)0x700000007;
    }
    func_0x0001087f5bf0();
    func_0x0001087f5edc();
  }
  else {
    ppppppuStack_f0 = (undefined ******)0x700000007;
    func_0x0001087f5bf0();
    func_0x0001087f5edc();
    ppppppppuVar9 = (undefined ********)pppppppuStack_118;
  }
LAB_1087f4014:
  func_0x0001087f5f28();
  uVar53 = 0x1087f4020;
  puVar3 = &uStack_130;
  goto code_r0x00010054ebfc;
code_r0x0001087f0a94:
  FUN_1087f0e28(&stack0xfffffffffffffef0);
  func_0x000107c27994(&stack0x000003a0,&PTR___tlv_bootstrap_11340e278);
  func_0x000107c27994(&stack0x000002d0,ppppppppuVar42);
  func_0x00010869fbb8(&stack0x000002f8);
  uVar53 = 0x1087f0b30;
  param_3 = (undefined ********)&DAT_10f4bdfe8;
  goto SUB_10002b838;
LAB_1087f3a70:
  ppppppppuVar42 = (undefined ********)param_2[0x147];
  pppppppuVar39 = param_2[0x14a];
  pppppppuVar41 = param_2[0x149];
  ppuVar17[0x23f] = (undefined *)param_2[0x14a];
  *ppppppppuVar9 = pppppppuVar41;
  if (pppppppuVar39 != (undefined *******)0x0) {
    do {
      func_0x0001087f5f88();
    } while (extraout_w10_75 != 0);
  }
  FUN_10865ecd8(ppuVar17 + 6,0x11b0);
  unaff_x21 = ppppppppuVar9;
code_r0x0001087f3aa8:
  func_0x000107c27994();
  func_0x00010869fbb8(ppuVar17 + 0xd,0x11e8);
  pppppppuVar39 = pppppppuRam0000000000001238;
  ppuVar17[0x18] = (undefined *)pppppppuRam0000000000001240;
  ppuVar17[0x17] = (undefined *)pppppppuVar39;
  *(undefined1 *)(ppuVar17 + 0x19) = uRam0000000000001248;
  FUN_10867be90(ppuVar17 + 0x1a,0x1364);
  uVar24 = uRam0000000000001268;
  *(undefined1 *)(ppuVar17 + 0x1e) = 0;
  *(undefined4 *)(ppuVar17 + 0x1d) = uVar24;
  *(undefined1 *)((long)ppuVar17 + 0xec) = uRam000000000000126c;
  *(undefined1 *)(ppuVar17 + 0x25) = 0;
  if (cRam00000000000012a8 == '\x01') {
    func_0x0001087f2c98(ppuVar17 + 0x1e,0x1270);
  }
  ppuVar17[0x26] = (undefined *)pppppppuRam00000000000012b0;
  ppppppppuVar32 = (undefined ********)(ppuVar17 + 0x27);
  func_0x000108687044(ppppppppuVar32,ppuVar17 + 0x2c);
  ppuVar17[0x2b] = ppuVar17[0x33];
  ppuVar17[0x2a] = ppuVar17[0x32];
  if ((undefined *******)ppuVar17[0x33] != (undefined *******)0x0) {
    do {
      func_0x0001087f5f88();
    } while (extraout_w10_76 != 0);
  }
  func_0x000107c28150();
  pppppppuVar41 = ppppppppuVar42[2];
  __ZNSt3__15mutex4lockEv(pppppppuVar41 + 1);
  ppppppuVar51 = pppppppuVar41[0xe];
  ppppppuStack_f0 = (undefined ******)FUN_1087f4b9c;
  ppppppuStack_e8 = (undefined ******)&PTR_FUN_110a72c88;
  pppppppuVar39 = (undefined *******)0x140;
  __Znwm();
  pppppppuVar29 = *unaff_x21;
  pppppppuVar39[1] = (undefined ******)unaff_x21[1];
  *pppppppuVar39 = (undefined ******)pppppppuVar29;
  *unaff_x21 = (undefined *******)0x0;
  unaff_x21[1] = (undefined *******)0x0;
  FUN_1086abe10(pppppppuVar39 + 2,ppuVar17 + 6);
  pppppppuVar39[0x23] = (undefined ******)ppuVar17[0x27];
  pppppppuVar29 = (undefined *******)ppuVar17[0x28];
  pppppppuVar49 = (undefined *******)ppuVar17[0x2b];
  pppppppuVar31 = (undefined *******)ppuVar17[0x2a];
  ppuVar17[0x27] = (undefined *)0x0;
  ppuVar17[0x28] = (undefined *)0x0;
  pppppppuVar39[0x25] = (undefined ******)ppuVar17[0x29];
  pppppppuVar39[0x24] = (undefined ******)pppppppuVar29;
  pppppppuVar39[0x27] = (undefined ******)pppppppuVar49;
  pppppppuVar39[0x26] = (undefined ******)pppppppuVar31;
  ppuVar17[0x29] = (undefined *)0x0;
  ppuVar17[0x2a] = (undefined *)0x0;
  ppuVar17[0x2b] = (undefined *)0x0;
  ppppppuStack_e0 = (undefined ******)pppppppuVar39;
  pppppppuStack_c0 = (undefined *******)ppppppppuVar32;
  func_0x000107c28154(pppppppuVar41 + 9,&ppppppuStack_f0);
  func_0x0001087f5ee4();
  __ZNSt3__15mutex6unlockEv(pppppppuVar41 + 1);
  pppppppuVar39 = pppppppuStack_118;
  if (ppppppuVar51 == (undefined ******)0x0) {
    pppppppuVar41 = *ppppppppuVar42;
    ppppppuStack_e8 = (undefined ******)ppppppppuVar42[3];
    ppppppuStack_f0 = (undefined ******)ppppppppuVar42[2];
    if (ppppppppuVar42[3] != (undefined *******)0x0) {
      do {
        func_0x0001087f5f88();
      } while (extraout_w10_77 != 0);
    }
    (*(code *)(*pppppppuVar41)[2])();
    func_0x000107c27e74(&ppppppuStack_f0);
  }
  FUN_1087f4288(unaff_x21);
  unaff_x20 = (undefined ********)pppppppuStack_128;
  pppppppuVar41 = (undefined *******)ppuVar17[0x34];
  *pppppppuStack_128 = (undefined ******)pppppppuVar41;
  if (pppppppuVar41 != (undefined *******)0x0) {
    do {
      func_0x0001087f5c14();
    } while (extraout_w10_78 != 0);
  }
  func_0x000107c314e0(ppuVar17 + 0x37,param_2[0x14d],(long)param_2[0x14f] * 1000000);
  param_3 = (undefined ********)(ppuVar17 + 0x37);
  FUN_1087f42c0(pppppppuVar39,unaff_x20,param_3);
  uVar53 = 0x1087f3c5c;
  puVar3 = &uStack_130;
  ppppppppuVar9 = (undefined ********)(ppuVar17 + 0x37);
  goto code_r0x00010054ebfc;
code_r0x0001087d6fe4:
  if (pppppppuVar39 == (undefined *******)0x0) goto code_r0x0001087d6fe8;
  goto code_r0x0001087d6d1c;
code_r0x0001087d6fe8:
  func_0x0001087d8470();
  do {
    func_0x0001087d81cc();
  } while (extraout_w10_06 != 0);
  func_0x0001087d83c4();
  unaff_x20 = (undefined ********)0x0;
  if ((extraout_w8_05 >> 1 & 1) == 0) {
    func_0x0001087d81a4(3);
    if (*ppppppppuVar11 == (undefined *******)0x0) {
      func_0x000107c3a5c0();
    }
    func_0x0001087d858c();
    plVar26 = extraout_x8_06;
    do {
      if (*plVar26 == 0) {
        func_0x0001087d8224();
        plVar26 = extraout_x8_08;
        uVar22 = extraout_w10_08;
        uVar35 = extraout_x11_04;
      }
      else {
        func_0x0001087d842c();
        plVar26 = extraout_x8_07;
        uVar22 = extraout_w10_07;
        uVar35 = extraout_x11_03;
      }
      ppppppppuVar48 = unaff_x20;
      if ((uVar35 & 1) != 0) goto code_r0x0001087d7170;
    } while ((uVar22 >> 1 & 1) == 0);
  }
code_r0x0001087d6cdc:
  func_0x0001087d8860();
  func_0x0001087d8840();
  func_0x0001087d85a0();
  func_0x0001087d88e4();
  param_3 = ppppppppuVar11;
code_r0x0001087d70f4:
  func_0x0001087d8544();
  goto code_r0x0001087d7414;
code_r0x0001087d6e84:
  ppppppppuVar32 = (undefined ********)(ppuVar17 + 0x241);
  func_0x000107c28870();
  uVar53 = 0x1087d6e9c;
  puVar3 = &uStack_130;
  ppppppppuVar9 = (undefined ********)(ppuVar17 + 0x241);
  unaff_x20 = (undefined ********)*ppppppppuVar32;
  unaff_x21 = (undefined ********)0x1208;
  goto code_r0x00010054ebfc;
}



/* Entry: 1087d8034; end: 1087d8163;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_1087d8034(long param_1)

{
  byte bVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar6;
  long unaff_x22;
  int unaff_w23;
  undefined8 *unaff_x24;
  long unaff_x26;
  
  puVar5 = (undefined1 *)(param_1 + 0xdc8);
  bVar1 = *(byte *)(param_1 + 0x1364);
  UNRECOVERED_JUMPTABLE = (code *)(ulong)bVar1;
  puVar6 = &UNK_10df58458;
  puVar4 = puVar5;
  puVar3 = (undefined1 *)(param_1 + 0x11f0);
  switch(bVar1) {
  case 0:
  case 0x39:
  case 0xa0:
    puVar4 = (undefined1 *)(param_1 + 0x1208);
    puVar3 = (undefined1 *)(param_1 + 0x12f0);
  case 1:
  case 2:
    puVar5 = puVar3;
    func_0x000107c27f9c(puVar4);
  case 3:
    func_0x000107c27f9c(puVar5);
    func_0x000108740e88(param_1 + 0xe90);
    goto code_r0x0001087d80ac;
  case 4:
    func_0x000107c27f9c();
code_r0x0001087d80ac:
    func_0x0001087d4ab4(param_1 + 0x10d0);
    goto code_r0x0001087d80dc;
  case 5:
    *(undefined8 *)(param_1 + 0x1358) = *(undefined8 *)(param_1 + 0x1350);
    func_0x000107c27f9c(param_1 + 0xe90);
    puVar5 = (undefined1 *)(param_1 + 0x10d0);
    break;
  case 6:
  case 8:
  case 9:
    break;
  case 7:
    func_0x000107c27f9c();
    puVar5 = (undefined1 *)(param_1 + 0xe90);
    break;
  case 10:
  case 0x3a:
  case 0x71:
  case 0x89:
  case 0xa1:
  case 0xbf:
  case 0xda:
  case 0xf7:
    *(undefined1 *)(param_1 + 0xdc9) = 0;
  case 0x83:
  case 0xd4:
    *(undefined8 *)(param_1 + 0xdd0) = 0;
    puRam00000000000010d8 = puVar5;
    return;
  case 0xd:
  case 0x18:
  case 0x3d:
  case 0x44:
  case 0x7c:
  case 0xc2:
  case 0xcd:
    return;
  case 0xf:
  case 0x1f:
  case 0x37:
  case 0x3f:
  case 0xb3:
  case 0xb9:
  case 0xc4:
  case 0xe0:
  case 0xf4:
    return;
  case 0x10:
  case 0x74:
  case 0xc5:
  case 0xfa:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__malloc_11034c5e8)(unaff_w23 * 0x18 + 0x10);
    return;
  case 0x11:
  case 0x75:
  case 0xb8:
  case 0xc6:
  case 0xf3:
    return;
  case 0x17:
  case 0x26:
  case 0x29:
  case 0x4e:
  case 0x7b:
  case 0x91:
  case 0xcc:
    bVar2 = (bool)ExclusiveMonitorPass(UNRECOVERED_JUMPTABLE,0x10);
    if (bVar2) {
      *(undefined **)UNRECOVERED_JUMPTABLE = &UNK_10df58458;
      ExclusiveMonitorsStatus();
      return;
    }
    return;
  case 0x1c:
    puRam00000000000010d8 = puVar5;
    return;
  case 0x1d:
  case 0x21:
  case 0x55:
  case 0x6a:
  case 0xaf:
  case 0xb5:
    puVar6 = &UNK_10df58459;
  case 0xc:
  case 0x13:
  case 0x14:
  case 0x3c:
  case 0x42:
  case 0x5a:
  case 0x77:
  case 0x78:
  case 0x95:
  case 0x99:
  case 0xac:
  case 0xc1:
  case 200:
  case 0xc9:
  case 0xe7:
    bVar2 = (bool)ExclusiveMonitorPass(UNRECOVERED_JUMPTABLE,0x10);
    if (!bVar2) {
      return;
    }
    *(undefined **)UNRECOVERED_JUMPTABLE = puVar6;
    ExclusiveMonitorsStatus();
    return;
  case 0x28:
    *(char *)(*(long *)(param_1 + 0x1280) + 1) = *(char *)(*(long *)(param_1 + 0x1280) + 1) + '\x01'
    ;
    *(undefined8 *)(param_1 + 0x1200) = 0;
    return;
  case 0x2a:
  case 0x32:
  case 0x35:
  case 0x4c:
  case 0x5d:
  case 0x5f:
  case 100:
  case 0x66:
  case 0x9c:
  case 0xa3:
  case 0xb4:
  case 0xe9:
    return;
  case 0x2b:
  case 0x53:
  case 0xad:
    return;
  case 0x2c:
  case 0x38:
  case 0x9d:
  case 0x9e:
  case 0x9f:
  case 0xf6:
    *puVar5 = (char)unaff_w23;
  case 0x68:
    *(undefined1 *)(param_1 + 0xdc9) = 0;
  case 0x81:
  case 0xd2:
    *(undefined8 *)(param_1 + 0xdd0) = 0;
    return;
  case 0x2e:
  case 0x4f:
  case 0x6d:
  case 0x9b:
  case 0xba:
  case 0xe1:
  case 0xec:
  case 0xed:
  case 0xf5:
  case 0xfc:
  case 0xfd:
    return;
  case 0x34:
  case 0x52:
  case 0x5c:
  case 99:
  case 0x72:
  case 0xa2:
  case 0xf8:
    puVar6 = *(undefined **)UNRECOVERED_JUMPTABLE;
  case 0x58:
  case 0x93:
    puVar6 = puVar6 + 4;
  case 0xdf:
    bVar2 = (bool)ExclusiveMonitorPass(UNRECOVERED_JUMPTABLE,0x10);
    if (!bVar2) {
      return;
    }
    *(undefined **)UNRECOVERED_JUMPTABLE = puVar6;
    ExclusiveMonitorsStatus();
    return;
  case 0x43:
    return;
  case 0x48:
  case 0x50:
  case 0x61:
  case 0x7e:
  case 0x8b:
  case 0x8c:
  case 0xa7:
  case 0xcf:
  case 0xdc:
code_r0x0001087d8144:
    func_0x0001087d8400();
  case 0x1a:
  case 0x46:
  case 0x7f:
  case 0xa8:
  case 0xd0:
  case 0xdd:
  case 0x62:
  case 0xa4:
  case 0xde:
  case 0xb:
  case 0x3b:
  case 0xc0:
  case 0x40:
  case 0x51:
  case 0x8d:
  case 0x49:
  case 0x1b:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  case 0x5b:
  case 0x96:
  case 0xf1:
    return;
  case 0x69:
  case 0xe2:
  case 0xfe:
    return;
  case 0x6b:
    return;
  case 0x6e:
  case 0x9a:
    puVar5 = (undefined1 *)0x11340e000;
  case 0x47:
                    /* WARNING: Could not recover jumptable at 0x0001087d8260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(puVar5 + 0x278))();
    return;
  case 0x70:
  case 0xbe:
  case 0xf2:
    *(byte *)(param_1 + unaff_x26) = bVar1;
    UNRECOVERED_JUMPTABLE = (code *)*unaff_x24;
  case 0x82:
  case 0x86:
  case 0xd3:
  case 0xd7:
  case 0x23:
  case 0x8e:
                    /* WARNING: Could not recover jumptable at 0x0001087d81b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case 0x73:
  case 0x80:
  case 0x87:
  case 0x88:
  case 0x8a:
  case 0xa5:
  case 0xa6:
  case 0xaa:
  case 0xab:
  case 0xb2:
  case 0xb6:
  case 0xd1:
  case 0xd8:
  case 0xd9:
  case 0xdb:
  case 0xf9:
    UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + (long)UNRECOVERED_JUMPTABLE * 0xdf58458);
    *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10) = 0;
    *(long *)(UNRECOVERED_JUMPTABLE + 0x18) = param_1;
  default:
    *(undefined1 **)(UNRECOVERED_JUMPTABLE + 0x20) = (undefined1 *)(param_1 + 0x11f0);
  case 0xee:
    UNRECOVERED_JUMPTABLE = pcRam0000000000001160;
  case 0x45:
  case 0xbc:
  case 0xf0:
  case 0xff:
    puVar6 = (undefined *)(ulong)(byte)UNRECOVERED_JUMPTABLE[1];
  case 0x25:
  case 0x4a:
  case 0x57:
  case 0x90:
  case 0xb1:
  case 0xe4:
    puVar6 = (undefined *)(ulong)((int)puVar6 + 1);
  case 0x12:
  case 0x1e:
  case 0x22:
  case 0x24:
  case 0x2d:
  case 0x2f:
  case 0x33:
  case 0x36:
  case 0x4b:
  case 0x56:
  case 0x60:
  case 0x67:
  case 0x6f:
  case 0x76:
  case 0x8f:
  case 0x98:
  case 0xb0:
  case 0xb7:
  case 0xbd:
  case 199:
  case 0xe6:
  case 0xe8:
    UNRECOVERED_JUMPTABLE[1] = SUB81(puVar6,0);
    UNRECOVERED_JUMPTABLE = (code *)0x10e0;
  case 0x16:
  case 0x19:
  case 0x30:
  case 0x7a:
  case 0x7d:
  case 0xcb:
  case 0xce:
    *(undefined8 *)UNRECOVERED_JUMPTABLE = 0;
    return;
  case 0x84:
  case 0xd5:
    return;
  case 0x85:
  case 0xd6:
    *(undefined1 **)(unaff_x22 + 8) = puVar5;
    return;
  case 0x97:
  case 0xe5:
    return;
  case 0xa9:
    goto code_r0x0001087d8140;
  case 0xea:
    return;
  }
  func_0x000107c27f9c(puVar5);
code_r0x0001087d80dc:
  func_0x0001087d4c90(*(undefined8 *)(param_1 + 0x10c0));
  func_0x000107c29778(param_1 + 0x1288);
  FUN_1087d30c0(param_1 + 0x1278);
  func_0x000104be1594(param_1 + 0x1238);
  func_0x0001087d30e0(param_1 + 0xa28);
  func_0x000107c27f9c(param_1 + 0x1328);
  func_0x000107c27f9c(param_1 + 0x1308);
  func_0x0001087d8c9c();
  func_0x000107c27f9c(param_1 + 0x12d8);
  puVar5 = (undefined1 *)(param_1 + 0x1268);
code_r0x0001087d8140:
  func_0x0001087d3140(puVar5);
  goto code_r0x0001087d8144;
}



/* Entry: 1087d8164; end: 1087d8e63;  */

void FUN_1087d8164(void)

{
  int unaff_w23;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__malloc_11034c5e8)(unaff_w23 * 0x18 + 0x10);
  return;
}



/* Entry: 1087d8e64; end: 1087d947b;  */

void FUN_1087d8e64(undefined8 param_1,byte *param_2,undefined8 *param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  byte *pbVar9;
  uint extraout_w8;
  long lVar10;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong uVar11;
  ulong extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  uint extraout_w10_07;
  uint extraout_w10_08;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar12;
  long lVar13;
  undefined8 uStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined1 auStack_a90 [2520];
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a0;
  undefined **ppuStack_98;
  undefined8 *puStack_90;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = (undefined8 *)0xc0;
  puVar5 = param_3;
  __Znwm();
  *puVar4 = FUN_1087da7d4;
  puVar4[1] = FUN_1087da954;
  puVar4[0x16] = param_3;
  func_0x0001087a93b4(puVar4 + 2);
  FUN_1087a9334(param_1,puVar4 + 2);
  uVar3 = param_3[0x16] == param_3[0x17];
  if ((bool)uVar3) {
    uStack_aa0 = (code *)0x1a;
    func_0x0001087daae4();
    pbVar9 = (byte *)&uStack_aa0;
    func_0x0001087a3420(pbVar9);
  }
  else {
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    puVar5[1] = 0;
    puVar5[2] = 0;
    *puVar5 = &PTR_FUN_110a71d68;
    puVar7 = puVar5 + 3;
    *puVar7 = &PTR_DAT_110a71e38;
    plVar8 = puVar5 + 4;
    *plVar8 = 0;
    uStack_aa0 = (code *)0x0;
    func_0x000107c27f9c(&uStack_aa0);
    puVar5[5] = 0;
    uStack_aa0 = (code *)0x0;
    func_0x000107c27f98(&uStack_aa0);
    FUN_1087d9a18(&uStack_aa0);
    ppuStack_98 = (undefined **)uStack_a98;
    pcStack_a0 = uStack_aa0;
    uStack_aa8 = 0;
    uStack_aa0 = (code *)0x0;
    uStack_a98 = 0;
    uStack_ab0 = 0;
    func_0x000107c27f98(&uStack_ab0);
    func_0x0001087dacd8();
    func_0x000107c27fec(&uStack_aa0);
    func_0x000107c288b0(plVar8,&pcStack_a0);
    func_0x000107c2887c(puVar5 + 5,(ulong)&pcStack_a0 | 8);
    func_0x000107c27f98((ulong)&pcStack_a0 | 8);
    func_0x000107c27f9c(&pcStack_a0);
    *puVar7 = &PTR_FUN_110a71db8;
    puVar4[0xc] = puVar7;
    puVar4[0xd] = puVar5;
    lVar10 = *plVar8;
    puVar4[0xe] = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x0001087da998();
      } while (extraout_w10 != 0);
    }
    puVar5 = *(undefined8 **)(param_2 + 0x10);
    uStack_a98 = *(undefined8 *)(param_2 + 0x28);
    uStack_aa0 = *(code **)(param_2 + 0x20);
    if (*(long *)(param_2 + 0x28) != 0) {
      do {
        func_0x0001087dac74();
      } while (extraout_w10_00 != 0);
    }
    puVar6 = auStack_a90;
    FUN_108792860(puVar6,param_3 + 4);
    uStack_b8 = puVar4[0xc];
    lStack_b0 = puVar4[0xd];
    if (lStack_b0 != 0) {
      do {
        func_0x0001087dac74();
      } while (extraout_w10_01 != 0);
    }
    func_0x000107c28150();
    lVar10 = puVar5[2];
    __ZNSt3__15mutex4lockEv(lVar10 + 8);
    lVar13 = *(long *)(lVar10 + 0x70);
    pcStack_a0 = FUN_1087d9bcc;
    ppuStack_98 = &PTR_FUN_110a71e90;
    puVar7 = (undefined8 *)0x9f8;
    __Znwm();
    puVar7[1] = uStack_a98;
    *puVar7 = uStack_aa0;
    uStack_aa0 = (code *)0x0;
    uStack_a98 = 0;
    FUN_1086ac094(puVar7 + 2,auStack_a90);
    puVar7[0x13e] = lStack_b0;
    puVar7[0x13d] = uStack_b8;
    uStack_b8 = 0;
    lStack_b0 = 0;
    puStack_90 = puVar7;
    puStack_70 = puVar6;
    func_0x000107c28154(lVar10 + 0x48,&pcStack_a0);
    func_0x0001087dac44();
    __ZNSt3__15mutex6unlockEv(lVar10 + 8);
    if (lVar13 == 0) {
      plVar8 = (long *)*puVar5;
      ppuStack_98 = (undefined **)puVar5[3];
      pcStack_a0 = (code *)puVar5[2];
      if (puVar5[3] != 0) {
        do {
          func_0x0001087dac74();
        } while (extraout_w10_02 != 0);
      }
      (**(code **)(*plVar8 + 0x10))();
      func_0x000107c27e74(&pcStack_a0);
    }
    plVar8 = puVar4 + 0x10;
    FUN_1087d947c(&uStack_aa0);
    *plVar8 = puVar4[0xe];
    if (puVar4[0xe] != 0) {
      do {
        func_0x0001087da998();
      } while (extraout_w10_03 != 0);
    }
    func_0x000107c314e0(puVar4 + 0x11,*(undefined8 *)(param_2 + 0x30),
                        *(long *)(param_2 + 0x40) * 1000000);
    param_2 = (byte *)(puVar4 + 0xf);
    FUN_1087d94ac(param_2,plVar8,puVar4 + 0x11);
    func_0x000107c27f9c(puVar4 + 0x11);
    func_0x000107c27f9c(plVar8);
    puVar4[0x14] = *(long *)param_2;
    if (*(long *)param_2 != 0) {
      do {
        func_0x0001087da998();
      } while (extraout_w10_04 != 0);
    }
    lVar10 = *param_4;
    puVar4[0x15] = lVar10;
    if (lVar10 != 0) {
      do {
        func_0x0001087da998();
      } while (extraout_w10_05 != 0);
    }
    func_0x000107c278b8(puVar4 + 9,&UNK_10f4bb8a7);
    pbVar9 = (byte *)(puVar4 + 0x14);
    puVar5 = puVar4 + 0x15;
    FUN_1087d9690(puVar4 + 0x13,pbVar9,puVar5,puVar4 + 9);
    puVar4[0x12] = puVar4[0x13];
    do {
      func_0x0001087da998();
    } while (extraout_w10_06 != 0);
    func_0x0001087dab08(puVar4[0x12]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x17) = 0;
      lVar10 = puVar4[0x12];
      func_0x0001087da9ec();
      lVar13 = *(long *)pbVar9;
      if (lVar13 == 0) {
        func_0x000107c3a5c0();
        lVar13 = *(long *)pbVar9;
      }
      plVar8 = (long *)(lVar10 + 0x10);
      do {
        if (*plVar8 == 0) {
          func_0x0001087daa20();
          plVar8 = extraout_x8_00;
          uVar2 = extraout_w10_08;
          uVar12 = extraout_w11_00;
        }
        else {
          func_0x0001087dab88();
          plVar8 = extraout_x8;
          uVar2 = extraout_w10_07;
          uVar12 = extraout_w11;
        }
        if ((uVar12 & 1) != 0) {
          param_2 = *(byte **)(lVar10 + 0x90);
          uVar11 = (ulong)param_2[1];
          uVar3 = param_2[1] == *param_2;
          if ((bool)uVar3) {
            func_0x0001087daa10();
            func_0x0001087da9a8();
            func_0x0001087da9d8();
            *(byte **)(param_2 + 8) = pbVar9;
            *(byte **)(lVar10 + 0x90) = pbVar9;
            uVar11 = extraout_x8_01;
            param_2 = pbVar9;
          }
          uVar11 = uVar11 & 0xffffffff;
          pbVar1 = param_2 + uVar11 * 0x18 + 0x10;
          pbVar1[0] = 0;
          pbVar1[1] = 0;
          pbVar1[2] = 0;
          pbVar1[3] = 0;
          pbVar1[4] = 0;
          pbVar1[5] = 0;
          pbVar1[6] = 0;
          pbVar1[7] = 0;
          *(undefined8 **)(param_2 + uVar11 * 0x18 + 0x18) = puVar4;
          *(long *)(param_2 + uVar11 * 0x18 + 0x20) = lVar13;
          func_0x0001087daa60(*(undefined8 *)(lVar10 + 0x90));
          *(undefined8 *)(lVar10 + 0x10) = 0;
          goto LAB_1087d92b0;
        }
      } while ((uVar2 >> 1 & 1) == 0);
    }
    puVar5 = puVar4 + 0x12;
    FUN_1087d987c();
    FUN_1087d98ec(puVar4 + 4);
    func_0x0001087dac3c();
    func_0x0001087dabc8();
    func_0x0001087dabb8();
    func_0x0001087dabc0();
    func_0x0001087dabe0();
    if (*(int *)(puVar4 + 4) == 0) {
      uVar3 = *(char *)(puVar4 + 8) == '\x01';
      if ((bool)uVar3) {
        FUN_108685044(&uStack_aa0,puVar4[0x16] + 0x118);
        lVar10 = puVar4[0x16];
        func_0x0001087dac84();
        puVar5 = &uStack_aa0;
        FUN_1087c3e94(lVar10 + 0x20);
        func_0x000104bee3a8(&uStack_aa0);
      }
      uStack_aa0 = (code *)0x1a;
    }
    else {
      uStack_aa0 = (code *)CONCAT44(*(int *)(puVar4 + 4),0x1a);
    }
    func_0x0001087daae4();
    func_0x0001087a3420(&uStack_aa0);
    func_0x0001087dac6c();
    pbVar9 = param_2;
    func_0x000107c27f9c(param_2);
    func_0x0001087dabd8();
    func_0x0001087dabd0();
  }
  while( true ) {
    func_0x0001087daa78();
    func_0x0001087dab54();
LAB_1087d92b0:
    func_0x0001087dad58(uStack_68);
    if ((bool)uVar3) break;
    ___stack_chk_fail();
    if ((int)puVar5 == 0) {
      do {
        __Unwind_Resume(pbVar9);
        func_0x000104bd46a0();
      } while ((int)puVar5 == 0);
      func_0x000107c27e74(&pcStack_a0);
      pbVar9 = (byte *)&uStack_aa0;
      FUN_1087d947c();
    }
    else {
      func_0x000104bee3a8(&uStack_aa0);
      func_0x0001087dac6c();
      pbVar9 = param_2;
      func_0x000107c27f9c();
    }
    func_0x0001087dabd8();
    func_0x0001087dabd0();
    func_0x0001087dab64();
    func_0x0001087daacc();
    ___cxa_end_catch();
  }
  return;
}



/* Entry: 1087d947c; end: 1087d94ab;  */

undefined8 FUN_1087d947c(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_1087d9ba4(param_1 + 0x9e8);
  func_0x0001086a931c(param_1 + 0x10);
  func_0x0001005528ec();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1087d94ac; end: 1087d968f;  */

void FUN_1087d94ac(long *param_1,long *param_2)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087daab0(FUN_1087da498);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087d9f60(lVar2 + 0x10);
  func_0x0001087dab7c();
  lVar4 = *param_1;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  func_0x000107c278b8(plVar3,&UNK_10f4afc82);
  func_0x0001087dad18();
  FUN_1087d9cf0();
  func_0x0001087dab6c();
  do {
    func_0x0001087da998();
  } while (extraout_w10_03 != 0);
  func_0x0001087daa30();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    lVar4 = *(long *)(lVar2 + 0x48);
    func_0x0001087da9ec();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x0001087daa20();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087dab88();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087daa80();
        if ((bool)in_ZR) {
          func_0x0001087daa10();
          func_0x0001087da9a8();
          func_0x0001087da9d8();
          func_0x0001087dabe8();
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087daa90();
        *(long *)(extraout_x8_02 + 0x20) = lVar7;
        func_0x0001087daa60(*(undefined8 *)(lVar4 + 0x90));
        *(undefined8 *)(lVar4 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087dab5c();
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daac4();
  func_0x0001087daaa0();
  func_0x0001087daadc();
  func_0x0001087daad4();
  func_0x0001087daa78();
  func_0x0001087daaa8();
  func_0x0001087dab14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087d9690; end: 1087d987b;  */

void FUN_1087d9690(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long lVar2;
  long *plVar3;
  uint extraout_w8;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar6;
  long lVar7;
  
  lVar2 = 0x70;
  __Znwm();
  func_0x0001087daab0(FUN_1087da724);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10 != 0);
  }
  lVar4 = *param_3;
  *(long *)(lVar2 + 0x40) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_00 != 0);
  }
  FUN_1087d9f60(lVar2 + 0x10);
  FUN_1087d9c78(param_1,*(undefined8 *)(lVar2 + 0x10));
  lVar4 = *param_2;
  *(long *)(lVar2 + 0x58) = lVar4;
  if (lVar4 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_01 != 0);
  }
  *(long *)(lVar2 + 0x60) = *(long *)(lVar2 + 0x40);
  if (*(long *)(lVar2 + 0x40) != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_02 != 0);
  }
  plVar3 = (long *)(lVar2 + 0x20);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar3,param_4);
  func_0x0001087dad18();
  FUN_1087da04c();
  func_0x0001087dab6c();
  do {
    func_0x0001087da998();
  } while (extraout_w10_03 != 0);
  func_0x0001087daa30();
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x68) = 0;
    lVar4 = *(long *)(lVar2 + 0x48);
    func_0x0001087da9ec();
    lVar7 = *plVar3;
    if (lVar7 == 0) {
      func_0x000107c3a5c0();
      lVar7 = *plVar3;
    }
    plVar5 = (long *)(lVar4 + 0x10);
    do {
      if (*plVar5 == 0) {
        func_0x0001087daa20();
        plVar5 = extraout_x8_01;
        uVar1 = extraout_w10_05;
        uVar6 = extraout_w11_00;
      }
      else {
        func_0x0001087dab88();
        plVar5 = extraout_x8_00;
        uVar1 = extraout_w10_04;
        uVar6 = extraout_w11;
      }
      if ((uVar6 & 1) != 0) {
        func_0x0001087daa80();
        if ((bool)in_ZR) {
          func_0x0001087daa10();
          func_0x0001087da9a8();
          func_0x0001087da9d8();
          func_0x0001087dabe8();
          *(long **)(lVar4 + 0x90) = plVar3;
        }
        func_0x0001087daa90();
        *(long *)(extraout_x8_02 + 0x20) = lVar7;
        func_0x0001087daa60(*(undefined8 *)(lVar4 + 0x90));
        *(undefined8 *)(lVar4 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087dab5c();
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daac4();
  func_0x0001087daaa0();
  func_0x0001087daadc();
  func_0x0001087daad4();
  func_0x0001087daa78();
  func_0x0001087daaa8();
  func_0x0001087dab14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(lVar2);
  return;
}



/* Entry: 1087d987c; end: 1087d98d3;  */

long FUN_1087d987c(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1087d98c4);
  (*pcVar1)();
}



/* Entry: 1087d98d4; end: 1087d98d7;  */

undefined8 * FUN_1087d98d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71d28;
  func_0x000107c28868(param_1 + 6);
  func_0x000107c286f4(param_1 + 4);
  func_0x000107c2814c(param_1 + 2);
  return param_1;
}



/* Entry: 1087d98d8; end: 1087d98eb;  */

void FUN_1087d98d8(void)

{
  func_0x0001087d9914();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d98ec; end: 1087d9957;  */

undefined4 * FUN_1087d98ec(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c28aa0(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1087d9958; end: 1087d995b;  */

void FUN_1087d9958(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71d68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087d995c; end: 1087d996f;  */

void FUN_1087d995c(void)

{
  FUN_1087d9b94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d9970; end: 1087d997f;  */

void FUN_1087d9970(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001087d9978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1087d9980; end: 1087d99b7;  */

void FUN_1087d9980(void)

{
  func_0x0001087daca8();
  return;
}



/* Entry: 1087d99b8; end: 1087d9a17;  */

void FUN_1087d99b8(long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 auStack_48 [2];
  undefined1 auStack_40 [32];
  
  auStack_48[0] = param_2;
  func_0x000107c28aa0(auStack_40,param_3);
  FUN_1087d9af4(*(undefined8 *)(param_1 + 0x10),(undefined8 *)(param_1 + 0x10),auStack_48);
  func_0x000107c28754(auStack_40);
  return;
}



/* Entry: 1087d9a18; end: 1087d9a73;  */

void FUN_1087d9a18(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xc8;
  __Znwm();
  func_0x000107c31510();
  *puVar1 = &PTR_FUN_110a71e60;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x0001087dacd8();
  return;
}



/* Entry: 1087d9a74; end: 1087d9a77;  */

undefined8 * FUN_1087d9a74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71e60;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c28754(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087d9a78; end: 1087d9a8b;  */

void FUN_1087d9a78(void)

{
  FUN_1087d9a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087d9a8c; end: 1087d9af3;  */

undefined8 * FUN_1087d9a8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71e60;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c28754(param_1 + 0x14);
  }
  *param_1 = &PTR_DAT_110d9aa50;
  func_0x000107c60c18(param_1 + 3);
  *param_1 = &PTR_DAT_110d9a9d8;
  return param_1;
}



/* Entry: 1087d9af4; end: 1087d9b93;  */

void FUN_1087d9af4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uStack_38;
  
  do {
    uStack_38 = 0;
    lVar1 = param_1 + 0x10;
    func_0x000107c27ff0(lVar1,&uStack_38,1,2);
    if ((int)lVar1 != 0) {
      if (*(char *)(param_1 + 0xc0) == '\x01') {
        func_0x000107c28754(param_1 + 0xa0);
        *(undefined1 *)(param_1 + 0xc0) = 0;
      }
      FUN_1087d98ec(param_1 + 0x98,param_3);
      *(undefined1 *)(param_1 + 0xc0) = 1;
      *(undefined8 *)(param_1 + 0x10) = 2;
      func_0x000107c31508(param_1,param_2);
      return;
    }
  } while (((uint)uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 1087d9b94; end: 1087d9ba3;  */

void FUN_1087d9b94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71d68;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1087d9ba4; end: 1087d9bcb;  */

long FUN_1087d9ba4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 1087d9bcc; end: 1087d9c3f;  */

void FUN_1087d9bcc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  plVar4 = (long *)*puVar5;
  uStack_30 = puVar5[0x13d];
  lStack_28 = puVar5[0x13e];
  if (lStack_28 != 0) {
    plVar1 = (long *)(lStack_28 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  (**(code **)(*plVar4 + 0x10))(plVar4,puVar5 + 0x11,puVar5 + 0x21,&uStack_30);
  FUN_108641bc4(&uStack_30);
  return;
}



/* Entry: 1087d9c40; end: 1087d9c5f;  */

void FUN_1087d9c40(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1087d947c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1087d9c60; end: 1087d9c77;  */

void FUN_1087d9c60(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1087d9c78; end: 1087d9cbb;  */

void FUN_1087d9c78(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      FUN_1087da998();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x0001087dacd8();
  return;
}



/* Entry: 1087d9cbc; end: 1087d9cef;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_1087d9cbc(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  puVar5 = (undefined8 *)(param_1 + 8);
  FUN_1087d9af4(*puVar5,puVar5,param_2);
  plVar6 = (long *)*puVar5;
  if (plVar6 != (long *)0x0) {
    puVar1 = (ulong *)(plVar6 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar6 + 0x10))(plVar6,1,puVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
  }
  *puVar5 = 0;
  return;
}



/* Entry: 1087d9cf0; end: 1087d9f5f;  */

void FUN_1087d9cf0(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087dab94();
  plVar4 = param_1;
  func_0x0001087daab0(FUN_1087da2bc);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087dab2c();
  func_0x0001087dab7c();
  func_0x0001087dabfc();
  func_0x0001087dab6c();
  do {
    func_0x0001087da998();
  } while (extraout_w10_01 != 0);
  func_0x0001087daa30();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087daa40();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087dad2c();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087daa20();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087dab88();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087daa80();
        if ((bool)in_ZR) {
          func_0x0001087daa10();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087dac2c();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087da9fc(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087daa90();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087d9ea4;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087dabf4();
  unaff_x22 = *plVar4;
  func_0x0001087daa70();
  func_0x0001087daac4();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087dab08(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087dac0c();
      FUN_1087c26bc();
      func_0x0001087dacf0();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087daa50();
      func_0x0001087dac1c();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087d9ef4);
    (*pcVar2)();
  }
  func_0x0001087dabac(*unaff_x20);
  do {
    func_0x0001087da998();
  } while (extraout_w10_04 != 0);
  func_0x0001087daa30();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087dad38();
    func_0x0001087daa40();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087dad2c();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087daa20();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087dab88();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087daa80();
        if ((bool)uVar3) {
          func_0x0001087daa10();
          func_0x0001087da9a8();
          func_0x0001087da9d8();
          func_0x0001087dabe8();
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087daa90();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087d9ea4:
        func_0x0001087daa60(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087dab5c();
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daa78();
  func_0x0001087daaa0();
  func_0x0001087daaa8();
  func_0x0001087dab14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087d9f60; end: 1087d9f9b;  */

undefined8 * FUN_1087d9f60(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1087d9a18(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x000107c27fec(&uStack_30);
  return param_1;
}



/* Entry: 1087d9f9c; end: 1087da04b;  */

void FUN_1087d9f9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  long lStack_38;
  
  func_0x000107c28874(&uStack_48);
  func_0x000107c28878(&uStack_50,2);
  uVar1 = uStack_50;
  uStack_50 = 0;
  func_0x000107c28888(lStack_38 + 0x18,uVar1);
  func_0x000107c28890(&uStack_50);
  *(undefined8 *)(lStack_38 + 8) = 2;
  func_0x000107c2887c(lStack_38,auStack_40);
  func_0x000107c28880(lStack_38,0,param_2,param_3);
  uVar1 = uStack_48;
  uStack_50 = 0;
  uStack_48 = 0;
  *param_1 = uVar1;
  func_0x000107c27f9c(&uStack_50);
  func_0x000107c2889c(&uStack_48);
  return;
}



/* Entry: 1087da04c; end: 1087da2bb;  */

void FUN_1087da04c(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar3;
  long *plVar4;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long extraout_x8;
  long lVar5;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long *extraout_x8_03;
  long *plVar6;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  undefined1 extraout_w9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  int extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w10_06;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  uint extraout_w11_01;
  uint extraout_w11_02;
  undefined8 *unaff_x20;
  long unaff_x22;
  long *unaff_x23;
  
  func_0x0001087dab94();
  plVar4 = param_1;
  func_0x0001087daab0(FUN_1087da548);
  if (extraout_x8 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10 != 0);
  }
  lVar5 = *unaff_x23;
  param_1[8] = lVar5;
  if (lVar5 != 0) {
    do {
      func_0x0001087da998();
    } while (extraout_w10_00 != 0);
  }
  func_0x0001087dab2c();
  func_0x0001087dab7c();
  func_0x0001087dabfc();
  func_0x0001087dab6c();
  do {
    func_0x0001087da998();
  } while (extraout_w10_01 != 0);
  func_0x0001087daa30();
  if ((extraout_w8_00 >> 1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0xc) = 0;
    func_0x0001087daa40();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087dad2c();
    plVar6 = extraout_x8_00;
    do {
      if (*plVar6 == 0) {
        func_0x0001087daa20();
        plVar6 = extraout_x8_02;
        uVar1 = extraout_w10_03;
        uVar7 = extraout_w11_00;
      }
      else {
        func_0x0001087dab88();
        plVar6 = extraout_x8_01;
        uVar1 = extraout_w10_02;
        uVar7 = extraout_w11;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087daa80();
        if ((bool)in_ZR) {
          func_0x0001087daa10();
          uVar3 = extraout_w8;
          if ((bool)in_CY) {
            uVar3 = extraout_w9;
          }
          func_0x0001087dac2c();
          *(undefined1 *)plVar4 = uVar3;
          func_0x0001087da9fc(0);
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087daa90();
        *(long *)(extraout_x8_06 + 0x20) = lVar5;
        goto LAB_1087da200;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087dabf4();
  unaff_x22 = *plVar4;
  func_0x0001087daa70();
  func_0x0001087daac4();
  uVar3 = unaff_x22 == 1;
  if ((bool)uVar3) {
    func_0x0001087dab08(param_1[8]);
    if ((extraout_w8_02 >> 5 & 1) == 0) {
      func_0x0001087dac0c();
      FUN_1087aead8();
      func_0x0001087dad44();
      ___cxa_throw(plVar4);
    }
    else {
      func_0x0001087daa50();
      func_0x0001087dac1c();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1087da250);
    (*pcVar2)();
  }
  func_0x0001087dabac(*unaff_x20);
  do {
    func_0x0001087da998();
  } while (extraout_w10_04 != 0);
  func_0x0001087daa30();
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    func_0x0001087dad38();
    func_0x0001087daa40();
    lVar5 = *plVar4;
    if (lVar5 == 0) {
      func_0x000107c3a5c0();
      lVar5 = *plVar4;
    }
    func_0x0001087dad2c();
    plVar6 = extraout_x8_03;
    do {
      if (*plVar6 == 0) {
        func_0x0001087daa20();
        plVar6 = extraout_x8_05;
        uVar1 = extraout_w10_06;
        uVar7 = extraout_w11_02;
      }
      else {
        func_0x0001087dab88();
        plVar6 = extraout_x8_04;
        uVar1 = extraout_w10_05;
        uVar7 = extraout_w11_01;
      }
      if ((uVar7 & 1) != 0) {
        func_0x0001087daa80();
        if ((bool)uVar3) {
          func_0x0001087daa10();
          func_0x0001087da9a8();
          func_0x0001087da9d8();
          func_0x0001087dabe8();
          *(long **)(unaff_x22 + 0x90) = plVar4;
        }
        func_0x0001087daa90();
        *(long *)(extraout_x8_07 + 0x20) = lVar5;
LAB_1087da200:
        func_0x0001087daa60(*(undefined8 *)(unaff_x22 + 0x90));
        *(undefined8 *)(unaff_x22 + 0x10) = 0;
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x0001087dab5c();
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daa78();
  func_0x0001087daaa0();
  func_0x0001087daaa8();
  func_0x0001087dab14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da2bc; end: 1087da44f;  */

void FUN_1087da2bc(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087dabf4();
    lVar8 = *plVar4;
    func_0x0001087daa70();
    func_0x0001087daac4();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087dab08(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087dac0c();
        FUN_1087c26bc();
        func_0x0001087dacf0();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087daa50();
        func_0x0001087dac1c();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087da400);
      (*pcVar2)();
    }
    func_0x0001087dabac(param_1[7]);
    do {
      func_0x0001087da998();
    } while (extraout_w10 != 0);
    func_0x0001087daa30();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087dad38();
      lVar8 = param_1[9];
      func_0x0001087da9ec();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087daa20();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087dab88();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087dad04();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087daa10();
            func_0x0001087da9a8();
            func_0x0001087da9d8();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087daa60(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087dab5c();
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daa78();
  func_0x0001087daaa0();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da450; end: 1087da497;  */

void FUN_1087da450(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087daa78();
  func_0x0001087daaa0();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da498; end: 1087da50f;  */

void FUN_1087da498(long param_1)

{
  FUN_1087d987c(param_1 + 0x48);
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daac4();
  func_0x0001087daaa0();
  func_0x0001087daadc();
  func_0x0001087daad4();
  func_0x0001087daa78();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da510; end: 1087da547;  */

void FUN_1087da510(void)

{
  func_0x0001087dac9c();
  func_0x0001087daac4();
  func_0x0001087daaa0();
  func_0x0001087daadc();
  func_0x0001087daad4();
  func_0x0001087daa78();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087da548; end: 1087da6db;  */

void FUN_1087da548(long *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  long *plVar4;
  uint extraout_w8;
  uint extraout_w8_00;
  long *plVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar6;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x22;
  
  if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
    plVar4 = param_1;
    func_0x0001087dabf4();
    lVar8 = *plVar4;
    func_0x0001087daa70();
    func_0x0001087daac4();
    uVar3 = lVar8 == 1;
    if ((bool)uVar3) {
      func_0x0001087dab08(param_1[8]);
      if ((extraout_w8_00 >> 5 & 1) == 0) {
        func_0x0001087dac0c();
        FUN_1087aead8();
        func_0x0001087dad44();
        ___cxa_throw(plVar4);
      }
      else {
        func_0x0001087daa50();
        func_0x0001087dac1c();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1087da68c);
      (*pcVar2)();
    }
    func_0x0001087dabac(param_1[7]);
    do {
      func_0x0001087da998();
    } while (extraout_w10 != 0);
    func_0x0001087daa30();
    if ((extraout_w8 >> 1 & 1) == 0) {
      func_0x0001087dad38();
      lVar8 = param_1[9];
      func_0x0001087da9ec();
      lVar9 = *plVar4;
      if (lVar9 == 0) {
        func_0x000107c3a5c0();
        lVar9 = *plVar4;
      }
      plVar5 = (long *)(lVar8 + 0x10);
      do {
        if (*plVar5 == 0) {
          func_0x0001087daa20();
          plVar5 = extraout_x8_00;
          uVar1 = extraout_w10_01;
          uVar7 = extraout_w11_00;
        }
        else {
          func_0x0001087dab88();
          plVar5 = extraout_x8;
          uVar1 = extraout_w10_00;
          uVar7 = extraout_w11;
        }
        if ((uVar7 & 1) != 0) {
          func_0x0001087dad04();
          uVar6 = extraout_x8_01;
          if ((bool)uVar3) {
            func_0x0001087daa10();
            func_0x0001087da9a8();
            func_0x0001087da9d8();
            unaff_x22[1] = (long)plVar4;
            *(long **)(lVar8 + 0x90) = plVar4;
            uVar6 = extraout_x8_02;
            unaff_x22 = plVar4;
          }
          uVar6 = uVar6 & 0xffffffff;
          unaff_x22[uVar6 * 3 + 2] = 0;
          unaff_x22[uVar6 * 3 + 3] = (long)param_1;
          unaff_x22[uVar6 * 3 + 4] = lVar9;
          func_0x0001087daa60(*(undefined8 *)(lVar8 + 0x90));
          *(undefined8 *)(lVar8 + 0x10) = 0;
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
  }
  func_0x0001087dab5c();
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daa78();
  func_0x0001087daaa0();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da6dc; end: 1087da723;  */

void FUN_1087da6dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    lVar1 = param_1 + 0x50;
    func_0x000107c27f9c(param_1 + 0x48);
  }
  func_0x000107c27f9c(lVar1);
  func_0x0001087daa78();
  func_0x0001087daaa0();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da724; end: 1087da79b;  */

void FUN_1087da724(long param_1)

{
  FUN_1087d987c(param_1 + 0x48);
  func_0x0001087dab1c();
  func_0x0001087daa70();
  func_0x0001087daac4();
  func_0x0001087daaa0();
  func_0x0001087daadc();
  func_0x0001087daad4();
  func_0x0001087daa78();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da79c; end: 1087da7d3;  */

void FUN_1087da79c(void)

{
  func_0x0001087dac9c();
  func_0x0001087daac4();
  func_0x0001087daaa0();
  func_0x0001087daadc();
  func_0x0001087daad4();
  func_0x0001087daa78();
  func_0x0001087daaa8();
  func_0x0001087dab24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087da7d4; end: 1087da953;  */

void FUN_1087da7d4(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined1 uStack_380;
  undefined1 uStack_378;
  undefined1 uStack_374;
  undefined1 uStack_370;
  undefined1 uStack_358;
  undefined8 uStack_38;
  
  puVar2 = &uStack_3c0;
  puVar1 = &uStack_3c0;
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1 + 0x90;
  FUN_1087d987c(lVar3);
  FUN_1087d98ec(param_1 + 0x20,lVar3);
  func_0x0001087dac3c();
  func_0x0001087dabc8();
  func_0x0001087dabb8();
  func_0x0001087dabc0();
  func_0x0001087dabe0();
  if (*(int *)(param_1 + 0x20) == 0) {
    in_ZR = *(char *)(param_1 + 0x40) == '\x01';
    if ((bool)in_ZR) {
      FUN_108685044(&uStack_3c0,*(long *)(param_1 + 0xb0) + 0x118);
      lVar3 = *(long *)(param_1 + 0xb0);
      func_0x0001087dac84();
      FUN_1087c3e94(lVar3 + 0x20,&uStack_3c0);
      func_0x000104bee3a8(&uStack_3c0);
    }
    uStack_3c0 = 0x1a;
  }
  else {
    uStack_3c0 = CONCAT44(*(int *)(param_1 + 0x20),0x1a);
  }
  uStack_3b8 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_374 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  FUN_1087a9380(param_1 + 0x10);
  func_0x0001087a3420();
  func_0x0001087dac6c();
  func_0x0001087dace8();
  func_0x0001087dabd8();
  func_0x0001087dabd0();
  while( true ) {
    func_0x0001087daa78();
    func_0x0001087dab54();
    func_0x0001087dad58(uStack_38);
    if ((bool)in_ZR) {
      return;
    }
    ___stack_chk_fail();
    if ((int)puVar2 == 0) break;
    puVar1 = &uStack_3c0;
    func_0x000104bee3a8();
    func_0x0001087dac6c();
    func_0x0001087dace8();
    func_0x0001087dabd8();
    func_0x0001087dabd0();
    func_0x0001087dab64();
    func_0x0001087daacc();
    ___cxa_end_catch();
  }
  __Unwind_Resume(puVar1);
  func_0x000107c27f9c((undefined1 *)((long)puVar1 + 0x90));
  func_0x0001087dabc8();
  func_0x0001087dabb8();
  func_0x0001087dabc0();
  func_0x0001087dabe0();
  func_0x0001087dace8();
  func_0x0001087dabd8();
  func_0x0001087dabd0();
  func_0x0001087daa78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1087da954; end: 1087da997;  */

void FUN_1087da954(long param_1)

{
  func_0x000107c27f9c(param_1 + 0x90);
  func_0x0001087dabc8();
  func_0x0001087dabb8();
  func_0x0001087dabc0();
  func_0x0001087dabe0();
  func_0x0001087dace8();
  func_0x0001087dabd8();
  func_0x0001087dabd0();
  func_0x0001087daa78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1087da998; end: 1087dad6b;  */

void FUN_1087da998(long *param_1)

{
  bool bVar1;
  
  bVar1 = (bool)ExclusiveMonitorPass(param_1,0x10);
  if (bVar1) {
    *param_1 = *param_1 + 4;
    ExclusiveMonitorsStatus();
  }
  return;
}



/* Entry: 1087dad6c; end: 1087dae83;  */

undefined8 * FUN_1087dad6c(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_c0 [3];
  undefined8 uStack_a8;
  undefined1 uStack_a0;
  undefined1 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5c;
  undefined1 uStack_58;
  undefined1 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001087a93b4(auStack_c0);
  FUN_1087a9334(param_1,auStack_c0);
  iVar1 = *(int *)(param_3 + 0xa04);
  plVar2 = *(long **)(param_2 + 0x10);
  (**(code **)(*plVar2 + 0x10))();
  if (iVar1 == 3 && (int)plVar2 == 0) {
    uStack_a8 = 0x500000002;
  }
  else {
    uStack_a8 = 2;
  }
  uStack_a0 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  puVar4 = &uStack_a8;
  func_0x0001087a9380(auStack_c0);
  func_0x0001087a3420(&uStack_a8);
  while( true ) {
    puVar3 = auStack_c0;
    func_0x000107c27fb8();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
      return puVar3;
    }
    ___stack_chk_fail();
    if ((int)puVar4 == 0) break;
    ___cxa_begin_catch(puVar3);
    func_0x0001053360b0(auStack_c0);
    ___cxa_end_catch();
  }
  __Unwind_Resume();
  *puVar3 = &PTR_FUN_110a71eb8;
  func_0x000107c28858(puVar3 + 2);
  return puVar3;
}



/* Entry: 1087dae84; end: 1087dae87;  */

undefined8 * FUN_1087dae84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71eb8;
  func_0x000107c28858(param_1 + 2);
  return param_1;
}



/* Entry: 1087dae88; end: 1087dae9b;  */

void FUN_1087dae88(void)

{
  FUN_1087dae9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1087dae9c; end: 1087daecb;  */

undefined8 * FUN_1087dae9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a71eb8;
  func_0x000107c28858(param_1 + 2);
  return param_1;
}



/* Entry: 1087daecc; end: 1087db087;  */

void FUN_1087daecc(char *param_1,char *param_2,long param_3,ulong param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_a0 [32];
  char acStack_80 [24];
  undefined1 uStack_68;
  
  pcVar1 = param_2;
  func_0x0001087dc31c();
  if ((((*pcVar1 == '\x01') && (*(long *)(param_3 + 0x30) != *(long *)(param_3 + 0x38))) &&
      ((*(byte *)(param_3 + 0x630) & 1) != 0)) && ((*(byte *)(param_3 + 0x640) & 1) != 0)) {
    lVar4 = *(long *)(param_3 + 0x6d8);
    for (lVar3 = *(long *)(param_3 + 0x6d0); lVar3 != lVar4; lVar3 = lVar3 + 0x88) {
      func_0x000107c27f70(auStack_a0,lVar3 + 0x58);
      pcVar1 = acStack_80;
      func_0x000107c28c7c(pcVar1,lVar3 + 0x70);
      uStack_68 = 1;
      func_0x0001087dc288();
      func_0x0001087dc2bc();
    }
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    lVar4 = *(long *)(param_3 + 0x8f8);
    for (lVar3 = *(long *)(param_3 + 0x8f0); lVar3 != lVar4; lVar3 = lVar3 + 0x58) {
      func_0x0001087dc2c4();
      func_0x0001087dc288();
      pcVar2 = pcVar1;
      func_0x0001087dc2bc();
      if ((int)pcVar1 != 0) {
        pcVar2 = param_1;
        func_0x000107c28840(param_1,lVar3);
      }
      pcVar1 = pcVar2;
    }
    FUN_108798700();
    if (((param_4 >> 0x20 != 0) && ((uint)param_4 < 6)) &&
       ((1 << (ulong)((uint)param_4 & 0x1f) & 0x34U) != 0)) {
      lVar4 = *(long *)(param_3 + 0x98);
      for (lVar3 = *(long *)(param_3 + 0x90); lVar3 != lVar4; lVar3 = lVar3 + 0x58) {
        func_0x0001087dc2c4();
        func_0x0001087dc288();
        func_0x0001087dc2bc();
      }
    }
    FUN_1087db65c(param_2);
  }
  else {
    param_1[0] = '\0';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
  }
  return;
}



/* Entry: 1087db088; end: 1087db65b;  */

undefined8
FUN_1087db088(long *param_1,long param_2,uint *param_3,undefined8 param_4,long param_5,
             undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_360 [80];
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2f0;
  undefined1 auStack_2e0 [24];
  undefined1 auStack_2c8 [24];
  undefined4 uStack_2b0;
  undefined1 auStack_2a8 [32];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [32];
  undefined8 uStack_250;
  undefined1 auStack_248 [32];
  undefined8 uStack_228;
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [64];
  undefined8 **ppuStack_1a8;
  ulong uStack_1a0;
  byte bStack_191;
  undefined1 auStack_190 [24];
  undefined4 uStack_178;
  uint uStack_174;
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  long *plStack_130;
  long lStack_128;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [24];
  undefined1 uStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 uStack_70;
  
  if (*(char *)(param_2 + 0x50) == '\x01') {
    uVar1 = *(ulong *)(param_2 + 0x40);
    if (-1 < (char)*(byte *)(param_2 + 0x4f)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x4f);
    }
    if (uVar1 != 0) {
      plVar4 = (long *)param_1[2];
      (**(code **)(*plVar4 + 0x10))();
      auStack_c0[0] = 0;
      uStack_a8 = 0;
      if (*(long *)(param_2 + 0x18) != *(long *)(param_2 + 0x20)) {
        FUN_1087dbf38(auStack_c0);
      }
      auStack_e0[0] = 0;
      uStack_c8 = 0;
      if (((char)param_3[0x10] == '\x01') && (*(long *)(param_3 + 10) != *(long *)(param_3 + 0xc)))
      {
        FUN_108848384(&ppuStack_310,param_3 + 10);
        func_0x00010b4d1804(&ppuStack_1a8,&ppuStack_310);
        func_0x000107c2a4cc(&ppuStack_310);
        if (-1 < (char)bStack_191) {
          uStack_1a0 = (ulong)bStack_191;
          ppuStack_1a8 = &ppuStack_1a8;
        }
        func_0x000107c28004(auStack_1e8,ppuStack_1a8,(long)ppuStack_1a8 + uStack_1a0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_1a8);
        FUN_1086554b0(auStack_e0,auStack_1e8);
        func_0x000107c27914(auStack_1e8);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_1a8,param_2 + 0x38);
      func_0x0001087dc308();
      uStack_178 = *(undefined4 *)(param_2 + 0x30);
      uStack_174 = *param_3;
      FUN_108691254(auStack_170,param_4);
      func_0x000107c279a0(auStack_150,param_3 + 2);
      plVar5 = param_1 + 0x14;
      plStack_130 = plVar4;
      FUN_108679cf0();
      lStack_128 = *plVar5;
      if (*plVar5 < 1) {
        lStack_128 = 0xf731400;
      }
      lStack_128 = lStack_128 + (long)plVar4;
      func_0x000107c27b7c(auStack_120,auStack_c0);
      func_0x000107c27b7c(auStack_100,auStack_e0);
      FUN_1088689d0(*param_1,&ppuStack_1a8);
      FUN_108868e10(*param_1,&ppuStack_1a8,auStack_190);
      uVar7 = *(undefined8 *)(*param_1 + 0x18);
      func_0x000107c278b8(auStack_200,&UNK_10f4bb8e7);
      func_0x000107c31420(auStack_1e8,uVar7,auStack_200);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
      lVar8 = *param_1;
      auStack_88[0] = 0;
      uStack_70 = 0;
      if (*(long *)(param_5 + 0x1f0) != *(long *)(param_5 + 0x1f8)) {
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        func_0x00010528d490(&uStack_a0,
                            (*(long *)(param_5 + 0x1f8) - *(long *)(param_5 + 0x1f0)) / 0x18);
        lVar2 = *(long *)(param_5 + 0x1f8);
        for (lVar9 = *(long *)(param_5 + 0x1f0); lVar9 != lVar2; lVar9 = lVar9 + 0x18) {
          func_0x0001086ce6c8(&uStack_a0,lVar9);
        }
        FUN_1086d53b4(auStack_88,&uStack_a0);
        func_0x000104bee630(&uStack_a0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_310,param_2 + 0x38);
      func_0x0001087dc308();
      func_0x000107c27994(auStack_2e0,param_4);
      func_0x000107c27994(auStack_2c8,param_5);
      uStack_2b0 = *(undefined4 *)(param_5 + 0x18);
      func_0x000107c28978(auStack_2a8,auStack_88);
      FUN_10867be90(auStack_288,param_5 + 0x210);
      func_0x000104be0ccc(auStack_270,param_5 + 0x20);
      uStack_250 = *(undefined8 *)(param_5 + 0x40);
      func_0x000107c279d4(auStack_248,param_5 + 0x58);
      uStack_228 = param_6;
      func_0x000104be0ccc(auStack_220,param_5 + 0x368);
      func_0x000107c28754(auStack_88);
      FUN_108868e98(lVar8,&ppuStack_310);
      FUN_1087dc1e8(&ppuStack_310);
      func_0x000107c31428(auStack_1e8);
      func_0x000107c31424(auStack_1e8);
      plVar4 = (long *)param_1[4];
      uStack_300 = 0;
      uStack_2f8 = 0;
      ppuStack_310 = &PTR_FUN_110a609a8;
      uStack_308 = 0;
      uStack_2f0 = 0x2da;
      if (*param_3 < 6) {
        uVar3 = *(undefined4 *)(&UNK_10df58bf4 + (ulong)*param_3 * 4);
      }
      else {
        uVar3 = 0x8802a1;
      }
      pppuVar6 = &ppuStack_310;
      FUN_1087dbf6c(pppuVar6,uVar3);
      func_0x000107c2884c(auStack_360,pppuVar6);
      (**(code **)(*plVar4 + 0x50))(plVar4,auStack_360);
      func_0x000107c2882c(auStack_360);
      func_0x000107c2882c(&ppuStack_310);
      func_0x0001087dc244(&ppuStack_1a8);
      func_0x000107c279c4(auStack_e0);
      func_0x000107c279c4(auStack_c0);
      return 1;
    }
  }
  return 0;
}



/* Entry: 1087db65c; end: 1087db7fb;  */

void FUN_1087db65c(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_b8;
  long lStack_b0;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [64];
  
  uVar3 = *(undefined8 *)(*param_1 + 0x18);
  func_0x000107c278b8(auStack_88,&UNK_10f4bb8d1);
  func_0x000107c31420(auStack_70,uVar3,auStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  plVar1 = (long *)param_1[2];
  (**(code **)(*plVar1 + 0x10))();
  FUN_108868b80(&lStack_a0,*param_1,plVar1);
  lVar4 = lStack_98;
  for (lVar2 = lStack_a0; lVar2 != lVar4; lVar2 = lVar2 + 0x38) {
    FUN_108868e10(*param_1,lVar2,lVar2 + 0x18);
  }
  plVar1 = param_1 + 0xc;
  lVar4 = *param_1;
  FUN_108679cf0();
  lVar2 = *plVar1;
  if (lVar2 < 1) {
    lVar2 = 500;
  }
  FUN_108868d34(&lStack_b8,lVar4,lVar2);
  lVar4 = lStack_b0;
  for (lVar2 = lStack_b8; lVar2 != lVar4; lVar2 = lVar2 + 0x38) {
    FUN_108868e10(*param_1,lVar2,lVar2 + 0x18);
  }
  func_0x000107c31428(auStack_70);
  FUN_1087db8c8(param_1 + 4,0x8c02ad,lStack_a0,lStack_98);
  FUN_1087db8c8(param_1 + 4,0x8c02ae,lStack_b8,lStack_b0);
  func_0x0001087dc080(&lStack_b8);
  func_0x0001087dc080(&lStack_a0);
  func_0x000107c31424(auStack_70);
  return;
}



/* Entry: 1087db7fc; end: 1087db8c7;  */

void FUN_1087db7fc(char *param_1,long *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  uint auStack_98 [18];
  
  pcVar2 = param_1;
  func_0x0001087dc31c();
  if (*pcVar2 == '\x01') {
    lVar3 = *param_2;
    lVar1 = param_2[1];
    if ((lVar3 != lVar1 && param_3 < 6) && (1 << (ulong)(param_3 & 0x1f) & 0x34U) != 0) {
      for (; lVar3 != lVar1; lVar3 = lVar3 + 0x58) {
        auStack_98[0] = param_3;
        func_0x0001087dc2c4();
        FUN_1087db088(param_1,lVar3,auStack_98,param_4,param_5,param_6);
        func_0x0001087dc2bc();
      }
      FUN_1087db65c(param_1);
    }
  }
  return;
}



/* Entry: 1087db8c8; end: 1087dbd8f;  */

void FUN_1087db8c8(undefined8 *param_1,uint param_2,long param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *unaff_x24;
  undefined *puVar16;
  undefined **ppuStack_c8;
  undefined ***pppuStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined **ppuStack_90;
  ulong uStack_88;
  float fStack_80;
  undefined1 auStack_78 [24];
  
  puStack_98 = (undefined *)0x0;
  lStack_a0 = 0;
  uStack_88 = 0;
  ppuStack_90 = (undefined **)0x0;
  fStack_80 = 1.0;
  do {
    puVar9 = puStack_98;
    if (param_3 == param_4) {
      for (ppuVar15 = ppuStack_90; ppuVar15 != (undefined **)0x0; ppuVar15 = (undefined **)*ppuVar15
          ) {
        plVar10 = (long *)*param_1;
        pppuStack_c0 = (undefined ***)0x0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        ppuStack_c8 = &PTR_FUN_110a609a8;
        uStack_a8 = 0x2df;
        func_0x000107c278b8(auStack_78,PTR_DAT_113269018);
        pppuVar6 = &ppuStack_c8;
        func_0x000107c28824(pppuVar6,auStack_78,(&PTR_s_success_113269028)[param_2 & 0x2af]);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
        if (*(uint *)(ppuVar15 + 2) < 6) {
          uVar2 = *(undefined4 *)(&UNK_10df58bf4 + (ulong)*(uint *)(ppuVar15 + 2) * 4);
        }
        else {
          uVar2 = 0x8802a1;
        }
        FUN_1087dbf6c(pppuVar6,uVar2);
        (**(code **)(*plVar10 + 0x58))(plVar10,pppuVar6,ppuVar15[3]);
        func_0x0001087dc2ec();
      }
      func_0x0001087dc03c(&lStack_a0);
      return;
    }
    iVar1 = *(int *)(param_3 + 0x30);
    puVar16 = (undefined *)(long)iVar1;
    if (puStack_98 != (undefined *)0x0) {
      puVar7 = puStack_98 + -1;
      if (((ulong)puStack_98 & (ulong)puVar7) == 0) {
        unaff_x24 = (undefined *)((ulong)puVar7 & (ulong)puVar16);
      }
      else {
        unaff_x24 = puVar16;
        if (puStack_98 <= puVar16) {
          uVar3 = 0;
          if (puStack_98 != (undefined *)0x0) {
            uVar3 = (ulong)puVar16 / (ulong)puStack_98;
          }
          unaff_x24 = puVar16 + -(uVar3 * (long)puStack_98);
        }
      }
      ppuVar15 = *(undefined ***)(lStack_a0 + (long)unaff_x24 * 8);
      if (ppuVar15 != (undefined **)0x0) {
        do {
          while( true ) {
            ppuVar15 = (undefined **)*ppuVar15;
            if (ppuVar15 == (undefined **)0x0) goto LAB_1087db9ac;
            puVar8 = ppuVar15[1];
            if (puVar8 != puVar16) break;
            if (*(int *)(ppuVar15 + 2) == iVar1) goto LAB_1087dbc4c;
          }
          if (((ulong)puStack_98 & (ulong)puVar7) == 0) {
            puVar8 = (undefined *)((ulong)puVar8 & (ulong)puVar7);
          }
          else if (puStack_98 <= puVar8) {
            uVar3 = 0;
            if (puStack_98 != (undefined *)0x0) {
              uVar3 = (ulong)puVar8 / (ulong)puStack_98;
            }
            puVar8 = puVar8 + -(uVar3 * (long)puStack_98);
          }
        } while (puVar8 == unaff_x24);
      }
    }
LAB_1087db9ac:
    ppuVar15 = (undefined **)0x20;
    __Znwm();
    uStack_b8 = 1;
    *ppuVar15 = (undefined *)0x0;
    ppuVar15[1] = puVar16;
    *(int *)(ppuVar15 + 2) = iVar1;
    ppuVar15[3] = (undefined *)0x0;
    pppuStack_c0 = &ppuStack_90;
    if ((puVar9 == (undefined *)0x0) || (fStack_80 * (float)puVar9 < (float)(uStack_88 + 1))) {
      uVar3 = 1;
      if ((undefined *)0x2 < puVar9) {
        uVar3 = (ulong)(((ulong)puVar9 & (ulong)(puVar9 + -1)) != 0);
      }
      puVar7 = (undefined *)(uVar3 | (long)puVar9 << 1);
      puVar8 = (undefined *)(long)((float)(uStack_88 + 1) / fStack_80);
      if (puVar7 <= puVar8) {
        puVar7 = puVar8;
      }
      puVar8 = puVar9;
      ppuStack_c8 = ppuVar15;
      if (puVar7 + -1 == (undefined *)0x0) {
        puVar7 = (undefined *)0x2;
      }
      else if (((ulong)puVar7 & (ulong)(puVar7 + -1)) != 0) {
        __ZNSt3__112__next_primeEm();
        puVar8 = puStack_98;
      }
      if (puVar8 < puVar7) {
LAB_1087dba4c:
        if ((ulong)puVar7 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1087dbd50);
          (*pcVar4)();
        }
        lVar5 = (long)puVar7 << 3;
        __Znwm(lVar5);
        FUN_1087dbff8(&lStack_a0,lVar5);
        for (puVar9 = (undefined *)0x0; puVar7 != puVar9; puVar9 = puVar9 + 1) {
          *(undefined8 *)(lStack_a0 + (long)puVar9 * 8) = 0;
        }
        puVar9 = puVar7;
        puStack_98 = puVar7;
        if (ppuStack_90 != (undefined **)0x0) {
          puVar12 = ppuStack_90[1];
          puVar8 = puVar7 + -1;
          uVar3 = 0;
          if (puVar7 != (undefined *)0x0) {
            uVar3 = (ulong)puVar12 / (ulong)puVar7;
          }
          puVar13 = puVar12;
          if (puVar7 <= puVar12) {
            puVar13 = puVar12 + -(uVar3 * (long)puVar7);
          }
          if (((ulong)puVar7 & (ulong)puVar8) == 0) {
            puVar13 = (undefined *)((ulong)puVar12 & (ulong)puVar8);
          }
          *(undefined ****)(lStack_a0 + (long)puVar13 * 8) = &ppuStack_90;
          ppuVar14 = ppuStack_90;
          while (ppuVar11 = ppuVar14, ppuVar14 = (undefined **)*ppuVar11,
                ppuVar14 != (undefined **)0x0) {
            puVar12 = ppuVar14[1];
            if (((ulong)puVar7 & (ulong)puVar8) == 0) {
              puVar12 = (undefined *)((ulong)puVar12 & (ulong)puVar8);
            }
            else if (puVar7 <= puVar12) {
              uVar3 = 0;
              if (puVar7 != (undefined *)0x0) {
                uVar3 = (ulong)puVar12 / (ulong)puVar7;
              }
              puVar12 = puVar12 + -(uVar3 * (long)puVar7);
            }
            if (puVar12 != puVar13) {
              if (*(long *)(lStack_a0 + (long)puVar12 * 8) == 0) {
                *(undefined ***)(lStack_a0 + (long)puVar12 * 8) = ppuVar11;
                puVar13 = puVar12;
              }
              else {
                *ppuVar11 = *ppuVar14;
                *ppuVar14 = (undefined *)**(long **)(lStack_a0 + (long)puVar12 * 8);
                **(undefined8 **)(lStack_a0 + (long)puVar12 * 8) = ppuVar14;
                ppuVar14 = ppuVar11;
              }
            }
          }
        }
      }
      else {
        puVar9 = puVar8;
        if (puVar7 < puVar8) {
          puVar9 = (undefined *)(long)((float)uStack_88 / fStack_80);
          if ((puVar8 < (undefined *)0x3) || (((ulong)puVar8 & (ulong)(puVar8 + -1)) != 0)) {
            __ZNSt3__112__next_primeEm();
          }
          else if ((undefined *)0x1 < puVar9) {
            puVar9 = (undefined *)(1L << (-LZCOUNT(puVar9 + -1) & 0x3fU));
          }
          if (puVar7 <= puVar9) {
            puVar7 = puVar9;
          }
          puVar9 = puStack_98;
          if (puVar7 < puVar8) {
            if (puVar7 != (undefined *)0x0) goto LAB_1087dba4c;
            FUN_1087dbff8(&lStack_a0,0);
            puStack_98 = (undefined *)0x0;
            puVar9 = (undefined *)0x0;
          }
        }
      }
      if (((ulong)puVar9 & (ulong)(puVar9 + -1)) == 0) {
        unaff_x24 = (undefined *)((ulong)(puVar9 + -1) & (ulong)puVar16);
      }
      else {
        unaff_x24 = puVar16;
        if (puVar9 <= puVar16) {
          uVar3 = 0;
          if (puVar9 != (undefined *)0x0) {
            uVar3 = (ulong)puVar16 / (ulong)puVar9;
          }
          unaff_x24 = puVar16 + -(uVar3 * (long)puVar9);
        }
      }
    }
    plVar10 = *(long **)(lStack_a0 + (long)unaff_x24 * 8);
    if (plVar10 == (long *)0x0) {
      *ppuVar15 = (undefined *)ppuStack_90;
      *(undefined ****)(lStack_a0 + (long)unaff_x24 * 8) = &ppuStack_90;
      ppuStack_90 = ppuVar15;
      if (*ppuVar15 != (undefined *)0x0) {
        puVar16 = *(undefined **)(*ppuVar15 + 8);
        if (((ulong)puVar9 & (ulong)(puVar9 + -1)) == 0) {
          puVar16 = (undefined *)((ulong)puVar16 & (ulong)(puVar9 + -1));
        }
        else if (puVar9 <= puVar16) {
          uVar3 = 0;
          if (puVar9 != (undefined *)0x0) {
            uVar3 = (ulong)puVar16 / (ulong)puVar9;
          }
          puVar16 = puVar16 + -(uVar3 * (long)puVar9);
        }
        *(undefined ***)(lStack_a0 + (long)puVar16 * 8) = ppuVar15;
      }
    }
    else {
      *ppuVar15 = (undefined *)*plVar10;
      *plVar10 = (long)ppuVar15;
    }
    ppuStack_c8 = (undefined **)0x0;
    uStack_88 = uStack_88 + 1;
    FUN_1087dc010(&ppuStack_c8);
LAB_1087dbc4c:
    ppuVar15[3] = ppuVar15[3] + 1;
    param_3 = param_3 + 0x38;
  } while( true );
}



/* Entry: 1087dbd90; end: 1087dbebb;  */

void FUN_1087dbd90(long *param_1,char *param_2,long *param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pcVar2 = param_2;
  func_0x0001087dc31c();
  if (*pcVar2 != '\x01') {
    return;
  }
  lVar5 = 0;
  lVar7 = 0;
  lVar1 = param_3[1];
  lVar8 = *param_3 + 0x38;
  do {
    lVar9 = lVar8 + -0x38;
    if (lVar9 == lVar1) {
      param_1[1] = lVar7;
      param_1[2] = lVar5;
      FUN_1087dbebc(param_2 + 0x20,0x8a02a6,*param_1);
      FUN_1087dbebc(param_2 + 0x20,0x8a02a7,lVar7);
      if (0 < lVar5) {
        plVar6 = *(long **)(param_2 + 0x20);
        puVar4 = &stack0xffffffffffffffb8;
        FUN_1087dc158(puVar4,0x8a02a8);
        (**(code **)(*plVar6 + 0x58))(plVar6,puVar4,lVar5);
        func_0x0001087dc2ec();
      }
      return;
    }
    if (*(char *)(lVar8 + 0x18) == '\x01') {
      if (*(char *)(lVar8 + 0x17) < '\0') {
        if (*(long *)(lVar8 + 8) == 0) goto LAB_1087dbe2c;
      }
      else if (*(char *)(lVar8 + 0x17) == '\0') goto LAB_1087dbe2c;
      uVar3 = *(undefined8 *)param_2;
      FUN_108868a98(uVar3,lVar8,lVar9);
      if ((int)uVar3 == 0) {
        lVar7 = lVar7 + 1;
      }
      else {
        *param_1 = *param_1 + 1;
      }
      FUN_108868e10(*(undefined8 *)param_2,lVar8,lVar9);
    }
    else {
LAB_1087dbe2c:
      lVar5 = lVar5 + 1;
    }
    lVar8 = lVar8 + 0x58;
  } while( true );
}



/* Entry: 1087dbebc; end: 1087dbf37;  */

void FUN_1087dbebc(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined ***pppuVar1;
  long *plVar2;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (0 < param_3) {
    plVar2 = (long *)*param_1;
    uStack_38 = 0;
    uStack_30 = 0;
    ppuStack_48 = &PTR_FUN_110a609a8;
    uStack_40 = 0;
    uStack_28 = 0x2de;
    pppuVar1 = &ppuStack_48;
    FUN_1087dc158(pppuVar1);
    (**(code **)(*plVar2 + 0x58))(plVar2,pppuVar1,param_3);
    func_0x0001087dc2ec();
  }
  return;
}



/* Entry: 1087dbf38; end: 1087dbf6b;  */

long FUN_1087dbf38(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c27cfc();
  }
  else {
    func_0x000104be0d0c();
  }
  return param_1;
}



/* Entry: 1087dbf6c; end: 1087dbfcb;  */

undefined8 FUN_1087dbf6c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c278b8(auStack_38,PTR_DAT_113268ff8);
  func_0x000107c28824(param_1,auStack_38,(&PTR_s_success_113269028)[(uint)param_2 & 0x2a3]);
  func_0x0001087dc2a4();
  return param_2;
}



/* Entry: 1087dbfcc; end: 1087dbff7;  */

long FUN_1087dbfcc(long param_1)

{
  FUN_108642380(param_1 + 0x28);
  func_0x000107c279a4(param_1 + 8);
  return param_1;
}



/* Entry: 1087dbff8; end: 1087dc00f;  */

void FUN_1087dbff8(long *param_1,long param_2)

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



/* Entry: 1087dc010; end: 1087dc0f3;  */

long * FUN_1087dc010(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


