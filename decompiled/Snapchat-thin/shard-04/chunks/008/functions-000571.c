/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103966a28; end: 103966b67; -[SCStoryReplyMessage matchTextReply:includedSticker:customSticker:emojiSticker:gif:externalMedias:audioNote:giftInfo:reaction:ctItemInstance:] */

void FUN_103966a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_160 [16];
  undefined8 uStack_150;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_130 = param_11;
  uStack_150 = param_12;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_1039667f4(FUN_103967cc0,auStack_40,FUN_103967dbc,auStack_60,0x103967dc4,auStack_80,
                FUN_103967cd8,auStack_a0,0x103967dc0,auStack_c0,FUN_103967d10,auStack_e0,0x103967dc8
                ,auStack_100,0x103967d18,auStack_120,FUN_103967d20,auStack_140,FUN_103967d68,
                auStack_160);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103966b68; end: 103966bf7;  */

/* WARNING: Possible PIC construction at 0x000103966bd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103966bd8) */

void FUN_103966b68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  (**(code **)(param_7 + 0x10))(param_7,param_1,param_3,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103966bf8; end: 103966c2b;  */

void FUN_103966bf8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103966c2c; end: 103966d27; -[SCStoryReplyMessage .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103966c48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103966c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103966c8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103966cac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103966d0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103966cb0) */
/* WARNING: Removing unreachable block (ram,0x000103966c90) */
/* WARNING: Removing unreachable block (ram,0x000103966c6c) */
/* WARNING: Removing unreachable block (ram,0x000103966c4c) */
/* WARNING: Removing unreachable block (ram,0x000103966d10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103966c2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb9b18));
  return;
}



/* Entry: 103966d28; end: 103966d37;  */

ulong FUN_103966d28(ulong param_1)

{
  if (9 < param_1) {
    param_1 = 10;
  }
  return param_1;
}



/* Entry: 103966d38; end: 103966f57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103966d38(long *param_1,long param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar1 = *(undefined1 *)(param_2 + _DAT_112fb9b10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
    lVar3 = *(long *)(param_2 + _DAT_112fb9b18);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f34);
      (*pcVar2)();
    }
    if (*(byte *)(param_2 + _DAT_112fb9b20) == 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f50);
      (*pcVar2)();
    }
    uVar4 = (ulong)*(byte *)(param_2 + _DAT_112fb9b20) & 1;
    func_0x000107c61174(lVar3);
    goto code_r0x000103966ebc;
  case 1:
    lVar3 = *(long *)(param_2 + _DAT_112fb9b28);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966e84);
      (*pcVar2)();
    }
    break;
  case 2:
    lVar3 = *(long *)(param_2 + _DAT_112fb9b30);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966de8);
      (*pcVar2)();
    }
    break;
  case 3:
    uVar4 = ((long *)(param_2 + _DAT_112fb9b38))[1];
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f38);
      (*pcVar2)();
    }
    lVar3 = *(long *)(param_2 + _DAT_112fb9b38);
    func_0x000107c61434(uVar4);
    goto code_r0x000103966ebc;
  case 4:
    lVar3 = *(long *)(param_2 + _DAT_112fb9b40);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966dc0);
      (*pcVar2)();
    }
    break;
  case 5:
    lVar3 = *(long *)(param_2 + _DAT_112fb9b48);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f40);
      (*pcVar2)();
    }
    func_0x000107c61434(lVar3);
    goto code_r0x000103966eb8;
  case 6:
    lVar3 = *(long *)(param_2 + _DAT_112fb9b50);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f44);
      (*pcVar2)();
    }
    break;
  case 7:
    uVar4 = ((long *)(param_2 + _DAT_112fb9b58))[1];
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f3c);
      (*pcVar2)();
    }
    lVar6 = ((long *)(param_2 + _DAT_112fb9b60))[1];
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f4c);
      (*pcVar2)();
    }
    lVar7 = ((long *)(param_2 + _DAT_112fb9b68))[1];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f58);
      (*pcVar2)();
    }
    lVar3 = *(long *)(param_2 + _DAT_112fb9b58);
    lVar5 = *(long *)(param_2 + _DAT_112fb9b60);
    lVar8 = *(long *)(param_2 + _DAT_112fb9b68);
    func_0x000107c61434(uVar4);
    func_0x000107c61434(lVar6);
    func_0x000107c61434(lVar7);
    goto code_r0x000103966ecc;
  case 8:
    uVar4 = ((long *)(param_2 + _DAT_112fb9b70))[1];
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f48);
      (*pcVar2)();
    }
    lVar5 = *(long *)(param_2 + _DAT_112fb9b78);
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966f54);
      (*pcVar2)();
    }
    lVar3 = *(long *)(param_2 + _DAT_112fb9b70);
    func_0x000107c61434(uVar4);
    func_0x000107c61174(lVar5);
    goto code_r0x000103966ec0;
  case 9:
    lVar3 = *(long *)(param_2 + _DAT_112fb9b80);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103966dd4);
      (*pcVar2)();
    }
  }
  func_0x000107c61174(lVar3);
code_r0x000103966eb8:
  uVar4 = 0;
code_r0x000103966ebc:
  lVar5 = 0;
code_r0x000103966ec0:
  lVar6 = 0;
  lVar8 = 0;
  lVar7 = 0;
code_r0x000103966ecc:
  *param_1 = lVar3;
  param_1[1] = uVar4;
  param_1[2] = lVar5;
  param_1[3] = lVar6;
  param_1[4] = lVar8;
  param_1[5] = lVar7;
  *(undefined1 *)(param_1 + 6) = uVar1;
  return;
}



/* Entry: 103966f58; end: 10396707b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103966f58(long param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  FUN_103967af8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112fb9b10) = 0;
  *(long *)(lVar4 + _DAT_112fb9b18) = param_1;
  *(undefined1 *)(lVar4 + _DAT_112fb9b20) = param_2;
  *(undefined8 *)(lVar4 + _DAT_112fb9b28) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b30) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b40) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b48) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b50) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b58);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b70);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b78) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b80) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_40,puVar2);
  return;
}



/* Entry: 10396707c; end: 1039672b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396707c(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_103967af8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112fb9b10) = 1;
  *(undefined8 *)(lVar4 + _DAT_112fb9b18) = 0;
  *(undefined1 *)(lVar4 + _DAT_112fb9b20) = 2;
  *(long *)(lVar4 + _DAT_112fb9b28) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112fb9b30) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b40) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b48) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b50) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b58);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b70);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b78) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b80) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 1039672b8; end: 1039673e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039672b8(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_103967af8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112fb9b10) = 3;
  *(undefined8 *)(lVar5 + _DAT_112fb9b18) = 0;
  *(undefined1 *)(lVar5 + _DAT_112fb9b20) = 2;
  *(undefined8 *)(lVar5 + _DAT_112fb9b28) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b30) = 0;
  plVar1 = (long *)(lVar5 + _DAT_112fb9b38);
  *plVar1 = param_1;
  plVar1[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_112fb9b40) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b48) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b50) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112fb9b58);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112fb9b60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112fb9b68);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112fb9b70);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b78) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b80) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 1039673e4; end: 103967743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039673e4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_103967af8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112fb9b10) = 4;
  *(undefined8 *)(lVar4 + _DAT_112fb9b18) = 0;
  *(undefined1 *)(lVar4 + _DAT_112fb9b20) = 2;
  *(undefined8 *)(lVar4 + _DAT_112fb9b28) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b30) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar4 + _DAT_112fb9b40) = param_1;
  *(undefined8 *)(lVar4 + _DAT_112fb9b48) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b50) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b58);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b70);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b78) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b80) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 103967744; end: 10396789f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103967744(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  FUN_103967af8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112fb9b10) = 7;
  *(undefined8 *)(lVar5 + _DAT_112fb9b18) = 0;
  *(undefined1 *)(lVar5 + _DAT_112fb9b20) = 2;
  *(undefined8 *)(lVar5 + _DAT_112fb9b28) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b30) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b40) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b48) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b50) = 0;
  plVar2 = (long *)(lVar5 + _DAT_112fb9b58);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b60);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b68);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b70);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b78) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b80) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 1039678a0; end: 1039679d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039678a0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_40;
  long lStack_38;
  
  lVar4 = param_1;
  FUN_103967af8();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar5 + _DAT_112fb9b10) = 8;
  *(undefined8 *)(lVar5 + _DAT_112fb9b18) = 0;
  *(undefined1 *)(lVar5 + _DAT_112fb9b20) = 2;
  *(undefined8 *)(lVar5 + _DAT_112fb9b28) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b30) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b40) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b48) = 0;
  *(undefined8 *)(lVar5 + _DAT_112fb9b50) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b58);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112fb9b68);
  *puVar1 = 0;
  puVar1[1] = 0;
  plVar2 = (long *)(lVar5 + _DAT_112fb9b70);
  *plVar2 = param_1;
  plVar2[1] = param_2;
  *(undefined8 *)(lVar5 + _DAT_112fb9b78) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112fb9b80) = 0;
  puVar3 = PTR_s_init_1125d9248;
  lStack_40 = lVar5;
  lStack_38 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar3);
  return;
}



/* Entry: 1039679d8; end: 103967af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039679d8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_30;
  long lStack_28;
  
  lVar3 = param_1;
  FUN_103967af8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar4 + _DAT_112fb9b10) = 9;
  *(undefined8 *)(lVar4 + _DAT_112fb9b18) = 0;
  *(undefined1 *)(lVar4 + _DAT_112fb9b20) = 2;
  *(undefined8 *)(lVar4 + _DAT_112fb9b28) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b30) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b38);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b40) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b48) = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b50) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b58);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b60);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b68);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112fb9b70);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar4 + _DAT_112fb9b78) = 0;
  *(long *)(lVar4 + _DAT_112fb9b80) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_30 = lVar4;
  lStack_28 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&lStack_30,puVar2);
  return;
}



/* Entry: 103967af8; end: 103967b17;  */

void FUN_103967af8(void)

{
  func_0x000107c61168(&PTR_PTR_1129072d0);
  return;
}



/* Entry: 103967b18; end: 103967c7f;  */

int FUN_103967b18(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 9) {
      iVar2 = 4;
    }
    if (param_2 + 9 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103967b94;
        goto LAB_103967b78;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103967b78:
      return ((uint)*param_1 | uVar1 << 8) - 9;
    }
  }
LAB_103967b94:
  iVar2 = *param_1 - 10;
  if (*param_1 < 10) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103967c80; end: 103967cbf;  */

void FUN_103967c80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fb9bb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2a25c;
  func_0x000107c61520(&UNK_10dc2a25c,&UNK_1106b1938);
  puRam0000000112fb9bb0 = puVar1;
  return;
}



/* Entry: 103967cc0; end: 103967cd7;  */

void FUN_103967cc0(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103967cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1,param_2 & 1)
  ;
  return;
}



/* Entry: 103967cd8; end: 103967d0f;  */

void FUN_103967cd8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103967d10; end: 103967d1f;  */

void FUN_103967d10(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_103967d78(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103967d20; end: 103967d67;  */

void FUN_103967d20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103967d68; end: 103967d77;  */

void FUN_103967d68(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103967d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103967d78; end: 103967dbb;  */

void FUN_103967d78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5e778 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126cfb00;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5e778 = puVar1;
  return;
}



/* Entry: 103967dbc; end: 103967dcb;  */

void FUN_103967dbc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103967d74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103967dcc; end: 103967ddb; -[RankedPostableContentDestinationsServices factory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103967dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fb9bb8));
  return;
}



/* Entry: 103967ddc; end: 103967e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103967ddc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fb9bb8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103967e74; end: 103967ecb; -[RankedPostableContentDestinationsServices initWithFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103967e74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fb9bb8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 103967ecc; end: 103967f2b; -[RankedPostableContentDestinationsServices init] */

void FUN_103967ecc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("RankedPostableContentDestinationsService.RankedPostableContentDestinationsServices"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103967ef8);
  (*pcVar1)();
}



/* Entry: 103967f2c; end: 103967f3b; -[RankedPostableContentDestinationsServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103967f2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fb9bb8));
  return;
}



/* Entry: 103967f3c; end: 1039681eb;  */

undefined1 FUN_103967f3c(undefined8 param_1,ulong param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar4 = &UNK_1106b1a58;
  func_0x000107c613fc(&UNK_1106b1a58,0x11,7);
  puVar11 = puVar4 + 0x10;
  *puVar11 = 0;
  puVar5 = &UNK_1106b1a80;
  func_0x000107c613fc(&UNK_1106b1a80,0x18,7);
  *(undefined1 **)(puVar5 + 0x10) = puVar11;
  puVar6 = &UNK_1106b1aa8;
  func_0x000107c613fc(&UNK_1106b1aa8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1039681ec;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_1039681fc;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101eee6c4;
  puStack_88 = &UNK_1106b1ac0;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar13 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar13);
  if ((param_2 & 1) == 0) {
    ppuVar12 = (undefined **)0x0;
    pcVar3 = (code *)0x0;
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = &UNK_1106b1b70;
    func_0x000107c613fc(&UNK_1106b1b70,0x20,7);
    pcVar3 = FUN_1039682dc;
    *(code **)(puVar13 + 0x10) = FUN_1039682dc;
    *(undefined **)(puVar13 + 0x18) = puVar4;
    pcStack_80 = (code *)0x103968318;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101eeeca8;
    puStack_88 = &UNK_1106b1b88;
    ppuVar12 = &puStack_a0;
    puStack_78 = puVar13;
    func_0x000107c60bc4(ppuVar12);
    puVar13 = puStack_78;
    func_0x000107c6157c(puVar4);
    func_0x000107c61574(puVar13);
    puVar13 = puVar4;
  }
  puVar8 = &UNK_1106b1af8;
  func_0x000107c613fc(&UNK_1106b1af8,0x18,7);
  *(undefined1 **)(puVar8 + 0x10) = puVar11;
  puVar9 = &UNK_1106b1b20;
  func_0x000107c613fc(&UNK_1106b1b20,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_103968250;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_80 = (code *)0x103968294;
  puStack_a0 = puVar2;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101eef0ac;
  puStack_88 = &UNK_1106b1b38;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c6a8(param_1);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar7);
  FUN_1039682cc(pcVar3,puVar13);
  func_0x000107c61428(puVar11,&puStack_a0,0,0);
  uVar1 = puVar4[0x10];
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  puVar4 = puVar6;
  func_0x000107c61544(puVar6,"",0x82,0xb,0x21,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1039681ec);
  (*pcVar3)();
}



/* Entry: 1039681ec; end: 1039681fb;  */

void FUN_1039681ec(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1039681fc; end: 103968233;  */

void FUN_1039681fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103968234; end: 10396824f;  */

void FUN_103968234(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103968250; end: 1039682cb;  */

void FUN_103968250(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if (param_3 == 1) {
    puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
    func_0x000107c61428(puVar1,auStack_38,1,0);
    *puVar1 = 1;
  }
  return;
}



/* Entry: 1039682cc; end: 1039682db;  */

void FUN_1039682cc(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1039682dc; end: 103968357;  */

void FUN_1039682dc(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 103968358; end: 10396837f;  */

void FUN_103968358(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103968380; end: 103968447;  */

void FUN_103968380(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = 0xff;
  func_0x000107c60188(0xff,*(undefined8 *)(unaff_x22 + 0x40));
  uVar3 = 0;
  FUN_1039684dc(0,uVar2);
  func_0x000107c613fc();
  FUN_103968b48();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_103968448;
                    /* WARNING: Could not recover jumptable at 0x000103968444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10396896c(unaff_x22 + 0x30,&UNK_10dc2a370,unaff_x22 + 0x10,FUN_1039688b8,uVar3,0,0,uVar2);
  return;
}



/* Entry: 103968448; end: 1039684db;  */

void FUN_103968448(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1039684a8,0,0);
  return;
}



/* Entry: 1039684dc; end: 1039684e7;  */

void FUN_1039684dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e792674);
  return;
}



/* Entry: 1039684e8; end: 103968517;  */

void FUN_1039684e8(void)

{
  func_0x000107c613fc();
  FUN_103968b48();
  return;
}



/* Entry: 103968518; end: 10396853b;  */

void FUN_103968518(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10396853c,0,0);
  return;
}



/* Entry: 10396853c; end: 1039685c7;  */

void FUN_10396853c(void)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x38);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1039685c8;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  plVar1[2] = (long)plVar3;
  *plVar3 = (long)plVar1;
  plVar3[1] = (long)&UNK_104894f24;
                    /* WARNING: Could not recover jumptable at 0x000104894f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&UNK_104167d8c)(plVar3,uVar2,0,0,0x103968d9c,unaff_x22 + 0x10,uVar4);
  return;
}



/* Entry: 1039685c8; end: 103968607;  */

void FUN_1039685c8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000103968604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103968608; end: 10396866b;  */

void FUN_103968608(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10396866c;
  plVar3[7] = (long)plVar1;
  plVar3[8] = lVar2;
  plVar3[6] = param_1;
  plVar3[9] = *plVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10396853c,0,0);
  return;
}



/* Entry: 10396866c; end: 1039686a7;  */

void FUN_10396866c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001039686a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1039686a8; end: 103968803;  */

void FUN_1039686a8(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  FUN_10396922c(0,*(undefined8 *)(*param_2 + 0x50));
  FUN_103968e40();
  puStack_80 = (undefined *)0x0;
  FUN_103968804();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = (code *)0x103968da4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000d0bb0;
  puStack_68 = &UNK_1106b1ce8;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  pcStack_60 = FUN_103968dc8;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1106b1d10;
  uStack_58 = param_1;
  func_0x000107c60bc4(&puStack_80);
  uVar2 = uStack_58;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c5c324(param_3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  FUN_103968f6c(param_3);
  func_0x000107c61574(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 103968804; end: 103968877;  */

void FUN_103968804(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_60 [16];
  char cStack_31;
  
  func_0x000100087bd4(&cStack_31,FUN_103968dec,auStack_60,PTR___sSbN_11034dd40);
  if (cStack_31 == '\x01') {
    FUN_103968e7c(param_2);
  }
  return;
}



/* Entry: 103968878; end: 1039688b7;  */

void FUN_103968878(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x000107c615f0();
  FUN_103968e7c(&uStack_28);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1039688b8; end: 1039688db;  */

void FUN_1039688b8(void)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_1039688dc(&uStack_18);
  return;
}



/* Entry: 1039688dc; end: 10396896b;  */

void FUN_1039688dc(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lStack_38;
  
  uVar1 = 0xff;
  FUN_10396922c(0xff,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c60188(0,uVar1);
  func_0x000100087bd4(&lStack_38,FUN_103968d84);
  if (lStack_38 != 0) {
    func_0x000107c6157c(lStack_38);
    FUN_103968e7c(param_1);
    func_0x000107c61578(lStack_38,2);
  }
  return;
}



/* Entry: 10396896c; end: 103968aa3;  */

void FUN_10396896c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar1 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x103968ae0;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(plVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar2 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103968aa4;
                    /* WARNING: Could not recover jumptable at 0x000103968aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103968be8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Entry: 103968aa4; end: 103968b47;  */

void FUN_103968aa4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103968adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103968b48; end: 103968b8b;  */

void FUN_103968b48(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Entry: 103968b8c; end: 103968b8f;  */

void FUN_103968b8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 103968b90; end: 103968be7;  */

void FUN_103968b90(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBoWV_11034d678 + 0x40;
  puStack_20 = &UNK_10dc2a3e0;
  puStack_18 = &UNK_10dc2a3f8;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x58);
  return;
}



/* Entry: 103968be8; end: 103968c57;  */

void FUN_103968be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  if (param_6 == 0) {
    param_6 = 0;
    param_7 = 0;
  }
  else {
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103968c58,param_6);
  return;
}



/* Entry: 103968c58; end: 103968cc3;  */

void FUN_103968c58(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  piVar4 = *(int **)(unaff_x22 + 0x18);
  func_0x000107c615b4(uVar2,*(undefined8 *)(unaff_x22 + 0x30));
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103968cc4;
                    /* WARNING: Could not recover jumptable at 0x000103968cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar3,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Entry: 103968cc4; end: 103968d1b;  */

void FUN_103968cc4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = (code *)0x103968d50;
  }
  else {
    pcVar1 = FUN_103968d1c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 103968d1c; end: 103968d83;  */

void FUN_103968d1c(void)

{
  long unaff_x22;
  
  func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000103968d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103968d84; end: 103968dc7;  */

void FUN_103968d84(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x20) = 1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 103968dc8; end: 103968deb;  */

void FUN_103968dc8(void)

{
  undefined8 uStack_18;
  
  uStack_18 = 0;
  FUN_103968e7c(&uStack_18);
  return;
}



/* Entry: 103968dec; end: 103968e37;  */

void FUN_103968dec(undefined1 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  func_0x000107c61574(uVar3);
  *param_1 = *(undefined1 *)(lVar1 + 0x20);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 103968e38; end: 103968e3f;  */

void FUN_103968e38(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103968e40; end: 103968e7b;  */

undefined8 FUN_103968e40(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000103968fd8(param_1);
  return unaff_x20;
}



/* Entry: 103968e7c; end: 103968f6b;  */

void FUN_103968e7c(undefined8 param_1)

{
  undefined8 uVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  uVar1 = 0xff;
  func_0x000107c5fd74(0xff,lVar2,PTR___ss5NeverON_11034ee88,PTR___ss5NeverOs5ErrorsWP_11034ee90);
  func_0x000107c60188(0,uVar1);
  func_0x000100087bd4(&lStack_58,FUN_10396902c);
  if (lStack_58 != 0) {
    (**(code **)(lVar3 + 0x10))
              (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
    FUN_103969044(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lStack_58,lVar2);
    func_0x0001039690c8();
  }
  return;
}



/* Entry: 103968f6c; end: 10396902b;  */

void FUN_103968f6c(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  char cStack_31;
  
  func_0x000100087bd4(&cStack_31,FUN_10396913c,auStack_60,PTR___sSbN_11034dd40);
  if (cStack_31 == '\x01') {
    func_0x000107c4218c(param_1);
  }
  return;
}



/* Entry: 10396902c; end: 103969043;  */

void FUN_10396902c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  *param_1 = uVar1;
  return;
}



/* Entry: 103969044; end: 10396913b;  */

void FUN_103969044(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long extraout_x12;
  code *pcVar1;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(undefined8 *)(*(long *)(param_3 + -8) + 0x40),param_1,param_1);
  pcVar1 = *(code **)(extraout_x12 + 0x20);
  (*pcVar1)(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*pcVar1)(*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28),
            &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3);
  func_0x000107c6144c(param_2);
  return;
}



/* Entry: 10396913c; end: 10396919b;  */

void FUN_10396913c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  bVar1 = (*(byte *)(lVar2 + 0x28) & 1) == 0;
  if (bVar1) {
    uVar3 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
  }
  *(bool *)param_1 = !bVar1;
  return;
}



/* Entry: 10396919c; end: 1039691c7;  */

void FUN_10396919c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039691c8; end: 1039691cb;  */

void FUN_1039691c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1039691cc; end: 10396922b;  */

void FUN_1039691cc(long param_1)

{
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  puStack_28 = &UNK_10dc2a478;
  puStack_20 = &UNK_10dc2a490;
  puStack_18 = &UNK_10dc2a4a8;
  func_0x000107c61524(param_1,0,4,&puStack_30,param_1 + 0x58);
  return;
}



/* Entry: 10396922c; end: 103969247;  */

void FUN_10396922c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e7926c4);
  return;
}



/* Entry: 103969248; end: 103969353; -[_TtC38ContactsPermissionsContactAccessButton25SCContactAccessButtonData queryString] */

void FUN_103969248(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10dc2a4e0;
  func_0x000107c614e0(&UNK_10dc2a4e0);
  puVar2 = &UNK_10dc2a508;
  func_0x000107c614e0(&UNK_10dc2a508);
  func_0x000107c61174(param_1);
  func_0x000107c5f20c(&uStack_40);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_1);
  uVar3 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103969354; end: 10396944f; -[_TtC38ContactsPermissionsContactAccessButton25SCContactAccessButtonData setQueryString:] */

void FUN_103969354(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c5faec();
  puVar1 = &UNK_10dc2a4e0;
  func_0x000107c614e0(&UNK_10dc2a4e0);
  puVar2 = &UNK_10dc2a508;
  func_0x000107c614e0(&UNK_10dc2a508);
  uStack_50 = param_3;
  uStack_48 = param_2;
  func_0x000107c61174(param_1);
  func_0x000107c5f210(&uStack_50,param_1,puVar1,puVar2);
  return;
}



/* Entry: 103969450; end: 1039694b7;  */

/* WARNING: Possible PIC construction at 0x0001039694a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039694a4) */

void FUN_103969450(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10dc2a4e0;
  func_0x000107c614e0(&UNK_10dc2a4e0);
  puVar2 = &UNK_10dc2a508;
  func_0x000107c614e0(&UNK_10dc2a508);
  func_0x000107c5f20c(param_1,uVar3,puVar1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1039694b8; end: 103969537;  */

void FUN_1039694b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10dc2a4e0;
  func_0x000107c614e0(&UNK_10dc2a4e0);
  puVar4 = &UNK_10dc2a508;
  func_0x000107c614e0(&UNK_10dc2a508);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c5f210(&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 103969538; end: 103969683;  */

undefined8 FUN_103969538(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = 0x38;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x38,0xb831);
  }
  *param_1 = lVar1;
  puVar2 = &UNK_10dc2a4e0;
  func_0x000107c614e0();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = &UNK_10dc2a508;
  func_0x000107c614e0();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  lVar3 = lVar1;
  func_0x000107c5f208();
  *(long *)(lVar1 + 0x30) = lVar3;
  return 0x1039695c8;
}



/* Entry: 103969684; end: 103969763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103969684(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112fb9cf0;
  func_0x0001000285a8(0x112fb9cf0,&UNK_10dc2a530);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar3 + 0x10))(auStack_60 + -extraout_x8,param_1,lVar1);
  func_0x000107c61428(unaff_x20 + _DAT_11356f040,auStack_58,0x21,0);
  uVar2 = 0x112fb9ce8;
  func_0x0001000285a8(0x112fb9ce8,&UNK_10dc2a528);
  func_0x000107c5f204(auStack_60 + -extraout_x8,uVar2);
  func_0x000107c614a8(auStack_58);
  (**(code **)(lVar3 + 8))(param_1,lVar1);
  return;
}



/* Entry: 103969764; end: 103969867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103969764(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_11034f288;
  lVar2 = 0x80;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    func_0x000107c610a0();
  }
  else {
    func_0x000107c61458(0x80,0x79b1);
  }
  *param_1 = lVar2;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  lVar4 = 0x112fb9cf0;
  func_0x0001000285a8(0x112fb9cf0,&UNK_10dc2a530);
  *(long *)(lVar2 + 0x50) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(lVar2 + 0x58) = lVar4;
  uVar5 = *(undefined8 *)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    uVar3 = uVar5;
    func_0x000107c610a0();
    *(undefined8 *)(lVar2 + 0x60) = uVar3;
    func_0x000107c610a0();
  }
  else {
    uVar3 = uVar5;
    func_0x000107c61458(uVar5,0x79b1);
    *(undefined8 *)(lVar2 + 0x60) = uVar3;
    func_0x000107c61458(uVar5,0x79b1);
  }
  lVar4 = _DAT_11356f040;
  *(undefined8 *)(lVar2 + 0x68) = uVar5;
  *(long *)(lVar2 + 0x70) = lVar4;
  func_0x000107c61428(unaff_x20 + lVar4,lVar2,0x21,0);
  uVar3 = 0x112fb9ce8;
  func_0x0001000285a8(0x112fb9ce8,&UNK_10dc2a528);
  *(undefined8 *)(lVar2 + 0x78) = uVar3;
  func_0x000107c5f200(uVar5);
  func_0x000107c614a8(lVar2);
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = FUN_103969868;
  return auVar6;
}



/* Entry: 103969868; end: 103969923;  */

/* WARNING: Possible PIC construction at 0x0001039698f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039698fc) */

void FUN_103969868(long *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  lVar3 = *(long *)(lVar7 + 0x58);
  (**(code **)(lVar3 + 0x10))
            (*(undefined8 *)(lVar7 + 0x60),*(undefined8 *)(lVar7 + 0x68),
             *(undefined8 *)(lVar7 + 0x50));
  uVar4 = *(undefined8 *)(lVar7 + 0x78);
  uVar2 = *(undefined8 *)(lVar7 + 0x60);
  uVar5 = *(undefined8 *)(lVar7 + 0x68);
  lVar1 = 0x18;
  if ((param_2 & 1) == 0) {
    lVar1 = 0x30;
  }
  uVar6 = *(undefined8 *)(lVar7 + 0x50);
  func_0x000107c61428(*(long *)(lVar7 + 0x48) + *(long *)(lVar7 + 0x70),lVar7 + lVar1,0x21,0);
  func_0x000107c5f204(uVar2,uVar4);
  func_0x000107c614a8(lVar7 + lVar1);
  (**(code **)(lVar3 + 8))(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(uVar5);
  return;
}



/* Entry: 103969924; end: 10396995b;  */

void FUN_103969924(undefined8 param_1)

{
  if (lRam000000011356f0d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e792720);
  return;
}



/* Entry: 10396995c; end: 103969a23; -[_TtC38ContactsPermissionsContactAccessButton25SCContactAccessButtonData init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10396995c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = 0x112fb9ce8;
  func_0x0001000285a8(0x112fb9ce8,&UNK_10dc2a528);
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_11356f040;
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c5f1fc((long)&lStack_60 - extraout_x8,&uStack_50,PTR___sSSN_11034da80);
  (**(code **)(lVar4 + 0x20))(param_1 + lVar1,(long)&lStack_60 - extraout_x8,lVar2);
  uVar3 = 0;
  FUN_103969924();
  lStack_60 = param_1;
  uStack_58 = uVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103969a24; end: 103969a57;  */

void FUN_103969a24(void)

{
  FUN_103969924();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103969a58; end: 103969a9f; -[_TtC38ContactsPermissionsContactAccessButton25SCContactAccessButtonData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103969a58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_11356f040;
  lVar2 = 0x112fb9ce8;
  func_0x0001000285a8(0x112fb9ce8,&UNK_10dc2a528);
                    /* WARNING: Could not recover jumptable at 0x000103969a9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 103969aa0; end: 103969adb;  */

void FUN_103969aa0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_103969924();
  func_0x000107c5f1e8();
  *param_1 = uVar1;
  return;
}



/* Entry: 103969adc; end: 103969ae7;  */

void FUN_103969adc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 103969ae8; end: 103969bcb;  */

void FUN_103969ae8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  puVar5 = &UNK_10dc2a4e0;
  func_0x000107c614e0(&UNK_10dc2a4e0);
  puVar6 = &UNK_10dc2a508;
  func_0x000107c614e0(&UNK_10dc2a508);
  func_0x000107c5f20c(&uStack_60,uVar3,puVar5,puVar6);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  puVar5 = &UNK_1106b1f30;
  func_0x000107c613fc(&UNK_1106b1f30,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  func_0x000107c61174(uVar3);
  FUN_103969c10(uVar2,uVar4);
  func_0x000107c5eab4(param_1,uStack_60,uStack_58,0,0,FUN_10396a144,puVar5);
  return;
}



/* Entry: 103969bcc; end: 103969c0f;  */

void FUN_103969bcc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112fb9cf8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_103969924(0xff);
  puVar2 = &UNK_10dc2a540;
  func_0x000107c61520(&UNK_10dc2a540,uVar1);
  puRam0000000112fb9cf8 = puVar2;
  return;
}



/* Entry: 103969c10; end: 103969c1f;  */

void FUN_103969c10(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_2);
    return;
  }
  return;
}



/* Entry: 103969c20; end: 103969cff; +[_TtC38ContactsPermissionsContactAccessButton28SCContactAccessButtonFactory contactAccessButtonViewControllerWithData:completion:] */

void FUN_103969c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  puVar3 = &uStack_60;
  func_0x000107c60bc4();
  if (param_4 == 0) {
    pcStack_50 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &UNK_1106b1fd0;
    func_0x000107c613fc(&UNK_1106b1fd0,0x18,7);
    *(long *)(puVar4 + 0x10) = param_4;
    pcStack_50 = FUN_10396a884;
  }
  uVar1 = 0;
  FUN_103969924();
  FUN_103969bcc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x000107c5f31c();
  uStack_60 = uVar2;
  uStack_58 = uVar1;
  puStack_48 = puVar4;
  func_0x0001000285a8(0x112fb9d00,&UNK_10dc2a538);
  func_0x000107c610f8();
  func_0x000107c5f458(&uStack_60);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103969d00; end: 103969d4b;  */

void FUN_103969d00(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10396a840(0);
  func_0x000107c5fc48(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103969d4c; end: 103969d87; -[_TtC38ContactsPermissionsContactAccessButton28SCContactAccessButtonFactory init] */

void FUN_103969d4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103969d88; end: 103969dbb;  */

void FUN_103969d88(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103969dbc; end: 103969dcf;  */

undefined * FUN_103969dbc(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_11034ae28;
}



/* Entry: 103969dd0; end: 103969e3b;  */

void FUN_103969dd0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  FUN_103969e3c();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 103969e3c; end: 103969eab;  */

void FUN_103969e3c(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112fb9d30 != 0) {
    return;
  }
  puVar1 = PTR___sSSN_11034da80;
  func_0x000107c5f214();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112fb9d30 = param_1;
  return;
}



/* Entry: 103969eac; end: 103969f13;  */

long FUN_103969eac(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103969f14; end: 10396a09b;  */

undefined8 * FUN_103969f14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar2 = param_2[2];
  func_0x000107c61174();
  if (lVar2 == 0) {
    lVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[2] = lVar2;
    param_1[3] = uVar1;
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10396a09c; end: 10396a143;  */

int FUN_10396a09c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


