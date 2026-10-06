/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b90bd88; end: 10b90beab;  */

undefined1 *
FUN_10b90bd88(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  char cStack_d9;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  undefined1 auStack_a8 [88];
  undefined1 uStack_50;
  undefined8 uStack_48;
  long lVar2;
  
  lVar2 = param_2;
  func_0x00010b90fcb8();
  iVar1 = (int)lVar2;
  auStack_a8[0] = 0;
  uStack_50 = 0;
  uStack_48 = extraout_x8;
  func_0x000105c3b044();
  if (iVar1 != 0) {
    param_3 = param_2 + 0x38;
    func_0x00010b8fb56c(auStack_a8);
  }
  uStack_e8 = 0;
  uStack_e0 = 3;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_f0 = param_4;
  func_0x00010b910194(*(undefined8 *)(param_2 + 0x10));
  func_0x00010b910068(param_1);
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    FUN_10b9a3a64(auStack_120,param_4);
    FUN_10b9a360c(auStack_108,auStack_120);
    puVar3 = auStack_108;
    func_0x000107c27e5c();
    puStack_c0 = puVar3;
    lStack_b8 = param_3;
    func_0x000107c2793c(&UNK_10f7ccff2);
    func_0x00010b910140(&uStack_f0);
    in_ZR = cStack_d9 == '\0';
    func_0x00010b9105c0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_f0);
    func_0x00010b91079c();
    FUN_10b9a3d64(auStack_118);
  }
  puVar3 = auStack_a8;
  func_0x0001080e8dd4();
  func_0x00010b90fc10(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    return *(undefined1 **)(puVar3 + 0x18);
  }
  return puVar3;
}



/* Entry: 10b90beac; end: 10b90bec3;  */

undefined8 FUN_10b90beac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b90bec4; end: 10b90bf27;  */

undefined8 * FUN_10b90bec4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110d75120;
  puVar1 = param_1 + 8;
  for (lVar2 = param_1[3]; lVar2 != 0; lVar2 = lVar2 + -1) {
    func_0x00010b8e0a20(puVar1);
    puVar1 = puVar1 + 1;
  }
  func_0x000107c278f4(param_1 + 7);
  func_0x000107c278f4(param_1 + 6);
  func_0x0001090b64f0(param_1 + 5);
  func_0x00010b8e0a20(param_1 + 2);
  return param_1;
}



/* Entry: 10b90bf28; end: 10b90bf2b;  */

undefined8 * FUN_10b90bf28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d751b0;
  FUN_10b90c06c(param_1[3]);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90bf2c; end: 10b90bf3f;  */

void FUN_10b90bf2c(void)

{
  func_0x00010b90c03c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90bf40; end: 10b90bfcf;  */

void FUN_10b90bf40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_38;
  
  func_0x00010b910134(&uStack_38);
  FUN_10b9aab78();
  if ((*(byte *)(param_5 + 8) & 1) == 0) {
    func_0x00010b90fca8(*(undefined8 *)(param_2 + 0x10));
  }
  else {
    uStack_60 = *(undefined1 *)(param_4 + 2);
    uStack_58 = param_4[3];
    uStack_50 = param_4[4];
    uStack_68 = param_4[1];
    uStack_70 = *param_4;
    uStack_48 = 1;
    func_0x00010b910484(param_1,*(undefined8 *)(param_2 + 0x18),&uStack_38,&uStack_70);
  }
  func_0x000104bda3ac(uStack_38);
  return;
}



/* Entry: 10b90bfd0; end: 10b90c06b;  */

void FUN_10b90bfd0(undefined8 param_1,long param_2)

{
  code *extraout_x9;
  undefined8 uStack_28;
  
  func_0x00010b910044(*(undefined8 *)(param_2 + 0x18));
  (*extraout_x9)(&uStack_28);
  FUN_10b9a8ef8(param_1,&uStack_28);
  func_0x000104bda3ac(uStack_28);
  return;
}



/* Entry: 10b90c06c; end: 10b90c093;  */

void FUN_10b90c06c(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90c094; end: 10b90c19b;  */

void FUN_10b90c094(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  undefined1 auStack_a8 [23];
  undefined1 uStack_91;
  long alStack_90 [2];
  undefined1 uStack_79;
  undefined1 auStack_78 [56];
  
  func_0x00010b9104fc();
  FUN_10b90b1bc(auStack_78);
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    func_0x00010b91023c();
    func_0x00010b910528(alStack_90);
    func_0x00010b910470(uStack_79);
    func_0x00010b910588();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_90);
    *param_1 = 0;
  }
  else {
    FUN_10b9080e0(alStack_90,param_2,auStack_78,param_5,param_6);
    if ((*(byte *)(param_6 + 8) & 1) == 0) {
      func_0x00010b91023c();
      func_0x00010b910528(auStack_a8);
      func_0x00010b910470(uStack_91);
      func_0x00010b910588();
      func_0x00010b910098();
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      if (alStack_90[0] != 0) {
        do {
          func_0x00010b90fce8();
          uVar1 = extraout_x8;
        } while (extraout_w11 != 0);
      }
    }
    *param_1 = uVar1;
    func_0x00010b907cc8(alStack_90);
  }
  func_0x00010b9100a0(auStack_78);
  return;
}



/* Entry: 10b90c19c; end: 10b90c19f;  */

undefined8 * FUN_10b90c19c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_110d75218;
  for (lVar2 = *(long *)(param_1[3] + 0x20); lVar2 != 0; lVar2 = lVar2 + -1) {
    func_0x00010b8e0a20(puVar1);
    puVar1 = puVar1 + 1;
  }
  FUN_10b90ccdc(param_1[4]);
  func_0x000107c27928(param_1 + 3);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90c1a0; end: 10b90c1b3;  */

void FUN_10b90c1a0(void)

{
  FUN_10b90c76c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90c1b4; end: 10b90c76b;  */

/* WARNING: Removing unreachable block (ram,0x00010b90c500) */
/* WARNING: Removing unreachable block (ram,0x00010b90c508) */
/* WARNING: Removing unreachable block (ram,0x00010b90c514) */
/* WARNING: Removing unreachable block (ram,0x00010b90c58c) */
/* WARNING: Removing unreachable block (ram,0x00010b90c590) */

ulong * FUN_10b90c1b4(ulong *param_1,long *param_2,undefined2 *param_3,undefined2 *param_4,
                     undefined2 *param_5)

{
  undefined2 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined2 *puVar10;
  ulong *puVar11;
  undefined2 *puVar12;
  long *plVar13;
  uint uVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined4 *puVar18;
  undefined4 *extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 *extraout_x8_06;
  ulong extraout_x8_07;
  code *extraout_x9;
  int extraout_w11;
  int extraout_w11_00;
  ulong *puVar19;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar20;
  long lVar21;
  undefined8 unaff_x23;
  long lVar22;
  long lVar23;
  undefined1 auStack_1b8 [24];
  undefined2 *puStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  ulong *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [24];
  ulong *puStack_148;
  undefined1 auStack_140 [8];
  undefined4 *apuStack_138 [3];
  ulong uStack_120;
  char cStack_118;
  byte bStack_117;
  long in_stack_fffffffffffffef8;
  long lStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  ulong uStack_a0;
  undefined2 uStack_98;
  undefined6 uStack_96;
  undefined2 auStack_90 [16];
  undefined8 auStack_70 [2];
  char in_stack_ffffffffffffffb0;
  
  plVar13 = &lStack_b0;
  puVar12 = param_3;
  puVar15 = param_4;
  func_0x00010b910200();
  func_0x00010b90fcb8();
  uVar4 = *(char *)(param_1[3] + 0x18) == '\x01';
  if ((bool)uVar4) {
    func_0x00010b90ffcc();
    (**(code **)(extraout_x8_00 + 0x1b0))();
    FUN_10b9aad30(&uStack_98,param_2,param_4);
    if ((*(byte *)(param_4 + 4) & 1) == 0) {
      func_0x00010b90fca8(*(undefined8 *)(unaff_x21 + 0x10));
    }
    else {
      __ZNSt3__115recursive_mutex4lockEv(param_1 + 1);
      puVar12 = param_4;
      (**(code **)(*param_1 + 0x20))
                (auStack_70,param_1,*(undefined4 *)(CONCAT62(uStack_96,uStack_98) + 0x18),param_4);
      if ((*(byte *)(param_4 + 4) & 1) == 0) {
        func_0x00010b90fca8(*(undefined8 *)(unaff_x21 + 0x10));
      }
      else {
        uVar4 = in_stack_ffffffffffffffb0 == '\x01';
        if ((bool)uVar4) {
          func_0x0001080e08ac();
        }
        else {
          func_0x00010b9a8f60(&uStack_a8,CONCAT62(uStack_96,uStack_98) + 0x20);
          puVar12 = (undefined2 *)CONCAT71(uStack_a7,uStack_a8);
          puVar15 = (undefined2 *)(uStack_a0 & 0xff);
          FUN_10b90c7d0(auStack_90);
          FUN_10b9a8d98(&uStack_a8);
          if ((*(byte *)(param_4 + 4) & 1) == 0) {
LAB_10b90c3f0:
            func_0x00010b90fca8(*(undefined8 *)(unaff_x21 + 0x10));
          }
          else {
            puVar12 = auStack_90;
            puVar15 = param_4;
            (**(code **)(*param_1 + 0x28))
                      (param_1,*(undefined4 *)(CONCAT62(uStack_96,uStack_98) + 0x18),puVar12);
            if ((*(byte *)(param_4 + 4) & 1) == 0) goto LAB_10b90c3f0;
            puVar12 = param_4;
            (**(code **)(*param_1 + 0x10))(&lStack_b0,param_1,auStack_90,param_4);
            FUN_10b907710(&uStack_a8,&lStack_b0);
            if (lStack_b0 != 0) {
              func_0x00010b90fe14();
            }
            if ((*(byte *)(param_4 + 4) & 1) == 0) {
LAB_10b90c3fc:
              func_0x00010b90fca8(*(undefined8 *)(unaff_x21 + 0x10));
            }
            else {
              lVar23 = CONCAT71(uStack_a7,uStack_a8);
              if (lVar23 == 0) {
                FUN_10b90ca40(&lStack_b0);
                func_0x00010b90ca8c(&uStack_a8,&lStack_b0);
                FUN_10b90cab4(lStack_b0);
                lStack_b0 = 0;
                if (CONCAT71(uStack_a7,uStack_a8) != 0) {
                  do {
                    func_0x00010b90fce8();
                    lStack_b0 = extraout_x8_01;
                  } while (extraout_w11 != 0);
                }
                puVar15 = param_4;
                (**(code **)(*param_1 + 0x18))(param_1,auStack_90,&lStack_b0);
                if (lStack_b0 != 0) {
                  func_0x00010b90fe14();
                }
                uVar4 = *(char *)(param_4 + 4) == '\x01';
                puVar12 = (undefined2 *)plVar13;
                if (!(bool)uVar4) goto LAB_10b90c3fc;
                lVar23 = CONCAT71(uStack_a7,uStack_a8);
              }
              puVar12 = &uStack_98;
              puVar15 = (undefined2 *)0x1;
              FUN_10b9a2c1c(lVar23);
              func_0x0001080e08ac();
            }
            FUN_10b90cab4(CONCAT71(uStack_a7,uStack_a8));
          }
          func_0x0001080e0bc0(auStack_90);
          param_5 = param_3;
        }
      }
      FUN_10b906458(auStack_70);
      __ZNSt3__115recursive_mutex6unlockEv(param_1 + 1);
    }
    param_1 = (ulong *)CONCAT62(uStack_96,uStack_98);
    func_0x000104be7e7c();
    func_0x00010b90fc10(extraout_x8);
    if ((bool)uVar4) {
      return param_1;
    }
  }
  else {
    puVar12 = (undefined2 *)*param_2;
    puVar15 = (undefined2 *)(ulong)*(byte *)(param_2 + 1);
    func_0x00010b90fc10(extraout_x8);
    if ((bool)uVar4) {
      puVar3 = &stack0xffffffffffffff00;
      puVar7 = unaff_x20;
      func_0x00010b90fcb8();
      uVar14 = (uint)puVar15;
      puVar15 = (undefined2 *)0x0;
      if ((uVar14 & 0xff) == 8) {
        puVar15 = puVar12;
      }
      uVar4 = (uVar14 & 0xff) == 0xd;
      if (!(bool)uVar4) {
        puVar12 = (undefined2 *)0x0;
      }
      puVar1 = (undefined2 *)0x0;
      if (!(bool)uVar4) {
        puVar1 = puVar15;
      }
      if (puVar12 == (undefined2 *)0x0 && puVar1 == (undefined2 *)0x0) {
        func_0x00010b90fc10(extraout_x8_05);
        if ((bool)uVar4) {
          uVar16 = 0xd;
          func_0x00010b91020c();
          FUN_10b9aa5f0(&stack0xffffffffffffffc8,uVar16,uVar14 & 0xff);
          func_0x00010b9104f0();
          FUN_10b99ff08();
          func_0x000104bda960(unaff_x23);
          puVar5 = *(ulong **)(unaff_x20 + 0x10);
          func_0x00010b910044(puVar5);
          (*extraout_x9)(unaff_x21);
          return puVar5;
        }
      }
      else {
        lVar21 = *(long *)(*(long *)(unaff_x21 + 0x18) + 0x20);
        lVar23 = lVar21 << 5;
        auStack_70[0] = extraout_x8_05;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        puVar3 = &stack0xffffffffffffff00 + lVar21 * -0x20;
        puVar8 = puVar3;
        if (lVar21 != 0) {
          do {
            func_0x0001080e0180(puVar8);
            lVar23 = lVar23 + -0x20;
            uVar4 = lVar23 == 0;
            puVar8 = puVar8 + 0x20;
          } while (!(bool)uVar4);
        }
        puVar15 = puVar12 + 0xc;
        lVar20 = 0x28;
        lVar23 = 0x28;
        puVar8 = puVar3;
        for (lVar22 = lVar21; lVar22 != 0; lVar22 = lVar22 + -1) {
          lVar9 = *(long *)(unaff_x21 + 0x18) + lVar23;
          uStack_98 = 1;
          uStack_a0 = 0;
          puVar10 = puVar15;
          if (puVar12 == (undefined2 *)0x0) {
            FUN_10b8ec1a0(puVar1 + 8,lVar9);
            func_0x00010b9108e0(*(undefined8 *)(puVar1 + 8));
            if (!(bool)uVar4) {
              puVar10 = (undefined2 *)(lVar9 + 8);
              goto LAB_10b90c910;
            }
          }
          else {
LAB_10b90c910:
            FUN_10b9a9084(&uStack_a0,puVar10);
          }
          lStack_b0 = 0;
          uStack_a8 = 0;
          func_0x00010b910044(*(undefined8 *)(unaff_x21 + lVar20));
          func_0x00010b910484(auStack_90);
          func_0x0001080df8d0(puVar8,auStack_90);
          func_0x00010b9107f0();
          if ((*(byte *)(param_4 + 4) & 1) == 0) {
            func_0x000107c2793c(&UNK_10f7cd045);
            func_0x00010b910528(auStack_90);
            func_0x00010b90a4dc(puVar7);
            func_0x00010b9107e8();
            puVar5 = &uStack_a0;
            FUN_10b9a8d98(puVar5);
            goto LAB_10b90c9f8;
          }
          FUN_10b9a8d98(&uStack_a0);
          puVar15 = puVar15 + 8;
          lVar23 = lVar23 + 0x18;
          lVar20 = lVar20 + 8;
          puVar8 = puVar8 + 0x20;
        }
        puVar5 = *(ulong **)(unaff_x21 + 0x20);
        (**(code **)(*puVar5 + 0x20))(puVar7,puVar5,puVar3,param_4);
LAB_10b90c9f8:
        if (lVar21 != 0) {
          lVar23 = lVar21 * -0x20;
          puVar5 = (ulong *)(puVar3 + lVar21 * 0x20 + -0x20);
          do {
            func_0x0001080e0bc0(puVar5);
            puVar5 = puVar5 + -4;
            lVar23 = lVar23 + 0x20;
            param_4 = (undefined2 *)0x0;
          } while (lVar23 != 0);
        }
        func_0x00010b90fc10(auStack_70[0]);
        unaff_x20 = puVar3;
        if ((bool)uVar4) {
          return puVar5;
        }
      }
      ___stack_chk_fail();
      *(undefined1 **)(puVar3 + -0x20) = unaff_x20;
      *(undefined2 **)(puVar3 + -0x18) = param_4;
      *(undefined1 **)(puVar3 + -0x10) = &stack0xfffffffffffffff0;
      *(code **)(puVar3 + -8) = FUN_10b90ca40;
      puVar5 = (ulong *)0x48;
      __Znwm();
      *puVar5 = (ulong)&PTR_FUN_110d7e8f0;
      puVar5[1] = 1;
      puVar5[2] = (ulong)(puVar5 + 5);
      puVar5[4] = 1;
      puVar5[3] = 0;
      *extraout_x8_06 = puVar5;
      return puVar5;
    }
  }
  ___stack_chk_fail();
  uVar4 = *(char *)(param_1[3] + 0x18) == '\x01';
  if (!(bool)uVar4) {
    puVar11 = param_1;
    func_0x00010b90fcb8();
    puVar19 = puVar11 + 3;
    lVar20 = *(long *)(*puVar19 + 0x20);
    uStack_120 = extraout_x8_07;
    FUN_10b9acd90(&puStack_148,puVar19);
    lVar23 = 0;
    puVar5 = puStack_148 + 3;
    lVar21 = 0x28;
    puVar6 = puVar19;
    while( true ) {
      uVar4 = lVar20 == lVar23;
      if ((bool)uVar4) {
        func_0x00010b9a8f60(extraout_x8_02,&puStack_148);
        goto LAB_10b90cc34;
      }
      puVar6 = (ulong *)(param_1[3] + lVar21);
      func_0x00010b910044(param_1[4]);
      func_0x00010b9101f8(auStack_140);
      if ((*(byte *)(param_5 + 4) & 1) == 0) break;
      uStack_198 = 0;
      uStack_190 = 2;
      uStack_180 = 0;
      uStack_178 = 0;
      puStack_1a0 = puVar15;
      puStack_188 = puVar6;
      func_0x00010b910194(puVar11[lVar23 + 5],0);
      func_0x00010b910468(auStack_170);
      bVar2 = *(byte *)(param_5 + 4);
      if ((bVar2 & 1) == 0) {
        func_0x00010b90cc94(auStack_1b8,*puVar19,puVar6);
        func_0x00010b910890();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
      }
      else {
        FUN_10b9a9084(puVar5,auStack_170);
      }
      FUN_10b9a8d98(auStack_170);
      func_0x00010b9107f0();
      lVar23 = lVar23 + 1;
      puVar5 = puVar5 + 2;
      lVar21 = lVar21 + 0x18;
      if ((bVar2 & 1) == 0) {
LAB_10b90cc34:
        func_0x000104bdbfa0(puStack_148);
        func_0x00010b90fc10(uStack_120);
        if (!(bool)uVar4) {
          ___stack_chk_fail();
          func_0x00010b910720();
          if (!(bool)uVar4) {
            func_0x00010b91035c();
            func_0x000104be7e7c();
          }
          return puVar6;
        }
        return puStack_148;
      }
    }
    func_0x00010b90cc94(auStack_160,*puVar19,puVar6);
    func_0x00010b910890();
    func_0x00010b910264();
    func_0x00010b9107f0();
    goto LAB_10b90cc34;
  }
  puVar5 = param_1;
  func_0x00010b9106d8();
  (**(code **)(extraout_x8_03 + 0x1b0))();
  __ZNSt3__115recursive_mutex4lockEv(puVar5 + 1);
  (**(code **)(*puVar5 + 0x10))(apuStack_138,puVar5,puVar12,param_5);
  FUN_10b907710(&stack0xfffffffffffffef8,apuStack_138);
  puVar18 = apuStack_138[0];
  if (apuStack_138[0] != (undefined4 *)0x0) {
    func_0x00010b90fe14();
  }
  if ((*(byte *)(param_5 + 4) & 1) == 0) {
    func_0x00010b910184();
    if ((bool)uVar4) {
      func_0x00010b90fcc8();
      *puVar18 = 0xffffffff;
    }
    func_0x00010b9108ec();
    goto LAB_10b90c744;
  }
  if (in_stack_fffffffffffffef8 == 0) {
    FUN_10b90ca40(apuStack_138);
    func_0x00010b90ca8c(&stack0xfffffffffffffef8,apuStack_138);
    FUN_10b90cab4(apuStack_138[0]);
    apuStack_138[0] = (undefined4 *)0x0;
    (**(code **)(*puVar5 + 0x18))(puVar5,puVar12,apuStack_138,param_5);
    puVar18 = apuStack_138[0];
    if (apuStack_138[0] != (undefined4 *)0x0) {
      func_0x00010b90fe14();
    }
    if ((*(byte *)(param_5 + 4) & 1) != 0) goto LAB_10b90c5cc;
    func_0x00010b910184();
    if ((bool)uVar4) {
      func_0x00010b90fcc8();
      *puVar18 = 0xfffffffe;
    }
    func_0x00010b9108ec();
  }
  else {
    FUN_10b9a2be4(apuStack_138,in_stack_fffffffffffffef8,param_1);
    func_0x00010b91084c();
    func_0x000104be7e7c();
LAB_10b90c5cc:
    puVar6 = &uStack_120;
    FUN_10b90cadc(puVar6,param_1,puVar12,puVar12,puVar15,param_5);
    if ((*(byte *)(param_5 + 4) & 1) == 0) {
      func_0x00010b910184();
      if ((bool)uVar4) {
        func_0x00010b90fcc8();
        uVar17 = 0xfffffffd;
LAB_10b90c6c0:
        *(undefined4 *)puVar6 = uVar17;
      }
LAB_10b90c6c4:
      func_0x00010b9108ec();
    }
    else {
      puVar18 = (undefined4 *)0x0;
      uVar4 = cStack_118 == '\r';
      if ((((bool)uVar4) && ((bStack_117 & 1) != 0)) &&
         (puVar18 = (undefined4 *)0x0, uStack_120 != 0)) {
        do {
          func_0x00010b90fce8();
          puVar18 = extraout_x8_04;
        } while (extraout_w11_00 != 0);
      }
      func_0x00010b910194();
      func_0x00010b9107d8(apuStack_138);
      func_0x00010b91084c();
      func_0x000104be7e7c(apuStack_138[0]);
      func_0x000104bdbfa0();
      if ((*(byte *)(param_5 + 4) & 1) == 0) {
        func_0x00010b910184();
        if ((bool)uVar4) {
          func_0x00010b90fcc8();
          *puVar18 = 0xfffffffc;
        }
        func_0x00010b910450(param_1[3]);
        func_0x000107c2793c(&UNK_10f7cd076);
        func_0x00010b910288(apuStack_138);
        func_0x00010b90a524(extraout_x8_02,param_5,apuStack_138);
        func_0x00010b910098();
      }
      else {
        FUN_10b9a2c1c(in_stack_fffffffffffffef8,param_1,&stack0xfffffffffffffef0,0);
        puVar6 = puVar5;
        (**(code **)(*puVar5 + 0x28))(puVar5,uRam0000000000000018,puVar12,param_5);
        if ((*(byte *)(param_5 + 4) & 1) == 0) {
          if (cRam00000001133fad7d != '\0') {
            func_0x00010b90fcc8();
            uVar17 = 0xfffffffb;
            goto LAB_10b90c6c0;
          }
          goto LAB_10b90c6c4;
        }
        if (cRam00000001133fad7d != '\0') {
          func_0x00010b90fcc8();
          *(undefined4 *)puVar6 = 2;
        }
        func_0x00010b9107ac();
      }
    }
    FUN_10b9a8d98(&uStack_120);
  }
  func_0x000104be7e7c(0);
LAB_10b90c744:
  FUN_10b90cab4(in_stack_fffffffffffffef8);
  puVar5 = puVar5 + 1;
  __ZNSt3__115recursive_mutex6unlockEv(puVar5);
  return puVar5;
}



/* Entry: 10b90c76c; end: 10b90c7cf;  */

undefined8 * FUN_10b90c76c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 5;
  *param_1 = &PTR_FUN_110d75218;
  for (lVar2 = *(long *)(param_1[3] + 0x20); lVar2 != 0; lVar2 = lVar2 + -1) {
    func_0x00010b8e0a20(puVar1);
    puVar1 = puVar1 + 1;
  }
  FUN_10b90ccdc(param_1[4]);
  func_0x000107c27928(param_1 + 3);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90c7d0; end: 10b90ca3f;  */

void FUN_10b90c7d0(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5,
                  undefined8 ****param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *****pppppuVar4;
  undefined1 uVar5;
  undefined8 *****pppppuVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  code *extraout_x9;
  undefined8 *****unaff_x20;
  undefined8 unaff_x21;
  long lVar10;
  undefined8 unaff_x23;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 ****appppuStack_100 [3];
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined2 uStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  
  pppppuVar4 = appppuStack_100;
  lStack_e0 = param_5;
  func_0x00010b90fcb8();
  lVar12 = 0;
  if ((param_4 & 0xff) == 8) {
    lVar12 = param_3;
  }
  uVar5 = (param_4 & 0xff) == 0xd;
  if (!(bool)uVar5) {
    param_3 = 0;
  }
  lVar3 = 0;
  if (!(bool)uVar5) {
    lVar3 = lVar12;
  }
  lStack_d8 = param_3;
  if (param_3 == 0 && lVar3 == 0) {
    func_0x00010b90fc10(extraout_x8);
    if ((bool)uVar5) {
      uVar9 = 0xd;
      func_0x00010b91020c();
      FUN_10b9aa5f0(&stack0xffffffffffffffc8,uVar9,param_4 & 0xff);
      func_0x00010b9104f0();
      FUN_10b99ff08();
      func_0x000104bda960(unaff_x23);
      func_0x00010b910044(unaff_x20[2]);
      (*extraout_x9)(unaff_x21);
      return;
    }
  }
  else {
    lVar11 = *(long *)(*(long *)(param_2 + 0x18) + 0x20);
    lVar12 = lVar11 << 5;
    appppuStack_100[0] = appppuStack_100;
    appppuStack_100[2] = (undefined8 ****)param_1;
    uStack_70 = extraout_x8;
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    pppppuVar4 = appppuStack_100 + lVar11 * -4;
    pppppuVar6 = pppppuVar4;
    if (lVar11 != 0) {
      do {
        func_0x0001080e0180(pppppuVar6);
        lVar12 = lVar12 + -0x20;
        uVar5 = lVar12 == 0;
        pppppuVar6 = pppppuVar6 + 4;
      } while (!(bool)uVar5);
    }
    puVar1 = (undefined *)(lStack_d8 + 0x18);
    lVar10 = 0x28;
    lVar12 = 0x28;
    lStack_e8 = lVar11;
    pppppuVar6 = pppppuVar4;
    unaff_x20 = pppppuVar4;
    for (; appppuStack_100[1] = unaff_x20, lVar11 != 0; lVar11 = lVar11 + -1) {
      lVar13 = *(long *)(param_2 + 0x18);
      puVar2 = (undefined *)(lVar13 + lVar12);
      uStack_98 = 1;
      uStack_a0 = 0;
      puVar8 = puVar1;
      if (lStack_d8 == 0) {
        puVar8 = puVar2;
        FUN_10b8ec1a0(lVar3 + 0x10,puVar2);
        func_0x00010b9108e0(*(undefined8 *)(lVar3 + 0x10));
        if (!(bool)uVar5) {
          puVar8 = puVar8 + 8;
          goto LAB_10b90c910;
        }
      }
      else {
LAB_10b90c910:
        FUN_10b9a9084(&uStack_a0,puVar8);
      }
      lStack_d0 = lStack_e0;
      puStack_c8 = (undefined *)0x0;
      lStack_c0 = CONCAT71(lStack_c0._1_7_,2);
      uStack_b0 = 0;
      uStack_a8 = 0;
      puStack_b8 = puVar2;
      func_0x00010b910044(*(undefined8 *)(param_2 + lVar10));
      func_0x00010b910484(auStack_90);
      func_0x0001080df8d0(pppppuVar6,auStack_90);
      func_0x00010b9107f0();
      if (((ulong)param_6[1] & 1) == 0) {
        lStack_c0 = *(long *)(param_2 + 0x18) + 0x10;
        lStack_d0 = lVar12 + lVar13;
        puStack_c8 = &UNK_1003ab990;
        puStack_b8 = &UNK_1003ab990;
        func_0x000107c2793c(&UNK_10f7cd045);
        func_0x00010b910528(auStack_90);
        func_0x00010b90a4dc(appppuStack_100[2],param_2,param_6,auStack_90);
        func_0x00010b9107e8();
        FUN_10b9a8d98(&uStack_a0);
        unaff_x20 = (undefined8 *****)appppuStack_100[1];
        goto LAB_10b90c9f8;
      }
      FUN_10b9a8d98(&uStack_a0);
      puVar1 = puVar1 + 0x10;
      lVar12 = lVar12 + 0x18;
      lVar10 = lVar10 + 8;
      pppppuVar6 = pppppuVar6 + 4;
      unaff_x20 = (undefined8 *****)appppuStack_100[1];
    }
    (**(code **)(**(long **)(param_2 + 0x20) + 0x20))
              (appppuStack_100[2],*(long **)(param_2 + 0x20),unaff_x20,param_6);
LAB_10b90c9f8:
    if (lStack_e8 != 0) {
      lVar12 = lStack_e8 * -0x20;
      pppppuVar6 = unaff_x20 + lStack_e8 * 4;
      do {
        pppppuVar6 = pppppuVar6 + -4;
        func_0x0001080e0bc0(pppppuVar6);
        lVar12 = lVar12 + 0x20;
        param_6 = (undefined8 ****)0x0;
      } while (lVar12 != 0);
    }
    func_0x00010b90fc10(uStack_70);
    if ((bool)uVar5) {
      return;
    }
  }
  ___stack_chk_fail();
  pppppuVar4[-4] = unaff_x20;
  pppppuVar4[-3] = param_6;
  pppppuVar4[-2] = (undefined8 ****)&stack0xfffffffffffffff0;
  pppppuVar4[-1] = (undefined8 ****)FUN_10b90ca40;
  puVar7 = (undefined8 *)0x48;
  __Znwm();
  *puVar7 = &PTR_FUN_110d7e8f0;
  puVar7[1] = 1;
  puVar7[2] = puVar7 + 5;
  puVar7[4] = 1;
  puVar7[3] = 0;
  *extraout_x8_00 = puVar7;
  return;
}



/* Entry: 10b90ca40; end: 10b90cab3;  */

void FUN_10b90ca40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x48;
  __Znwm();
  *puVar1 = &PTR_FUN_110d7e8f0;
  puVar1[1] = 1;
  puVar1[2] = puVar1 + 5;
  puVar1[4] = 1;
  puVar1[3] = 0;
  *param_1 = puVar1;
  return;
}



/* Entry: 10b90cab4; end: 10b90cadb;  */

void FUN_10b90cab4(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90cadc; end: 10b90cc6b;  */

long * FUN_10b90cadc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 extraout_x8;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [24];
  long *plStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  
  lVar3 = param_2;
  func_0x00010b90fcb8();
  plVar4 = (long *)(lVar3 + 0x18);
  lVar6 = *(long *)(*plVar4 + 0x20);
  uStack_70 = extraout_x8;
  FUN_10b9acd90(&plStack_98,plVar4);
  lVar8 = 0;
  plVar9 = plStack_98 + 3;
  lVar7 = 0x28;
  plVar5 = plVar4;
  while( true ) {
    uVar2 = lVar6 == lVar8;
    if ((bool)uVar2) {
      func_0x00010b9a8f60(param_1,&plStack_98);
      goto LAB_10b90cc34;
    }
    plVar5 = (long *)(*(long *)(param_2 + 0x18) + lVar7);
    func_0x00010b910044(*(undefined8 *)(param_2 + 0x20));
    func_0x00010b9101f8(auStack_90);
    if ((*(byte *)(param_6 + 8) & 1) == 0) break;
    uStack_e8 = 0;
    uStack_e0 = 2;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_f0 = param_5;
    plStack_d8 = plVar5;
    func_0x00010b910194(*(undefined8 *)(lVar3 + 0x28 + lVar8 * 8),param_3);
    func_0x00010b910468(auStack_c0);
    bVar1 = *(byte *)(param_6 + 8);
    if ((bVar1 & 1) == 0) {
      func_0x00010b90cc94(auStack_108,*plVar4,plVar5);
      func_0x00010b910890();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    }
    else {
      FUN_10b9a9084(plVar9,auStack_c0);
    }
    FUN_10b9a8d98(auStack_c0);
    func_0x00010b9107f0();
    lVar8 = lVar8 + 1;
    plVar9 = plVar9 + 2;
    lVar7 = lVar7 + 0x18;
    if ((bVar1 & 1) == 0) {
LAB_10b90cc34:
      func_0x000104bdbfa0(plStack_98);
      func_0x00010b90fc10(uStack_70);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        func_0x00010b910720();
        if (!(bool)uVar2) {
          func_0x00010b91035c();
          func_0x000104be7e7c();
        }
        return plVar5;
      }
      return plStack_98;
    }
  }
  func_0x00010b90cc94(auStack_b0,*plVar4,plVar5);
  func_0x00010b910890();
  func_0x00010b910264();
  func_0x00010b9107f0();
  goto LAB_10b90cc34;
}



/* Entry: 10b90cc6c; end: 10b90ccdb;  */

void FUN_10b90cc6c(void)

{
  undefined1 in_ZR;
  
  func_0x00010b910720();
  if (!(bool)in_ZR) {
    func_0x00010b91035c();
    func_0x000104be7e7c();
  }
  return;
}



/* Entry: 10b90ccdc; end: 10b90cd07;  */

void FUN_10b90ccdc(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90cd08; end: 10b90cd1b;  */

void FUN_10b90cd08(void)

{
  FUN_10b90cdb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90cd1c; end: 10b90cd73;  */

long * FUN_10b90cd1c(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if ((plVar1 == (long *)0x0) || ((**(code **)(*plVar1 + 0x20))(), ((ulong)plVar1 & 1) == 0)) {
    plVar2 = *(long **)(param_1 + 0x20);
    plVar1 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b90cd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x20))();
      return plVar2;
    }
  }
  else {
    plVar1 = (long *)0x1;
  }
  return plVar1;
}



/* Entry: 10b90cd74; end: 10b90cdb3;  */

void FUN_10b90cd74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b9107c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
  return;
}



/* Entry: 10b90cdb4; end: 10b90cddf;  */

undefined8 * FUN_10b90cdb4(undefined8 *param_1)

{
  func_0x00010b9100fc(&PTR_DAT_110d75280);
  func_0x00010b910824();
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90cde0; end: 10b90cde3;  */

undefined8 * FUN_10b90cde0(undefined8 *param_1)

{
  func_0x00010b9105d8(&PTR_FUN_110d752e8);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90cde4; end: 10b90cdf7;  */

void FUN_10b90cde4(void)

{
  FUN_10b90d120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90cdf8; end: 10b90d11f;  */

undefined8 *
FUN_10b90cdf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  code *extraout_x9;
  code *extraout_x10;
  long unaff_x21;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x30;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined1 in_stack_00000028;
  undefined8 *in_stack_00000048;
  long in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_000000a8;
  undefined1 auStack_138 [24];
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined1 auStack_b8 [32];
  undefined8 auStack_98 [4];
  undefined8 *puStack_78;
  undefined8 uStack_70;
  
  func_0x00010b910948();
  puVar3 = param_4;
  func_0x00010b910200();
  func_0x00010b90fcb8();
  in_stack_000000a8 = extraout_x8;
  func_0x00010b910134(&stack0x00000048);
  FUN_10b9aab20();
  if ((*(byte *)(param_4 + 1) & 1) == 0) {
    func_0x00010b90fca8(*(undefined8 *)(unaff_x21 + 0x10));
  }
  else {
    lVar4 = in_stack_00000048[2];
    func_0x00010b90ffcc();
    (**(code **)(extraout_x8_00 + 0xe0))(&stack0x00000088);
    func_0x00010b9108f8();
    if ((bool)in_ZR) {
      for (lVar5 = 0; in_ZR = lVar4 == lVar5, !(bool)in_ZR; lVar5 = lVar5 + 1) {
        in_stack_00000008 = 0;
        in_stack_00000010 = 5;
        in_stack_00000018 = 0;
        in_stack_00000028 = 0;
        in_stack_00000000 = param_3;
        in_stack_00000020 = lVar5;
        func_0x00010b9106c0(*(undefined8 *)(unaff_x21 + 0x18));
        (*extraout_x10)(&stack0x00000068);
        func_0x00010b9108f8();
        if (!(bool)in_ZR) {
LAB_10b90cf10:
          in_stack_00000058 = 0;
          in_stack_00000050 = lVar5;
          func_0x000107c2793c(&UNK_10f7cd138);
          func_0x000107c3173c();
          puVar3 = (undefined8 *)register0x00000008;
          func_0x00010b90fe7c();
          func_0x00010b9103cc();
          func_0x0001080e0bc0(&stack0x00000068);
          goto LAB_10b90cf5c;
        }
        func_0x00010b90ffcc();
        puVar3 = (undefined8 *)&stack0x00000068;
        unaff_x30 = param_4;
        (**(code **)(extraout_x8_01 + 0xe8))();
        func_0x00010b9108f8();
        if (!(bool)in_ZR) goto LAB_10b90cf10;
        func_0x0001080e0bc0(&stack0x00000068);
      }
      func_0x00010b90ffcc();
      func_0x00010b9104e4();
      (*extraout_x9)();
    }
    else {
      func_0x0001080e3e74(&stack0x00000030,&UNK_10f7cd11c);
      puVar3 = (undefined8 *)&stack0x00000030;
      func_0x00010b90fe7c();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&stack0x00000030);
    }
LAB_10b90cf5c:
    func_0x00010b9107f8();
  }
  puVar2 = in_stack_00000048;
  func_0x000104bddf60();
  func_0x00010b90fc10(in_stack_000000a8);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar6 = puVar2;
  func_0x00010b90fc50();
  uStack_70 = extraout_x8_02;
  (**(code **)(*(long *)puVar6[2] + 0xf8))(auStack_98);
  if ((*(byte *)(unaff_x30 + 1) & 1) == 0) {
    *(undefined2 *)(param_4 + 1) = 0;
    *param_4 = 0;
  }
  else {
    func_0x00010b9abe10(&lStack_c0,puStack_78);
    lVar4 = lStack_c0 + 0x18;
    for (puVar6 = (undefined8 *)0x0; in_ZR = puStack_78 == puVar6, !(bool)in_ZR;
        puVar6 = (undefined8 *)((long)puVar6 + 1)) {
      func_0x00010b910904();
      func_0x00010b9101f8(auStack_b8);
      if ((*(byte *)(unaff_x30 + 1) & 1) == 0) {
        uStack_118 = 0;
        puStack_120 = puVar6;
        func_0x000107c2793c(&UNK_10f7cd15e);
        func_0x00010b910790(auStack_d8);
        func_0x00010b90ffc0();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
        func_0x0001080e0bc0(auStack_b8);
        goto LAB_10b90d0f8;
      }
      uStack_118 = 0;
      uStack_110 = 5;
      uStack_108 = 0;
      uStack_f8 = 0;
      puStack_120 = puVar3;
      puStack_100 = puVar6;
      func_0x00010b910194(puVar2[3]);
      func_0x00010b91032c(auStack_e8);
      bVar1 = *(byte *)(unaff_x30 + 1);
      if ((bVar1 & 1) == 0) {
        uStack_118 = 0;
        puStack_120 = puVar6;
        func_0x000107c2793c(&UNK_10f7cd15e);
        func_0x00010b910790(auStack_138);
        func_0x00010b90ffc0();
        func_0x00010b910098();
      }
      else {
        FUN_10b9a9020(lVar4,auStack_e8);
      }
      FUN_10b9a8d98(auStack_e8);
      func_0x0001080e0bc0(auStack_b8);
      if (bVar1 == 0) goto LAB_10b90d0f8;
      lVar4 = lVar4 + 0x10;
    }
    func_0x00010b9a8f84(param_4,&lStack_c0);
LAB_10b90d0f8:
    func_0x000104bddf60(lStack_c0);
  }
  puVar3 = auStack_98;
  func_0x0001080e0bc0();
  func_0x00010b90fc10(uStack_70);
  if ((bool)in_ZR) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b9105d8(&PTR_FUN_110d752e8);
  *puVar3 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(puVar3 + 2);
  return puVar3;
}



/* Entry: 10b90d120; end: 10b90d147;  */

undefined8 * FUN_10b90d120(undefined8 *param_1)

{
  func_0x00010b9105d8(&PTR_FUN_110d752e8);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90d148; end: 10b90d14b;  */

undefined8 * FUN_10b90d148(undefined8 *param_1)

{
  func_0x00010b9100fc(&PTR_FUN_110d75350);
  func_0x00010b910824();
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90d14c; end: 10b90d15f;  */

void FUN_10b90d14c(void)

{
  FUN_10b90d438();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90d160; end: 10b90d333;  */

void FUN_10b90d160(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  undefined1 *param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  long lVar7;
  long unaff_x21;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined1 auStack_1c0 [24];
  undefined **ppuStack_1a8;
  long lStack_1a0;
  undefined1 *puStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined1 auStack_178 [24];
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_120 [16];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  puVar5 = param_4;
  func_0x00010b9106cc();
  func_0x00010b90fc50();
  uStack_68 = extraout_x8;
  func_0x00010b910134(&lStack_d0);
  FUN_10b9aabd0();
  if ((param_4[8] & 1) == 0) {
    func_0x00010b90fdd0();
  }
  else {
    lVar4 = *(long *)(lStack_d0 + 0x20);
    func_0x00010b90ffcc();
    param_3 = param_4;
    (**(code **)(extraout_x8_00 + 0xa0))(auStack_88);
    lVar2 = lStack_d0;
    if ((param_4[8] & 1) == 0) {
      func_0x00010b90fe3c();
      FUN_10b90d464();
    }
    else {
      lVar1 = lStack_d0 + 0x10;
      func_0x00010527d444();
      lVar6 = *(long *)(lVar2 + 0x10);
      lVar7 = *(long *)(lVar2 + 0x28);
      unaff_x23 = lVar2;
      lStack_e0 = lVar1;
      lStack_d8 = lVar4;
      while (lVar2 = lStack_d8, in_ZR = lStack_e0 == lVar6 + lVar7, !(bool)in_ZR) {
        unaff_x24 = *(undefined8 *)(unaff_x21 + 0x18);
        FUN_10b9a8e18(auStack_c8,lStack_d8);
        param_3 = &stack0xfffffffffffffef0;
        func_0x00010b9101f8(auStack_a8,unaff_x24,auStack_c8,param_3);
        FUN_10b9a8d98(auStack_c8);
        unaff_x23 = lVar2;
        if ((param_4[8] & 1) == 0) {
          func_0x00010b90fe3c();
          FUN_10b90d464();
LAB_10b90d2f4:
          func_0x00010b910568();
          goto LAB_10b90d2f8;
        }
        unaff_x24 = *(undefined8 *)(unaff_x21 + 0x20);
        FUN_10b9a8f04(auStack_120,lVar2 + 8);
        param_3 = &stack0xfffffffffffffef0;
        func_0x00010b9101f8(auStack_c8,unaff_x24,auStack_120,param_3);
        func_0x00010b9102b4();
        func_0x00010b9104d8();
        if (!(bool)in_ZR) {
LAB_10b90d2cc:
          func_0x00010b90fe3c();
          FUN_10b90d464();
          func_0x0001080e0bc0(auStack_c8);
          goto LAB_10b90d2f4;
        }
        func_0x00010b90ffcc();
        param_3 = auStack_a8;
        puVar5 = auStack_c8;
        param_5 = param_4;
        (**(code **)(extraout_x8_01 + 0xa8))();
        func_0x00010b9104d8();
        if (!(bool)in_ZR) goto LAB_10b90d2cc;
        func_0x0001080e0bc0(auStack_c8);
        func_0x00010b910568();
        func_0x00010527d4cc(&lStack_e0);
      }
      func_0x00010b9104b4();
    }
LAB_10b90d2f8:
    func_0x00010b9107f8();
  }
  func_0x000104bd4e64();
  func_0x00010b90fc10(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  lVar2 = lStack_d0;
  ___stack_chk_fail();
  plVar3 = *(long **)(lVar2 + 0x10);
  uStack_160 = unaff_x24;
  lStack_158 = unaff_x23;
  func_0x00010b910800(*(undefined8 *)(*plVar3 + 0xb0),plVar3,param_3);
  if ((param_5[8] & 1) == 0) {
    func_0x0001080e3e74(auStack_178,&UNK_10f7cd1dd);
    func_0x00010b9100a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
  }
  else {
    func_0x000104bd4df4(&lStack_180);
    FUN_10b90d498(lStack_180 + 0x10,plVar3);
    lStack_190 = lVar2 + 0x18;
    lStack_188 = lVar2 + 0x20;
    ppuStack_1a8 = &PTR_DAT_110d753b8;
    lStack_1a0 = lStack_180;
    puStack_198 = puVar5;
    func_0x00010b9106d8();
    (**(code **)(extraout_x8_03 + 0xb8))();
    if ((param_5[8] & 1) == 0) {
      func_0x0001080e3e74(auStack_1c0,&UNK_10f7cd1dd);
      func_0x00010b9100a8();
      func_0x00010b9103cc();
    }
    else {
      FUN_10b9a8f54(extraout_x8_02,&lStack_180);
    }
    func_0x000104bd4e64(lStack_180);
  }
  return;
}



/* Entry: 10b90d334; end: 10b90d437;  */

void FUN_10b90d334(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long extraout_x8;
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  plVar1 = *(long **)(param_2 + 0x10);
  func_0x00010b910800(*(undefined8 *)(*plVar1 + 0xb0),plVar1,param_4);
  if ((*(byte *)(param_6 + 8) & 1) == 0) {
    func_0x0001080e3e74(auStack_58,&UNK_10f7cd1dd);
    func_0x00010b9100a8();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_58);
  }
  else {
    func_0x000104bd4df4(&lStack_60);
    FUN_10b90d498(lStack_60 + 0x10,plVar1);
    lStack_70 = param_2 + 0x18;
    lStack_68 = param_2 + 0x20;
    ppuStack_88 = &PTR_DAT_110d753b8;
    lStack_80 = lStack_60;
    uStack_78 = param_5;
    func_0x00010b9106d8();
    (**(code **)(extraout_x8 + 0xb8))();
    if ((*(byte *)(param_6 + 8) & 1) == 0) {
      func_0x0001080e3e74(auStack_a0,&UNK_10f7cd1dd);
      func_0x00010b9100a8();
      func_0x00010b9103cc();
    }
    else {
      FUN_10b9a8f54(param_1,&lStack_60);
    }
    func_0x000104bd4e64(lStack_60);
  }
  return;
}



/* Entry: 10b90d438; end: 10b90d463;  */

undefined8 * FUN_10b90d438(undefined8 *param_1)

{
  func_0x00010b9100fc(&PTR_FUN_110d75350);
  func_0x00010b910824();
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90d464; end: 10b90d497;  */

void FUN_10b90d464(undefined8 param_1)

{
  func_0x00010b91020c();
  func_0x00010b910290(param_1,&UNK_10f7cd1c3);
  func_0x00010b90ff64();
  func_0x00010b910098();
  return;
}



/* Entry: 10b90d498; end: 10b90d4c3;  */

void FUN_10b90d498(long *param_1,long param_2)

{
  ulong uVar1;
  long **pplVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plStack_58;
  
  if (param_2 == 7) {
    uVar4 = 8;
  }
  else {
    uVar4 = (param_2 + -1) / 7 + param_2;
  }
  if (uVar4 == 0) {
    if (param_1[3] == 0) {
      return;
    }
    uVar5 = param_1[2];
    if (uVar5 == 0) {
      lVar9 = param_1[3];
      if (lVar9 != 0) {
        lVar6 = 0;
        for (lVar7 = 0; lVar7 != lVar9; lVar7 = lVar7 + 1) {
          if (-1 < *(char *)(*param_1 + lVar7)) {
            func_0x000104bda318(param_1[1] + lVar6);
            lVar9 = param_1[3];
          }
          lVar6 = lVar6 + 0x18;
        }
        __ZdlPv();
        param_1[5] = 0;
        *param_1 = (long)&UNK_10dd5b8b0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
      }
      return;
    }
  }
  else {
    uVar5 = param_1[2];
  }
  uVar1 = uVar4;
  if (uVar4 <= uVar5) {
    uVar1 = uVar5;
  }
  uVar5 = 0xffffffffffffffff >> (LZCOUNT(uVar1) & 0x3fU);
  if (uVar1 == 0) {
    uVar5 = 1;
  }
  if ((uVar4 != 0) && (uVar5 <= (ulong)param_1[3])) {
    return;
  }
  lVar6 = *param_1;
  lVar7 = param_1[1];
  lVar8 = param_1[3];
  func_0x000104bda1ec();
  param_1[3] = uVar5;
  for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 1) {
    if (-1 < *(char *)(lVar6 + lVar9)) {
      pplVar2 = &plStack_58;
      plStack_58 = param_1 + 5;
      func_0x000104bda2a0(pplVar2,lVar7);
      plVar3 = param_1;
      func_0x000104bd9ed8(param_1,pplVar2);
      *(byte *)(*param_1 + (long)plVar3) = (byte)pplVar2 & 0x7f;
      func_0x000104bdb6a8();
      func_0x000104bda2c0(param_1 + 5,param_1[1] + (long)plVar3 * 0x18,lVar7);
    }
    lVar7 = lVar7 + 0x18;
  }
  if (lVar8 != 0) {
    __ZdlPv(lVar6);
  }
  return;
}



/* Entry: 10b90d4c4; end: 10b90d53f;  */

undefined8 FUN_10b90d4c4(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  uVar1 = **(undefined8 **)(param_1 + 0x18);
  func_0x00010b910194(uVar1,param_2,param_2,*(undefined8 *)(param_1 + 0x10));
  func_0x00010b91025c(auStack_40);
  func_0x00010b9108f8();
  if ((bool)in_ZR) {
    func_0x00010b9108a4();
    func_0x00010b9106e4();
    FUN_10b90d544();
    func_0x00010b910428();
  }
  else {
    uVar1 = 0;
  }
  FUN_10b9a8d98(auStack_40);
  return uVar1;
}



/* Entry: 10b90d540; end: 10b90d543;  */

char FUN_10b90d540(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x00010b9102e0();
  func_0x00010b9100b4(*(undefined8 *)(unaff_x20 + 0x10),**(undefined8 **)(param_1 + 0x20));
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    func_0x0001080ee31c(*(long *)(unaff_x20 + 8) + 0x10);
    FUN_10b9a9084();
  }
  FUN_10b9a8d98(auStack_40);
  return cVar1;
}



/* Entry: 10b90d544; end: 10b90d5a7;  */

char FUN_10b90d544(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x00010b9102e0();
  func_0x00010b9100b4(*(undefined8 *)(unaff_x20 + 0x10),**(undefined8 **)(param_1 + 0x20));
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    func_0x0001080ee31c(*(long *)(unaff_x20 + 8) + 0x10);
    FUN_10b9a9084();
  }
  FUN_10b9a8d98(auStack_40);
  return cVar1;
}



/* Entry: 10b90d5a8; end: 10b90d5ab;  */

undefined8 * FUN_10b90d5a8(undefined8 *param_1)

{
  func_0x00010b9100fc(&PTR_FUN_110d75410);
  func_0x00010b910824();
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90d5ac; end: 10b90d5bf;  */

void FUN_10b90d5ac(void)

{
  FUN_10b90d840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90d5c0; end: 10b90d78b;  */

void FUN_10b90d5c0(void)

{
  ulong uVar1;
  long lVar2;
  undefined1 in_ZR;
  long in_x3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long unaff_x21;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lStack_188;
  long lStack_110;
  undefined8 auStack_108 [4];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  func_0x00010b9106cc();
  func_0x00010b90fc50();
  uStack_68 = extraout_x8;
  func_0x00010b910134(&lStack_110);
  func_0x00010b90d86c();
  if ((*(byte *)(in_x3 + 8) & 1) == 0) {
    func_0x00010b90fdd0();
  }
  else {
    func_0x00010b90ffcc();
    (**(code **)(extraout_x8_00 + 0xc0))(auStack_88);
    lVar2 = lStack_110;
    if ((*(byte *)(in_x3 + 8) & 1) == 0) {
      func_0x00010b90fe3c();
      FUN_10b90d8b4();
    }
    else {
      uVar5 = 0;
      while( true ) {
        uVar1 = *(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18) >> 4;
        in_ZR = uVar5 == uVar1;
        if (uVar1 <= uVar5) break;
        FUN_10b9a9358(auStack_108,*(long *)(lVar2 + 0x18) + uVar5 * 0x10);
        func_0x000107c278f8(auStack_108[0]);
        func_0x00010b910044(*(undefined8 *)(unaff_x21 + 0x18),*(long *)(lVar2 + 0x18) + uVar5 * 0x10
                           );
        func_0x00010b9101f8(auStack_a8);
        if ((*(byte *)(in_x3 + 8) & 1) == 0) {
          func_0x00010b90fe3c();
          FUN_10b90d8b4();
LAB_10b90d760:
          func_0x0001080e0bc0(auStack_a8);
          goto LAB_10b90d768;
        }
        func_0x00010b9106c0(*(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(unaff_x21 + 0x20));
        func_0x00010b910810(auStack_c8);
        func_0x00010b9104d8();
        if (!(bool)in_ZR) {
LAB_10b90d73c:
          func_0x00010b90fe3c();
          FUN_10b90d8b4();
          func_0x00010b910568();
          goto LAB_10b90d760;
        }
        plVar3 = *(long **)(unaff_x21 + 0x10);
        func_0x0001080e08ac(auStack_108,auStack_a8);
        func_0x0001080e08ac(auStack_e8,auStack_c8);
        (**(code **)(*plVar3 + 200))(plVar3,auStack_88,0,auStack_108,2,in_x3);
        lVar4 = 0x20;
        do {
          func_0x0001080e0bc0((long)auStack_108 + lVar4);
          lVar4 = lVar4 + -0x20;
          in_ZR = lVar4 == -0x20;
        } while (!(bool)in_ZR);
        func_0x00010b9104d8();
        if (!(bool)in_ZR) goto LAB_10b90d73c;
        func_0x00010b910568();
        func_0x0001080e0bc0(auStack_a8);
        uVar5 = uVar5 + 2;
      }
      func_0x00010b9104b4();
    }
LAB_10b90d768:
    func_0x00010b9107f8();
  }
  func_0x00010529d1ac(lStack_110);
  func_0x00010b90fc10(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b90fffc();
    func_0x00010529d1b8();
    func_0x00010b910904();
    func_0x00010b910410(*(undefined8 *)(extraout_x8_01 + 0xd0));
    if ((*(byte *)(in_x3 + 8) & 1) == 0) {
      func_0x00010b910290();
      func_0x00010b90ffc0();
      func_0x00010b910098();
    }
    else {
      if ((lStack_188 != 0) && (*(long *)(lStack_188 + 0x10) != 0)) {
        do {
          func_0x00010b910018();
        } while (extraout_w10 != 0);
      }
      func_0x00010b9a8f78();
      func_0x00010b910580();
    }
    func_0x00010529d1ac(lStack_188);
    return;
  }
  return;
}



/* Entry: 10b90d78c; end: 10b90d83f;  */

void FUN_10b90d78c(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  long lStack_48;
  
  func_0x00010b90fffc();
  func_0x00010529d1b8();
  func_0x00010b910904();
  func_0x00010b910410(*(undefined8 *)(extraout_x8 + 0xd0));
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x00010b910290();
    func_0x00010b90ffc0();
    func_0x00010b910098();
  }
  else {
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      do {
        func_0x00010b910018();
      } while (extraout_w10 != 0);
    }
    func_0x00010b9a8f78();
    func_0x00010b910580();
  }
  func_0x00010529d1ac(lStack_48);
  return;
}



/* Entry: 10b90d840; end: 10b90d8b3;  */

undefined8 * FUN_10b90d840(undefined8 *param_1)

{
  func_0x00010b9100fc(&PTR_FUN_110d75410);
  func_0x00010b910824();
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90d8b4; end: 10b90d8e7;  */

void FUN_10b90d8b4(undefined8 param_1)

{
  func_0x00010b91020c();
  func_0x00010b910290(param_1,&UNK_10f7cd1f5);
  func_0x00010b90ff64();
  func_0x00010b910098();
  return;
}



/* Entry: 10b90d8e8; end: 10b90d8ef;  */

void FUN_10b90d8e8(void)

{
  return;
}



/* Entry: 10b90d8f0; end: 10b90d9cf;  */

char FUN_10b90d8f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  func_0x00010b910194(**(undefined8 **)(param_1 + 0x18),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x10));
  func_0x00010b91032c(auStack_50);
  uVar2 = **(undefined8 **)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  FUN_10b9a9358(auStack_98,auStack_50);
  uStack_88 = 0;
  uStack_80 = 2;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_90 = uVar3;
  puStack_78 = auStack_98;
  func_0x00010b910468(auStack_60,uVar2,0,param_3,&uStack_90);
  func_0x00010b910428();
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    func_0x00010b910924();
    func_0x00010529d3d8();
    func_0x00010b910924();
    func_0x00010529d3d8();
  }
  FUN_10b9a8d98(auStack_60);
  FUN_10b9a8d98(auStack_50);
  return cVar1;
}



/* Entry: 10b90d9d0; end: 10b90da43;  */

char FUN_10b90d9d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  long unaff_x19;
  long lVar2;
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [16];
  
  func_0x00010b910148();
  func_0x00010b9100b4(*(undefined8 *)(unaff_x19 + 0x10),**(undefined8 **)(param_1 + 0x20));
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    lVar2 = *(long *)(unaff_x19 + 8);
    FUN_10b9a8e18(auStack_70);
    func_0x00010b9107e0(lVar2 + 0x18);
    func_0x00010b9102b4();
    func_0x00010b910924();
    func_0x00010529d3d8();
  }
  FUN_10b9a8d98(auStack_40);
  return cVar1;
}



/* Entry: 10b90da44; end: 10b90da47;  */

undefined8 * FUN_10b90da44(undefined8 *param_1)

{
  func_0x00010b9105d8(&PTR_FUN_110d754c0);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90da48; end: 10b90da5b;  */

void FUN_10b90da48(void)

{
  FUN_10b90dc70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90da5c; end: 10b90dbc7;  */

void FUN_10b90da5c(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 in_ZR;
  long in_x3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  long unaff_x21;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long in_stack_00000038;
  undefined8 in_stack_00000060;
  undefined8 in_stack_000000a0;
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  long lStack_48;
  
  func_0x00010b910948();
  func_0x00010b9106cc();
  func_0x00010b90fc50();
  in_stack_000000a0 = extraout_x8;
  func_0x00010b910134(&stack0x00000038);
  func_0x00010b90d86c();
  if ((*(byte *)(in_x3 + 8) & 1) == 0) {
    func_0x00010b90fdd0();
  }
  else {
    func_0x00010b90ffcc();
    (**(code **)(extraout_x8_00 + 0xc0))(&stack0x00000080);
    lVar3 = in_stack_00000038;
    if ((*(byte *)(in_x3 + 8) & 1) == 0) {
      func_0x00010b90fe3c();
      FUN_10b90dc98();
    }
    else {
      lVar5 = 0;
      uVar6 = 0;
      while( true ) {
        lVar2 = *(long *)(lVar3 + 0x18);
        uVar1 = *(long *)(lVar3 + 0x20) - lVar2 >> 4;
        in_ZR = uVar6 == uVar1;
        if (uVar1 <= uVar6) break;
        FUN_10b9a9358(&stack0x00000060,lVar2 + lVar5);
        func_0x000107c278f8(in_stack_00000060);
        func_0x00010b9106c0(*(undefined8 *)(unaff_x21 + 0x18));
        func_0x00010b910810(&stack0x00000060);
        func_0x00010b9104d8();
        if (!(bool)in_ZR) {
LAB_10b90db88:
          func_0x00010b90fe3c();
          FUN_10b90dc98();
          func_0x00010b910880();
          goto LAB_10b90dba0;
        }
        plVar4 = *(long **)(unaff_x21 + 0x10);
        func_0x0001080e08ac(&stack0x00000040,&stack0x00000060);
        (**(code **)(*plVar4 + 200))(plVar4,&stack0x00000080,1,&stack0x00000040,1,in_x3);
        func_0x0001080e0bc0(&stack0x00000040);
        func_0x00010b9104d8();
        if (!(bool)in_ZR) goto LAB_10b90db88;
        func_0x00010b910880();
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x10;
      }
      func_0x00010b9104b4();
    }
LAB_10b90dba0:
    func_0x0001080e0bc0(&stack0x00000080);
  }
  func_0x00010529d1ac(in_stack_00000038);
  func_0x00010b90fc10(in_stack_000000a0);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b90fffc();
    func_0x00010529d1b8();
    ppuStack_68 = &PTR_FUN_110d75528;
    func_0x00010b910904();
    func_0x00010b910410(*(undefined8 *)(extraout_x8_01 + 0xd0));
    if ((*(byte *)(in_x3 + 8) & 1) == 0) {
      func_0x0001080e3e74(auStack_80,&UNK_10f7cd26a);
      func_0x00010b90ffc0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    }
    else {
      if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
        do {
          func_0x00010b910018();
        } while (extraout_w10 != 0);
      }
      func_0x00010b910058();
      func_0x00010b910580();
    }
    func_0x00010529d1ac(lStack_48);
    return;
  }
  return;
}



/* Entry: 10b90dbc8; end: 10b90dc6f;  */

void FUN_10b90dbc8(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  long lStack_48;
  
  func_0x00010b90fffc();
  func_0x00010529d1b8();
  ppuStack_68 = &PTR_FUN_110d75528;
  func_0x00010b910904();
  func_0x00010b910410(*(undefined8 *)(extraout_x8 + 0xd0));
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x0001080e3e74(auStack_80,&UNK_10f7cd26a);
    func_0x00010b90ffc0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  }
  else {
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      do {
        func_0x00010b910018();
      } while (extraout_w10 != 0);
    }
    func_0x00010b910058();
    func_0x00010b910580();
  }
  func_0x00010529d1ac(lStack_48);
  return;
}



/* Entry: 10b90dc70; end: 10b90dc97;  */

undefined8 * FUN_10b90dc70(undefined8 *param_1)

{
  func_0x00010b9105d8(&PTR_FUN_110d754c0);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90dc98; end: 10b90dccb;  */

void FUN_10b90dc98(undefined8 param_1)

{
  func_0x00010b91020c();
  func_0x00010b910290(param_1,&UNK_10f7cd24d);
  func_0x00010b90ff64();
  func_0x00010b910098();
  return;
}



/* Entry: 10b90dccc; end: 10b90dcd3;  */

void FUN_10b90dccc(void)

{
  return;
}



/* Entry: 10b90dcd4; end: 10b90dd5b;  */

char FUN_10b90dcd4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined1 auStack_30 [16];
  
  func_0x00010b910194(**(undefined8 **)(param_1 + 0x18),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x10));
  func_0x00010b91032c(auStack_30);
  cVar1 = *(char *)(param_4 + 8);
  if (cVar1 == '\x01') {
    func_0x00010b910924();
    func_0x00010b9107e0();
  }
  func_0x00010b9102b4();
  return cVar1;
}



/* Entry: 10b90dd5c; end: 10b90dd5f;  */

undefined8 * FUN_10b90dd5c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75570;
  func_0x00010b8e0a20(param_1 + 5);
  func_0x00010b8e0a20(param_1 + 4);
  FUN_10b90b0dc(param_1[3]);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90dd60; end: 10b90dd73;  */

void FUN_10b90dd60(void)

{
  FUN_10b90df7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90dd74; end: 10b90dec7;  */

void FUN_10b90dd74(void)

{
  undefined1 in_ZR;
  long in_x3;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  int extraout_w10;
  long unaff_x21;
  undefined1 auStack_150 [24];
  undefined **ppuStack_138;
  long lStack_108;
  long lStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  func_0x00010b9106cc();
  func_0x00010b90fc50();
  uStack_38 = extraout_x8;
  func_0x00010b910134(&lStack_a0);
  func_0x00010b90dfb8();
  if ((*(byte *)(in_x3 + 8) & 1) == 0) {
    func_0x00010b90fdd0();
  }
  else {
    func_0x00010b90ffcc();
    (**(code **)(extraout_x8_00 + 0xa0))(auStack_58);
    if ((*(byte *)(in_x3 + 8) & 1) == 0) {
      func_0x00010b910290();
      func_0x00010b90fe3c();
      func_0x00010b90a4dc();
      func_0x00010b910098();
    }
    else {
      in_ZR = *(char *)(lStack_a0 + 0x30) == '\x01';
      if ((bool)in_ZR) {
        func_0x00010b90ffcc();
        func_0x00010b9101f8(auStack_78);
        func_0x00010b9106c0(*(undefined8 *)(unaff_x21 + 0x20));
      }
      else {
        func_0x00010b90ffcc();
        func_0x00010b9101f8(auStack_78);
        func_0x00010b9106c0(*(undefined8 *)(unaff_x21 + 0x28));
      }
      func_0x00010b910810(auStack_98);
      func_0x00010b90ffcc();
      (**(code **)(extraout_x8_01 + 0xa8))();
      func_0x00010b910788();
      func_0x0001080e0bc0(auStack_78);
      func_0x00010b9104b4();
    }
    func_0x0001080e0bc0(auStack_58);
  }
  func_0x0001052a08ec(lStack_a0);
  func_0x00010b90fc10(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b90fffc();
    func_0x0001052a040c();
    ppuStack_138 = &PTR_FUN_110d755d8;
    func_0x00010b910904();
    func_0x00010b910410(*(undefined8 *)(extraout_x8_02 + 0xb8));
    if ((*(byte *)(in_x3 + 8) & 1) == 0) {
      func_0x0001080e3e74(auStack_150,&UNK_10f7cd2ef);
      func_0x00010b90ffc0();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    }
    else {
      if ((lStack_108 != 0) && (*(long *)(lStack_108 + 0x10) != 0)) {
        do {
          func_0x00010b910018();
        } while (extraout_w10 != 0);
      }
      func_0x00010b910058();
      func_0x00010b910580();
    }
    func_0x0001052a08ec(lStack_108);
    return;
  }
  return;
}



/* Entry: 10b90dec8; end: 10b90df7b;  */

void FUN_10b90dec8(void)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined **ppuStack_78;
  long lStack_48;
  
  func_0x00010b90fffc();
  func_0x0001052a040c();
  ppuStack_78 = &PTR_FUN_110d755d8;
  func_0x00010b910904();
  func_0x00010b910410(*(undefined8 *)(extraout_x8 + 0xb8));
  if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
    func_0x0001080e3e74(auStack_90,&UNK_10f7cd2ef);
    func_0x00010b90ffc0();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  }
  else {
    if ((lStack_48 != 0) && (*(long *)(lStack_48 + 0x10) != 0)) {
      do {
        func_0x00010b910018();
      } while (extraout_w10 != 0);
    }
    func_0x00010b910058();
    func_0x00010b910580();
  }
  func_0x0001052a08ec(lStack_48);
  return;
}



/* Entry: 10b90df7c; end: 10b90e06b;  */

undefined8 * FUN_10b90df7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75570;
  func_0x00010b8e0a20(param_1 + 5);
  func_0x00010b8e0a20(param_1 + 4);
  FUN_10b90b0dc(param_1[3]);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90e06c; end: 10b90e073;  */

void FUN_10b90e06c(void)

{
  return;
}



/* Entry: 10b90e074; end: 10b90e1d7;  */

undefined8 FUN_10b90e074(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  
  func_0x00010b9103d4();
  uVar1 = **(undefined8 **)(param_1 + 0x18);
  FUN_10b90b050(auStack_40,uVar1);
  func_0x00010b9108a4();
  func_0x00010b9106e4();
  func_0x00010b90e0d4();
  func_0x00010b910428();
  FUN_10b9a8d98(auStack_40);
  return uVar1;
}



/* Entry: 10b90e1d8; end: 10b90e1db;  */

undefined8 * FUN_10b90e1d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90e1dc; end: 10b90e1ef;  */

void FUN_10b90e1dc(void)

{
  func_0x00010b90a4b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90e1f0; end: 10b90e22f;  */

void FUN_10b90e1f0(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long extraout_x8;
  uint extraout_w9;
  
  func_0x00010b90fc24();
  FUN_10b9aaa6c();
  func_0x00010b90fe4c();
  if ((extraout_w9 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b9103ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(extraout_x8 + 0xd8))();
    return;
  }
  func_0x00010b910388();
                    /* WARNING: Could not recover jumptable at 0x00010b90fd78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10b90e230; end: 10b90e253;  */

void FUN_10b90e230(void)

{
  long extraout_x8;
  
  func_0x00010b90fc64();
  func_0x00010b910808(*(undefined8 *)(extraout_x8 + 400));
  func_0x00010b91064c();
  return;
}



/* Entry: 10b90e254; end: 10b90e257;  */

undefined8 * FUN_10b90e254(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d75688;
  func_0x0001089d9338(param_1 + 3);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90e258; end: 10b90e26b;  */

void FUN_10b90e258(void)

{
  func_0x00010b90e3e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90e26c; end: 10b90e2c7;  */

void FUN_10b90e26c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  undefined8 uStack_48;
  
  func_0x00010b9103d4();
  FUN_10b9a96d0(&uStack_48,param_2);
  func_0x000104bdb3b0(uStack_48);
  func_0x00010b90ffcc();
  func_0x00010b91025c(extraout_x8);
  return;
}



/* Entry: 10b90e2c8; end: 10b90e357;  */

void FUN_10b90e2c8(void)

{
  undefined8 uStack_40;
  long alStack_38 [3];
  
  func_0x00010b90fc64();
  func_0x00010b9105e0();
  func_0x0001052c4b44(&uStack_40,&UNK_10e5f7798,alStack_38);
  func_0x00010b9a8f90();
  func_0x000104bdb3b0(uStack_40);
  if (alStack_38[0] != 0) {
    func_0x00010b90fe14();
  }
  return;
}



/* Entry: 10b90e358; end: 10b90e3af;  */

void FUN_10b90e358(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010b910148();
    FUN_10b90e3b0();
    lVar1 = *(long *)(unaff_x19 + 8);
    if (param_3 - unaff_x20 != 0) {
      _memmove(lVar1);
    }
    *(long *)(unaff_x19 + 8) = lVar1 + (param_3 - unaff_x20);
  }
  return;
}



/* Entry: 10b90e3b0; end: 10b90e413;  */

undefined8 * FUN_10b90e3b0(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 >> 0x3c == 0) {
    puVar1 = param_1 + 2;
    func_0x0001089d96c8();
    *param_1 = puVar1;
    param_1[1] = puVar1;
    param_1[2] = puVar1 + param_2 * 2;
    return puVar1;
  }
  func_0x0001089d96bc();
  *param_1 = &PTR_FUN_110d75688;
  func_0x0001089d9338(param_1 + 3);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90e414; end: 10b90e417;  */

undefined8 * FUN_10b90e414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d756f0;
  FUN_10b90e5c4(param_1[4]);
  FUN_10b905568(param_1 + 3);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90e418; end: 10b90e42b;  */

void FUN_10b90e418(void)

{
  FUN_10b90e58c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90e42c; end: 10b90e53b;  */

void FUN_10b90e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x21;
  ulong uVar4;
  undefined1 auStack_90 [32];
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [24];
  
  puVar1 = auStack_90;
  uVar2 = param_2;
  func_0x00010b910200();
  uVar4 = 0;
  while( true ) {
    uVar3 = *(ulong *)(unaff_x21 + 0x18);
    if (*(ulong *)(uVar3 + 0x28) <= uVar4) {
      FUN_10b9a9894(auStack_90,param_2);
      func_0x000107c27e5c();
      puStack_70 = puVar1;
      uStack_68 = uVar2;
      func_0x000107c2793c(&UNK_10f7cd32d);
      func_0x00010b910140(auStack_58);
      func_0x00010b910910();
      func_0x00010b9105c0();
      func_0x00010b91082c();
      func_0x00010b9103cc();
      func_0x00010b910450(*(undefined8 *)(unaff_x21 + 0x18));
      func_0x000107c2793c(&UNK_10f7cd344);
      func_0x00010b910288(auStack_58);
      func_0x00010b90fe7c();
      func_0x00010b91082c();
      return;
    }
    uVar2 = param_2;
    FUN_10b9a9100();
    if ((uVar3 & 1) != 0) break;
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b90e538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x21 + 0x20) + 0x20))
            (*(long **)(unaff_x21 + 0x20),uVar4,*(undefined1 *)(unaff_x21 + 0x28),param_4);
  return;
}



/* Entry: 10b90e53c; end: 10b90e58b;  */

void FUN_10b90e53c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010b90e558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x28))
            (*(long **)(param_1 + 0x20),param_3,*(undefined1 *)(param_1 + 0x28),param_5);
  return;
}



/* Entry: 10b90e58c; end: 10b90e5c3;  */

undefined8 * FUN_10b90e58c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110d756f0;
  FUN_10b90e5c4(param_1[4]);
  FUN_10b905568(param_1 + 3);
  *param_1 = &PTR_FUN_110d74a90;
  FUN_10b907ef4(param_1 + 2);
  return param_1;
}



/* Entry: 10b90e5c4; end: 10b90e5ef;  */

void FUN_10b90e5c4(long *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined8 *extraout_x8;
  undefined8 extraout_x9;
  
  if (param_1 != (long *)0x0) {
    do {
      func_0x000107c39f2c();
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(extraout_x8,0x10);
      if (bVar2) {
        *extraout_x8 = extraout_x9;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010b90fd54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 10b90e5f0; end: 10b90e603;  */

void FUN_10b90e5f0(void)

{
  func_0x00010b90e6d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b90e604; end: 10b90e667;  */

void FUN_10b90e604(void)

{
  long in_x3;
  long unaff_x21;
  undefined8 uStack_38;
  
  func_0x00010b910200();
  func_0x00010b910134(&uStack_38);
  func_0x00010b90e6f8();
  if ((*(byte *)(in_x3 + 8) & 1) == 0) {
    func_0x00010b90fca8();
  }
  else {
    func_0x00010b910484(*(undefined8 *)(unaff_x21 + 0x10),&uStack_38,unaff_x21 + 0x18);
  }
  func_0x0001052b2c50(uStack_38);
  return;
}



/* Entry: 10b90e668; end: 10b90e73f;  */

void FUN_10b90e668(long param_1,undefined8 param_2,undefined8 param_3)

{
  int extraout_w10;
  long alStack_30 [2];
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x188))
            (alStack_30,*(long **)(param_1 + 0x10),param_3,param_1 + 0x18);
  if ((alStack_30[0] != 0) && (*(long *)(alStack_30[0] + 0x10) != 0)) {
    do {
      func_0x00010b910018();
    } while (extraout_w10 != 0);
  }
  func_0x00010b910058();
  func_0x00010b910580();
  func_0x0001052b2c50(alStack_30[0]);
  return;
}



/* Entry: 10b90e740; end: 10b90e7b7;  */

void FUN_10b90e740(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  long unaff_x22;
  
  func_0x00010b90feec();
  FUN_10b90e7b8();
  lVar3 = *(long *)(unaff_x19 + 0x28);
  if (lVar3 != 0) goto LAB_10b90e770;
  bVar1 = 0xfd < *(byte *)(unaff_x21 + param_1);
  bVar2 = *(byte *)(unaff_x21 + param_1) == 0xfe;
  if (bVar2) {
    lVar3 = 0;
    goto LAB_10b90e770;
  }
  if (unaff_x22 == 0) {
LAB_10b90e798:
    FUN_10b90e7e8();
  }
  else {
    func_0x00010b91063c();
    if (bVar1 && !bVar2) {
      func_0x00010b91061c();
      goto LAB_10b90e798;
    }
    func_0x00010b90e884();
  }
  func_0x00010b910348();
  FUN_10b90e7b8();
  lVar3 = *(long *)(unaff_x19 + 0x28);
LAB_10b90e770:
  func_0x00010b90fec8(lVar3);
  return;
}



/* Entry: 10b90e7b8; end: 10b90e7e7;  */

ulong FUN_10b90e7b8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = 0;
  param_3 = param_3 >> 7;
  while( true ) {
    param_3 = param_3 & param_2;
    uVar1 = *(ulong *)(param_1 + param_3) & ~*(ulong *)(param_1 + param_3) << 7 & 0x8080808080808080
    ;
    if (uVar1 != 0) break;
    lVar2 = lVar2 + 8;
    param_3 = lVar2 + param_3;
  }
  uVar1 = uVar1 >> 7;
  uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
  uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
  return param_3 + ((ulong)LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) >> 3) & param_2;
}



/* Entry: 10b90e7e8; end: 10b90e9ab;  */

void FUN_10b90e7e8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  undefined8 extraout_x9;
  long unaff_x19;
  long unaff_x21;
  long unaff_x24;
  
  func_0x00010b9101b8();
  lVar2 = extraout_x8 + 0x10 + param_2 * 0x30;
  __Znwm(lVar2);
  func_0x00010b910078(lVar2 + extraout_x8 + 0x10);
  lVar2 = 0;
  func_0x00010b9101d0();
  uVar1 = extraout_x9;
  if (!(bool)in_ZR) {
    uVar1 = extraout_x8_00;
  }
  func_0x00010b9103fc(uVar1);
  for (; unaff_x24 != lVar2; lVar2 = lVar2 + 1) {
    if (-1 < *(char *)(unaff_x19 + lVar2)) {
      lVar3 = unaff_x21;
      FUN_10b90e9ac(unaff_x21);
      func_0x00010b910154();
      FUN_10b90e7b8();
      func_0x00010b90fde4();
      FUN_10b90e9c4(extraout_x8_01 + lVar3 * 0x30,unaff_x21);
    }
    unaff_x21 = unaff_x21 + 0x30;
  }
  if (unaff_x24 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b90e9ac; end: 10b90e9c3;  */

void FUN_10b90e9ac(void)

{
  func_0x00010b9108b0();
  return;
}



/* Entry: 10b90e9c4; end: 10b90ea9f;  */

long FUN_10b90e9c4(long param_1,long param_2)

{
  func_0x000107c30df0();
  FUN_10b90f050(param_1 + 0x18,param_2 + 0x18);
  func_0x00010b907cc8(param_2 + 0x18);
  func_0x00010b910460();
  return param_2;
}



/* Entry: 10b90eaa0; end: 10b90eadf;  */

long * FUN_10b90eaa0(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar3 = (long *)(param_1[2] - *param_1 >> 3);
    if (plVar3 <= param_2) {
      plVar3 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      plVar3 = (long *)0xfffffffffffffff;
    }
    return plVar3;
  }
  FUN_10b90eb54();
  func_0x00010b9102e0();
  plVar3 = param_1 + 2;
  lVar1 = param_2[1] + (*param_1 - param_1[1]);
  FUN_10b90ebe8(plVar3,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return plVar3;
}



/* Entry: 10b90eae0; end: 10b90eb53;  */

void FUN_10b90eae0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b9102e0();
  lVar1 = *(long *)(param_2 + 8) + (*param_1 - param_1[1]);
  FUN_10b90ebe8(param_1 + 2,*param_1,param_1[1],lVar1);
  unaff_x19[1] = lVar1;
  uVar2 = *unaff_x20;
  unaff_x20[1] = uVar2;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar2;
  uVar2 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar2;
  uVar2 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar2;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10b90eb54; end: 10b90eb5f;  */

long * FUN_10b90eb54(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  _abort();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b90eba8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b90eb60; end: 10b90ebcb;  */

long * FUN_10b90eb60(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x00010b90eba8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 10b90ebcc; end: 10b90ebe7;  */

void FUN_10b90ebcc(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  
  if (param_2 >> 0x3c != 0) {
    func_0x000104bfe188();
    for (uVar1 = param_2; uVar1 != param_3; uVar1 = uVar1 + 0x10) {
      func_0x000107c30f40(param_4,uVar1);
      param_4 = param_4 + 0x10;
    }
    for (; param_2 != param_3; param_2 = param_2 + 0x10) {
      func_0x000107c27900(param_2 + 8);
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Znwm_110352280)(param_2 << 4);
  return;
}



/* Entry: 10b90ebe8; end: 10b90ec4f;  */

void FUN_10b90ebe8(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  for (lVar1 = param_2; lVar1 != param_3; lVar1 = lVar1 + 0x10) {
    func_0x000107c30f40(param_4,lVar1);
    param_4 = param_4 + 0x10;
  }
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x000107c27900(param_2 + 8);
  }
  return;
}



/* Entry: 10b90ec50; end: 10b90ecaf;  */

void FUN_10b90ec50(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    func_0x000107c27900(param_2 + 8);
  }
  return;
}



/* Entry: 10b90ecb0; end: 10b90ecb7;  */

void FUN_10b90ecb0(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b9102e0(param_1,*(undefined8 *)(param_1 + 8));
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x10;
    func_0x000107c27900(lVar1 + -8);
  }
  return;
}



/* Entry: 10b90ecb8; end: 10b90ecef;  */

void FUN_10b90ecb8(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b9102e0();
  while (lVar1 = *(long *)(unaff_x20 + 0x10), unaff_x19 != lVar1) {
    *(long *)(unaff_x20 + 0x10) = lVar1 + -0x10;
    func_0x000107c27900(lVar1 + -8);
  }
  return;
}



/* Entry: 10b90ecf0; end: 10b90ef67;  */

void FUN_10b90ecf0(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong *unaff_x19;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  ulong *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  ulong *puStack_68;
  
  func_0x00010b910148();
  puVar11 = param_2;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar11 = unaff_x19;
    func_0x00010b90a5e0();
    if (puVar11 < 0x49) {
      uVar8 = unaff_x19[1];
      uVar12 = *unaff_x19;
      uVar9 = unaff_x19[3];
      uVar10 = uVar9 - uVar12;
      if (unaff_x19[2] - uVar8 < uVar10) {
        func_0x00010b9105fc();
        if (uVar8 == uVar12) {
          func_0x00010b90a6a4();
          FUN_10b91069c();
        }
        else {
          FUN_10b90a738();
        }
        if (unaff_x19[2] - unaff_x19[1] == 8) {
          uVar8 = 0x24;
        }
        else {
          uVar8 = unaff_x19[4] + 0x49;
        }
        unaff_x19[4] = uVar8;
      }
      else {
        puVar11 = (ulong *)((long)uVar10 >> 2);
        if (uVar9 == uVar12) {
          puVar11 = (undefined8 *)0x1;
        }
        puStack_90 = unaff_x19 + 3;
        FUN_10b90a8a4();
        puStack_98 = puVar11 + (long)param_2;
        puStack_b0 = puVar11;
        puStack_a8 = puVar11;
        puStack_a0 = puVar11;
        func_0x00010b9105fc();
        uStack_b8 = 0x49;
        puStack_c0 = unaff_x19 + 5;
        FUN_10b90a7dc(&puStack_b0);
        puVar5 = puStack_90;
        puVar15 = (undefined8 *)unaff_x19[1];
        uStack_c8 = 0;
        puVar13 = puStack_98;
        puVar6 = puStack_a8;
        puVar14 = puStack_a0;
        puVar16 = puStack_b0;
        for (; puVar7 = (undefined8 *)unaff_x19[2], puVar15 != puVar7; puVar15 = puVar15 + 1) {
          if (puVar14 == puVar13) {
            if (puVar6 < puVar16 || (long)puVar6 - (long)puVar16 == 0) {
              puVar7 = (undefined8 *)((long)puVar13 - (long)puVar16 >> 2);
              if ((long)puVar13 - (long)puVar16 == 0) {
                puVar7 = (undefined8 *)0x1;
              }
              puStack_68 = puVar5;
              puVar4 = puVar7;
              FUN_10b90a8a4();
              puStack_80 = puVar4 + ((ulong)puVar7 >> 2);
              puStack_70 = puVar4 + (long)puVar11;
              puVar11 = puVar6;
              puStack_88 = puVar4;
              puStack_78 = puStack_80;
              FUN_10b90a87c(&puStack_88,puVar6,puVar13);
              puVar3 = puStack_70;
              puVar2 = puStack_78;
              puVar4 = puStack_80;
              puVar7 = puStack_88;
              puStack_88 = puVar16;
              puStack_80 = puVar6;
              puStack_78 = puVar14;
              puStack_70 = puVar13;
              func_0x00010b90a900(&puStack_88);
              puVar13 = puVar3;
              puVar6 = puVar4;
              puVar14 = puVar2;
              puVar16 = puVar7;
            }
            else {
              puVar14 = puVar6 + (((long)puVar6 - (long)puVar16 >> 3) + 1) / -2;
              lVar1 = (long)puVar13 - (long)puVar6;
              if (lVar1 != 0) {
                _memmove(puVar14,puVar6,lVar1);
                puVar11 = puVar6;
              }
              puVar6 = puVar14;
              puVar14 = (undefined8 *)((long)puVar14 + lVar1);
            }
          }
          *puVar14 = *puVar15;
          puVar14 = puVar14 + 1;
        }
        puStack_a8 = (undefined8 *)unaff_x19[1];
        puStack_b0 = (undefined8 *)*unaff_x19;
        *unaff_x19 = (ulong)puVar16;
        unaff_x19[1] = (ulong)puVar6;
        puStack_98 = (undefined8 *)unaff_x19[3];
        unaff_x19[2] = (ulong)puVar14;
        unaff_x19[3] = (ulong)puVar13;
        if ((long)puVar14 - (long)puVar6 == 8) {
          uVar8 = 0x24;
        }
        else {
          uVar8 = unaff_x19[4] + 0x49;
        }
        unaff_x19[4] = uVar8;
        puStack_a0 = puVar7;
        func_0x00010b90a8d8(&uStack_c8);
        func_0x00010b90a900(&puStack_b0);
      }
    }
    else {
      unaff_x19[4] = 0x49;
      FUN_10b91069c();
      puVar11 = param_2;
    }
  }
  puVar5 = unaff_x19;
  FUN_10b9079cc();
  if ((undefined8 *)*puVar5 == puVar11) {
    puVar11 = (ulong *)(puVar5[-1] + 0xff8);
  }
  FUN_10b90ef68(puVar11 + -7);
  unaff_x19[5] = unaff_x19[5] + 1;
  unaff_x19[4] = unaff_x19[4] - 1;
  return;
}



/* Entry: 10b90ef68; end: 10b90ef9f;  */

void FUN_10b90ef68(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b9102e0();
  func_0x000107c30df0();
  func_0x000107c30f40(param_1 + 0x18,unaff_x19 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x28) = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = 0;
  return;
}



/* Entry: 10b90efa0; end: 10b90efab;  */

void FUN_10b90efa0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != lVar2 + -8) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10b90efac; end: 10b90f04f;  */

void FUN_10b90efac(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  ulong unaff_x21;
  ulong uVar4;
  long unaff_x22;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010b910148();
  uVar4 = param_1[1];
  bVar1 = *param_1 <= uVar4;
  uVar2 = uVar4 == *param_1;
  if ((bool)uVar2) {
    func_0x00010b910338();
    if (bVar1) {
      lVar3 = (long)(extraout_x10 - uVar4) >> 2;
      if (extraout_x10 - uVar4 == 0) {
        lVar3 = 1;
      }
      func_0x00010b910738();
      lStack_58 = lVar3 + (unaff_x21 + 6 & 0xfffffffffffffff8);
      lStack_48 = lVar3 + uVar4 * 8;
      lStack_60 = lVar3;
      lStack_50 = lStack_58;
      FUN_10b90a87c(&lStack_60,*(undefined8 *)(unaff_x19 + 8),*(undefined8 *)(unaff_x19 + 0x10));
      func_0x00010b90fc78();
      uVar4 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x00010b9102f4();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar4 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar4 - 8) = unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar4 - 8);
  return;
}



/* Entry: 10b90f050; end: 10b90f07b;  */

undefined8 * FUN_10b90f050(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  func_0x000107c30f40(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10b90f07c; end: 10b90f11f;  */

undefined8 *
FUN_10b90f07c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  undefined8 auStack_78 [4];
  undefined1 auStack_58 [32];
  undefined8 uStack_38;
  
  puVar1 = param_1;
  uVar2 = param_2;
  func_0x00010b90fcb8();
  *puVar1 = &PTR_FUN_110d757c0;
  puVar1[1] = 1;
  puVar1[2] = uVar2;
  uStack_38 = extraout_x8;
  func_0x0001080e08ac(auStack_58,param_3);
  FUN_10b8db52c(param_1 + 3,param_2,auStack_58);
  func_0x00010b910788();
  func_0x0001080e08ac(auStack_78,param_4);
  func_0x00010b9106e4(param_1 + 7);
  FUN_10b8db52c();
  puVar1 = auStack_78;
  func_0x0001080e0bc0();
  func_0x00010b90fc10(uStack_38);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  *puVar1 = &PTR_FUN_110d757c0;
  func_0x0001080e0bc0(puVar1 + 7);
  func_0x0001080e0bc0(puVar1 + 3);
  return puVar1;
}


