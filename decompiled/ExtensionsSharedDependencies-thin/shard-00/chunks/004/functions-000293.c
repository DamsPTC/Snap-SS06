/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 005bce24; end: 005bce5b;  */

void FUN_005bce24(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_005bce5c(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_005c28a0(&uStack_30);
  return;
}



/* Entry: 005bce5c; end: 005bce8b;  */

void FUN_005bce5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_11;
  
  FUN_005c2724(&uStack_11,param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 005bce8c; end: 005bd12f;  */

undefined8 *
FUN_005bce8c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  code *extraout_x9;
  int extraout_w10;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_168 [169];
  undefined1 uStack_bf;
  undefined1 **ppuStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [23];
  undefined1 uStack_79;
  undefined1 **ppuStack_78;
  undefined1 *puStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  puVar5 = param_1;
  func_0x005c4048();
  *puVar5 = &PTR_FUN_00a03ce0;
  puVar7 = puVar5 + 1;
  *puVar7 = 0;
  puVar5[2] = 0;
  uStack_58 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar5 + 3);
  puVar8 = param_1 + 6;
  *puVar8 = 0;
  param_1[7] = 0;
  FUN_00465944(auStack_90);
  func_0x00465960(auStack_a0,param_4);
  FUN_00465980(&ppuStack_a8);
  func_0x005c48fc(*param_3);
  (*extraout_x9)(auStack_168);
  FUN_005b8a60(ppuStack_a8,auStack_168);
  uVar4 = lRam0000000000b62af0 == -1;
  if (!(bool)uVar4) {
    puStack_70 = &uStack_79;
    ppuStack_78 = &puStack_70;
    __ZNSt3__111__call_onceERVmPvPFvS2_E(0xb62af0,&ppuStack_78,FUN_005c28c4);
  }
  uStack_190 = uRam0000000000b62af8;
  lStack_188 = lRam0000000000b62b00;
  if (lRam0000000000b62b00 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  FUN_0046708c(&puStack_70,1);
  ppuStack_78 = ppuStack_a8;
  puStack_60[2] = 0;
  *puStack_60 = &PTR_FUN_009e6310;
  puStack_60[1] = 0;
  ppuStack_a8 = (undefined1 **)0x0;
  FUN_0046717c(puStack_60 + 3,&uStack_190,auStack_a0,auStack_90,&ppuStack_78,3,uStack_bf,0);
  func_0x00465c64(&ppuStack_78);
  puVar3 = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  FUN_00467070(&uStack_180,puVar3 + 3);
  FUN_0046c854(&puStack_70);
  uVar2 = uStack_178;
  uVar1 = uStack_180;
  uStack_180 = 0;
  uStack_178 = 0;
  uStack_68 = puVar5[2];
  puStack_70 = (undefined1 *)*puVar7;
  puVar5[2] = uVar2;
  *puVar7 = uVar1;
  func_0x00465de0(&puStack_70);
  func_0x00465de0(&uStack_180);
  func_0x0045a078(&uStack_190);
  FUN_0045dc34(&puStack_70,param_5);
  FUN_00470560(puVar8,&puStack_70);
  func_0x0045cbec(&puStack_70);
  func_0x00465c30(auStack_168);
  func_0x00465c64(&ppuStack_a8);
  FUN_00466dc4(auStack_a0);
  puVar6 = auStack_90;
  FUN_00466354(puVar6);
  func_0x005c3fd8(uStack_58);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    func_0x00465c30(auStack_168);
    do {
      func_0x00465c64(&ppuStack_a8);
      FUN_00466dc4(auStack_a0);
      FUN_00466354(auStack_90);
      func_0x0045cbec(puVar8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 3);
      func_0x00465de0(puVar7);
      __Unwind_Resume(puVar6);
    } while( true );
  }
  return param_1;
}



/* Entry: 005bd130; end: 005bd187;  */

void FUN_005bd130(undefined8 *param_1)

{
  section *psVar1;
  char *pcVar2;
  
  psVar1 = &section_00000068;
  __Znwm();
  psVar1->sectname[8] = '\0';
  psVar1->sectname[9] = '\0';
  psVar1->sectname[10] = '\0';
  psVar1->sectname[0xb] = '\0';
  psVar1->sectname[0xc] = '\0';
  psVar1->sectname[0xd] = '\0';
  psVar1->sectname[0xe] = '\0';
  psVar1->sectname[0xf] = '\0';
  psVar1->segname[0] = '\0';
  psVar1->segname[1] = '\0';
  psVar1->segname[2] = '\0';
  psVar1->segname[3] = '\0';
  psVar1->segname[4] = '\0';
  psVar1->segname[5] = '\0';
  psVar1->segname[6] = '\0';
  psVar1->segname[7] = '\0';
  *(undefined ***)psVar1->sectname = &PTR_DAT_00a043c0;
  psVar1->offset = 0;
  psVar1->align = 0;
  psVar1->size = 0;
  psVar1->flags = 0;
  psVar1->reserved1 = 0;
  psVar1->reloff = 0;
  psVar1->nrelocs = 0;
  psVar1[1].sectname[0] = '\0';
  psVar1[1].sectname[1] = '\0';
  psVar1[1].sectname[2] = '\0';
  psVar1[1].sectname[3] = '\0';
  psVar1[1].sectname[4] = '\0';
  psVar1[1].sectname[5] = '\0';
  psVar1[1].sectname[6] = '\0';
  psVar1[1].sectname[7] = '\0';
  psVar1->reserved2 = 0;
  psVar1->reserved3 = 0;
  psVar1[1].segname[0] = '\0';
  psVar1[1].segname[1] = '\0';
  psVar1[1].segname[2] = '\0';
  psVar1[1].segname[3] = '\0';
  psVar1[1].segname[4] = '\0';
  psVar1[1].segname[5] = '\0';
  psVar1[1].segname[6] = '\0';
  psVar1[1].segname[7] = '\0';
  psVar1[1].sectname[8] = '\0';
  psVar1[1].sectname[9] = '\0';
  psVar1[1].sectname[10] = '\0';
  psVar1[1].sectname[0xb] = '\0';
  psVar1[1].sectname[0xc] = '\0';
  psVar1[1].sectname[0xd] = '\0';
  psVar1[1].sectname[0xe] = '\0';
  psVar1[1].sectname[0xf] = '\0';
  param_1[1] = psVar1;
  pcVar2 = psVar1->segname + 8;
  psVar1->addr = 0x32aaaba7;
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  *param_1 = pcVar2;
  return;
}



/* Entry: 005bd188; end: 005bd1ef;  */

void FUN_005bd188(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *extraout_x8;
  undefined8 *puVar2;
  int extraout_w11;
  
  puVar1 = param_1;
  func_0x005c44ec();
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = &PTR_FUN_00a04510;
  puVar2 = puVar1 + 3;
  *puVar2 = &PTR_DAT_00a04560;
  puVar1[4] = param_2;
  puVar1[5] = param_3;
  if (param_3 != 0) {
    do {
      func_0x005c4324();
      puVar2 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  *param_1 = puVar2;
  param_1[1] = puVar1;
  return;
}



/* Entry: 005bd1f0; end: 005bd2bf;  */

void FUN_005bd1f0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 long param_5)

{
  dword *pdVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar3;
  
  pdVar1 = &segment_command_00000020.maxprot;
  __Znwm();
  *(undefined8 *)(pdVar1 + 2) = 0;
  *(undefined8 *)(pdVar1 + 4) = 0;
  *(undefined ***)pdVar1 = &PTR_FUN_00a045b0;
  if (param_5 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  *(undefined ***)(pdVar1 + 6) = &PTR_DAT_00a04600;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(pdVar1 + 8,param_2);
  lVar2 = param_3[1];
  uVar3 = *param_3;
  *(undefined8 *)(pdVar1 + 0x10) = param_3[1];
  *(undefined8 *)(pdVar1 + 0xe) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(pdVar1 + 0x12) = param_4;
  *(long *)(pdVar1 + 0x14) = param_5;
  func_0x005c44b4();
  *param_1 = (long)(pdVar1 + 6);
  param_1[1] = (long)pdVar1;
  return;
}



/* Entry: 005bd2c0; end: 005bd2c3;  */

long FUN_005bd2c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_FUN_00a03ce0);
  func_0x0045cbec(lVar1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  func_0x00465de0();
  return param_1;
}



/* Entry: 005bd2c4; end: 005bd2d7;  */

void FUN_005bd2c4(void)

{
  FUN_005c3f00();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bd2d8; end: 005bd583;  */

void FUN_005bd2d8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  bool bVar2;
  dword *pdVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  long lVar5;
  code *extraout_x8_00;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  long *plVar6;
  dword *pdVar7;
  undefined8 *puVar8;
  undefined1 auStack_200 [176];
  undefined1 auStack_150 [184];
  dword *pdStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  dword *pdStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 *puStack_60;
  dword *pdStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_30 [16];
  undefined1 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uStack_8;
  
  func_0x005c4960();
  if (*param_4 == 0) {
    FUN_005c3f40(auStack_200);
  }
  else {
    func_0x005c48fc();
    (*extraout_x9)(auStack_200);
  }
  FUN_00465bcc(auStack_150,auStack_200);
  FUN_005bd130(&uStack_10);
  uStack_18 = 0;
  FUN_005ba4b8(param_3,&uStack_18);
  if ((int)param_3 == 0) {
    uVar4 = *param_5;
    auStack_30[0] = 0;
    uStack_20 = 0;
    FUN_00425cb4(&pdStack_98,"Failed to convert request to buffer");
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    pdStack_58 = pdStack_98;
    puStack_80 = (undefined8 *)CONCAT44(puStack_80._4_4_,0xd);
    pdStack_98 = (dword *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_60 = (undefined8 *)CONCAT44(puStack_60._4_4_,0xd);
    uStack_70 = 0;
    uStack_68 = 0;
    pdStack_78 = (dword *)0x0;
    uStack_40 = 1;
    func_0x005c453c();
    (*extraout_x8_00)(uVar4,auStack_30,&puStack_60);
    FUN_005be34c(&puStack_60);
    func_0x005c4698();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pdStack_98);
    FUN_005be37c(auStack_30);
  }
  else {
    pdVar3 = &segment_command_00000020.maxprot;
    __Znwm();
    pdVar7 = pdVar3 + 2;
    *(long *)pdVar7 = 0;
    *(undefined8 *)(pdVar3 + 4) = 0;
    *(undefined ***)pdVar3 = &PTR_DAT_00a04410;
    puVar8 = (undefined8 *)(pdVar3 + 6);
    *puVar8 = &PTR_DAT_00a04460;
    plVar6 = (long *)(pdVar3 + 8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar6,param_2);
    lVar5 = *(long *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(pdVar3 + 0x10) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(pdVar3 + 0xe) = uVar4;
    if (lVar5 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10 != 0);
    }
    lVar5 = param_5[1];
    uVar4 = *param_5;
    *(undefined8 *)(pdVar3 + 0x14) = param_5[1];
    *(undefined8 *)(pdVar3 + 0x12) = uVar4;
    if (lVar5 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    if (*(char *)((long)pdVar3 + 0x37) < '\0') {
      plVar6 = (long *)*plVar6;
    }
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(pdVar7,0x10);
      if (bVar2) {
        *(long *)pdVar7 = *(long *)pdVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_80 = puVar8;
    pdStack_78 = pdVar3;
    puStack_60 = puVar8;
    pdStack_58 = pdVar3;
    FUN_00480e30(uVar4,plVar6,&uStack_18,param_1 + 0x18,auStack_150,&puStack_80,&uStack_10);
    func_0x00486b00(&puStack_80);
    FUN_005c301c(&puStack_60);
  }
  FUN_005bd188(&puStack_60,uStack_10,uStack_8);
  extraout_x8[1] = pdStack_58;
  *extraout_x8 = puStack_60;
  puStack_60 = (undefined8 *)0x0;
  pdStack_58 = (dword *)0x0;
  FUN_005c3118(&puStack_60);
  FUN_00468b24(&uStack_18);
  func_0x00467d6c(&uStack_10);
  FUN_00463c5c(auStack_150);
  FUN_00463c7c(auStack_200);
  return;
}



/* Entry: 005bd584; end: 005bd9bb;  */

void FUN_005bd584(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5,undefined8 *param_6)

{
  code *extraout_x9;
  int extraout_w10;
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 auStack_6b0 [176];
  undefined1 auStack_600 [104];
  undefined1 auStack_598 [72];
  char cStack_550;
  long *plStack_548;
  long lStack_540;
  long *plStack_538;
  long lStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined1 auStack_510 [24];
  undefined1 uStack_4f8;
  undefined1 auStack_4f0 [24];
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  ulong uStack_410;
  long lStack_408;
  undefined1 auStack_400 [184];
  undefined1 auStack_348 [72];
  undefined4 auStack_300 [2];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 auStack_238 [24];
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 uStack_200;
  undefined1 auStack_120 [184];
  undefined1 auStack_68 [24];
  
  if (*param_5 == 0) {
    FUN_005c3f40(auStack_6b0);
  }
  else {
    func_0x005c48fc();
    (*extraout_x9)(auStack_6b0);
  }
  FUN_00465bcc(auStack_600,auStack_6b0);
  FUN_005bd130(&uStack_520);
  uStack_528 = 0;
  FUN_005ba4b8(param_4,&uStack_528);
  if ((int)param_4 == 0) {
    uVar1 = *param_6;
    uStack_410 = uStack_410 & 0xffffffffffffff00;
    auStack_400[0] = 0;
    FUN_00425cb4(&uStack_4d8,"Failed to convert request to buffer");
    uStack_208 = uStack_4c8;
    uStack_210 = uStack_4d0;
    uStack_218 = uStack_4d8;
    auStack_300[0] = 0xd;
    uStack_4d8 = 0;
    uStack_4d0 = 0;
    uStack_4c8 = 0;
    uStack_220 = CONCAT44(uStack_220._4_4_,0xd);
    uStack_2e8 = 0;
    uStack_2f8 = 0;
    uStack_2f0 = 0;
    uStack_200 = 1;
    func_0x005c453c();
    func_0x005c47b4(uVar1);
    FUN_005be34c(&uStack_220);
    func_0x005c4698();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_4d8);
    FUN_005be37c(&uStack_410);
  }
  else {
    func_0x005c4810(&plStack_538);
    plVar3 = plStack_538 + 1;
    if (*(char *)((long)plStack_538 + 0x1f) < '\0') {
      plVar3 = (long *)*plVar3;
    }
    uVar2 = *(ulong *)(param_2 + 8);
    plStack_548 = plStack_538;
    lStack_540 = lStack_530;
    if (lStack_530 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10 != 0);
    }
    FUN_00481198(auStack_348,auStack_600);
    uStack_410 = uVar2;
    lStack_408 = (long)plVar3;
    FUN_004813a4(auStack_400,auStack_600);
    func_0x005c0384(&uStack_4d8,&uStack_410);
    FUN_00425cb4(auStack_4f0,plVar3);
    if (cStack_550 == '\x01') {
      FUN_00459e04(auStack_510,auStack_598);
    }
    else {
      auStack_510[0] = 0;
      uStack_4f8 = 0;
    }
    FUN_005b9a64(auStack_68,uVar2 + 0x1e0,auStack_4f0);
    func_0x005c4770(&uStack_220);
    FUN_00481494();
    if (*(char *)(uVar2 + 200) == '\x01') {
      FUN_00425cb4(auStack_238,"Abort requests in Guest Mode");
      FUN_0046e000(auStack_300,10,auStack_238);
      func_0x005c4364(*(undefined8 *)(*plStack_538 + 0x30),plStack_538,&uStack_220,auStack_300);
      FUN_00464a10(auStack_300);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_238);
    }
    else {
      func_0x005c0384(auStack_300,&uStack_4d8);
      FUN_005be39c(uVar2,auStack_300,&uStack_528,&uStack_220,auStack_120,&plStack_548);
      FUN_00463c5c(&uStack_2f0);
    }
    func_0x004862b8(&uStack_220);
    func_0x005c456c();
    FUN_00457530(auStack_510);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4f0);
    func_0x005c4270(&uStack_4d8);
    FUN_00463c5c(auStack_400);
    func_0x00486308(auStack_348);
    func_0x005c3a4c(&plStack_548);
    func_0x005c3a28(&plStack_538);
  }
  FUN_005bd188(&uStack_220,uStack_520,uStack_518);
  param_1[1] = uStack_218;
  *param_1 = uStack_220;
  uStack_218 = 0;
  uStack_220 = 0;
  FUN_005c3118(&uStack_220);
  FUN_00468b24(&uStack_528);
  func_0x00467d6c(&uStack_520);
  FUN_00463c5c(auStack_600);
  FUN_00463c7c(auStack_6b0);
  return;
}



/* Entry: 005bd9bc; end: 005be343;  */

void FUN_005bd9bc(long param_1,undefined8 param_2,long *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  qword *pqVar5;
  long **pplVar6;
  undefined1 *puVar7;
  undefined8 *extraout_x8;
  undefined8 extraout_x8_00;
  code *extraout_x8_01;
  long **extraout_x8_02;
  long **extraout_x8_03;
  long **pplVar8;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w11;
  int extraout_w11_00;
  long lVar9;
  long *plVar10;
  dword *pdVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined1 auStack_b60 [176];
  undefined1 auStack_ab0 [184];
  long *plStack_9f8;
  ulong uStack_9f0;
  long *plStack_9e8;
  dword *pdStack_9e0;
  long *plStack_9d8;
  ulong uStack_9d0;
  undefined1 auStack_9c8 [24];
  undefined1 auStack_9b0 [200];
  long lStack_8e8;
  long lStack_8e0;
  undefined1 auStack_8d8 [184];
  undefined1 auStack_820 [72];
  undefined1 auStack_7d8 [200];
  undefined1 auStack_710 [112];
  char cStack_6a0;
  uint uStack_69c;
  undefined1 auStack_670 [280];
  undefined1 auStack_558 [24];
  undefined8 uStack_540;
  undefined8 uStack_538;
  long *plStack_530;
  ulong uStack_528;
  undefined1 auStack_518 [200];
  long *plStack_450;
  dword *pdStack_448;
  undefined1 auStack_440 [200];
  undefined1 auStack_378 [24];
  long *plStack_360;
  dword *pdStack_358;
  long *plStack_350;
  dword *pdStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  dword *pdStack_330;
  qword *pqStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined **ppuStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined **ppuStack_2f0;
  long *plStack_2e8;
  dword *pdStack_2e0;
  undefined ***pppuStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  ulong uStack_2b8;
  undefined1 auStack_2b0 [224];
  undefined1 auStack_1d0 [32];
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [256];
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_18;
  
  func_0x005c4960();
  func_0x005c4048();
  uStack_18 = extraout_x8_00;
  if (*param_3 == 0) {
    FUN_005c3f40(auStack_b60);
  }
  else {
    func_0x005c48fc();
    (*extraout_x9)(auStack_b60);
  }
  FUN_00465bcc(auStack_ab0,auStack_b60);
  func_0x005c4810(&plStack_9d8);
  plVar10 = plStack_9d8 + 1;
  if (*(char *)((long)plStack_9d8 + 0x1f) < '\0') {
    plVar10 = (long *)*plVar10;
  }
  lVar12 = *(long *)(param_1 + 8);
  plStack_9f8 = plStack_9d8;
  uStack_9f0 = uStack_9d0;
  if (uStack_9d0 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  FUN_00481198(auStack_820,auStack_ab0);
  lStack_8e8 = lVar12;
  lStack_8e0 = (long)plVar10;
  FUN_004813a4(auStack_8d8,auStack_ab0);
  plStack_9e8 = (long *)0x0;
  pdStack_9e0 = (dword *)0x0;
  func_0x005c26e4(auStack_9b0,&lStack_8e8);
  FUN_00425cb4(auStack_9c8,plVar10);
  FUN_005b9a64(auStack_558,lVar12 + 0x1e0,auStack_9c8);
  uStack_2d0 = uStack_2d0 & 0xffffffffffffff00;
  uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
  pdStack_448 = (dword *)0x0;
  plStack_450 = (long *)0x0;
  func_0x005c4770(auStack_710);
  FUN_00481494();
  func_0x00467d6c(&plStack_450);
  FUN_00457530(&uStack_2d0);
  uVar3 = *(char *)(lVar12 + 200) == '\x01';
  if ((bool)uVar3) {
    FUN_00425cb4(&plStack_450,"Abort requests in Guest Mode");
    FUN_0046e000(&uStack_2d0,10,&plStack_450);
    func_0x005c4364(*(undefined8 *)(*plStack_9d8 + 0x30),plStack_9d8,auStack_710,&uStack_2d0);
    FUN_00464a10(&uStack_2d0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_450);
    pdVar11 = (dword *)0x0;
    plVar10 = (long *)0x0;
  }
  else {
    func_0x005c26e4(auStack_7d8,auStack_9b0);
    lVar9 = *(long *)(lVar12 + 0x40);
    uVar15 = *(undefined8 *)(lVar12 + 0x40);
    uVar14 = *(undefined8 *)(lVar12 + 0x38);
    pdVar11 = &section_000001a8.reloff;
    __Znwm();
    *(undefined8 *)(pdVar11 + 2) = 0;
    *(undefined8 *)(pdVar11 + 4) = 0;
    *(undefined ***)pdVar11 = &PTR_FUN_00a03f60;
    plVar10 = (long *)(pdVar11 + 6);
    *plVar10 = (long)&PTR_DAT_00a03fb0;
    *(undefined8 *)(pdVar11 + 8) = 0;
    *(undefined8 *)(pdVar11 + 10) = 0;
    *(undefined8 *)(pdVar11 + 0xe) = 0;
    *(undefined8 *)(pdVar11 + 0xc) = 0;
    *(undefined8 *)(pdVar11 + 0x12) = 0;
    *(undefined8 *)(pdVar11 + 0x10) = 0;
    *(undefined8 *)(pdVar11 + 0x16) = 0;
    *(undefined8 *)(pdVar11 + 0x14) = 0;
    *(undefined8 *)(pdVar11 + 0x1a) = 0;
    *(undefined8 *)(pdVar11 + 0x18) = 0;
    *(undefined8 *)(pdVar11 + 0x1e) = 0;
    *(undefined8 *)(pdVar11 + 0x1c) = 0;
    *(undefined8 *)(pdVar11 + 0x22) = 0;
    *(undefined8 *)(pdVar11 + 0x20) = 0;
    *(undefined8 *)(pdVar11 + 0x26) = 0;
    *(undefined8 *)(pdVar11 + 0x24) = 0;
    *(undefined8 *)(pdVar11 + 0x28) = 0;
    pdVar11[0x2a] = 0x3f800000;
    *(undefined1 *)(pdVar11 + 0x2e) = 0;
    *(undefined1 *)(pdVar11 + 0x34) = 0;
    *(undefined8 *)(pdVar11 + 0x38) = 0;
    *(undefined8 *)(pdVar11 + 0x3a) = 0;
    *(undefined8 *)(pdVar11 + 0x3c) = 0;
    pdVar11[0x40] = 0;
    *(undefined1 *)(pdVar11 + 0x41) = 0;
    *(undefined1 *)(pdVar11 + 0x42) = 0;
    *(undefined1 *)(pdVar11 + 0x44) = 0;
    *(undefined1 *)(pdVar11 + 0x4a) = 0;
    *(undefined8 *)(pdVar11 + 0x4c) = 0;
    *(undefined8 *)(pdVar11 + 0x4e) = 0;
    *(undefined8 *)(pdVar11 + 0x52) = uVar15;
    *(undefined8 *)(pdVar11 + 0x50) = uVar14;
    if (lVar9 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    *(long **)(pdVar11 + 0x54) = plStack_9d8;
    *(ulong *)(pdVar11 + 0x56) = uStack_9d0;
    if (uStack_9d0 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_01 != 0);
    }
    pdVar11[0x58] = 0;
    *(undefined8 *)(pdVar11 + 0x5c) = 0;
    *(undefined8 *)(pdVar11 + 0x5a) = 0;
    *(undefined8 *)(pdVar11 + 0x60) = 0;
    *(undefined8 *)(pdVar11 + 0x5e) = 0;
    *(undefined8 *)(pdVar11 + 100) = 0;
    *(undefined8 *)(pdVar11 + 0x62) = 0;
    *(undefined8 *)(pdVar11 + 0x67) = 0;
    *(undefined8 *)(pdVar11 + 0x65) = 0;
    *(undefined2 *)(pdVar11 + 0x76) = 0;
    *(undefined8 *)(pdVar11 + 0x6c) = 0;
    *(undefined8 *)(pdVar11 + 0x6a) = 0;
    *(undefined8 *)(pdVar11 + 0x70) = 0;
    *(undefined8 *)(pdVar11 + 0x6e) = 0;
    *(undefined8 *)(pdVar11 + 0x74) = 0;
    *(undefined8 *)(pdVar11 + 0x72) = 0;
    plStack_450 = plVar10;
    pdStack_448 = pdVar11;
    plStack_350 = plVar10;
    pdStack_348 = pdVar11;
    do {
      func_0x005c4144();
    } while (extraout_w9 != 0);
    do {
      func_0x005c3fec();
    } while (extraout_w10_02 != 0);
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    *(long **)(pdVar11 + 8) = plVar10;
    *(dword **)(pdVar11 + 10) = pdVar11;
    FUN_005c06fc(&uStack_2d0);
    func_0x005c26c0(&plStack_450);
    do {
      func_0x005c4144();
    } while (extraout_w9_00 != 0);
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    plStack_9e8 = plVar10;
    pdStack_9e0 = pdVar11;
    func_0x005c2700(&uStack_2d0);
    func_0x005c26e4(auStack_518,auStack_7d8);
    FUN_00484444(&plStack_450,lVar12 + 8);
    func_0x005c26e4(auStack_440,auStack_518);
    puVar4 = auStack_378;
    puVar7 = auStack_670;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
    plStack_360 = plVar10;
    pdStack_358 = pdVar11;
    do {
      func_0x005c4144();
    } while (extraout_w9_01 != 0);
    func_0x005c4270(auStack_518);
    uVar3 = cStack_6a0 == '\x01';
    if ((bool)uVar3) {
      plStack_530 = plStack_9d8;
      uStack_528 = uStack_9d0;
      if (uStack_9d0 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_03 != 0);
      }
      do {
        func_0x005c4144();
      } while (extraout_w9_02 != 0);
      ppuStack_2f0 = &PTR_FUN_00a042c8;
      uStack_538 = 0;
      uStack_540 = 0;
      pppuStack_2d8 = &ppuStack_2f0;
      plStack_2e8 = plVar10;
      pdStack_2e0 = pdVar11;
      func_0x005c4634();
      func_0x005c430c(plStack_530);
      (*extraout_x8_01)();
      uVar3 = *(char *)(lVar12 + 0xa4) == '\x01';
      if (((bool)uVar3) && (uStack_69c == 0)) {
        bVar1 = true;
      }
      else {
        uVar3 = (uStack_69c & 0xfffffffe) == 2;
        bVar1 = (bool)uVar3;
      }
      lVar9 = *(long *)(lVar12 + 0x48);
      FUN_00484444(&uStack_2d0,lVar12 + 8);
      uStack_2b8 = uStack_528;
      plStack_2c0 = plStack_530;
      if (uStack_528 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_04 != 0);
      }
      FUN_005c25f4(auStack_2b0,&plStack_450);
      FUN_00485f00(auStack_1b0,&ppuStack_2f0);
      FUN_00483978(auStack_190,auStack_710);
      puStack_90 = puVar4;
      puStack_88 = puVar7;
      bVar2 = false;
      if (bVar1) {
        lVar12 = lVar9 + 0x18;
        FUN_004845dc(lVar12,auStack_670);
        uVar3 = lVar9 + 0x20 == lVar12;
        bVar2 = (bool)uVar3;
      }
      plVar13 = *(long **)(lVar9 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&ppuStack_308,auStack_670);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_320,auStack_710);
      uStack_60 = uStack_2f8;
      pcStack_78 = (code *)CONCAT71(pcStack_78._1_7_,bVar2);
      lStack_68 = lStack_300;
      ppuStack_70 = ppuStack_308;
      lStack_300 = 0;
      ppuStack_308 = (undefined **)0x0;
      uStack_2f8 = 0;
      uStack_50 = uStack_318;
      uStack_58 = uStack_320;
      uStack_48 = uStack_310;
      uStack_318 = 0;
      uStack_320 = 0;
      uStack_310 = 0;
      pqVar5 = &section_00000248.size;
      __Znwm();
      pqVar5[5] = uStack_2c8;
      pqVar5[4] = uStack_2d0;
      pqVar5[1] = 0;
      pqVar5[2] = 0;
      *pqVar5 = (qword)&PTR_DAT_00a04170;
      pqVar5[3] = (qword)&PTR_DAT_00a041c0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
      pqVar5[7] = uStack_2b8;
      pqVar5[6] = (qword)plStack_2c0;
      if (uStack_2b8 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10_05 != 0);
      }
      FUN_005c25f4(pqVar5 + 8,auStack_2b0);
      FUN_00485f00(pqVar5 + 0x28,auStack_1b0);
      FUN_00483978(pqVar5 + 0x2c,auStack_190);
      pqVar5[0x4d] = (qword)puStack_88;
      pqVar5[0x4c] = (qword)puStack_90;
      uStack_338 = 0;
      uStack_340 = 0;
      pdStack_330 = (dword *)(pqVar5 + 3);
      pqStack_328 = pqVar5;
      (**(code **)(*plVar13 + 0x10))(plVar13,&pcStack_78,&pdStack_330);
      FUN_00485e94(&pdStack_330);
      FUN_005c2404(&uStack_340);
      func_0x005c4730();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_320);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_308);
      func_0x005c2428(&uStack_2d0);
      func_0x00485f90(&ppuStack_2f0);
      func_0x005c26c0(&uStack_540);
      func_0x00485fd4(&plStack_530);
    }
    else {
      plVar13 = *(long **)(lVar12 + 0x38);
      FUN_005c25f4(&uStack_2d0,&plStack_450);
      FUN_00483978(auStack_1d0,auStack_710);
      pcStack_78 = FUN_005c258c;
      ppuStack_70 = &PTR_FUN_00a04348;
      lVar12 = 0x200;
      __Znwm();
      FUN_005c25f4();
      FUN_00483978(lVar12 + 0x100,auStack_1d0);
      lStack_68 = lVar12;
      (**(code **)(*plVar13 + 0x10))(plVar13,&pcStack_78);
      func_0x005c4084(ppuStack_70);
      func_0x005c2698(&uStack_2d0);
    }
    func_0x005c2668(&plStack_450);
    func_0x005c26c0(&plStack_350);
    func_0x005c4270(auStack_7d8);
  }
  func_0x004862b8(auStack_710);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_558);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_9c8);
  func_0x005c4270(auStack_9b0);
  func_0x005c4270(&lStack_8e8);
  func_0x00486308(auStack_820);
  pplVar6 = &plStack_9f8;
  func_0x005c3a4c();
  lVar12 = *(long *)(param_1 + 0x38);
  plVar16 = *(long **)(param_1 + 0x38);
  plVar13 = *(long **)(param_1 + 0x30);
  func_0x005c4720();
  pplVar6[1] = (long *)0x0;
  pplVar6[2] = (long *)0x0;
  *pplVar6 = (long *)&PTR_FUN_00a046f0;
  pplVar8 = pplVar6 + 3;
  *pplVar8 = (long *)&PTR_DAT_00a04740;
  pplVar6[5] = plVar16;
  pplVar6[4] = plVar13;
  if (lVar12 != 0) {
    do {
      func_0x005c4324();
      pplVar8 = extraout_x8_02;
    } while (extraout_w11 != 0);
  }
  pplVar6[6] = plVar10;
  pplVar6[7] = (long *)pdVar11;
  if (pdVar11 != (dword *)0x0) {
    do {
      func_0x005c4324();
      pplVar8 = extraout_x8_03;
    } while (extraout_w11_00 != 0);
  }
  *extraout_x8 = pplVar8;
  extraout_x8[1] = pplVar6;
  func_0x005c4888();
  func_0x005c3a28(&plStack_9d8);
  FUN_00463c5c(auStack_ab0);
  FUN_00463c7c(auStack_b60);
  func_0x005c3fd8(uStack_18);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    FUN_00485e94(&pdStack_330);
    FUN_005c2404(&uStack_340);
    func_0x005c4730();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_320);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_308);
    func_0x005c2428(&uStack_2d0);
    func_0x00485f90(&ppuStack_2f0);
    func_0x005c26c0(&uStack_540);
    func_0x00485fd4(&plStack_530);
    func_0x005c2668(&plStack_450);
    func_0x005c26c0(&plStack_350);
    func_0x005c4270(auStack_7d8);
    func_0x004862b8(auStack_710);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_558);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_9c8);
    func_0x005c4270(auStack_9b0);
    func_0x005c4888();
    func_0x005c4270(&lStack_8e8);
    func_0x00486308(auStack_820);
    func_0x005c3a4c(&plStack_9f8);
    do {
      func_0x005c3a28(&plStack_9d8);
      FUN_00463c5c(auStack_ab0);
      FUN_00463c7c(auStack_b60);
      func_0x005c4134();
      func_0x005c4888();
    } while( true );
  }
  return;
}



/* Entry: 005be344; end: 005be34b;  */

void FUN_005be344(void)

{
  return;
}



/* Entry: 005be34c; end: 005be37b;  */

long FUN_005be34c(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 8);
  }
  return param_1;
}



/* Entry: 005be37c; end: 005be39b;  */

void FUN_005be37c(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_0040ce68();
  }
  return;
}



/* Entry: 005be39c; end: 005beb67;  */

void FUN_005be39c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5
                 ,undefined8 *param_6)

{
  uint uVar1;
  dword *pdVar2;
  undefined1 in_ZR;
  bool bVar3;
  qword *pqVar4;
  undefined1 *puVar5;
  section *psVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  long lVar8;
  undefined8 *extraout_x8_00;
  code *extraout_x8_01;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w11;
  undefined8 *extraout_x11;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  dword *pdStack_808;
  qword *pqStack_800;
  undefined1 auStack_7f8 [200];
  dword *pdStack_730;
  qword *pqStack_728;
  undefined8 auStack_720 [23];
  undefined1 auStack_668 [200];
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 auStack_588 [8];
  undefined8 uStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  dword *pdStack_560;
  qword *pqStack_558;
  undefined1 auStack_550 [200];
  undefined1 auStack_488 [16];
  undefined1 auStack_478 [200];
  undefined1 auStack_3b0 [8];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [32];
  dword *pdStack_370;
  qword *pqStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  char *pcStack_350;
  section *psStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined **ppuStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [24];
  undefined8 uStack_2f8;
  code *pcStack_2f0;
  undefined **ppuStack_2e8;
  dword *pdStack_2e0;
  qword *pqStack_2d8;
  undefined1 auStack_2d0 [264];
  undefined1 auStack_1c8 [32];
  undefined1 auStack_1a8 [32];
  undefined1 auStack_188 [256];
  undefined1 *puStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_18;
  
  func_0x005c4960();
  uVar9 = param_5;
  func_0x005c4048();
  uStack_18 = extraout_x8;
  FUN_00482450(auStack_720,uVar9);
  func_0x005c0384(auStack_668,param_2);
  func_0x005c4834(&uStack_5a0);
  func_0x005c4808(auStack_588);
  puVar7 = auStack_720;
  lStack_578 = param_6[1];
  uStack_580 = *param_6;
  if (param_6[1] != 0) {
    do {
      func_0x005c3fec();
      puVar7 = extraout_x11;
    } while (extraout_w10 != 0);
  }
  puVar10 = (undefined8 *)(param_1 + 8);
  uVar9 = *puVar10;
  lVar8 = *(long *)(param_1 + 0x10);
  puVar7[0x37] = *(undefined8 *)(param_1 + 0x10);
  puVar7[0x36] = uVar9;
  if (lVar8 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_00 != 0);
  }
  pqVar4 = &section_00000108.size;
  __Znwm();
  pqVar4[1] = 0;
  pqVar4[2] = 0;
  *pqVar4 = (qword)&PTR_FUN_00a03d50;
  pcStack_2f0 = FUN_005beb88;
  ppuStack_2e8 = &PTR_FUN_00a03d90;
  lVar8 = 0x1c0;
  __Znwm();
  FUN_00482450();
  FUN_005bee04(lVar8 + 0xb8,auStack_668);
  *(undefined8 *)(lVar8 + 0x188) = uStack_598;
  *(undefined8 *)(lVar8 + 0x180) = uStack_5a0;
  *(undefined8 *)(lVar8 + 400) = uStack_590;
  uStack_598 = 0;
  uStack_590 = 0;
  uStack_5a0 = 0;
  FUN_004829a4(lVar8 + 0x198,auStack_588);
  puVar7 = auStack_720;
  *(long *)(lVar8 + 0x1a8) = lStack_578;
  *(undefined8 *)(lVar8 + 0x1a0) = uStack_580;
  if (lStack_578 != 0) {
    do {
      func_0x005c4324();
      puVar7 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  *(undefined8 *)(lVar8 + 0x1b8) = uStack_568;
  *(undefined8 *)(lVar8 + 0x1b0) = uStack_570;
  puVar7[0x36] = 0;
  puVar7[0x37] = 0;
  uVar9 = *(undefined8 *)(param_1 + 0xd0);
  pqVar4[5] = *(undefined8 *)(param_1 + 0xd8);
  pqVar4[4] = uVar9;
  pqVar4[3] = (qword)&PTR_FUN_00a03db8;
  if (*(long *)(param_1 + 0xd8) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_01 != 0);
  }
  uVar9 = *param_6;
  pqVar4[0xd] = param_6[1];
  pqVar4[0xc] = uVar9;
  pqVar4[6] = (qword)FUN_005beb88;
  pqVar4[7] = (qword)&PTR_FUN_00a03d90;
  pqVar4[8] = lVar8;
  pdStack_2e0 = (dword *)0x0;
  if (param_6[1] != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_02 != 0);
  }
  FUN_00482450(pqVar4 + 0xe,param_5);
  pdVar2 = (dword *)(pqVar4 + 3);
  *(undefined1 *)(pqVar4 + 0x25) = 0;
  FUN_005bede0(&ppuStack_2e8);
  pdStack_730 = pdVar2;
  pqStack_728 = pqVar4;
  func_0x005c0384(auStack_7f8,param_2);
  pdStack_808 = pdVar2;
  pqStack_800 = pqVar4;
  do {
    func_0x005c4144();
  } while (extraout_w9 != 0);
  func_0x005c0384(auStack_550,auStack_7f8);
  FUN_00484444(auStack_488,puVar10);
  func_0x005c0384(auStack_478,auStack_550);
  FUN_004829a4(auStack_3b0,param_3);
  func_0x005c4834(auStack_3a8);
  puVar5 = auStack_390;
  lVar8 = param_4 + 0x78;
  FUN_00459e04();
  pdStack_370 = pdVar2;
  pqStack_368 = pqVar4;
  do {
    func_0x005c4144();
  } while (extraout_w9_00 != 0);
  func_0x005c4270(auStack_550);
  if ((*(byte *)(param_4 + 0x70) & 1) == 0) {
    FUN_005c01fc(&pcStack_2f0,auStack_488);
    FUN_00483978(auStack_1c8,param_4);
    pcStack_78 = FUN_005c0194;
    ppuStack_70 = &PTR_FUN_00a03f38;
    lVar8 = 0x228;
    __Znwm();
    FUN_005c01fc();
    FUN_00483978(lVar8 + 0x128,auStack_1c8);
    lStack_68 = lVar8;
    func_0x005c453c();
    func_0x005c45fc();
    func_0x005c42ac(ppuStack_70);
    func_0x005c02f0(&pcStack_2f0);
  }
  else {
    do {
      pqStack_558 = pqVar4;
      pdStack_560 = pdVar2;
      func_0x005c4144();
      pdVar2 = pdStack_560;
      pqVar4 = pqStack_558;
    } while (extraout_w9_01 != 0);
    uStack_2f8 = 0;
    func_0x005c4634();
    func_0x005c430c(pdStack_560);
    func_0x005c47bc();
    lVar11 = *(long *)(param_1 + 0x48);
    uVar1 = *(uint *)(param_4 + 0x74);
    bVar3 = *(char *)(param_1 + 0xa4) == '\x01';
    in_ZR = bVar3 && uVar1 == 0;
    FUN_00484444(&pcStack_2f0,puVar10);
    pqStack_2d8 = pqStack_558;
    pdStack_2e0 = pdStack_560;
    if (pqStack_558 != (qword *)0x0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_03 != 0);
    }
    FUN_005c01fc(auStack_2d0,auStack_488);
    FUN_00485f00(auStack_1a8,auStack_310);
    FUN_00483978(auStack_188,param_4);
    puStack_88 = puVar5;
    lStack_80 = lVar8;
    if (bVar3 && uVar1 == 0 || (uVar1 & 0xfffffffe) == 2) {
      lVar8 = lVar11 + 0x18;
      FUN_004845dc(lVar8,param_4 + 0xa0);
      in_ZR = lVar11 + 0x20 == lVar8;
      bVar3 = (bool)in_ZR;
    }
    else {
      bVar3 = false;
    }
    uVar9 = *(undefined8 *)(lVar11 + 8);
    func_0x005c4834(&ppuStack_328);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_340,param_4);
    pcStack_78 = (code *)CONCAT71(pcStack_78._1_7_,bVar3);
    lStack_68 = lStack_320;
    ppuStack_70 = ppuStack_328;
    uStack_60 = uStack_318;
    lStack_320 = 0;
    ppuStack_328 = (undefined **)0x0;
    uStack_318 = 0;
    uStack_50 = uStack_338;
    uStack_58 = uStack_340;
    uStack_48 = uStack_330;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_330 = 0;
    psVar6 = &section_00000298;
    __Znwm();
    psVar6->sectname[8] = '\0';
    psVar6->sectname[9] = '\0';
    psVar6->sectname[10] = '\0';
    psVar6->sectname[0xb] = '\0';
    psVar6->sectname[0xc] = '\0';
    psVar6->sectname[0xd] = '\0';
    psVar6->sectname[0xe] = '\0';
    psVar6->sectname[0xf] = '\0';
    psVar6->segname[0] = '\0';
    psVar6->segname[1] = '\0';
    psVar6->segname[2] = '\0';
    psVar6->segname[3] = '\0';
    psVar6->segname[4] = '\0';
    psVar6->segname[5] = '\0';
    psVar6->segname[6] = '\0';
    psVar6->segname[7] = '\0';
    *(undefined ***)(psVar6->segname + 8) = &PTR_DAT_00a03e98;
    *(undefined ***)psVar6->sectname = &PTR_DAT_00a03e48;
    psVar6->size = (qword)ppuStack_2e8;
    psVar6->addr = (qword)pcStack_2f0;
    pcStack_2f0 = (code *)0x0;
    ppuStack_2e8 = (undefined **)0x0;
    *(qword **)&psVar6->reloff = pqStack_2d8;
    *(dword **)&psVar6->offset = pdStack_2e0;
    if (pqStack_2d8 != (qword *)0x0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_04 != 0);
    }
    FUN_005c01fc(&psVar6->flags,auStack_2d0);
    FUN_00485f00(&psVar6[4].size,auStack_1a8);
    FUN_00483978(&psVar6[4].reserved2,auStack_188);
    *(long *)psVar6[8].segname = lStack_80;
    *(undefined1 **)(psVar6[8].sectname + 8) = puStack_88;
    uStack_358 = 0;
    uStack_360 = 0;
    pcStack_350 = psVar6->segname + 8;
    psStack_348 = psVar6;
    func_0x005c453c();
    (*extraout_x8_01)(uVar9,&pcStack_78,&pcStack_350);
    FUN_00485e94(&pcStack_350);
    FUN_005c0134(&uStack_360);
    func_0x005c4730();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_340);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_328);
    func_0x005c0158(&pcStack_2f0);
    func_0x00485f90(auStack_310);
    func_0x00485fd4(&pdStack_560);
  }
  func_0x005c02b0(auStack_488);
  func_0x005c3a4c(&pdStack_808);
  func_0x005c4270(auStack_7f8);
  func_0x005c0318(&pdStack_730);
  func_0x005c033c(auStack_720);
  func_0x005c3fd8(uStack_18);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_00485e94(&pcStack_350);
  FUN_005c0134(&uStack_360);
  func_0x005c4730();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_340);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_328);
  func_0x005c0158(&pcStack_2f0);
  func_0x00485f90(auStack_310);
  func_0x00485fd4(&pdStack_560);
  func_0x005c02b0(auStack_488);
  func_0x005c3a4c(&pdStack_808);
  func_0x005c4270(auStack_7f8);
  func_0x005c0318(&pdStack_730);
  puVar7 = auStack_720;
  func_0x005c033c();
  func_0x005c4134();
  *puVar7 = &PTR_FUN_00a03d50;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005beb68; end: 005beb6b;  */

void FUN_005beb68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03d50;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005beb6c; end: 005beb7f;  */

void FUN_005beb6c(void)

{
  FUN_005bf508();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005beb80; end: 005beb87;  */

void FUN_005beb80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005beb88; end: 005beddf;  */

void FUN_005beb88(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long extraout_x8;
  long lVar5;
  int extraout_w11;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [184];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [32];
  undefined1 auStack_1c8 [256];
  undefined1 auStack_c8 [4];
  int iStack_c4;
  long alStack_10 [2];
  
  func_0x005c4960();
  lVar6 = *(long *)(param_2 + 0x10);
  FUN_00481bc4(auStack_1c8,lVar6 + 0x1b0);
  FUN_00482e48(alStack_10,auStack_1c8);
  func_0x0046c830(auStack_1c8);
  if ((alStack_10[0] == 0) || (*(char *)(alStack_10[0] + 0x34) == '\x01')) {
    func_0x005c4788();
    FUN_00425cb4(auStack_2c8);
    func_0x005c4260(auStack_1c8);
    func_0x005c4530();
    func_0x005c409c();
  }
  else {
    if ((*(char **)(param_1 + 0xf0) == (char *)0x0) || (**(char **)(param_1 + 0xf0) != '\x01')) {
      FUN_00482450(auStack_c8,lVar6);
      iStack_c4 = iStack_c4 + 1;
      uVar3 = *(undefined1 *)(param_1 + 0x98);
      uVar4 = *(undefined1 *)(param_1 + 0x70);
      uVar1 = *(undefined4 *)(param_1 + 0x74);
      uVar7 = *(undefined8 *)(param_1 + 0xb8);
      uVar2 = *(undefined4 *)(param_1 + 0xc0);
      FUN_00459e04(auStack_1e8,param_1 + 0xd0);
      lVar5 = param_1 + 0x48;
      uStack_1f8 = *(undefined8 *)(param_1 + 0xf8);
      uStack_200 = *(undefined8 *)(param_1 + 0xf0);
      if (*(long *)(param_1 + 0xf8) != 0) {
        do {
          func_0x005c4324();
          lVar5 = extraout_x8;
        } while (extraout_w11 != 0);
      }
      FUN_00482e9c(auStack_1c8,param_1 + 0x18,param_1 + 0x30,param_1 + 0xa0,uVar3,uVar4,uVar1,
                   param_1 + 0x78,lVar5,uVar7,uVar2);
      func_0x00467d6c(&uStack_200);
      FUN_00457530(auStack_1e8);
      func_0x005c0384(auStack_2c8,lVar6 + 0xb8);
      FUN_005be39c(alStack_10[0],auStack_2c8,lVar6 + 0x198,auStack_1c8,auStack_c8,lVar6 + 0x1a0);
      FUN_00463c5c(auStack_2b8);
      func_0x00467d18(auStack_1c8);
      FUN_0046c560(auStack_c8);
      goto LAB_005bed48;
    }
    FUN_00425cb4(auStack_2c8,"Request cancelled");
    func_0x005c4260(auStack_1c8);
    func_0x005c4530();
    func_0x005c409c();
  }
  FUN_00464a10(auStack_1c8);
  func_0x005c447c();
LAB_005bed48:
  FUN_00482fa8(alStack_10);
  return;
}



/* Entry: 005bede0; end: 005bedff;  */

void FUN_005bede0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x005c033c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005bee00; end: 005bee03;  */

void FUN_005bee00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005bee04; end: 005bee2b;  */

undefined8 * FUN_005bee04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  FUN_00463a14(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 005bee2c; end: 005bee2f;  */

long FUN_005bee2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_FUN_00a03db8);
  FUN_0046c560(lVar1 + 0x58);
  func_0x005c3a4c(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  func_0x0045a078();
  return param_1;
}



/* Entry: 005bee30; end: 005bee43;  */

void FUN_005bee30(void)

{
  FUN_005bf454();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bee44; end: 005bee73;  */

void FUN_005bee44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005bee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x10))();
  return;
}



/* Entry: 005bee74; end: 005bef7f;  */

void FUN_005bee74(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puStack_90;
  long lStack_88;
  char cStack_79;
  undefined1 *puStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  byte bStack_51;
  char *pcStack_50;
  undefined8 uStack_48;
  
  pcStack_50 = "x-envoy-overloaded";
  uStack_48 = 0x12;
  lVar1 = param_3;
  FUN_00464080(param_3,&pcStack_50);
  if (param_3 + 8 == lVar1) {
    FUN_005bad5c(auStack_68);
    if (-1 < (char)bStack_51) {
      uStack_60 = (ulong)bStack_51;
    }
    if (uStack_60 == 0) {
      *(undefined1 *)(param_1 + 0x110) = 0;
    }
    else {
      func_0x005bad60(&puStack_90);
      puStack_78 = puStack_90;
      if (-1 < (long)cStack_79) {
        puStack_78 = (undefined1 *)&puStack_90;
      }
      lStack_70 = lStack_88;
      if (-1 < cStack_79) {
        lStack_70 = (long)cStack_79;
      }
      lVar2 = param_3;
      FUN_00464080(param_3,&puStack_78);
      *(bool *)(param_1 + 0x110) = lVar1 != lVar2;
      func_0x005c4278();
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  }
  else {
    *(undefined1 *)(param_1 + 0x110) = 1;
  }
  (**(code **)(**(long **)(param_1 + 0x48) + 0x28))(*(long **)(param_1 + 0x48),param_2,param_3);
  return;
}



/* Entry: 005bef80; end: 005bf2a3;  */

void FUN_005bef80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [16];
  undefined1 auStack_1e8 [256];
  undefined8 uStack_e8;
  long alStack_e0 [5];
  code *pcStack_b8;
  undefined **ppuStack_b0;
  long lStack_a8;
  undefined8 uStack_58;
  
  func_0x005c4670();
  func_0x005c4048();
  uStack_58 = extraout_x8;
  if (((*(byte *)(param_1 + 0x110) & 1) == 0) &&
     (((*(byte **)(unaff_x20 + 0xf0) == (byte *)0x0 || ((**(byte **)(unaff_x20 + 0xf0) & 1) == 0))
      && (uVar5 = param_3, FUN_005ba880(param_3,unaff_x19 + 0x58), (int)uVar5 != 0)))) {
    (**(code **)(**(long **)(unaff_x19 + 0x48) + 0x48))(*(long **)(unaff_x19 + 0x48),param_3);
    lVar1 = unaff_x19 + 0x58;
    func_0x0048379c(lVar1);
    uVar5 = *(undefined8 *)(unaff_x19 + 8);
    FUN_00483978(auStack_1e8);
    uStack_e8 = *(undefined8 *)(unaff_x19 + 0x18);
    plVar2 = alStack_e0;
    func_0x005c47bc(*(undefined8 *)(*(long *)(unaff_x19 + 0x20) + 0x10),plVar2);
    __ZNSt3__16chrono12steady_clock3nowEv();
    pcStack_b8 = FUN_005bf4a4;
    ppuStack_b0 = &PTR_FUN_00a03e20;
    lVar3 = 0x130;
    __Znwm();
    FUN_00483978();
    *(undefined8 *)(lVar3 + 0x100) = uStack_e8;
    (**(code **)(alStack_e0[0] + 0x10))(lVar3 + 0x108,alStack_e0);
    lStack_a8 = lVar3;
    FUN_0064c418(auStack_1f8,uVar5,&pcStack_b8,plVar2 + lVar1 * 0x1e848);
    func_0x005c42ac(ppuStack_b0);
    func_0x004631ec(auStack_1f8);
    FUN_005bf4d8(auStack_1e8);
  }
  else {
    __ZNSt3__19to_stringEi(&uStack_210,param_4);
    func_0x00483a94(auStack_1e8,&PTR_s_fromServer_00a03d30,&uStack_210);
    func_0x00483acc(&pcStack_b8,auStack_1e8,1);
    func_0x005c4518();
    func_0x005c4278();
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    in_ZR = *(char *)(unaff_x20 + 0x90) == '\x01';
    if ((bool)in_ZR) {
      func_0x005c44d0();
      func_0x00483dc8(&uStack_210,auStack_1e8);
      func_0x005c4518();
      func_0x005c44d0();
      func_0x00483dc8(&pcStack_b8,auStack_1e8);
      func_0x005c4518();
    }
    if (lRam0000000000b6bf88 != 0) {
      FUN_0048405c(auStack_1e8,&pcStack_b8);
      func_0x005c4908();
      func_0x005c4760();
      (*extraout_x8_00)();
      func_0x005c4668();
    }
    if (lRam0000000000b6bf88 != 0) {
      func_0x005c47ec();
      func_0x005c4908();
      func_0x005c4760();
      (*extraout_x8_01)();
      func_0x005c4668();
    }
    if (lRam0000000000b6bf88 != 0) {
      func_0x005c47ec();
      func_0x005c4908();
      func_0x005c4760();
      (*extraout_x8_02)();
      func_0x005c4668();
    }
    FUN_005ba72c(0x21);
    (**(code **)(**(long **)(unaff_x19 + 0x48) + 0x30))();
    FUN_00484190(&uStack_210);
    FUN_00484190(&pcStack_b8);
  }
  func_0x005c3fd8(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x005c42ac(ppuStack_b0);
  puVar4 = auStack_1e8;
  FUN_005bf4d8();
  func_0x005c4134();
                    /* WARNING: Could not recover jumptable at 0x005bf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(puVar4 + 0x48) + 0x38))();
  return;
}



/* Entry: 005bf2a4; end: 005bf2b3;  */

void FUN_005bf2a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005bf2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x38))();
  return;
}



/* Entry: 005bf2b4; end: 005bf44f;  */

void FUN_005bf2b4(long param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [48];
  undefined8 uStack_38;
  
  func_0x005c4048();
  uStack_38 = extraout_x8;
  FUN_004841bc(auStack_68,&PTR_s_fromServer_00a03d30,"1");
  func_0x00483acc(auStack_80,auStack_68,1);
  func_0x005c4528();
  func_0x005c4560();
  uVar3 = *(char *)(param_2 + 0x90) == '\x01';
  if ((bool)uVar3) {
    func_0x005c44bc();
    func_0x00483dc8(auStack_98,auStack_68);
    func_0x005c4528();
    func_0x005c44bc();
    func_0x00483dc8(auStack_80,auStack_68);
    func_0x005c4528();
  }
  puVar2 = puRam0000000000b6bf88;
  if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
    func_0x005c4844();
    (**(code **)*puVar2)(puVar2,0x1f,param_2 + 0xa0,0,auStack_68);
    func_0x005c4850();
  }
  puVar2 = puRam0000000000b6bf88;
  if (puRam0000000000b6bf88 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    func_0x005c4844();
    (**(code **)*puVar2)(puVar2,0x22,param_2 + 0xa0,(long)iVar1,auStack_68);
    func_0x005c4850();
  }
  FUN_005ba72c(0x21,param_2,1,auStack_98);
  func_0x005c47bc(*(undefined8 *)(**(long **)(param_1 + 0x48) + 0x40));
  FUN_00484190(auStack_98);
  FUN_00484190(auStack_80);
  func_0x005c3fd8(uStack_38);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x005c4528();
  FUN_00484190(auStack_98);
  FUN_00484190(auStack_80);
  func_0x005c4134();
  return;
}



/* Entry: 005bf450; end: 005bf453;  */

void FUN_005bf450(void)

{
  return;
}



/* Entry: 005bf454; end: 005bf4a3;  */

long FUN_005bf454(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x005c46f4(&PTR_FUN_00a03db8);
  FUN_0046c560(lVar1 + 0x58);
  func_0x005c3a4c(param_1 + 0x48);
  (*(code *)**(undefined8 **)(param_1 + 0x20))();
  func_0x0045a078();
  return param_1;
}



/* Entry: 005bf4a4; end: 005bf4b3;  */

void FUN_005bf4a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x005bf4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x100))(lVar1,lVar1 + 0x100);
  return;
}



/* Entry: 005bf4b4; end: 005bf4d3;  */

void FUN_005bf4b4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005bf4d8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005bf4d4; end: 005bf4d7;  */

void FUN_005bf4d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005bf4d8; end: 005bf507;  */

void FUN_005bf4d8(long param_1)

{
  (*(code *)**(undefined8 **)(param_1 + 0x108))(param_1 + 0x108);
  func_0x00467d6c(param_1 + 0xf0);
  FUN_00457530(param_1 + 0xd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xa0);
  FUN_00457530(param_1 + 0x78);
  func_0x00459d84(param_1 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x30);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 005bf508; end: 005bf517;  */

void FUN_005bf508(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03d50;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005bf518; end: 005bf52b;  */

void FUN_005bf518(void)

{
  FUN_005c0128();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bf52c; end: 005bf537;  */

void FUN_005bf52c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005bf538; end: 005bf54b;  */

void FUN_005bf538(void)

{
  FUN_005bf874();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bf54c; end: 005bf873;  */

undefined8 * FUN_005bf54c(void)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  long unaff_x19;
  long *plVar4;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined1 auStack_380 [56];
  undefined8 uStack_348;
  long lStack_340;
  undefined1 auStack_338 [16];
  undefined1 auStack_328 [200];
  undefined1 auStack_260 [8];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [32];
  undefined8 uStack_220;
  long lStack_218;
  undefined1 auStack_210 [32];
  undefined1 auStack_1f0 [256];
  long alStack_f0 [3];
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_58;
  
  puVar3 = &uStack_390;
  func_0x005c4670();
  func_0x005c4048();
  func_0x005c4914();
  (*extraout_x8)();
  uStack_388 = *(undefined8 *)(unaff_x19 + 0x10);
  uStack_390 = *(undefined8 *)(unaff_x19 + 8);
  if (*(long *)(unaff_x19 + 0x10) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  FUN_00484de8(auStack_380);
  lStack_340 = *(long *)(unaff_x19 + 0x20);
  uStack_348 = *(undefined8 *)(unaff_x19 + 0x18);
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_00 != 0);
  }
  FUN_005c01fc(auStack_338,unaff_x19 + 0x28);
  FUN_00485f00(auStack_210,unaff_x19 + 0x150);
  FUN_00483978(auStack_1f0,unaff_x19 + 0x170);
  plVar2 = alStack_f0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar2,unaff_x19 + 0x210)
  ;
  uStack_d8 = *(undefined1 *)(unaff_x19 + 0x208);
  uStack_c8 = *(undefined8 *)(unaff_x19 + 0x278);
  uStack_d0 = *(undefined8 *)(unaff_x19 + 0x270);
  func_0x005c46a0();
  plVar4 = *(long **)(*(long *)(unaff_x19 + 8) + 0x38);
  uVar1 = (long *)*plVar2 == plVar4;
  if ((bool)uVar1) {
    FUN_005bf8a0(&uStack_390);
  }
  else {
    pcStack_b8 = FUN_005c00b4;
    ppuStack_b0 = &PTR_FUN_00a03f20;
    __Znwm(0x2d0);
    func_0x005c4934();
    if (extraout_x8_00 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_01 != 0);
    }
    FUN_00484de8(unaff_x19 + 0x10,auStack_380);
    *(long *)(unaff_x19 + 0x50) = lStack_340;
    *(undefined8 *)(unaff_x19 + 0x48) = uStack_348;
    if (lStack_340 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_02 != 0);
    }
    func_0x005c48e8();
    if (extraout_x8_01 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_03 != 0);
    }
    func_0x005c0384(unaff_x19 + 0x68,auStack_328);
    FUN_004829a4(unaff_x19 + 0x130,auStack_260);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (unaff_x19 + 0x138,auStack_258);
    FUN_00459e04(unaff_x19 + 0x150,auStack_240);
    *(long *)(unaff_x19 + 0x178) = lStack_218;
    *(undefined8 *)(unaff_x19 + 0x170) = uStack_220;
    if (lStack_218 != 0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_04 != 0);
    }
    FUN_00485dd8(unaff_x19 + 0x180,auStack_210);
    FUN_00483978(unaff_x19 + 0x1a0,auStack_1f0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (unaff_x19 + 0x2a0,alStack_f0);
    *(undefined8 *)(unaff_x19 + 0x2c8) = uStack_c8;
    *(undefined8 *)(unaff_x19 + 0x2c0) = uStack_d0;
    *(ulong *)(unaff_x19 + 0x2b8) = CONCAT71(uStack_d7,uStack_d8);
    (**(code **)(*plVar4 + 0x10))(plVar4,&pcStack_b8);
    func_0x005c42b8(ppuStack_b0);
  }
  FUN_005c00e0();
  func_0x005c3fd8(uStack_58);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x005c42b8(ppuStack_b0);
    FUN_005c00e0(&uStack_390);
    __Unwind_Resume();
    *puVar3 = &PTR_DAT_00a03e98;
    func_0x005c0158(puVar3 + 1);
    return puVar3;
  }
  return puVar3;
}



/* Entry: 005bf874; end: 005bf89f;  */

undefined8 * FUN_005bf874(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a03e98;
  func_0x005c0158(param_1 + 1);
  return param_1;
}



/* Entry: 005bf8a0; end: 005bfaef;  */

void FUN_005bf8a0(double param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *unaff_x22;
  undefined1 auStack_1f0 [216];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [192];
  
  func_0x005c43a8(param_2 + 0x30);
  if (*(char *)(*param_2 + 0x34) == '\x01') {
    if ((char)param_2[0x57] == '\x01') {
      func_0x005c436c(param_2 + 0x54);
    }
    else {
      func_0x005c45f4(param_2 + 0x54);
    }
    func_0x005c4788();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43e8();
  }
  else {
    func_0x005c4634();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(param_2 + 0x54,(long)param_1);
    iVar1 = (int)param_2 + 0x10;
    FUN_005b9944();
    if (iVar1 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_118,param_2 + 0x54);
      func_0x005c45ac(*(undefined8 *)(*param_2 + 0x18),auStack_1f0);
      func_0x005c47a0();
      func_0x005c459c();
      func_0x005c458c();
      func_0x005c4154();
      func_0x005c447c();
      func_0x005c4574();
      func_0x005c45d4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      plVar2 = param_2 + 2;
      FUN_005b99e0(plVar2);
      if ((char)param_2[0x57] == '\x01') {
        FUN_005b9d10(param_2 + 0x54,plVar2);
        func_0x005c41fc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(param_2 + 0x54,plVar2);
        func_0x005c41fc();
        FUN_005ba190();
      }
      func_0x005c43c4();
      func_0x005c45c4();
      func_0x005c43e8();
      func_0x005c438c();
      func_0x005c41ec();
      func_0x005c45e4();
      goto LAB_005bfa1c;
    }
    if (*(long *)(*param_2 + 0x68) != 0) {
      func_0x005c483c(*(undefined8 *)(*(long *)*unaff_x22 + 0x20));
      func_0x005c48d4();
      FUN_005bfb08();
      goto LAB_005bfa1c;
    }
    if ((char)param_2[0x57] == '\x01') {
      func_0x005c436c(param_2 + 0x54);
    }
    else {
      func_0x005c45f4(param_2 + 0x54);
    }
    func_0x005c4954();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43e8();
  }
  func_0x005c438c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
LAB_005bfa1c:
  func_0x005c4690();
  return;
}



/* Entry: 005bfaf0; end: 005bfb07;  */

void FUN_005bfaf0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *extraout_x8;
  
  if (*(long *)(*param_1 + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x005c44a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)param_1[2] + 0x30))(*(long **)param_1[2],param_1[1],param_2,0);
    return;
  }
  plVar1 = *(long **)(*param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0048533c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return;
  }
  func_0x004686dc(0,param_1[1]);
  uVar2 = 0x340;
  __Znwm();
  FUN_004854e8();
  *extraout_x8 = uVar2;
  return;
}



/* Entry: 005bfb08; end: 005bfddb;  */

void FUN_005bfb08(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char *pcVar1;
  long *plVar2;
  long lVar3;
  int extraout_w10;
  undefined8 uVar4;
  long lVar5;
  long alStack_138 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x34) == '\x01') {
    func_0x005c436c(param_1 + 0x1c);
    func_0x005c4788();
    func_0x005c481c();
    func_0x005c4260(alStack_138);
    func_0x005c4530();
    func_0x005c409c();
  }
  else {
    if (*(byte **)(param_4 + 0xf0) != (byte *)0x0) {
      if ((**(byte **)(param_4 + 0xf0) & 1) != 0) {
        func_0x005c436c(param_1 + 0x1c);
        func_0x005c481c();
        func_0x005c4260(alStack_138);
        func_0x005c4530();
        func_0x005c409c();
        goto LAB_005bfd38;
      }
      lVar5 = *param_1;
    }
    if (*(long *)(lVar5 + 0x68) != 0) {
      uVar4 = *(undefined8 *)(lVar5 + 0x80);
      pcVar1 = section_00000338.segname + 8;
      __Znwm();
      FUN_00485534();
      *(undefined ***)pcVar1 = &PTR_FUN_00a03ed8;
      *(undefined4 *)(pcVar1 + 0x324) = 0;
      pcVar1[0x328] = 0;
      lVar5 = param_1[0x24];
      *(long *)(pcVar1 + 0x330) = param_1[0x23];
      *(long *)(pcVar1 + 0x338) = lVar5;
      if (lVar5 != 0) {
        do {
          func_0x005c3fec();
        } while (extraout_w10 != 0);
      }
      *(undefined8 *)(pcVar1 + 0x340) = 0;
      *(undefined8 *)(pcVar1 + 0x348) = uVar4;
      if (*(long *)(param_4 + 0xf0) != 0) {
        FUN_004853b4(*(long *)(param_4 + 0xf0),(long)pcVar1 + 0x120);
      }
      lVar5 = *param_1;
      func_0x005c45ac(*(undefined8 *)(lVar5 + 0x18),alStack_138);
      func_0x005c4604(lVar5,(long)pcVar1 + 0x120);
      plVar2 = alStack_138;
      func_0x00465c30(plVar2);
      if ((char)param_1[0x22] == '\x01') {
        func_0x005c43c4();
        plVar2 = (long *)(pcVar1 + 0x120);
        FUN_00409258(plVar2,alStack_138,param_1 + 0x1f);
        func_0x005c41ec();
      }
      FUN_005b950c();
      lVar5 = param_1[2];
      FUN_004859e8(param_1 + 4,(long)pcVar1 + 0x120,param_4);
      func_0x0046832c(alStack_138,*(undefined8 *)(lVar5 + 0x68),param_1[3],(long)pcVar1 + 0x120,
                      param_1 + 0x1b,plVar2);
      lVar5 = alStack_138[0];
      alStack_138[0] = 0;
      lVar3 = *(long *)(pcVar1 + 0x340);
      *(long *)(pcVar1 + 0x340) = lVar5;
      if (lVar3 != 0) {
        func_0x005c4470();
        lVar5 = alStack_138[0];
        alStack_138[0] = 0;
        if (lVar5 != 0) {
          func_0x0046be88();
        }
      }
      FUN_005bc160(*(undefined8 *)(*param_1 + 0x80),param_4,pcVar1);
      func_0x005c430c(*(undefined8 *)(pcVar1 + 0x340));
      func_0x005c483c();
      return;
    }
    func_0x005c436c(param_1 + 0x1c);
    func_0x005c4954();
    func_0x005c481c();
    func_0x005c4260(alStack_138);
    func_0x005c4530();
    func_0x005c409c();
  }
LAB_005bfd38:
  FUN_00464a10(alStack_138);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 005bfddc; end: 005bfddf;  */

undefined8 * FUN_005bfddc(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00a03ed8;
  lVar1 = param_1[0x68];
  param_1[0x68] = 0;
  if (lVar1 != 0) {
    func_0x005c4470();
  }
  func_0x005c3a4c(param_1 + 0x66);
  *param_1 = &PTR_FUN_009e85c0;
  if (param_1[0x22] != 0) {
    FUN_0048593c(param_1[0x22],param_1 + 0x24);
  }
  FUN_00468b24(param_1 + 99);
  FUN_00464a10(param_1 + 0x5c);
  FUN_004091e4(param_1 + 0x24);
  func_0x00467d18(param_1 + 4);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005bfde0; end: 005bfdf3;  */

void FUN_005bfde0(void)

{
  FUN_005c0070();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005bfdf4; end: 005bffcb;  */

void FUN_005bfdf4(long *param_1,int param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 auStack_58 [7];
  
  iVar1 = *(int *)((long)param_1 + 0x324);
  if (iVar1 == 2) {
    lVar3 = param_1[0x69];
    func_0x005bc6ec(lVar3,param_1 + 4);
    if (param_2 == 0) {
      lVar3 = param_1[0x66];
      func_0x005c4748();
      func_0x005c4948();
      func_0x005c4260();
      func_0x005c4530();
      func_0x005c4364(lVar3,param_1 + 4,auStack_58);
      func_0x005c43cc();
      func_0x005c4278();
    }
    else {
      if ((*(byte *)(param_1 + 0x65) & 1) == 0) {
        func_0x005c4824();
        func_0x005c4438();
        *(undefined1 *)(param_1 + 0x65) = 1;
      }
      if ((int)param_1[0x5c] == 0) {
        (**(code **)(*(long *)param_1[0x66] + 0x40))((long *)param_1[0x66],param_1 + 4);
      }
      else {
        func_0x005c4824();
        (**(code **)(*(long *)param_1[0x66] + 0x30))
                  ((long *)param_1[0x66],param_1 + 4,param_1 + 0x5c,*(long *)(lVar3 + 0x10) != 0);
      }
    }
    (**(code **)(*param_1 + 8))(param_1);
    return;
  }
  if (iVar1 == 1) {
    if (param_2 != 0) {
      if ((*(byte *)(param_1 + 0x65) & 1) == 0) {
        func_0x005c4824();
        func_0x005c4438();
        *(undefined1 *)(param_1 + 0x65) = 1;
      }
      (**(code **)(*(long *)param_1[0x66] + 0x38))((long *)param_1[0x66],param_1 + 4,param_1 + 99);
      auStack_58[0] = 0;
      func_0x0046a6c8(param_1 + 99,auStack_58);
      FUN_00468b24(auStack_58);
      (**(code **)(*(long *)(param_1[0x68] + 8) + 0x10))
                ((long *)(param_1[0x68] + 8),param_1 + 99,param_1);
      return;
    }
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    if (param_2 != 0) {
      *(undefined4 *)((long)param_1 + 0x324) = 1;
      plVar2 = (long *)(param_1[0x68] + 8);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x10);
      plVar4 = param_1 + 99;
      goto LAB_005bfec8;
    }
  }
  *(undefined4 *)((long)param_1 + 0x324) = 2;
  plVar2 = (long *)param_1[0x68];
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x20);
  plVar4 = param_1 + 0x5c;
LAB_005bfec8:
                    /* WARNING: Could not recover jumptable at 0x005bfed8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,plVar4,param_1);
  return;
}



/* Entry: 005bffcc; end: 005bffd3;  */

undefined8 FUN_005bffcc(void)

{
  return 0;
}



/* Entry: 005bffd4; end: 005c006f;  */

void FUN_005bffd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x330);
  func_0x005c43c4(param_1,"Service was shutdown");
  func_0x005c4260(&uStack_60);
  func_0x005c4530();
  func_0x005c4364(uVar1,param_1 + 0x20,&uStack_60);
  func_0x005c4430();
  func_0x005c41ec();
  uStack_58 = *(undefined8 *)(param_1 + 0x338);
  uStack_60 = *(undefined8 *)(param_1 + 0x330);
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  func_0x005c3a4c(&uStack_60);
  *(undefined4 *)(param_1 + 0x324) = 2;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 005c0070; end: 005c00b3;  */

undefined8 * FUN_005c0070(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_00a03ed8;
  lVar1 = param_1[0x68];
  param_1[0x68] = 0;
  if (lVar1 != 0) {
    func_0x005c4470();
  }
  func_0x005c3a4c(param_1 + 0x66);
  *param_1 = &PTR_FUN_009e85c0;
  if (param_1[0x22] != 0) {
    FUN_0048593c(param_1[0x22],param_1 + 0x24);
  }
  FUN_00468b24(param_1 + 99);
  FUN_00464a10(param_1 + 0x5c);
  FUN_004091e4(param_1 + 0x24);
  func_0x00467d18(param_1 + 4);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c00b4; end: 005c00bb;  */

void FUN_005c00b4(double param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *unaff_x22;
  undefined1 auStack_1f0 [216];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [192];
  
  plVar3 = *(long **)(param_2 + 0x10);
  func_0x005c43a8(plVar3 + 0x30);
  if (*(char *)(*plVar3 + 0x34) == '\x01') {
    if ((char)plVar3[0x57] == '\x01') {
      func_0x005c436c(plVar3 + 0x54);
    }
    else {
      func_0x005c45f4(plVar3 + 0x54);
    }
    func_0x005c4788();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43e8();
  }
  else {
    func_0x005c4634();
    func_0x0033a204();
    FUN_0033a2e8();
    FUN_005b9d30(plVar3 + 0x54,(long)param_1);
    iVar1 = (int)plVar3 + 0x10;
    FUN_005b9944();
    if (iVar1 == 0) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_118,plVar3 + 0x54);
      func_0x005c45ac(*(undefined8 *)(*plVar3 + 0x18),auStack_1f0);
      func_0x005c47a0();
      func_0x005c459c();
      func_0x005c458c();
      func_0x005c4154();
      func_0x005c447c();
      func_0x005c4574();
      func_0x005c45d4();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
      plVar2 = plVar3 + 2;
      FUN_005b99e0(plVar2);
      if ((char)plVar3[0x57] == '\x01') {
        FUN_005b9d10(plVar3 + 0x54,plVar2);
        func_0x005c41fc();
        FUN_005b9eac();
      }
      else {
        func_0x005b9d20(plVar3 + 0x54,plVar2);
        func_0x005c41fc();
        FUN_005ba190();
      }
      func_0x005c43c4();
      func_0x005c45c4();
      func_0x005c43e8();
      func_0x005c438c();
      func_0x005c41ec();
      func_0x005c45e4();
      goto LAB_005bfa1c;
    }
    if (*(long *)(*plVar3 + 0x68) != 0) {
      func_0x005c483c(*(undefined8 *)(*(long *)*unaff_x22 + 0x20));
      func_0x005c48d4();
      FUN_005bfb08();
      goto LAB_005bfa1c;
    }
    if ((char)plVar3[0x57] == '\x01') {
      func_0x005c436c(plVar3 + 0x54);
    }
    else {
      func_0x005c45f4(plVar3 + 0x54);
    }
    func_0x005c4954();
    func_0x005c45dc();
    func_0x005c4104();
    func_0x005c43e8();
  }
  func_0x005c438c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
LAB_005bfa1c:
  func_0x005c4690();
  return;
}



/* Entry: 005c00bc; end: 005c00db;  */

void FUN_005c00bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_005c00e0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c00dc; end: 005c00df;  */

void FUN_005c00dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c00e0; end: 005c0127;  */

undefined8 FUN_005c00e0(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2a0);
  func_0x00467d18(param_1 + 0x1a0);
  func_0x00485f90(param_1 + 0x180);
  FUN_005c02b0(param_1 + 0x58);
  func_0x00485fd4(param_1 + 0x48);
  func_0x005c467c();
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c0128; end: 005c0133;  */

void FUN_005c0128(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_00a03e48;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c0134; end: 005c0193;  */

void FUN_005c0134(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 005c0194; end: 005c01d7;  */

void FUN_005c0194(void)

{
  undefined1 auStack_58 [56];
  
  func_0x005c47cc();
  FUN_005bfb08();
  FUN_00470b00(auStack_58);
  return;
}



/* Entry: 005c01d8; end: 005c01f7;  */

void FUN_005c01d8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x005c02f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c01f8; end: 005c01fb;  */

void FUN_005c01f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c01fc; end: 005c02af;  */

undefined8 * FUN_005c01fc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_005bee04(param_1 + 2,param_2 + 2);
  FUN_004829a4(param_1 + 0x1b,param_2 + 0x1b);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x1c,param_2 + 0x1c);
  FUN_00459e04(param_1 + 0x1f,param_2 + 0x1f);
  lVar1 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  return param_1;
}



/* Entry: 005c02b0; end: 005c039f;  */

undefined8 FUN_005c02b0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x005c3a4c(param_1 + 0x118);
  FUN_00457530(param_1 + 0xf8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0xe0);
  FUN_00468b24(param_1 + 0xd8);
  func_0x005c457c();
  func_0x0046cd3c();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 005c03a0; end: 005c03a3;  */

void FUN_005c03a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a03f60;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 005c03a4; end: 005c03b7;  */

void FUN_005c03a4(void)

{
  func_0x005c13f0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c03b8; end: 005c03c3;  */

void FUN_005c03b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 005c03c4; end: 005c03d7;  */

void FUN_005c03c4(void)

{
  FUN_005c0720();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c03d8; end: 005c0533;  */

undefined **** FUN_005c03d8(undefined ***param_1,code **param_2,undefined **param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined ****ppppuVar5;
  undefined ****ppppuVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  long extraout_x8;
  undefined ***extraout_x8_00;
  long extraout_x8_01;
  undefined ***extraout_x8_02;
  undefined **ppuVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined8 extraout_x9;
  undefined **extraout_x9_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined *puVar15;
  undefined ****unaff_x22;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined ***pppuVar18;
  undefined **ppuVar19;
  undefined **ppuStack_140;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined ***pppuStack_e8;
  undefined **ppuStack_e0;
  undefined ***pppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined ***apppuStack_c0 [2];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined ***pppuStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined ***pppuStack_70;
  
  ppppuVar5 = apppuStack_c0;
  ppppuVar6 = apppuStack_c0;
  func_0x005c48ac();
  func_0x005c46b0();
  uVar4 = *param_1 == *(undefined ***)(extraout_x8 + 0x128);
  if (!(bool)uVar4) {
    func_0x005c4740();
    func_0x005c4808(auStack_b0);
    pppuStack_a0 = (undefined ***)param_3[1];
    puStack_a8 = *param_3;
    if (param_3[1] != (undefined *)0x0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10 != 0);
    }
    pcStack_98 = FUN_005c1334;
    ppuStack_90 = &PTR_FUN_00a04130;
    func_0x005c44e4();
    func_0x005c4120();
    FUN_004829a4();
    param_3[4] = (undefined *)pppuStack_a0;
    param_3[3] = puStack_a8;
    if (pppuStack_a0 != (undefined ***)0x0) {
      do {
        func_0x005c3fec();
      } while (extraout_w10_00 != 0);
    }
    param_2 = &pcStack_98;
    ppuStack_88 = param_3;
    func_0x005c43f4();
    func_0x005c4400();
    func_0x005c42a0(ppuStack_90);
    func_0x005c13a4();
    func_0x005c3fd8(extraout_x9);
    param_1 = (undefined ***)ppppuVar5;
    unaff_x22 = apppuStack_c0;
    if ((bool)uVar4) {
      return ppppuVar5;
    }
LAB_005c04f0:
    ___stack_chk_fail();
    func_0x005c42a0(ppuStack_90);
    func_0x005c13a4();
    func_0x005c4134();
    ppuStack_c8 = (undefined **)FUN_005c0534;
    ppuStack_e0 = param_3;
    pppuStack_d8 = param_1;
    ppuStack_d0 = (undefined **)&stack0xfffffffffffffff0;
    func_0x005c48ac();
    pppuStack_e8 = (undefined ***)extraout_x9_00;
    func_0x005c46b0();
    uVar4 = *ppppuVar6 == (undefined ***)*(undefined ***)(extraout_x8_01 + 0x128);
    if ((bool)uVar4) {
      func_0x005c4898();
      if ((bool)uVar4) {
        pppuVar10 = extraout_x8_02;
        if (*(int *)(extraout_x8_02 + 0x29) != 3) {
          if (*(char *)(extraout_x8_02 + 0x38) == '\x01') {
            ppuVar9 = extraout_x8_02[3];
            ppuStack_f0 = (undefined **)unaff_x22;
            pppuStack_e8 = (undefined ***)param_2;
            (*(code *)(*pppuRam0000000000b65da0)[0x10])(pppuRam0000000000b65da0,ppuVar9 + 3);
            if (ppuVar9[0xb] == (undefined *)0x0) {
              *(undefined1 *)(ppuVar9 + 0xc) = 1;
            }
            else {
              FUN_004091e8(ppuVar9);
              FUN_003f1bf4(ppuVar9[0xb],0);
            }
            pppuVar10 = pppuRam0000000000b65da0;
            (*(code *)(*pppuRam0000000000b65da0)[0x11])(pppuRam0000000000b65da0,ppuVar9 + 3);
            return (undefined ****)pppuVar10;
          }
          pppuVar7 = extraout_x8_02;
          FUN_005c0f9c();
          pppuVar10 = pppuVar7;
          if (((*(byte *)((long)extraout_x8_02 + 0x1c1) & 1) == 0) &&
             (iVar1 = *(int *)(extraout_x8_02 + 0x29), *(undefined4 *)(extraout_x8_02 + 0x29) = 2,
             iVar1 != 0)) {
            func_0x005c4740();
            func_0x005c44ec();
            pppuVar10 = pppuVar7;
            func_0x005c482c();
            *pppuVar10 = &PTR_FUN_00a04090;
            pppuVar10[5] = (undefined **)pppuStack_e8;
            pppuVar10[4] = ppuStack_f0;
            ppuStack_f0 = (undefined **)0x0;
            pppuStack_e8 = (undefined ***)0x0;
            func_0x005c4374();
            pppuVar10 = (undefined ***)extraout_x8_02[4];
            FUN_0046c1f8(pppuVar10,pppuVar7);
            *(undefined1 *)((long)extraout_x8_02 + 0x1c1) = 1;
          }
        }
        return (undefined ****)pppuVar10;
      }
    }
    else {
      func_0x005c4740();
      ppuStack_140 = &PTR_DAT_00a04148;
      func_0x005c43f4();
      func_0x005c4400();
      func_0x005c42b8(&PTR_DAT_00a04148);
      func_0x005c4374();
      func_0x005c3fd8(pppuStack_e8);
      if ((bool)uVar4) {
        return ppppuVar6;
      }
    }
    ___stack_chk_fail();
    func_0x005c42b8(ppuStack_140);
    func_0x005c4374();
    func_0x005c4134();
    if (ppppuVar6[2] == ppppuVar6[1]) {
      return (undefined ****)(undefined ***)0x0;
    }
    return (undefined ****)
           (undefined ***)
           ((long)ppppuVar6[1][(ulong)((long)ppppuVar6[4] + (long)ppppuVar6[5]) >> 7] +
           ((long)ppppuVar6[4] + (long)ppppuVar6[5] & 0x7fU) * 0x20);
  }
  func_0x005c4898();
  if (!(bool)uVar4) goto LAB_005c04f0;
  pppuVar10 = &ppuStack_100;
  if (((ulong)extraout_x8_00[0x29] & 0xfffffffe) == 2) {
    if (*param_3 == (undefined *)0x0) {
      return (undefined ****)extraout_x8_00;
    }
    FUN_00425cb4(&ppuStack_90,"Stream closed");
    func_0x005c4260(&ppuStack_e0);
    func_0x005c43f4();
    func_0x005c4400();
    func_0x005c4430();
    pppuVar10 = &ppuStack_90;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppuVar10);
    return (undefined ****)pppuVar10;
  }
  ppuVar19 = extraout_x8_00[1];
  pppuVar7 = &ppuStack_e0;
  func_0x005c1368(pppuVar7,ppuVar19,extraout_x8_00[2]);
  ppuVar9 = (undefined **)*param_3;
  ppuVar16 = (undefined **)param_3[1];
  ppuStack_d0 = ppuVar9;
  ppuStack_c8 = ppuVar16;
  if (ppuVar16 != (undefined **)0x0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_01 != 0);
  }
  func_0x005c4720();
  pppuVar8 = pppuVar7;
  func_0x005c482c();
  func_0x005c48c0(&PTR_FUN_00a04038);
  pppuVar8[6] = ppuVar9;
  pppuVar8[7] = ppuVar16;
  if (ppuVar16 != (undefined **)0x0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_02 != 0);
  }
  func_0x005c1244(&ppuStack_e0);
  func_0x005c4808(&ppuStack_100);
  ppuStack_f0 = (undefined **)param_3[1];
  puStack_f8 = *param_3;
  if (param_3[1] != (undefined *)0x0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_03 != 0);
  }
  ppuVar16 = extraout_x8_00[0x2b];
  ppuVar9 = extraout_x8_00[0x2c];
  uVar2 = (long)ppuVar9 - (long)ppuVar16;
  lVar13 = 0;
  if (uVar2 != 0) {
    lVar13 = ((long)ppuVar9 - (long)ppuVar16) * 0x10 + -1;
  }
  ppuVar12 = extraout_x8_00[0x2e];
  pppuStack_e8 = pppuVar7;
  if (lVar13 != (long)extraout_x8_00[0x2f] + (long)ppuVar12) goto LAB_005c0c58;
  if (ppuVar12 < (undefined **)0x80) {
    pppuVar7 = extraout_x8_00 + 0x2d;
    ppuVar12 = extraout_x8_00[0x2d];
    ppuVar17 = extraout_x8_00[0x2a];
    if ((ulong)((long)ppuVar12 - (long)ppuVar17) <= uVar2) {
      ppuVar14 = (undefined **)((long)ppuVar12 - (long)ppuVar17 >> 2);
      if (ppuVar12 == ppuVar17) {
        ppuVar14 = (undefined **)((long)&MACH_HEADER.magic + 1);
      }
      pppuStack_70 = pppuVar7;
      FUN_005c1294();
      pppuVar8 = (undefined ***)((long)ppuVar14 + uVar2);
      ppuVar12 = ppuVar14 + (long)ppuVar19;
      puVar15 = (undefined *)0x1000;
      ppuVar11 = ppuVar19;
      ppuStack_90 = ppuVar14;
      ppuStack_88 = (undefined **)pppuVar8;
      ppuStack_80 = (undefined **)pppuVar8;
      ppuStack_78 = ppuVar12;
      __Znwm();
      pppuStack_a0 = extraout_x8_00 + 0x2f;
      pcStack_98 = (code *)0x80;
      ppuVar17 = (undefined **)pppuVar8;
      if (uVar2 == (long)ppuVar19 * 8) {
        if (ppuVar9 == ppuVar16) {
          ppuVar9 = (undefined **)((long)&MACH_HEADER.magic + 1);
          apppuStack_c0[0] = pppuVar7;
          puStack_a8 = puVar15;
          FUN_005c1294();
          ppuStack_c8 = ppuVar9 + (long)ppuVar11;
          ppuStack_e0 = ppuVar9;
          pppuStack_d8 = (undefined ***)ppuVar9;
          ppuStack_d0 = ppuVar9;
          FUN_005c126c(&ppuStack_e0,pppuVar8,pppuVar8);
          ppuVar19 = ppuStack_c8;
          ppuVar17 = ppuStack_d0;
          pppuVar18 = pppuStack_d8;
          ppuVar9 = ppuStack_e0;
          ppuStack_90 = ppuStack_e0;
          ppuStack_88 = (undefined **)pppuStack_d8;
          ppuStack_78 = ppuStack_c8;
          ppuStack_e0 = ppuVar14;
          pppuStack_d8 = pppuVar8;
          ppuStack_d0 = (undefined **)pppuVar8;
          ppuStack_c8 = ppuVar12;
          func_0x005c12f4(&ppuStack_e0);
          ppuVar14 = ppuVar9;
          pppuVar8 = pppuVar18;
          ppuVar12 = ppuVar19;
        }
        else {
          pppuVar8 = pppuVar8 + (((long)pppuVar8 - (long)ppuVar14 >> 3) + 1) / -2;
          ppuVar17 = (undefined **)pppuVar8;
          ppuStack_88 = (undefined **)pppuVar8;
        }
      }
      ppuVar9 = ppuVar17 + 1;
      *ppuVar17 = puVar15;
      puStack_a8 = (undefined *)0x0;
      ppuVar19 = extraout_x8_00[0x2c];
      ppuStack_80 = ppuVar9;
      while (ppuVar16 = extraout_x8_00[0x2b], ppuVar19 != ppuVar16) {
        pppuVar18 = pppuVar8;
        if (pppuVar8 == (undefined ***)ppuVar14) {
          if (ppuVar9 < ppuVar12) {
            lVar13 = (long)ppuVar9 - (long)ppuVar14;
            ppuVar16 = ppuVar9 + (((long)ppuVar12 - (long)ppuVar9 >> 3) + 1) / 2;
            pppuVar18 = (undefined ***)((long)ppuVar16 - ((long)ppuVar9 - (long)ppuVar14));
            ppuVar9 = ppuVar16;
            if (lVar13 != 0) {
              _memmove(pppuVar18,pppuVar8,lVar13);
            }
          }
          else {
            lVar13 = (long)ppuVar12 - (long)ppuVar14 >> 2;
            if ((long)ppuVar12 - (long)ppuVar14 == 0) {
              lVar13 = 1;
            }
            apppuStack_c0[0] = pppuVar7;
            FUN_005c1294(lVar13);
            func_0x005c463c(lVar13 << 1);
            FUN_005c126c(&ppuStack_e0,ppuVar14,ppuVar9);
            ppuVar11 = ppuStack_c8;
            ppuVar17 = ppuStack_d0;
            pppuVar18 = pppuStack_d8;
            ppuVar16 = ppuStack_e0;
            ppuStack_e0 = ppuVar14;
            pppuStack_d8 = pppuVar8;
            ppuStack_d0 = ppuVar9;
            ppuStack_c8 = ppuVar12;
            func_0x005c12f4(&ppuStack_e0);
            ppuVar14 = ppuVar16;
            ppuVar9 = ppuVar17;
            ppuVar12 = ppuVar11;
          }
        }
        ppuVar19 = ppuVar19 + -1;
        pppuVar8 = pppuVar18 + -1;
        *pppuVar8 = (undefined **)*ppuVar19;
      }
      ppuStack_90 = extraout_x8_00[0x2a];
      extraout_x8_00[0x2a] = ppuVar14;
      extraout_x8_00[0x2b] = (undefined **)pppuVar8;
      ppuStack_78 = extraout_x8_00[0x2d];
      ppuStack_80 = extraout_x8_00[0x2c];
      extraout_x8_00[0x2c] = ppuVar9;
      extraout_x8_00[0x2d] = ppuVar12;
      ppuStack_88 = ppuVar16;
      func_0x005c12c8(&puStack_a8);
      func_0x005c12f4(&ppuStack_90);
      goto LAB_005c0c58;
    }
    puVar15 = (undefined *)0x1000;
    __Znwm();
    if (ppuVar12 == ppuVar9) {
      if (ppuVar16 == ppuVar17) {
        lVar13 = (long)ppuVar12 - (long)ppuVar16 >> 2;
        if (ppuVar9 == ppuVar16) {
          lVar13 = 1;
        }
        apppuStack_c0[0] = pppuVar7;
        FUN_005c1294(lVar13);
        func_0x005c463c(lVar13 << 1);
        ppuVar19 = extraout_x8_00[0x2b];
        FUN_005c126c(&ppuStack_e0,ppuVar19,extraout_x8_00[0x2c]);
        func_0x005c4408();
        ppuVar16 = extraout_x8_00[0x2b];
        ppuVar9 = extraout_x8_00[0x2c];
      }
      ppuVar16[-1] = puVar15;
      goto LAB_005c09c4;
    }
  }
  else {
    extraout_x8_00[0x2e] = ppuVar12 + -0x10;
    puVar15 = *ppuVar16;
    ppuVar16 = ppuVar16 + 1;
LAB_005c09c4:
    extraout_x8_00[0x2b] = ppuVar16;
    if (ppuVar9 == extraout_x8_00[0x2d]) {
      ppuVar12 = extraout_x8_00[0x2a];
      if (ppuVar16 < ppuVar12 || (long)ppuVar16 - (long)ppuVar12 == 0) {
        apppuStack_c0[0] = extraout_x8_00 + 0x2d;
        ppuVar16 = (undefined **)((long)ppuVar9 - (long)ppuVar12 >> 2);
        if ((long)ppuVar9 - (long)ppuVar12 == 0) {
          ppuVar16 = (undefined **)((long)&MACH_HEADER.magic + 1);
        }
        ppuVar9 = ppuVar16;
        FUN_005c1294();
        pppuStack_d8 = (undefined ***)(ppuVar9 + ((ulong)ppuVar16 >> 2));
        ppuStack_c8 = ppuVar9 + (long)ppuVar19;
        ppuStack_e0 = ppuVar9;
        ppuStack_d0 = (undefined **)pppuStack_d8;
        FUN_005c126c(&ppuStack_e0,extraout_x8_00[0x2b],extraout_x8_00[0x2c]);
        func_0x005c4408();
        ppuVar9 = extraout_x8_00[0x2c];
      }
      else {
        lVar13 = (((long)ppuVar16 - (long)ppuVar12 >> 3) + 1) / -2;
        ppuVar19 = ppuVar16 + lVar13;
        lVar3 = (long)ppuVar9 - (long)ppuVar16;
        if (lVar3 != 0) {
          _memmove(ppuVar19,ppuVar16,lVar3);
          ppuVar16 = extraout_x8_00[0x2b];
        }
        ppuVar9 = (undefined **)((long)ppuVar19 + lVar3);
        extraout_x8_00[0x2b] = ppuVar16 + lVar13;
      }
    }
  }
  *ppuVar9 = puVar15;
  extraout_x8_00[0x2c] = ppuVar9 + 1;
LAB_005c0c58:
  FUN_005c05f8(extraout_x8_00 + 0x2a);
  FUN_005c1058();
  extraout_x8_00[0x2f] = (undefined **)((long)extraout_x8_00[0x2f] + 1);
  FUN_005c0d70(extraout_x8_00);
  FUN_005c0628(&ppuStack_100);
  return (undefined ****)pppuVar10;
}



/* Entry: 005c0534; end: 005c05f7;  */

long * FUN_005c0534(long *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long extraout_x8;
  long *extraout_x8_00;
  long extraout_x9;
  undefined **ppuStack_80;
  long in_stack_ffffffffffffffd0;
  
  func_0x005c48ac();
  func_0x005c46b0();
  uVar1 = *param_1 == *(long *)(extraout_x8 + 0x128);
  if ((bool)uVar1) {
    func_0x005c4898();
    if ((bool)uVar1) {
      plVar4 = extraout_x8_00;
      if ((int)extraout_x8_00[0x29] != 3) {
        if ((char)extraout_x8_00[0x38] == '\x01') {
          lVar2 = extraout_x8_00[3];
          (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,lVar2 + 0x18);
          if (*(long *)(lVar2 + 0x58) == 0) {
            *(undefined1 *)(lVar2 + 0x60) = 1;
          }
          else {
            FUN_004091e8(lVar2);
            FUN_003f1bf4(*(undefined8 *)(lVar2 + 0x58),0);
          }
          plVar4 = plRam0000000000b65da0;
          (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,lVar2 + 0x18);
          return plVar4;
        }
        plVar3 = extraout_x8_00;
        FUN_005c0f9c();
        plVar4 = plVar3;
        if ((*(byte *)((long)extraout_x8_00 + 0x1c1) & 1) == 0) {
          lVar2 = extraout_x8_00[0x29];
          *(undefined4 *)(extraout_x8_00 + 0x29) = 2;
          if ((int)lVar2 != 0) {
            func_0x005c4740();
            func_0x005c44ec();
            plVar4 = plVar3;
            func_0x005c482c();
            *plVar4 = (long)&PTR_FUN_00a04090;
            plVar4[5] = extraout_x9;
            plVar4[4] = in_stack_ffffffffffffffd0;
            func_0x005c4374();
            plVar4 = (long *)extraout_x8_00[4];
            FUN_0046c1f8(plVar4,plVar3);
            *(undefined1 *)((long)extraout_x8_00 + 0x1c1) = 1;
          }
        }
      }
      return plVar4;
    }
  }
  else {
    func_0x005c4740();
    ppuStack_80 = &PTR_DAT_00a04148;
    func_0x005c43f4();
    func_0x005c4400();
    func_0x005c42b8(&PTR_DAT_00a04148);
    func_0x005c4374();
    func_0x005c3fd8(extraout_x9);
    if ((bool)uVar1) {
      return param_1;
    }
  }
  ___stack_chk_fail();
  func_0x005c42b8(ppuStack_80);
  func_0x005c4374();
  func_0x005c4134();
  if (param_1[2] != param_1[1]) {
    return (long *)(*(long *)(param_1[1] + ((ulong)(param_1[4] + param_1[5]) >> 7) * 8) +
                   (param_1[4] + param_1[5] & 0x7fU) * 0x20);
  }
  return (long *)0x0;
}



/* Entry: 005c05f8; end: 005c0627;  */

long FUN_005c05f8(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) {
    uVar1 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
    return *(long *)(*(long *)(param_1 + 8) + (uVar1 >> 7) * 8) + (uVar1 & 0x7f) * 0x20;
  }
  return 0;
}



/* Entry: 005c0628; end: 005c0697;  */

long * FUN_005c0628(long *param_1)

{
  long extraout_x8;
  
  func_0x005c0650(param_1 + 1);
  if (*param_1 != 0) {
    func_0x0046ca88();
    (**(code **)(extraout_x8 + 0xc0))();
  }
  return param_1;
}



/* Entry: 005c0698; end: 005c06af;  */

long FUN_005c0698(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    func_0x0046bdb0(lVar1 + 0x4b0);
    func_0x0046be4c(lVar1 + 0x308);
    func_0x0046bde0(lVar1 + 0x1a0);
    func_0x0046be1c(lVar1 + 0x58);
    return lVar1;
  }
  return 0;
}



/* Entry: 005c06b0; end: 005c06d3;  */

undefined8 FUN_005c06b0(undefined8 param_1)

{
  FUN_005c06d4(param_1,0);
  return param_1;
}



/* Entry: 005c06d4; end: 005c06fb;  */

void FUN_005c06d4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_004091e4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c06fc; end: 005c071f;  */

void FUN_005c06fc(long param_1)

{
  func_0x005c4318();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 005c0720; end: 005c088f;  */

undefined8 * FUN_005c0720(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  *param_1 = &PTR_DAT_00a03fb0;
  FUN_00464a10(param_1 + 0x31);
  FUN_00468b24(param_1 + 0x30);
  plVar6 = (long *)(param_1[0x2b] + ((ulong)param_1[0x2e] >> 7) * 8);
  if (param_1[0x2c] == param_1[0x2b]) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(*plVar6 + (param_1[0x2e] & 0x7f) * 0x20);
  }
  puVar5 = param_1 + 0x2a;
  FUN_005c05f8();
  do {
    puVar7 = puVar4 + -0x200;
    do {
      if (puVar4 == puVar5) {
        param_1[0x2f] = 0;
        puVar4 = (undefined8 *)param_1[0x2b];
        while( true ) {
          puVar5 = (undefined8 *)param_1[0x2c];
          uVar1 = (long)puVar5 - (long)puVar4 >> 3;
          if (uVar1 < 3) break;
          __ZdlPv(*puVar4);
          puVar4 = (undefined8 *)(param_1[0x2b] + 8);
          param_1[0x2b] = puVar4;
        }
        if (uVar1 == 1) {
          uVar2 = 0x40;
        }
        else {
          if (uVar1 != 2) goto LAB_005c081c;
          uVar2 = 0x80;
        }
        param_1[0x2e] = uVar2;
LAB_005c081c:
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
          __ZdlPv(*puVar4);
        }
        lVar3 = param_1[0x2c];
        while (lVar3 != param_1[0x2b]) {
          lVar3 = lVar3 + -8;
          param_1[0x2c] = lVar3;
        }
        if (param_1[0x2a] != 0) {
          __ZdlPv();
        }
        func_0x005c3a4c(param_1 + 0x27);
        func_0x0045a078(param_1 + 0x25);
        func_0x00467d18(param_1 + 5);
        func_0x005c0674(param_1 + 4);
        FUN_005c06b0(param_1 + 3);
        FUN_005c06fc(param_1 + 1);
        return param_1;
      }
      FUN_005c0628(puVar4);
      puVar4 = puVar4 + 4;
      puVar7 = puVar7 + 4;
    } while ((undefined8 *)*plVar6 != puVar7);
    plVar6 = plVar6 + 1;
    puVar4 = (undefined8 *)*plVar6;
  } while( true );
}



/* Entry: 005c0890; end: 005c0d6f;  */

void FUN_005c0890(long param_1,undefined8 param_2,ulong *param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_100 [8];
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  if ((*(uint *)(param_1 + 0x148) & 0xfffffffe) == 2) {
    if (*param_3 == 0) {
      return;
    }
    FUN_00425cb4(&puStack_90,"Stream closed");
    func_0x005c4260(&puStack_e0);
    func_0x005c43f4();
    func_0x005c4400();
    func_0x005c4430();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_90);
    return;
  }
  lVar11 = *(long *)(param_1 + 8);
  ppuVar7 = &puStack_e0;
  FUN_005c1368(ppuVar7,lVar11,*(undefined8 *)(param_1 + 0x10));
  puVar17 = (undefined8 *)*param_3;
  puVar15 = (undefined8 *)param_3[1];
  puStack_d0 = puVar17;
  puStack_c8 = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  func_0x005c4720();
  ppuVar8 = ppuVar7;
  func_0x005c482c();
  func_0x005c48c0(&PTR_FUN_00a04038);
  ppuVar8[6] = puVar17;
  ppuVar8[7] = puVar15;
  if (puVar15 != (undefined8 *)0x0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_00 != 0);
  }
  func_0x005c1244(&puStack_e0);
  func_0x005c4808(auStack_100);
  uStack_f0 = param_3[1];
  uStack_f8 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_01 != 0);
  }
  puVar15 = *(undefined8 **)(param_1 + 0x158);
  puVar17 = *(undefined8 **)(param_1 + 0x160);
  uVar3 = (long)puVar17 - (long)puVar15;
  lVar4 = 0;
  if (uVar3 != 0) {
    lVar4 = ((long)puVar17 - (long)puVar15) * 0x10 + -1;
  }
  uVar2 = *(ulong *)(param_1 + 0x170);
  ppuStack_e8 = ppuVar7;
  if (lVar4 != *(long *)(param_1 + 0x178) + uVar2) goto LAB_005c0c58;
  if (uVar2 < 0x80) {
    lVar4 = param_1 + 0x168;
    puVar10 = *(undefined8 **)(param_1 + 0x168);
    puVar16 = *(undefined8 **)(param_1 + 0x150);
    if ((ulong)((long)puVar10 - (long)puVar16) <= uVar3) {
      puVar12 = (undefined8 *)((long)puVar10 - (long)puVar16 >> 2);
      if (puVar10 == puVar16) {
        puVar12 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      lStack_70 = lVar4;
      FUN_005c1294();
      puVar10 = (undefined8 *)((long)puVar12 + uVar3);
      puVar16 = puVar12 + lVar11;
      uVar14 = 0x1000;
      lVar9 = lVar11;
      puStack_90 = puVar12;
      puStack_88 = puVar10;
      puStack_80 = puVar10;
      puStack_78 = puVar16;
      __Znwm();
      lStack_a0 = param_1 + 0x178;
      uStack_98 = 0x80;
      puVar13 = puVar10;
      if (uVar3 == lVar11 * 8) {
        if (puVar17 == puVar15) {
          puVar17 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
          lStack_c0 = lVar4;
          uStack_a8 = uVar14;
          FUN_005c1294();
          puStack_c8 = puVar17 + lVar9;
          puStack_e0 = puVar17;
          puStack_d8 = puVar17;
          puStack_d0 = puVar17;
          FUN_005c126c(&puStack_e0,puVar10,puVar10);
          puVar1 = puStack_c8;
          puVar13 = puStack_d0;
          puVar15 = puStack_d8;
          puVar17 = puStack_e0;
          puStack_90 = puStack_e0;
          puStack_88 = puStack_d8;
          puStack_78 = puStack_c8;
          puStack_e0 = puVar12;
          puStack_d8 = puVar10;
          puStack_d0 = puVar10;
          puStack_c8 = puVar16;
          func_0x005c12f4(&puStack_e0);
          puVar12 = puVar17;
          puVar10 = puVar15;
          puVar16 = puVar1;
        }
        else {
          puVar10 = puVar10 + (((long)puVar10 - (long)puVar12 >> 3) + 1) / -2;
          puVar13 = puVar10;
          puStack_88 = puVar10;
        }
      }
      puVar17 = puVar13 + 1;
      *puVar13 = uVar14;
      uStack_a8 = 0;
      puVar15 = *(undefined8 **)(param_1 + 0x160);
      puStack_80 = puVar17;
      while (puVar13 = *(undefined8 **)(param_1 + 0x158), puVar15 != puVar13) {
        puVar13 = puVar10;
        if (puVar10 == puVar12) {
          if (puVar17 < puVar16) {
            lVar11 = (long)puVar17 - (long)puVar12;
            puVar1 = puVar17 + (((long)puVar16 - (long)puVar17 >> 3) + 1) / 2;
            puVar13 = (undefined8 *)((long)puVar1 - ((long)puVar17 - (long)puVar12));
            puVar17 = puVar1;
            if (lVar11 != 0) {
              _memmove(puVar13,puVar10,lVar11);
            }
          }
          else {
            lVar11 = (long)puVar16 - (long)puVar12 >> 2;
            if ((long)puVar16 - (long)puVar12 == 0) {
              lVar11 = 1;
            }
            lStack_c0 = lVar4;
            FUN_005c1294(lVar11);
            func_0x005c463c(lVar11 << 1);
            FUN_005c126c(&puStack_e0,puVar12,puVar17);
            puVar6 = puStack_c8;
            puVar5 = puStack_d0;
            puVar13 = puStack_d8;
            puVar1 = puStack_e0;
            puStack_e0 = puVar12;
            puStack_d8 = puVar10;
            puStack_d0 = puVar17;
            puStack_c8 = puVar16;
            func_0x005c12f4(&puStack_e0);
            puVar12 = puVar1;
            puVar17 = puVar5;
            puVar16 = puVar6;
          }
        }
        puVar15 = puVar15 + -1;
        puVar10 = puVar13 + -1;
        *puVar10 = *puVar15;
      }
      puStack_90 = *(undefined8 **)(param_1 + 0x150);
      *(undefined8 **)(param_1 + 0x150) = puVar12;
      *(undefined8 **)(param_1 + 0x158) = puVar10;
      puStack_78 = *(undefined8 **)(param_1 + 0x168);
      puStack_80 = *(undefined8 **)(param_1 + 0x160);
      *(undefined8 **)(param_1 + 0x160) = puVar17;
      *(undefined8 **)(param_1 + 0x168) = puVar16;
      puStack_88 = puVar13;
      func_0x005c12c8(&uStack_a8);
      func_0x005c12f4(&puStack_90);
      goto LAB_005c0c58;
    }
    uVar14 = 0x1000;
    __Znwm();
    if (puVar10 == puVar17) {
      if (puVar15 == puVar16) {
        lVar11 = (long)puVar10 - (long)puVar15 >> 2;
        if (puVar17 == puVar15) {
          lVar11 = 1;
        }
        lStack_c0 = lVar4;
        FUN_005c1294(lVar11);
        func_0x005c463c(lVar11 << 1);
        lVar11 = *(long *)(param_1 + 0x158);
        FUN_005c126c(&puStack_e0,lVar11,*(undefined8 *)(param_1 + 0x160));
        func_0x005c4408();
        puVar15 = *(undefined8 **)(param_1 + 0x158);
        puVar17 = *(undefined8 **)(param_1 + 0x160);
      }
      puVar15[-1] = uVar14;
      goto LAB_005c09c4;
    }
  }
  else {
    *(ulong *)(param_1 + 0x170) = uVar2 - 0x80;
    uVar14 = *puVar15;
    puVar15 = puVar15 + 1;
LAB_005c09c4:
    *(undefined8 **)(param_1 + 0x158) = puVar15;
    if (puVar17 == *(undefined8 **)(param_1 + 0x168)) {
      puVar10 = *(undefined8 **)(param_1 + 0x150);
      if (puVar15 < puVar10 || (long)puVar15 - (long)puVar10 == 0) {
        lStack_c0 = param_1 + 0x168;
        puVar15 = (undefined8 *)((long)puVar17 - (long)puVar10 >> 2);
        if ((long)puVar17 - (long)puVar10 == 0) {
          puVar15 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar17 = puVar15;
        FUN_005c1294();
        puStack_d8 = puVar17 + ((ulong)puVar15 >> 2);
        puStack_c8 = puVar17 + lVar11;
        puStack_e0 = puVar17;
        puStack_d0 = puStack_d8;
        FUN_005c126c(&puStack_e0,*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160));
        func_0x005c4408();
        puVar17 = *(undefined8 **)(param_1 + 0x160);
      }
      else {
        lVar11 = (((long)puVar15 - (long)puVar10 >> 3) + 1) / -2;
        puVar10 = puVar15 + lVar11;
        lVar4 = (long)puVar17 - (long)puVar15;
        if (lVar4 != 0) {
          _memmove(puVar10,puVar15,lVar4);
          puVar15 = *(undefined8 **)(param_1 + 0x158);
        }
        puVar17 = (undefined8 *)((long)puVar10 + lVar4);
        *(undefined8 **)(param_1 + 0x158) = puVar15 + lVar11;
      }
    }
  }
  *puVar17 = uVar14;
  *(undefined8 **)(param_1 + 0x160) = puVar17 + 1;
LAB_005c0c58:
  FUN_005c05f8(param_1 + 0x150);
  FUN_005c1058();
  *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + 1;
  FUN_005c0d70(param_1);
  FUN_005c0628(auStack_100);
  return;
}



/* Entry: 005c0d70; end: 005c0dcb;  */

void FUN_005c0d70(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(param_1 + 0x148) == 1) && ((*(byte *)(param_1 + 0x1c0) & 1) == 0)) &&
     (*(long *)(param_1 + 0x178) != 0)) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
    func_0x005c46d8(*(undefined8 *)(param_1 + 0x20));
    func_0x0046c2a8();
    FUN_005c0628(*(long *)(*(long *)(param_1 + 0x158) + (*(ulong *)(param_1 + 0x170) >> 7) * 8) +
                 (*(ulong *)(param_1 + 0x170) & 0x7f) * 0x20);
    uVar1 = *(long *)(param_1 + 0x170) + 1;
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + -1;
    *(ulong *)(param_1 + 0x170) = uVar1;
    if (0xff < uVar1) {
      __ZdlPv(**(undefined8 **)(param_1 + 0x158));
      *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + 8;
      *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x170) + -0x80;
    }
  }
  return;
}



/* Entry: 005c0dcc; end: 005c0dcf;  */

undefined8 * FUN_005c0dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04038;
  func_0x005c1244(param_1 + 4);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c0dd0; end: 005c0de3;  */

void FUN_005c0dd0(void)

{
  FUN_005c0eb8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c0de4; end: 005c0eb7;  */

void FUN_005c0de4(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined1 *)(lVar1 + 0x1c0) = 0;
  if (*(long *)(param_1 + 0x30) == 0) {
    if (param_2 == 0) goto LAB_005c0e88;
  }
  else {
    if (param_2 == 0) {
      func_0x005c4748(lVar1,"Failed to send");
      func_0x005c4948();
      FUN_0046e000();
      func_0x005c453c();
      func_0x005c45fc();
      func_0x005c43cc();
      func_0x005c4278();
      lVar1 = *(long *)(param_1 + 0x20);
      goto LAB_005c0e88;
    }
    func_0x005c4748(lVar1,"");
    func_0x005c4948();
    FUN_0046e000();
    func_0x005c453c();
    func_0x005c45fc();
    func_0x005c43cc();
    func_0x005c4278();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  if (*(int *)(lVar1 + 0x148) == 1) {
    FUN_005c0d70();
    return;
  }
LAB_005c0e88:
  FUN_005c0ee4(lVar1);
  return;
}



/* Entry: 005c0eb8; end: 005c0ee3;  */

undefined8 * FUN_005c0eb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_00a04038;
  func_0x005c1244(param_1 + 4);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c0ee4; end: 005c0f9b;  */

void FUN_005c0ee4(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  if (*(int *)(param_1 + 0x29) != 3) {
    if (*(char *)(param_1 + 0x38) == '\x01') {
      lVar2 = param_1[3];
      (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,lVar2 + 0x18);
      if (*(long *)(lVar2 + 0x58) == 0) {
        *(undefined1 *)(lVar2 + 0x60) = 1;
      }
      else {
        FUN_004091e8(lVar2);
        FUN_003f1bf4(*(undefined8 *)(lVar2 + 0x58),0);
      }
      (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,lVar2 + 0x18);
      return;
    }
    puVar3 = param_1;
    FUN_005c0f9c();
    if ((*(byte *)((long)param_1 + 0x1c1) & 1) == 0) {
      iVar1 = *(int *)(param_1 + 0x29);
      *(undefined4 *)(param_1 + 0x29) = 2;
      if (iVar1 != 0) {
        func_0x005c4740();
        func_0x005c44ec();
        puVar4 = puVar3;
        func_0x005c482c();
        *puVar4 = &PTR_FUN_00a04090;
        puVar4[5] = in_stack_ffffffffffffffd8;
        puVar4[4] = in_stack_ffffffffffffffd0;
        func_0x005c4374();
        FUN_0046c1f8(param_1[4],puVar3);
        *(undefined1 *)((long)param_1 + 0x1c1) = 1;
      }
    }
  }
  return;
}



/* Entry: 005c0f9c; end: 005c1057;  */

void FUN_005c0f9c(long param_1)

{
  long *plVar1;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [56];
  undefined1 auStack_50 [8];
  long *plStack_48;
  long lStack_38;
  
  while (*(long *)(param_1 + 0x178) != 0) {
    func_0x005c46d8();
    FUN_005c1058(auStack_50);
    func_0x005c1088(param_1 + 0x150);
    plVar1 = plStack_48;
    if (plStack_48 != (long *)0x0) {
      FUN_00425cb4(auStack_a0,"Stream closed");
      func_0x005c4948();
      func_0x005c4260();
      (**(code **)(*plVar1 + 0x10))(plVar1,auStack_88);
      func_0x005c43cc();
      func_0x005c4278();
    }
    if (lStack_38 != 0) {
      func_0x005c4470();
    }
    FUN_005c0628(auStack_50);
  }
  return;
}



/* Entry: 005c1058; end: 005c10ff;  */

void FUN_005c1058(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_004829a4();
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return;
}



/* Entry: 005c1100; end: 005c1103;  */

undefined8 * FUN_005c1100(undefined8 *param_1)

{
  func_0x005c4728(&PTR_FUN_00a04090);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c1104; end: 005c1117;  */

void FUN_005c1104(void)

{
  FUN_005c11a0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c1118; end: 005c119f;  */

void FUN_005c1118(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int extraout_w10;
  
  uVar1 = param_1[4];
  lVar2 = param_1[5];
  puVar3 = param_1;
  if (lVar2 != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  func_0x005c44ec();
  puVar4 = puVar3;
  func_0x00485824();
  *puVar4 = &PTR_FUN_00a040e8;
  puVar4[4] = uVar1;
  puVar4[5] = lVar2;
  func_0x005c4374();
  func_0x0046c18c(*(undefined8 *)(param_1[4] + 0x20),param_1[4] + 0x188,puVar3);
  return;
}



/* Entry: 005c11a0; end: 005c11c7;  */

undefined8 * FUN_005c11a0(undefined8 *param_1)

{
  func_0x005c4728(&PTR_FUN_00a04090);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c11c8; end: 005c11cb;  */

undefined8 * FUN_005c11c8(undefined8 *param_1)

{
  func_0x005c4728(&PTR_FUN_00a040e8);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c11cc; end: 005c11df;  */

void FUN_005c11cc(void)

{
  FUN_005c121c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c11e0; end: 005c121b;  */

void FUN_005c11e0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar2 + 0x148) = 3;
  plVar1 = *(long **)(lVar2 + 0x138);
  if (*(int *)(lVar2 + 0x188) != 0) {
                    /* WARNING: Could not recover jumptable at 0x005c120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,lVar2 + 0x28,lVar2 + 0x188,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005c1218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x40))(plVar1,lVar2 + 0x28);
  return;
}



/* Entry: 005c121c; end: 005c126b;  */

undefined8 * FUN_005c121c(undefined8 *param_1)

{
  func_0x005c4728(&PTR_FUN_00a040e8);
  *param_1 = &PTR_DAT_009e8600;
  func_0x0045a078(param_1 + 1);
  return param_1;
}



/* Entry: 005c126c; end: 005c1293;  */

void FUN_005c126c(long param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  param_3 = param_3 - (long)param_2;
  lVar1 = (long)*(undefined8 **)(param_1 + 0x10) + param_3;
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  for (; param_3 != 0; param_3 = param_3 + -8) {
    *puVar2 = *param_2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 005c1294; end: 005c1333;  */

undefined1  [16] FUN_005c1294(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar2._8_8_ = param_1;
    auVar2._0_8_ = lVar1;
    return auVar2;
  }
  FUN_0040cee8();
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 005c1334; end: 005c1343;  */

void FUN_005c1334(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 **ppuVar7;
  undefined8 **ppuVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined1 auStack_100 [8];
  ulong uStack_f8;
  long lStack_f0;
  undefined8 **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  long lStack_70;
  
  plVar11 = *(long **)(param_1 + 0x10);
  puVar12 = (ulong *)(plVar11 + 3);
  lVar9 = *plVar11;
  if ((*(uint *)(lVar9 + 0x148) & 0xfffffffe) == 2) {
    if (*puVar12 == 0) {
      return;
    }
    FUN_00425cb4(&puStack_90,"Stream closed");
    func_0x005c4260(&puStack_e0);
    func_0x005c43f4();
    func_0x005c4400();
    func_0x005c4430();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_90);
    return;
  }
  lVar14 = *(long *)(lVar9 + 8);
  ppuVar7 = &puStack_e0;
  FUN_005c1368(ppuVar7,lVar14,*(undefined8 *)(lVar9 + 0x10));
  puVar20 = (undefined8 *)*puVar12;
  puVar18 = (undefined8 *)plVar11[4];
  puStack_d0 = puVar20;
  puStack_c8 = puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10 != 0);
  }
  func_0x005c4720();
  ppuVar8 = ppuVar7;
  func_0x005c482c();
  func_0x005c48c0(&PTR_FUN_00a04038);
  ppuVar8[6] = puVar20;
  ppuVar8[7] = puVar18;
  if (puVar18 != (undefined8 *)0x0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_00 != 0);
  }
  func_0x005c1244(&puStack_e0);
  func_0x005c4808(auStack_100);
  lStack_f0 = plVar11[4];
  uStack_f8 = *puVar12;
  if (plVar11[4] != 0) {
    do {
      func_0x005c3fec();
    } while (extraout_w10_01 != 0);
  }
  puVar18 = *(undefined8 **)(lVar9 + 0x158);
  puVar20 = *(undefined8 **)(lVar9 + 0x160);
  uVar3 = (long)puVar20 - (long)puVar18;
  lVar4 = 0;
  if (uVar3 != 0) {
    lVar4 = ((long)puVar20 - (long)puVar18) * 0x10 + -1;
  }
  uVar2 = *(ulong *)(lVar9 + 0x170);
  ppuStack_e8 = ppuVar7;
  if (lVar4 != *(long *)(lVar9 + 0x178) + uVar2) goto LAB_005c0c58;
  if (uVar2 < 0x80) {
    lVar4 = lVar9 + 0x168;
    puVar13 = *(undefined8 **)(lVar9 + 0x168);
    puVar19 = *(undefined8 **)(lVar9 + 0x150);
    if ((ulong)((long)puVar13 - (long)puVar19) <= uVar3) {
      puVar15 = (undefined8 *)((long)puVar13 - (long)puVar19 >> 2);
      if (puVar13 == puVar19) {
        puVar15 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
      }
      lStack_70 = lVar4;
      FUN_005c1294();
      puVar13 = (undefined8 *)((long)puVar15 + uVar3);
      puVar19 = puVar15 + lVar14;
      uVar17 = 0x1000;
      lVar10 = lVar14;
      puStack_90 = puVar15;
      puStack_88 = puVar13;
      puStack_80 = puVar13;
      puStack_78 = puVar19;
      __Znwm();
      lStack_a0 = lVar9 + 0x178;
      uStack_98 = 0x80;
      puVar16 = puVar13;
      if (uVar3 == lVar14 * 8) {
        if (puVar20 == puVar18) {
          puVar20 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
          lStack_c0 = lVar4;
          uStack_a8 = uVar17;
          FUN_005c1294();
          puStack_c8 = puVar20 + lVar10;
          puStack_e0 = puVar20;
          puStack_d8 = puVar20;
          puStack_d0 = puVar20;
          FUN_005c126c(&puStack_e0,puVar13,puVar13);
          puVar1 = puStack_c8;
          puVar16 = puStack_d0;
          puVar18 = puStack_d8;
          puVar20 = puStack_e0;
          puStack_90 = puStack_e0;
          puStack_88 = puStack_d8;
          puStack_78 = puStack_c8;
          puStack_e0 = puVar15;
          puStack_d8 = puVar13;
          puStack_d0 = puVar13;
          puStack_c8 = puVar19;
          func_0x005c12f4(&puStack_e0);
          puVar15 = puVar20;
          puVar13 = puVar18;
          puVar19 = puVar1;
        }
        else {
          puVar13 = puVar13 + (((long)puVar13 - (long)puVar15 >> 3) + 1) / -2;
          puVar16 = puVar13;
          puStack_88 = puVar13;
        }
      }
      puVar20 = puVar16 + 1;
      *puVar16 = uVar17;
      uStack_a8 = 0;
      puVar18 = *(undefined8 **)(lVar9 + 0x160);
      puStack_80 = puVar20;
      while (puVar16 = *(undefined8 **)(lVar9 + 0x158), puVar18 != puVar16) {
        puVar16 = puVar13;
        if (puVar13 == puVar15) {
          if (puVar20 < puVar19) {
            lVar14 = (long)puVar20 - (long)puVar15;
            puVar1 = puVar20 + (((long)puVar19 - (long)puVar20 >> 3) + 1) / 2;
            puVar16 = (undefined8 *)((long)puVar1 - ((long)puVar20 - (long)puVar15));
            puVar20 = puVar1;
            if (lVar14 != 0) {
              _memmove(puVar16,puVar13,lVar14);
            }
          }
          else {
            lVar14 = (long)puVar19 - (long)puVar15 >> 2;
            if ((long)puVar19 - (long)puVar15 == 0) {
              lVar14 = 1;
            }
            lStack_c0 = lVar4;
            FUN_005c1294(lVar14);
            func_0x005c463c(lVar14 << 1);
            FUN_005c126c(&puStack_e0,puVar15,puVar20);
            puVar6 = puStack_c8;
            puVar5 = puStack_d0;
            puVar16 = puStack_d8;
            puVar1 = puStack_e0;
            puStack_e0 = puVar15;
            puStack_d8 = puVar13;
            puStack_d0 = puVar20;
            puStack_c8 = puVar19;
            func_0x005c12f4(&puStack_e0);
            puVar15 = puVar1;
            puVar20 = puVar5;
            puVar19 = puVar6;
          }
        }
        puVar18 = puVar18 + -1;
        puVar13 = puVar16 + -1;
        *puVar13 = *puVar18;
      }
      puStack_90 = *(undefined8 **)(lVar9 + 0x150);
      *(undefined8 **)(lVar9 + 0x150) = puVar15;
      *(undefined8 **)(lVar9 + 0x158) = puVar13;
      puStack_78 = *(undefined8 **)(lVar9 + 0x168);
      puStack_80 = *(undefined8 **)(lVar9 + 0x160);
      *(undefined8 **)(lVar9 + 0x160) = puVar20;
      *(undefined8 **)(lVar9 + 0x168) = puVar19;
      puStack_88 = puVar16;
      func_0x005c12c8(&uStack_a8);
      func_0x005c12f4(&puStack_90);
      goto LAB_005c0c58;
    }
    uVar17 = 0x1000;
    __Znwm();
    if (puVar13 == puVar20) {
      if (puVar18 == puVar19) {
        lVar14 = (long)puVar13 - (long)puVar18 >> 2;
        if (puVar20 == puVar18) {
          lVar14 = 1;
        }
        lStack_c0 = lVar4;
        FUN_005c1294(lVar14);
        func_0x005c463c(lVar14 << 1);
        lVar14 = *(long *)(lVar9 + 0x158);
        FUN_005c126c(&puStack_e0,lVar14,*(undefined8 *)(lVar9 + 0x160));
        func_0x005c4408();
        puVar18 = *(undefined8 **)(lVar9 + 0x158);
        puVar20 = *(undefined8 **)(lVar9 + 0x160);
      }
      puVar18[-1] = uVar17;
      goto LAB_005c09c4;
    }
  }
  else {
    *(ulong *)(lVar9 + 0x170) = uVar2 - 0x80;
    uVar17 = *puVar18;
    puVar18 = puVar18 + 1;
LAB_005c09c4:
    *(undefined8 **)(lVar9 + 0x158) = puVar18;
    if (puVar20 == *(undefined8 **)(lVar9 + 0x168)) {
      puVar13 = *(undefined8 **)(lVar9 + 0x150);
      if (puVar18 < puVar13 || (long)puVar18 - (long)puVar13 == 0) {
        lStack_c0 = lVar9 + 0x168;
        puVar18 = (undefined8 *)((long)puVar20 - (long)puVar13 >> 2);
        if ((long)puVar20 - (long)puVar13 == 0) {
          puVar18 = (undefined8 *)((long)&MACH_HEADER.magic + 1);
        }
        puVar20 = puVar18;
        FUN_005c1294();
        puStack_d8 = puVar20 + ((ulong)puVar18 >> 2);
        puStack_c8 = puVar20 + lVar14;
        puStack_e0 = puVar20;
        puStack_d0 = puStack_d8;
        FUN_005c126c(&puStack_e0,*(undefined8 *)(lVar9 + 0x158),*(undefined8 *)(lVar9 + 0x160));
        func_0x005c4408();
        puVar20 = *(undefined8 **)(lVar9 + 0x160);
      }
      else {
        lVar14 = (((long)puVar18 - (long)puVar13 >> 3) + 1) / -2;
        puVar13 = puVar18 + lVar14;
        lVar4 = (long)puVar20 - (long)puVar18;
        if (lVar4 != 0) {
          _memmove(puVar13,puVar18,lVar4);
          puVar18 = *(undefined8 **)(lVar9 + 0x158);
        }
        puVar20 = (undefined8 *)((long)puVar13 + lVar4);
        *(undefined8 **)(lVar9 + 0x158) = puVar18 + lVar14;
      }
    }
  }
  *puVar20 = uVar17;
  *(undefined8 **)(lVar9 + 0x160) = puVar20 + 1;
LAB_005c0c58:
  FUN_005c05f8(lVar9 + 0x150);
  FUN_005c1058();
  *(long *)(lVar9 + 0x178) = *(long *)(lVar9 + 0x178) + 1;
  FUN_005c0d70(lVar9);
  FUN_005c0628(auStack_100);
  return;
}



/* Entry: 005c1344; end: 005c1363;  */

void FUN_005c1344(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x005c13a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 005c1364; end: 005c1367;  */

void FUN_005c1364(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 005c1368; end: 005c13d3;  */

undefined8 * FUN_005c1368(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  if (param_3 == 0) {
    param_1[1] = 0;
    puVar1 = param_1;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = param_3;
    puVar1 = (undefined8 *)0x0;
    if (param_3 != 0) {
      return param_1;
    }
  }
  FUN_0045a0e4();
  func_0x005c0650(puVar1 + 3);
  FUN_00468b24(puVar1 + 2);
  func_0x005c4318();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 005c13d4; end: 005c13ff;  */

void FUN_005c13d4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 in_stack_ffffffffffffffd0;
  undefined8 in_stack_ffffffffffffffd8;
  
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (*(int *)(puVar5 + 0x29) != 3) {
    if (*(char *)(puVar5 + 0x38) == '\x01') {
      lVar2 = puVar5[3];
      (**(code **)(*plRam0000000000b65da0 + 0x80))(plRam0000000000b65da0,lVar2 + 0x18);
      if (*(long *)(lVar2 + 0x58) == 0) {
        *(undefined1 *)(lVar2 + 0x60) = 1;
      }
      else {
        FUN_004091e8(lVar2);
        FUN_003f1bf4(*(undefined8 *)(lVar2 + 0x58),0);
      }
      (**(code **)(*plRam0000000000b65da0 + 0x88))(plRam0000000000b65da0,lVar2 + 0x18);
      return;
    }
    puVar3 = puVar5;
    FUN_005c0f9c();
    if ((*(byte *)((long)puVar5 + 0x1c1) & 1) == 0) {
      iVar1 = *(int *)(puVar5 + 0x29);
      *(undefined4 *)(puVar5 + 0x29) = 2;
      if (iVar1 != 0) {
        func_0x005c4740();
        func_0x005c44ec();
        puVar4 = puVar3;
        func_0x005c482c();
        *puVar4 = &PTR_FUN_00a04090;
        puVar4[5] = in_stack_ffffffffffffffd8;
        puVar4[4] = in_stack_ffffffffffffffd0;
        func_0x005c4374();
        FUN_0046c1f8(puVar5[4],puVar3);
        *(undefined1 *)((long)puVar5 + 0x1c1) = 1;
      }
    }
  }
  return;
}



/* Entry: 005c1400; end: 005c1413;  */

void FUN_005c1400(void)

{
  FUN_005c23f8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 005c1414; end: 005c141f;  */

void FUN_005c1414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005c4060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}


