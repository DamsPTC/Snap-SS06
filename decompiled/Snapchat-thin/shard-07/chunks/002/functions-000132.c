/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105282ddc; end: 105282e63;  */

void FUN_105282ddc(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105282e64; end: 105282f93;  */

undefined1 * FUN_105282e64(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [24];
  undefined8 uStack_1a8;
  undefined1 ***pppuStack_1a0;
  code *pcStack_198;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105282f94();
  func_0x0001003b2110(auStack_88,0x113818298);
  FUN_105283120(auStack_78,param_2);
  func_0x000104be6c64(auStack_68,param_2 + 0x20);
  uStack_50 = 5;
  uStack_58 = *(undefined8 *)(param_2 + 0x38);
  uStack_48 = *(undefined8 *)(param_2 + 0x40);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_80,auStack_88,auStack_78,4);
  lVar8 = 0x30;
  do {
    func_0x00010b9a8d98(auStack_78 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = auStack_80;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_80;
  func_0x000104bdbf78();
  FUN_10528319c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x40;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_88);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_98 = FUN_105282f94;
  uStack_b8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = 0;
  lStack_b0 = lVar8;
  puStack_a8 = puVar2;
  puStack_a0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138182a0 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138182a0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_120,"_djinni_record_ConversationHighlights");
      pcVar5 = "summary";
      func_0x0001003a83dc(auStack_128,"summary");
      FUN_105283140();
      func_0x0001003b1b50(auStack_118,auStack_128,pcVar5);
      pcVar5 = "messages";
      func_0x0001003a83dc(auStack_130,"messages");
      func_0x000104be7878();
      func_0x0001003b1b50(auStack_100,auStack_130,pcVar5);
      pcVar5 = "createdAtMs";
      func_0x0001003a83dc(auStack_138,"createdAtMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_e8,auStack_138,pcVar5);
      pcVar5 = "expiresAtMs";
      func_0x0001003a83dc(auStack_140,"expiresAtMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_d0,auStack_140,pcVar5);
      puVar2 = auStack_118;
      uVar7 = 0;
      func_0x000104bdbd44(0x113818290,auStack_120,0,auStack_118,4);
      lVar8 = 0x48;
      do {
        func_0x0001003b1c5c(puVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      func_0x0001003a8c94(auStack_130);
      func_0x0001003a8c94(auStack_128);
      func_0x0001003a8c94(auStack_120);
      puVar4 = (undefined1 *)0x1138182a0;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  FUN_10528319c(uStack_b8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818290;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = puVar4[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_148 = FUN_105283120;
  uStack_168 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_160 = uVar7;
  puStack_158 = puVar2;
  ppuStack_150 = &puStack_a0;
  FUN_10528b694();
  func_0x0001003b2110(auStack_188,0x1138186e8);
  FUN_1052808e4(auStack_178,puVar4);
  func_0x000104bdb9bc(auStack_180,auStack_188,auStack_178,1);
  func_0x00010b9a8d98(auStack_178);
  func_0x0001003b1f60(auStack_188);
  iVar6 = (int)auStack_180;
  func_0x00010b9a8f60(extraout_x8);
  puVar4 = auStack_180;
  func_0x000104bdbf78(puVar4);
  FUN_10528b778(uStack_168);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_178);
  func_0x0001003b1f60(auStack_188);
  __Unwind_Resume(puVar4);
  pcStack_198 = FUN_10528b694;
  uStack_1a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_1a0 = &ppuStack_150;
  if ((bRam00000001138186f0 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138186f0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_1c8,"_djinni_record_HighlightsSummaryInfo");
      pcVar5 = "text";
      func_0x0001003a83dc(auStack_1d0,"text");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_1c0,auStack_1d0,pcVar5);
      iVar6 = 0;
      func_0x000104bdbd44(0x1138186e0,auStack_1c8,0,auStack_1c0,1);
      func_0x0001003b1c5c(auStack_1c0);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      puVar4 = (undefined1 *)0x1138186f0;
      ___cxa_guard_release(0x1138186f0);
    }
  }
  FUN_10528b778(uStack_1a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138186e0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105282f94; end: 10528311f;  */

undefined1 * FUN_105282f94(undefined1 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *extraout_x8;
  undefined1 *unaff_x19;
  undefined8 unaff_x20;
  long lVar6;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138182a0 & 1) == 0) {
    param_1 = (undefined1 *)0x1138182a0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_90,"_djinni_record_ConversationHighlights");
      pcVar2 = "summary";
      func_0x0001003a83dc(auStack_98,"summary");
      FUN_105283140();
      func_0x0001003b1b50(auStack_88,auStack_98,pcVar2);
      pcVar2 = "messages";
      func_0x0001003a83dc(auStack_a0,"messages");
      func_0x000104be7878();
      func_0x0001003b1b50(auStack_70,auStack_a0,pcVar2);
      pcVar2 = "createdAtMs";
      func_0x0001003a83dc(auStack_a8,"createdAtMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_a8,pcVar2);
      pcVar2 = "expiresAtMs";
      func_0x0001003a83dc(auStack_b0,"expiresAtMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_b0,pcVar2);
      unaff_x19 = auStack_88;
      uVar5 = 0;
      func_0x000104bdbd44(0x113818290,auStack_90,0,auStack_88,4);
      lVar6 = 0x48;
      do {
        func_0x0001003b1c5c(unaff_x19 + lVar6);
        param_2 = (int)uVar5;
        lVar6 = lVar6 + -0x18;
        in_ZR = lVar6 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      func_0x0001003a8c94(auStack_a0);
      func_0x0001003a8c94(auStack_98);
      func_0x0001003a8c94(auStack_90);
      param_1 = (undefined1 *)0x1138182a0;
      ___cxa_guard_release();
      unaff_x20 = 0xffffffffffffffe8;
    }
  }
  FUN_10528319c(uStack_28);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818290;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = param_1[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return param_1;
  }
  pcStack_b8 = FUN_105283120;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_d0 = unaff_x20;
  puStack_c8 = unaff_x19;
  puStack_c0 = &stack0xfffffffffffffff0;
  FUN_10528b694();
  func_0x0001003b2110(auStack_f8,0x1138186e8);
  FUN_1052808e4(auStack_e8,param_1);
  func_0x000104bdb9bc(auStack_f0,auStack_f8,auStack_e8,1);
  func_0x00010b9a8d98(auStack_e8);
  func_0x0001003b1f60(auStack_f8);
  iVar4 = (int)auStack_f0;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_f0;
  func_0x000104bdbf78(puVar3);
  FUN_10528b778(uStack_d8);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_e8);
  func_0x0001003b1f60(auStack_f8);
  __Unwind_Resume(puVar3);
  pcStack_108 = FUN_10528b694;
  uStack_118 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_110 = &puStack_c0;
  if ((bRam00000001138186f0 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138186f0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_138,"_djinni_record_HighlightsSummaryInfo");
      pcVar2 = "text";
      func_0x0001003a83dc(auStack_140,"text");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_130,auStack_140,pcVar2);
      iVar4 = 0;
      func_0x000104bdbd44(0x1138186e0,auStack_138,0,auStack_130,1);
      func_0x0001003b1c5c(auStack_130);
      func_0x0001003a8c94(auStack_140);
      func_0x0001003a8c94(auStack_138);
      puVar3 = (undefined1 *)0x1138186f0;
      ___cxa_guard_release(0x1138186f0);
    }
  }
  FUN_10528b778(uStack_118);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138186e0;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 105283120; end: 10528313f;  */

undefined1 * FUN_105283120(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uVar1 = param_2[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528b694();
  func_0x0001003b2110(auStack_48,0x1138186e8);
  FUN_1052808e4(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar4 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_40;
  func_0x000104bdbf78(puVar2);
  FUN_10528b778(uStack_28);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar2);
  pcStack_58 = FUN_10528b694;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138186f0 & 1) == 0) {
    puVar2 = (undefined1 *)0x1138186f0;
    ___cxa_guard_acquire();
    if ((int)puVar2 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_HighlightsSummaryInfo");
      pcVar3 = "text";
      func_0x0001003a83dc(auStack_90,"text");
      func_0x000104bdbd7c();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar3);
      iVar4 = 0;
      func_0x000104bdbd44(0x1138186e0,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar2 = (undefined1 *)0x1138186f0;
      ___cxa_guard_release(0x1138186f0);
    }
  }
  FUN_10528b778(uStack_68);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138186e0;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar2;
}



/* Entry: 105283140; end: 10528319b;  */

undefined8 FUN_105283140(void)

{
  int iVar1;
  
  if ((bRam00000001130cba38 & 1) == 0) {
    iVar1 = 0x130cba38;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528b694();
      func_0x00010b990784(0x1130cba28);
      ___cxa_guard_release(0x1130cba38);
    }
  }
  return 0x1130cba28;
}



/* Entry: 10528319c; end: 1052831af;  */

void FUN_10528319c(void)

{
  return;
}



/* Entry: 1052831b0; end: 10528327b;  */

undefined1 * FUN_1052831b0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  char *pcVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528327c();
  func_0x0001003b2110(auStack_48,0x1138182b0);
  FUN_10529dd1c(auStack_38,param_2);
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar3 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar1 = auStack_40;
  func_0x000104bdbf78(puVar1);
  FUN_105283360(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar1);
  pcStack_58 = FUN_10528327c;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138182b8 & 1) == 0) {
    puVar1 = (undefined1 *)0x1138182b8;
    ___cxa_guard_acquire();
    if ((int)puVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_ConversationInvitationMetadata");
      pcVar2 = "inviter";
      func_0x0001003a83dc(auStack_90,"inviter");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar2);
      iVar3 = 0;
      func_0x000104bdbd44(0x1138182a8,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      puVar1 = (undefined1 *)0x1138182b8;
      ___cxa_guard_release(0x1138182b8);
    }
  }
  FUN_105283360(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x1138182a8;
  }
  ___stack_chk_fail();
  if (iVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar1;
}



/* Entry: 10528327c; end: 10528335f;  */

undefined8 FUN_10528327c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138182b8 & 1) == 0) {
    param_1 = 0x1138182b8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_ConversationInvitationMetadata");
      pcVar1 = "inviter";
      func_0x0001003a83dc(auStack_40,"inviter");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar1);
      param_2 = 0;
      func_0x000104bdbd44(0x1138182a8,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      param_1 = 0x1138182b8;
      ___cxa_guard_release(0x1138182b8);
    }
  }
  FUN_105283360(uStack_18);
  if ((bool)in_ZR) {
    return 0x1138182a8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105283360; end: 105283373;  */

void FUN_105283360(void)

{
  return;
}



/* Entry: 105283374; end: 10528343b;  */

undefined1 * FUN_105283374(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_10528343c();
  func_0x0001003b2110(auStack_48,0x1138182c8);
  auStack_38[0] = *param_2;
  uStack_30 = 4;
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar4 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_40;
  func_0x000104bdbf78(puVar2);
  FUN_105283578(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar2);
  pcStack_58 = FUN_10528343c;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138182d0 & 1) == 0) {
    iVar1 = 0x138182d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_ConversationItem");
      pcVar3 = "state";
      func_0x0001003a83dc(auStack_90,"state");
      FUN_105283520();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar3);
      iVar4 = 0;
      func_0x000104bdbd44(0x1138182c0,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      ___cxa_guard_release(0x1138182d0);
    }
  }
  FUN_105283578(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x1138182c0;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cba50 & 1) == 0) {
    iVar4 = 0x130cba50;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010b990e20(0x1130cba40);
      ___cxa_guard_release(0x1130cba50);
    }
  }
  return (undefined1 *)0x1130cba40;
}



/* Entry: 10528343c; end: 10528351f;  */

undefined8 FUN_10528343c(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138182d0 & 1) == 0) {
    iVar1 = 0x138182d0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_ConversationItem");
      pcVar2 = "state";
      func_0x0001003a83dc(auStack_40,"state");
      FUN_105283520();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar2);
      param_2 = 0;
      func_0x000104bdbd44(0x1138182c0,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      ___cxa_guard_release(0x1138182d0);
    }
  }
  FUN_105283578(uStack_18);
  if ((bool)in_ZR) {
    return 0x1138182c0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cba50 & 1) == 0) {
    iVar1 = 0x130cba50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cba40);
      ___cxa_guard_release(0x1130cba50);
    }
  }
  return 0x1130cba40;
}



/* Entry: 105283520; end: 105283577;  */

undefined8 FUN_105283520(void)

{
  int iVar1;
  
  if ((bRam00000001130cba50 & 1) == 0) {
    iVar1 = 0x130cba50;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cba40);
      ___cxa_guard_release(0x1130cba50);
    }
  }
  return 0x1130cba40;
}



/* Entry: 105283578; end: 10528358b;  */

void FUN_105283578(void)

{
  return;
}



/* Entry: 10528358c; end: 105283653;  */

undefined1 * FUN_10528358c(undefined8 param_1,undefined4 *param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105283654();
  func_0x0001003b2110(auStack_48,0x1138182e0);
  auStack_38[0] = *param_2;
  uStack_30 = 4;
  func_0x000104bdb9bc(auStack_40,auStack_48,auStack_38,1);
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  iVar4 = (int)auStack_40;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_40;
  func_0x000104bdbf78(puVar2);
  FUN_105283790(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_38);
  func_0x0001003b1f60(auStack_48);
  __Unwind_Resume(puVar2);
  pcStack_58 = FUN_105283654;
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_60 = &stack0xfffffffffffffff0;
  if ((bRam00000001138182e8 & 1) == 0) {
    iVar1 = 0x138182e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_88,"_djinni_record_ConversationMetadataFormat");
      pcVar3 = "userListMessageMetadata";
      func_0x0001003a83dc(auStack_90,"userListMessageMetadata");
      FUN_105283738();
      func_0x0001003b1b50(auStack_80,auStack_90,pcVar3);
      iVar4 = 0;
      func_0x000104bdbd44(0x1138182d8,auStack_88,0,auStack_80,1);
      func_0x0001003b1c5c(auStack_80);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      ___cxa_guard_release(0x1138182e8);
    }
  }
  FUN_105283790(uStack_68);
  if ((bool)in_ZR) {
    return (undefined1 *)0x1138182d8;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cba68 & 1) == 0) {
    iVar4 = 0x130cba68;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      func_0x00010b990e20(0x1130cba58);
      ___cxa_guard_release(0x1130cba68);
    }
  }
  return (undefined1 *)0x1130cba58;
}



/* Entry: 105283654; end: 105283737;  */

undefined8 FUN_105283654(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [24];
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138182e8 & 1) == 0) {
    iVar1 = 0x138182e8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_38,"_djinni_record_ConversationMetadataFormat");
      pcVar2 = "userListMessageMetadata";
      func_0x0001003a83dc(auStack_40,"userListMessageMetadata");
      FUN_105283738();
      func_0x0001003b1b50(auStack_30,auStack_40,pcVar2);
      param_2 = 0;
      func_0x000104bdbd44(0x1138182d8,auStack_38,0,auStack_30,1);
      func_0x0001003b1c5c(auStack_30);
      func_0x0001003a8c94(auStack_40);
      func_0x0001003a8c94(auStack_38);
      ___cxa_guard_release(0x1138182e8);
    }
  }
  FUN_105283790(uStack_18);
  if ((bool)in_ZR) {
    return 0x1138182d8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cba68 & 1) == 0) {
    iVar1 = 0x130cba68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cba58);
      ___cxa_guard_release(0x1130cba68);
    }
  }
  return 0x1130cba58;
}



/* Entry: 105283738; end: 10528378f;  */

undefined8 FUN_105283738(void)

{
  int iVar1;
  
  if ((bRam00000001130cba68 & 1) == 0) {
    iVar1 = 0x130cba68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cba58);
      ___cxa_guard_release(0x1130cba68);
    }
  }
  return 0x1130cba58;
}



/* Entry: 105283790; end: 1052837a3;  */

void FUN_105283790(void)

{
  return;
}



/* Entry: 1052837a4; end: 1052838c7;  */

undefined1 * FUN_1052837a4(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined2 uStack_80;
  undefined1 uStack_78;
  undefined2 uStack_70;
  undefined8 uStack_68;
  undefined2 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined1 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052838c8();
  func_0x0001003b2110(auStack_98,0x1138182f8);
  auStack_88[0] = *param_2;
  uStack_80 = 7;
  uStack_78 = param_2[1];
  uStack_70 = 7;
  uStack_68 = *(undefined8 *)(param_2 + 8);
  uStack_58 = *(undefined8 *)(param_2 + 0x10);
  uStack_60 = 5;
  uStack_50 = 5;
  uStack_48 = param_2[0x18];
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_90,auStack_98,auStack_88,5);
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_88 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar3 = auStack_90;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_90;
  func_0x000104bdbf78();
  FUN_105283a84(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98(auStack_88 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_a8 = FUN_1052838c8;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = auStack_88;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818300 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818300;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_ConversationRetentionPolicy");
      pcVar4 = "sendReadMessage";
      func_0x0001003a83dc(auStack_150,"sendReadMessage");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar4);
      pcVar4 = "sendReleaseMessages";
      func_0x0001003a83dc(auStack_158,"sendReleaseMessages");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar4);
      pcVar4 = "unreadRetentionTimeSeconds";
      func_0x0001003a83dc(auStack_160,"unreadRetentionTimeSeconds");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar4);
      pcVar4 = "readRetentionTimeSeconds";
      func_0x0001003a83dc(auStack_168,"readRetentionTimeSeconds");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar4);
      pcVar4 = "infiniteMode";
      func_0x0001003a83dc(auStack_170,"infiniteMode");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138182f0,auStack_148,0,auStack_140,5);
      lVar7 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      puVar3 = (undefined1 *)0x113818300;
      ___cxa_guard_release(0x113818300);
    }
  }
  FUN_105283a84(uStack_c8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138182f0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 1052838c8; end: 105283a83;  */

undefined8 FUN_1052838c8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818300 & 1) == 0) {
    param_1 = 0x113818300;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_ConversationRetentionPolicy");
      pcVar1 = "sendReadMessage";
      func_0x0001003a83dc(auStack_b0,"sendReadMessage");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar1);
      pcVar1 = "sendReleaseMessages";
      func_0x0001003a83dc(auStack_b8,"sendReleaseMessages");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar1);
      pcVar1 = "unreadRetentionTimeSeconds";
      func_0x0001003a83dc(auStack_c0,"unreadRetentionTimeSeconds");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar1);
      pcVar1 = "readRetentionTimeSeconds";
      func_0x0001003a83dc(auStack_c8,"readRetentionTimeSeconds");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar1);
      pcVar1 = "infiniteMode";
      func_0x0001003a83dc(auStack_d0,"infiniteMode");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138182f0,auStack_a8,0,auStack_a0,5);
      lVar3 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = 0x113818300;
      ___cxa_guard_release(0x113818300);
    }
  }
  FUN_105283a84(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138182f0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105283a84; end: 105283a97;  */

void FUN_105283a84(void)

{
  return;
}



/* Entry: 105283a98; end: 105283b4f;  */

void FUN_105283a98(undefined8 param_1)

{
  ulong uVar1;
  undefined1 auStack_f8 [88];
  undefined1 auStack_a0 [120];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_105283b50(auStack_a0,lStack_28 + 0x18);
  func_0x000105283ba8(auStack_f8,lStack_28 + 0x28);
  uVar1 = lStack_28 + 0x38;
  FUN_105283c44(uVar1);
  func_0x00010066ddd8(param_1,auStack_a0,auStack_f8,uVar1 & 0xffff);
  func_0x00010066df80(auStack_f8);
  func_0x00010066dfc8(auStack_a0);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 105283b50; end: 105283c43;  */

void FUN_105283b50(undefined1 *param_1,long param_2)

{
  undefined1 auStack_90 [112];
  
  if (*(byte *)(param_2 + 8) < 2) {
    *param_1 = 0;
    param_1[0x70] = 0;
  }
  else {
    FUN_105280370(auStack_90);
    func_0x0001006721f4(param_1,auStack_90);
    func_0x000100672210(auStack_90);
  }
  return;
}



/* Entry: 105283c44; end: 105283c7b;  */

uint FUN_105283c44(long param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = 1 < *(byte *)(param_1 + 8);
  if (bVar1) {
    FUN_10527f580();
    uVar2 = (uint)param_1 & 0xff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 | (uint)bVar1 << 8;
}



/* Entry: 105283c7c; end: 105283dbb;  */

undefined1 * FUN_105283c7c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar8;
  undefined1 auStack_380 [8];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined1 auStack_338 [8];
  undefined1 auStack_330 [8];
  undefined1 auStack_328 [16];
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 ***pppuStack_300;
  code *pcStack_2f8;
  undefined1 auStack_2f0 [8];
  undefined1 auStack_2e8 [8];
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined1 auStack_2d0 [8];
  undefined1 auStack_2c8 [8];
  undefined1 auStack_2c0 [8];
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined1 auStack_280 [24];
  undefined1 auStack_268 [24];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [32];
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [16];
  undefined4 uStack_1a8;
  undefined2 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_18f;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined4 uStack_168;
  undefined2 uStack_160;
  undefined1 auStack_158 [8];
  undefined2 uStack_150;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined8 uStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105283dbc();
  func_0x0001003b2110(auStack_78,0x113818310);
  FUN_105283f1c(auStack_68,param_2);
  func_0x000105283f30(auStack_58,param_2 + 0x78);
  func_0x000105283f44(auStack_48,param_2 + 0xd0);
  func_0x000104bdb9bc(auStack_70,auStack_78,auStack_68,3);
  lVar8 = 0x20;
  do {
    func_0x00010b9a8d98(auStack_68 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = auStack_70;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_70;
  func_0x000104bdbf78();
  func_0x00010528407c(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x30;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_78);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_88 = FUN_105283dbc;
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_a0 = lVar8;
  puStack_98 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818318 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818318;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_f8,"_djinni_record_ConversationSubTypeMetadata");
      pcVar5 = "campaignMetadata";
      func_0x0001003a83dc(auStack_100,"campaignMetadata");
      FUN_105283f58();
      func_0x0001003b1b50(auStack_f0,auStack_100,pcVar5);
      pcVar5 = "publicGroupMetadata";
      func_0x0001003a83dc(auStack_108,"publicGroupMetadata");
      FUN_105283fb4();
      func_0x0001003b1b50(auStack_d8,auStack_108,pcVar5);
      pcVar5 = "botConversationMetadata";
      func_0x0001003a83dc(auStack_110,"botConversationMetadata");
      FUN_105284010();
      func_0x0001003b1b50(auStack_c0,auStack_110,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818308,auStack_f8,0,auStack_f0,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_f0 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_110);
      func_0x0001003a8c94(auStack_108);
      func_0x0001003a8c94(auStack_100);
      func_0x0001003a8c94(auStack_f8);
      puVar4 = (undefined1 *)0x113818318;
      ___cxa_guard_release();
    }
  }
  func_0x00010528407c(uStack_a8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818308;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (puVar4[0x70] != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return puVar4;
  }
  pcStack_118 = FUN_105283f1c;
  ppuStack_120 = &puStack_90;
  func_0x00010528096c();
  FUN_1052805fc();
  func_0x0001003b2110(auStack_1c8,0x113818220);
  func_0x000108b80a1c(auStack_1b8,puVar4);
  uStack_1a0 = 4;
  uStack_1a8 = *(undefined4 *)(puVar4 + 0x18);
  if (puVar4[0x20] == '\x01') {
    uStack_198 = CONCAT44(uStack_198._4_4_,*(undefined4 *)(puVar4 + 0x1c));
    uStack_190 = 4;
  }
  else {
    uStack_198 = 0;
    uStack_190 = 1;
  }
  uStack_18f = 0;
  FUN_10528080c(auStack_188,puVar4 + 0x28);
  func_0x000105280820(auStack_178,puVar4 + 0x48);
  uStack_160 = 4;
  uStack_168 = *(undefined4 *)(puVar4 + 0x68);
  auStack_158[0] = puVar4[0x6c];
  uStack_150 = 7;
  func_0x000104bdb9bc(auStack_1c0,auStack_1c8,auStack_1b8,7);
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_1b8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1c8);
  puVar4 = auStack_1c0;
  func_0x00010b9a8f60(extraout_x8_00);
  puVar2 = auStack_1c0;
  func_0x000104bdbf78();
  func_0x000105280954();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_158;
  lVar8 = -0x70;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_1c8);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_1d8 = FUN_1052805fc;
  pppuStack_1e0 = &ppuStack_120;
  func_0x00010528096c();
  uVar7 = 0;
  if ((bRam0000000113818228 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818228;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_2b8,"_djinni_record_CampaignMetadata");
      pcVar5 = "adResponseBytes";
      func_0x0001003a83dc(auStack_2c0,"adResponseBytes");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_2b0,auStack_2c0,pcVar5);
      pcVar5 = "responseInteractionSetting";
      func_0x0001003a83dc(auStack_2c8,"responseInteractionSetting");
      FUN_105280834();
      func_0x0001003b1b50(auStack_298,auStack_2c8,pcVar5);
      pcVar5 = "feedInsertionIndex";
      func_0x0001003a83dc(auStack_2d0,"feedInsertionIndex");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_280,auStack_2d0,pcVar5);
      pcVar5 = "adSyncAttemptId";
      func_0x0001003a83dc(auStack_2d8,"adSyncAttemptId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_268,auStack_2d8,pcVar5);
      pcVar5 = "chatHeadline";
      func_0x0001003a83dc(auStack_2e0,"chatHeadline");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_250,auStack_2e0,pcVar5);
      pcVar5 = "campaignDisplayMode";
      func_0x0001003a83dc(auStack_2e8,"campaignDisplayMode");
      FUN_10528088c();
      func_0x0001003b1b50(auStack_238,auStack_2e8,pcVar5);
      pcVar5 = "isNoFillAd";
      func_0x0001003a83dc(auStack_2f0,"isNoFillAd");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_220,auStack_2f0,pcVar5);
      puVar2 = auStack_2b0;
      uVar7 = 0;
      func_0x000104bdbd44(0x113818218,auStack_2b8,0,auStack_2b0,7);
      lVar8 = 0x90;
      do {
        func_0x0001003b1c5c(puVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_2f0);
      func_0x0001003a8c94(auStack_2e8);
      func_0x0001003a8c94(auStack_2e0);
      func_0x0001003a8c94(auStack_2d8);
      func_0x0001003a8c94(auStack_2d0);
      func_0x0001003a8c94(auStack_2c8);
      func_0x0001003a8c94(auStack_2c0);
      func_0x0001003a8c94(auStack_2b8);
      puVar4 = (undefined1 *)0x113818228;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x000105280954();
  if ((bool)uVar1) {
    return (undefined1 *)0x113818218;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = puVar4[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_2f8 = FUN_10528080c;
  uStack_318 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_310 = uVar7;
  puStack_308 = puVar2;
  pppuStack_300 = &pppuStack_1e0;
  FUN_10529dde0();
  func_0x0001003b2110(auStack_338,0x113818cc0);
  func_0x000108b80a1c(auStack_328,puVar4);
  func_0x000104bdb9bc(auStack_330,auStack_338,auStack_328,1);
  func_0x00010b9a8d98(auStack_328);
  func_0x0001003b1f60(auStack_338);
  iVar6 = (int)auStack_330;
  func_0x00010b9a8f60(extraout_x8);
  puVar4 = auStack_330;
  func_0x000104bdbf78(puVar4);
  FUN_10529dec4(uStack_318);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_328);
  func_0x0001003b1f60(auStack_338);
  __Unwind_Resume(puVar4);
  pcStack_348 = FUN_10529dde0;
  uStack_358 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_350 = &pppuStack_300;
  if ((bRam0000000113818cc8 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_378,"_djinni_record_UUID");
      pcVar5 = "id";
      func_0x0001003a83dc(auStack_380,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_370,auStack_380,pcVar5);
      iVar6 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_378,0,auStack_370,1);
      func_0x0001003b1c5c(auStack_370);
      func_0x0001003a8c94(auStack_380);
      func_0x0001003a8c94(auStack_378);
      puVar4 = (undefined1 *)0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_358);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818cb8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105283dbc; end: 105283f1b;  */

undefined1 * FUN_105283dbc(undefined1 *param_1,int param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  long lVar8;
  undefined1 auStack_300 [8];
  undefined1 auStack_2f8 [8];
  undefined1 auStack_2f0 [24];
  undefined8 uStack_2d8;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined1 auStack_2b8 [8];
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [16];
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [32];
  undefined1 **ppuStack_160;
  code *pcStack_158;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [16];
  undefined4 uStack_128;
  undefined2 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined2 uStack_d0;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818318 & 1) == 0) {
    param_1 = (undefined1 *)0x113818318;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_ConversationSubTypeMetadata");
      pcVar5 = "campaignMetadata";
      func_0x0001003a83dc(auStack_80,"campaignMetadata");
      FUN_105283f58();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar5);
      pcVar5 = "publicGroupMetadata";
      func_0x0001003a83dc(auStack_88,"publicGroupMetadata");
      FUN_105283fb4();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar5);
      pcVar5 = "botConversationMetadata";
      func_0x0001003a83dc(auStack_90,"botConversationMetadata");
      FUN_105284010();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x113818308,auStack_78,0,auStack_70,3);
      lVar8 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar8);
        param_2 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        in_ZR = lVar8 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = (undefined1 *)0x113818318;
      ___cxa_guard_release();
    }
  }
  func_0x00010528407c(uStack_28);
  if ((bool)in_ZR) {
    return (undefined1 *)0x113818308;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if (param_1[0x70] != '\x01') {
    *(undefined2 *)(extraout_x8_00 + 1) = 1;
    *extraout_x8_00 = 0;
    return param_1;
  }
  pcStack_98 = FUN_105283f1c;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010528096c();
  FUN_1052805fc();
  func_0x0001003b2110(auStack_148,0x113818220);
  func_0x000108b80a1c(auStack_138,param_1);
  uStack_128 = *(undefined4 *)(param_1 + 0x18);
  uStack_120 = 4;
  if (param_1[0x20] == '\x01') {
    uStack_118 = CONCAT44(uStack_118._4_4_,*(undefined4 *)(param_1 + 0x1c));
    uStack_110 = 4;
  }
  else {
    uStack_118 = 0;
    uStack_110 = 1;
  }
  uStack_10f = 0;
  FUN_10528080c(auStack_108,param_1 + 0x28);
  func_0x000105280820(auStack_f8,param_1 + 0x48);
  uStack_e8 = *(undefined4 *)(param_1 + 0x68);
  uStack_e0 = 4;
  auStack_d8[0] = param_1[0x6c];
  uStack_d0 = 7;
  func_0x000104bdb9bc(auStack_140,auStack_148,auStack_138,7);
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_138 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_148);
  puVar4 = auStack_140;
  func_0x00010b9a8f60(extraout_x8_00);
  puVar2 = auStack_140;
  func_0x000104bdbf78();
  func_0x000105280954();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_d8;
  lVar8 = -0x70;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_148);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_158 = FUN_1052805fc;
  ppuStack_160 = &puStack_a0;
  func_0x00010528096c();
  uVar7 = 0;
  if ((bRam0000000113818228 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818228;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_238,"_djinni_record_CampaignMetadata");
      pcVar5 = "adResponseBytes";
      func_0x0001003a83dc(auStack_240,"adResponseBytes");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_230,auStack_240,pcVar5);
      pcVar5 = "responseInteractionSetting";
      func_0x0001003a83dc(auStack_248,"responseInteractionSetting");
      FUN_105280834();
      func_0x0001003b1b50(auStack_218,auStack_248,pcVar5);
      pcVar5 = "feedInsertionIndex";
      func_0x0001003a83dc(auStack_250,"feedInsertionIndex");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_200,auStack_250,pcVar5);
      pcVar5 = "adSyncAttemptId";
      func_0x0001003a83dc(auStack_258,"adSyncAttemptId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_1e8,auStack_258,pcVar5);
      pcVar5 = "chatHeadline";
      func_0x0001003a83dc(auStack_260,"chatHeadline");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_1d0,auStack_260,pcVar5);
      pcVar5 = "campaignDisplayMode";
      func_0x0001003a83dc(auStack_268,"campaignDisplayMode");
      FUN_10528088c();
      func_0x0001003b1b50(auStack_1b8,auStack_268,pcVar5);
      pcVar5 = "isNoFillAd";
      func_0x0001003a83dc(auStack_270,"isNoFillAd");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1a0,auStack_270,pcVar5);
      puVar2 = auStack_230;
      uVar7 = 0;
      func_0x000104bdbd44(0x113818218,auStack_238,0,auStack_230,7);
      lVar8 = 0x90;
      do {
        func_0x0001003b1c5c(puVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_270);
      func_0x0001003a8c94(auStack_268);
      func_0x0001003a8c94(auStack_260);
      func_0x0001003a8c94(auStack_258);
      func_0x0001003a8c94(auStack_250);
      func_0x0001003a8c94(auStack_248);
      func_0x0001003a8c94(auStack_240);
      func_0x0001003a8c94(auStack_238);
      puVar4 = (undefined1 *)0x113818228;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x000105280954();
  if ((bool)uVar1) {
    return (undefined1 *)0x113818218;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = puVar4[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_278 = FUN_10528080c;
  uStack_298 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_290 = uVar7;
  puStack_288 = puVar2;
  pppuStack_280 = &ppuStack_160;
  FUN_10529dde0();
  func_0x0001003b2110(auStack_2b8,0x113818cc0);
  func_0x000108b80a1c(auStack_2a8,puVar4);
  func_0x000104bdb9bc(auStack_2b0,auStack_2b8,auStack_2a8,1);
  func_0x00010b9a8d98(auStack_2a8);
  func_0x0001003b1f60(auStack_2b8);
  iVar6 = (int)auStack_2b0;
  func_0x00010b9a8f60(extraout_x8);
  puVar4 = auStack_2b0;
  func_0x000104bdbf78(puVar4);
  FUN_10529dec4(uStack_298);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_2a8);
  func_0x0001003b1f60(auStack_2b8);
  __Unwind_Resume(puVar4);
  pcStack_2c8 = FUN_10529dde0;
  uStack_2d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_2d0 = &pppuStack_280;
  if ((bRam0000000113818cc8 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_2f8,"_djinni_record_UUID");
      pcVar5 = "id";
      func_0x0001003a83dc(auStack_300,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_2f0,auStack_300,pcVar5);
      iVar6 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_2f8,0,auStack_2f0,1);
      func_0x0001003b1c5c(auStack_2f0);
      func_0x0001003a8c94(auStack_300);
      func_0x0001003a8c94(auStack_2f8);
      puVar4 = (undefined1 *)0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_2d8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818cb8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105283f1c; end: 105283f57;  */

undefined1 * FUN_105283f1c(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *extraout_x8;
  long lVar8;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [24];
  undefined8 uStack_248;
  undefined1 ***pppuStack_240;
  code *pcStack_238;
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [16];
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined1 **ppuStack_1f0;
  code *pcStack_1e8;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [32];
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [16];
  undefined4 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined1 auStack_48 [8];
  undefined2 uStack_40;
  
  if (param_2[0x70] != '\x01') {
    *(undefined2 *)(param_1 + 1) = 1;
    *param_1 = 0;
    return param_2;
  }
  func_0x00010528096c();
  FUN_1052805fc();
  func_0x0001003b2110(auStack_b8,0x113818220);
  func_0x000108b80a1c(auStack_a8,param_2);
  uStack_98 = *(undefined4 *)(param_2 + 0x18);
  uStack_90 = 4;
  if (param_2[0x20] == '\x01') {
    uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(param_2 + 0x1c));
    uStack_80 = 4;
  }
  else {
    uStack_88 = 0;
    uStack_80 = 1;
  }
  uStack_7f = 0;
  FUN_10528080c(auStack_78,param_2 + 0x28);
  func_0x000105280820(auStack_68,param_2 + 0x48);
  uStack_58 = *(undefined4 *)(param_2 + 0x68);
  uStack_50 = 4;
  auStack_48[0] = param_2[0x6c];
  uStack_40 = 7;
  func_0x000104bdb9bc(auStack_b0,auStack_b8,auStack_a8,7);
  lVar8 = 0x60;
  do {
    func_0x00010b9a8d98(auStack_a8 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_b8);
  puVar4 = auStack_b0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_b0;
  func_0x000104bdbf78();
  func_0x000105280954();
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = auStack_48;
  lVar8 = -0x70;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -0x10;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_b8);
  puVar4 = puVar2;
  __Unwind_Resume();
  pcStack_c8 = FUN_1052805fc;
  puStack_d0 = &stack0xfffffffffffffff0;
  func_0x00010528096c();
  uVar7 = 0;
  if ((bRam0000000113818228 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818228;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_1a8,"_djinni_record_CampaignMetadata");
      pcVar5 = "adResponseBytes";
      func_0x0001003a83dc(auStack_1b0,"adResponseBytes");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_1a0,auStack_1b0,pcVar5);
      pcVar5 = "responseInteractionSetting";
      func_0x0001003a83dc(auStack_1b8,"responseInteractionSetting");
      FUN_105280834();
      func_0x0001003b1b50(auStack_188,auStack_1b8,pcVar5);
      pcVar5 = "feedInsertionIndex";
      func_0x0001003a83dc(auStack_1c0,"feedInsertionIndex");
      func_0x000104bef494();
      func_0x0001003b1b50(auStack_170,auStack_1c0,pcVar5);
      pcVar5 = "adSyncAttemptId";
      func_0x0001003a83dc(auStack_1c8,"adSyncAttemptId");
      func_0x000104bf117c();
      func_0x0001003b1b50(auStack_158,auStack_1c8,pcVar5);
      pcVar5 = "chatHeadline";
      func_0x0001003a83dc(auStack_1d0,"chatHeadline");
      func_0x000104bf1120();
      func_0x0001003b1b50(auStack_140,auStack_1d0,pcVar5);
      pcVar5 = "campaignDisplayMode";
      func_0x0001003a83dc(auStack_1d8,"campaignDisplayMode");
      FUN_10528088c();
      func_0x0001003b1b50(auStack_128,auStack_1d8,pcVar5);
      pcVar5 = "isNoFillAd";
      func_0x0001003a83dc(auStack_1e0,"isNoFillAd");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_110,auStack_1e0,pcVar5);
      puVar2 = auStack_1a0;
      uVar7 = 0;
      func_0x000104bdbd44(0x113818218,auStack_1a8,0,auStack_1a0,7);
      lVar8 = 0x90;
      do {
        func_0x0001003b1c5c(puVar2 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1e0);
      func_0x0001003a8c94(auStack_1d8);
      func_0x0001003a8c94(auStack_1d0);
      func_0x0001003a8c94(auStack_1c8);
      func_0x0001003a8c94(auStack_1c0);
      func_0x0001003a8c94(auStack_1b8);
      func_0x0001003a8c94(auStack_1b0);
      func_0x0001003a8c94(auStack_1a8);
      puVar4 = (undefined1 *)0x113818228;
      ___cxa_guard_release();
      uVar7 = 0xffffffffffffffe8;
    }
  }
  func_0x000105280954();
  if ((bool)uVar1) {
    return (undefined1 *)0x113818218;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  uVar1 = puVar4[0x18] == '\x01';
  if (!(bool)uVar1) {
    *(undefined2 *)(extraout_x8 + 1) = 1;
    *extraout_x8 = 0;
    return puVar4;
  }
  pcStack_1e8 = FUN_10528080c;
  uStack_208 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uStack_200 = uVar7;
  puStack_1f8 = puVar2;
  ppuStack_1f0 = &puStack_d0;
  FUN_10529dde0();
  func_0x0001003b2110(auStack_228,0x113818cc0);
  func_0x000108b80a1c(auStack_218,puVar4);
  func_0x000104bdb9bc(auStack_220,auStack_228,auStack_218,1);
  func_0x00010b9a8d98(auStack_218);
  func_0x0001003b1f60(auStack_228);
  iVar6 = (int)auStack_220;
  func_0x00010b9a8f60(extraout_x8);
  puVar4 = auStack_220;
  func_0x000104bdbf78(puVar4);
  FUN_10529dec4(uStack_208);
  if ((bool)uVar1) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x00010b9a8d98(auStack_218);
  func_0x0001003b1f60(auStack_228);
  __Unwind_Resume(puVar4);
  pcStack_238 = FUN_10529dde0;
  uStack_248 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_240 = &ppuStack_1f0;
  if ((bRam0000000113818cc8 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818cc8;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_268,"_djinni_record_UUID");
      pcVar5 = "id";
      func_0x0001003a83dc(auStack_270,"id");
      func_0x000108b80a94();
      func_0x0001003b1b50(auStack_260,auStack_270,pcVar5);
      iVar6 = 0;
      func_0x000104bdbd44(0x113818cb8,auStack_268,0,auStack_260,1);
      func_0x0001003b1c5c(auStack_260);
      func_0x0001003a8c94(auStack_270);
      func_0x0001003a8c94(auStack_268);
      puVar4 = (undefined1 *)0x113818cc8;
      ___cxa_guard_release(0x113818cc8);
    }
  }
  FUN_10529dec4(uStack_248);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818cb8;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105283f58; end: 105283fb3;  */

undefined8 FUN_105283f58(void)

{
  int iVar1;
  
  if ((bRam00000001130cba80 & 1) == 0) {
    iVar1 = 0x130cba80;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052805fc();
      func_0x00010b990784(0x1130cba70);
      ___cxa_guard_release(0x1130cba80);
    }
  }
  return 0x1130cba70;
}



/* Entry: 105283fb4; end: 10528400f;  */

undefined8 FUN_105283fb4(void)

{
  int iVar1;
  
  if ((bRam00000001130cba98 & 1) == 0) {
    iVar1 = 0x130cba98;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105297ba4();
      func_0x00010b990784(0x1130cba88);
      ___cxa_guard_release(0x1130cba98);
    }
  }
  return 0x1130cba88;
}



/* Entry: 105284010; end: 10528406b;  */

undefined8 FUN_105284010(void)

{
  int iVar1;
  
  if ((bRam00000001130cbab0 & 1) == 0) {
    iVar1 = 0x130cbab0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10527f68c();
      func_0x00010b990784(0x1130cbaa0);
      ___cxa_guard_release(0x1130cbab0);
    }
  }
  return 0x1130cbaa0;
}



/* Entry: 10528406c; end: 10528408f;  */

void FUN_10528406c(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = 0;
  return;
}



/* Entry: 105284090; end: 10528413f;  */

void FUN_105284090(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_10529dcb8(&uStack_40,lStack_28 + 0x18);
  iVar1 = (int)lStack_28 + 0x28;
  func_0x00010b9a9518();
  lVar2 = lStack_28 + 0x38;
  func_0x000104bedf58();
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  *(int *)(param_1 + 3) = iVar1;
  param_1[4] = lVar2;
  param_1[5] = param_3 & 0xff;
  func_0x000100100fec(&uStack_40);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 105284140; end: 1052842ab;  */

undefined1 * FUN_105284140(undefined1 *param_1,int param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  long lVar7;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [8];
  undefined1 auStack_220 [8];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [8];
  undefined1 auStack_208 [8];
  undefined1 auStack_200 [8];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined1 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined2 uStack_120;
  undefined4 uStack_118;
  undefined2 uStack_110;
  undefined4 uStack_108;
  undefined2 uStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_e0;
  undefined4 uStack_d8;
  undefined2 uStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818330 & 1) == 0) {
    param_1 = (undefined1 *)0x113818330;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_78,"_djinni_record_ConversationSyncRequest");
      pcVar2 = "conversationId";
      func_0x0001003a83dc(auStack_80,"conversationId");
      FUN_10529dde0();
      func_0x0001003b1b50(auStack_70,auStack_80,pcVar2);
      pcVar2 = "conversationType";
      func_0x0001003a83dc(auStack_88,"conversationType");
      func_0x000104bef548();
      func_0x0001003b1b50(auStack_58,auStack_88,pcVar2);
      pcVar2 = "minVersion";
      func_0x0001003a83dc(auStack_90,"minVersion");
      func_0x000104bef438();
      func_0x0001003b1b50(auStack_40,auStack_90,pcVar2);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818320,auStack_78,0,auStack_70,3);
      lVar7 = 0x30;
      do {
        func_0x0001003b1c5c(auStack_70 + lVar7);
        param_2 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x18);
      func_0x0001003a8c94(auStack_90);
      func_0x0001003a8c94(auStack_88);
      func_0x0001003a8c94(auStack_80);
      func_0x0001003a8c94(auStack_78);
      param_1 = (undefined1 *)0x113818330;
      ___cxa_guard_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)0x113818320;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_98 = FUN_1052842ac;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_a0 = &stack0xfffffffffffffff0;
  FUN_1052843d8();
  func_0x0001003b2110(auStack_138,0x113818340);
  auStack_128[0] = *param_1;
  uStack_120 = 7;
  uStack_118 = *(undefined4 *)(param_1 + 4);
  uStack_108 = *(undefined4 *)(param_1 + 8);
  uStack_f8 = *(undefined4 *)(param_1 + 0xc);
  uStack_e8 = *(undefined4 *)(param_1 + 0x10);
  uStack_110 = 4;
  uStack_100 = 4;
  uStack_f0 = 4;
  uStack_e0 = 4;
  uStack_d8 = *(undefined4 *)(param_1 + 0x14);
  uStack_d0 = 4;
  func_0x000104bdb9bc(auStack_130,auStack_138,auStack_128,6);
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_128 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar4 = auStack_130;
  func_0x00010b9a8f60(extraout_x8);
  puVar3 = auStack_130;
  func_0x000104bdbf78();
  FUN_1052845c0(uStack_c8);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_128 + lVar7);
    iVar5 = (int)puVar4;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_138);
  puVar4 = puVar3;
  __Unwind_Resume(puVar3);
  pcStack_148 = FUN_1052843d8;
  uStack_168 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = auStack_128;
  puStack_158 = puVar3;
  ppuStack_150 = &puStack_a0;
  if ((bRam0000000113818348 & 1) == 0) {
    puVar4 = (undefined1 *)0x113818348;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_200,"_djinni_record_ConversationSyncStats");
      pcVar2 = "conversationSyncAttempted";
      func_0x0001003a83dc(auStack_208,"conversationSyncAttempted");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_1f8,auStack_208,pcVar2);
      pcVar2 = "responseSize";
      func_0x0001003a83dc(auStack_210,"responseSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_1e0,auStack_210,pcVar2);
      pcVar2 = "messagesCount";
      func_0x0001003a83dc(auStack_218,"messagesCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_1c8,auStack_218,pcVar2);
      pcVar2 = "conversationUpdateCount";
      func_0x0001003a83dc(auStack_220,"conversationUpdateCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_1b0,auStack_220,pcVar2);
      pcVar2 = "eelMessagesCount";
      func_0x0001003a83dc(auStack_228,"eelMessagesCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_198,auStack_228,pcVar2);
      pcVar2 = "eelDecryptionLatencyUs";
      func_0x0001003a83dc(auStack_230,"eelDecryptionLatencyUs");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_180,auStack_230,pcVar2);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818338,auStack_200,0,auStack_1f8,6);
      lVar7 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_1f8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_230);
      func_0x0001003a8c94(auStack_228);
      func_0x0001003a8c94(auStack_220);
      func_0x0001003a8c94(auStack_218);
      func_0x0001003a8c94(auStack_210);
      func_0x0001003a8c94(auStack_208);
      func_0x0001003a8c94(auStack_200);
      puVar4 = (undefined1 *)0x113818348;
      ___cxa_guard_release(0x113818348);
    }
  }
  FUN_1052845c0(uStack_168);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818338;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 1052842ac; end: 1052843d7;  */

undefined1 * FUN_1052842ac(undefined8 param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 uStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined2 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_80;
  undefined4 uStack_78;
  undefined2 uStack_70;
  undefined4 uStack_68;
  undefined2 uStack_60;
  undefined4 uStack_58;
  undefined2 uStack_50;
  undefined4 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_1052843d8();
  func_0x0001003b2110(auStack_a8,0x113818340);
  auStack_98[0] = *param_2;
  uStack_90 = 7;
  uStack_88 = *(undefined4 *)(param_2 + 4);
  uStack_78 = *(undefined4 *)(param_2 + 8);
  uStack_68 = *(undefined4 *)(param_2 + 0xc);
  uStack_58 = *(undefined4 *)(param_2 + 0x10);
  uStack_80 = 4;
  uStack_70 = 4;
  uStack_60 = 4;
  uStack_50 = 4;
  uStack_48 = *(undefined4 *)(param_2 + 0x14);
  uStack_40 = 4;
  func_0x000104bdb9bc(auStack_a0,auStack_a8,auStack_98,6);
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_98 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  puVar3 = auStack_a0;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_a0;
  func_0x000104bdbf78();
  FUN_1052845c0(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x50;
  do {
    func_0x00010b9a8d98(auStack_98 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_a8);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_b8 = FUN_1052843d8;
  uStack_d8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_d0 = auStack_98;
  puStack_c8 = puVar2;
  puStack_c0 = &stack0xfffffffffffffff0;
  if ((bRam0000000113818348 & 1) == 0) {
    puVar3 = (undefined1 *)0x113818348;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_170,"_djinni_record_ConversationSyncStats");
      pcVar4 = "conversationSyncAttempted";
      func_0x0001003a83dc(auStack_178,"conversationSyncAttempted");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_168,auStack_178,pcVar4);
      pcVar4 = "responseSize";
      func_0x0001003a83dc(auStack_180,"responseSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_150,auStack_180,pcVar4);
      pcVar4 = "messagesCount";
      func_0x0001003a83dc(auStack_188,"messagesCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_138,auStack_188,pcVar4);
      pcVar4 = "conversationUpdateCount";
      func_0x0001003a83dc(auStack_190,"conversationUpdateCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_120,auStack_190,pcVar4);
      pcVar4 = "eelMessagesCount";
      func_0x0001003a83dc(auStack_198,"eelMessagesCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_108,auStack_198,pcVar4);
      pcVar4 = "eelDecryptionLatencyUs";
      func_0x0001003a83dc(auStack_1a0,"eelDecryptionLatencyUs");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_f0,auStack_1a0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x113818338,auStack_170,0,auStack_168,6);
      lVar7 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_168 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_1a0);
      func_0x0001003a8c94(auStack_198);
      func_0x0001003a8c94(auStack_190);
      func_0x0001003a8c94(auStack_188);
      func_0x0001003a8c94(auStack_180);
      func_0x0001003a8c94(auStack_178);
      func_0x0001003a8c94(auStack_170);
      puVar3 = (undefined1 *)0x113818348;
      ___cxa_guard_release(0x113818348);
    }
  }
  FUN_1052845c0(uStack_d8);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818338;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 1052843d8; end: 1052845bf;  */

undefined8 FUN_1052843d8(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818348 & 1) == 0) {
    param_1 = 0x113818348;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_c0,"_djinni_record_ConversationSyncStats");
      pcVar1 = "conversationSyncAttempted";
      func_0x0001003a83dc(auStack_c8,"conversationSyncAttempted");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_b8,auStack_c8,pcVar1);
      pcVar1 = "responseSize";
      func_0x0001003a83dc(auStack_d0,"responseSize");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_a0,auStack_d0,pcVar1);
      pcVar1 = "messagesCount";
      func_0x0001003a83dc(auStack_d8,"messagesCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_88,auStack_d8,pcVar1);
      pcVar1 = "conversationUpdateCount";
      func_0x0001003a83dc(auStack_e0,"conversationUpdateCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_70,auStack_e0,pcVar1);
      pcVar1 = "eelMessagesCount";
      func_0x0001003a83dc(auStack_e8,"eelMessagesCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_58,auStack_e8,pcVar1);
      pcVar1 = "eelDecryptionLatencyUs";
      func_0x0001003a83dc(auStack_f0,"eelDecryptionLatencyUs");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_40,auStack_f0,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x113818338,auStack_c0,0,auStack_b8,6);
      lVar3 = 0x78;
      do {
        func_0x0001003b1c5c(auStack_b8 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_f0);
      func_0x0001003a8c94(auStack_e8);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      param_1 = 0x113818348;
      ___cxa_guard_release(0x113818348);
    }
  }
  FUN_1052845c0(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818338;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 1052845c0; end: 1052845d3;  */

void FUN_1052845c0(void)

{
  return;
}



/* Entry: 1052845d4; end: 1052847a3;  */

void FUN_1052845d4(ulong param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x0001052849ec();
  bVar1 = *(byte *)((param_1 & 0xffffffff) + 0x113818350);
  *(undefined1 *)((param_1 & 0xffffffff) + 0x113818350) = 1;
  if ((bVar1 & 1) != 0) goto LAB_105284624;
  if ((bRam0000000113818380 & 1) == 0) goto LAB_105284640;
  while( true ) {
    func_0x000108b80888(0x113818370);
LAB_105284624:
    func_0x0001052849c4();
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
LAB_105284640:
    iVar2 = 0x13818380;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      FUN_105284840();
      pcVar3 = "onSuccess";
      func_0x0001003a83dc(&uStack_80,"onSuccess");
      func_0x0001003b166c(auStack_a0);
      FUN_10529dde0();
      func_0x0001003adcc0(auStack_68,pcVar3);
      func_0x000104bdbd48(auStack_90,auStack_a0,auStack_68,1);
      uStack_58 = uStack_80;
      uStack_80 = 0;
      func_0x0001003aef98(auStack_50,auStack_90);
      pcVar3 = "onError";
      func_0x0001003a83dc(&uStack_a8,"onError");
      func_0x0001003b166c(auStack_c8);
      func_0x000104bf213c();
      func_0x0001003adcc0(auStack_78,pcVar3);
      func_0x000104bdbd48(auStack_b8,auStack_c8,auStack_78,1);
      uStack_40 = uStack_a8;
      uStack_a8 = 0;
      func_0x0001003aef98(auStack_38,auStack_b8);
      func_0x000104bdbd44(0x113818370,0x113818388,1,&uStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_50 + lVar4 + -8);
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001052849dc(auStack_b8);
      func_0x0001052849dc(auStack_78);
      func_0x0001052849dc(auStack_c8);
      func_0x0001003a8c94(&uStack_a8);
      func_0x0001052849dc(auStack_90);
      func_0x0001052849dc(auStack_68);
      func_0x0001052849dc(auStack_a0);
      func_0x0001003a8c94(&uStack_80);
      ___cxa_guard_release(0x113818380);
    }
  }
  return;
}



/* Entry: 1052847a4; end: 10528483f;  */

undefined8 FUN_1052847a4(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lStack_20;
  undefined2 uStack_18;
  
  if ((bRam0000000113818368 & 1) == 0) {
    iVar4 = 0x13818368;
    ___cxa_guard_acquire();
    if (iVar4 != 0) {
      FUN_105284840();
      lStack_20 = lRam0000000113818388;
      if (lRam0000000113818388 != 0) {
        piVar1 = (int *)(lRam0000000113818388 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      uStack_18 = 0xff00;
      func_0x0001003ad9a4(0x113818358,&lStack_20);
      func_0x0001003a8c94(&lStack_20);
      ___cxa_guard_release(0x113818368);
    }
  }
  return 0x113818358;
}



/* Entry: 105284840; end: 105284893;  */

void FUN_105284840(void)

{
  int iVar1;
  
  if ((bRam0000000113818390 & 1) == 0) {
    iVar1 = 0x13818390;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(0x113818388,"_djinni_interface_CreateConversationCallback");
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x113818390);
      return;
    }
  }
  return;
}



/* Entry: 105284894; end: 10528490b;  */

undefined1 * FUN_105284894(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [16];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [24];
  
  func_0x0001052849ec();
  FUN_10529dd1c(auStack_38,param_2);
  uVar2 = 0;
  func_0x000104be6a78(auStack_48,param_1 + 8,0,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x0001052849e4();
  func_0x0001052849c4();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001052849e4();
    __Unwind_Resume(puVar1);
    func_0x0001052849ec();
    uStack_80 = 4;
    auStack_88[0] = uVar2;
    func_0x000104be6a78(auStack_98,puVar1 + 8,1,auStack_88,1);
    puVar1 = auStack_98;
    func_0x00010b9a8d98();
    func_0x0001052849e4();
    func_0x0001052849c4();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      func_0x0001052849e4();
      __Unwind_Resume(puVar1);
      func_0x0001052849fc();
      return puVar1;
    }
  }
  return puVar1;
}



/* Entry: 10528490c; end: 105284977;  */

undefined1 * FUN_10528490c(long param_1,undefined4 param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 auStack_48 [16];
  undefined4 auStack_38 [2];
  undefined2 uStack_30;
  
  auStack_38[0] = param_2;
  func_0x0001052849ec();
  uStack_30 = 4;
  func_0x000104be6a78(auStack_48,param_1 + 8,1,auStack_38,1);
  puVar1 = auStack_48;
  func_0x00010b9a8d98();
  func_0x0001052849e4();
  func_0x0001052849c4();
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x0001052849e4();
  __Unwind_Resume(puVar1);
  func_0x0001052849fc();
  return puVar1;
}



/* Entry: 105284978; end: 1052849b7;  */

void FUN_105284978(void)

{
  func_0x0001052849fc();
  return;
}



/* Entry: 1052849b8; end: 105284a13;  */

undefined8 * FUN_1052849b8(undefined8 *param_1)

{
  undefined4 uStack_24;
  
  *param_1 = &PTR_DAT_1107e7df0;
  __ZNSt3__15mutex4lockEv(0x11328ad68);
  uStack_24 = *(undefined4 *)(param_1[1] + 0x18);
  func_0x000104be7ab4(0x11328ad18,&uStack_24);
  __ZNSt3__15mutex6unlockEv(0x11328ad68);
  func_0x000104be7d74(param_1 + 5);
  func_0x000104be7db4(param_1 + 2);
  func_0x000104be7e54(param_1 + 1);
  return param_1;
}



/* Entry: 105284a14; end: 105284b27;  */

undefined1 * FUN_105284a14(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105284b28();
  func_0x0001003b2110(auStack_68,0x1138183a0);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  FUN_10528732c(auStack_48,param_2 + 2);
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar9 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar9);
    lVar9 = lVar9 + -0x10;
    uVar1 = lVar9 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar7 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar3 = auStack_60;
  func_0x000104bdbf78();
  FUN_105284cb0(uStack_38);
  if ((bool)uVar1) {
    return puVar3;
  }
  ___stack_chk_fail();
  puVar4 = auStack_48;
  lVar9 = -0x20;
  do {
    func_0x00010b9a8d98(puVar4);
    iVar6 = (int)puVar7;
    puVar4 = puVar4 + -0x10;
    lVar9 = lVar9 + 0x10;
    uVar1 = lVar9 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  __Unwind_Resume(puVar3);
  pcStack_78 = FUN_105284b28;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar9;
  puStack_88 = puVar3;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138183a8 & 1) == 0) {
    iVar2 = 0x138183a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_DeletedFeedEntry");
      pcVar5 = "reason";
      func_0x0001003a83dc(auStack_d8,"reason");
      FUN_105284c58();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "feedEntryIdentifier";
      func_0x0001003a83dc(auStack_e0,"feedEntryIdentifier");
      FUN_1052873f8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar8 = 0;
      func_0x000104bdbd44(0x113818398,auStack_d0,0,auStack_c8,2);
      lVar9 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar9);
        iVar6 = (int)uVar8;
        lVar9 = lVar9 + -0x18;
        uVar1 = lVar9 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      ___cxa_guard_release(0x1138183a8);
    }
  }
  FUN_105284cb0(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x113818398;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbac8 & 1) == 0) {
    iVar6 = 0x130cbac8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      func_0x00010b990e20(0x1130cbab8);
      ___cxa_guard_release(0x1130cbac8);
    }
  }
  return (undefined1 *)0x1130cbab8;
}



/* Entry: 105284b28; end: 105284c57;  */

undefined8 FUN_105284b28(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138183a8 & 1) == 0) {
    iVar1 = 0x138183a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_DeletedFeedEntry");
      pcVar2 = "reason";
      func_0x0001003a83dc(auStack_68,"reason");
      FUN_105284c58();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "feedEntryIdentifier";
      func_0x0001003a83dc(auStack_70,"feedEntryIdentifier");
      FUN_1052873f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x113818398,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      ___cxa_guard_release(0x1138183a8);
    }
  }
  FUN_105284cb0(uStack_28);
  if ((bool)in_ZR) {
    return 0x113818398;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbac8 & 1) == 0) {
    iVar1 = 0x130cbac8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbab8);
      ___cxa_guard_release(0x1130cbac8);
    }
  }
  return 0x1130cbab8;
}



/* Entry: 105284c58; end: 105284caf;  */

undefined8 FUN_105284c58(void)

{
  int iVar1;
  
  if ((bRam00000001130cbac8 & 1) == 0) {
    iVar1 = 0x130cbac8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x00010b990e20(0x1130cbab8);
      ___cxa_guard_release(0x1130cbac8);
    }
  }
  return 0x1130cbab8;
}



/* Entry: 105284cb0; end: 105284cc3;  */

void FUN_105284cb0(void)

{
  return;
}



/* Entry: 105284cc4; end: 105284dcb;  */

undefined1 * FUN_105284cc4(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105284dcc();
  func_0x0001003b2110(auStack_68,0x1138183b8);
  FUN_105290ef4(auStack_58,param_2);
  uStack_48 = *(undefined8 *)(param_2 + 0x20);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar8 = 0x10;
  do {
    func_0x00010b9a8d98(auStack_58 + lVar8);
    lVar8 = lVar8 + -0x10;
    uVar1 = lVar8 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_105284efc(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  puVar3 = &uStack_48;
  lVar8 = -0x20;
  do {
    func_0x00010b9a8d98(puVar3);
    iVar6 = (int)puVar4;
    puVar3 = puVar3 + -2;
    lVar8 = lVar8 + 0x10;
    uVar1 = lVar8 == 0;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar4 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_105284dcc;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lStack_90 = lVar8;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138183c0 & 1) == 0) {
    puVar4 = (undefined1 *)0x1138183c0;
    ___cxa_guard_acquire();
    if ((int)puVar4 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_DeletedMessageDescriptor");
      pcVar5 = "descriptor";
      func_0x0001003a83dc(auStack_d8,"descriptor");
      FUN_105290ffc();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar5);
      pcVar5 = "orderKey";
      func_0x0001003a83dc(auStack_e0,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar5);
      uVar7 = 0;
      func_0x000104bdbd44(0x1138183b0,auStack_d0,0,auStack_c8,2);
      lVar8 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar8);
        iVar6 = (int)uVar7;
        lVar8 = lVar8 + -0x18;
        uVar1 = lVar8 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar4 = (undefined1 *)0x1138183c0;
      ___cxa_guard_release(0x1138183c0);
    }
  }
  FUN_105284efc(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138183b0;
  }
  ___stack_chk_fail();
  if (iVar6 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar4;
}



/* Entry: 105284dcc; end: 105284efb;  */

undefined8 FUN_105284dcc(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138183c0 & 1) == 0) {
    param_1 = 0x1138183c0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_DeletedMessageDescriptor");
      pcVar1 = "descriptor";
      func_0x0001003a83dc(auStack_68,"descriptor");
      FUN_105290ffc();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "orderKey";
      func_0x0001003a83dc(auStack_70,"orderKey");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138183b0,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x1138183c0;
      ___cxa_guard_release(0x1138183c0);
    }
  }
  FUN_105284efc(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138183b0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105284efc; end: 105284f0f;  */

void FUN_105284efc(void)

{
  return;
}



/* Entry: 105284f10; end: 105285013;  */

undefined1 * FUN_105284f10(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  undefined4 *puStack_90;
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 auStack_58 [2];
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105285014();
  func_0x0001003b2110(auStack_68,0x1138183d0);
  auStack_58[0] = *param_2;
  uStack_50 = 4;
  uStack_48 = *(undefined8 *)(param_2 + 2);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_60,auStack_68,auStack_58,2);
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = auStack_60;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_60;
  func_0x000104bdbf78();
  FUN_105285144(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x10;
  do {
    func_0x00010b9a8d98((long)auStack_58 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_68);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_78 = FUN_105285014;
  uStack_98 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = auStack_58;
  puStack_88 = puVar2;
  puStack_80 = &stack0xfffffffffffffff0;
  if ((bRam00000001138183d8 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138183d8;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_d0,"_djinni_record_EnhancedNotificationPreference");
      pcVar4 = "defaultNotificationPreference";
      func_0x0001003a83dc(auStack_d8,"defaultNotificationPreference");
      func_0x000104bef6ac();
      func_0x0001003b1b50(auStack_c8,auStack_d8,pcVar4);
      pcVar4 = "temporaryMuteExpirationDeadlineMillis";
      func_0x0001003a83dc(auStack_e0,"temporaryMuteExpirationDeadlineMillis");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_b0,auStack_e0,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138183c8,auStack_d0,0,auStack_c8,2);
      lVar7 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_c8 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_e0);
      func_0x0001003a8c94(auStack_d8);
      func_0x0001003a8c94(auStack_d0);
      puVar3 = (undefined1 *)0x1138183d8;
      ___cxa_guard_release(0x1138183d8);
    }
  }
  FUN_105285144(uStack_98);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138183c8;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 105285014; end: 105285143;  */

undefined8 FUN_105285014(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138183d8 & 1) == 0) {
    param_1 = 0x1138183d8;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_EnhancedNotificationPreference");
      pcVar1 = "defaultNotificationPreference";
      func_0x0001003a83dc(auStack_68,"defaultNotificationPreference");
      func_0x000104bef6ac();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar1);
      pcVar1 = "temporaryMuteExpirationDeadlineMillis";
      func_0x0001003a83dc(auStack_70,"temporaryMuteExpirationDeadlineMillis");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138183c8,auStack_60,0,auStack_58,2);
      lVar3 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      param_1 = 0x1138183d8;
      ___cxa_guard_release(0x1138183d8);
    }
  }
  FUN_105285144(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138183c8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105285144; end: 105285157;  */

void FUN_105285144(void)

{
  return;
}



/* Entry: 105285158; end: 105285283;  */

undefined1 * FUN_105285158(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 uStack_c8;
  undefined4 *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined4 auStack_88 [2];
  undefined2 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined1 uStack_68;
  undefined2 uStack_60;
  undefined1 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  FUN_105285284();
  func_0x0001003b2110(auStack_98,0x1138183e8);
  auStack_88[0] = *param_2;
  uStack_80 = 4;
  uStack_78 = *(undefined8 *)(param_2 + 2);
  uStack_70 = 5;
  uStack_68 = *(undefined1 *)(param_2 + 4);
  uStack_60 = 7;
  uStack_58 = *(undefined1 *)((long)param_2 + 0x11);
  uStack_50 = 7;
  uStack_48 = *(undefined8 *)(param_2 + 6);
  uStack_40 = 5;
  func_0x000104bdb9bc(auStack_90,auStack_98,auStack_88,5);
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_88 + lVar7);
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar3 = auStack_90;
  func_0x00010b9a8f60(param_1);
  puVar2 = auStack_90;
  func_0x000104bdbf78();
  FUN_105285440(uStack_38);
  if ((bool)uVar1) {
    return puVar2;
  }
  ___stack_chk_fail();
  lVar7 = 0x40;
  do {
    func_0x00010b9a8d98((long)auStack_88 + lVar7);
    iVar5 = (int)puVar3;
    lVar7 = lVar7 + -0x10;
    uVar1 = lVar7 == -0x10;
  } while (!(bool)uVar1);
  func_0x0001003b1f60(auStack_98);
  puVar3 = puVar2;
  __Unwind_Resume(puVar2);
  pcStack_a8 = FUN_105285284;
  uStack_c8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puStack_c0 = auStack_88;
  puStack_b8 = puVar2;
  puStack_b0 = &stack0xfffffffffffffff0;
  if ((bRam00000001138183f0 & 1) == 0) {
    puVar3 = (undefined1 *)0x1138183f0;
    ___cxa_guard_acquire();
    if ((int)puVar3 != 0) {
      func_0x0001003a83dc(auStack_148,"_djinni_record_ExpiredStreakMetadata");
      pcVar4 = "streakCount";
      func_0x0001003a83dc(auStack_150,"streakCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_140,auStack_150,pcVar4);
      pcVar4 = "timestampMs";
      func_0x0001003a83dc(auStack_158,"timestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_128,auStack_158,pcVar4);
      pcVar4 = "isRestorable";
      func_0x0001003a83dc(auStack_160,"isRestorable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_110,auStack_160,pcVar4);
      pcVar4 = "isRestorableExtended";
      func_0x0001003a83dc(auStack_168,"isRestorableExtended");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_f8,auStack_168,pcVar4);
      pcVar4 = "restoreExpirationTimestampMs";
      func_0x0001003a83dc(auStack_170,"restoreExpirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_e0,auStack_170,pcVar4);
      uVar6 = 0;
      func_0x000104bdbd44(0x1138183e0,auStack_148,0,auStack_140,5);
      lVar7 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_140 + lVar7);
        iVar5 = (int)uVar6;
        lVar7 = lVar7 + -0x18;
        uVar1 = lVar7 == -0x18;
      } while (!(bool)uVar1);
      func_0x0001003a8c94(auStack_170);
      func_0x0001003a8c94(auStack_168);
      func_0x0001003a8c94(auStack_160);
      func_0x0001003a8c94(auStack_158);
      func_0x0001003a8c94(auStack_150);
      func_0x0001003a8c94(auStack_148);
      puVar3 = (undefined1 *)0x1138183f0;
      ___cxa_guard_release(0x1138183f0);
    }
  }
  FUN_105285440(uStack_c8);
  if ((bool)uVar1) {
    return (undefined1 *)0x1138183e0;
  }
  ___stack_chk_fail();
  if (iVar5 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return puVar3;
}



/* Entry: 105285284; end: 10528543f;  */

undefined8 FUN_105285284(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam00000001138183f0 & 1) == 0) {
    param_1 = 0x1138183f0;
    ___cxa_guard_acquire();
    if ((int)param_1 != 0) {
      func_0x0001003a83dc(auStack_a8,"_djinni_record_ExpiredStreakMetadata");
      pcVar1 = "streakCount";
      func_0x0001003a83dc(auStack_b0,"streakCount");
      func_0x000104bef760();
      func_0x0001003b1b50(auStack_a0,auStack_b0,pcVar1);
      pcVar1 = "timestampMs";
      func_0x0001003a83dc(auStack_b8,"timestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_88,auStack_b8,pcVar1);
      pcVar1 = "isRestorable";
      func_0x0001003a83dc(auStack_c0,"isRestorable");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_70,auStack_c0,pcVar1);
      pcVar1 = "isRestorableExtended";
      func_0x0001003a83dc(auStack_c8,"isRestorableExtended");
      func_0x000104bef4f0();
      func_0x0001003b1b50(auStack_58,auStack_c8,pcVar1);
      pcVar1 = "restoreExpirationTimestampMs";
      func_0x0001003a83dc(auStack_d0,"restoreExpirationTimestampMs");
      func_0x000104bef5f8();
      func_0x0001003b1b50(auStack_40,auStack_d0,pcVar1);
      uVar2 = 0;
      func_0x000104bdbd44(0x1138183e0,auStack_a8,0,auStack_a0,5);
      lVar3 = 0x60;
      do {
        func_0x0001003b1c5c(auStack_a0 + lVar3);
        param_2 = (int)uVar2;
        lVar3 = lVar3 + -0x18;
        in_ZR = lVar3 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_d0);
      func_0x0001003a8c94(auStack_c8);
      func_0x0001003a8c94(auStack_c0);
      func_0x0001003a8c94(auStack_b8);
      func_0x0001003a8c94(auStack_b0);
      func_0x0001003a8c94(auStack_a8);
      param_1 = 0x1138183f0;
      ___cxa_guard_release(0x1138183f0);
    }
  }
  FUN_105285440(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138183e0;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  return param_1;
}



/* Entry: 105285440; end: 105285453;  */

void FUN_105285440(void)

{
  return;
}



/* Entry: 105285454; end: 1052854e7;  */

void FUN_105285454(undefined8 param_1)

{
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [32];
  long lStack_28;
  
  func_0x00010b9a97d0(&lStack_28);
  FUN_1052854e8(auStack_48,lStack_28 + 0x18);
  func_0x000105285534(auStack_68,lStack_28 + 0x28);
  FUN_105285768(param_1,auStack_48,auStack_68);
  func_0x000104bee458(auStack_68);
  func_0x000104bee588(auStack_48);
  func_0x000104bdbf78(&lStack_28);
  return;
}



/* Entry: 1052854e8; end: 10528557f;  */

void FUN_1052854e8(undefined1 *param_1,long param_2)

{
  bool bVar1;
  undefined1 auStack_40 [32];
  
  bVar1 = 1 < *(byte *)(param_2 + 8);
  if (bVar1) {
    FUN_105285820(auStack_40);
    func_0x000105286354();
    func_0x000104bee5a8();
  }
  else {
    *param_1 = 0;
  }
  param_1[0x18] = bVar1;
  return;
}



/* Entry: 105285580; end: 1052856af;  */

undefined8 FUN_105285580(undefined8 param_1,int param_2)

{
  undefined1 in_ZR;
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((bRam0000000113818408 & 1) == 0) {
    iVar1 = 0x13818408;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      func_0x0001003a83dc(auStack_60,"_djinni_record_ExternalContentMetadata");
      pcVar2 = "contentReferences";
      func_0x0001003a83dc(auStack_68,"contentReferences");
      FUN_1052856b0();
      func_0x0001003b1b50(auStack_58,auStack_68,pcVar2);
      pcVar2 = "remoteMediaEncryption";
      func_0x0001003a83dc(auStack_70,"remoteMediaEncryption");
      FUN_10528570c();
      func_0x0001003b1b50(auStack_40,auStack_70,pcVar2);
      uVar3 = 0;
      func_0x000104bdbd44(0x1138183f8,auStack_60,0,auStack_58,2);
      lVar4 = 0x18;
      do {
        func_0x0001003b1c5c(auStack_58 + lVar4);
        param_2 = (int)uVar3;
        lVar4 = lVar4 + -0x18;
        in_ZR = lVar4 == -0x18;
      } while (!(bool)in_ZR);
      func_0x0001003a8c94(auStack_70);
      func_0x0001003a8c94(auStack_68);
      func_0x0001003a8c94(auStack_60);
      ___cxa_guard_release(0x113818408);
    }
  }
  func_0x000105286410(uStack_28);
  if ((bool)in_ZR) {
    return 0x1138183f8;
  }
  ___stack_chk_fail();
  if (param_2 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  if ((bRam00000001130cbae0 & 1) == 0) {
    iVar1 = 0x130cbae0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105286208();
      func_0x00010b990784(0x1130cbad0);
      ___cxa_guard_release(0x1130cbae0);
    }
  }
  return 0x1130cbad0;
}



/* Entry: 1052856b0; end: 10528570b;  */

undefined8 FUN_1052856b0(void)

{
  int iVar1;
  
  if ((bRam00000001130cbae0 & 1) == 0) {
    iVar1 = 0x130cbae0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105286208();
      func_0x00010b990784(0x1130cbad0);
      ___cxa_guard_release(0x1130cbae0);
    }
  }
  return 0x1130cbad0;
}



/* Entry: 10528570c; end: 105285767;  */

undefined8 FUN_10528570c(void)

{
  int iVar1;
  
  if ((bRam00000001130cbb10 & 1) == 0) {
    iVar1 = 0x130cbb10;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105286264();
      func_0x00010b990784(0x1130cbb00);
      ___cxa_guard_release(0x1130cbb10);
    }
  }
  return 0x1130cbb00;
}



/* Entry: 105285768; end: 105285797;  */

long FUN_105285768(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_105285798();
  FUN_1052857dc(lVar1 + 0x20,param_3);
  return param_1;
}



/* Entry: 105285798; end: 1052857c3;  */

undefined1 * FUN_105285798(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_1052857c4();
  return param_1;
}



/* Entry: 1052857c4; end: 1052857db;  */

void FUN_1052857c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
  return;
}



/* Entry: 1052857dc; end: 105285807;  */

undefined1 * FUN_1052857dc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  FUN_105285808();
  return param_1;
}



/* Entry: 105285808; end: 10528581f;  */

void FUN_105285808(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
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
  return;
}



/* Entry: 105285820; end: 1052858bf;  */

void FUN_105285820(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_50 [32];
  
  func_0x0001052863a0();
  if (((bool)in_ZR) && (lVar2 = *param_1, lVar2 != 0)) {
    FUN_1052858c0();
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_105286424(auStack_50,lVar1);
      func_0x000105285bd4();
      func_0x000100100fec(auStack_50);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 1052858c0; end: 10528591f;  */

void FUN_1052858c0(long *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001052863fc();
  if ((ulong)(extraout_x9 >> 5) < param_2) {
    if (param_2 >> 0x3b != 0) {
      FUN_105285920();
      func_0x000105286384();
      func_0x000105286338();
      func_0x0001052863c4();
      func_0x0001052863dc();
      FUN_1052859ec(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1])
                   );
      func_0x0001052862f4();
      return;
    }
    FUN_105285964(auStack_48);
    func_0x000105286394();
    FUN_10528592c();
    func_0x000105286384();
  }
  return;
}



/* Entry: 105285920; end: 10528592b;  */

void FUN_105285920(long *param_1,long param_2)

{
  func_0x0001052863c4();
  func_0x0001052863dc();
  FUN_1052859ec(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x0001052862f4();
  return;
}



/* Entry: 10528592c; end: 105285963;  */

void FUN_10528592c(long *param_1,long param_2)

{
  func_0x0001052863dc();
  FUN_1052859ec(param_1 + 2,*param_1,param_1[1],*(long *)(param_2 + 8) + (*param_1 - param_1[1]));
  func_0x0001052862f4();
  return;
}



/* Entry: 105285964; end: 1052859cf;  */

long * FUN_105285964(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x0001052859ac();
  }
  lVar1 = param_4 + param_3 * 0x20;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x20;
  return param_1;
}



/* Entry: 1052859d0; end: 1052859eb;  */

void FUN_1052859d0(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 uStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  uStack_70 = param_1;
  lStack_50 = param_4;
  for (uVar1 = param_2; lStack_48 = param_4, uVar1 != param_3; uVar1 = uVar1 + 0x20) {
    FUN_105285ac0(param_4,uVar1);
    param_4 = lStack_48 + 0x20;
  }
  uStack_58 = 1;
  FUN_105285a90(param_1,param_2,param_3);
  FUN_105285aec(&uStack_70);
  return;
}



/* Entry: 1052859ec; end: 105285a8f;  */

void FUN_1052859ec(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uStack_60;
  long *plStack_58;
  long *plStack_50;
  undefined1 uStack_48;
  long lStack_40;
  long lStack_38;
  
  plStack_58 = &lStack_40;
  plStack_50 = &lStack_38;
  uStack_60 = param_1;
  lStack_40 = param_4;
  for (lVar1 = param_2; lStack_38 = param_4, lVar1 != param_3; lVar1 = lVar1 + 0x20) {
    FUN_105285ac0(param_4,lVar1);
    param_4 = lStack_38 + 0x20;
  }
  uStack_48 = 1;
  FUN_105285a90(param_1,param_2,param_3);
  FUN_105285aec(&uStack_60);
  return;
}



/* Entry: 105285a90; end: 105285abf;  */

void FUN_105285a90(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x20) {
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105285ac0; end: 105285aeb;  */

void FUN_105285ac0(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return;
}



/* Entry: 105285aec; end: 105285b1b;  */

long FUN_105285aec(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105285b1c(param_1);
  }
  return param_1;
}



/* Entry: 105285b1c; end: 105285b3b;  */

void FUN_105285b1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105285b3c; end: 105285b97;  */

void FUN_105285b3c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105285b98; end: 105285b9f;  */

void FUN_105285b98(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052863dc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105285ba0; end: 105285c37;  */

void FUN_105285ba0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052863dc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x20;
    func_0x000100100fec();
  }
  return;
}



/* Entry: 105285c38; end: 105285cbb;  */

long FUN_105285c38(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined1 auStack_48 [16];
  long lStack_38;
  
  func_0x0001052863e8();
  FUN_105285cbc();
  FUN_105285964(auStack_48,param_1,unaff_x19[1] - *unaff_x19 >> 5,unaff_x19 + 2);
  FUN_105285ac0(lStack_38);
  lStack_38 = lStack_38 + 0x20;
  func_0x000105286394();
  FUN_10528592c();
  lVar1 = unaff_x19[1];
  func_0x000105286384();
  return lVar1;
}



/* Entry: 105285cbc; end: 105285cfb;  */

long * FUN_105285cbc(long *param_1,long *param_2)

{
  undefined1 in_ZR;
  long *plVar1;
  long *unaff_x19;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long alStack_58 [3];
  
  if ((ulong)param_2 >> 0x3b == 0) {
    plVar1 = (long *)(param_1[2] - *param_1 >> 4);
    if (plVar1 <= param_2) {
      plVar1 = param_2;
    }
    if (0x7fffffffffffffdf < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7ffffffffffffff;
    }
    return plVar1;
  }
  FUN_105285920();
  func_0x0001052863a0();
  if (((bool)in_ZR) && (lVar3 = *param_1, lVar3 != 0)) {
    FUN_105285d98();
    lVar2 = lVar3 + 0x18;
    for (uVar4 = 0; param_1 = unaff_x19, uVar4 < *(ulong *)(lVar3 + 0x10); uVar4 = uVar4 + 1) {
      FUN_10528e280(alStack_58,lVar2);
      func_0x000105286394();
      func_0x0001052860a4();
      unaff_x19 = alStack_58;
      func_0x000104bee500(unaff_x19);
      lVar2 = lVar2 + 0x10;
    }
  }
  return param_1;
}



/* Entry: 105285cfc; end: 105285d97;  */

void FUN_105285cfc(long *param_1)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  func_0x0001052863a0();
  if (((bool)in_ZR) && (lVar2 = *param_1, lVar2 != 0)) {
    FUN_105285d98();
    lVar1 = lVar2 + 0x18;
    for (uVar3 = 0; uVar3 < *(ulong *)(lVar2 + 0x10); uVar3 = uVar3 + 1) {
      FUN_10528e280(auStack_48,lVar1);
      func_0x000105286394();
      func_0x0001052860a4();
      func_0x000104bee500(auStack_48);
      lVar1 = lVar1 + 0x10;
    }
  }
  return;
}



/* Entry: 105285d98; end: 105285e0f;  */

void FUN_105285d98(long *param_1,ulong param_2)

{
  long extraout_x9;
  undefined1 auStack_48 [40];
  
  func_0x0001052863fc();
  if ((ulong)(extraout_x9 / 0x18) < param_2) {
    if (0xaaaaaaaaaaaaaaa < param_2) {
      FUN_105285e10();
      func_0x00010528638c();
      func_0x000105286338();
      func_0x0001052863c4();
      func_0x0001052863dc();
      FUN_105285efc(param_1 + 2,*param_1,param_1[1],
                    *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
      func_0x0001052862f4();
      return;
    }
    FUN_105285e60(auStack_48);
    func_0x000105286394();
    FUN_105285e1c();
    func_0x00010528638c();
  }
  return;
}



/* Entry: 105285e10; end: 105285e1b;  */

void FUN_105285e10(long *param_1,long param_2)

{
  func_0x0001052863c4();
  func_0x0001052863dc();
  FUN_105285efc(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x0001052862f4();
  return;
}



/* Entry: 105285e1c; end: 105285e5f;  */

void FUN_105285e1c(long *param_1,long param_2)

{
  func_0x0001052863dc();
  FUN_105285efc(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x18) * 0x18);
  func_0x0001052862f4();
  return;
}



/* Entry: 105285e60; end: 105285ecf;  */

long * FUN_105285e60(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000105285eac();
  }
  lVar1 = param_4 + param_3 * 0x18;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x18;
  return param_1;
}



/* Entry: 105285ed0; end: 105285efb;  */

void FUN_105285ed0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0xaaaaaaaaaaaaaab) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_38 = 0;
    puStack_38[1] = 0;
    puStack_38[2] = 0;
    uVar1 = *param_2;
    puStack_38[1] = param_2[1];
    *puStack_38 = uVar1;
    puStack_38[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_38 = puStack_38 + 3;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_105285f8c();
  FUN_105285fbc(&uStack_60);
  return;
}



/* Entry: 105285efc; end: 105285f8b;  */

void FUN_105285efc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 3) {
    *puStack_28 = 0;
    puStack_28[1] = 0;
    puStack_28[2] = 0;
    uVar1 = *param_2;
    puStack_28[1] = param_2[1];
    *puStack_28 = uVar1;
    puStack_28[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    puStack_28 = puStack_28 + 3;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_105285f8c();
  FUN_105285fbc(&uStack_50);
  return;
}



/* Entry: 105285f8c; end: 105285fbb;  */

void FUN_105285f8c(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x18) {
    func_0x000104bee500();
  }
  return;
}



/* Entry: 105285fbc; end: 105285feb;  */

long FUN_105285fbc(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_105285fec(param_1);
  }
  return param_1;
}



/* Entry: 105285fec; end: 10528600b;  */

void FUN_105285fec(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x18;
    func_0x000104bee500();
  }
  return;
}



/* Entry: 10528600c; end: 105286067;  */

void FUN_10528600c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x18;
    func_0x000104bee500();
  }
  return;
}



/* Entry: 105286068; end: 10528606f;  */

void FUN_105286068(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052863dc(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x000104bee500();
  }
  return;
}



/* Entry: 105286070; end: 1052860df;  */

void FUN_105286070(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001052863dc();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x18;
    func_0x000104bee500();
  }
  return;
}



/* Entry: 1052860e0; end: 10528610f;  */

void FUN_1052860e0(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  puVar1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 **)(param_1 + 8) = puVar1 + 3;
  return;
}



/* Entry: 105286110; end: 1052861b7;  */

long FUN_105286110(undefined8 param_1)

{
  long *unaff_x19;
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x0001052863e8();
  FUN_1052861b8();
  FUN_105285e60(auStack_58,param_1,(unaff_x19[1] - *unaff_x19) / 0x18,unaff_x19 + 2);
  *puStack_48 = 0;
  puStack_48[1] = 0;
  puStack_48[2] = 0;
  uVar2 = *unaff_x20;
  puStack_48[1] = unaff_x20[1];
  *puStack_48 = uVar2;
  puStack_48[2] = unaff_x20[2];
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  puStack_48 = puStack_48 + 3;
  func_0x000105286394();
  FUN_105285e1c();
  lVar1 = unaff_x19[1];
  func_0x00010528638c();
  return lVar1;
}



/* Entry: 1052861b8; end: 105286207;  */

ulong FUN_1052861b8(long *param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  
  if (0xaaaaaaaaaaaaaaa < param_2) {
    FUN_105285e10();
    if ((bRam00000001130cbaf8 & 1) == 0) {
      iVar2 = 0x130cbaf8;
      ___cxa_guard_acquire();
      if (iVar2 != 0) {
        FUN_1052864ac();
        func_0x00010b990868(0x1130cbae8);
        ___cxa_guard_release(0x1130cbaf8);
      }
    }
    return 0x1130cbae8;
  }
  uVar1 = (param_1[2] - *param_1) / 0x18;
  uVar3 = uVar1 * 2;
  if (uVar3 < param_2 || uVar3 - param_2 == 0) {
    uVar3 = param_2;
  }
  if (0x555555555555554 < uVar1) {
    uVar3 = 0xaaaaaaaaaaaaaaa;
  }
  return uVar3;
}



/* Entry: 105286208; end: 105286263;  */

undefined8 FUN_105286208(void)

{
  int iVar1;
  
  if ((bRam00000001130cbaf8 & 1) == 0) {
    iVar1 = 0x130cbaf8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_1052864ac();
      func_0x00010b990868(0x1130cbae8);
      ___cxa_guard_release(0x1130cbaf8);
    }
  }
  return 0x1130cbae8;
}



/* Entry: 105286264; end: 1052862bf;  */

undefined8 FUN_105286264(void)

{
  int iVar1;
  
  if ((bRam00000001130cbb28 & 1) == 0) {
    iVar1 = 0x130cbb28;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_10528e3a4();
      func_0x00010b990868(0x1130cbb18);
      ___cxa_guard_release(0x1130cbb28);
    }
  }
  return 0x1130cbb18;
}



/* Entry: 1052862c0; end: 105286423;  */

void FUN_1052862c0(void)

{
  return;
}


