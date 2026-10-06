/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004b7fe4; end: 004b8027;  */

void FUN_004b7fe4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_00644fe8(auStack_38);
  FUN_004b8028(param_1,auStack_38);
  func_0x004b8514();
  return;
}



/* Entry: 004b8028; end: 004b803b;  */

long * FUN_004b8028(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined1 **ppuVar8;
  undefined1 ***pppuVar9;
  long *plVar10;
  long *plVar11;
  undefined1 **ppuVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 **ppuVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  char *pcStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long *plStack_100;
  undefined1 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 **ppuStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  uVar4 = *(char *)((long)param_2 + 0x17) == '\0';
  plVar10 = (long *)*param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    plVar10 = param_2;
  }
  plVar7 = &lStack_60;
  func_0x004c6ff4();
  puVar6 = &uStack_39;
  uStack_28 = extraout_x8;
  FUN_004c68cc();
  ppuVar13 = &puStack_38;
  puStack_38 = puVar6;
  lStack_30 = (long)plVar10;
  FUN_004baa7c(&lStack_60,ppuVar13,&uStack_28);
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[2] = lStack_50;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_60 = 0;
  FUN_0040d974(&lStack_60);
  func_0x004c6fc0(uStack_28);
  if ((bool)uVar4) {
    return plVar7;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_68 = FUN_004c68cc;
  ppuVar8 = ppuVar13;
  puStack_70 = &stack0xfffffffffffffff0;
  _strlen();
  ppuVar8 = (undefined1 **)((long)ppuVar13 + (long)ppuVar8);
  pppuVar9 = &ppuStack_d0;
  ppuVar12 = ppuVar8;
  func_0x004c6ff4(plVar7);
  ppuStack_d0 = ppuVar13;
  uStack_b8 = extraout_x8_00;
  FUN_004c6a50();
  plVar10 = (long *)pppuVar9;
  if ((int)pppuVar9 == 0x7b) {
    func_0x004c6fac();
  }
  bVar2 = 0;
  lVar16 = 0;
  plVar7 = plVar10;
  do {
    uVar15 = (uint)lVar16;
    cVar14 = (char)plVar7;
    if (uVar15 == 4) {
      if (((uint)plVar7 & 0xff) == 0x2d) {
LAB_004c69c0:
        func_0x004c6fac();
        cVar14 = (char)plVar10;
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar5 = (uVar15 & 0x7ffffffd) != 8;
      bVar1 = (uVar15 != 6 && bVar5) & bVar2;
      if ((uVar15 == 6 || !bVar5) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar7 & 0xff) == 0x2d) goto LAB_004c69c0;
        goto LAB_004c6a48;
      }
    }
    bVar2 = bVar1;
    plVar11 = (long *)(ulong)(uint)(int)cVar14;
    FUN_004c6adc();
    plVar7 = plVar11;
    func_0x004c6fac();
    plVar10 = plVar7;
    FUN_004c6adc();
    *(byte *)((long)&plStack_c8 + lVar16) = (byte)plVar10 | (byte)((int)plVar11 << 4);
    lVar16 = lVar16 + 1;
    if (lVar16 != 0) {
      if (lVar16 == 0x10) {
        if ((((int)pppuVar9 == 0x7b) && (func_0x004c6fac(), (int)plVar10 != 0x7d)) ||
           (bVar5 = ppuStack_d0 == ppuVar8, !bVar5)) {
LAB_004c6a48:
          FUN_004c6a78();
        }
        else {
          func_0x004c6fc0(uStack_b8);
          plVar10 = plStack_c8;
          ppuVar12 = ppuStack_c0;
          if (bVar5) {
            return plStack_c8;
          }
        }
        ___stack_chk_fail();
        ppuVar13 = (undefined1 **)*plVar10;
        if (ppuVar13 == ppuVar12) {
          pcStack_d8 = FUN_004c6a50;
          ppuStack_e0 = &puStack_70;
          FUN_004c6a78();
          pcStack_e8 = FUN_004c6a78;
          plStack_100 = (long *)pppuVar9;
          ppuStack_f8 = ppuVar8;
          puStack_f0 = (undefined1 *)&ppuStack_e0;
          __ZNSt13runtime_errorC1EPKc(auStack_110,"invalid uuid string");
          pcStack_128 = 
          "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/string_generator.hpp"
          ;
          pcStack_120 = "void boost::uuids::string_generator::throw_invalid() const";
          uStack_118 = 0xc0;
          FUN_004c6b74(auStack_110,&pcStack_128);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x4c6ac8);
          (*pcVar3)();
        }
        *plVar10 = (long)((long)ppuVar13 + 1);
        return (long *)(long)*(char *)ppuVar13;
      }
      func_0x004c6fac();
      plVar7 = plVar10;
    }
  } while( true );
}



/* Entry: 004b803c; end: 004b8067;  */

long FUN_004b803c(long param_1,long param_2)

{
  FUN_004b8084();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



/* Entry: 004b8068; end: 004b8083;  */

void FUN_004b8068(long param_1)

{
  FUN_004b80ec();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 004b8084; end: 004b80eb;  */

void FUN_004b8084(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  func_0x004b80bc();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}



/* Entry: 004b80ec; end: 004b8113;  */

void FUN_004b80ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  return;
}



/* Entry: 004b8114; end: 004b8133;  */

void FUN_004b8114(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_0040d974();
  }
  return;
}



/* Entry: 004b8134; end: 004b820b;  */

long FUN_004b8134(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  func_0x004b8464();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      FUN_00456f00(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      FUN_00648ba8(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_FUN_009eccf0;
      uStack_40 = 0;
      func_0x00456f38(auStack_d8);
      param_1 = 0xa0;
      __Znwm();
      func_0x004b853c();
      func_0x004b8428();
      goto LAB_004b81d0;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x004b84e0();
  }
LAB_004b81d0:
  lVar4 = *(long *)(unaff_x19 + 0x60);
  *(long *)(lVar4 + 0x98) = unaff_x19;
  func_0x004b850c();
  func_0x004b8564();
  if ((bool)uVar1) {
    return lVar4 + 0x10;
  }
  ___stack_chk_fail();
  uVar2 = param_1;
  func_0x004b850c();
  func_0x004b84d8();
  pcStack_e8 = FUN_004b820c;
  lStack_100 = lVar4;
  uStack_f8 = param_1;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_004b82b4();
  lVar4 = extraout_x8;
  uStack_108 = uVar2;
  FUN_004b8334(extraout_x8,&uStack_108);
  return lVar4;
}



/* Entry: 004b820c; end: 004b8277;  */

void FUN_004b820c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004b82b4();
  uStack_28 = param_2;
  FUN_004b8334(param_1,&uStack_28);
  return;
}



/* Entry: 004b8278; end: 004b827b;  */

undefined8 * FUN_004b8278(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004b827c; end: 004b828f;  */

void FUN_004b827c(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b8290; end: 004b82b3;  */

void FUN_004b8290(void)

{
  long unaff_x19;
  
  func_0x004b852c();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004b82b4; end: 004b82bf;  */

void FUN_004b82b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_004c67d8(&ppuStack_48,param_2);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_00648f64(param_1,1,ppuStack_48,uStack_40);
  func_0x004b8514();
  return;
}



/* Entry: 004b82c0; end: 004b8333;  */

void FUN_004b82c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 **ppuStack_48;
  ulong uStack_40;
  byte bStack_31;
  
  FUN_004c67d8(&ppuStack_48,param_3);
  if (-1 < (char)bStack_31) {
    uStack_40 = (ulong)bStack_31;
    ppuStack_48 = &ppuStack_48;
  }
  FUN_00648f64(param_1,param_2,ppuStack_48,uStack_40);
  func_0x004b8514();
  return;
}



/* Entry: 004b8334; end: 004b8427;  */

void FUN_004b8334(undefined8 *param_1)

{
  undefined8 extraout_x8;
  undefined1 auStack_28 [8];
  
  func_0x004b84bc();
  *param_1 = extraout_x8;
  func_0x004b8364(param_1 + 1,auStack_28);
  return;
}



/* Entry: 004b8428; end: 004b85bb;  */

undefined1 * FUN_004b8428(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000070);
  __ZNSt3__15mutexD1Ev(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 004b85bc; end: 004b863b;  */

long FUN_004b85bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_004b86f0(param_1,param_2,
               "SELECT conversation_metadata FROM NotifConversations WHERE conversation_id = ?",0x4e
              );
  FUN_00648ba8(lVar1 + 0x78,param_2,
               "INSERT OR REPLACE INTO NotifConversations(\n    conversation_id,\n    conversation_metadata\n) VALUES (?,?)"
               ,0x68);
  FUN_00648ba8(param_1 + 0x100,param_2,"DELETE FROM NotifConversations WHERE conversation_id = ?",
               0x38);
  return param_1;
}



/* Entry: 004b863c; end: 004b8667;  */

void FUN_004b863c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004b875c();
  FUN_004b82b4();
  uStack_28 = param_2;
  func_0x004b8990(param_1,&uStack_28);
  return;
}



/* Entry: 004b8668; end: 004b86ef;  */

void FUN_004b8668(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_004b8c04(param_1,param_2,param_3);
  FUN_006490e4(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  FUN_004583a4(&lStack_38);
  return;
}



/* Entry: 004b86f0; end: 004b875b;  */

undefined8 *
FUN_004b86f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *param_1 = 0x32aaaba7;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = param_2;
  uStack_30 = param_3;
  uStack_28 = param_4;
  FUN_00456d78(param_1 + 9,&uStack_30);
  param_1[0xc] = param_1 + 0xc;
  param_1[0xd] = param_1 + 0xc;
  param_1[0xe] = 0;
  return param_1;
}



/* Entry: 004b875c; end: 004b88d3;  */

long FUN_004b875c(long param_1)

{
  dword *pdVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long *plVar5;
  long lVar6;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long lStack_d8;
  undefined1 uStack_d0;
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_00999f88;
  uStack_d0 = 1;
  lStack_d8 = param_1;
  __ZNSt3__15mutex4lockEv();
  plVar2 = (long *)(param_1 + 0x60);
  plVar5 = (long *)(param_1 + 0x68);
  do {
    plVar4 = (long *)*plVar5;
    if (plVar4 == plVar2) {
      FUN_00456f00(&lStack_d8);
      lVar6 = (long)*(char *)(param_1 + 0x5f);
      if (lVar6 < 0) {
        lVar3 = *(long *)(param_1 + 0x48);
        lVar6 = *(long *)(param_1 + 0x50);
      }
      else {
        lVar3 = param_1 + 0x48;
      }
      FUN_00648ba8(appuStack_c8,*(undefined8 *)(param_1 + 0x40),lVar3,lVar6);
      appuStack_c8[0] = &PTR_FUN_009ecd90;
      uStack_40 = 0;
      func_0x00456f38(&lStack_d8);
      pdVar1 = &section_00000068.reloff;
      __Znwm();
      FUN_00648cc4(pdVar1 + 4,appuStack_c8);
      *(long **)(pdVar1 + 2) = plVar2;
      *(undefined ***)(pdVar1 + 4) = &PTR_FUN_009ecd90;
      *(undefined8 *)(pdVar1 + 0x26) = uStack_40;
      lVar6 = *(long *)(param_1 + 0x60);
      *(long *)pdVar1 = lVar6;
      *(dword **)(lVar6 + 8) = pdVar1;
      *(dword **)(param_1 + 0x60) = pdVar1;
      *(long *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + 1;
      FUN_00648d18(appuStack_c8);
      goto LAB_004b886c;
    }
    plVar5 = plVar4 + 1;
  } while (plVar4[0x13] != 0);
  plVar5 = (long *)*plVar5;
  if (plVar2 != plVar5) {
    lVar6 = *plVar4;
    *(long **)(lVar6 + 8) = plVar5;
    *plVar5 = lVar6;
    lVar6 = *plVar2;
    *(long **)(lVar6 + 8) = plVar4;
    *plVar4 = lVar6;
    *plVar2 = (long)plVar4;
    plVar4[1] = (long)plVar2;
  }
LAB_004b886c:
  lVar6 = *(long *)(param_1 + 0x60);
  *(long *)(lVar6 + 0x98) = param_1;
  plVar2 = &lStack_d8;
  FUN_0040d514();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_38) {
    return lVar6 + 0x10;
  }
  ___stack_chk_fail();
  plVar5 = &lStack_d8;
  FUN_0040d514();
  func_0x004b8d84();
  pcStack_e8 = FUN_004b88d4;
  lStack_100 = lVar6;
  plStack_f8 = plVar2;
  puStack_f0 = &stack0xfffffffffffffff0;
  FUN_004b82b4();
  lVar6 = extraout_x8;
  plStack_108 = plVar5;
  func_0x004b8990(extraout_x8,&plStack_108);
  return lVar6;
}



/* Entry: 004b88d4; end: 004b8947;  */

void FUN_004b88d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004b82b4();
  uStack_28 = param_2;
  func_0x004b8990(param_1,&uStack_28);
  return;
}



/* Entry: 004b8948; end: 004b894b;  */

undefined8 * FUN_004b8948(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004b894c; end: 004b895f;  */

void FUN_004b894c(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b8960; end: 004b89c7;  */

void FUN_004b8960(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  __ZNSt3__15mutex4lockEv(uVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)(uVar1);
  return;
}



/* Entry: 004b89c8; end: 004b8a0f;  */

undefined8 * FUN_004b89c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  FUN_004b8a10();
  return param_1;
}



/* Entry: 004b8a10; end: 004b8aef;  */

void FUN_004b8a10(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_006490e4(), (int)lVar1 != 0)) {
    FUN_00648c94(*param_1);
    func_0x00645038(&uStack_38);
    ppuStack_80 = &PTR_FUN_009efe70;
    uStack_78 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_40 = 0;
    FUN_00549e84(&ppuStack_80,uStack_38,iStack_30 - (int)uStack_38);
    FUN_0040d974(&uStack_38);
    if ((char)param_1[10] == '\x01') {
      FUN_004b8b30(param_1 + 1,&ppuStack_80);
    }
    else {
      func_0x004b8b14(param_1 + 1,&ppuStack_80);
    }
    FUN_004d2bec(&ppuStack_80);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[10] == '\x01') {
    FUN_004d2bec();
    *(undefined1 *)(plVar2 + 9) = 0;
  }
  return;
}



/* Entry: 004b8af0; end: 004b8b2f;  */

void FUN_004b8af0(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_004d2bec();
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



/* Entry: 004b8b30; end: 004b8b93;  */

long FUN_004b8b30(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_004d3010(param_1);
    }
    else {
      FUN_004d2fdc(param_1);
    }
  }
  return param_1;
}



/* Entry: 004b8b94; end: 004b8b9f;  */

undefined8 * FUN_004b8b94(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009efe70;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_004b8b30(param_1,param_2);
  return param_1;
}



/* Entry: 004b8ba0; end: 004b8be3;  */

undefined8 * FUN_004b8ba0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009efe70;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  FUN_004b8b30(param_1,param_3);
  return param_1;
}



/* Entry: 004b8be4; end: 004b8c03;  */

void FUN_004b8be4(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_004d2bec();
  }
  return;
}



/* Entry: 004b8c04; end: 004b8c3b;  */

void FUN_004b8c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_004b82c0(param_1,1,param_2);
  FUN_004b8c98(auStack_38,param_3);
  FUN_00648fe0(param_1,2,auStack_38);
  FUN_0040d974(auStack_38);
  return;
}



/* Entry: 004b8c3c; end: 004b8c97;  */

void FUN_004b8c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_004b8c98(auStack_38,param_3);
  FUN_00648fe0(param_1,param_2,auStack_38);
  FUN_0040d974(auStack_38);
  return;
}



/* Entry: 004b8c98; end: 004b8ceb;  */

void FUN_004b8c98(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x004d2df4();
  FUN_004b8cec(param_1,uVar1);
  FUN_0054a1cc(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 004b8cec; end: 004b8d57;  */

undefined8 * FUN_004b8cec(undefined8 *param_1,long param_2)

{
  undefined8 *puStack_30;
  undefined1 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uStack_28 = 0;
  puStack_30 = param_1;
  if (param_2 != 0) {
    FUN_0040d8a0(param_1);
    FUN_004b8d58(param_1,param_2);
  }
  uStack_28 = 1;
  func_0x0040d92c(&puStack_30);
  return param_1;
}



/* Entry: 004b8d58; end: 004b8da7;  */

void FUN_004b8d58(long param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)(param_1 + 8) + param_2;
  puVar2 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 004b8da8; end: 004b8e77;  */

long FUN_004b8da8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_004b8fac(param_1,param_2,
               "SELECT conversation_version FROM NotifDeltaSyncResponses WHERE conversation_id = ?\n    ORDER BY conversation_version DESC\n    LIMIT 1"
               ,0x85);
  FUN_004b8fd8(lVar1 + 0x78,param_2,
               "SELECT conversation_id FROM NotifDeltaSyncResponses\n    GROUP BY conversation_id",
               0x50);
  FUN_004b9004(param_1 + 0xf0,param_2,
               "SELECT * FROM NotifDeltaSyncResponses WHERE conversation_id = ?\n    ORDER BY conversation_version ASC"
               ,0x65);
  FUN_00648ba8(param_1 + 0x168,param_2,
               "INSERT OR REPLACE INTO NotifDeltaSyncResponses(\n    conversation_id,\n    conversation_version,\n    delta_sync_data\n) VALUES (?,?,?)"
               ,0x83);
  FUN_00648ba8(param_1 + 0x1f0,param_2,
               "DELETE FROM NotifDeltaSyncResponses WHERE conversation_id = ?",0x3d);
  return param_1;
}



/* Entry: 004b8e78; end: 004b8ef3;  */

void FUN_004b8e78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004b9030();
  FUN_004b82b4();
  uStack_28 = param_2;
  func_0x004b918c(param_1,&uStack_28);
  return;
}



/* Entry: 004b8ef4; end: 004b8f1b;  */

void FUN_004b8ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_004b8f1c(param_1 + 0x168,param_2,&uStack_18);
  return;
}



/* Entry: 004b8f1c; end: 004b8fab;  */

void FUN_004b8f1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_004b9a34(param_1,param_2,param_3,param_4);
  FUN_006490e4(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  FUN_004583a4(&lStack_38);
  return;
}



/* Entry: 004b8fac; end: 004b8fd7;  */

void FUN_004b8fac(void)

{
  func_0x004b9b6c();
  func_0x004b9c5c();
  func_0x004b9c48();
  return;
}



/* Entry: 004b8fd8; end: 004b9003;  */

void FUN_004b8fd8(void)

{
  func_0x004b9b6c();
  func_0x004b9c5c();
  func_0x004b9c48();
  return;
}



/* Entry: 004b9004; end: 004b902f;  */

void FUN_004b9004(void)

{
  func_0x004b9b6c();
  func_0x004b9c5c();
  func_0x004b9c48();
  return;
}



/* Entry: 004b9030; end: 004b90ef;  */

long FUN_004b9030(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x004b9b48();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x004b9d00();
      func_0x004b9ce8();
      func_0x004b9d08();
      func_0x004b9cd4();
      func_0x004b9be8();
      func_0x004b9b18();
      goto LAB_004b90bc;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x004b9b98();
  }
LAB_004b90bc:
  func_0x004b9c08();
  func_0x004b9c28();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x004b9c98();
  func_0x004b9c40();
  FUN_004b82b4();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x004b918c(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 004b90f0; end: 004b9153;  */

void FUN_004b90f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004b82b4();
  uStack_28 = param_2;
  func_0x004b918c(param_1,&uStack_28);
  return;
}



/* Entry: 004b9154; end: 004b9157;  */

undefined8 * FUN_004b9154(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004b9158; end: 004b916b;  */

void FUN_004b9158(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b916c; end: 004b923f;  */

void FUN_004b916c(void)

{
  long unaff_x19;
  
  func_0x004b9bf8();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004b9240; end: 004b92ff;  */

long FUN_004b9240(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x004b9b48();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x004b9d00();
      func_0x004b9ce8();
      func_0x004b9d08();
      func_0x004b9cd4();
      func_0x004b9be8();
      func_0x004b9b18();
      goto LAB_004b92cc;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x004b9b98();
  }
LAB_004b92cc:
  func_0x004b9c08();
  func_0x004b9c28();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x004b9c98();
  func_0x004b9c40();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x004b9390(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 004b9300; end: 004b9357;  */

void FUN_004b9300(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = param_2;
  func_0x004b9390(param_1,&uStack_28);
  return;
}



/* Entry: 004b9358; end: 004b935b;  */

undefined8 * FUN_004b9358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004b935c; end: 004b936f;  */

void FUN_004b935c(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b9370; end: 004b93b7;  */

void FUN_004b9370(void)

{
  long unaff_x19;
  
  func_0x004b9bf8();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004b93b8; end: 004b93f7;  */

void FUN_004b93b8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x004b9bc8();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_004b93f8();
  return;
}



/* Entry: 004b93f8; end: 004b945b;  */

void FUN_004b93f8(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_006490e4(), (int)lVar1 != 0)) {
    FUN_004b94b4(auStack_38,*param_1);
    FUN_004b945c(param_1 + 1,auStack_38);
    func_0x004b9ca0();
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[4] == '\x01') {
    FUN_0040d974();
    *(undefined1 *)(plVar2 + 3) = 0;
  }
  return;
}



/* Entry: 004b945c; end: 004b948f;  */

long FUN_004b945c(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_004b8084();
  }
  else {
    FUN_004b94dc();
  }
  return param_1;
}



/* Entry: 004b9490; end: 004b94b3;  */

void FUN_004b9490(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_0040d974();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 004b94b4; end: 004b94db;  */

void FUN_004b94b4(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_00648c94();
  FUN_00644fe8(auStack_38);
  FUN_004b8028(param_1,auStack_38);
  func_0x004b8514();
  return;
}



/* Entry: 004b94dc; end: 004b9507;  */

void FUN_004b94dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 004b9508; end: 004b9527;  */

void FUN_004b9508(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    FUN_0040d974();
  }
  return;
}



/* Entry: 004b9528; end: 004b95e7;  */

long FUN_004b9528(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 uStack_108;
  
  func_0x004b9b48();
  plVar3 = (long *)(unaff_x19 + 0x68);
  do {
    lVar2 = *plVar3;
    uVar1 = lVar2 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      func_0x004b9d00();
      func_0x004b9ce8();
      func_0x004b9d08();
      func_0x004b9cd4();
      func_0x004b9be8();
      func_0x004b9b18();
      goto LAB_004b95b4;
    }
    plVar3 = (long *)(lVar2 + 8);
  } while (*(long *)(lVar2 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar3;
  if (!(bool)uVar1) {
    func_0x004b9b98();
  }
LAB_004b95b4:
  func_0x004b9c08();
  func_0x004b9c28();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  func_0x004b9c98();
  func_0x004b9c40();
  FUN_004b82b4();
  lVar2 = extraout_x8;
  uStack_108 = param_1;
  func_0x004b9684(extraout_x8,&uStack_108);
  return lVar2;
}



/* Entry: 004b95e8; end: 004b964b;  */

void FUN_004b95e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004b82b4();
  uStack_28 = param_2;
  func_0x004b9684(param_1,&uStack_28);
  return;
}



/* Entry: 004b964c; end: 004b964f;  */

undefined8 * FUN_004b964c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004b9650; end: 004b9663;  */

void FUN_004b9650(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004b9664; end: 004b96ab;  */

void FUN_004b9664(void)

{
  long unaff_x19;
  
  func_0x004b9bf8();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004b96ac; end: 004b96eb;  */

void FUN_004b96ac(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x004b9bc8();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  FUN_004b96ec();
  return;
}



/* Entry: 004b96ec; end: 004b9763;  */

void FUN_004b96ec(long *param_1)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_70 [80];
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_006490e4(), (int)lVar1 != 0)) {
    FUN_004b97bc(auStack_70,*param_1);
    FUN_004b9764(param_1 + 1,auStack_70);
    func_0x004b99ec(auStack_70);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[0xb] == '\x01') {
    func_0x004b99ec();
    *(undefined1 *)(plVar2 + 10) = 0;
  }
  return;
}



/* Entry: 004b9764; end: 004b9797;  */

long FUN_004b9764(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_004b98a0();
  }
  else {
    FUN_004b98d8();
  }
  return param_1;
}



/* Entry: 004b9798; end: 004b97bb;  */

void FUN_004b9798(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x004b99ec();
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



/* Entry: 004b97bc; end: 004b980f;  */

void FUN_004b97bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00648c94();
  FUN_004b7fe4(param_1);
  uVar1 = param_2;
  FUN_00644fbc(param_2,1);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_004b9810(param_1 + 0x20,param_2,2);
  return;
}



/* Entry: 004b9810; end: 004b984b;  */

void FUN_004b9810(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00645038(auStack_38);
  FUN_004b984c(param_1,auStack_38);
  func_0x004b9ca0();
  return;
}



/* Entry: 004b984c; end: 004b989f;  */

void FUN_004b984c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_009efec0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_00549e84(param_1,*param_2,*(int *)(param_2 + 1) - (int)*param_2);
  return;
}



/* Entry: 004b98a0; end: 004b98d7;  */

long FUN_004b98a0(long param_1,long param_2)

{
  FUN_004b8084();
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  FUN_004b98f4(param_1 + 0x20,param_2 + 0x20);
  return param_1;
}



/* Entry: 004b98d8; end: 004b98f3;  */

void FUN_004b98d8(long param_1)

{
  FUN_004b9958();
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}



/* Entry: 004b98f4; end: 004b9957;  */

long FUN_004b98f4(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_004d3370(param_1);
    }
    else {
      FUN_004d333c(param_1);
    }
  }
  return param_1;
}



/* Entry: 004b9958; end: 004b99a3;  */

undefined8 * FUN_004b9958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_1[3] = uVar1;
  FUN_004b99a4(param_1 + 4,param_2 + 4);
  return param_1;
}



/* Entry: 004b99a4; end: 004b99af;  */

undefined8 * FUN_004b99a4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009efec0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_004b98f4(param_1,param_2);
  return param_1;
}



/* Entry: 004b99b0; end: 004b9a13;  */

undefined8 * FUN_004b99b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009efec0;
  param_1[1] = param_2;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_004b98f4(param_1,param_3);
  return param_1;
}



/* Entry: 004b9a14; end: 004b9a33;  */

void FUN_004b9a14(long param_1)

{
  if (*(char *)(param_1 + 0x50) == '\x01') {
    func_0x004b99ec();
  }
  return;
}



/* Entry: 004b9a34; end: 004b9a87;  */

void FUN_004b9a34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [8];
  
  FUN_004b82c0(param_1,1,param_2);
  FUN_00457810(param_1,2,param_3);
  FUN_004b9ad0(auStack_38,param_4);
  FUN_00648fe0(param_1,3,auStack_38);
  func_0x004b9ca0();
  return;
}



/* Entry: 004b9a88; end: 004b9acf;  */

void FUN_004b9a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [24];
  
  FUN_004b9ad0(auStack_38,param_3);
  FUN_00648fe0(param_1,param_2,auStack_38);
  func_0x004b9ca0();
  return;
}



/* Entry: 004b9ad0; end: 004b9b17;  */

void FUN_004b9ad0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_004d31f8();
  FUN_004b8cec(param_1,uVar1);
  FUN_0054a1cc(param_2,*param_1,*(int *)(param_1 + 1) - (int)*param_1);
  return;
}



/* Entry: 004b9b18; end: 004b9d0f;  */

undefined1 * FUN_004b9b18(void)

{
  long lVar1;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined **ppuStack0000000000000018;
  long in_stack_000000a0;
  
  unaff_x20[1] = unaff_x21;
  unaff_x20[2] = unaff_x22;
  unaff_x20[0x13] = in_stack_000000a0;
  lVar1 = *(long *)(unaff_x19 + 0x60);
  *unaff_x20 = lVar1;
  *(long **)(lVar1 + 8) = unaff_x20;
  *(long **)(unaff_x19 + 0x60) = unaff_x20;
  *(long *)(unaff_x19 + 0x70) = *(long *)(unaff_x19 + 0x70) + 1;
  ppuStack0000000000000018 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000070);
  __ZNSt3__15mutexD1Ev(&stack0x00000030);
  return (undefined1 *)&stack0x00000018;
}



/* Entry: 004b9d10; end: 004b9ddf;  */

long FUN_004b9d10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_004b9f38(param_1,param_2,
               "SELECT epoch_key FROM NotifKrakenEpochKeys WHERE conversation_id = ? AND epoch_number = ?"
               ,0x59);
  FUN_004b9f64(lVar1 + 0x78,param_2,"SELECT EXISTS(SELECT 1 FROM NotifKrakenEpochKeys) AS has_keys",
               0x3d);
  FUN_00648ba8(param_1 + 0xf0,param_2,
               "INSERT OR REPLACE INTO NotifKrakenEpochKeys(\n    conversation_id,\n    epoch_number,\n    epoch_key\n) VALUES (?,?,?)"
               ,0x72);
  FUN_00648ba8(param_1 + 0x178,param_2,
               "DELETE FROM NotifKrakenEpochKeys\nWHERE rowid IN (\n    SELECT rowid FROM NotifKrakenEpochKeys\n    WHERE conversation_id = ?\n    ORDER BY epoch_number DESC\n    LIMIT -1 OFFSET ?\n)"
               ,0xb1);
  FUN_00648ba8(param_1 + 0x200,param_2,"DELETE FROM NotifKrakenEpochKeys WHERE conversation_id = ?",
               0x3a);
  return param_1;
}



/* Entry: 004b9de0; end: 004b9dff;  */

void FUN_004b9de0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_004b9e00(param_1,param_2,&uStack_18);
  return;
}



/* Entry: 004b9e00; end: 004b9e3b;  */

void FUN_004b9e00(undefined8 param_1)

{
  FUN_004b9f90();
  func_0x004b83f0();
  func_0x004ba10c(param_1,&stack0xffffffffffffffd8);
  return;
}



/* Entry: 004b9e3c; end: 004b9e5f;  */

void FUN_004b9e3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  FUN_004ba260();
  uStack_28 = param_2;
  func_0x004ba3d0(param_1,&uStack_28);
  return;
}



/* Entry: 004b9e60; end: 004b9e83;  */

void FUN_004b9e60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_004b9e84(param_1 + 0xf0,param_2,&uStack_18);
  return;
}



/* Entry: 004b9e84; end: 004b9f13;  */

void FUN_004b9e84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_38;
  
  lStack_38 = param_1;
  __ZNSt3__15mutex4lockEv(param_1 + 0x18);
  FUN_004ba494(param_1,param_2,param_3,param_4);
  FUN_006490e4(param_1);
  __ZNSt3__15mutex6unlockEv(param_1 + 0x18);
  FUN_004583a4(&lStack_38);
  return;
}



/* Entry: 004b9f14; end: 004b9f37;  */

void FUN_004b9f14(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  uStack_18 = param_3;
  FUN_004b7bbc(param_1 + 0x178,param_2,&uStack_18);
  return;
}



/* Entry: 004b9f38; end: 004b9f63;  */

void FUN_004b9f38(void)

{
  func_0x004ba548();
  func_0x004ba608();
  func_0x004ba650();
  return;
}



/* Entry: 004b9f64; end: 004b9f8f;  */

void FUN_004b9f64(void)

{
  func_0x004ba548();
  func_0x004ba608();
  func_0x004ba650();
  return;
}



/* Entry: 004b9f90; end: 004ba063;  */

long FUN_004b9f90(void)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long *plVar5;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puStack_108;
  undefined1 auStack_d8 [16];
  undefined **appuStack_c8 [17];
  undefined8 uStack_40;
  
  func_0x004ba524();
  plVar5 = (long *)(unaff_x19 + 0x68);
  do {
    lVar4 = *plVar5;
    uVar1 = lVar4 == unaff_x19 + 0x60;
    if ((bool)uVar1) {
      FUN_00456f00(auStack_d8);
      lVar4 = (long)*(char *)(unaff_x19 + 0x5f);
      if (lVar4 < 0) {
        lVar3 = *(long *)(unaff_x19 + 0x48);
        lVar4 = *(long *)(unaff_x19 + 0x50);
      }
      else {
        lVar3 = unaff_x19 + 0x48;
      }
      FUN_00648ba8(appuStack_c8,*(undefined8 *)(unaff_x19 + 0x40),lVar3,lVar4);
      appuStack_c8[0] = &PTR_FUN_009ed010;
      uStack_40 = 0;
      func_0x00456f38(auStack_d8);
      __Znwm();
      func_0x004ba5d0();
      func_0x004ba4e8();
      goto LAB_004ba02c;
    }
    plVar5 = (long *)(lVar4 + 8);
  } while (*(long *)(lVar4 + 0x98) != 0);
  uVar1 = unaff_x19 + 0x60 == *plVar5;
  if (!(bool)uVar1) {
    func_0x004ba58c();
  }
LAB_004ba02c:
  func_0x004ba5b0();
  func_0x004ba5f0();
  if ((bool)uVar1) {
    return unaff_x20 + 0x10;
  }
  ___stack_chk_fail();
  puVar2 = auStack_d8;
  FUN_0040d514();
  func_0x004ba63c();
  func_0x004b83f0();
  lVar4 = extraout_x8;
  puStack_108 = puVar2;
  func_0x004ba10c(extraout_x8,&puStack_108);
  return lVar4;
}



/* Entry: 004ba064; end: 004ba0cf;  */

void FUN_004ba064(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_28;
  
  func_0x004b83f0();
  uStack_28 = param_2;
  func_0x004ba10c(param_1,&uStack_28);
  return;
}



/* Entry: 004ba0d0; end: 004ba0d3;  */

undefined8 * FUN_004ba0d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a0cb30;
  FUN_00648d5c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xb);
  __ZNSt3__15mutexD1Ev(param_1 + 3);
  return param_1;
}



/* Entry: 004ba0d4; end: 004ba0e7;  */

void FUN_004ba0d4(void)

{
  FUN_00648d18();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004ba0e8; end: 004ba13b;  */

void FUN_004ba0e8(void)

{
  long unaff_x19;
  
  func_0x004ba5c0();
  *(undefined8 *)(unaff_x19 + 0x88) = 0;
                    /* WARNING: Could not recover jumptable at 0x00779e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_00998bd8)();
  return;
}



/* Entry: 004ba13c; end: 004ba17b;  */

void FUN_004ba13c(undefined8 *param_1)

{
  undefined8 extraout_x8;
  
  func_0x004ba57c();
  *param_1 = extraout_x8;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_004ba17c();
  return;
}



/* Entry: 004ba17c; end: 004ba21b;  */

void FUN_004ba17c(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_40;
  long lStack_38;
  long lStack_30;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (FUN_006490e4(), (int)lVar1 != 0)) {
    FUN_00648c94(*param_1);
    func_0x00645038(&lStack_40);
    if ((char)param_1[4] == '\x01') {
      FUN_004b8084(param_1 + 1,&lStack_40);
    }
    else {
      param_1[2] = lStack_38;
      param_1[1] = lStack_40;
      param_1[3] = lStack_30;
      lStack_38 = 0;
      lStack_30 = 0;
      lStack_40 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    FUN_0040d974(&lStack_40);
    return;
  }
  plVar2 = param_1 + 1;
  if ((char)param_1[4] == '\x01') {
    FUN_0040d974();
    *(undefined1 *)(plVar2 + 3) = 0;
  }
  return;
}


