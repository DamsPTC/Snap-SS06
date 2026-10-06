/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a6bed90; end: 10a6bee1b;  */

undefined1  [16] FUN_10a6bed90(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x1d;
  auVar1._0_8_ = &UNK_10f66dc6a;
  return auVar1;
}



/* Entry: 10a6bee1c; end: 10a6bef4f;  */

void FUN_10a6bee1c(undefined8 param_1)

{
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_98 = (undefined *)0x0;
  puStack_90 = (undefined1 *)0xffffffff0000000a;
  uStack_88 = CONCAT44(uStack_88._4_4_,0xffffffff);
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = CONCAT44(uStack_58._4_4_,0xffffffff);
  FUN_10a6bef50(param_1,&puStack_98);
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66d84c;
  uStack_80 = 0;
  uStack_7c = 8;
  uStack_78 = 0xffffffff;
  uStack_74 = 0xffffffff;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6d71d4();
  puStack_a0 = &UNK_10f66d86c;
  puStack_98 = &UNK_10f66d85c;
  uStack_88 = 1;
  uStack_78 = 0xffffffff;
  uStack_74 = 0xffffffff;
  uStack_80 = 0;
  uStack_7c = 8;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_90 = (undefined1 *)&puStack_a0;
  func_0x00010a6d7348(param_1,&puStack_98,0);
  puStack_90 = (undefined1 *)0x0;
  uStack_88 = 0;
  puStack_98 = &UNK_10f66d879;
  uStack_80 = 0;
  uStack_7c = 8;
  uStack_78 = 0xffffffff;
  uStack_74 = 0xffffffff;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  uStack_48 = 0xffffffff;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_10a6d74a0(param_1,&puStack_98);
  func_0x00010a6d7d8c(param_1);
  return;
}



/* Entry: 10a6bef50; end: 10a6bf027;  */

/* WARNING: Removing unreachable block (ram,0x00010a6befe8) */

undefined1  [16] FUN_10a6bef50(undefined8 param_1,long param_2)

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
  func_0x000109887da8(auStack_48,&UNK_10f66dc6a,0x1d);
  uStack_88 = *(undefined8 *)(param_2 + 8);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_70 = *(undefined8 *)(param_2 + 0x20);
  uStack_78 = *(undefined8 *)(param_2 + 0x18);
  uStack_60 = *(undefined8 *)(param_2 + 0x30);
  uStack_68 = *(undefined8 *)(param_2 + 0x28);
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_50 = *(undefined4 *)(param_2 + 0x40);
  puStack_90 = auStack_48;
  FUN_10a6d70d8(param_1,&puStack_90,0);
  auVar2._8_8_ = ppuVar1;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10a6bf028; end: 10a6bf28f;  */

undefined8 * FUN_10a6bf028(undefined8 *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puStack_60;
  long *plStack_58;
  undefined1 uStack_41;
  undefined *puStack_40;
  long *plStack_38;
  
  param_1[0x65] = &PTR_FUN_110c383b8;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  *(undefined2 *)(param_1 + 0x68) = 0x100;
  puVar6 = param_1;
  FUN_10a1da04c(param_1,&PTR_PTR_110c10340,param_2);
  FUN_10a1e394c(puVar6 + 0x51);
  puStack_40 = (undefined *)CONCAT62(puStack_40._2_6_,1);
  FUN_10a00db68(param_1 + 0x5b,param_2,&puStack_40);
  FUN_10a03c0d0(param_1 + 0x60);
  *param_1 = &PTR_FUN_110c10098;
  param_1[2] = &PTR_FUN_110c101d8;
  param_1[5] = &PTR_FUN_110c10208;
  param_1[0x65] = &PTR_FUN_110c10300;
  param_1[0x15] = &PTR_FUN_110c10260;
  param_1[0x5b] = &PTR_FUN_110c10280;
  param_1[0x60] = &PTR_FUN_110c102a8;
  puVar6 = (undefined8 *)0x18;
  __Znwm();
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = param_2;
  param_1[100] = puVar6;
  puStack_40 = &UNK_10f66d87f;
  plStack_38 = (long *)0x26;
  if (param_2 == 0) {
    FUN_10a0edfc4(&puStack_40);
  }
  else {
    FUN_10a5ae998(param_1[0x61],&PTR_DAT_110b9f988,param_2,param_1 + 0x60);
    lVar7 = *(long *)(*(long *)(param_1[0x12] + 0x100) + 0x260);
    puStack_40 = &UNK_10f653c20;
    plStack_38 = (long *)0x21;
    if (lVar7 != 0) {
      FUN_10a6d7e70(&puStack_60,&uStack_41,param_1 + 0x12,lVar7 + 0xb8);
      plStack_38 = plStack_58;
      puStack_40 = puStack_60;
      puStack_60 = (undefined *)0x0;
      plStack_58 = (long *)0x0;
      FUN_10a1e3a04(param_1,&puStack_40);
      plVar4 = plStack_38;
      if (plStack_38 != (long *)0x0) {
        plVar1 = plStack_38 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_38 + 0x10))(plStack_38);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      plVar4 = plStack_58;
      if (plStack_58 != (long *)0x0) {
        plVar1 = plStack_58 + 1;
        do {
          lVar7 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plStack_58 + 0x10))(plStack_58);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
        }
      }
      return param_1;
    }
    FUN_10a0edfc4(&puStack_40);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6bf204);
  (*pcVar5)();
}



/* Entry: 10a6bf290; end: 10a6bf29f;  */

void FUN_10a6bf290(void)

{
  return;
}



/* Entry: 10a6bf2a0; end: 10a6bf323;  */

void FUN_10a6bf2a0(long param_1,long *param_2)

{
  long *plVar1;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined8 uStack_40;
  char cStack_29;
  
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x248))(param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x78,plVar1);
  (**(code **)(*param_2 + 0x230))(auStack_58,param_2,&PTR_DAT_110c10368,param_1 + 0x290);
  if (cStack_29 < '\0') {
    __ZdlPv(uStack_40);
  }
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  return;
}



/* Entry: 10a6bf324; end: 10a6bf343;  */

void FUN_10a6bf324(long param_1,long *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010a6bf340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0xf8))(param_2,&PTR_DAT_110c10368,param_1 + 0x290);
  return;
}



/* Entry: 10a6bf344; end: 10a6bf387;  */

undefined1  [16] FUN_10a6bf344(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puStack_20;
  undefined8 uStack_18;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x90) + 0x100) + 0x260);
  puStack_20 = &UNK_10f653c20;
  uStack_18 = 0x21;
  if (lVar1 != 0) {
    auVar2._8_8_ = param_2;
    auVar2._0_8_ = lVar1 + 0x128;
    return auVar2;
  }
  FUN_10a0edfc4(&puStack_20);
  auVar3._8_8_ = 0x22;
  auVar3._0_8_ = &UNK_10f66dc88;
  return auVar3;
}



/* Entry: 10a6bf388; end: 10a6bf3a7;  */

undefined1  [16] FUN_10a6bf388(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x22;
  auVar1._0_8_ = &UNK_10f66dc88;
  return auVar1;
}



/* Entry: 10a6bf3a8; end: 10a6bf40f;  */

bool FUN_10a6bf3a8(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf66dc88;
    _memcmp(&UNK_10f66dc88,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
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



/* Entry: 10a6bf410; end: 10a6bf41f;  */

bool FUN_10a6bf410(undefined8 param_1,long *param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  
  if (param_3 == 0x22) {
    iVar2 = 0xf66dc88;
    _memcmp(&UNK_10f66dc88,param_2);
    if (iVar2 == 0) {
      return true;
    }
  }
  if ((param_3 == 0xf) &&
     (*param_2 == 0x5065727574786554 && *(long *)((long)param_2 + 7) == 0x72656469766f7250)) {
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



/* Entry: 10a6bf420; end: 10a6bf947;  */

void FUN_10a6bf420(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar11;
  uint uVar12;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined1 *unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x19 = param_1;
    plVar6 = param_2;
    if ((*(int *)((long)param_1 + 0x74) != 2) &&
       (unaff_x19 = *(long **)(param_1[0x59] + 0x268), unaff_x19 != (long *)0x0)) {
      plVar6 = (long *)0x1;
      FUN_10a088744();
      *(int *)((long)register0x00000008 + -0x290) = (int)unaff_x19;
      if (plVar6 == (long *)0x0) {
        unaff_x21 = (long *)0x0;
        *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      }
      else {
        unaff_x21 = (long *)plVar6[1];
        lVar9 = *plVar6;
        *(long *)((long)register0x00000008 + -0x280) = plVar6[1];
        *(long *)((long)register0x00000008 + -0x288) = lVar9;
        if (unaff_x21 != (long *)0x0) {
          plVar11 = unaff_x21 + 1;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = *plVar11 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      if ((int)unaff_x19 == 2) {
        unaff_x23 = param_1 + 0x5d;
        FUN_10a53daa8((undefined1 *)((long)register0x00000008 + -0x278),param_1[0x12],unaff_x23);
        uVar8 = (ulong)*(byte *)(param_1[0x12] + 0x29);
        if (5 < uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6bf8f8);
          (*pcVar4)();
        }
        plVar6 = *(long **)(param_1[0x12] + uVar8 * 8 + 0x30);
        (**(code **)(*plVar6 + 0x48))
                  (plVar6,param_1[0x59],*(undefined8 *)((long)register0x00000008 + -0x278));
        unaff_x22 = *(long **)((long)register0x00000008 + -0x270);
        if (unaff_x22 != (long *)0x0) {
          plVar6 = unaff_x22 + 1;
          do {
            lVar9 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
          }
        }
        unaff_x27 = param_1[0x56];
        if (param_1[0x57] != unaff_x27) {
          unaff_x24 = 0;
          unaff_x26 = (undefined1 *)((long)register0x00000008 + -0x278);
          *(undefined1 **)((long)register0x00000008 + -0x308) =
               (undefined1 *)((long)register0x00000008 + -0x7c);
          unaff_x28 = (undefined1 *)((long)register0x00000008 + -0x300);
          do {
            *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined8 *)((long)register0x00000008 + -200) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x90) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0xffffffffffffffff;
            *(undefined4 *)((long)register0x00000008 + -0x80) = 0x3f800000;
            **(undefined8 **)((long)register0x00000008 + -0x308) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x74) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0xffffffffffffffff;
            *(undefined4 *)((long)register0x00000008 + -0x2a0) = 0;
            FUN_10a061728((undefined1 *)((long)register0x00000008 + -0x278),
                          (undefined1 *)((long)register0x00000008 + -0x300));
            plVar6 = *(long **)((long)register0x00000008 + -0x2d0);
            if (plVar6 != (long *)0x0) {
              plVar11 = plVar6 + 1;
              do {
                lVar9 = *plVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar3) {
                  *plVar11 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            plVar6 = *(long **)((long)register0x00000008 + -0x2f8);
            if (plVar6 != (long *)0x0) {
              plVar11 = plVar6 + 1;
              do {
                lVar9 = *plVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar3) {
                  *plVar11 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            lVar10 = param_1[0x5d];
            lVar9 = param_1[0x5e];
            if (lVar9 != 0) {
              plVar6 = (long *)(lVar9 + 8);
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = *plVar6 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            plVar6 = *(long **)((long)register0x00000008 + -0x268);
            *(long *)((long)register0x00000008 + -0x270) = lVar10;
            *(long *)((long)register0x00000008 + -0x268) = lVar9;
            if (plVar6 != (long *)0x0) {
              plVar11 = plVar6 + 1;
              do {
                lVar9 = *plVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar3) {
                  *plVar11 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
            *(undefined8 *)((long)register0x00000008 + -600) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x250) = 0xffffffffffffffff;
            *(undefined4 *)((long)register0x00000008 + -0x210) = 1;
            *(undefined4 *)((long)register0x00000008 + -0x78) = 2;
            (**(code **)(*param_2 + 0x88))
                      (param_2,(undefined1 *)((long)register0x00000008 + -0x278));
            plVar11 = (long *)*unaff_x23;
            plVar6 = plVar11;
            (**(code **)(*plVar11 + 0x28))();
            (**(code **)(*plVar11 + 0x30))();
            uVar12 = (uint)plVar6;
            if (uVar12 < 2) {
              uVar12 = 1;
            }
            uVar5 = (uint)plVar11;
            if (uVar5 < 2) {
              uVar5 = 1;
            }
            *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
            *(ulong *)((long)register0x00000008 + -0x2f8) = CONCAT44(uVar5,uVar12);
            (**(code **)(*param_2 + 0xc0))
                      (param_2,(undefined1 *)((long)register0x00000008 + -0x300));
            puVar1 = (undefined8 *)(unaff_x27 + unaff_x24 * 0x20);
            plVar6 = param_2 + 4;
            FUN_10a5dfd94(plVar6,*puVar1);
            uVar7 = puVar1[2];
            *(undefined8 *)((long)register0x00000008 + -0x2f4) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2fc) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x300) = 0x3f800000;
            *(undefined4 *)((long)register0x00000008 + -0x2ec) = 0x3f800000;
            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2cc) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d4) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x2d8) = 0x3f800000;
            unaff_x25 = 0x3f800000;
            *(undefined4 *)((long)register0x00000008 + -0x2c4) = 0x3f800000;
            (**(code **)(*param_2 + 0x58))
                      (param_2,uVar7,plVar6,(undefined1 *)((long)register0x00000008 + -0x300),3);
            (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
            unaff_x24 = unaff_x24 + 1;
            if (unaff_x24 < (ulong)(param_1[0x57] - param_1[0x56] >> 5)) {
              (**(code **)(*param_2 + 0x98))(param_2,unaff_x23,0,0,param_1 + 0x5b,0,0);
            }
            plVar6 = *(long **)((long)register0x00000008 + -0xa0);
            if (plVar6 != (long *)0x0) {
              plVar11 = plVar6 + 1;
              do {
                lVar9 = *plVar11;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
                if (bVar3) {
                  *plVar11 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar6);
              }
            }
            unaff_x22 = *(long **)((long)register0x00000008 + -200);
            if (unaff_x22 != (long *)0x0) {
              plVar6 = unaff_x22 + 1;
              do {
                lVar9 = *plVar6;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
                if (bVar3) {
                  *plVar6 = lVar9 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (lVar9 == 0) {
                (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
              }
            }
            func_0x00010a048e34((undefined1 *)((long)register0x00000008 + -0x270),
                                *(undefined8 *)((long)register0x00000008 + -0x278));
            unaff_x27 = param_1[0x56];
          } while (unaff_x24 < (ulong)(param_1[0x57] - unaff_x27 >> 5));
        }
        (**(code **)(*(long *)*unaff_x23 + 0xb0))();
        unaff_x19 = (long *)param_1[0x5f];
        plVar6 = unaff_x23;
        FUN_10a1db4cc();
        *(undefined4 *)((long)param_1 + 0x74) = 2;
        unaff_x21 = *(long **)((long)register0x00000008 + -0x280);
      }
      unaff_x20 = param_2;
      if (unaff_x21 != (long *)0x0) {
        plVar11 = unaff_x21 + 1;
        do {
          lVar9 = *plVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar9 == 0) {
          (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
          unaff_x19 = unaff_x21;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
    break;
    ___stack_chk_fail();
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x278));
    func_0x00010a0523dc((undefined1 *)((long)register0x00000008 + -0x288));
    unaff_x30 = FUN_10a6bf948;
    param_1 = unaff_x19;
    __Unwind_Resume();
    param_1 = param_1 + -0x51;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x310);
    param_2 = plVar6;
  }
  return;
}



/* Entry: 10a6bf948; end: 10a6bf94f;  */

void FUN_10a6bf948(long *param_1,long *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  uint uVar13;
  long *unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined1 *unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    plVar7 = param_1 + -0x51;
    *(undefined1 **)((long)register0x00000008 + -0x60) = unaff_x28;
    *(long *)((long)register0x00000008 + -0x58) = unaff_x27;
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x26;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x25;
    *(ulong *)((long)register0x00000008 + -0x40) = unaff_x24;
    *(long **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    plVar8 = param_2;
    if ((*(int *)((long)param_1 + -0x214) != 2) &&
       (plVar7 = *(long **)(param_1[8] + 0x268), plVar7 != (long *)0x0)) {
      plVar8 = (long *)0x1;
      FUN_10a088744();
      *(int *)((long)register0x00000008 + -0x290) = (int)plVar7;
      if (plVar8 == (long *)0x0) {
        unaff_x21 = (long *)0x0;
        *(undefined8 *)((long)register0x00000008 + -0x288) = 0;
        *(undefined8 *)((long)register0x00000008 + -0x280) = 0;
      }
      else {
        unaff_x21 = (long *)plVar8[1];
        lVar11 = *plVar8;
        *(long *)((long)register0x00000008 + -0x280) = plVar8[1];
        *(long *)((long)register0x00000008 + -0x288) = lVar11;
        if (unaff_x21 != (long *)0x0) {
          plVar1 = unaff_x21 + 1;
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar4) {
              *plVar1 = *plVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
      if ((int)plVar7 == 2) {
        unaff_x23 = param_1 + 0xc;
        FUN_10a53daa8((undefined1 *)((long)register0x00000008 + -0x278),param_1[-0x3f],unaff_x23);
        uVar10 = (ulong)*(byte *)(param_1[-0x3f] + 0x29);
        if (5 < uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10a6bf8f8);
          (*pcVar5)();
        }
        plVar7 = *(long **)(param_1[-0x3f] + uVar10 * 8 + 0x30);
        (**(code **)(*plVar7 + 0x48))
                  (plVar7,param_1[8],*(undefined8 *)((long)register0x00000008 + -0x278));
        unaff_x22 = *(long **)((long)register0x00000008 + -0x270);
        if (unaff_x22 != (long *)0x0) {
          plVar7 = unaff_x22 + 1;
          do {
            lVar11 = *plVar7;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
            if (bVar4) {
              *plVar7 = lVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
            __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
          }
        }
        unaff_x27 = param_1[5];
        if (param_1[6] != unaff_x27) {
          unaff_x24 = 0;
          unaff_x26 = (undefined1 *)((long)register0x00000008 + -0x278);
          *(undefined1 **)((long)register0x00000008 + -0x308) =
               (undefined1 *)((long)register0x00000008 + -0x7c);
          unaff_x28 = (undefined1 *)((long)register0x00000008 + -0x300);
          do {
            *(undefined8 *)((long)register0x00000008 + -0x278) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xd0) = 0;
            *(undefined8 *)((long)register0x00000008 + -200) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xc0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xb8) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0xb0) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0xa8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x98) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x90) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x88) = 0xffffffffffffffff;
            *(undefined4 *)((long)register0x00000008 + -0x80) = 0x3f800000;
            **(undefined8 **)((long)register0x00000008 + -0x308) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x74) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2a0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2f8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2f0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x2d8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2c0) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x2b0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2a8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2b8) = 0xffffffffffffffff;
            *(undefined4 *)((long)register0x00000008 + -0x2a0) = 0;
            FUN_10a061728((undefined1 *)((long)register0x00000008 + -0x278),
                          (undefined1 *)((long)register0x00000008 + -0x300));
            plVar7 = *(long **)((long)register0x00000008 + -0x2d0);
            if (plVar7 != (long *)0x0) {
              plVar8 = plVar7 + 1;
              do {
                lVar11 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            plVar7 = *(long **)((long)register0x00000008 + -0x2f8);
            if (plVar7 != (long *)0x0) {
              plVar8 = plVar7 + 1;
              do {
                lVar11 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            lVar12 = param_1[0xc];
            lVar11 = param_1[0xd];
            if (lVar11 != 0) {
              plVar7 = (long *)(lVar11 + 8);
              do {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = *plVar7 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
            }
            plVar7 = *(long **)((long)register0x00000008 + -0x268);
            *(long *)((long)register0x00000008 + -0x270) = lVar12;
            *(long *)((long)register0x00000008 + -0x268) = lVar11;
            if (plVar7 != (long *)0x0) {
              plVar8 = plVar7 + 1;
              do {
                lVar11 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            *(undefined8 *)((long)register0x00000008 + -0x260) = 0;
            *(undefined8 *)((long)register0x00000008 + -600) = 0xffffffffffffffff;
            *(undefined8 *)((long)register0x00000008 + -0x250) = 0xffffffffffffffff;
            *(undefined4 *)((long)register0x00000008 + -0x210) = 1;
            *(undefined4 *)((long)register0x00000008 + -0x78) = 2;
            (**(code **)(*param_2 + 0x88))
                      (param_2,(undefined1 *)((long)register0x00000008 + -0x278));
            plVar8 = (long *)*unaff_x23;
            plVar7 = plVar8;
            (**(code **)(*plVar8 + 0x28))();
            (**(code **)(*plVar8 + 0x30))();
            uVar13 = (uint)plVar7;
            if (uVar13 < 2) {
              uVar13 = 1;
            }
            uVar6 = (uint)plVar8;
            if (uVar6 < 2) {
              uVar6 = 1;
            }
            *(undefined8 *)((long)register0x00000008 + -0x300) = 0;
            *(ulong *)((long)register0x00000008 + -0x2f8) = CONCAT44(uVar6,uVar13);
            (**(code **)(*param_2 + 0xc0))
                      (param_2,(undefined1 *)((long)register0x00000008 + -0x300));
            puVar2 = (undefined8 *)(unaff_x27 + unaff_x24 * 0x20);
            plVar7 = param_2 + 4;
            FUN_10a5dfd94(plVar7,*puVar2);
            uVar9 = puVar2[2];
            *(undefined8 *)((long)register0x00000008 + -0x2f4) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2fc) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x300) = 0x3f800000;
            *(undefined4 *)((long)register0x00000008 + -0x2ec) = 0x3f800000;
            *(undefined8 *)((long)register0x00000008 + -0x2e8) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2e0) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2cc) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x2d4) = 0;
            *(undefined4 *)((long)register0x00000008 + -0x2d8) = 0x3f800000;
            unaff_x25 = 0x3f800000;
            *(undefined4 *)((long)register0x00000008 + -0x2c4) = 0x3f800000;
            (**(code **)(*param_2 + 0x58))
                      (param_2,uVar9,plVar7,(undefined1 *)((long)register0x00000008 + -0x300),3);
            (**(code **)(*param_2 + 0x90))(param_2,0,3,3);
            unaff_x24 = unaff_x24 + 1;
            if (unaff_x24 < (ulong)(param_1[6] - param_1[5] >> 5)) {
              (**(code **)(*param_2 + 0x98))(param_2,unaff_x23,0,0,param_1 + 10,0,0);
            }
            plVar7 = *(long **)((long)register0x00000008 + -0xa0);
            if (plVar7 != (long *)0x0) {
              plVar8 = plVar7 + 1;
              do {
                lVar11 = *plVar8;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                if (bVar4) {
                  *plVar8 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
                __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
              }
            }
            unaff_x22 = *(long **)((long)register0x00000008 + -200);
            if (unaff_x22 != (long *)0x0) {
              plVar7 = unaff_x22 + 1;
              do {
                lVar11 = *plVar7;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
                if (bVar4) {
                  *plVar7 = lVar11 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (lVar11 == 0) {
                (**(code **)(*unaff_x22 + 0x10))(unaff_x22);
                __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x22);
              }
            }
            func_0x00010a048e34((undefined1 *)((long)register0x00000008 + -0x270),
                                *(undefined8 *)((long)register0x00000008 + -0x278));
            unaff_x27 = param_1[5];
          } while (unaff_x24 < (ulong)(param_1[6] - unaff_x27 >> 5));
        }
        (**(code **)(*(long *)*unaff_x23 + 0xb0))();
        plVar7 = (long *)param_1[0xe];
        plVar8 = unaff_x23;
        FUN_10a1db4cc();
        *(undefined4 *)((long)param_1 + -0x214) = 2;
        unaff_x21 = *(long **)((long)register0x00000008 + -0x280);
      }
      unaff_x20 = param_2;
      if (unaff_x21 != (long *)0x0) {
        plVar1 = unaff_x21 + 1;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
          plVar7 = unaff_x21;
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x70))
    break;
    ___stack_chk_fail();
    func_0x00010a05248c((undefined1 *)((long)register0x00000008 + -0x278));
    func_0x00010a0523dc((undefined1 *)((long)register0x00000008 + -0x288));
    unaff_x30 = FUN_10a6bf948;
    param_1 = plVar7;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x310);
    param_2 = plVar8;
    unaff_x19 = plVar7;
  }
  return;
}



/* Entry: 10a6bf950; end: 10a6bfa03;  */

void FUN_10a6bf950(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long **)(param_1 + 0x98) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x50))();
  }
  func_0x00010a1ec8c8(param_1);
  FUN_10a6c9614(param_1 + 0x2b0,*(undefined8 *)(param_1 + 0x2b0));
  FUN_10a02d8cc(param_1 + 0x2c8);
  FUN_10a18cbd8(param_1 + 0x2e8);
  plVar5 = *(long **)(param_1 + 0x300);
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a6bfa04; end: 10a6bfa1f;  */

long FUN_10a6bfa04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x90);
  FUN_10a2421c8(lVar1);
  return lVar1 + 0x128;
}



/* Entry: 10a6bfa20; end: 10a6bfbe7;  */

void FUN_10a6bfa20(long param_1,long *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 uStack_31;
  
  lVar4 = *(long *)(param_1 + 0x1b8);
  plVar5 = (long *)(lVar4 + 8);
  plVar8 = (long *)*plVar5;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar5;
    do {
      lVar6 = 8;
      if ((ulong)param_2[3] <= (ulong)plVar8[7]) {
        lVar6 = 0;
        plVar7 = plVar8;
      }
      plVar8 = *(long **)((long)plVar8 + lVar6);
    } while (plVar8 != (long *)0x0);
    if ((((plVar7 != plVar5) && ((ulong)plVar7[7] <= (ulong)param_2[3])) &&
        (lVar6 = plVar7[8], lVar6 != 0)) &&
       ((*(short *)(lVar6 + 0x20) == 0xb &&
        (auVar3[1] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x24) >> 0x20) ==
                      (float)((ulong)*param_3 >> 0x20)),
        auVar3[0] = -((float)*(undefined8 *)(lVar6 + 0x24) == (float)*param_3),
        auVar3[2] = -((float)*(undefined8 *)(lVar6 + 0x2c) == (float)param_3[1]),
        auVar3[3] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x2c) >> 0x20) ==
                     (float)((ulong)param_3[1] >> 0x20)),
        auVar3[4] = -((float)*(undefined8 *)(lVar6 + 0x34) == (float)param_3[2]),
        auVar3[5] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x34) >> 0x20) ==
                     (float)((ulong)param_3[2] >> 0x20)),
        auVar3[6] = -((float)*(undefined8 *)(lVar6 + 0x3c) == (float)param_3[3]),
        auVar3[7] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x3c) >> 0x20) ==
                     (float)((ulong)param_3[3] >> 0x20)),
        auVar3[8] = -((float)*(undefined8 *)(lVar6 + 0x44) == (float)param_3[4]),
        auVar3[9] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x44) >> 0x20) ==
                     (float)((ulong)param_3[4] >> 0x20)),
        auVar3[10] = -((float)*(undefined8 *)(lVar6 + 0x4c) == (float)param_3[5]),
        auVar3[0xb] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x4c) >> 0x20) ==
                       (float)((ulong)param_3[5] >> 0x20)),
        auVar3[0xc] = -((float)*(undefined8 *)(lVar6 + 0x54) == (float)param_3[6]),
        auVar3[0xd] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x54) >> 0x20) ==
                       (float)((ulong)param_3[6] >> 0x20)),
        auVar3[0xe] = -((float)*(undefined8 *)(lVar6 + 0x5c) == (float)param_3[7]),
        auVar3[0xf] = -((float)((ulong)*(undefined8 *)(lVar6 + 0x5c) >> 0x20) ==
                       (float)((ulong)param_3[7] >> 0x20)), bVar9 = NEON_uminv(auVar3,1),
        (bVar9 & 1) != 0)))) {
      return;
    }
  }
  lStack_48 = param_1 + 0x1b8;
  do {
    lVar6 = lRam0000000113301700;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar1 != '\0');
  *(long *)(param_1 + 0x1c8) = lVar6;
  uStack_40 = 0;
  plStack_58 = param_2;
  FUN_10a0da6b4(lVar4,param_2,&UNK_10dd5b8f9,&plStack_58,&uStack_31);
  lVar6 = *(long *)(lVar4 + 0x40);
  if ((lVar6 == 0) || (*(short *)(lVar6 + 0x20) != 0xb)) {
    plVar5 = (long *)0x80;
    __Znwm();
    plVar5[1] = 0;
    plVar5[2] = 0;
    plVar8 = plVar5 + 3;
    *plVar5 = (long)&PTR_DAT_110ba1f48;
    FUN_10a367954(plVar8,param_2,param_3);
    plStack_58 = plVar8;
    plStack_50 = plVar5;
    func_0x00010a0da650((long *)(lVar4 + 0x40),&plStack_58);
    plVar5 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar8 = plStack_50 + 1;
      do {
        lVar4 = *plVar8;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar2) {
          *plVar8 = lVar4 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar4 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  else {
    FUN_10a36f020(lVar6,param_3);
  }
  FUN_10a0daab8(&lStack_48);
  return;
}



/* Entry: 10a6bfbe8; end: 10a6bfd7f;  */

void FUN_10a6bfbe8(long param_1,long *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plStack_58;
  long *plStack_50;
  long lStack_48;
  undefined1 uStack_40;
  undefined1 uStack_31;
  
  lVar3 = *(long *)(param_1 + 0x1b8);
  plVar4 = (long *)(lVar3 + 8);
  plVar7 = (long *)*plVar4;
  if (plVar7 != (long *)0x0) {
    plVar6 = plVar4;
    do {
      lVar5 = 8;
      if ((ulong)param_2[3] <= (ulong)plVar7[7]) {
        lVar5 = 0;
        plVar6 = plVar7;
      }
      plVar7 = *(long **)((long)plVar7 + lVar5);
    } while (plVar7 != (long *)0x0);
    if ((((plVar6 != plVar4) && ((ulong)plVar6[7] <= (ulong)param_2[3])) &&
        (lVar5 = plVar6[8], lVar5 != 0)) &&
       ((*(short *)(lVar5 + 0x20) == 2 && (*(int *)(lVar5 + 0x24) == *param_3)))) {
      return;
    }
  }
  lStack_48 = param_1 + 0x1b8;
  do {
    lVar5 = lRam0000000113301700;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113301700,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      lRam0000000113301700 = lRam0000000113301700 + 1;
    }
  } while (cVar1 != '\0');
  *(long *)(param_1 + 0x1c8) = lVar5;
  uStack_40 = 0;
  plStack_58 = param_2;
  FUN_10a0da6b4(lVar3,param_2,&UNK_10dd5b8f9,&plStack_58,&uStack_31);
  lVar5 = *(long *)(lVar3 + 0x40);
  if ((lVar5 == 0) || (*(short *)(lVar5 + 0x20) != 2)) {
    plVar4 = (long *)0x80;
    __Znwm();
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar7 = plVar4 + 3;
    *plVar4 = (long)&PTR_DAT_110ba1f48;
    FUN_10a3673a4(plVar7,param_2,param_3);
    plStack_58 = plVar7;
    plStack_50 = plVar4;
    func_0x00010a0da650((long *)(lVar3 + 0x40),&plStack_58);
    plVar4 = plStack_50;
    if (plStack_50 != (long *)0x0) {
      plVar7 = plStack_50 + 1;
      do {
        lVar3 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar3 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar3 == 0) {
        (**(code **)(*plStack_50 + 0x10))(plStack_50);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
  }
  else {
    FUN_10a36eca4(lVar5,param_3);
  }
  FUN_10a0daab8(&lStack_48);
  return;
}



/* Entry: 10a6bfd80; end: 10a6bfd83;  */

undefined8 * FUN_10a6bfd80(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  func_0x00010a140010(param_1 + 0x20);
  func_0x00010a140010(param_1 + 0x1e);
  func_0x00010a140010(param_1 + 0x1c);
  func_0x00010a140010(param_1 + 0x1a);
  func_0x00010a140010(param_1 + 0x18);
  FUN_10a003a64(param_1 + 0x17,0);
  FUN_10a6ca180(param_1 + 0x16,0);
  if (param_1[0x13] != 0) {
    param_1[0x14] = param_1[0x13];
    __ZdlPv();
  }
  func_0x00010a05248c(param_1 + 0x11);
  func_0x00010a05248c(param_1 + 0xf);
  if (param_1[10] != 0) {
    piVar1 = (int *)(param_1[10] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 3);
    }
  }
  param_1[10] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  if (0 < *(int *)((long)param_1 + 0x1c)) {
    lVar5 = 0;
    lVar7 = param_1[0xb];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x1c));
  }
  puVar6 = (undefined8 *)param_1[0xc];
  if (puVar6 != param_1 + 0xd && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6bfd84; end: 10a6bfd97;  */

void FUN_10a6bfd84(void)

{
  FUN_10a6c969c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6bfd98; end: 10a6bfdf7;  */

undefined8 * FUN_10a6bfd98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6bfdf8; end: 10a6bfdfb;  */

undefined8 * FUN_10a6bfdf8(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_110c0ffe0;
  if (param_1[0x1d] != 0) {
    piVar1 = (int *)(param_1[0x1d] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x16);
    }
  }
  param_1[0x1d] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  if (0 < *(int *)((long)param_1 + 0xb4)) {
    lVar5 = 0;
    lVar7 = param_1[0x1e];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0xb4));
  }
  puVar6 = (undefined8 *)param_1[0x1f];
  if (puVar6 != param_1 + 0x20 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_109fff0a0(param_1 + 0x12,param_1[0x13]);
  if (param_1[0xd] != 0) {
    piVar1 = (int *)(param_1[0xd] + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 6);
    }
  }
  param_1[0xd] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  if (0 < *(int *)((long)param_1 + 0x34)) {
    lVar5 = 0;
    lVar7 = param_1[0xe];
    do {
      *(undefined4 *)(lVar7 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)((long)param_1 + 0x34));
  }
  puVar6 = (undefined8 *)param_1[0xf];
  if (puVar6 != param_1 + 0x10 && puVar6 != (undefined8 *)0x0) {
    _free(puVar6[-1]);
  }
  FUN_10a6d5f2c(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a6bfdfc; end: 10a6bfe0f;  */

void FUN_10a6bfdfc(void)

{
  FUN_10a6c97b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6bfe10; end: 10a6bffab;  */

undefined8 * FUN_10a6bfe10(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110c46238;
  param_1[2] = &PTR_DAT_110c462d8;
  param_1[7] = &PTR_DAT_110c46330;
  FUN_10a3786c8(param_1 + 0x1c);
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



/* Entry: 10a6bffac; end: 10a6bffaf;  */

undefined8 * FUN_10a6bffac(undefined8 *param_1)

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
  
  FUN_10a6d7e48(param_1 + 100);
  param_1[0x60] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[99] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[99] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x61);
  FUN_10a00dc2c(param_1 + 0x5b);
  FUN_10a1e3810(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c106d0;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x65] = &PTR_DAT_110c10830;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c10880;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x65] = &PTR_DAT_110c10950;
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



/* Entry: 10a6bffb0; end: 10a6bffc3;  */

void FUN_10a6bffb0(void)

{
  FUN_10a6c98fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6bffc4; end: 10a6bffd7;  */

long FUN_10a6bffc4(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a6bffd8; end: 10a6bffef;  */

void FUN_10a6bffd8(long param_1)

{
  FUN_10a6c98fc(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6bfff0; end: 10a6bfff7;  */

undefined8 * FUN_10a6bfff0(undefined8 *param_1)

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
  FUN_10a6d7e48(param_1 + 0x5f);
  param_1[0x5b] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x5e] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x5e] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x5c);
  FUN_10a00dc2c(param_1 + 0x56);
  FUN_10a1e3810(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110c106d0;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x60] = &PTR_DAT_110c10830;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c10880;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x60] = &PTR_DAT_110c10950;
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



/* Entry: 10a6bfff8; end: 10a6c000f;  */

void FUN_10a6bfff8(long param_1)

{
  FUN_10a6c98fc(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c0010; end: 10a6c0017;  */

undefined8 * FUN_10a6c0010(undefined8 *param_1)

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
  FUN_10a6d7e48(param_1 + 0x4f);
  param_1[0x4b] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[0x4e] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[0x4e] = 0;
  }
  func_0x00010a004e5c(param_1 + 0x4c);
  FUN_10a00dc2c(param_1 + 0x46);
  FUN_10a1e3810(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c106d0;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x50] = &PTR_DAT_110c10830;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c10880;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x50] = &PTR_DAT_110c10950;
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



/* Entry: 10a6c0018; end: 10a6c002f;  */

void FUN_10a6c0018(long param_1)

{
  FUN_10a6c98fc(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c0030; end: 10a6c0037;  */

undefined8 * FUN_10a6c0030(long param_1)

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
  
  puVar1 = (undefined8 *)(param_1 + -0x2d8);
  FUN_10a6d7e48(param_1 + 0x48);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_110b9f9a8;
  if (*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x40) = 0;
  }
  func_0x00010a004e5c(param_1 + 0x30);
  FUN_10a00dc2c(param_1);
  FUN_10a1e3810(param_1 + -0x50);
  *puVar1 = &PTR_FUN_110c106d0;
  *(undefined ***)(param_1 + -0x2c8) = &PTR_FUN_110bb3968;
  *(undefined ***)(param_1 + -0x2b0) = &PTR_DAT_110bb3998;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c10830;
  *(undefined8 *)(param_1 + -0x230) = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x70);
  func_0x00010a042c64(param_1 + -0x98);
  func_0x00010a0523dc(param_1 + -0xb0);
  if (*(char *)(param_1 + -0xf8) == '\x01') {
    func_0x00010a042d30(param_1 + -0x108);
  }
  *(undefined ***)(param_1 + -0x230) = &PTR_FUN_110b9f768;
  FUN_10a1c00f4((undefined8 *)(param_1 + -0x230));
  *puVar1 = &PTR_DAT_110c10880;
  *(undefined ***)(param_1 + -0x2c8) = &PTR_FUN_110b9f848;
  *(undefined ***)(param_1 + -0x2b0) = &PTR_DAT_110b9f878;
  *(undefined ***)(param_1 + 0x50) = &PTR_DAT_110c10950;
  FUN_10a042dcc(param_1 + -0x240);
  *puVar1 = &PTR_DAT_110c60a00;
  *(undefined ***)(param_1 + -0x2c8) = &PTR_DAT_110c60a88;
  *(undefined ***)(param_1 + -0x2b0) = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x280);
  puVar6 = *(undefined8 **)(param_1 + -0x278);
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
  plVar4 = (long *)(param_1 + -0x288);
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x2c0);
  if ((*(long *)(param_1 + -0x248) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + -0x248) + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)(param_1 + -0x249) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + -0x260));
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (*(long *)(param_1 + -0x290) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + -0x2b0) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x2a8);
  *(undefined ***)(param_1 + -0x2c8) = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x2c0);
  return puVar1;
}



/* Entry: 10a6c0038; end: 10a6c004f;  */

void FUN_10a6c0038(long param_1)

{
  FUN_10a6c98fc(param_1 + -0x2d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c0050; end: 10a6c0057;  */

undefined8 * FUN_10a6c0050(undefined8 *param_1)

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
  
  puVar1 = param_1 + -0x60;
  FUN_10a6d7e48(param_1 + 4);
  *param_1 = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
  }
  func_0x00010a004e5c(param_1 + 1);
  FUN_10a00dc2c(param_1 + -5);
  FUN_10a1e3810(param_1 + -0xf);
  *puVar1 = &PTR_FUN_110c106d0;
  param_1[-0x5e] = &PTR_FUN_110bb3968;
  param_1[-0x5b] = &PTR_DAT_110bb3998;
  param_1[5] = &PTR_DAT_110c10830;
  param_1[-0x4b] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x13);
  func_0x00010a042c64(param_1 + -0x18);
  func_0x00010a0523dc(param_1 + -0x1b);
  if (*(char *)(param_1 + -0x24) == '\x01') {
    func_0x00010a042d30(param_1 + -0x26);
  }
  param_1[-0x4b] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + -0x4b);
  *puVar1 = &PTR_DAT_110c10880;
  param_1[-0x5e] = &PTR_FUN_110b9f848;
  param_1[-0x5b] = &PTR_DAT_110b9f878;
  param_1[5] = &PTR_DAT_110c10950;
  FUN_10a042dcc(param_1 + -0x4d);
  *puVar1 = &PTR_DAT_110c60a00;
  param_1[-0x5e] = &PTR_DAT_110c60a88;
  param_1[-0x5b] = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x55);
  puVar6 = (undefined8 *)param_1[-0x54];
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
  plVar4 = param_1 + -0x56;
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x5d);
  if ((param_1[-0x4e] != 0) && (lVar2 = *(long *)(param_1[-0x4e] + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)((long)param_1 + -0x271) < '\0') {
    __ZdlPv(param_1[-0x51]);
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (param_1[-0x57] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-0x5b] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x5a);
  param_1[-0x5e] = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x5d);
  return puVar1;
}



/* Entry: 10a6c0058; end: 10a6c006f;  */

void FUN_10a6c0058(long param_1)

{
  FUN_10a6c98fc(param_1 + -0x300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c0070; end: 10a6c007f;  */

undefined8 * FUN_10a6c0070(long *param_1)

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
  FUN_10a6d7e48(puVar1 + 100);
  puVar1[0x60] = &PTR_FUN_110b9f9a8;
  if ((undefined8 *)puVar1[99] != (undefined8 *)0x0) {
    *(undefined8 *)puVar1[99] = 0;
  }
  func_0x00010a004e5c(puVar1 + 0x61);
  FUN_10a00dc2c(puVar1 + 0x5b);
  FUN_10a1e3810(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c106d0;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x65] = &PTR_DAT_110c10830;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c10880;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x65] = &PTR_DAT_110c10950;
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



/* Entry: 10a6c0080; end: 10a6c00af;  */

void FUN_10a6c0080(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  FUN_10a6c98fc((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a6c00b0; end: 10a6c00b3;  */

undefined8 * FUN_10a6c00b0(undefined8 *param_1)

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
  
  func_0x00010a061678(param_1 + 0x5f);
  func_0x00010a0523dc(param_1 + 0x5d);
  func_0x00010a0523dc(param_1 + 0x5b);
  func_0x00010a05248c(param_1 + 0x59);
  FUN_10a6c966c(param_1 + 0x56);
  FUN_10a00dc2c(param_1 + 0x51);
  *param_1 = &PTR_FUN_110c109f8;
  param_1[2] = &PTR_FUN_110bb3968;
  param_1[5] = &PTR_DAT_110bb3998;
  param_1[0x61] = &PTR_DAT_110c10b58;
  param_1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x4d);
  func_0x00010a042c64(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x45);
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    func_0x00010a042d30(param_1 + 0x3a);
  }
  param_1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x15);
  *param_1 = &PTR_DAT_110c10ba8;
  param_1[2] = &PTR_FUN_110b9f848;
  param_1[5] = &PTR_DAT_110b9f878;
  param_1[0x61] = &PTR_DAT_110c10c78;
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



/* Entry: 10a6c00b4; end: 10a6c00c7;  */

void FUN_10a6c00b4(void)

{
  func_0x00010a6c99f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c00c8; end: 10a6c00d7;  */

long FUN_10a6c00c8(long param_1)

{
  return param_1 + 0xa8;
}



/* Entry: 10a6c00d8; end: 10a6c00ef;  */

void FUN_10a6c00d8(long param_1)

{
  func_0x00010a6c99f8(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c00f0; end: 10a6c00f7;  */

undefined8 * FUN_10a6c00f0(undefined8 *param_1)

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
  func_0x00010a061678(param_1 + 0x5a);
  func_0x00010a0523dc(param_1 + 0x58);
  func_0x00010a0523dc(param_1 + 0x56);
  func_0x00010a05248c(param_1 + 0x54);
  FUN_10a6c966c(param_1 + 0x51);
  FUN_10a00dc2c(param_1 + 0x4c);
  *puVar1 = &PTR_FUN_110c109f8;
  param_1[-3] = &PTR_FUN_110bb3968;
  *param_1 = &PTR_DAT_110bb3998;
  param_1[0x5c] = &PTR_DAT_110c10b58;
  param_1[0x10] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x48);
  func_0x00010a042c64(param_1 + 0x43);
  func_0x00010a0523dc(param_1 + 0x40);
  if (*(char *)(param_1 + 0x37) == '\x01') {
    func_0x00010a042d30(param_1 + 0x35);
  }
  param_1[0x10] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1 + 0x10);
  *puVar1 = &PTR_DAT_110c10ba8;
  param_1[-3] = &PTR_FUN_110b9f848;
  *param_1 = &PTR_DAT_110b9f878;
  param_1[0x5c] = &PTR_DAT_110c10c78;
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



/* Entry: 10a6c00f8; end: 10a6c010f;  */

void FUN_10a6c00f8(long param_1)

{
  func_0x00010a6c99f8(param_1 + -0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c0110; end: 10a6c0117;  */

undefined8 * FUN_10a6c0110(undefined8 *param_1)

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
  func_0x00010a061678(param_1 + 0x4a);
  func_0x00010a0523dc(param_1 + 0x48);
  func_0x00010a0523dc(param_1 + 0x46);
  func_0x00010a05248c(param_1 + 0x44);
  FUN_10a6c966c(param_1 + 0x41);
  FUN_10a00dc2c(param_1 + 0x3c);
  *puVar1 = &PTR_FUN_110c109f8;
  param_1[-0x13] = &PTR_FUN_110bb3968;
  param_1[-0x10] = &PTR_DAT_110bb3998;
  param_1[0x4c] = &PTR_DAT_110c10b58;
  *param_1 = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + 0x38);
  func_0x00010a042c64(param_1 + 0x33);
  func_0x00010a0523dc(param_1 + 0x30);
  if (*(char *)(param_1 + 0x27) == '\x01') {
    func_0x00010a042d30(param_1 + 0x25);
  }
  *param_1 = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(param_1);
  *puVar1 = &PTR_DAT_110c10ba8;
  param_1[-0x13] = &PTR_FUN_110b9f848;
  param_1[-0x10] = &PTR_DAT_110b9f878;
  param_1[0x4c] = &PTR_DAT_110c10c78;
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



/* Entry: 10a6c0118; end: 10a6c012f;  */

void FUN_10a6c0118(long param_1)

{
  func_0x00010a6c99f8(param_1 + -0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c0130; end: 10a6c0137;  */

undefined8 * FUN_10a6c0130(long param_1)

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
  
  puVar1 = (undefined8 *)(param_1 + -0x288);
  func_0x00010a061678(param_1 + 0x70);
  func_0x00010a0523dc(param_1 + 0x60);
  func_0x00010a0523dc(param_1 + 0x50);
  func_0x00010a05248c(param_1 + 0x40);
  FUN_10a6c966c(param_1 + 0x28);
  FUN_10a00dc2c(param_1);
  *puVar1 = &PTR_FUN_110c109f8;
  *(undefined ***)(param_1 + -0x278) = &PTR_FUN_110bb3968;
  *(undefined ***)(param_1 + -0x260) = &PTR_DAT_110bb3998;
  *(undefined ***)(param_1 + 0x80) = &PTR_DAT_110c10b58;
  *(undefined8 *)(param_1 + -0x1e0) = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(param_1 + -0x20);
  func_0x00010a042c64(param_1 + -0x48);
  func_0x00010a0523dc(param_1 + -0x60);
  if (*(char *)(param_1 + -0xa8) == '\x01') {
    func_0x00010a042d30(param_1 + -0xb8);
  }
  *(undefined ***)(param_1 + -0x1e0) = &PTR_FUN_110b9f768;
  FUN_10a1c00f4((undefined8 *)(param_1 + -0x1e0));
  *puVar1 = &PTR_DAT_110c10ba8;
  *(undefined ***)(param_1 + -0x278) = &PTR_FUN_110b9f848;
  *(undefined ***)(param_1 + -0x260) = &PTR_DAT_110b9f878;
  *(undefined ***)(param_1 + 0x80) = &PTR_DAT_110c10c78;
  FUN_10a042dcc(param_1 + -0x1f0);
  *puVar1 = &PTR_DAT_110c60a00;
  *(undefined ***)(param_1 + -0x278) = &PTR_DAT_110c60a88;
  *(undefined ***)(param_1 + -0x260) = &PTR_DAT_110c60ab8;
  ppuVar3 = (undefined **)(param_1 + -0x230);
  puVar6 = *(undefined8 **)(param_1 + -0x228);
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
  plVar4 = (long *)(param_1 + -0x238);
  if ((*plVar4 != 0) && (*(undefined ***)(*(long *)(*plVar4 + 8) + 0x20) == &PTR_DAT_110b9f988)) {
    FUN_10a5ae930();
  }
  FUN_10a3a743c(param_1 + -0x270);
  if ((*(long *)(param_1 + -0x1f8) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + -0x1f8) + 0x828), lVar2 != 0)) {
    FUN_10a1dfb2c(lVar2,puVar1);
  }
  if (*(char *)(param_1 + -0x1f9) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + -0x210));
  }
  appuStack_180[0] = ppuVar3;
  FUN_10ac78cf4(appuStack_180);
  lVar2 = *plVar4;
  *plVar4 = 0;
  if (lVar2 != 0) {
    FUN_10ac7d690(plVar4);
  }
  if (*(long *)(param_1 + -0x240) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *(undefined ***)(param_1 + -0x260) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -600);
  *(undefined ***)(param_1 + -0x278) = &PTR____cxa_pure_virtual_110bcfb60;
  func_0x00010a004e5c(param_1 + -0x270);
  return puVar1;
}



/* Entry: 10a6c0138; end: 10a6c014f;  */

void FUN_10a6c0138(long param_1)

{
  func_0x00010a6c99f8(param_1 + -0x288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c0150; end: 10a6c015f;  */

undefined8 * FUN_10a6c0150(long *param_1)

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
  func_0x00010a061678(puVar1 + 0x5f);
  func_0x00010a0523dc(puVar1 + 0x5d);
  func_0x00010a0523dc(puVar1 + 0x5b);
  func_0x00010a05248c(puVar1 + 0x59);
  FUN_10a6c966c(puVar1 + 0x56);
  FUN_10a00dc2c(puVar1 + 0x51);
  *puVar1 = &PTR_FUN_110c109f8;
  puVar1[2] = &PTR_FUN_110bb3968;
  puVar1[5] = &PTR_DAT_110bb3998;
  puVar1[0x61] = &PTR_DAT_110c10b58;
  puVar1[0x15] = &PTR_DAT_110bb39f0;
  FUN_10a042c0c(puVar1 + 0x4d);
  func_0x00010a042c64(puVar1 + 0x48);
  func_0x00010a0523dc(puVar1 + 0x45);
  if (*(char *)(puVar1 + 0x3c) == '\x01') {
    func_0x00010a042d30(puVar1 + 0x3a);
  }
  puVar1[0x15] = &PTR_FUN_110b9f768;
  FUN_10a1c00f4(puVar1 + 0x15);
  *puVar1 = &PTR_DAT_110c10ba8;
  puVar1[2] = &PTR_FUN_110b9f848;
  puVar1[5] = &PTR_DAT_110b9f878;
  puVar1[0x61] = &PTR_DAT_110c10c78;
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



/* Entry: 10a6c0160; end: 10a6c018f;  */

void FUN_10a6c0160(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a6c99f8((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a6c0190; end: 10a6c01a3;  */

void FUN_10a6c0190(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_109ffde64();
  if (puVar1[3] != 0) {
    puVar1[4] = puVar1[3];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)puVar1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*puVar1);
  return;
}



/* Entry: 10a6c01a4; end: 10a6c01e7;  */

void FUN_10a6c01a4(undefined8 *param_1)

{
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_1);
  return;
}



/* Entry: 10a6c01e8; end: 10a6c024f;  */

void FUN_10a6c01e8(long *param_1)

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
        FUN_10a6c01a4(lVar2);
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



/* Entry: 10a6c0250; end: 10a6c02ef;  */

void FUN_10a6c0250(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  int *piStack_48;
  int *piStack_40;
  int *piVar3;
  
  FUN_109ffe1f4(&piStack_48,(long)*(int *)(param_2 + 8));
  if (piStack_48 != piStack_40) {
    iVar1 = 0;
    piVar2 = piStack_48;
    do {
      piVar3 = piVar2 + 1;
      *piVar2 = iVar1;
      iVar1 = iVar1 + 1;
      piVar2 = piVar3;
    } while (piVar3 != piStack_40);
  }
  FUN_10a6c04d8(param_1,param_2,param_3);
  if (piStack_48 != (int *)0x0) {
    piStack_40 = piStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c02f0; end: 10a6c04d7;  */

void FUN_10a6c02f0(undefined8 param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 **ppuVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  long lVar9;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  long *plStack_160;
  undefined8 uStack_158;
  undefined4 auStack_150 [2];
  undefined8 ****ppppuStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  undefined8 ****ppppuStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_68 = (undefined8 *****)0x0;
  ppppuStack_60 = (undefined8 *****)0x0;
  ppppuStack_58 = (undefined8 *****)0x0;
  iVar8 = *(int *)(param_2 + 8);
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      puVar3 = (undefined8 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * lVar9);
      if (ppppuStack_60 < ppppuStack_58) {
        pppppuVar1 = (undefined8 *****)(ppppuStack_60 + 1);
        *ppppuStack_60 =
             (undefined8 ****)CONCAT44((int)(float)((ulong)*puVar3 >> 0x20),(int)(float)*puVar3);
      }
      else {
        pppppuVar1 = &ppppuStack_68;
        FUN_10a000e78(pppppuVar1,puVar3,(long)puVar3 + 4);
        iVar8 = *(int *)(param_2 + 8);
      }
      lVar9 = lVar9 + 1;
      ppppuStack_60 = pppppuVar1;
    } while (lVar9 < iVar8);
  }
  auStack_80[0] = 0x83010000;
  uStack_70 = 0;
  lStack_50 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  uStack_78 = param_1;
  FUN_10a000fa0(&lStack_50,ppppuStack_68,ppppuStack_60,
                (long)ppppuStack_60 - (long)ppppuStack_68 >> 3);
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  FUN_10a001048(&uStack_b0,&lStack_50,&lStack_38,1);
  uStack_88 = 0;
  auStack_98[0] = 0x8104000c;
  puStack_d0 = (undefined8 *)0x406fe00000000000;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d8 = 0;
  puVar4 = auStack_98;
  ppuVar5 = &puStack_d0;
  piVar7 = (int *)0x0;
  piVar6 = (int *)0x8;
  puStack_90 = &uStack_b0;
  func_0x000109aefd90(auStack_80,puVar4,ppuVar5,8,0,&uStack_d8);
  puStack_d0 = &uStack_b0;
  func_0x00010a001298(&puStack_d0);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  pppppuVar1 = (undefined8 *****)ppppuStack_68;
  if ((undefined8 *****)ppppuStack_68 != (undefined8 *****)0x0) {
    ppppuStack_60 = ppppuStack_68;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_d0 = &uStack_b0;
  func_0x00010a001298(&puStack_d0);
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if ((undefined8 *****)ppppuStack_68 != (undefined8 *****)0x0) {
    ppppuStack_60 = ppppuStack_68;
    __ZdlPv();
  }
  __Unwind_Resume();
  lStack_138 = 0;
  plStack_130 = (long *)0x0;
  plStack_128 = (long *)0x0;
  for (; piVar6 != piVar7; piVar6 = piVar6 + 1) {
    puVar3 = (undefined8 *)(*(long *)(puVar4 + 4) + **(long **)(puVar4 + 0x12) * (long)*piVar6);
    if (plStack_130 < plStack_128) {
      plVar2 = plStack_130 + 1;
      *plStack_130 = CONCAT44((int)(float)((ulong)*puVar3 >> 0x20),(int)(float)*puVar3);
    }
    else {
      plVar2 = &lStack_138;
      FUN_10a000e78(plVar2,puVar3,(long)puVar3 + 4);
    }
    plStack_130 = plVar2;
  }
  auStack_150[0] = 0x83010000;
  uStack_140 = 0;
  auStack_168[0] = 0x8103000c;
  plStack_160 = &lStack_138;
  uStack_158 = 0;
  uStack_188 = 0x406fe00000000000;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_170 = 0;
  ppppuStack_148 = pppppuVar1;
  func_0x000109af01f0(auStack_150,auStack_168,0,&uStack_188,ppuVar5,8,0);
  if (lStack_138 != 0) {
    plStack_130 = (long *)lStack_138;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c04d8; end: 10a6c05fb;  */

void FUN_10a6c04d8(undefined8 param_1,long param_2,undefined8 param_3,int *param_4,int *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  long *plStack_80;
  undefined8 uStack_78;
  undefined4 auStack_70 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  long *plStack_50;
  long *plStack_48;
  
  lStack_58 = 0;
  plStack_50 = (long *)0x0;
  plStack_48 = (long *)0x0;
  for (; param_4 != param_5; param_4 = param_4 + 1) {
    puVar2 = (undefined8 *)
             (*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * (long)*param_4);
    if (plStack_50 < plStack_48) {
      plVar1 = plStack_50 + 1;
      *plStack_50 = CONCAT44((int)(float)((ulong)*puVar2 >> 0x20),(int)(float)*puVar2);
    }
    else {
      plVar1 = &lStack_58;
      FUN_10a000e78(plVar1,puVar2,(long)puVar2 + 4);
    }
    plStack_50 = plVar1;
  }
  auStack_70[0] = 0x83010000;
  uStack_60 = 0;
  auStack_88[0] = 0x8103000c;
  plStack_80 = &lStack_58;
  uStack_78 = 0;
  uStack_a8 = 0x406fe00000000000;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_68 = param_1;
  func_0x000109af01f0(auStack_70,auStack_88,0,&uStack_a8,param_3,8,0);
  if (lStack_58 != 0) {
    plStack_50 = (long *)lStack_58;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c05fc; end: 10a6c096f;  */

void FUN_10a6c05fc(undefined8 *param_1,undefined8 ***param_2,undefined8 ***param_3)

{
  int *piVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 ***pppuVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  long lVar10;
  undefined8 **ppuVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 **ppuVar18;
  undefined4 auStack_d0 [2];
  undefined8 ***pppuStack_c8;
  undefined8 uStack_c0;
  undefined8 **ppuStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  undefined8 ***pppuStack_98;
  undefined8 ***pppuStack_90;
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  
  if ((long)param_3 - (long)param_2 == 0x60) {
    ppuVar11 = *param_2;
    ppuVar17 = param_2[3];
    ppuVar16 = param_2[2];
    iVar3 = *(int *)((long)param_2 + 4);
    param_1[1] = param_2[1];
    *param_1 = ppuVar11;
    param_1[3] = ppuVar17;
    param_1[2] = ppuVar16;
    ppuVar11 = param_2[7];
    ppuVar18 = param_2[4];
    ppuVar17 = param_2[7];
    ppuVar16 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = ppuVar18;
    param_1[7] = ppuVar17;
    param_1[6] = ppuVar16;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (ppuVar11 != (undefined8 **)0x0) {
      piVar1 = (int *)((long)ppuVar11 + 0x14);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      iVar3 = *(int *)((long)param_2 + 4);
    }
    if (2 < iVar3) {
      *(undefined4 *)((long)param_1 + 4) = 0;
      func_0x000109a844cc(param_1,*(undefined4 *)((long)param_2 + 4),0,0,0);
      if (0 < *(int *)((long)param_1 + 4)) {
        lVar9 = 0;
        ppuVar11 = param_2[8];
        ppuVar16 = param_2[9];
        lVar15 = param_1[8];
        lVar10 = param_1[9];
        do {
          *(undefined4 *)(lVar15 + lVar9 * 4) = *(undefined4 *)((long)ppuVar11 + lVar9 * 4);
          *(undefined8 **)(lVar10 + lVar9 * 8) = ppuVar16[lVar9];
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_1 + 4));
      }
      return;
    }
    ppuVar11 = param_2[9];
    puVar13 = (undefined8 *)param_1[9];
    *puVar13 = *ppuVar11;
    puVar13[1] = ppuVar11[1];
  }
  else {
    pppuStack_a0 = (undefined8 ***)0x0;
    pppuStack_98 = (undefined8 ****)0x0;
    pppuStack_90 = (undefined8 ****)0x0;
    if (param_2 != param_3) {
      do {
        ppuStack_b8 = (undefined8 **)0x0;
        puStack_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        pppuStack_78 = (undefined8 ***)0x0;
        pppuStack_88 = (undefined8 ***)CONCAT44(pppuStack_88._4_4_,0x1010000);
        auStack_d0[0] = 0x2050000;
        uStack_c0 = 0;
        pppuStack_c8 = &ppuStack_b8;
        pppuStack_80 = param_2;
        func_0x000109a3dcec(&pppuStack_88,auStack_d0);
        pppuVar6 = pppuStack_98;
        ppuVar11 = ppuStack_b8;
        lVar9 = (long)puStack_b0 - (long)ppuStack_b8;
        if (0 < lVar9) {
          if ((long)pppuStack_90 - (long)pppuStack_98 < lVar9) {
            lVar15 = (long)pppuStack_98 - (long)pppuStack_a0;
            uVar12 = (lVar9 >> 5) * -0x5555555555555555 + (lVar15 >> 5) * -0x5555555555555555;
            if (0x2aaaaaaaaaaaaaa < uVar12) {
              FUN_109ffe390();
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x10a6c0904);
              (*pcVar7)();
            }
            lVar10 = (long)pppuStack_90 - (long)pppuStack_a0 >> 5;
            uVar14 = lVar10 * 0x5555555555555556;
            if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
              uVar14 = uVar12;
            }
            if (0x155555555555554 < (ulong)(lVar10 * -0x5555555555555555)) {
              uVar14 = 0x2aaaaaaaaaaaaaa;
            }
            pppuStack_68 = &pppuStack_a0;
            if (uVar14 == 0) {
              ppppuVar8 = (undefined8 ****)0x0;
            }
            else {
              ppppuVar8 = &pppuStack_a0;
              FUN_109ffe3a4();
            }
            lVar15 = (long)ppppuVar8 + lVar15;
            pppuStack_70 = ppppuVar8 + uVar14 * 0xc;
            lVar10 = lVar15 + lVar9;
            pppuStack_88 = ppppuVar8;
            pppuStack_80 = (undefined8 ***)lVar15;
            pppuStack_78 = (undefined8 ***)lVar15;
            do {
              FUN_109ffe600(lVar15,ppuVar11);
              lVar15 = lVar15 + 0x60;
              ppuVar11 = ppuVar11 + 0xc;
              lVar9 = lVar9 + -0x60;
            } while (lVar9 != 0);
            pppuStack_78 = (undefined8 ***)lVar10;
            FUN_109ffe738(&pppuStack_a0,pppuVar6,pppuStack_98,lVar10);
            pppuStack_78 = (undefined8 ***)
                           ((long)pppuStack_98 + ((long)pppuStack_78 - (long)pppuVar6));
            pppuVar2 = (undefined8 ***)((long)pppuStack_a0 + ((long)pppuStack_80 - (long)pppuVar6));
            pppuStack_98 = pppuVar6;
            FUN_109ffe738(&pppuStack_a0,pppuStack_a0,pppuVar6,pppuVar2);
            pppuVar6 = pppuStack_90;
            pppuStack_90 = pppuStack_70;
            pppuStack_98 = pppuStack_78;
            pppuStack_78 = pppuStack_a0;
            pppuStack_70 = pppuVar6;
            pppuStack_88 = pppuStack_a0;
            pppuStack_80 = pppuStack_a0;
            pppuStack_a0 = pppuVar2;
            func_0x00010919d9fc(&pppuStack_88);
          }
          else {
            ppppuVar8 = &pppuStack_a0;
            FUN_109ffe57c(ppppuVar8,ppuStack_b8,puStack_b0,pppuStack_98);
            pppuStack_98 = ppppuVar8;
          }
        }
        pppuStack_88 = &ppuStack_b8;
        FUN_109ffe3e8(&pppuStack_88);
        param_2 = param_2 + 0xc;
      } while (param_2 != param_3);
    }
    *(undefined4 *)param_1 = 0x42ff0000;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    pppuStack_88 = (undefined8 ***)CONCAT44(pppuStack_88._4_4_,0x1050000);
    pppuStack_78 = (undefined8 ***)0x0;
    ppuStack_b8 = (undefined8 **)CONCAT44(ppuStack_b8._4_4_,0x2010000);
    uStack_a8 = 0;
    puStack_b0 = param_1;
    pppuStack_80 = &pppuStack_a0;
    func_0x000109a3ecac(&pppuStack_88,&ppuStack_b8);
    pppuStack_88 = &pppuStack_a0;
    FUN_109ffe3e8(&pppuStack_88);
  }
  return;
}



/* Entry: 10a6c0970; end: 10a6c09fb;  */

void FUN_10a6c0970(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 auStack_48 [2];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = 0;
  auStack_48[0] = 0x81010005;
  uStack_40 = param_2;
  func_0x000109b42928(&uStack_30,auStack_48);
  uVar1 = NEON_scvtf(uStack_28,4);
  fVar4 = (float)uVar1 * 0.1;
  fVar2 = (float)((ulong)uVar1 >> 0x20);
  uVar3 = NEON_scvtf(uStack_30,4);
  param_1[1] = CONCAT44((int)(fVar2 * 0.05 + fVar2 * 0.45 + fVar2),(int)((float)uVar1 + fVar4 * 2.0)
                       );
  *param_1 = CONCAT44((int)((float)((ulong)uVar3 >> 0x20) - fVar2 * 0.45),
                      (int)((float)uVar3 - fVar4));
  return;
}



/* Entry: 10a6c09fc; end: 10a6c0e17;  */

/* WARNING: Possible PIC construction at 0x00010a6c1098: Changing call to branch */
/* WARNING: Type propagation algorithm not settling */

void FUN_10a6c09fc(float param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined4 **ppuVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  undefined8 **ppuVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  uint *puVar18;
  undefined8 *******pppppppuVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_4f0 [8];
  undefined4 auStack_4e8 [6];
  undefined8 uStack_4d0;
  undefined8 *puStack_4c8;
  undefined4 *puStack_4c0;
  undefined4 *puStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
  ulong uStack_490;
  uint *puStack_488;
  uint auStack_480 [6];
  undefined1 *puStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_438;
  long lStack_430;
  undefined1 *puStack_428;
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [4];
  int iStack_40c;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3d8;
  long lStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 auStack_3c0 [272];
  undefined4 uStack_2b0;
  undefined8 uStack_2ac;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long lStack_278;
  long lStack_270;
  undefined8 *puStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long lStack_210;
  undefined8 *puStack_208;
  undefined8 auStack_200 [2];
  undefined8 *******pppppppuStack_1b0;
  code *pcStack_1a8;
  undefined4 *puStack_1a0;
  undefined4 auStack_198 [2];
  long *plStack_190;
  undefined8 uStack_188;
  undefined4 auStack_180 [2];
  undefined8 **ppuStack_178;
  undefined8 uStack_170;
  uint uStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  undefined1 auStack_118 [16];
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = (undefined4 *)*param_4;
  fStack_b8 = SUB84(uStack_c0,0);
  fStack_ac = (float)((ulong)uStack_c0 >> 0x20);
  uVar23 = NEON_fmov(0xbf800000,4);
  uVar23 = NEON_rev64(CONCAT44(fStack_ac + (float)((ulong)param_4[1] >> 0x20) +
                               (float)((ulong)uVar23 >> 0x20),
                               fStack_b8 + (float)param_4[1] + (float)uVar23),4);
  fStack_b4 = (float)uVar23;
  fStack_b0 = (float)((ulong)uVar23 >> 0x20);
  puStack_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  puStack_f0 = (undefined8 *)0x0;
  FUN_10a6c1720(&puStack_f0,&uStack_c0,&puStack_a8,3);
  uStack_c0 = (undefined4 *)0x0;
  fStack_b4 = param_2 + -1.0;
  fStack_b8 = 0.0;
  fStack_b0 = param_1 + -1.0;
  fStack_ac = 0.0;
  lStack_100 = 0;
  uStack_f8 = 0;
  lStack_108 = 0;
  ppuVar14 = &puStack_a8;
  FUN_10a6c1720(&lStack_108,&uStack_c0,ppuVar14,3);
  uStack_170 = 0;
  auStack_180[0] = 0x8103000d;
  ppuStack_178 = &puStack_f0;
  uStack_188 = 0;
  auStack_198[0] = 0x8103000d;
  puVar18 = &uStack_168;
  puVar15 = (undefined8 *)auStack_198;
  plStack_190 = &lStack_108;
  func_0x000109b1fe78(&uStack_168,auStack_180);
  if ((((lStack_158 == 0) || (2 < iStack_164)) || (iStack_160 != 2)) ||
     ((iStack_15c != 3 || ((uStack_168 & 0xff8) != 0)))) {
    puVar12 = (undefined4 *)0x44;
    func_0x000107c2ae8c();
    *puVar12 = 1;
    uStack_c0 = puVar12 + 1;
    fStack_b8 = 8.68805e-44;
    fStack_b4 = 0.0;
    *(undefined8 *)(puVar12 + 3) = 0x203d3c20736d6964;
    *(undefined8 *)(puVar12 + 1) = 0x2026262061746164;
    *(undefined1 *)((long)puVar12 + 0x42) = 0;
    *(undefined8 *)(puVar12 + 7) = 0x26206d203d3d2073;
    *(undefined8 *)(puVar12 + 5) = 0x776f722026262032;
    *(undefined8 *)(puVar12 + 0xb) = 0x63202626206e203d;
    *(undefined8 *)(puVar12 + 9) = 0x3d20736c6f632026;
    *(undefined8 *)((long)puVar12 + 0x3a) = 0x31203d3d20292873;
    *(undefined8 *)((long)puVar12 + 0x32) = 0x6c656e6e61686320;
    puStack_1a0 = puVar12;
    func_0x000109ac3188(0xffffff29,&uStack_c0,&UNK_10f578323,&UNK_10f566d1b,0x448);
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10a6c0d74);
    (*pcVar9)();
  }
  if ((uStack_168 & 0x4007) == 0x4005) {
    lVar16 = 0;
    do {
      *(undefined4 *)((long)param_3 + lVar16) = *(undefined4 *)(lStack_158 + lVar16);
      lVar16 = lVar16 + 4;
    } while (lVar16 != 0x18);
  }
  else {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    puStack_d0 = &uStack_c0;
    uStack_80 = (ulong)puStack_d0 | 8;
    fStack_b0 = SUB84(param_3,0);
    fStack_ac = (float)((ulong)param_3 >> 0x20);
    uStack_90 = 0;
    lStack_88 = 0;
    fStack_b8 = 2.8026e-45;
    fStack_b4 = 4.2039e-45;
    uStack_c0 = (undefined4 *)0x242ff4005;
    uStack_68 = 4;
    uStack_70 = 0xc;
    puStack_a0 = param_3 + 3;
    auStack_d8[0] = 0x2010000;
    uStack_c8 = 0;
    puVar15 = (undefined8 *)auStack_d8;
    ppuVar14 = (undefined8 **)0x5;
    puStack_a8 = param_3;
    puStack_98 = puStack_a0;
    puStack_78 = &uStack_70;
    func_0x000109a41858(0x3ff0000000000000,0,&uStack_168);
    if (lStack_88 != 0) {
      piVar1 = (int *)(lStack_88 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = iVar2 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_c0);
      }
    }
    lStack_88 = 0;
    puStack_a8 = (undefined8 *)0x0;
    fStack_b0 = 0.0;
    fStack_ac = 0.0;
    puStack_98 = (undefined8 *)0x0;
    puStack_a0 = (undefined8 *)0x0;
    if (0 < uStack_c0._4_4_) {
      lVar16 = 0;
      do {
        *(undefined4 *)(uStack_80 + lVar16 * 4) = 0;
        lVar16 = lVar16 + 1;
      } while (lVar16 < uStack_c0._4_4_);
    }
    if (puStack_78 != &uStack_70 && puStack_78 != (undefined8 *)0x0) {
      _free(puStack_78[-1]);
    }
  }
  if (lStack_130 != 0) {
    piVar1 = (int *)(lStack_130 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_168);
    }
  }
  lStack_130 = 0;
  uStack_150 = 0;
  lStack_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  if (0 < iStack_164) {
    lVar16 = 0;
    do {
      *(undefined4 *)(lStack_128 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < iStack_164);
  }
  if (puStack_120 != auStack_118 && puStack_120 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_120 + -8));
  }
  if (lStack_108 != 0) {
    lStack_100 = lStack_108;
    __ZdlPv();
  }
  puVar17 = puStack_f0;
  if (puStack_f0 != (undefined8 *)0x0) {
    puStack_e8 = puStack_f0;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar15 != 0) {
    func_0x000104bd46a0();
    func_0x00010567aa40(&uStack_c0);
    func_0x00010567aa40(&uStack_168);
    if (lStack_108 != 0) {
      lStack_100 = lStack_108;
      __ZdlPv();
    }
    if (puStack_f0 != (undefined8 *)0x0) {
      puStack_e8 = puStack_f0;
      __ZdlPv();
    }
  }
  puVar13 = puVar17;
  __Unwind_Resume();
  pppppppuStack_1b0 = (undefined8 *******)&stack0xfffffffffffffff0;
  pcStack_1a8 = FUN_10a6c0e18;
  ppuVar10 = (undefined4 **)auStack_4f0;
  if (*(int *)(puVar15 + 1) == 0) {
    iVar2 = *(int *)((long)puVar15 + 4);
    *puVar13 = *puVar15;
    *(undefined4 *)(puVar13 + 1) = 0;
    *(undefined4 *)((long)puVar13 + 0xc) = *(undefined4 *)((long)puVar15 + 0xc);
    uVar23 = puVar15[2];
    uVar22 = puVar15[5];
    uVar21 = puVar15[4];
    puVar13[3] = puVar15[3];
    puVar13[2] = uVar23;
    puVar13[5] = uVar22;
    puVar13[4] = uVar21;
    lVar16 = puVar15[7];
    uVar23 = puVar15[6];
    puVar13[7] = puVar15[7];
    puVar13[6] = uVar23;
    puVar13[10] = 0;
    puVar13[8] = puVar13 + 1;
    puVar13[9] = puVar13 + 10;
    puVar13[0xb] = 0;
    if (lVar16 != 0) {
      piVar1 = (int *)(lVar16 + 0x14);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar8) {
          *piVar1 = *piVar1 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      iVar2 = *(int *)((long)puVar15 + 4);
    }
    if (iVar2 < 3) {
      puVar15 = (undefined8 *)puVar15[9];
      puVar17 = (undefined8 *)puVar13[9];
      *puVar17 = *puVar15;
      puVar17[1] = puVar15[1];
      return;
    }
    *(undefined4 *)((long)puVar13 + 4) = 0;
    ppuVar10 = &puStack_1a0;
    puVar11 = puVar13;
    pppppppuVar19 = pppppppuStack_1b0;
    pcVar9 = pcStack_1a8;
    goto code_r0x000109a84868;
  }
  lStack_278 = 0;
  uStack_27c = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_28c = 0;
  uStack_288 = 0;
  lStack_270 = (long)&uStack_2ac + 4;
  uStack_294 = 0;
  uStack_290 = 0;
  uStack_29c = 0;
  uStack_298 = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_2ac = 0;
  uStack_260 = 0;
  uStack_258 = 0;
  uStack_2b0 = 0x42ff0005;
  uStack_240 = 0;
  uStack_250 = CONCAT44(uStack_250._4_4_,0x81010005);
  puStack_268 = &uStack_260;
  puStack_248 = puVar15;
  func_0x000109a82ac8(auStack_410,*(int *)(puVar15 + 1),1,5);
  uStack_460 = 0;
  auStack_480[4] = 0xc1060000;
  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,0x82010005);
  puStack_4c8 = (undefined8 *)&uStack_2b0;
  puStack_4c0 = (undefined4 *)0x0;
  puStack_468 = auStack_410;
  func_0x000109a91dec(&uStack_250,auStack_480 + 4,&uStack_4d0);
  func_0x00010918eb6c(auStack_410);
  lVar16 = 0;
  do {
    uVar20 = *(undefined4 *)((long)ppuVar14 + 0xc);
    *(undefined4 *)((long)auStack_4e8 + lVar16) = *(undefined4 *)ppuVar14;
    *(undefined4 *)((long)auStack_4e8 + lVar16 + 4) = uVar20;
    lVar16 = lVar16 + 8;
    ppuVar14 = (undefined8 **)((long)ppuVar14 + 4);
  } while (lVar16 != 0x18);
  uStack_490 = (ulong)&uStack_4d0 | 8;
  puStack_4c0 = auStack_4e8;
  uStack_4a0 = 0;
  lStack_498 = 0;
  puVar18 = auStack_480;
  puStack_4c8 = (undefined8 *)0x200000003;
  uStack_4d0 = 0x242ff4005;
  auStack_480[2] = 4;
  auStack_480[3] = 0;
  auStack_480[0] = 8;
  auStack_480[1] = 0;
  puStack_4b0 = &uStack_4d0;
  puStack_4b8 = puStack_4c0;
  puStack_4a8 = puStack_4b0;
  puStack_488 = puVar18;
  func_0x000109410a78(&uStack_250,&uStack_4d0);
  if (lStack_218 != 0) {
    piVar1 = (int *)(lStack_218 + 0x14);
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if (lStack_498 != 0) {
    piVar1 = (int *)(lStack_498 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_4d0);
    }
  }
  puVar15 = puStack_208;
  lStack_498 = 0;
  puStack_4b8 = (undefined4 *)0x0;
  puStack_4c0 = (undefined4 *)0x0;
  puStack_4a8 = (undefined8 *)0x0;
  puStack_4b0 = (undefined8 *)0x0;
  if (uStack_4d0._4_4_ < 1) {
LAB_10a6c105c:
    if (uStack_250._4_4_ < 3) {
      uStack_4d0 = uStack_250;
      puStack_4c8 = puStack_248;
      *(undefined8 *)puStack_488 = *puStack_208;
      *(undefined8 *)(puStack_488 + 2) = puVar15[1];
      puStack_4b8 = (undefined4 *)uStack_238;
      puStack_4c0 = (undefined4 *)uStack_240;
      puStack_4a8 = (undefined8 *)uStack_228;
      puStack_4b0 = (undefined8 *)uStack_230;
      lStack_498 = lStack_218;
      uStack_4a0 = uStack_220;
      if (lStack_218 != 0) {
        piVar1 = (int *)(lStack_218 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_250);
        }
      }
      lStack_218 = 0;
      uStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      if (0 < uStack_250._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_210 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_250._4_4_);
      }
      if (puStack_208 != auStack_200 && puStack_208 != (undefined8 *)0x0) {
        _free(puStack_208[-1]);
      }
      func_0x000109a7d740(auStack_410,&uStack_2b0,&uStack_4d0);
      FUN_10a003260(auStack_480 + 4,auStack_410);
      func_0x00010918eb6c(auStack_410);
      if (lStack_498 != 0) {
        piVar1 = (int *)(lStack_498 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_4d0);
        }
      }
      lStack_498 = 0;
      puStack_4b8 = (undefined4 *)0x0;
      puStack_4c0 = (undefined4 *)0x0;
      puStack_4a8 = (undefined8 *)0x0;
      puStack_4b0 = (undefined8 *)0x0;
      if (0 < uStack_4d0._4_4_) {
        lVar16 = 0;
        do {
          *(undefined4 *)(uStack_490 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < uStack_4d0._4_4_);
      }
      if (puStack_488 != puVar18 && puStack_488 != (uint *)0x0) {
        _free(*(undefined8 *)(puStack_488 + -2));
      }
      uStack_250 = 0x7fffffff80000000;
      uStack_4d0 = 0x200000000;
      func_0x000109a84930(auStack_410,auStack_480 + 4,&uStack_250,&uStack_4d0);
      puVar13[7] = 0;
      puVar13[6] = 0;
      *(undefined8 *)((long)puVar13 + 0x2c) = 0;
      *(undefined8 *)((long)puVar13 + 0x24) = 0;
      *(undefined8 *)((long)puVar13 + 0x1c) = 0;
      *(undefined8 *)((long)puVar13 + 0x14) = 0;
      *(undefined8 *)((long)puVar13 + 0xc) = 0;
      *(undefined8 *)((long)puVar13 + 4) = 0;
      puVar13[10] = 0;
      puVar13[8] = puVar13 + 1;
      puVar13[9] = puVar13 + 10;
      puVar13[0xb] = 0;
      *(undefined4 *)puVar13 = 0x42ff0005;
      func_0x000109390e94(puVar13,auStack_410);
      if (lStack_3d8 != 0) {
        piVar1 = (int *)(lStack_3d8 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_410);
        }
      }
      lStack_3d8 = 0;
      uStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      if (0 < iStack_40c) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_3d0 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < iStack_40c);
      }
      if (puStack_3c8 != auStack_3c0 && puStack_3c8 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_3c8 + -8));
      }
      if (lStack_438 != 0) {
        piVar1 = (int *)(lStack_438 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_480 + 4);
        }
      }
      lStack_438 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      if (0 < (int)auStack_480[5]) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_430 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)auStack_480[5]);
      }
      if (puStack_428 != auStack_420 && puStack_428 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_428 + -8));
      }
      if (lStack_278 != 0) {
        piVar1 = (int *)(lStack_278 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_2b0);
        }
      }
      lStack_278 = 0;
      uStack_298 = 0;
      uStack_294 = 0;
      uStack_2a0 = 0;
      uStack_29c = 0;
      uStack_288 = 0;
      uStack_284 = 0;
      uStack_290 = 0;
      uStack_28c = 0;
      if (0 < (int)uStack_2ac) {
        lVar16 = 0;
        do {
          *(undefined4 *)(lStack_270 + lVar16 * 4) = 0;
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)uStack_2ac);
      }
      if (puStack_268 != &uStack_260 && puStack_268 != (undefined8 *)0x0) {
        _free(puStack_268[-1]);
      }
      return;
    }
  }
  else {
    lVar16 = 0;
    do {
      *(undefined4 *)(uStack_490 + lVar16 * 4) = 0;
      lVar16 = lVar16 + 1;
    } while (lVar16 < uStack_4d0._4_4_);
    if (uStack_4d0._4_4_ < 3) goto LAB_10a6c105c;
  }
  uStack_4d0 = CONCAT44(uStack_4d0._4_4_,(undefined4)uStack_250);
  puVar15 = &uStack_250;
  puVar11 = &uStack_4d0;
  puVar17 = puVar13;
  pppppppuVar19 = &pppppppuStack_1b0;
  pcVar9 = (code *)0x10a6c109c;
code_r0x000109a84868:
  *(uint **)((long)ppuVar10 + -0x20) = puVar18;
  *(undefined8 **)((long)ppuVar10 + -0x18) = puVar17;
  *(undefined8 ********)((long)ppuVar10 + -0x10) = pppppppuVar19;
  *(code **)((long)ppuVar10 + -8) = pcVar9;
  func_0x000109a844cc(puVar11,*(undefined4 *)((long)puVar15 + 4),0,0,0);
  if (0 < *(int *)((long)puVar11 + 4)) {
    lVar16 = 0;
    lVar3 = puVar15[8];
    lVar5 = puVar15[9];
    lVar4 = puVar11[8];
    lVar6 = puVar11[9];
    do {
      *(undefined4 *)(lVar4 + lVar16 * 4) = *(undefined4 *)(lVar3 + lVar16 * 4);
      *(undefined8 *)(lVar6 + lVar16 * 8) = *(undefined8 *)(lVar5 + lVar16 * 8);
      lVar16 = lVar16 + 1;
    } while (lVar16 < *(int *)((long)puVar11 + 4));
  }
  return;
}



/* Entry: 10a6c0e18; end: 10a6c146b;  */

/* WARNING: Possible PIC construction at 0x00010a6c1098: Changing call to branch */

void FUN_10a6c0e18(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  bool bVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_350 [8];
  undefined4 auStack_348 [6];
  undefined8 uStack_330;
  undefined8 *puStack_328;
  undefined4 *puStack_320;
  undefined4 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 uStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined4 uStack_2d0;
  int iStack_2cc;
  undefined1 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long lStack_298;
  long lStack_290;
  undefined1 *puStack_288;
  undefined1 auStack_280 [16];
  undefined1 auStack_270 [4];
  int iStack_26c;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_238;
  long lStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [272];
  undefined4 uStack_110;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long lStack_d8;
  long lStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 *puStack_68;
  undefined8 auStack_60 [2];
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(int *)(param_2 + 1) == 0) {
    iVar3 = *(int *)((long)param_2 + 4);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    uVar13 = param_2[2];
    uVar16 = param_2[5];
    uVar15 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar13;
    param_1[5] = uVar16;
    param_1[4] = uVar15;
    lVar10 = param_2[7];
    uVar13 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar13;
    param_1[10] = 0;
    param_1[8] = param_1 + 1;
    param_1[9] = param_1 + 10;
    param_1[0xb] = 0;
    if (lVar10 != 0) {
      piVar2 = (int *)(lVar10 + 0x14);
      do {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
          *piVar2 = *piVar2 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      iVar3 = *(int *)((long)param_2 + 4);
    }
    if (iVar3 < 3) {
      puVar11 = (undefined8 *)param_2[9];
      puVar12 = (undefined8 *)param_1[9];
      *puVar12 = *puVar11;
      puVar12[1] = puVar11[1];
      return;
    }
    *(undefined4 *)((long)param_1 + 4) = 0;
    puVar11 = param_1;
    goto code_r0x000109a84868;
  }
  lStack_d8 = 0;
  uStack_dc = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  lStack_d0 = (long)&uStack_10c + 4;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_10c = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_110 = 0x42ff0005;
  uStack_a0 = 0;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0x81010005);
  puStack_c8 = &uStack_c0;
  puStack_a8 = param_2;
  func_0x000109a82ac8(auStack_270,*(int *)(param_2 + 1),1,5);
  uStack_2c0 = 0;
  uStack_2d0 = 0xc1060000;
  uStack_330 = CONCAT44(uStack_330._4_4_,0x82010005);
  puStack_328 = (undefined8 *)&uStack_110;
  puStack_320 = (undefined4 *)0x0;
  puStack_2c8 = auStack_270;
  func_0x000109a91dec(&uStack_b0,&uStack_2d0,&uStack_330);
  func_0x00010918eb6c(auStack_270);
  lVar10 = 0;
  do {
    uVar14 = param_3[3];
    *(undefined4 *)((long)auStack_348 + lVar10) = *param_3;
    *(undefined4 *)((long)auStack_348 + lVar10 + 4) = uVar14;
    lVar10 = lVar10 + 8;
    param_3 = param_3 + 1;
  } while (lVar10 != 0x18);
  uStack_2f0 = (ulong)&uStack_330 | 8;
  puStack_320 = auStack_348;
  uStack_300 = 0;
  lStack_2f8 = 0;
  unaff_x20 = &uStack_2e0;
  puStack_328 = (undefined8 *)0x200000003;
  uStack_330 = 0x242ff4005;
  uStack_2d8 = 4;
  uStack_2e0 = 8;
  puStack_310 = &uStack_330;
  puStack_318 = puStack_320;
  puStack_308 = puStack_310;
  puStack_2e8 = unaff_x20;
  func_0x000109410a78(&uStack_b0,&uStack_330);
  if (lStack_78 != 0) {
    piVar2 = (int *)(lStack_78 + 0x14);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = *piVar2 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (lStack_2f8 != 0) {
    piVar2 = (int *)(lStack_2f8 + 0x14);
    do {
      iVar3 = *piVar2;
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar9) {
        *piVar2 = iVar3 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_330);
    }
  }
  puVar11 = puStack_68;
  lStack_2f8 = 0;
  puStack_318 = (undefined4 *)0x0;
  puStack_320 = (undefined4 *)0x0;
  puStack_308 = (undefined8 *)0x0;
  puStack_310 = (undefined8 *)0x0;
  if (uStack_330._4_4_ < 1) {
LAB_10a6c105c:
    if (uStack_b0._4_4_ < 3) {
      uStack_330 = uStack_b0;
      puStack_328 = puStack_a8;
      *puStack_2e8 = *puStack_68;
      puStack_2e8[1] = puVar11[1];
      puStack_318 = (undefined4 *)uStack_98;
      puStack_320 = (undefined4 *)uStack_a0;
      puStack_308 = (undefined8 *)uStack_88;
      puStack_310 = (undefined8 *)uStack_90;
      lStack_2f8 = lStack_78;
      uStack_300 = uStack_80;
      if (lStack_78 != 0) {
        piVar2 = (int *)(lStack_78 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar3 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_b0);
        }
      }
      lStack_78 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      if (0 < uStack_b0._4_4_) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_70 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_b0._4_4_);
      }
      if (puStack_68 != auStack_60 && puStack_68 != (undefined8 *)0x0) {
        _free(puStack_68[-1]);
      }
      func_0x000109a7d740(auStack_270,&uStack_110,&uStack_330);
      FUN_10a003260(&uStack_2d0,auStack_270);
      func_0x00010918eb6c(auStack_270);
      if (lStack_2f8 != 0) {
        piVar2 = (int *)(lStack_2f8 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar3 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_330);
        }
      }
      lStack_2f8 = 0;
      puStack_318 = (undefined4 *)0x0;
      puStack_320 = (undefined4 *)0x0;
      puStack_308 = (undefined8 *)0x0;
      puStack_310 = (undefined8 *)0x0;
      if (0 < uStack_330._4_4_) {
        lVar10 = 0;
        do {
          *(undefined4 *)(uStack_2f0 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < uStack_330._4_4_);
      }
      if (puStack_2e8 != unaff_x20 && puStack_2e8 != (undefined8 *)0x0) {
        _free(puStack_2e8[-1]);
      }
      uStack_b0 = 0x7fffffff80000000;
      uStack_330 = 0x200000000;
      func_0x000109a84930(auStack_270,&uStack_2d0,&uStack_b0,&uStack_330);
      param_1[7] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0x2c) = 0;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      *(undefined8 *)((long)param_1 + 0x1c) = 0;
      *(undefined8 *)((long)param_1 + 0x14) = 0;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(undefined8 *)((long)param_1 + 4) = 0;
      param_1[10] = 0;
      param_1[8] = param_1 + 1;
      param_1[9] = param_1 + 10;
      param_1[0xb] = 0;
      *(undefined4 *)param_1 = 0x42ff0005;
      func_0x000109390e94(param_1,auStack_270);
      if (lStack_238 != 0) {
        piVar2 = (int *)(lStack_238 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar3 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(auStack_270);
        }
      }
      lStack_238 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      if (0 < iStack_26c) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_230 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_26c);
      }
      if (puStack_228 != auStack_220 && puStack_228 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_228 + -8));
      }
      if (lStack_298 != 0) {
        piVar2 = (int *)(lStack_298 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar3 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_2d0);
        }
      }
      lStack_298 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      uStack_2b0 = 0;
      if (0 < iStack_2cc) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_290 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < iStack_2cc);
      }
      if (puStack_288 != auStack_280 && puStack_288 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_288 + -8));
      }
      if (lStack_d8 != 0) {
        piVar2 = (int *)(lStack_d8 + 0x14);
        do {
          iVar3 = *piVar2;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar9) {
            *piVar2 = iVar3 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar3 + -1 == 0) {
          func_0x000109a848d4(&uStack_110);
        }
      }
      lStack_d8 = 0;
      uStack_f8 = 0;
      uStack_f4 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      uStack_e8 = 0;
      uStack_e4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      if (0 < (int)uStack_10c) {
        lVar10 = 0;
        do {
          *(undefined4 *)(lStack_d0 + lVar10 * 4) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uStack_10c);
      }
      if (puStack_c8 != &uStack_c0 && puStack_c8 != (undefined8 *)0x0) {
        _free(puStack_c8[-1]);
      }
      return;
    }
  }
  else {
    lVar10 = 0;
    do {
      *(undefined4 *)(uStack_2f0 + lVar10 * 4) = 0;
      lVar10 = lVar10 + 1;
    } while (lVar10 < uStack_330._4_4_);
    if (uStack_330._4_4_ < 3) goto LAB_10a6c105c;
  }
  uStack_330 = CONCAT44(uStack_330._4_4_,(undefined4)uStack_b0);
  puVar11 = &uStack_330;
  param_2 = &uStack_b0;
  unaff_x30 = 0x10a6c109c;
  register0x00000008 = (BADSPACEBASE *)auStack_350;
  unaff_x19 = param_1;
  unaff_x29 = puVar1;
code_r0x000109a84868:
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  func_0x000109a844cc(puVar11,*(undefined4 *)((long)param_2 + 4),0,0,0);
  if (0 < *(int *)((long)puVar11 + 4)) {
    lVar10 = 0;
    lVar4 = param_2[8];
    lVar6 = param_2[9];
    lVar5 = puVar11[8];
    lVar7 = puVar11[9];
    do {
      *(undefined4 *)(lVar5 + lVar10 * 4) = *(undefined4 *)(lVar4 + lVar10 * 4);
      *(undefined8 *)(lVar7 + lVar10 * 8) = *(undefined8 *)(lVar6 + lVar10 * 8);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((long)puVar11 + 4));
  }
  return;
}



/* Entry: 10a6c146c; end: 10a6c171f;  */

void FUN_10a6c146c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [272];
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lRam00000001137eb8f8 == lRam00000001137eb8f0) {
    FUN_10a6c19c8();
  }
  else {
    uVar7 = *param_1;
    FUN_10a6c1790(&uStack_230,*(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc),
                  param_2);
    FUN_109fed8e4(uVar7,&uStack_230);
    if (lStack_1f8 != 0) {
      piVar1 = (int *)(lStack_1f8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_230);
      }
    }
    lStack_1f8 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    if (0 < uStack_230._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_1f0 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_230._4_4_);
    }
    if (puStack_1e8 != auStack_1e0 && puStack_1e8 != (undefined1 *)0x0) {
      _free(*(undefined8 *)(puStack_1e8 + -8));
    }
    uStack_248 = param_1[1];
    func_0x000109a829e8(&uStack_230,&uStack_248,0);
    FUN_10a003124(&uStack_d0,&uStack_230);
    func_0x00010918eb6c(&uStack_230);
    lVar5 = 0;
    aiStack_70[0] = 0x4c;
    aiStack_70[1] = 0x4d;
    do {
      uVar7 = *(undefined8 *)
               (param_2[2] + *(long *)param_2[9] * (long)*(int *)((long)aiStack_70 + lVar5));
      uStack_250 = CONCAT44((int)(float)((ulong)uVar7 >> 0x20),(int)(float)uVar7);
      uStack_248 = CONCAT44(uStack_248._4_4_,0x83010000);
      uStack_238 = 0;
      uStack_230 = 0x406fe00000000000;
      uStack_220 = 0;
      uStack_218 = 0;
      uStack_228 = 0;
      param_4 = &uStack_230;
      param_3 = (undefined8 *)0x2;
      puStack_240 = &uStack_d0;
      func_0x000109aee350(&uStack_248,&uStack_250,2,param_4,0xffffffff,8,0);
      lVar5 = lVar5 + 4;
    } while (lVar5 != 8);
    param_1 = (undefined8 *)*param_1;
    param_2 = &uStack_d0;
    FUN_109fed894();
    if (lStack_98 != 0) {
      piVar1 = (int *)(lStack_98 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        param_1 = &uStack_d0;
        func_0x000109a848d4();
      }
    }
    lStack_98 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    if (0 < uStack_d0._4_4_) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lStack_90 + lVar5 * 4) = 0;
        lVar5 = lVar5 + 1;
      } while (lVar5 < uStack_d0._4_4_);
    }
    if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
      param_1 = *(undefined8 **)(puStack_88 + -8);
      _free();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
      return;
    }
  }
  ___stack_chk_fail();
  if ((int)param_2 != 0) {
    func_0x000104bd46a0();
    FUN_109ff0424(&uStack_d0);
  }
  __Unwind_Resume();
  if (param_4 != (undefined8 *)0x0) {
    FUN_10a4f94d4();
    puVar6 = (undefined8 *)param_1[1];
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar6 = *param_2;
      puVar6 = puVar6 + 1;
    }
    param_1[1] = puVar6;
  }
  return;
}



/* Entry: 10a6c1720; end: 10a6c178f;  */

void FUN_10a6c1720(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    FUN_10a4f94d4(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      *puVar1 = *param_2;
      puVar1 = puVar1 + 1;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 10a6c1790; end: 10a6c19c7;  */

void FUN_10a6c1790(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  long param_5)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_228;
  undefined1 auStack_220 [8];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [4];
  int iStack_1c4;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  undefined1 auStack_178 [280];
  
  uStack_228 = CONCAT44(param_3,param_2);
  func_0x000109a829e8(auStack_1c8,&uStack_228,0);
  FUN_10a003124(param_1,auStack_1c8);
  func_0x00010918eb6c(auStack_1c8);
  lVar7 = *(long *)(param_5 + 0x18);
  lVar3 = *(long *)(param_5 + 0x20);
  if (lVar7 != lVar3) {
    puVar8 = (undefined8 *)((ulong)&uStack_228 | 4);
    do {
      uStack_228 = 0x7fffffff80000000;
      func_0x000109a84930(auStack_1c8,param_4,lVar7,&uStack_228);
      *(undefined8 *)((long)puVar8 + 0x34) = 0;
      *(undefined8 *)((long)puVar8 + 0x2c) = 0;
      puVar8[3] = 0;
      puVar8[2] = 0;
      puVar8[5] = 0;
      puVar8[4] = 0;
      puVar8[1] = 0;
      *puVar8 = 0;
      uStack_1d8 = 0;
      uStack_1d0 = 0;
      uStack_228 = CONCAT44(uStack_228._4_4_,0x42ff0005);
      puStack_1e8 = auStack_220;
      puStack_1e0 = &uStack_1d8;
      func_0x000109390e94(&uStack_228,auStack_1c8);
      FUN_10a6c02f0(param_1,&uStack_228);
      if (lStack_1f0 != 0) {
        piVar1 = (int *)(lStack_1f0 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(&uStack_228);
        }
      }
      lStack_1f0 = 0;
      uStack_210 = 0;
      uStack_218 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      if (0 < uStack_228._4_4_) {
        lVar6 = 0;
        do {
          *(undefined4 *)(puStack_1e8 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < uStack_228._4_4_);
      }
      if (puStack_1e0 != &uStack_1d8 && puStack_1e0 != (undefined8 *)0x0) {
        _free(puStack_1e0[-1]);
      }
      if (lStack_190 != 0) {
        piVar1 = (int *)(lStack_190 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_1c8);
        }
      }
      lStack_190 = 0;
      uStack_1b0 = 0;
      uStack_1b8 = 0;
      uStack_1a0 = 0;
      uStack_1a8 = 0;
      if (0 < iStack_1c4) {
        lVar6 = 0;
        do {
          *(undefined4 *)(lStack_188 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iStack_1c4);
      }
      if (puStack_180 != auStack_178 && puStack_180 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_180 + -8));
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != lVar3);
  }
  return;
}



/* Entry: 10a6c19c8; end: 10a6c19db;  */

float FUN_10a6c19c8(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_4e0;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  long lStack_4a8;
  long lStack_4a0;
  undefined1 *puStack_498;
  undefined1 auStack_490 [16];
  undefined8 uStack_480;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  long lStack_448;
  long lStack_440;
  undefined1 *puStack_438;
  undefined1 auStack_430 [16];
  undefined8 uStack_420;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  long lStack_3e8;
  long lStack_3e0;
  undefined1 *puStack_3d8;
  undefined1 auStack_3d0 [272];
  undefined4 auStack_2c0 [2];
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined1 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_270;
  long lStack_268;
  undefined1 *puStack_260;
  undefined1 auStack_258 [16];
  undefined4 auStack_248 [2];
  undefined1 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 *puStack_1e8;
  undefined1 auStack_1e0 [16];
  undefined1 auStack_1d0 [352];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffdddc(&DAT_10f62a4d8);
  uStack_230 = 0x100000000;
  uStack_480 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_420,puVar5,&uStack_230,&uStack_480);
  dVar8 = 8.48798316534329e-314;
  uStack_480 = 0x400000003;
  uStack_4e0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_230,puVar5,&uStack_480,&uStack_4e0);
  puVar6 = &uStack_420;
  func_0x000109a7cd1c(auStack_1d0,puVar6,&uStack_230);
  uStack_298 = 0;
  uStack_2a8 = CONCAT44(uStack_2a8._4_4_,0xc1060000);
  puStack_2a0 = auStack_1d0;
  func_0x000109a91d90();
  func_0x000109ab9654(&uStack_2a8,4,puVar6);
  func_0x00010918eb6c(auStack_1d0);
  if (lStack_1f8 != 0) {
    piVar1 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  if (0 < uStack_230._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_1f0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_230._4_4_);
  }
  if (puStack_1e8 != auStack_1e0 && puStack_1e8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1e8 + -8));
  }
  if (lStack_3e8 != 0) {
    piVar1 = (int *)(lStack_3e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_420);
    }
  }
  lStack_3e8 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  if (0 < uStack_420._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_3e0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_420._4_4_);
  }
  if (puStack_3d8 != auStack_3d0 && puStack_3d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_3d8 + -8));
  }
  uStack_420 = 0x200000001;
  uStack_2a8 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_230,puVar5,&uStack_420,&uStack_2a8);
  dVar9 = 1.2731974748262e-313;
  uStack_420 = 0x600000005;
  uStack_480 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_2a8,puVar5,&uStack_420,&uStack_480);
  puVar6 = &uStack_230;
  func_0x000109a7cd1c(auStack_1d0,puVar6,&uStack_2a8);
  uStack_238 = 0;
  auStack_248[0] = 0xc1060000;
  puStack_240 = auStack_1d0;
  func_0x000109a91d90();
  func_0x000109ab9654(auStack_248,4,puVar6);
  uStack_4e0 = 0x300000002;
  uStack_68 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_480,puVar5,&uStack_4e0,&uStack_68);
  dVar10 = 1.06099789568026e-313;
  uStack_68 = 0x500000004;
  uStack_70 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_4e0,puVar5,&uStack_68,&uStack_70);
  puVar6 = &uStack_480;
  func_0x000109a7cd1c(&uStack_420,puVar6,&uStack_4e0);
  uStack_2b0 = 0;
  auStack_2c0[0] = 0xc1060000;
  puStack_2b8 = &uStack_420;
  func_0x000109a91d90();
  func_0x000109ab9654(auStack_2c0,4,puVar6);
  func_0x00010918eb6c(&uStack_420);
  if (lStack_4a8 != 0) {
    piVar1 = (int *)(lStack_4a8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_4e0);
    }
  }
  lStack_4a8 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  if (0 < uStack_4e0._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_4a0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_4e0._4_4_);
  }
  if (puStack_498 != auStack_490 && puStack_498 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_498 + -8));
  }
  if (lStack_448 != 0) {
    piVar1 = (int *)(lStack_448 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_480);
    }
  }
  lStack_448 = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  if (0 < uStack_480._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_440 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_480._4_4_);
  }
  if (puStack_438 != auStack_430 && puStack_438 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_438 + -8));
  }
  func_0x00010918eb6c(auStack_1d0);
  if (lStack_270 != 0) {
    piVar1 = (int *)(lStack_270 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a8);
    }
  }
  lStack_270 = 0;
  uStack_290 = 0;
  uStack_298 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  if (0 < uStack_2a8._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_268 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_2a8._4_4_);
  }
  if (puStack_260 != auStack_258 && puStack_260 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_260 + -8));
  }
  if (lStack_1f8 != 0) {
    piVar1 = (int *)(lStack_1f8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_230);
    }
  }
  lStack_1f8 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  if (0 < uStack_230._4_4_) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_1f0 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < uStack_230._4_4_);
  }
  if (puStack_1e8 != auStack_1e0 && puStack_1e8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1e8 + -8));
  }
  return (float)(((dVar9 + dVar10) * 0.5) / dVar8);
}



/* Entry: 10a6c19dc; end: 10a6c1f6b;  */

float FUN_10a6c19dc(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_4d0;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_498;
  long lStack_490;
  undefined1 *puStack_488;
  undefined1 auStack_480 [16];
  undefined8 uStack_470;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long lStack_438;
  long lStack_430;
  undefined1 *puStack_428;
  undefined1 auStack_420 [16];
  undefined8 uStack_410;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  long lStack_3d8;
  long lStack_3d0;
  undefined1 *puStack_3c8;
  undefined1 auStack_3c0 [272];
  undefined4 auStack_2b0 [2];
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined1 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_260;
  long lStack_258;
  undefined1 *puStack_250;
  undefined1 auStack_248 [16];
  undefined4 auStack_238 [2];
  undefined1 *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1e8;
  long lStack_1e0;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  undefined1 auStack_1c0 [352];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_220 = 0x100000000;
  uStack_470 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_410,param_1,&uStack_220,&uStack_470);
  dVar7 = 8.48798316534329e-314;
  uStack_470 = 0x400000003;
  uStack_4d0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_220,param_1,&uStack_470,&uStack_4d0);
  puVar5 = &uStack_410;
  func_0x000109a7cd1c(auStack_1c0,puVar5,&uStack_220);
  uStack_288 = 0;
  uStack_298 = CONCAT44(uStack_298._4_4_,0xc1060000);
  puStack_290 = auStack_1c0;
  func_0x000109a91d90();
  func_0x000109ab9654(&uStack_298,4,puVar5);
  func_0x00010918eb6c(auStack_1c0);
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (0 < uStack_220._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_1e0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_220._4_4_);
  }
  if (puStack_1d8 != auStack_1d0 && puStack_1d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1d8 + -8));
  }
  if (lStack_3d8 != 0) {
    piVar1 = (int *)(lStack_3d8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_410);
    }
  }
  lStack_3d8 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  uStack_3e8 = 0;
  uStack_3f0 = 0;
  if (0 < uStack_410._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_3d0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_410._4_4_);
  }
  if (puStack_3c8 != auStack_3c0 && puStack_3c8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_3c8 + -8));
  }
  uStack_410 = 0x200000001;
  uStack_298 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_220,param_1,&uStack_410,&uStack_298);
  dVar8 = 1.2731974748262e-313;
  uStack_410 = 0x600000005;
  uStack_470 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_298,param_1,&uStack_410,&uStack_470);
  puVar5 = &uStack_220;
  func_0x000109a7cd1c(auStack_1c0,puVar5,&uStack_298);
  uStack_228 = 0;
  auStack_238[0] = 0xc1060000;
  puStack_230 = auStack_1c0;
  func_0x000109a91d90();
  func_0x000109ab9654(auStack_238,4,puVar5);
  uStack_4d0 = 0x300000002;
  uStack_58 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_470,param_1,&uStack_4d0,&uStack_58);
  dVar9 = 1.06099789568026e-313;
  uStack_58 = 0x500000004;
  uStack_60 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_4d0,param_1,&uStack_58,&uStack_60);
  puVar5 = &uStack_470;
  func_0x000109a7cd1c(&uStack_410,puVar5,&uStack_4d0);
  uStack_2a0 = 0;
  auStack_2b0[0] = 0xc1060000;
  puStack_2a8 = &uStack_410;
  func_0x000109a91d90();
  func_0x000109ab9654(auStack_2b0,4,puVar5);
  func_0x00010918eb6c(&uStack_410);
  if (lStack_498 != 0) {
    piVar1 = (int *)(lStack_498 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_4d0);
    }
  }
  lStack_498 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  uStack_4b0 = 0;
  if (0 < uStack_4d0._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_490 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_4d0._4_4_);
  }
  if (puStack_488 != auStack_480 && puStack_488 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_488 + -8));
  }
  if (lStack_438 != 0) {
    piVar1 = (int *)(lStack_438 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_470);
    }
  }
  lStack_438 = 0;
  uStack_458 = 0;
  uStack_460 = 0;
  uStack_448 = 0;
  uStack_450 = 0;
  if (0 < uStack_470._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_430 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_470._4_4_);
  }
  if (puStack_428 != auStack_420 && puStack_428 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_428 + -8));
  }
  func_0x00010918eb6c(auStack_1c0);
  if (lStack_260 != 0) {
    piVar1 = (int *)(lStack_260 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_298);
    }
  }
  lStack_260 = 0;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  if (0 < uStack_298._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_258 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_298._4_4_);
  }
  if (puStack_250 != auStack_248 && puStack_250 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_250 + -8));
  }
  if (lStack_1e8 != 0) {
    piVar1 = (int *)(lStack_1e8 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_220);
    }
  }
  lStack_1e8 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  if (0 < uStack_220._4_4_) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_1e0 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < uStack_220._4_4_);
  }
  if (puStack_1d8 != auStack_1d0 && puStack_1d8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_1d8 + -8));
  }
  return (float)(((dVar8 + dVar9) * 0.5) / dVar7);
}



/* Entry: 10a6c1f6c; end: 10a6c2b87;  */

void FUN_10a6c1f6c(undefined8 *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong *puVar10;
  int *piVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uStack_520;
  undefined8 uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  int *piStack_4e0;
  undefined8 *puStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined8 uStack_488;
  ulong uStack_480;
  undefined8 *puStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  long lStack_378;
  long lStack_370;
  undefined1 *puStack_368;
  undefined1 auStack_360 [16];
  undefined8 uStack_350;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  long lStack_318;
  long lStack_310;
  undefined1 *puStack_308;
  undefined1 auStack_300 [16];
  undefined8 uStack_2f0;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  long lStack_2b8;
  long lStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 auStack_2a0 [16];
  undefined4 uStack_290;
  int iStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  long lStack_258;
  undefined4 *puStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_130;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [16];
  int aiStack_70 [2];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_2f0 = 0x10000000100;
  func_0x000109a829e8(&uStack_290,&uStack_2f0,0);
  FUN_10a003124(&uStack_130,&uStack_290);
  func_0x00010918eb6c(&uStack_290);
  uStack_350 = 0x1100000000;
  uStack_d0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_2f0,param_2,&uStack_350,&uStack_d0);
  uStack_284 = 0;
  uStack_280 = 0;
  iStack_28c = 0;
  uStack_288 = 0;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  puStack_250 = &uStack_288;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_290 = 0x42ff0005;
  puStack_248 = &uStack_240;
  func_0x000109390e94(&uStack_290,&uStack_2f0);
  FUN_10a6c0250(&uStack_130,&uStack_290,3);
  if (lStack_258 != 0) {
    piVar11 = (int *)(lStack_258 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < iStack_28c) {
    lVar13 = 0;
    do {
      puStack_250[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (lStack_2b8 != 0) {
    piVar11 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_2f0);
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  if (0 < uStack_2f0._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_2b0 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_2f0._4_4_);
  }
  if (puStack_2a8 != auStack_2a0 && puStack_2a8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_2a8 + -8));
  }
  FUN_109fed894(param_1,&uStack_130);
  uStack_350 = 0x10000000100;
  func_0x000109a829e8(&uStack_290,&uStack_350,0);
  FUN_10a003124(&uStack_2f0,&uStack_290);
  func_0x00010918eb6c(&uStack_290);
  uStack_d0 = 0x2a00000024;
  uStack_3b0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_350,param_2,&uStack_d0,&uStack_3b0);
  uStack_284 = 0;
  uStack_280 = 0;
  iStack_28c = 0;
  uStack_288 = 0;
  puStack_250 = &uStack_288;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_290 = 0x42ff0005;
  puStack_248 = &uStack_240;
  func_0x000109390e94(&uStack_290,&uStack_350);
  FUN_10a6c02f0(&uStack_2f0,&uStack_290);
  if (lStack_258 != 0) {
    piVar11 = (int *)(lStack_258 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < iStack_28c) {
    lVar13 = 0;
    do {
      puStack_250[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (lStack_318 != 0) {
    piVar11 = (int *)(lStack_318 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_350);
    }
  }
  lStack_318 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  if (0 < uStack_350._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_310 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_350._4_4_);
  }
  if (puStack_308 != auStack_300 && puStack_308 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_308 + -8));
  }
  uStack_d0 = 0x300000002a;
  uStack_3b0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_350,param_2,&uStack_d0,&uStack_3b0);
  uStack_284 = 0;
  uStack_280 = 0;
  iStack_28c = 0;
  uStack_288 = 0;
  puStack_250 = &uStack_288;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_290 = 0x42ff0005;
  puStack_248 = &uStack_240;
  func_0x000109390e94(&uStack_290,&uStack_350);
  FUN_10a6c02f0(&uStack_2f0,&uStack_290);
  if (lStack_258 != 0) {
    piVar11 = (int *)(lStack_258 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < iStack_28c) {
    lVar13 = 0;
    do {
      puStack_250[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (lStack_318 != 0) {
    piVar11 = (int *)(lStack_318 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_350);
    }
  }
  lStack_318 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  if (0 < uStack_350._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_310 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_350._4_4_);
  }
  if (puStack_308 != auStack_300 && puStack_308 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_308 + -8));
  }
  FUN_109fed894(param_1,&uStack_2f0);
  uStack_d0 = 0x10000000100;
  func_0x000109a829e8(&uStack_290,&uStack_d0,0);
  FUN_10a003124(&uStack_350,&uStack_290);
  func_0x00010918eb6c(&uStack_290);
  uStack_c8 = 0x1e0000001d;
  uStack_d0 = 0x1c0000001b;
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0x21);
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_290 = 0;
  iStack_28c = 0;
  FUN_10a14d944(&uStack_290,&uStack_d0,(long)&uStack_c0 + 4,5);
  FUN_10a6c04d8(&uStack_350,param_2,3,CONCAT44(iStack_28c,uStack_290),
                CONCAT44(uStack_284,uStack_288));
  if (CONCAT44(iStack_28c,uStack_290) != 0) {
    uStack_288 = uStack_290;
    uStack_284 = iStack_28c;
    __ZdlPv();
  }
  FUN_109fed894(param_1,&uStack_350);
  uStack_3b0 = 0x10000000100;
  func_0x000109a829e8(&uStack_290,&uStack_3b0,0);
  FUN_10a003124(&uStack_d0,&uStack_290);
  func_0x00010918eb6c(&uStack_290);
  uStack_3c8 = 0x440000003c;
  aiStack_70[0] = -0x80000000;
  aiStack_70[1] = 0x7fffffff;
  func_0x000109a84930(&uStack_3b0,param_2,&uStack_3c8,aiStack_70);
  uStack_284 = 0;
  uStack_280 = 0;
  iStack_28c = 0;
  uStack_288 = 0;
  puStack_250 = &uStack_288;
  uStack_274 = 0;
  uStack_270 = 0;
  uStack_27c = 0;
  uStack_278 = 0;
  uStack_264 = 0;
  uStack_26c = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_25c = 0;
  uStack_240 = 0;
  uStack_238 = 0;
  uStack_290 = 0x42ff0005;
  puStack_248 = &uStack_240;
  func_0x000109390e94(&uStack_290,&uStack_3b0);
  FUN_10a6c02f0(&uStack_d0,&uStack_290);
  if (lStack_258 != 0) {
    piVar11 = (int *)(lStack_258 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_290);
    }
  }
  lStack_258 = 0;
  uStack_278 = 0;
  uStack_274 = 0;
  uStack_280 = 0;
  uStack_27c = 0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_270 = 0;
  uStack_26c = 0;
  if (0 < iStack_28c) {
    lVar13 = 0;
    do {
      puStack_250[lVar13] = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iStack_28c);
  }
  if (puStack_248 != &uStack_240 && puStack_248 != (undefined8 *)0x0) {
    _free(puStack_248[-1]);
  }
  if (lStack_378 != 0) {
    piVar11 = (int *)(lStack_378 + 0x14);
    do {
      iVar9 = *piVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      func_0x000109a848d4(&uStack_3b0);
    }
  }
  lStack_378 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  if (0 < uStack_3b0._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_370 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_3b0._4_4_);
  }
  if (puStack_368 != auStack_360 && puStack_368 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_368 + -8));
  }
  FUN_109fed894(param_1,&uStack_d0);
  uStack_3c8 = 0x10000000100;
  func_0x000109a829e8(&uStack_290,&uStack_3c8,0);
  FUN_10a003124(&uStack_3b0,&uStack_290);
  func_0x00010918eb6c(&uStack_290);
  lVar13 = 0;
  aiStack_70[0] = 0x13;
  aiStack_70[1] = 0x18;
  do {
    uVar22 = *(undefined8 *)
              (*(long *)(param_2 + 0x10) +
              **(long **)(param_2 + 0x48) * (long)*(int *)((long)aiStack_70 + lVar13));
    uStack_3c8 = CONCAT44(uStack_3c8._4_4_,0x83010000);
    uStack_3b8 = 0;
    uStack_3d0 = CONCAT44((int)(float)((ulong)uVar22 >> 0x20),(int)(float)uVar22);
    uStack_290 = 0;
    iStack_28c = 0x406fe000;
    uStack_280 = 0;
    uStack_27c = 0;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    puVar8 = &uStack_290;
    piVar11 = (int *)0x3;
    puStack_3c0 = &uStack_3b0;
    func_0x000109aee350(&uStack_3c8,&uStack_3d0,3,puVar8,0xffffffff,8,0);
    uVar12 = SUB84(puVar8,0);
    lVar13 = lVar13 + 4;
  } while (lVar13 != 8);
  puVar10 = &uStack_3b0;
  puVar5 = param_1;
  FUN_109fed894();
  if (lStack_378 != 0) {
    piVar15 = (int *)(lStack_378 + 0x14);
    do {
      iVar9 = *piVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar3) {
        *piVar15 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5 = &uStack_3b0;
      func_0x000109a848d4();
    }
  }
  lStack_378 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  uStack_390 = 0;
  if (0 < uStack_3b0._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_370 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_3b0._4_4_);
  }
  if (puStack_368 != auStack_360 && puStack_368 != (undefined1 *)0x0) {
    puVar5 = *(undefined8 **)(puStack_368 + -8);
    _free();
  }
  if (lStack_98 != 0) {
    piVar15 = (int *)(lStack_98 + 0x14);
    do {
      iVar9 = *piVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar3) {
        *piVar15 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5 = &uStack_d0;
      func_0x000109a848d4();
    }
  }
  lStack_98 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (0 < uStack_d0._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_90 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_d0._4_4_);
  }
  if (puStack_88 != auStack_80 && puStack_88 != (undefined1 *)0x0) {
    puVar5 = *(undefined8 **)(puStack_88 + -8);
    _free();
  }
  if (lStack_318 != 0) {
    piVar15 = (int *)(lStack_318 + 0x14);
    do {
      iVar9 = *piVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar3) {
        *piVar15 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5 = &uStack_350;
      func_0x000109a848d4();
    }
  }
  lStack_318 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  if (0 < uStack_350._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_310 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_350._4_4_);
  }
  if (puStack_308 != auStack_300 && puStack_308 != (undefined1 *)0x0) {
    puVar5 = *(undefined8 **)(puStack_308 + -8);
    _free();
  }
  if (lStack_2b8 != 0) {
    piVar15 = (int *)(lStack_2b8 + 0x14);
    do {
      iVar9 = *piVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar3) {
        *piVar15 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5 = &uStack_2f0;
      func_0x000109a848d4();
    }
  }
  lStack_2b8 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  if (0 < uStack_2f0._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_2b0 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_2f0._4_4_);
  }
  if (puStack_2a8 != auStack_2a0 && puStack_2a8 != (undefined1 *)0x0) {
    puVar5 = *(undefined8 **)(puStack_2a8 + -8);
    _free();
  }
  if (lStack_f8 != 0) {
    piVar15 = (int *)(lStack_f8 + 0x14);
    do {
      iVar9 = *piVar15;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar3) {
        *piVar15 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar5 = &uStack_130;
      func_0x000109a848d4();
    }
  }
  lStack_f8 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  if (0 < uStack_130._4_4_) {
    lVar13 = 0;
    do {
      *(undefined4 *)(lStack_f0 + lVar13 * 4) = 0;
      lVar13 = lVar13 + 1;
    } while (lVar13 < uStack_130._4_4_);
  }
  if (puStack_e8 != auStack_e0 && puStack_e8 != (undefined1 *)0x0) {
    puVar5 = *(undefined8 **)(puStack_e8 + -8);
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar10 != 0) {
    func_0x000104bd46a0();
    FUN_109ff0424(&uStack_3b0);
    FUN_109ff0424(&uStack_d0);
    FUN_109ff0424(&uStack_350);
    FUN_109ff0424(&uStack_2f0);
    FUN_109ff0424(&uStack_130);
    uStack_290 = SUB84(param_1,0);
    iStack_28c = (int)((ulong)param_1 >> 0x20);
    FUN_109ffe3e8(&uStack_290);
  }
  __Unwind_Resume();
  uStack_4b8 = &uStack_520;
  puVar7 = &uStack_520;
  lStack_438 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_518 = puVar10[1];
  uStack_520 = *puVar10;
  uStack_508 = puVar10[3];
  uStack_510 = puVar10[2];
  iVar9 = *(int *)((long)puVar10 + 4);
  piStack_4e0 = (int *)((ulong)&uStack_520 | 8);
  uStack_4f8 = puVar10[5];
  uStack_500 = puVar10[4];
  uStack_4e8 = puVar10[7];
  uStack_4f0 = puVar10[6];
  puStack_4d8 = &uStack_4d0;
  uStack_4d0 = 0;
  uStack_4c8 = 0;
  if (puVar10[7] != 0) {
    piVar15 = (int *)(puVar10[7] + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
      if (bVar3) {
        *piVar15 = *piVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar9 = *(int *)((long)puVar10 + 4);
  }
  if (iVar9 < 3) {
    uStack_4d0 = *(undefined8 *)puVar10[9];
    uStack_4c8 = ((undefined8 *)puVar10[9])[1];
  }
  else {
    uStack_520 = uStack_520 & 0xffffffff;
    func_0x000109a84868(&uStack_520);
  }
  uVar14 = (ulong)uStack_520._4_4_;
  if ((int)uStack_520._4_4_ < 3) {
    uVar14 = 0;
    if ((long)piStack_4e0[(long)(int)uStack_520._4_4_ + -1] != 0) {
      uVar14 = (ulong)((long)uStack_518._4_4_ * (long)(int)uStack_518) /
               (ulong)(long)piStack_4e0[(long)(int)uStack_520._4_4_ + -1];
    }
    if (uVar14 >> 0x1f == 0) {
LAB_10a6c2cb8:
      uStack_458 = (double)(uVar14 << 0x20);
      uStack_4c0._0_4_ = 0x10c10cf8;
      uStack_4c0._4_4_ = 1;
      uVar20 = 0;
      func_0x000109aa87cc(&uStack_458,&uStack_4c0);
      FUN_10a6c19dc(&uStack_520);
      uStack_4c0._0_4_ = 0x42ff0000;
      uStack_4b8._4_4_ = 0;
      uStack_4b0 = 0;
      uStack_4c0._4_4_ = 0;
      uStack_4b8._0_4_ = 0;
      uStack_480 = (ulong)&uStack_4c0 | 8;
      uStack_4a4 = 0;
      uStack_4a0 = 0;
      uStack_4ac = 0;
      uStack_4a8 = 0;
      uStack_494 = 0;
      uStack_49c = 0;
      uStack_498 = 0;
      uStack_488 = 0;
      uStack_490 = 0;
      uStack_48c = 0;
      uStack_470 = 0;
      uStack_468 = 0;
      uStack_458 = (double)CONCAT44((int)piVar11,uVar12);
      puStack_478 = &uStack_470;
      func_0x000109a83fd0(&uStack_4c0,2,&uStack_458,0);
      fVar21 = (float)NEON_fminnm(uVar20,0x3f800000);
      uStack_458 = (double)(uint)(int)(fVar21 * 255.0);
      uStack_448 = 0;
      uStack_440 = 0;
      uStack_450 = 0;
      puVar6 = &uStack_4c0;
      iVar9 = (int)&uStack_458;
      func_0x000109a48880(puVar6);
      puVar5[1] = CONCAT44(uStack_4b8._4_4_,(undefined4)uStack_4b8);
      *puVar5 = CONCAT44(uStack_4c0._4_4_,(undefined4)uStack_4c0);
      puVar5[3] = CONCAT44(uStack_4a4,uStack_4a8);
      puVar5[2] = CONCAT44(uStack_4ac,uStack_4b0);
      puVar5[10] = 0;
      puVar5[5] = CONCAT44(uStack_494,uStack_498);
      puVar5[4] = CONCAT44(uStack_49c,uStack_4a0);
      puVar5[7] = uStack_488;
      puVar5[6] = CONCAT44(uStack_48c,uStack_490);
      puVar5[8] = puVar5 + 1;
      puVar5[9] = puVar5 + 10;
      puVar5[0xb] = 0;
      if (uStack_4c0._4_4_ < 3) {
        puVar16 = (undefined8 *)((ulong)&uStack_4c0 | 4);
        puVar5[10] = *puStack_478;
        puVar5[0xb] = puStack_478[1];
        uStack_4c0._0_4_ = 0x42ff0000;
        puVar16[1] = 0;
        *puVar16 = 0;
        puVar16[3] = 0;
        puVar16[2] = 0;
        puVar16[5] = 0;
        puVar16[4] = 0;
        *(undefined8 *)((long)puVar16 + 0x34) = 0;
        *(undefined8 *)((long)puVar16 + 0x2c) = 0;
        if (puStack_478 != &uStack_470) {
          puVar6 = (undefined8 *)puStack_478[-1];
          _free(puVar6);
        }
      }
      else {
        puVar5[8] = uStack_480;
        puVar5[9] = puStack_478;
      }
      if (uStack_4e8 != 0) {
        piVar15 = (int *)(uStack_4e8 + 0x14);
        do {
          iVar1 = *piVar15;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar15,0x10);
          if (bVar3) {
            *piVar15 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_520);
          puVar6 = puVar7;
        }
      }
      uStack_4e8 = 0;
      uStack_508 = 0;
      uStack_510 = 0;
      uStack_4f8 = 0;
      uStack_500 = 0;
      if (0 < (int)uStack_520._4_4_) {
        lVar13 = 0;
        do {
          piStack_4e0[lVar13] = 0;
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_520._4_4_);
      }
      if (puStack_4d8 != &uStack_4d0 && puStack_4d8 != (undefined8 *)0x0) {
        puVar6 = (undefined8 *)puStack_4d8[-1];
        _free(puVar6);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_438) {
        return;
      }
      ___stack_chk_fail();
      if (iVar9 != 0) {
        func_0x000104bd46a0(puVar6);
        uStack_4c0._0_4_ = 0;
        uStack_4c0._4_4_ = 0;
        uStack_4b8._0_4_ = 0;
        uStack_4b8._4_4_ = 0;
        do {
          iVar9 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          _free(*(undefined8 *)(piVar11 + -2));
        }
        func_0x00010938f90c(&uStack_520);
      }
      __Unwind_Resume(puVar6);
      return;
    }
  }
  else {
    uVar18 = 1;
    piVar15 = piStack_4e0;
    uVar19 = uVar14;
    do {
      uVar18 = uVar18 * (long)*piVar15;
      uVar19 = uVar19 - 1;
      piVar15 = piVar15 + 1;
    } while (uVar19 != 0);
    uVar17 = (ulong)piStack_4e0[uVar14 - 1];
    uVar19 = 0;
    if (uVar17 != 0) {
      uVar19 = uVar18 / uVar17;
    }
    if (uVar19 >> 0x1f == 0) {
      uVar19 = 1;
      piVar15 = piStack_4e0;
      do {
        uVar19 = uVar19 * (long)*piVar15;
        uVar14 = uVar14 - 1;
        piVar15 = piVar15 + 1;
      } while (uVar14 != 0);
      uVar14 = 0;
      if (uVar17 != 0) {
        uVar14 = uVar19 / uVar17;
      }
      goto LAB_10a6c2cb8;
    }
  }
  puVar8 = (undefined4 *)0x3c;
  func_0x000107c2ae8c();
  *puVar8 = 1;
  uStack_4c0 = puVar8 + 1;
  uStack_4b8._0_4_ = 0x35;
  uStack_4b8._4_4_ = 0;
  *(undefined8 *)(puVar8 + 3) = 0x202f2029286c6174;
  *(undefined8 *)(puVar8 + 1) = 0x6f743e2d73696874;
  *(undefined1 *)((long)puVar8 + 0x39) = 0;
  *(undefined8 *)(puVar8 + 7) = 0x2d736968745b657a;
  *(undefined8 *)(puVar8 + 5) = 0x69733e2d73696874;
  *(undefined8 *)(puVar8 + 0xb) = 0x4e49203d3c205d31;
  *(undefined8 *)(puVar8 + 9) = 0x202d20736d69643e;
  *(undefined8 *)((long)puVar8 + 0x31) = 0x58414d5f544e4920;
  func_0x000109ac3188(0xffffff29,&uStack_4c0,&UNK_10f56f0c1,&UNK_10f56f0ce,0x171);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6c2ef8);
  (*pcVar4)();
}



/* Entry: 10a6c2b88; end: 10a6c2f6b;  */

void FUN_10a6c2b88(undefined8 *param_1,ulong *param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  int *piStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar6 = &uStack_150;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_148 = param_2[1];
  uStack_150 = *param_2;
  uStack_138 = param_2[3];
  uStack_140 = param_2[2];
  iVar8 = *(int *)((long)param_2 + 4);
  piStack_110 = (int *)((ulong)&uStack_150 | 8);
  uStack_128 = param_2[5];
  uStack_130 = param_2[4];
  uStack_118 = param_2[7];
  uStack_120 = param_2[6];
  uStack_100 = 0;
  uStack_f8 = 0;
  if (param_2[7] != 0) {
    piVar11 = (int *)(param_2[7] + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    iVar8 = *(int *)((long)param_2 + 4);
  }
  puStack_108 = &uStack_100;
  if (iVar8 < 3) {
    uStack_100 = *(undefined8 *)param_2[9];
    uStack_f8 = ((undefined8 *)param_2[9])[1];
  }
  else {
    uStack_150 = uStack_150 & 0xffffffff;
    func_0x000109a84868(&uStack_150);
  }
  uVar9 = (ulong)uStack_150._4_4_;
  if ((int)uStack_150._4_4_ < 3) {
    uVar9 = 0;
    if ((long)piStack_110[(long)(int)uStack_150._4_4_ + -1] != 0) {
      uVar9 = (ulong)((long)uStack_148._4_4_ * (long)(int)uStack_148) /
              (ulong)(long)piStack_110[(long)(int)uStack_150._4_4_ + -1];
    }
    if (uVar9 >> 0x1f == 0) {
LAB_10a6c2cb8:
      uStack_88 = (double)(uVar9 << 0x20);
      uStack_f0._0_4_ = 0x10c10cf8;
      uStack_f0._4_4_ = 1;
      uVar16 = 0;
      uStack_e8 = &uStack_150;
      func_0x000109aa87cc(&uStack_88,&uStack_f0);
      FUN_10a6c19dc(&uStack_150);
      uStack_f0._0_4_ = 0x42ff0000;
      uStack_e8._4_4_ = 0;
      uStack_e0 = 0;
      uStack_f0._4_4_ = 0;
      uStack_e8._0_4_ = 0;
      uStack_b0 = (ulong)&uStack_f0 | 8;
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_dc = 0;
      uStack_d8 = 0;
      uStack_c4 = 0;
      uStack_cc = 0;
      uStack_c8 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_bc = 0;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_88 = (double)CONCAT44((int)param_3,param_4);
      puStack_a8 = &uStack_a0;
      func_0x000109a83fd0(&uStack_f0,2,&uStack_88,0);
      fVar17 = (float)NEON_fminnm(uVar16,0x3f800000);
      uStack_88 = (double)(uint)(int)(fVar17 * 255.0);
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      puVar5 = &uStack_f0;
      iVar8 = (int)&uStack_88;
      func_0x000109a48880(puVar5);
      param_1[1] = CONCAT44(uStack_e8._4_4_,(undefined4)uStack_e8);
      *param_1 = CONCAT44(uStack_f0._4_4_,(undefined4)uStack_f0);
      param_1[3] = CONCAT44(uStack_d4,uStack_d8);
      param_1[2] = CONCAT44(uStack_dc,uStack_e0);
      param_1[10] = 0;
      param_1[5] = CONCAT44(uStack_c4,uStack_c8);
      param_1[4] = CONCAT44(uStack_cc,uStack_d0);
      param_1[7] = uStack_b8;
      param_1[6] = CONCAT44(uStack_bc,uStack_c0);
      param_1[8] = param_1 + 1;
      param_1[9] = param_1 + 10;
      param_1[0xb] = 0;
      if (uStack_f0._4_4_ < 3) {
        puVar12 = (undefined8 *)((ulong)&uStack_f0 | 4);
        param_1[10] = *puStack_a8;
        param_1[0xb] = puStack_a8[1];
        uStack_f0._0_4_ = 0x42ff0000;
        puVar12[1] = 0;
        *puVar12 = 0;
        puVar12[3] = 0;
        puVar12[2] = 0;
        puVar12[5] = 0;
        puVar12[4] = 0;
        *(undefined8 *)((long)puVar12 + 0x34) = 0;
        *(undefined8 *)((long)puVar12 + 0x2c) = 0;
        if (puStack_a8 != &uStack_a0) {
          puVar5 = (undefined8 *)puStack_a8[-1];
          _free(puVar5);
        }
      }
      else {
        param_1[8] = uStack_b0;
        param_1[9] = puStack_a8;
      }
      if (uStack_118 != 0) {
        piVar11 = (int *)(uStack_118 + 0x14);
        do {
          iVar1 = *piVar11;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = iVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar1 + -1 == 0) {
          func_0x000109a848d4(&uStack_150);
          puVar5 = puVar6;
        }
      }
      uStack_118 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      uStack_128 = 0;
      uStack_130 = 0;
      if (0 < (int)uStack_150._4_4_) {
        lVar10 = 0;
        do {
          piStack_110[lVar10] = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uStack_150._4_4_);
      }
      if (puStack_108 != &uStack_100 && puStack_108 != (undefined8 *)0x0) {
        puVar5 = (undefined8 *)puStack_108[-1];
        _free(puVar5);
      }
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
        return;
      }
      ___stack_chk_fail();
      if (iVar8 != 0) {
        func_0x000104bd46a0(puVar5);
        uStack_f0._0_4_ = 0;
        uStack_f0._4_4_ = 0;
        uStack_e8._0_4_ = 0;
        uStack_e8._4_4_ = 0;
        do {
          iVar8 = *param_3;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(param_3,0x10);
          if (bVar3) {
            *param_3 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          _free(*(undefined8 *)(param_3 + -2));
        }
        func_0x00010938f90c(&uStack_150);
      }
      __Unwind_Resume(puVar5);
      return;
    }
  }
  else {
    uVar14 = 1;
    piVar11 = piStack_110;
    uVar15 = uVar9;
    do {
      uVar14 = uVar14 * (long)*piVar11;
      uVar15 = uVar15 - 1;
      piVar11 = piVar11 + 1;
    } while (uVar15 != 0);
    uVar13 = (ulong)piStack_110[uVar9 - 1];
    uVar15 = 0;
    if (uVar13 != 0) {
      uVar15 = uVar14 / uVar13;
    }
    if (uVar15 >> 0x1f == 0) {
      uVar15 = 1;
      piVar11 = piStack_110;
      do {
        uVar15 = uVar15 * (long)*piVar11;
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar9 != 0);
      uVar9 = 0;
      if (uVar13 != 0) {
        uVar9 = uVar15 / uVar13;
      }
      goto LAB_10a6c2cb8;
    }
  }
  puVar7 = (undefined4 *)0x3c;
  func_0x000107c2ae8c();
  *puVar7 = 1;
  uStack_f0 = puVar7 + 1;
  uStack_e8._0_4_ = 0x35;
  uStack_e8._4_4_ = 0;
  *(undefined8 *)(puVar7 + 3) = 0x202f2029286c6174;
  *(undefined8 *)(puVar7 + 1) = 0x6f743e2d73696874;
  *(undefined1 *)((long)puVar7 + 0x39) = 0;
  *(undefined8 *)(puVar7 + 7) = 0x2d736968745b657a;
  *(undefined8 *)(puVar7 + 5) = 0x69733e2d73696874;
  *(undefined8 *)(puVar7 + 0xb) = 0x4e49203d3c205d31;
  *(undefined8 *)(puVar7 + 9) = 0x202d20736d69643e;
  *(undefined8 *)((long)puVar7 + 0x31) = 0x58414d5f544e4920;
  func_0x000109ac3188(0xffffff29,&uStack_f0,&UNK_10f56f0c1,&UNK_10f56f0ce,0x171);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a6c2ef8);
  (*pcVar4)();
}



/* Entry: 10a6c2f6c; end: 10a6c2f73;  */

void FUN_10a6c2f6c(void)

{
  return;
}



/* Entry: 10a6c2f74; end: 10a6c315b;  */

void FUN_10a6c2f74(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long *plVar11;
  int *piVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  int *piVar21;
  long lVar22;
  int iVar23;
  int *piVar24;
  ulong uVar25;
  ulong uVar26;
  int aiStack_48 [2];
  long lStack_40;
  
  lVar13 = *(long *)(param_1 + 8);
  uVar5 = *(uint *)(lVar13 + 4);
  uVar26 = (ulong)uVar5;
  iVar3 = *(int *)(*(long *)(lVar13 + 0x40) + (long)(int)uVar5 * 4 + -4);
  if ((int)uVar5 < 3) {
    aiStack_48[0] = *param_2;
    iVar16 = param_2[1];
    if (aiStack_48[0] < iVar16) {
      pfVar17 = *(float **)(lVar13 + 0x10);
      do {
        aiStack_48[1] = 0;
        pfVar18 = pfVar17;
        if (0 < (int)uVar5) {
          plVar11 = *(long **)(lVar13 + 0x48);
          piVar21 = aiStack_48;
          uVar14 = uVar26;
          do {
            pfVar18 = (float *)((long)pfVar18 + *plVar11 * (long)*piVar21);
            uVar14 = uVar14 - 1;
            plVar11 = plVar11 + 1;
            piVar21 = piVar21 + 1;
          } while (uVar14 != 0);
        }
        if (0 < iVar3) {
          pfVar19 = pfVar18;
          do {
            pfVar20 = pfVar19 + 1;
            *pfVar19 = (float)(int)*pfVar19;
            pfVar19 = pfVar20;
          } while (pfVar20 < pfVar18 + iVar3);
        }
        aiStack_48[0] = aiStack_48[0] + 1;
      } while (aiStack_48[0] != iVar16);
    }
  }
  else {
    FUN_109ffe1f4(aiStack_48);
    uVar14 = (ulong)(uVar5 - 2);
    piVar21 = (int *)CONCAT44(aiStack_48[1],aiStack_48[0]);
    uVar15 = lStack_40 - (long)piVar21 >> 2;
    if (uVar15 <= uVar14) {
LAB_10a6c3158:
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10a6c315c);
      (*pcVar9)();
    }
    piVar21[uVar14] = *param_2 + -1;
    iVar16 = *param_2;
    if (iVar16 < param_2[1]) {
      lVar13 = *(long *)(param_1 + 8);
      lVar22 = *(long *)(lVar13 + 0x40);
      do {
        iVar23 = piVar21[uVar14];
        piVar21[uVar14] = iVar23 + 1;
        lVar10 = uVar14 + 1;
        piVar12 = piVar21 + (uVar14 - 1);
        piVar24 = (int *)(lVar22 + uVar14 * 4);
        iVar23 = iVar23 + 1;
        do {
          iVar2 = *piVar24;
          if (iVar23 < iVar2) break;
          if (uVar15 <= lVar10 - 2U) goto LAB_10a6c3158;
          iVar6 = 0;
          if (iVar2 != 0) {
            iVar6 = iVar23 / iVar2;
          }
          iVar2 = *piVar12;
          *piVar12 = iVar2 + iVar6;
          iVar4 = *piVar24;
          iVar7 = 0;
          if (iVar4 != 0) {
            iVar7 = iVar23 / iVar4;
          }
          piVar12[1] = iVar23 - iVar7 * iVar4;
          piVar12 = piVar12 + -1;
          lVar8 = lVar10 + -1;
          bVar1 = 0 < lVar10;
          lVar10 = lVar8;
          piVar24 = piVar24 + -1;
          iVar23 = iVar2 + iVar6;
        } while (lVar8 != 0 && bVar1);
        pfVar17 = *(float **)(lVar13 + 0x10);
        piVar21[uVar26 - 1] = 0;
        uVar25 = (ulong)*(uint *)(lVar13 + 4);
        if (0 < (int)*(uint *)(lVar13 + 4)) {
          plVar11 = *(long **)(lVar13 + 0x48);
          piVar12 = piVar21;
          do {
            pfVar17 = (float *)((long)pfVar17 + *plVar11 * (long)*piVar12);
            uVar25 = uVar25 - 1;
            plVar11 = plVar11 + 1;
            piVar12 = piVar12 + 1;
          } while (uVar25 != 0);
        }
        iVar23 = iVar3;
        if (0 < iVar3) {
          do {
            *pfVar17 = (float)(int)*pfVar17;
            iVar23 = iVar23 + -1;
            pfVar17 = pfVar17 + 1;
          } while (iVar23 != 0);
        }
        piVar21[uVar26 - 1] = 0;
        iVar16 = iVar16 + 1;
      } while (iVar16 < param_2[1]);
    }
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c315c; end: 10a6c320f;  */

void FUN_10a6c315c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_198 [352];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = param_3;
  uStack_34 = param_4;
  func_0x000109a829e8(auStack_198,&uStack_38,0);
  FUN_10a003124(param_1,auStack_198);
  func_0x00010918eb6c(auStack_198);
  FUN_10a6c3550(param_1,param_2);
  FUN_10a6c4100(param_1,param_2,0);
  FUN_10a6c41a8(param_1,param_2,0);
  FUN_10a6c3614(param_1,param_2);
  return;
}



/* Entry: 10a6c3210; end: 10a6c354f;  */

void FUN_10a6c3210(undefined4 *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  int iStack_35c;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined4 *puStack_338;
  undefined1 *puStack_330;
  code *pcStack_328;
  undefined4 auStack_318 [2];
  undefined4 *puStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined4 auStack_178 [2];
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined4 auStack_160 [2];
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  undefined1 *puStack_140;
  undefined8 uStack_138;
  undefined4 auStack_130 [2];
  long lStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  long lStack_e0;
  undefined1 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long lStack_80;
  undefined4 *puStack_78;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_d8 = auStack_110;
  puStack_2d8 = (undefined8 *)0x4039800000000000;
  uStack_2e0 = 0x4039800000000000;
  uStack_2c8 = 0x4039800000000000;
  uStack_2d0 = 0x4039800000000000;
  auStack_118._0_4_ = 0x42ff0000;
  uStack_10c = 0;
  uStack_108 = 0;
  stack0xfffffffffffffeec = 0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_ec = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  lStack_e0 = 0;
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_c0 = 0;
  uStack_c8 = 0;
  uStack_b8 = (undefined4)**(undefined8 **)(param_2 + 0x40);
  iStack_b4 = (int)((ulong)**(undefined8 **)(param_2 + 0x40) >> 0x20);
  puStack_d0 = &uStack_c8;
  func_0x000109a83fd0(auStack_118,2,&uStack_b8,0x10);
  func_0x000109a48880(auStack_118,&uStack_2e0);
  uStack_b8 = 0x42ff0000;
  uStack_ac = 0;
  uStack_a8 = 0;
  iStack_b4 = 0;
  uStack_b0 = 0;
  puStack_78 = &uStack_b0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_8c = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  lStack_80 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_2e0 = CONCAT44(uStack_2e0._4_4_,0x2010000);
  uStack_2d0 = 0;
  puStack_2d8 = (undefined8 *)&uStack_b8;
  puStack_70 = &uStack_68;
  func_0x000109a41858(0x3f70101020000000,0,param_3,&uStack_2e0,5);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_120 = 0;
  auStack_130[0] = 0x1010000;
  uStack_138 = 0;
  auStack_148[0] = 0x1010000;
  puStack_140 = auStack_118;
  uStack_150 = 0;
  auStack_160[0] = 0x1010000;
  uStack_300 = 0x3ff0000000000000;
  uStack_2f8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  puStack_158 = (undefined8 *)&uStack_b8;
  lStack_128 = param_2;
  func_0x000109a7cf94(&uStack_2e0,&uStack_300,&uStack_b8);
  uStack_168 = 0;
  auStack_178[0] = 0xc1060000;
  auStack_318[0] = 0x2010000;
  uStack_308 = 0;
  puVar7 = auStack_148;
  puStack_310 = param_1;
  puStack_170 = &uStack_2e0;
  func_0x000109ac8358(auStack_130,puVar7,auStack_160,auStack_178,auStack_318);
  puVar5 = &uStack_2e0;
  func_0x00010918eb6c();
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar5 = (undefined8 *)&uStack_b8;
      func_0x000109a848d4();
    }
  }
  lStack_80 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_90 = 0;
  uStack_8c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  if (0 < iStack_b4) {
    lVar8 = 0;
    do {
      puStack_78[lVar8] = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iStack_b4);
  }
  if (puStack_70 != &uStack_68 && puStack_70 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puStack_70[-1];
    _free();
  }
  if (lStack_e0 != 0) {
    piVar1 = (int *)(lStack_e0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      puVar5 = (undefined8 *)auStack_118;
      func_0x000109a848d4();
    }
  }
  lStack_e0 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  if (0 < (int)auStack_118._4_4_) {
    lVar8 = 0;
    do {
      *(undefined4 *)(puStack_d8 + lVar8 * 4) = 0;
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)auStack_118._4_4_);
  }
  if (puStack_d0 != &uStack_c8 && puStack_d0 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)puStack_d0[-1];
    _free();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar7 != 0) {
    func_0x000104bd46a0();
    func_0x00010918eb6c(&uStack_2e0);
    func_0x00010567aa40(param_1);
    func_0x00010567aa40(&uStack_b8);
    func_0x00010567aa40(auStack_118);
  }
  puVar6 = puVar5;
  __Unwind_Resume(puVar5);
  pcStack_328 = FUN_10a6c3550;
  lStack_358 = 0;
  lStack_350 = 0;
  uStack_348 = 0;
  iStack_35c = 0;
  puStack_340 = puVar5;
  puStack_338 = param_1;
  puStack_330 = &stack0xfffffffffffffff0;
  do {
    func_0x000109febdc8(&lStack_358,&iStack_35c);
    bVar4 = iStack_35c < 0x10;
    iStack_35c = iStack_35c + 1;
  } while (bVar4);
  iStack_35c = 0x1a;
  do {
    func_0x000109febdc8(&lStack_358,&iStack_35c);
    iVar2 = iStack_35c + -1;
    bVar4 = 0x11 < iStack_35c;
    iStack_35c = iVar2;
  } while (bVar4);
  FUN_10a6c3f10(puVar6,puVar7,lStack_358,lStack_350,0xff);
  if (lStack_358 != 0) {
    lStack_350 = lStack_358;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c3550; end: 10a6c3613;  */

void FUN_10a6c3550(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  int iStack_3c;
  long lStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  lStack_38 = 0;
  lStack_30 = 0;
  uStack_28 = 0;
  iStack_3c = 0;
  do {
    func_0x000109febdc8(&lStack_38,&iStack_3c);
    bVar1 = iStack_3c < 0x10;
    iStack_3c = iStack_3c + 1;
  } while (bVar1);
  iStack_3c = 0x1a;
  do {
    func_0x000109febdc8(&lStack_38,&iStack_3c);
    iVar2 = iStack_3c + -1;
    bVar1 = 0x11 < iStack_3c;
    iStack_3c = iVar2;
  } while (bVar1);
  FUN_10a6c3f10(param_1,param_2,lStack_38,lStack_30,0xff);
  if (lStack_38 != 0) {
    lStack_30 = lStack_38;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c3614; end: 10a6c3f0f;  */

void FUN_10a6c3614(long **param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long **pplVar9;
  undefined8 ******ppppppuVar10;
  undefined8 ******ppppppuVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 **ppuVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int iStack_4ac;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  undefined8 *puStack_488;
  long *plStack_480;
  undefined8 *****pppppuStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  undefined8 uStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined4 auStack_418 [2];
  undefined8 *puStack_410;
  undefined8 uStack_408;
  undefined4 auStack_400 [2];
  long **pplStack_3f8;
  undefined8 uStack_3f0;
  undefined8 *****pppppuStack_3e8;
  undefined8 *****pppppuStack_3e0;
  undefined8 *****pppppuStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  undefined1 *puStack_3a8;
  long *plStack_3a0;
  int *piStack_398;
  long lStack_390;
  long **pplStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  long **pplStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long *plStack_2f8;
  long *plStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_2c8;
  long lStack_2c0;
  undefined1 *puStack_2b8;
  undefined1 auStack_2b0 [16];
  undefined8 uStack_2a0;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  long lStack_268;
  long lStack_260;
  undefined1 *puStack_258;
  undefined1 auStack_250 [16];
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long **pplStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  long **pplStack_a0;
  undefined8 uStack_98;
  long alStack_90 [2];
  
  alStack_90[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_300 = (long *)0x2200000021;
  uStack_c8 = 0x7fffffff80000000;
  pplStack_368 = param_1;
  func_0x000109a84930(&uStack_2a0,param_2,&uStack_300,&uStack_c8);
  dVar20 = 1.909796212264e-313;
  uStack_c8 = 0x900000008;
  uStack_e0 = 0x7fffffff80000000;
  func_0x000109a84930(&uStack_300,param_2,&uStack_c8,&uStack_e0);
  puVar12 = &uStack_2a0;
  func_0x000109a7cd1c(&plStack_240,puVar12,&uStack_300);
  uStack_350 = 0;
  uStack_34c = 0;
  uStack_360._0_4_ = 0xc1060000;
  uStack_358 = &plStack_240;
  func_0x000109a91d90();
  func_0x000109ab9654(&uStack_360,4,puVar12);
  func_0x00010918eb6c(&plStack_240);
  if (lStack_2c8 != 0) {
    piVar19 = (int *)(lStack_2c8 + 0x14);
    do {
      iVar16 = *piVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar4) {
        *piVar19 = iVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_300);
    }
  }
  lStack_2c8 = 0;
  uStack_2e8 = 0;
  plStack_2f0 = (long *)0x0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  if (0 < uStack_300._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_2c0 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_300._4_4_);
  }
  if (puStack_2b8 != auStack_2b0 && puStack_2b8 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_2b8 + -8));
  }
  if (lStack_268 != 0) {
    piVar19 = (int *)(lStack_268 + 0x14);
    do {
      iVar16 = *piVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar19,0x10);
      if (bVar4) {
        *piVar19 = iVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar16 + -1 == 0) {
      func_0x000109a848d4(&uStack_2a0);
    }
  }
  lStack_268 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  if (0 < uStack_2a0._4_4_) {
    lVar17 = 0;
    do {
      *(undefined4 *)(lStack_260 + lVar17 * 4) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < uStack_2a0._4_4_);
  }
  plVar7 = &uStack_2a0;
  if (puStack_258 != auStack_250 && puStack_258 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_258 + -8));
  }
  lVar17 = 0;
  uStack_358._0_4_ = 0x3e;
  uStack_358._4_4_ = 0x42;
  uStack_360._0_4_ = 0x3d;
  uStack_360._4_4_ = 0x43;
  uStack_350 = 0x3f;
  uStack_34c = 0x41;
  dVar23 = 0.0;
  dVar21 = 1.37929726443869e-312;
  do {
    piVar19 = (int *)((long)&uStack_360 + lVar17);
    uStack_300 = (long *)CONCAT44(*piVar19 + 1,*piVar19);
    uStack_e0 = 0x7fffffff80000000;
    func_0x000109a84930(&uStack_2a0,param_2,&uStack_300,&uStack_e0);
    iVar16 = *(int *)((long)&uStack_360 + lVar17 + 4);
    uStack_e0 = CONCAT44(iVar16 + 1,iVar16);
    lStack_a8 = 0x7fffffff80000000;
    plVar8 = &lStack_a8;
    func_0x000109a84930(&uStack_300,param_2,&uStack_e0);
    plVar5 = &uStack_2a0;
    func_0x000109a7cd1c(&plStack_240,plVar5,&uStack_300);
    uStack_b8 = 0;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,0xc1060000);
    pplStack_c0 = &plStack_240;
    func_0x000109a91d90();
    puVar12 = (undefined8 *)0x4;
    func_0x000109ab9654(&uStack_c8);
    pplVar6 = &plStack_240;
    func_0x00010918eb6c();
    if (lStack_2c8 != 0) {
      piVar1 = (int *)(lStack_2c8 + 0x14);
      do {
        iVar16 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar16 + -1 == 0) {
        pplVar6 = (long **)&uStack_300;
        func_0x000109a848d4();
      }
    }
    lStack_2c8 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    if (0 < uStack_300._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(lStack_2c0 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_300._4_4_);
    }
    if (puStack_2b8 != auStack_2b0 && puStack_2b8 != (undefined1 *)0x0) {
      pplVar6 = *(long ***)(puStack_2b8 + -8);
      _free();
    }
    if (lStack_268 != 0) {
      piVar1 = (int *)(lStack_268 + 0x14);
      do {
        iVar16 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar16 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar16 + -1 == 0) {
        pplVar6 = (long **)&uStack_2a0;
        func_0x000109a848d4();
      }
    }
    lStack_268 = 0;
    dVar22 = 0.0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    if (0 < uStack_2a0._4_4_) {
      lVar18 = 0;
      do {
        *(undefined4 *)(lStack_260 + lVar18 * 4) = 0;
        lVar18 = lVar18 + 1;
      } while (lVar18 < uStack_2a0._4_4_);
    }
    if (puStack_258 != auStack_250 && puStack_258 != (undefined1 *)0x0) {
      pplVar6 = *(long ***)(puStack_258 + -8);
      _free();
    }
    iVar16 = (int)param_5;
    dVar23 = dVar23 + dVar21;
    lVar17 = lVar17 + 8;
    dVar21 = dVar22;
  } while (lVar17 != 0x18);
  if (0.037 < (float)(dVar23 / 3.0) / (float)dVar20) {
    uStack_300 = (long *)NEON_rev64(*pplStack_368[8],4);
    func_0x000109a829e8(&plStack_240,&uStack_300,0);
    FUN_10a003124(&uStack_2a0,&plStack_240);
    func_0x00010918eb6c(&plStack_240);
    uStack_300 = (long *)0x0;
    plStack_2f8 = (long *)0x0;
    lVar17 = 0x3c;
    plStack_2f0 = (long *)0x0;
    do {
      puVar12 = (undefined8 *)(*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * lVar17);
      if (plStack_2f8 < plStack_2f0) {
        plVar7 = plStack_2f8 + 1;
        *plStack_2f8 = CONCAT44((int)(float)((ulong)*puVar12 >> 0x20),(int)(float)*puVar12);
      }
      else {
        plVar7 = &uStack_300;
        FUN_10a000e78(plVar7,puVar12,(long)puVar12 + 4);
      }
      lVar17 = lVar17 + 1;
      plStack_2f8 = plVar7;
    } while (lVar17 != 0x44);
    uStack_360._0_4_ = 0x83010000;
    uStack_358 = (long **)&uStack_2a0;
    uStack_350 = 0;
    uStack_34c = 0;
    lStack_a8 = 0;
    pplStack_a0 = (long **)0x0;
    uStack_98 = 0;
    FUN_10a000fa0(&lStack_a8,uStack_300,plVar7,(long)plVar7 - (long)uStack_300 >> 3);
    uStack_e0 = 0;
    plStack_d8 = (long *)0x0;
    uStack_d0 = 0;
    FUN_10a001048(&uStack_e0,&lStack_a8,alStack_90,1);
    uStack_b8 = 0;
    puStack_b0 = (undefined *)0x0;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,0x8104000c);
    plStack_240 = (long *)0x406fe00000000000;
    uStack_238 = 0;
    uStack_230 = 0;
    uStack_228 = 0;
    pplStack_c0 = (long **)&uStack_e0;
    func_0x000109aefd90(&uStack_360,&uStack_c8,&plStack_240,8,0,&puStack_b0);
    plStack_240 = &uStack_e0;
    func_0x00010a001298(&plStack_240);
    if (lStack_a8 != 0) {
      pplStack_a0 = (long **)lStack_a8;
      __ZdlPv();
    }
    if (uStack_300 != (long *)0x0) {
      plStack_2f8 = uStack_300;
      __ZdlPv();
    }
    plStack_240 = (long *)0x300000003;
    uStack_360._0_4_ = 0xffffffff;
    uStack_360._4_4_ = 0xffffffff;
    func_0x000109b32bf8(&uStack_300,2,&plStack_240,&uStack_360);
    param_2 = 0x82010000;
    piVar19 = (int *)0x81010000;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_360._0_4_ = 0x81010000;
    pplStack_c0 = (long **)&uStack_2a0;
    uStack_c8._0_4_ = 0x82010000;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_e0._0_4_ = 0x1010000;
    uStack_238 = 0x7fefffffffffffff;
    plStack_240 = (long *)0x7fefffffffffffff;
    uStack_228 = 0x7fefffffffffffff;
    uStack_230 = 0x7fefffffffffffff;
    lStack_a8 = -1;
    plStack_d8 = &uStack_300;
    uStack_358 = pplStack_c0;
    func_0x000109b32fd4(0,&uStack_360,&uStack_c8,&uStack_e0,&lStack_a8,1,0,&plStack_240);
    func_0x000109a7f188(&plStack_240,&uStack_2a0);
    uStack_360._0_4_ = 0x42ff0000;
    plVar7 = &uStack_360;
    puStack_320 = &uStack_358;
    uStack_358._4_4_ = 0;
    uStack_350 = 0;
    uStack_360._4_4_ = 0;
    uStack_358._0_4_ = 0;
    lStack_328 = 0;
    uStack_32c = 0;
    uStack_334 = 0;
    uStack_330 = 0;
    uStack_33c = 0;
    uStack_338 = 0;
    uStack_344 = 0;
    uStack_340 = 0;
    uStack_34c = 0;
    uStack_348 = 0;
    uStack_310 = 0;
    uStack_308 = 0;
    plVar8 = plStack_240;
    puStack_318 = &uStack_310;
    (**(code **)(*plStack_240 + 0x18))(plStack_240,&plStack_240,&uStack_360,0xffffffff);
    uStack_b8 = 0;
    uStack_c8 = CONCAT44(uStack_c8._4_4_,0x81010000);
    pplStack_c0 = pplStack_368;
    uStack_d0 = 0;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x1010000);
    lStack_a8 = CONCAT44(lStack_a8._4_4_,0x82010000);
    pplStack_a0 = pplStack_368;
    uStack_98 = 0;
    plStack_d8 = plVar7;
    func_0x000109a91d90();
    puStack_b0 = &UNK_109a27900;
    puVar12 = &uStack_e0;
    plVar5 = &lStack_a8;
    iVar16 = (int)&puStack_b0;
    func_0x000109a279fc(&uStack_c8);
    if (lStack_328 != 0) {
      piVar1 = (int *)(lStack_328 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        func_0x000109a848d4(&uStack_360);
      }
    }
    lStack_328 = 0;
    uStack_348 = 0;
    uStack_344 = 0;
    uStack_350 = 0;
    uStack_34c = 0;
    uStack_338 = 0;
    uStack_334 = 0;
    uStack_340 = 0;
    uStack_33c = 0;
    if (0 < uStack_360._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)((long)puStack_320 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_360._4_4_);
    }
    if (puStack_318 != &uStack_310 && puStack_318 != (undefined8 *)0x0) {
      _free(puStack_318[-1]);
    }
    pplVar6 = &plStack_240;
    func_0x00010918eb6c();
    if (lStack_2c8 != 0) {
      piVar1 = (int *)(lStack_2c8 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        pplVar6 = (long **)&uStack_300;
        func_0x000109a848d4();
      }
    }
    lStack_2c8 = 0;
    uStack_2e8 = 0;
    plStack_2f0 = (long *)0x0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    if (0 < uStack_300._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(lStack_2c0 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_300._4_4_);
    }
    if (puStack_2b8 != auStack_2b0 && puStack_2b8 != (undefined1 *)0x0) {
      pplVar6 = *(long ***)(puStack_2b8 + -8);
      _free();
    }
    if (lStack_268 != 0) {
      piVar1 = (int *)(lStack_268 + 0x14);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        pplVar6 = (long **)&uStack_2a0;
        func_0x000109a848d4();
      }
    }
    lStack_268 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    if (0 < uStack_2a0._4_4_) {
      lVar17 = 0;
      do {
        *(undefined4 *)(lStack_260 + lVar17 * 4) = 0;
        lVar17 = lVar17 + 1;
      } while (lVar17 < uStack_2a0._4_4_);
    }
    if (puStack_258 != auStack_250 && puStack_258 != (undefined1 *)0x0) {
      pplVar6 = *(long ***)(puStack_258 + -8);
      _free();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_90[0]) {
    ___stack_chk_fail();
    if ((int)puVar12 != 0) {
      func_0x000104bd46a0();
      func_0x00010938f90c(&uStack_2a0);
    }
    pplVar9 = pplVar6;
    __Unwind_Resume();
    pcStack_378 = FUN_10a6c3f10;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppppuStack_3e8 = (undefined8 ******)0x0;
    pppppuStack_3e0 = (undefined8 ******)0x0;
    pppppuStack_3d8 = (undefined8 ******)0x0;
    uStack_3b0 = 0x18;
    puStack_380 = &stack0xfffffffffffffff0;
    puStack_3a8 = auStack_250;
    pplStack_388 = pplVar6;
    lStack_390 = param_2;
    piStack_398 = piVar19;
    plStack_3a0 = plVar7;
    while (plVar5 != plVar8) {
      puVar13 = (undefined8 *)(puVar12[2] + *(long *)puVar12[9] * (long)(int)*plVar5);
      if (pppppuStack_3e0 < pppppuStack_3d8) {
        ppppppuVar10 = (undefined8 ******)(pppppuStack_3e0 + 1);
        *pppppuStack_3e0 =
             (undefined8 *****)CONCAT44((int)(float)((ulong)*puVar13 >> 0x20),(int)(float)*puVar13);
      }
      else {
        ppppppuVar10 = &pppppuStack_3e8;
        FUN_10a000e78(ppppppuVar10,puVar13,(long)puVar13 + 4);
      }
      plVar5 = (long *)((long)plVar5 + 4);
      plVar7 = plVar5;
      pppppuStack_3e0 = ppppppuVar10;
    }
    auStack_400[0] = 0x83010000;
    uStack_3f0 = 0;
    lStack_3d0 = 0;
    lStack_3c8 = 0;
    uStack_3c0 = 0;
    pplStack_3f8 = pplVar9;
    FUN_10a000fa0(&lStack_3d0,pppppuStack_3e8,pppppuStack_3e0,
                  (long)pppppuStack_3e0 - (long)pppppuStack_3e8 >> 3);
    uStack_430 = 0;
    uStack_428 = 0;
    uStack_420 = 0;
    FUN_10a001048(&uStack_430,&lStack_3d0,&lStack_3b8,1);
    uStack_408 = 0;
    auStack_418[0] = 0x8104000c;
    puStack_450 = (undefined8 *)(double)iVar16;
    uStack_458 = 0;
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_448 = 0;
    puVar14 = auStack_418;
    ppuVar15 = &puStack_450;
    puStack_410 = &uStack_430;
    func_0x000109aefd90(auStack_400,puVar14,ppuVar15,8,0,&uStack_458);
    puStack_450 = &uStack_430;
    func_0x00010a001298(&puStack_450);
    if (lStack_3d0 != 0) {
      lStack_3c8 = lStack_3d0;
      __ZdlPv();
    }
    ppppppuVar10 = (undefined8 ******)pppppuStack_3e8;
    if ((undefined8 ******)pppppuStack_3e8 != (undefined8 ******)0x0) {
      pppppuStack_3e0 = pppppuStack_3e8;
      __ZdlPv();
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3b8) {
      ___stack_chk_fail();
      puStack_450 = &uStack_430;
      func_0x00010a001298(&puStack_450);
      if (lStack_3d0 != 0) {
        lStack_3c8 = lStack_3d0;
        __ZdlPv();
      }
      if ((undefined8 ******)pppppuStack_3e8 != (undefined8 ******)0x0) {
        pppppuStack_3e0 = pppppuStack_3e8;
        __ZdlPv();
      }
      ppppppuVar11 = ppppppuVar10;
      __Unwind_Resume(ppppppuVar10);
      pcStack_468 = FUN_10a6c4100;
      lStack_4a8 = 0;
      lStack_4a0 = 0;
      uStack_498 = 0;
      iStack_4ac = 0x29;
      plStack_490 = plVar7;
      puStack_488 = &uStack_430;
      plStack_480 = &lStack_3d0;
      pppppuStack_478 = ppppppuVar10;
      ppuStack_470 = &puStack_380;
      do {
        func_0x000109febdc8(&lStack_4a8,&iStack_4ac);
        iVar16 = iStack_4ac + -1;
        bVar4 = 0x24 < iStack_4ac;
        iStack_4ac = iVar16;
      } while (bVar4);
      FUN_10a6c3f10(ppppppuVar11,puVar14,lStack_4a8,lStack_4a0,ppuVar15);
      if (lStack_4a8 != 0) {
        lStack_4a0 = lStack_4a8;
        __ZdlPv();
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10a6c3f10; end: 10a6c40ff;  */

void FUN_10a6c3f10(undefined8 param_1,long param_2,int *param_3,int *param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 ******ppppppuVar3;
  undefined8 ******ppppppuVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 **ppuVar7;
  int *unaff_x22;
  int iStack_13c;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  int *piStack_120;
  undefined8 *puStack_118;
  long *plStack_110;
  undefined8 *****pppppuStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 auStack_a8 [2];
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined4 auStack_90 [2];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *****pppppuStack_78;
  undefined8 *****pppppuStack_70;
  undefined8 *****pppppuStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_78 = (undefined8 ******)0x0;
  pppppuStack_70 = (undefined8 ******)0x0;
  pppppuStack_68 = (undefined8 ******)0x0;
  while (param_3 != param_4) {
    puVar5 = (undefined8 *)
             (*(long *)(param_2 + 0x10) + **(long **)(param_2 + 0x48) * (long)*param_3);
    if (pppppuStack_70 < pppppuStack_68) {
      ppppppuVar3 = (undefined8 ******)(pppppuStack_70 + 1);
      *pppppuStack_70 =
           (undefined8 *****)CONCAT44((int)(float)((ulong)*puVar5 >> 0x20),(int)(float)*puVar5);
    }
    else {
      ppppppuVar3 = &pppppuStack_78;
      FUN_10a000e78(ppppppuVar3,puVar5,(long)puVar5 + 4);
    }
    unaff_x22 = param_3 + 1;
    pppppuStack_70 = ppppppuVar3;
    param_3 = unaff_x22;
  }
  auStack_90[0] = 0x83010000;
  uStack_80 = 0;
  lStack_60 = 0;
  lStack_58 = 0;
  uStack_50 = 0;
  uStack_88 = param_1;
  FUN_10a000fa0(&lStack_60,pppppuStack_78,pppppuStack_70,
                (long)pppppuStack_70 - (long)pppppuStack_78 >> 3);
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  FUN_10a001048(&uStack_c0,&lStack_60,&lStack_48,1);
  uStack_98 = 0;
  auStack_a8[0] = 0x8104000c;
  puStack_e0 = (undefined8 *)(double)param_5;
  uStack_e8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_d8 = 0;
  puVar6 = auStack_a8;
  ppuVar7 = &puStack_e0;
  puStack_a0 = &uStack_c0;
  func_0x000109aefd90(auStack_90,puVar6,ppuVar7,8,0,&uStack_e8);
  puStack_e0 = &uStack_c0;
  func_0x00010a001298(&puStack_e0);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  ppppppuVar3 = (undefined8 ******)pppppuStack_78;
  if ((undefined8 ******)pppppuStack_78 != (undefined8 ******)0x0) {
    pppppuStack_70 = pppppuStack_78;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puStack_e0 = &uStack_c0;
  func_0x00010a001298(&puStack_e0);
  if (lStack_60 != 0) {
    lStack_58 = lStack_60;
    __ZdlPv();
  }
  if ((undefined8 ******)pppppuStack_78 != (undefined8 ******)0x0) {
    pppppuStack_70 = pppppuStack_78;
    __ZdlPv();
  }
  ppppppuVar4 = ppppppuVar3;
  __Unwind_Resume(ppppppuVar3);
  pcStack_f8 = FUN_10a6c4100;
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  iStack_13c = 0x29;
  piStack_120 = unaff_x22;
  puStack_118 = &uStack_c0;
  plStack_110 = &lStack_60;
  pppppuStack_108 = ppppppuVar3;
  puStack_100 = &stack0xfffffffffffffff0;
  do {
    func_0x000109febdc8(&lStack_138,&iStack_13c);
    iVar2 = iStack_13c + -1;
    bVar1 = 0x24 < iStack_13c;
    iStack_13c = iVar2;
  } while (bVar1);
  FUN_10a6c3f10(ppppppuVar4,puVar6,lStack_138,lStack_130,ppuVar7);
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c4100; end: 10a6c41a7;  */

void FUN_10a6c4100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  iStack_4c = 0x29;
  do {
    func_0x000109febdc8(&lStack_48,&iStack_4c);
    iVar2 = iStack_4c + -1;
    bVar1 = 0x24 < iStack_4c;
    iStack_4c = iVar2;
  } while (bVar1);
  FUN_10a6c3f10(param_1,param_2,lStack_48,lStack_40,param_3);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c41a8; end: 10a6c424f;  */

void FUN_10a6c41a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  int iStack_4c;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  iStack_4c = 0x2f;
  do {
    func_0x000109febdc8(&lStack_48,&iStack_4c);
    iVar2 = iStack_4c + -1;
    bVar1 = 0x2a < iStack_4c;
    iStack_4c = iVar2;
  } while (bVar1);
  FUN_10a6c3f10(param_1,param_2,lStack_48,lStack_40,param_3);
  if (lStack_48 != 0) {
    lStack_40 = lStack_48;
    __ZdlPv();
  }
  return;
}



/* Entry: 10a6c4250; end: 10a6c42e3;  */

void FUN_10a6c4250(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_198 [352];
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uStack_38 = param_3;
  uStack_34 = param_4;
  func_0x000109a829e8(auStack_198,&uStack_38,0);
  FUN_10a003124(param_1,auStack_198);
  func_0x00010918eb6c(auStack_198);
  FUN_10a6c3550(param_1,param_2);
  FUN_10a6c3614(param_1,param_2);
  return;
}



/* Entry: 10a6c42e4; end: 10a6c49cb;  */

void FUN_10a6c42e4(undefined4 *param_1,ulong *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 *****pppppuVar7;
  undefined8 **ppuVar8;
  undefined8 **ppuVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  undefined8 **ppuVar16;
  undefined8 **ppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uStack_678;
  undefined1 auStack_670 [8];
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long lStack_640;
  undefined1 *puStack_638;
  undefined8 *puStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined1 auStack_618 [4];
  int iStack_614;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e0;
  long lStack_5d8;
  undefined1 *puStack_5d0;
  undefined1 auStack_5c8 [272];
  undefined1 auStack_4b8 [4];
  int iStack_4b4;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  long lStack_480;
  long lStack_478;
  undefined1 *puStack_470;
  undefined1 auStack_468 [24];
  long *plStack_450;
  long lStack_448;
  undefined8 uStack_440;
  undefined8 *puStack_438;
  undefined8 uStack_430;
  ulong uStack_428;
  undefined8 **ppuStack_420;
  long lStack_418;
  undefined8 **ppuStack_410;
  undefined8 **ppuStack_408;
  undefined1 **ppuStack_400;
  code *pcStack_3f8;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 **ppuStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  ulong uStack_3a8;
  undefined8 **ppuStack_3a0;
  undefined4 *puStack_398;
  undefined8 **ppuStack_390;
  undefined4 *puStack_388;
  undefined1 *puStack_380;
  code *pcStack_378;
  undefined8 *puStack_370;
  undefined4 uStack_368;
  int iStack_364;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_330;
  long lStack_328;
  undefined1 *puStack_320;
  undefined1 auStack_318 [16];
  undefined8 uStack_308;
  undefined8 uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_118 [4];
  int iStack_114;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e0;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 ****ppppuStack_b8;
  undefined8 ****ppppuStack_b0;
  undefined8 ****ppppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long alStack_88 [5];
  
  lVar21 = 0;
  alStack_88[3] = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  ppppuStack_b8 = (undefined8 *****)0x0;
  ppppuStack_b0 = (undefined8 *****)0x0;
  ppppuStack_a8 = (undefined8 *****)0x0;
  do {
    puVar11 = (undefined8 *)(param_2[2] + *(long *)param_2[9] * lVar21);
    if (ppppuStack_b0 < ppppuStack_a8) {
      pppppuVar7 = (undefined8 *****)(ppppuStack_b0 + 1);
      *ppppuStack_b0 =
           (undefined8 ****)CONCAT44((int)(float)((ulong)*puVar11 >> 0x20),(int)(float)*puVar11);
    }
    else {
      pppppuVar7 = &ppppuStack_b8;
      FUN_10a000e78(pppppuVar7,puVar11,(long)puVar11 + 4);
    }
    lVar21 = lVar21 + 1;
    ppppuStack_b0 = pppppuVar7;
  } while (lVar21 != 0x11);
  uVar22 = 0x1b;
  do {
    uVar22 = uVar22 - 1;
    puVar11 = (undefined8 *)(param_2[2] + *(long *)param_2[9] * uVar22);
    if (ppppuStack_b0 < ppppuStack_a8) {
      pppppuVar7 = (undefined8 *****)(ppppuStack_b0 + 1);
      *ppppuStack_b0 =
           (undefined8 ****)CONCAT44((int)(float)((ulong)*puVar11 >> 0x20),(int)(float)*puVar11);
    }
    else {
      pppppuVar7 = &ppppuStack_b8;
      FUN_10a000e78(pppppuVar7,puVar11,(long)puVar11 + 4);
    }
    ppppuStack_b0 = pppppuVar7;
  } while (0x11 < uVar22);
  uStack_308._0_4_ = param_3;
  uStack_308._4_4_ = param_4;
  func_0x000109a829e8(&puStack_278,&uStack_308,0);
  FUN_10a003124(auStack_118,&puStack_278);
  func_0x00010918eb6c(&puStack_278);
  uStack_308 = (undefined8 *)CONCAT44(uStack_308._4_4_,0x83010000);
  uStack_2f8 = 0;
  alStack_88[0] = 0;
  alStack_88[1] = 0;
  alStack_88[2] = 0;
  uStack_300 = auStack_118;
  FUN_10a000fa0(alStack_88,ppppuStack_b8,ppppuStack_b0,
                (long)ppppuStack_b0 - (long)ppppuStack_b8 >> 3);
  uStack_290 = 0;
  puStack_288 = (undefined4 *)0x0;
  uStack_280 = 0;
  FUN_10a001048(&uStack_290,alStack_88,alStack_88 + 3,1);
  uStack_358 = 0;
  uStack_368 = 0x8104000c;
  puStack_278 = (undefined8 *)0x406fe00000000000;
  puStack_270 = (undefined8 *)0x0;
  uStack_268 = 0;
  uStack_260 = 0;
  uStack_298 = 0;
  puStack_360 = &uStack_290;
  func_0x000109aefd90(&uStack_308,&uStack_368,&puStack_278,8,0,&uStack_298);
  puStack_278 = &uStack_290;
  func_0x00010a001298(&puStack_278);
  if (alStack_88[0] != 0) {
    alStack_88[1] = alStack_88[0];
    __ZdlPv();
  }
  FUN_10a6c49cc(&uStack_a0,auStack_118);
  uStack_2f8 = param_2[1];
  uStack_300 = (undefined1 *)*param_2;
  uStack_2e8 = param_2[3];
  uStack_2f0 = param_2[2];
  uStack_2d8 = param_2[5];
  uStack_2e0 = param_2[4];
  uStack_2c8 = param_2[7];
  uStack_2d0 = param_2[6];
  puStack_2c0 = &uStack_2f8;
  iVar12 = *(int *)((long)param_2 + 4);
  puStack_370 = &uStack_2b0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  if (param_2[7] != 0) {
    piVar1 = (int *)(param_2[7] + 0x14);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    iVar12 = *(int *)((long)param_2 + 4);
  }
  uStack_308 = &uStack_a0;
  puStack_2b8 = puStack_370;
  if (iVar12 < 3) {
    uStack_2b0 = *(undefined8 *)param_2[9];
    uStack_2a8 = ((undefined8 *)param_2[9])[1];
  }
  else {
    uStack_300 = (undefined1 *)((ulong)uStack_300 & 0xffffffff);
    func_0x000109a84868(&uStack_300,param_2);
  }
  lVar15 = lRam00000001137eb8f0;
  iStack_2a0 = param_3;
  uStack_29c = param_4;
  lVar21 = lRam00000001137eb8f8;
  if (1 < (ulong)((lRam00000001137eb8e0 - lRam00000001137eb8d8 >> 4) * -0x5555555555555555)) {
    uVar22 = 1;
    lVar23 = 0x30;
    do {
      FUN_10a6c4b94(&uStack_308,lRam00000001137eb8d8 + lVar23,1);
      uVar22 = uVar22 + 1;
      lVar23 = lVar23 + 0x30;
      lVar15 = lRam00000001137eb8f0;
      lVar21 = lRam00000001137eb8f8;
    } while (uVar22 < (ulong)((lRam00000001137eb8e0 - lRam00000001137eb8d8 >> 4) *
                             -0x5555555555555555));
  }
  for (; lVar15 != lVar21; lVar15 = lVar15 + 0x30) {
    FUN_10a6c4b94(&uStack_308,lVar15,0);
  }
  uVar14 = 3;
  if (param_3 != 0x80) {
    uVar14 = 6;
  }
  uVar22 = (ulong)uVar14;
  uStack_290._0_4_ = param_3;
  uStack_290._4_4_ = param_4;
  func_0x000109a829e8(&puStack_278,&uStack_290,0);
  FUN_10a003124(&uStack_368,&puStack_278);
  ppuVar16 = &puStack_278;
  func_0x00010918eb6c(&puStack_278);
  lVar21 = 0;
  alStack_88[0] = 0x4d0000004c;
  do {
    uVar24 = *(undefined8 *)
              (param_2[2] + *(long *)param_2[9] * (long)*(int *)((long)alStack_88 + lVar21));
    uStack_298 = CONCAT44((int)(float)((ulong)uVar24 >> 0x20),(int)(float)uVar24);
    uStack_290._0_4_ = 0x83010000;
    uStack_280 = 0;
    puStack_278 = (undefined8 *)0x406fe00000000000;
    uStack_268 = 0;
    uStack_260 = 0;
    puStack_270 = (undefined8 *)0x0;
    uVar13 = uVar22;
    puStack_288 = &uStack_368;
    func_0x000109aee350(&uStack_290,&uStack_298,uVar22,&puStack_278,0xffffffff,8,0);
    iVar12 = (int)uVar13;
    lVar21 = lVar21 + 4;
  } while (lVar21 != 8);
  FUN_10a6c49cc(&uStack_a0,&uStack_368);
  *param_1 = 0x42ff0000;
  *(undefined8 *)(param_1 + 3) = 0;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 0xb) = 0;
  *(undefined8 *)(param_1 + 9) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined4 **)(param_1 + 0x10) = param_1 + 2;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0x14;
  *(undefined8 *)(param_1 + 0x16) = 0;
  uStack_268 = 0;
  puStack_278 = (undefined8 *)CONCAT44(puStack_278._4_4_,0x81050000);
  uStack_290 = CONCAT44(uStack_290._4_4_,0x2010000);
  uStack_280 = 0;
  puVar11 = &uStack_290;
  puStack_288 = param_1;
  puStack_270 = &uStack_a0;
  func_0x000109a3ecac(&puStack_278);
  if (lStack_330 != 0) {
    piVar1 = (int *)(lStack_330 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_368);
    }
  }
  lStack_330 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  uStack_340 = 0;
  uStack_348 = 0;
  if (0 < iStack_364) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_328 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iStack_364);
  }
  if (puStack_320 != auStack_318 && puStack_320 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_320 + -8));
  }
  if (uStack_2c8 != 0) {
    piVar1 = (int *)(uStack_2c8 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(&uStack_300);
    }
  }
  uStack_2c8 = 0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  if (0 < uStack_300._4_4_) {
    lVar15 = 0;
    do {
      *(undefined4 *)((long)puStack_2c0 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < uStack_300._4_4_);
  }
  if (puStack_2b8 != puStack_370 && puStack_2b8 != (undefined8 *)0x0) {
    _free(puStack_2b8[-1]);
  }
  if (lStack_e0 != 0) {
    piVar1 = (int *)(lStack_e0 + 0x14);
    do {
      iVar3 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar3 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar3 + -1 == 0) {
      func_0x000109a848d4(auStack_118);
    }
  }
  lStack_e0 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_f0 = 0;
  uStack_f8 = 0;
  if (0 < iStack_114) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lStack_d8 + lVar15 * 4) = 0;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iStack_114);
  }
  if (puStack_d0 != auStack_c8 && puStack_d0 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_d0 + -8));
  }
  if ((undefined8 *****)ppppuStack_b8 != (undefined8 *****)0x0) {
    ppppuStack_b0 = ppppuStack_b8;
    __ZdlPv();
  }
  puStack_278 = &uStack_a0;
  ppuVar8 = &puStack_278;
  FUN_10a0020a8();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_88[3]) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar11 != 0) {
    func_0x000104bd46a0();
    FUN_109ff0424(auStack_118);
    if ((undefined8 *****)ppppuStack_b8 != (undefined8 *****)0x0) {
      ppppuStack_b0 = ppppuStack_b8;
      __ZdlPv();
    }
    puStack_278 = &uStack_a0;
    FUN_10a0020a8(&puStack_278);
  }
  ppuVar9 = ppuVar8;
  __Unwind_Resume();
  uStack_3c0 = 0x83010000;
  puStack_3b8 = &uStack_308;
  uStack_3b0 = 0x406fe00000000000;
  uStack_3a8 = uVar22;
  ppuStack_3a0 = ppuVar16;
  puStack_398 = &uStack_368;
  ppuStack_390 = ppuVar8;
  puStack_388 = param_1;
  puStack_380 = &stack0xfffffffffffffff0;
  pcStack_378 = FUN_10a6c49cc;
  puVar20 = ppuVar9[1];
  if (puVar20 < ppuVar9[2]) {
    FUN_10a6c4fb0(puVar20,puVar11);
    puVar20 = puVar20 + 0xc;
    ppuVar9[1] = puVar20;
  }
  else {
    lVar15 = (long)puVar20 - (long)*ppuVar9;
    ppuVar17 = (undefined8 **)((lVar15 >> 5) * -0x5555555555555555 + 1);
    ppuVar8 = ppuVar9;
    if ((undefined8 **)0x2aaaaaaaaaaaaaa < ppuVar17) {
      FUN_10a6c504c();
LAB_10a6c4b4c:
      func_0x000109ffded8();
      func_0x000109395458(&puStack_3e8);
      ppuVar17 = ppuVar8;
      __Unwind_Resume();
      plStack_450 = alStack_88;
      lStack_448 = lVar21;
      uStack_440 = 0x83010000;
      puStack_438 = &uStack_308;
      uStack_430 = 0x406fe00000000000;
      uStack_428 = uVar22;
      ppuStack_420 = ppuVar16;
      lStack_418 = lVar15;
      ppuStack_410 = ppuVar8;
      ppuStack_408 = ppuVar9;
      ppuStack_400 = &puStack_380;
      pcStack_3f8 = FUN_10a6c4b94;
      uStack_678 = ppuVar17[0xd];
      func_0x000109a829e8(auStack_618,&uStack_678,0);
      FUN_10a003124(auStack_4b8,auStack_618);
      func_0x00010918eb6c(auStack_618);
      lVar21 = puVar11[3];
      lVar15 = puVar11[4];
      if (lVar21 != lVar15) {
        puVar11 = (undefined8 *)((ulong)&uStack_678 | 4);
        do {
          uStack_678 = (undefined8 *)0x7fffffff80000000;
          func_0x000109a84930(auStack_618,ppuVar17 + 1,lVar21,&uStack_678);
          puStack_638 = auStack_670;
          puStack_630 = &uStack_628;
          if (iVar12 == 0) {
            *(undefined8 *)((long)puVar11 + 0x34) = 0;
            *(undefined8 *)((long)puVar11 + 0x2c) = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            puVar11[5] = 0;
            puVar11[4] = 0;
            puVar11[1] = 0;
            *puVar11 = 0;
            uStack_628 = 0;
            uStack_620 = 0;
            uStack_678 = (undefined8 *)CONCAT44(uStack_678._4_4_,0x42ff0005);
            func_0x000109390e94(&uStack_678,auStack_618);
            FUN_10a6c02f0(auStack_4b8,&uStack_678);
            if (lStack_640 != 0) {
              piVar1 = (int *)(lStack_640 + 0x14);
              do {
                iVar3 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar3 + -1 == 0) {
                func_0x000109a848d4(&uStack_678);
              }
            }
            if (0 < uStack_678._4_4_) {
              lVar23 = 0;
              do {
                *(undefined4 *)(puStack_638 + lVar23 * 4) = 0;
                lVar23 = lVar23 + 1;
              } while (lVar23 < uStack_678._4_4_);
            }
          }
          else {
            *(undefined8 *)((long)puVar11 + 0x34) = 0;
            *(undefined8 *)((long)puVar11 + 0x2c) = 0;
            puVar11[3] = 0;
            puVar11[2] = 0;
            puVar11[5] = 0;
            puVar11[4] = 0;
            puVar11[1] = 0;
            *puVar11 = 0;
            uStack_628 = 0;
            uStack_620 = 0;
            uStack_678 = (undefined8 *)CONCAT44(uStack_678._4_4_,0x42ff0005);
            func_0x000109390e94(&uStack_678,auStack_618);
            FUN_10a6c0250(auStack_4b8,&uStack_678,1);
            if (lStack_640 != 0) {
              piVar1 = (int *)(lStack_640 + 0x14);
              do {
                iVar3 = *piVar1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar6) {
                  *piVar1 = iVar3 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar3 + -1 == 0) {
                func_0x000109a848d4(&uStack_678);
              }
            }
            if (0 < uStack_678._4_4_) {
              lVar23 = 0;
              do {
                *(undefined4 *)(puStack_638 + lVar23 * 4) = 0;
                lVar23 = lVar23 + 1;
              } while (lVar23 < uStack_678._4_4_);
            }
          }
          lStack_640 = 0;
          uStack_650 = 0;
          uStack_658 = 0;
          uStack_660 = 0;
          uStack_668 = 0;
          if (puStack_630 != &uStack_628 && puStack_630 != (undefined8 *)0x0) {
            _free(puStack_630[-1]);
          }
          if (lStack_5e0 != 0) {
            piVar1 = (int *)(lStack_5e0 + 0x14);
            do {
              iVar3 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar3 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar3 + -1 == 0) {
              func_0x000109a848d4(auStack_618);
            }
          }
          lStack_5e0 = 0;
          uStack_600 = 0;
          uStack_608 = 0;
          uStack_5f0 = 0;
          uStack_5f8 = 0;
          if (0 < iStack_614) {
            lVar23 = 0;
            do {
              *(undefined4 *)(lStack_5d8 + lVar23 * 4) = 0;
              lVar23 = lVar23 + 1;
            } while (lVar23 < iStack_614);
          }
          if (puStack_5d0 != auStack_5c8 && puStack_5d0 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_5d0 + -8));
          }
          lVar21 = lVar21 + 8;
        } while (lVar21 != lVar15);
      }
      FUN_10a6c49cc(*ppuVar17,auStack_4b8);
      if (lStack_480 != 0) {
        piVar1 = (int *)(lStack_480 + 0x14);
        do {
          iVar12 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 + -1 == 0) {
          func_0x000109a848d4(auStack_4b8);
        }
      }
      lStack_480 = 0;
      uStack_4a0 = 0;
      uStack_4a8 = 0;
      uStack_490 = 0;
      uStack_498 = 0;
      if (0 < iStack_4b4) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lStack_478 + lVar21 * 4) = 0;
          lVar21 = lVar21 + 1;
        } while (lVar21 < iStack_4b4);
      }
      if (puStack_470 != auStack_468 && puStack_470 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_470 + -8));
      }
      return;
    }
    lVar23 = (long)ppuVar9[2] - (long)*ppuVar9 >> 5;
    ppuVar16 = (undefined8 **)(lVar23 * 0x5555555555555556);
    if (ppuVar16 < ppuVar17 || (long)ppuVar16 - (long)ppuVar17 == 0) {
      ppuVar16 = ppuVar17;
    }
    if (0x155555555555554 < (ulong)(lVar23 * -0x5555555555555555)) {
      ppuVar16 = (undefined8 **)0x2aaaaaaaaaaaaaa;
    }
    ppuStack_3c8 = ppuVar9;
    if (ppuVar16 == (undefined8 **)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      if ((undefined8 **)0x2aaaaaaaaaaaaaa < ppuVar16) goto LAB_10a6c4b4c;
      puVar10 = (undefined8 *)((long)ppuVar16 * 0x60);
      __Znwm();
    }
    lVar15 = (long)puVar10 + lVar15;
    puStack_3e8 = puVar10;
    puStack_3e0 = (undefined8 *)lVar15;
    puStack_3d8 = (undefined8 *)lVar15;
    puStack_3d0 = puVar10 + (long)ppuVar16 * 0xc;
    FUN_10a6c4fb0(lVar15,puVar11);
    puStack_3d8 = (undefined8 *)(lVar15 + 0x60);
    puVar18 = *ppuVar9;
    puVar4 = ppuVar9[1];
    puVar2 = (undefined8 *)(lVar15 + ((long)puVar18 - (long)puVar4));
    puVar20 = (undefined8 *)(lVar15 + 0x60);
    puVar19 = puVar2;
    puVar10 = puVar10 + (long)ppuVar16 * 0xc;
    puVar11 = puVar18;
    if ((long)puVar18 - (long)puVar4 != 0) {
      do {
        FUN_10a6c4fb0(puVar19,puVar11);
        puVar11 = puVar11 + 0xc;
        puVar19 = puVar19 + 0xc;
      } while (puVar11 != puVar4);
      do {
        FUN_10a002118(puVar18);
        puVar18 = puVar18 + 0xc;
      } while (puVar18 != puVar4);
      puVar18 = *ppuVar9;
      puVar20 = puStack_3d8;
      puVar10 = puStack_3d0;
    }
    *ppuVar9 = puVar2;
    ppuVar9[1] = puVar20;
    puStack_3d0 = ppuVar9[2];
    ppuVar9[2] = puVar10;
    puStack_3e8 = puVar18;
    puStack_3e0 = puVar18;
    puStack_3d8 = puVar18;
    func_0x000109395458(&puStack_3e8);
  }
  ppuVar9[1] = puVar20;
  return;
}



/* Entry: 10a6c49cc; end: 10a6c4b93;  */

void FUN_10a6c49cc(long *param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uStack_308;
  undefined1 auStack_300 [8];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 auStack_2a8 [4];
  int iStack_2a4;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_270;
  long lStack_268;
  undefined1 *puStack_260;
  undefined1 auStack_258 [272];
  undefined1 auStack_148 [4];
  int iStack_144;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 auStack_f8 [24];
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long *plStack_58;
  
  uVar9 = param_1[1];
  if (uVar9 < (ulong)param_1[2]) {
    FUN_10a6c4fb0(uVar9,param_2);
    lVar7 = uVar9 + 0x60;
    param_1[1] = lVar7;
  }
  else {
    lVar11 = uVar9 - *param_1;
    uVar9 = (lVar11 >> 5) * -0x5555555555555555 + 1;
    if (0x2aaaaaaaaaaaaaa < uVar9) {
      FUN_10a6c504c();
LAB_10a6c4b4c:
      func_0x000109ffded8();
      func_0x000109395458(&lStack_78);
      __Unwind_Resume();
      uStack_308 = param_1[0xd];
      func_0x000109a829e8(auStack_2a8,&uStack_308,0);
      FUN_10a003124(auStack_148,auStack_2a8);
      func_0x00010918eb6c(auStack_2a8);
      lVar11 = *(long *)(param_2 + 0x18);
      lVar7 = *(long *)(param_2 + 0x20);
      if (lVar11 != lVar7) {
        puVar14 = (undefined8 *)((ulong)&uStack_308 | 4);
        do {
          uStack_308 = 0x7fffffff80000000;
          func_0x000109a84930(auStack_2a8,param_1 + 1,lVar11,&uStack_308);
          puStack_2c8 = auStack_300;
          puStack_2c0 = &uStack_2b8;
          if (param_3 == 0) {
            *(undefined8 *)((long)puVar14 + 0x34) = 0;
            *(undefined8 *)((long)puVar14 + 0x2c) = 0;
            puVar14[3] = 0;
            puVar14[2] = 0;
            puVar14[5] = 0;
            puVar14[4] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_308 = CONCAT44(uStack_308._4_4_,0x42ff0005);
            func_0x000109390e94(&uStack_308,auStack_2a8);
            FUN_10a6c02f0(auStack_148,&uStack_308);
            if (lStack_2d0 != 0) {
              piVar1 = (int *)(lStack_2d0 + 0x14);
              do {
                iVar2 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar2 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_308);
              }
            }
            if (0 < uStack_308._4_4_) {
              lVar6 = 0;
              do {
                *(undefined4 *)(puStack_2c8 + lVar6 * 4) = 0;
                lVar6 = lVar6 + 1;
              } while (lVar6 < uStack_308._4_4_);
            }
          }
          else {
            *(undefined8 *)((long)puVar14 + 0x34) = 0;
            *(undefined8 *)((long)puVar14 + 0x2c) = 0;
            puVar14[3] = 0;
            puVar14[2] = 0;
            puVar14[5] = 0;
            puVar14[4] = 0;
            puVar14[1] = 0;
            *puVar14 = 0;
            uStack_2b8 = 0;
            uStack_2b0 = 0;
            uStack_308 = CONCAT44(uStack_308._4_4_,0x42ff0005);
            func_0x000109390e94(&uStack_308,auStack_2a8);
            FUN_10a6c0250(auStack_148,&uStack_308,1);
            if (lStack_2d0 != 0) {
              piVar1 = (int *)(lStack_2d0 + 0x14);
              do {
                iVar2 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar2 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar2 + -1 == 0) {
                func_0x000109a848d4(&uStack_308);
              }
            }
            if (0 < uStack_308._4_4_) {
              lVar6 = 0;
              do {
                *(undefined4 *)(puStack_2c8 + lVar6 * 4) = 0;
                lVar6 = lVar6 + 1;
              } while (lVar6 < uStack_308._4_4_);
            }
          }
          lStack_2d0 = 0;
          uStack_2e0 = 0;
          uStack_2e8 = 0;
          uStack_2f0 = 0;
          uStack_2f8 = 0;
          if (puStack_2c0 != &uStack_2b8 && puStack_2c0 != (undefined8 *)0x0) {
            _free(puStack_2c0[-1]);
          }
          if (lStack_270 != 0) {
            piVar1 = (int *)(lStack_270 + 0x14);
            do {
              iVar2 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar2 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar2 + -1 == 0) {
              func_0x000109a848d4(auStack_2a8);
            }
          }
          lStack_270 = 0;
          uStack_290 = 0;
          uStack_298 = 0;
          uStack_280 = 0;
          uStack_288 = 0;
          if (0 < iStack_2a4) {
            lVar6 = 0;
            do {
              *(undefined4 *)(lStack_268 + lVar6 * 4) = 0;
              lVar6 = lVar6 + 1;
            } while (lVar6 < iStack_2a4);
          }
          if (puStack_260 != auStack_258 && puStack_260 != (undefined1 *)0x0) {
            _free(*(undefined8 *)(puStack_260 + -8));
          }
          lVar11 = lVar11 + 8;
        } while (lVar11 != lVar7);
      }
      FUN_10a6c49cc(*param_1,auStack_148);
      if (lStack_110 != 0) {
        piVar1 = (int *)(lStack_110 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_148);
        }
      }
      lStack_110 = 0;
      uStack_130 = 0;
      uStack_138 = 0;
      uStack_120 = 0;
      uStack_128 = 0;
      if (0 < iStack_144) {
        lVar11 = 0;
        do {
          *(undefined4 *)(lStack_108 + lVar11 * 4) = 0;
          lVar11 = lVar11 + 1;
        } while (lVar11 < iStack_144);
      }
      if (puStack_100 != auStack_f8 && puStack_100 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_100 + -8));
      }
      return;
    }
    lVar7 = param_1[2] - *param_1 >> 5;
    uVar8 = lVar7 * 0x5555555555555556;
    if (uVar8 < uVar9 || uVar8 - uVar9 == 0) {
      uVar8 = uVar9;
    }
    if (0x155555555555554 < (ulong)(lVar7 * -0x5555555555555555)) {
      uVar8 = 0x2aaaaaaaaaaaaaa;
    }
    plStack_58 = param_1;
    if (uVar8 == 0) {
      lVar7 = 0;
    }
    else {
      if (0x2aaaaaaaaaaaaaa < uVar8) goto LAB_10a6c4b4c;
      lVar7 = uVar8 * 0x60;
      __Znwm();
    }
    lVar11 = lVar7 + lVar11;
    lVar13 = lVar7 + uVar8 * 0x60;
    lStack_78 = lVar7;
    lStack_70 = lVar11;
    lStack_68 = lVar11;
    lStack_60 = lVar13;
    FUN_10a6c4fb0(lVar11,param_2);
    lStack_68 = lVar11 + 0x60;
    lVar10 = *param_1;
    lVar3 = param_1[1];
    lVar11 = lVar11 + (lVar10 - lVar3);
    lVar7 = lStack_68;
    lVar12 = lVar11;
    lVar6 = lVar10;
    if (lVar10 - lVar3 != 0) {
      do {
        FUN_10a6c4fb0(lVar12,lVar6);
        lVar6 = lVar6 + 0x60;
        lVar12 = lVar12 + 0x60;
      } while (lVar6 != lVar3);
      do {
        FUN_10a002118(lVar10);
        lVar10 = lVar10 + 0x60;
      } while (lVar10 != lVar3);
      lVar10 = *param_1;
      lVar7 = lStack_68;
      lVar13 = lStack_60;
    }
    *param_1 = lVar11;
    param_1[1] = lVar7;
    lStack_60 = param_1[2];
    param_1[2] = lVar13;
    lStack_78 = lVar10;
    lStack_70 = lVar10;
    lStack_68 = lVar10;
    func_0x000109395458(&lStack_78);
  }
  param_1[1] = lVar7;
  return;
}



/* Entry: 10a6c4b94; end: 10a6c4f0f;  */

void FUN_10a6c4b94(undefined8 *param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uStack_288;
  undefined1 auStack_280 [8];
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_250;
  undefined1 *puStack_248;
  undefined8 *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 auStack_228 [4];
  int iStack_224;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long lStack_1f0;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined1 auStack_1d8 [272];
  undefined1 auStack_c8 [4];
  int iStack_c4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [24];
  
  uStack_288 = param_1[0xd];
  func_0x000109a829e8(auStack_228,&uStack_288,0);
  FUN_10a003124(auStack_c8,auStack_228);
  func_0x00010918eb6c(auStack_228);
  lVar7 = *(long *)(param_2 + 0x18);
  lVar3 = *(long *)(param_2 + 0x20);
  if (lVar7 != lVar3) {
    puVar8 = (undefined8 *)((ulong)&uStack_288 | 4);
    do {
      uStack_288 = 0x7fffffff80000000;
      func_0x000109a84930(auStack_228,param_1 + 1,lVar7,&uStack_288);
      puStack_248 = auStack_280;
      puStack_240 = &uStack_238;
      if (param_3 == 0) {
        *(undefined8 *)((long)puVar8 + 0x34) = 0;
        *(undefined8 *)((long)puVar8 + 0x2c) = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_288 = CONCAT44(uStack_288._4_4_,0x42ff0005);
        func_0x000109390e94(&uStack_288,auStack_228);
        FUN_10a6c02f0(auStack_c8,&uStack_288);
        if (lStack_250 != 0) {
          piVar1 = (int *)(lStack_250 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_288);
          }
        }
        if (0 < uStack_288._4_4_) {
          lVar6 = 0;
          do {
            *(undefined4 *)(puStack_248 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < uStack_288._4_4_);
        }
      }
      else {
        *(undefined8 *)((long)puVar8 + 0x34) = 0;
        *(undefined8 *)((long)puVar8 + 0x2c) = 0;
        puVar8[3] = 0;
        puVar8[2] = 0;
        puVar8[5] = 0;
        puVar8[4] = 0;
        puVar8[1] = 0;
        *puVar8 = 0;
        uStack_238 = 0;
        uStack_230 = 0;
        uStack_288 = CONCAT44(uStack_288._4_4_,0x42ff0005);
        func_0x000109390e94(&uStack_288,auStack_228);
        FUN_10a6c0250(auStack_c8,&uStack_288,1);
        if (lStack_250 != 0) {
          piVar1 = (int *)(lStack_250 + 0x14);
          do {
            iVar2 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar2 + -1 == 0) {
            func_0x000109a848d4(&uStack_288);
          }
        }
        if (0 < uStack_288._4_4_) {
          lVar6 = 0;
          do {
            *(undefined4 *)(puStack_248 + lVar6 * 4) = 0;
            lVar6 = lVar6 + 1;
          } while (lVar6 < uStack_288._4_4_);
        }
      }
      lStack_250 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_278 = 0;
      if (puStack_240 != &uStack_238 && puStack_240 != (undefined8 *)0x0) {
        _free(puStack_240[-1]);
      }
      if (lStack_1f0 != 0) {
        piVar1 = (int *)(lStack_1f0 + 0x14);
        do {
          iVar2 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar2 + -1 == 0) {
          func_0x000109a848d4(auStack_228);
        }
      }
      lStack_1f0 = 0;
      uStack_210 = 0;
      uStack_218 = 0;
      uStack_200 = 0;
      uStack_208 = 0;
      if (0 < iStack_224) {
        lVar6 = 0;
        do {
          *(undefined4 *)(lStack_1e8 + lVar6 * 4) = 0;
          lVar6 = lVar6 + 1;
        } while (lVar6 < iStack_224);
      }
      if (puStack_1e0 != auStack_1d8 && puStack_1e0 != (undefined1 *)0x0) {
        _free(*(undefined8 *)(puStack_1e0 + -8));
      }
      lVar7 = lVar7 + 8;
    } while (lVar7 != lVar3);
  }
  FUN_10a6c49cc(*param_1,auStack_c8);
  if (lStack_90 != 0) {
    piVar1 = (int *)(lStack_90 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_c8);
    }
  }
  lStack_90 = 0;
  uStack_b0 = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (0 < iStack_c4) {
    lVar7 = 0;
    do {
      *(undefined4 *)(lStack_88 + lVar7 * 4) = 0;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iStack_c4);
  }
  if (puStack_80 != auStack_78 && puStack_80 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_80 + -8));
  }
  return;
}



/* Entry: 10a6c4f10; end: 10a6c4faf;  */

long FUN_10a6c4f10(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x40) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 8);
    }
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x48);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0xc));
  }
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 != param_1 + 0x58 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  return param_1;
}



/* Entry: 10a6c4fb0; end: 10a6c504b;  */

undefined8 * FUN_10a6c4fb0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar7 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar7;
  lVar4 = param_2[7];
  uVar7 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar7;
  param_1[10] = 0;
  param_1[8] = param_1 + 1;
  param_1[9] = param_1 + 10;
  param_1[0xb] = 0;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 0x14);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (*(int *)((long)param_2 + 4) < 3) {
    puVar5 = (undefined8 *)param_2[9];
    puVar6 = (undefined8 *)param_1[9];
    *puVar6 = *puVar5;
    puVar6[1] = puVar5[1];
  }
  else {
    *(undefined4 *)((long)param_1 + 4) = 0;
    func_0x000109a84868(param_1);
  }
  return param_1;
}



/* Entry: 10a6c504c; end: 10a6c505f;  */

void FUN_10a6c504c(undefined8 param_1,undefined8 *param_2,code *param_3,code *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined4 uStack_1c8;
  int iStack_1c4;
  undefined4 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  undefined1 auStack_178 [16];
  undefined4 uStack_168;
  int iStack_164;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  long lStack_b0;
  long lStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  
  puVar5 = &DAT_10f62a4d8;
  FUN_109ffde64(&DAT_10f62a4d8);
  (*param_3)(auStack_70,*param_2);
  auVar7 = NEON_scvtf(auStack_70,4);
  uStack_328 = auVar7._8_8_;
  uStack_330 = auVar7._0_8_;
  FUN_10a6c09fc((float)*(int *)param_2[1],(float)((int *)param_2[1])[1],auStack_88,&uStack_330);
  uStack_e8 = 0x42ff0000;
  lStack_a8 = (long)&uStack_e4 + 4;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_e4 = 0;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_bc = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  lStack_b0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_168 = 0x1010000;
  uStack_160 = param_2[2];
  uStack_158 = 0;
  uStack_1c8 = 0x2010000;
  uStack_1b8 = 0;
  uStack_100 = CONCAT44(uStack_100._4_4_,0xc1020005);
  uStack_f0 = 0x200000003;
  uStack_108 = *(undefined8 *)param_2[1];
  uStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  uStack_320 = 0;
  puStack_1c0 = &uStack_e8;
  puStack_f8 = auStack_88;
  puStack_a0 = &uStack_98;
  func_0x000109b1e030(&uStack_168,&uStack_1c8,&uStack_100,&uStack_108,1,0,&uStack_330);
  FUN_10a6c0e18(&uStack_168,*param_2,auStack_88);
  uStack_100 = *(undefined8 *)param_2[1];
  func_0x000109a829e8(&uStack_330,&uStack_100,0);
  FUN_10a003124(&uStack_1c8,&uStack_330);
  func_0x00010918eb6c(&uStack_330);
  (*param_4)(&uStack_1c8,&uStack_168,0xff);
  FUN_10a6c3210(puVar5,&uStack_e8,&uStack_1c8);
  if (lStack_190 != 0) {
    piVar1 = (int *)(lStack_190 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1c8);
    }
  }
  lStack_190 = 0;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  if (0 < iStack_1c4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_188 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_1c4);
  }
  if (puStack_180 != auStack_178 && puStack_180 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_180 + -8));
  }
  if (lStack_130 != 0) {
    piVar1 = (int *)(lStack_130 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_168);
    }
  }
  lStack_130 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  if (0 < iStack_164) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_128 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_164);
  }
  if (puStack_120 != auStack_118 && puStack_120 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_120 + -8));
  }
  if (lStack_b0 != 0) {
    piVar1 = (int *)(lStack_b0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_e8);
    }
  }
  lStack_b0 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (0 < (int)uStack_e4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_a8 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)uStack_e4);
  }
  if (puStack_a0 != &uStack_98 && puStack_a0 != (undefined8 *)0x0) {
    _free(puStack_a0[-1]);
  }
  return;
}



/* Entry: 10a6c5060; end: 10a6c5393;  */

void FUN_10a6c5060(undefined8 param_1,undefined8 *param_2,code *param_3,code *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined4 uStack_1b8;
  int iStack_1b4;
  undefined4 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  undefined1 auStack_168 [16];
  undefined4 uStack_158;
  int iStack_154;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_120;
  long lStack_118;
  undefined1 *puStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  long lStack_a0;
  long lStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [16];
  
  (*param_3)(auStack_60,*param_2);
  auVar6 = NEON_scvtf(auStack_60,4);
  uStack_318 = auVar6._8_8_;
  uStack_320 = auVar6._0_8_;
  FUN_10a6c09fc((float)*(int *)param_2[1],(float)((int *)param_2[1])[1],auStack_78,&uStack_320);
  uStack_d8 = 0x42ff0000;
  lStack_98 = (long)&uStack_d4 + 4;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_d4 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_ac = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  lStack_a0 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_158 = 0x1010000;
  uStack_150 = param_2[2];
  uStack_148 = 0;
  uStack_1b8 = 0x2010000;
  uStack_1a8 = 0;
  uStack_f0 = CONCAT44(uStack_f0._4_4_,0xc1020005);
  uStack_e0 = 0x200000003;
  uStack_f8 = *(undefined8 *)param_2[1];
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  puStack_1b0 = &uStack_d8;
  puStack_e8 = auStack_78;
  puStack_90 = &uStack_88;
  func_0x000109b1e030(&uStack_158,&uStack_1b8,&uStack_f0,&uStack_f8,1,0,&uStack_320);
  FUN_10a6c0e18(&uStack_158,*param_2,auStack_78);
  uStack_f0 = *(undefined8 *)param_2[1];
  func_0x000109a829e8(&uStack_320,&uStack_f0,0);
  FUN_10a003124(&uStack_1b8,&uStack_320);
  func_0x00010918eb6c(&uStack_320);
  (*param_4)(&uStack_1b8,&uStack_158,0xff);
  FUN_10a6c3210(param_1,&uStack_d8,&uStack_1b8);
  if (lStack_180 != 0) {
    piVar1 = (int *)(lStack_180 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_1b8);
    }
  }
  lStack_180 = 0;
  uStack_1a0 = 0;
  uStack_1a8 = 0;
  uStack_190 = 0;
  uStack_198 = 0;
  if (0 < iStack_1b4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_178 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_1b4);
  }
  if (puStack_170 != auStack_168 && puStack_170 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_170 + -8));
  }
  if (lStack_120 != 0) {
    piVar1 = (int *)(lStack_120 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_158);
    }
  }
  lStack_120 = 0;
  uStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  if (0 < iStack_154) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_118 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iStack_154);
  }
  if (puStack_110 != auStack_108 && puStack_110 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_110 + -8));
  }
  if (lStack_a0 != 0) {
    piVar1 = (int *)(lStack_a0 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(&uStack_d8);
    }
  }
  lStack_a0 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  if (0 < (int)uStack_d4) {
    lVar5 = 0;
    do {
      *(undefined4 *)(lStack_98 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)uStack_d4);
  }
  if (puStack_90 != &uStack_88 && puStack_90 != (undefined8 *)0x0) {
    _free(puStack_90[-1]);
  }
  return;
}



/* Entry: 10a6c5394; end: 10a6c54c7;  */

void FUN_10a6c5394(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_b8 [4];
  int iStack_b4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  undefined4 auStack_58 [2];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0x2a00000024;
  uStack_30 = 0x7fffffff80000000;
  func_0x000109a84930(auStack_b8,param_2,&uStack_28,&uStack_30);
  uStack_48 = 0;
  auStack_58[0] = 0x1010000;
  puStack_50 = auStack_b8;
  func_0x000109b42928(&iStack_40,auStack_58);
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_b8);
    }
  }
  lStack_80 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  if (0 < iStack_b4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_78 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_b4);
  }
  if (puStack_70 != auStack_68 && puStack_70 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_70 + -8));
  }
  uVar5 = iStack_34 - iStack_38;
  iVar2 = iStack_3c - (-uVar5 >> 1);
  if (0 < (int)uVar5) {
    iVar2 = iStack_3c;
    iStack_40 = iStack_40 - (uVar5 >> 1);
  }
  if (iStack_38 <= iStack_34) {
    iStack_38 = iStack_34;
  }
  *param_1 = iStack_40;
  param_1[1] = iVar2;
  param_1[2] = iStack_38;
  param_1[3] = iStack_38;
  return;
}



/* Entry: 10a6c54c8; end: 10a6c55fb;  */

void FUN_10a6c54c8(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_b8 [4];
  int iStack_b4;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  undefined1 auStack_68 [16];
  undefined4 auStack_58 [2];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0x300000002a;
  uStack_30 = 0x7fffffff80000000;
  func_0x000109a84930(auStack_b8,param_2,&uStack_28,&uStack_30);
  uStack_48 = 0;
  auStack_58[0] = 0x1010000;
  puStack_50 = auStack_b8;
  func_0x000109b42928(&iStack_40,auStack_58);
  if (lStack_80 != 0) {
    piVar1 = (int *)(lStack_80 + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(auStack_b8);
    }
  }
  lStack_80 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  if (0 < iStack_b4) {
    lVar6 = 0;
    do {
      *(undefined4 *)(lStack_78 + lVar6 * 4) = 0;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iStack_b4);
  }
  if (puStack_70 != auStack_68 && puStack_70 != (undefined1 *)0x0) {
    _free(*(undefined8 *)(puStack_70 + -8));
  }
  uVar5 = iStack_34 - iStack_38;
  iVar2 = iStack_3c - (-uVar5 >> 1);
  if (0 < (int)uVar5) {
    iVar2 = iStack_3c;
    iStack_40 = iStack_40 - (uVar5 >> 1);
  }
  if (iStack_38 <= iStack_34) {
    iStack_38 = iStack_34;
  }
  *param_1 = iStack_40;
  param_1[1] = iVar2;
  param_1[2] = iStack_38;
  param_1[3] = iStack_38;
  return;
}



/* Entry: 10a6c55fc; end: 10a6c560b;  */

void FUN_10a6c55fc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c10d38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10a6c560c; end: 10a6c562b;  */

void FUN_10a6c560c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c10d38;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a6c562c; end: 10a6c5637;  */

undefined8 * FUN_10a6c562c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  func_0x00010a140010(param_1 + 0x118);
  func_0x00010a140010(param_1 + 0x108);
  func_0x00010a140010(param_1 + 0xf8);
  func_0x00010a140010(param_1 + 0xe8);
  func_0x00010a140010(param_1 + 0xd8);
  FUN_10a003a64(param_1 + 0xd0,0);
  FUN_10a6ca180(param_1 + 200,0);
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb0);
    __ZdlPv();
  }
  func_0x00010a05248c(param_1 + 0xa0);
  func_0x00010a05248c(param_1 + 0x90);
  if (*(long *)(param_1 + 0x68) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x68) + 0x14);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000109a848d4(param_1 + 0x30);
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x70);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x34));
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != param_1 + 0x80 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10a6c5638; end: 10a6c568f;  */

long FUN_10a6c5638(long param_1)

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



/* Entry: 10a6c5690; end: 10a6c5847;  */

undefined8 * FUN_10a6c5690(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_90;
  long *plStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  long *plStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  lVar6 = *param_3;
  plVar7 = (long *)param_3[1];
  if (plVar7 == (long *)0x0) {
    plStack_70 = (long *)0x0;
  }
  else {
    plVar4 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = *plVar4 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      plStack_70 = plVar7;
    } while (cVar2 != '\0');
  }
  ppuStack_80 = &PTR_FUN_110c10d78;
  plVar4 = (long *)0x48;
  lStack_90 = lVar6;
  plStack_88 = plVar7;
  lStack_78 = lVar6;
  __Znwm();
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = (long)&PTR_FUN_110c10d78;
  plVar4[3] = lVar6;
  plVar4[4] = (long)plVar7;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar4 = (long)(param_2 + 10);
  plVar4[1] = (long)puVar5;
  *puVar5 = plVar4;
  param_2[0xb] = plVar4;
  param_2[0xc] = lVar6 + 1;
  if (plVar7 != (long *)0x0) {
    plVar4 = plVar7 + 1;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
    }
  }
  uVar8 = param_2[0xb];
  puVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar10 = param_2[1];
  uVar9 = *param_2;
  if (param_2[1] != 0) {
    plVar7 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar3) {
        *plVar7 = *plVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *param_1 = uVar8;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    FUN_10a352ff8(&lStack_78);
    FUN_10a352ff8(&lStack_90);
    __ZNSt3__115recursive_mutex6unlockEv(param_2 + 2);
    __Unwind_Resume();
    plVar7 = (long *)puVar5[2];
    if (plVar7 != (long *)0x0) {
      plVar4 = plVar7 + 1;
      do {
        lVar6 = *plVar4;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
        if (bVar3) {
          *plVar4 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar7);
      }
    }
    return puVar5 + 1;
  }
  return puVar5;
}



/* Entry: 10a6c5848; end: 10a6c5883;  */

long FUN_10a6c5848(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a6c5884; end: 10a6c5aaf;  */

undefined *** FUN_10a6c5884(undefined ***param_1,long param_2)

{
  undefined ***pppuVar1;
  undefined **ppuVar2;
  char cVar3;
  bool bVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined ***pppuVar10;
  long lVar11;
  long lStack_138;
  undefined ***pppuStack_130;
  undefined **ppuStack_128;
  ulong uStack_120;
  undefined1 uStack_118;
  undefined4 uStack_114;
  undefined **ppuStack_110;
  long lStack_108;
  undefined ***pppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined **ppuStack_d8;
  int iStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [56];
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = *(undefined ****)(param_2 + 0x20);
  pppuVar6 = pppuVar5;
  pppuVar10 = param_1;
  if (pppuVar5 != (undefined ***)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    pppuVar6 = pppuVar5;
    pppuStack_130 = pppuVar5;
    if (pppuVar5 != (undefined ***)0x0) {
      lStack_138 = *(long *)(param_2 + 0x18);
      if (lStack_138 != 0) {
        lVar11 = *(long *)(param_2 + 0x10);
        ppuStack_f8 = param_1[1];
        pppuStack_100 = (undefined ***)*param_1;
        ppuStack_f0 = param_1[2];
        *param_1 = (undefined **)0x0;
        param_1[1] = (undefined **)0x0;
        ppuStack_e0 = param_1[4];
        pppuStack_e8 = (undefined ***)param_1[3];
        ppuStack_d8 = param_1[5];
        param_1[2] = (undefined **)0x0;
        param_1[3] = (undefined **)0x0;
        param_1[4] = (undefined **)0x0;
        param_1[5] = (undefined **)0x0;
        iStack_d0 = *(int *)(param_1 + 6);
        ppuStack_c8 = param_1[7];
        ppuStack_c0 = param_1[8];
        param_1[7] = (undefined **)0x0;
        pppuVar10 = param_1 + 9;
        (*(code *)(*pppuVar10)[2])(auStack_b8,pppuVar10);
        ppuStack_80 = param_1[0x10];
        uStack_78 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        if (iStack_d0 - 200U < 100) {
          pppuVar10 = &ppuStack_128;
          ppuStack_128 = &PTR_DAT_110b191e8;
          uStack_120 = 0;
          uStack_114 = 0;
          uStack_118 = 0;
          lStack_108 = (long)(int)ppuStack_80;
          ppuStack_110 = ppuStack_c8;
          pppuVar6 = &ppuStack_128;
          func_0x000107c30348(pppuVar6,&ppuStack_110);
          uVar7 = *(undefined8 *)(lVar11 + 0x18);
          if ((int)pppuVar6 == 0) {
            ppuStack_110 = (undefined **)((ulong)ppuStack_110._1_7_ << 8);
            FUN_10a087a3c(uVar7,&ppuStack_110);
          }
          else {
            ppuStack_110 = (undefined **)CONCAT71(ppuStack_110._1_7_,uStack_118);
            FUN_10a087a3c(uVar7,&ppuStack_110);
          }
          if ((uStack_120 & 1) != 0) {
            func_0x0001053936ac(&uStack_120);
          }
        }
        else {
          ppuStack_128 = (undefined **)((ulong)ppuStack_128 & 0xffffffffffffff00);
          FUN_10a087a3c(*(undefined8 *)(lVar11 + 0x18),&ppuStack_128);
        }
        func_0x000104c4f944(auStack_70);
        pppuVar6 = &ppuStack_c8;
        FUN_10a042634();
        if ((long)ppuStack_d8 < 0) {
          pppuVar6 = pppuStack_e8;
          __ZdlPv();
        }
        if ((long)ppuStack_f0 < 0) {
          pppuVar6 = pppuStack_100;
          __ZdlPv();
        }
      }
      pppuVar1 = pppuVar5 + 1;
      do {
        ppuVar8 = *pppuVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pppuVar1,0x10);
        if (bVar4) {
          *pppuVar1 = (undefined **)((long)ppuVar8 + -1);
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (ppuVar8 == (undefined **)0x0) {
        (*(code *)(*pppuVar5)[2])(pppuVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        pppuVar6 = pppuVar5;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pppuVar6;
  }
  ___stack_chk_fail();
  if ((uStack_120 & 1) != 0) {
    func_0x0001053936ac(pppuVar10 + 1);
  }
  FUN_10a05bd10(&pppuStack_100);
  func_0x00010a05a86c(&lStack_138);
  __Unwind_Resume();
  ppuVar8 = pppuVar6[3];
  if (ppuVar8 != (undefined **)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (ppuVar8 != (undefined **)0x0) {
      if (pppuVar6[2] != (undefined **)0x0) {
        FUN_10a05c0fc(pppuVar6[2],pppuVar6[1]);
      }
      ppuVar2 = ppuVar8 + 1;
      do {
        puVar9 = *ppuVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(ppuVar2,0x10);
        if (bVar4) {
          *ppuVar2 = puVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (puVar9 == (undefined *)0x0) {
        (**(code **)(*ppuVar8 + 0x10))(ppuVar8);
        __ZNSt3__119__shared_weak_count14__release_weakEv(ppuVar8);
      }
    }
    if (pppuVar6[3] != (undefined **)0x0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return pppuVar6 + 1;
}



/* Entry: 10a6c5ab0; end: 10a6c5adb;  */

undefined8 * FUN_10a6c5ab0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_1 + 0x18);
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(param_1 + 0x10) != 0) {
        FUN_10a05c0fc(*(long *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8));
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return (undefined8 *)(param_1 + 8);
}



/* Entry: 10a6c5adc; end: 10a6c5b5b;  */

undefined8 * FUN_10a6c5adc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)param_1[2];
  if (plVar4 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    if (plVar4 != (long *)0x0) {
      if (param_1[1] != 0) {
        FUN_10a05c0fc(param_1[1],*param_1);
      }
      plVar1 = plVar4 + 1;
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar4);
      }
    }
    if (param_1[2] != 0) {
      __ZNSt3__119__shared_weak_count14__release_weakEv();
    }
  }
  return param_1;
}



/* Entry: 10a6c5b5c; end: 10a6c5d0b;  */

/* WARNING: Possible PIC construction at 0x00010a6c5cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010a6c5cf4) */

long * FUN_10a6c5b5c(undefined8 *param_1,undefined8 *param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_78;
  long *plStack_70;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  __ZNSt3__115recursive_mutex4lockEv(param_2 + 2);
  if (param_4 != (long *)0x0) {
    plVar5 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar5 = (long *)0x48;
  lStack_78 = param_3;
  plStack_70 = param_4;
  __Znwm();
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5[2] = (long)&PTR_FUN_110c10da8;
  plVar5[3] = param_3;
  plVar5[4] = (long)param_4;
  if (param_4 != (long *)0x0) {
    plVar1 = param_4 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  puVar2 = (undefined8 *)param_2[0xb];
  lVar6 = param_2[0xc];
  *plVar5 = (long)(param_2 + 10);
  plVar5[1] = (long)puVar2;
  *puVar2 = plVar5;
  param_2[0xb] = plVar5;
  param_2[0xc] = lVar6 + 1;
  if (param_4 != (long *)0x0) {
    plVar5 = param_4 + 1;
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
    do {
      lVar6 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*param_4 + 0x10))(param_4);
      __ZNSt3__119__shared_weak_count14__release_weakEv(param_4);
    }
  }
  uVar7 = param_2[0xb];
  plVar5 = param_2 + 2;
  __ZNSt3__115recursive_mutex6unlockEv();
  uVar9 = param_2[1];
  uVar8 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *param_1 = uVar7;
  param_1[2] = uVar9;
  param_1[1] = uVar8;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return plVar5;
  }
  ___stack_chk_fail();
  plVar5 = plStack_70;
  if (plStack_70 != (long *)0x0) {
    plVar1 = plStack_70 + 1;
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
      (**(code **)(*plStack_70 + 0x10))(plStack_70);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return &lStack_78;
}



/* Entry: 10a6c5d0c; end: 10a6c5d47;  */

long FUN_10a6c5d0c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
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
  return param_1 + 8;
}



/* Entry: 10a6c5d48; end: 10a6c5f97;  */

void FUN_10a6c5d48(undefined *****param_1,undefined ******param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ******ppppppuVar4;
  undefined ******ppppppuVar5;
  undefined ******ppppppuVar6;
  undefined ******ppppppuVar7;
  undefined ******ppppppuVar8;
  undefined *****pppppuVar9;
  undefined *****pppppuVar10;
  undefined ******unaff_x21;
  undefined *****unaff_x22;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  int aiStack_250 [2];
  undefined8 *puStack_248;
  int aiStack_240 [2];
  undefined8 *puStack_238;
  undefined8 **ppuStack_230;
  undefined ****ppppuStack_228;
  undefined1 *puStack_220;
  int **ppiStack_218;
  int *piStack_210;
  undefined8 uStack_208;
  undefined ****ppppuStack_200;
  undefined *****pppppuStack_1f8;
  undefined *****pppppuStack_1f0;
  undefined *****pppppuStack_1e8;
  undefined1 **ppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  byte bStack_1c0;
  undefined ****ppppuStack_1b8;
  undefined ****ppppuStack_1b0;
  undefined ****ppppuStack_1a8;
  undefined ****ppppuStack_1a0;
  byte bStack_198;
  long lStack_178;
  undefined ****ppppuStack_170;
  undefined *****pppppuStack_168;
  undefined ****ppppuStack_160;
  undefined *****pppppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined ****ppppuStack_138;
  undefined *****pppppuStack_130;
  undefined ****ppppuStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined ****ppppuStack_110;
  long lStack_108;
  undefined *****pppppuStack_100;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  undefined *****pppppuStack_e8;
  undefined ***pppuStack_e0;
  undefined ***pppuStack_d8;
  int iStack_d0;
  undefined ****ppppuStack_c8;
  undefined ***pppuStack_c0;
  undefined1 auStack_b8 [56];
  undefined ***pppuStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [40];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppuVar4 = (undefined ******)param_2[4];
  ppppppuVar6 = ppppppuVar4;
  ppppppuVar7 = param_2;
  pppppuVar10 = param_1;
  if (ppppppuVar4 != (undefined ******)0x0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    ppppppuVar6 = ppppppuVar4;
    unaff_x21 = param_2;
    pppppuStack_130 = (undefined *****)ppppppuVar4;
    if (ppppppuVar4 != (undefined ******)0x0) {
      ppppuStack_138 = (undefined ****)param_2[3];
      if ((undefined *****)ppppuStack_138 != (undefined *****)0x0) {
        unaff_x22 = param_2[2];
        pppuStack_f8 = (undefined ***)param_1[1];
        pppppuStack_100 = (undefined *****)*param_1;
        pppuStack_f0 = (undefined ***)param_1[2];
        *param_1 = (undefined ****)0x0;
        param_1[1] = (undefined ****)0x0;
        pppuStack_e0 = (undefined ***)param_1[4];
        pppppuStack_e8 = (undefined *****)param_1[3];
        pppuStack_d8 = (undefined ***)param_1[5];
        param_1[2] = (undefined ****)0x0;
        param_1[3] = (undefined ****)0x0;
        param_1[4] = (undefined ****)0x0;
        param_1[5] = (undefined ****)0x0;
        iStack_d0 = *(int *)(param_1 + 6);
        param_2 = &pppppuStack_100;
        ppppuStack_c8 = param_1[7];
        pppuStack_c0 = (undefined ***)param_1[8];
        param_1[7] = (undefined ****)0x0;
        pppppuVar10 = param_1 + 9;
        (*(code *)(*pppppuVar10)[2])(auStack_b8,pppppuVar10);
        pppuStack_80 = (undefined ***)param_1[0x10];
        uStack_78 = *(undefined4 *)(param_1 + 0x11);
        FUN_10a0424c4(auStack_70,param_1 + 0x12);
        if (iStack_d0 - 200U < 100) {
          pppppuVar10 = &ppppuStack_128;
          uStack_118 = 0;
          uStack_120 = 0;
          ppppuStack_128 = (undefined ****)&PTR_DAT_110b192d8;
          lStack_108 = (long)(int)pppuStack_80;
          ppppuStack_110 = ppppuStack_c8;
          pppppuVar9 = &ppppuStack_128;
          func_0x000107c30348(pppppuVar9,&ppppuStack_110);
          if ((int)pppppuVar9 == 0) {
LAB_10a6c5e84:
            if ((uStack_120 & 1) != 0) {
              func_0x0001053936ac(&uStack_120);
            }
            goto LAB_10a6c5e94;
          }
          if ((int)uStack_118 == 1) {
            ppppuStack_110 = (undefined ****)CONCAT71(ppppuStack_110._1_7_,(char)uStack_118);
            ppppppuVar7 = (undefined ******)&ppppuStack_110;
            FUN_10a6c5f98(unaff_x22[3]);
          }
          else {
            if ((int)uStack_118 != 2) goto LAB_10a6c5e84;
            ppppuStack_110 = (undefined ****)CONCAT71(ppppuStack_110._1_7_,(char)uStack_118);
            ppppppuVar7 = (undefined ******)&ppppuStack_110;
            FUN_10a6c5f98(unaff_x22[3]);
          }
          if ((uStack_120 & 1) != 0) {
            func_0x0001053936ac(&uStack_120);
          }
        }
        else {
LAB_10a6c5e94:
          ppppuStack_128 = (undefined ****)((ulong)ppppuStack_128 & 0xffffffffffffff00);
          ppppppuVar7 = (undefined ******)&ppppuStack_128;
          FUN_10a6c5f98(unaff_x22[3]);
        }
        func_0x000104c4f944(auStack_70);
        ppppppuVar6 = (undefined ******)&ppppuStack_c8;
        FUN_10a042634();
        if ((long)pppuStack_d8 < 0) {
          ppppppuVar6 = (undefined ******)pppppuStack_e8;
          __ZdlPv();
        }
        if ((long)pppuStack_f0 < 0) {
          ppppppuVar6 = (undefined ******)pppppuStack_100;
          __ZdlPv();
        }
      }
      ppppppuVar5 = ppppppuVar4 + 1;
      do {
        pppppuVar9 = *ppppppuVar5;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(ppppppuVar5,0x10);
        if (bVar2) {
          *ppppppuVar5 = (undefined *****)((long)pppppuVar9 + -1);
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      unaff_x21 = param_2;
      if (pppppuVar9 == (undefined *****)0x0) {
        (*(code *)(*ppppppuVar4)[2])(ppppppuVar4);
        __ZNSt3__119__shared_weak_count14__release_weakEv();
        ppppppuVar6 = ppppppuVar4;
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  if ((uStack_120 & 1) != 0) {
    func_0x0001053936ac(pppppuVar10 + 1);
  }
  FUN_10a05bd10(&pppppuStack_100);
  func_0x00010a05a86c(&ppppuStack_138);
  ppppppuVar4 = ppppppuVar6;
  __Unwind_Resume();
  pcStack_148 = FUN_10a6c5f98;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_170 = (undefined ****)unaff_x22;
  pppppuStack_168 = (undefined *****)unaff_x21;
  ppppuStack_160 = (undefined ****)pppppuVar10;
  pppppuStack_158 = (undefined *****)ppppppuVar6;
  puStack_150 = &stack0xfffffffffffffff0;
  if ((ppppppuVar4 == (undefined ******)0x0) || (*(byte *)(ppppppuVar4 + 8) != 2)) {
    pppppuStack_1e8 = (undefined *****)ppppppuVar4;
    ppppppuVar6 = ppppppuVar7;
    if ((ppppppuVar4 != (undefined ******)0x0) && (*(byte *)(ppppppuVar4 + 8) == 1)) {
      pppppuStack_1e8 = (undefined *****)(ulong)*(byte *)ppppppuVar7;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010a6c6058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*ppppppuVar4)(pppppuStack_1e8,ppppppuVar4);
        return;
      }
      goto LAB_10a6c60f4;
    }
  }
  else {
    ppppppuVar5 = ppppppuVar4;
    ppppppuVar8 = ppppppuVar7;
    FUN_10a688b40();
    unaff_x21 = ppppppuVar5;
    if (ppppppuVar5 == (undefined ******)0x0) {
      pppppuStack_1e8 = (undefined *****)(undefined ******)0x0;
      ppppppuVar6 = (undefined ******)0x0;
      if (ppppppuVar8 != (undefined ******)0x0) {
        ppppuStack_1a0 = (undefined ****)ppppppuVar4[1];
        ppppuStack_1a8 = (undefined ****)*ppppppuVar4;
        if (ppppppuVar4[1] != (undefined *****)0x0) {
          pppppuVar10 = ppppppuVar4[1] + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(pppppuVar10,0x10);
            if (bVar2) {
              *pppppuVar10 = (undefined ****)((long)*pppppuVar10 + 1);
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        bStack_1c0 = *(byte *)ppppppuVar7;
        ppppppuVar4 = (undefined ******)&ppppuStack_1b8;
        ppppuStack_1b8 = (undefined ****)FUN_10a6c62cc;
        ppppuStack_1b0 = (undefined ****)&PTR_DAT_110c10dc0;
        uStack_1d0 = 0;
        uStack_1c8 = 0;
        ppppppuVar6 = (undefined ******)&ppppuStack_1b8;
        bStack_198 = bStack_1c0;
        FUN_10a4634ec();
        ppppppuVar7 = (undefined ******)&ppppuStack_1b0;
        (*(code *)*ppppuStack_1b0)();
        pppppuStack_1e8 = (undefined *****)ppppppuVar7;
      }
    }
    else {
      *ppppppuVar5 = (undefined *****)
                     CONCAT44((int)((ulong)*ppppppuVar5 >> 0x20) + 1,(int)*ppppppuVar5 + 1);
      ppppppuVar6 = (undefined ******)*ppppppuVar4;
      FUN_10a6c6138();
      iVar3 = *(int *)((long)ppppppuVar5 + 4) + -1;
      *(int *)((long)ppppppuVar5 + 4) = iVar3;
      pppppuStack_1e8 = (undefined *****)ppppppuVar6;
      ppppppuVar6 = ppppppuVar7;
      if (iVar3 == 0) {
        *(undefined4 *)ppppppuVar5 = 0;
      }
    }
  }
  ppppppuVar7 = ppppppuVar6;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
LAB_10a6c60f4:
  ___stack_chk_fail();
  (*(code *)*ppppuStack_1b0)(ppppppuVar4 + 1);
  func_0x00010a004dac(&uStack_1d0);
  ppppppuVar6 = (undefined ******)pppppuStack_1e8;
  __Unwind_Resume();
  pcStack_1d8 = FUN_10a6c6138;
  ppppuStack_200 = (undefined ****)unaff_x22;
  pppppuStack_1f8 = (undefined *****)unaff_x21;
  pppppuStack_1f0 = (undefined *****)ppppppuVar4;
  ppuStack_1e0 = &puStack_150;
  func_0x000109884c0c(&ppuStack_230,ppppppuVar6 + 1,*ppppppuVar6);
  func_0x000109884820(&puStack_258,&ppuStack_230,*ppppppuVar6);
  if (ppuStack_230 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_230)();
  }
  (*(code *)(**ppppppuVar6)[6])(&puStack_260);
  pppppuVar10 = *ppppppuVar6;
  aiStack_240[0] = 3;
  puStack_238 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)ppppppuVar7);
  piStack_210 = aiStack_240;
  uStack_208 = 1;
  (*(code *)(*pppppuVar10)[0xb])(pppppuVar10);
  ppuStack_230 = &puStack_258;
  ppiStack_218 = &piStack_210;
  ppppuStack_228 = (undefined ****)pppppuVar10;
  puStack_220 = (undefined1 *)&puStack_260;
  func_0x0001098960c0(aiStack_250);
  if ((3 < aiStack_250[0]) && (puStack_248 != (undefined8 *)0x0)) {
    (**(code **)*puStack_248)();
  }
  if ((3 < aiStack_240[0]) && (puStack_238 != (undefined8 *)0x0)) {
    (**(code **)*puStack_238)();
  }
  if (puStack_260 != (undefined8 *)0x0) {
    (**(code **)*puStack_260)();
  }
  if (puStack_258 != (undefined8 *)0x0) {
    (**(code **)*puStack_258)();
  }
  return;
}



/* Entry: 10a6c5f98; end: 10a6c6137;  */

void FUN_10a6c5f98(undefined ***param_1,undefined ***param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  int aiStack_110 [2];
  undefined8 *puStack_108;
  int aiStack_100 [2];
  undefined8 *puStack_f8;
  undefined8 **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined1 *puStack_e0;
  int **ppiStack_d8;
  int *piStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  byte bStack_58;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 == (undefined ***)0x0) || (*(char *)(param_1 + 8) != '\x02')) {
    pppuVar5 = param_1;
    pppuVar7 = param_2;
    if ((param_1 != (undefined ***)0x0) && (*(char *)(param_1 + 8) == '\x01')) {
      pppuVar5 = (undefined ***)(ulong)*(byte *)param_2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010a6c6058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)*param_1)(pppuVar5,param_1);
        return;
      }
      goto LAB_10a6c60f4;
    }
  }
  else {
    pppuVar4 = param_1;
    pppuVar6 = param_2;
    FUN_10a688b40();
    if (pppuVar4 == (undefined ***)0x0) {
      pppuVar5 = (undefined ***)0x0;
      pppuVar7 = (undefined ***)0x0;
      if (pppuVar6 != (undefined ***)0x0) {
        ppuStack_60 = param_1[1];
        ppuStack_68 = *param_1;
        if (param_1[1] != (undefined **)0x0) {
          ppuVar8 = param_1[1] + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(ppuVar8,0x10);
            if (bVar2) {
              *ppuVar8 = *ppuVar8 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        bStack_80 = *(byte *)param_2;
        param_1 = &ppuStack_78;
        ppuStack_78 = (undefined **)FUN_10a6c62cc;
        ppuStack_70 = &PTR_DAT_110c10dc0;
        uStack_90 = 0;
        uStack_88 = 0;
        pppuVar7 = &ppuStack_78;
        bStack_58 = bStack_80;
        FUN_10a4634ec();
        pppuVar5 = &ppuStack_70;
        (*(code *)*ppuStack_70)();
      }
    }
    else {
      *pppuVar4 = (undefined **)CONCAT44((int)((ulong)*pppuVar4 >> 0x20) + 1,(int)*pppuVar4 + 1);
      pppuVar5 = (undefined ***)*param_1;
      FUN_10a6c6138();
      iVar3 = *(int *)((long)pppuVar4 + 4) + -1;
      *(int *)((long)pppuVar4 + 4) = iVar3;
      pppuVar7 = param_2;
      if (iVar3 == 0) {
        *(undefined4 *)pppuVar4 = 0;
      }
    }
  }
  param_2 = pppuVar7;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
LAB_10a6c60f4:
  ___stack_chk_fail();
  (*(code *)*ppuStack_70)(param_1 + 1);
  func_0x00010a004dac(&uStack_90);
  __Unwind_Resume();
  func_0x000109884c0c(&ppuStack_f0,pppuVar5 + 1,*pppuVar5);
  func_0x000109884820(&puStack_118,&ppuStack_f0,*pppuVar5);
  if (ppuStack_f0 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_f0)();
  }
  (**(code **)(**pppuVar5 + 0x30))(&puStack_120);
  ppuVar8 = *pppuVar5;
  aiStack_100[0] = 3;
  puStack_f8 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)param_2);
  piStack_d0 = aiStack_100;
  uStack_c8 = 1;
  (**(code **)(*ppuVar8 + 0x58))(ppuVar8);
  ppuStack_f0 = &puStack_118;
  ppiStack_d8 = &piStack_d0;
  ppuStack_e8 = ppuVar8;
  puStack_e0 = (undefined1 *)&puStack_120;
  func_0x0001098960c0(aiStack_110);
  if ((3 < aiStack_110[0]) && (puStack_108 != (undefined8 *)0x0)) {
    (**(code **)*puStack_108)();
  }
  if ((3 < aiStack_100[0]) && (puStack_f8 != (undefined8 *)0x0)) {
    (**(code **)*puStack_f8)();
  }
  if (puStack_120 != (undefined8 *)0x0) {
    (**(code **)*puStack_120)();
  }
  if (puStack_118 != (undefined8 *)0x0) {
    (**(code **)*puStack_118)();
  }
  return;
}



/* Entry: 10a6c6138; end: 10a6c62cb;  */

void FUN_10a6c6138(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  func_0x000109884c0c(&ppuStack_60,param_1 + 1,*param_1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*param_1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*param_1 + 0x30))(&puStack_90);
  plVar1 = (long *)*param_1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*param_2);
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar1 + 0x58))(plVar1);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar1;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}



/* Entry: 10a6c62cc; end: 10a6c6333;  */

void FUN_10a6c62cc(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  int aiStack_80 [2];
  undefined8 *puStack_78;
  int aiStack_70 [2];
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  long *plStack_58;
  undefined1 *puStack_50;
  undefined4 **ppuStack_48;
  int *piStack_40;
  undefined8 uStack_38;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  func_0x000109884c0c(&ppuStack_60,puVar1 + 1,*puVar1);
  func_0x000109884820(&puStack_88,&ppuStack_60,*puVar1);
  if (ppuStack_60 != (undefined8 **)0x0) {
    (*(code *)**ppuStack_60)();
  }
  (**(code **)(*(long *)*puVar1 + 0x30))(&puStack_90);
  plVar2 = (long *)*puVar1;
  aiStack_70[0] = 3;
  puStack_68 = (undefined8 *)NEON_ucvtf((ulong)*(byte *)(param_1 + 0x20));
  piStack_40 = aiStack_70;
  uStack_38 = 1;
  (**(code **)(*plVar2 + 0x58))(plVar2);
  ppuStack_60 = &puStack_88;
  ppuStack_48 = &piStack_40;
  plStack_58 = plVar2;
  puStack_50 = (undefined1 *)&puStack_90;
  func_0x0001098960c0(aiStack_80);
  if ((3 < aiStack_80[0]) && (puStack_78 != (undefined8 *)0x0)) {
    (**(code **)*puStack_78)();
  }
  if ((3 < aiStack_70[0]) && (puStack_68 != (undefined8 *)0x0)) {
    (**(code **)*puStack_68)();
  }
  if (puStack_90 != (undefined8 *)0x0) {
    (**(code **)*puStack_90)();
  }
  if (puStack_88 != (undefined8 *)0x0) {
    (**(code **)*puStack_88)();
  }
  return;
}


