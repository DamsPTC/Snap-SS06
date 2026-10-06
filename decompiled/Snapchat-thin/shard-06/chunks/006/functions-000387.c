/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a80df8; end: 104a80e33;  */

long FUN_104a80df8(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1de0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a80e34; end: 104a80e47;  */

undefined ** FUN_104a80e34(void)

{
  return &PTR_DAT_1107c1de0;
}



/* Entry: 104a80e48; end: 104a80e87;  */

void FUN_104a80e48(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x20;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c1e00;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



/* Entry: 104a80e88; end: 104a80eab;  */

void FUN_104a80e88(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1107c1e00;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a80eac; end: 104a8100f;  */

bool FUN_104a80eac(long param_1,undefined8 *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  undefined1 uStack_49;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  lVar6 = *(long *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 >> 5 & 1) != 0) {
    func_0x0001004e3790(lVar6);
    goto LAB_104a80fa0;
  }
  uStack_40 = *(ulong *)*param_2;
  if ((uStack_40 & 1) != 0) {
    piVar5 = (int *)(uStack_40 - 1);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar3) {
        *piVar5 = *piVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_104addba0(&uStack_38,&uStack_40);
  if ((uStack_40 & 1) != 0) {
    func_0x00010084dad0();
  }
  FUN_104aba878(&uStack_48,2,"Failed to pick subchannel",0x19,&uStack_49,1,&uStack_38);
  uVar4 = *(ulong *)**(undefined8 **)(param_1 + 0x18);
  if (uStack_48 == uVar4) {
LAB_104a80f60:
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *(ulong *)**(undefined8 **)(param_1 + 0x18) = uStack_48;
    uStack_48 = 0x36;
    if ((uVar4 & 1) != 0) {
      func_0x00010084dad0();
      uVar4 = uStack_48;
      goto LAB_104a80f60;
    }
  }
  if (*(char *)(lVar6 + 200) != '\0') {
    func_0x0001008db344(*(undefined8 *)(lVar6 + 0x10),lVar6 + 0xb8,*(undefined8 *)(lVar6 + 0x60));
    *(undefined1 *)(lVar6 + 200) = 0;
    *(undefined8 *)(lVar6 + 0xd0) = 0;
  }
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a80fa0:
  return (uVar1 & 0x20) == 0;
}



/* Entry: 104a81010; end: 104a8104b;  */

long FUN_104a81010(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1e70);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a8104c; end: 104a8105f;  */

undefined ** FUN_104a8104c(void)

{
  return &PTR_DAT_1107c1e70;
}



/* Entry: 104a81060; end: 104a81097;  */

void FUN_104a81060(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *puVar1 = &PTR_DAT_1107c1e90;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a81098; end: 104a810b3;  */

void FUN_104a81098(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1107c1e90;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 104a810b4; end: 104a811eb;  */

undefined8 FUN_104a810b4(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  
  lVar5 = *(long *)(param_1 + 8);
  uStack_38 = *(ulong *)*param_2;
  if ((uStack_38 & 1) != 0) {
    piVar4 = (int *)(uStack_38 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar2) {
        *piVar4 = *piVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  FUN_104addba0(&uStack_30,&uStack_38);
  FUN_104abaa50(&uStack_28,&uStack_30,0xe,1);
  uVar3 = *(ulong *)**(undefined8 **)(param_1 + 0x10);
  if (uStack_28 != uVar3) {
    *(ulong *)**(undefined8 **)(param_1 + 0x10) = uStack_28;
    uStack_28 = 0x36;
    if ((uVar3 & 1) == 0) goto LAB_104a81148;
    func_0x00010084dad0();
    uVar3 = uStack_28;
  }
  if ((uVar3 & 1) != 0) {
    func_0x00010084dad0();
  }
LAB_104a81148:
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  if (*(char *)(lVar5 + 200) != '\0') {
    func_0x0001008db344(*(undefined8 *)(lVar5 + 0x10),lVar5 + 0xb8,*(undefined8 *)(lVar5 + 0x60));
    *(undefined1 *)(lVar5 + 200) = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
  }
  return 1;
}



/* Entry: 104a811ec; end: 104a81227;  */

long FUN_104a811ec(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1f00);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a81228; end: 104a81247;  */

undefined ** FUN_104a81228(void)

{
  return &PTR_DAT_1107c1f00;
}



/* Entry: 104a81248; end: 104a812d3;  */

undefined8 * FUN_104a81248(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c1f20;
  FUN_104aab304(param_1 + 0x18);
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  plVar4 = (long *)param_1[0x10];
  if (plVar4 != (long *)0x0) {
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x0001005a5f48(param_1 + 8);
  *param_1 = &PTR_FUN_1107c4ac0;
  func_0x00010047dc18();
  FUN_104aaeff4();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 104a812d4; end: 104a812d7;  */

undefined8 * FUN_104a812d4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c1f20;
  FUN_104aab304(param_1 + 0x18);
  if (param_1[0x14] != 0) {
    param_1[0x15] = param_1[0x14];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    __ZdlPv(param_1[0x11]);
  }
  plVar4 = (long *)param_1[0x10];
  if (plVar4 != (long *)0x0) {
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  func_0x0001005a5f48(param_1 + 8);
  *param_1 = &PTR_FUN_1107c4ac0;
  func_0x00010047dc18();
  FUN_104aaeff4();
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  return param_1;
}



/* Entry: 104a812d8; end: 104a812eb;  */

void FUN_104a812d8(void)

{
  FUN_104a81248();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a812ec; end: 104a81bf7;  */

/* WARNING: Removing unreachable block (ram,0x000104a81a44) */
/* WARNING: Type propagation algorithm not settling */

void FUN_104a812ec(undefined4 *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  undefined1 **ppuVar8;
  long **pplStack_290;
  undefined1 uStack_288;
  char cStack_279;
  undefined1 uStack_271;
  long *plStack_270;
  undefined8 uStack_268;
  long lStack_260;
  long *plStack_258;
  long lStack_250;
  long lStack_248;
  long *plStack_240;
  long **pplStack_238;
  long *aplStack_230 [2];
  long *plStack_220;
  long lStack_218;
  long lStack_210;
  int aiStack_208 [2];
  undefined8 uStack_200;
  char cStack_1e9;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [8];
  undefined8 uStack_1b0;
  undefined1 uStack_199;
  undefined1 *puStack_198;
  undefined1 **ppuStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  undefined8 uStack_160;
  long *plStack_158;
  long alStack_150 [5];
  undefined1 *apuStack_128 [2];
  char cStack_111;
  undefined4 uStack_110;
  long *plStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 auStack_c0 [2];
  char acStack_a9 [9];
  undefined8 auStack_a0 [2];
  char acStack_89 [9];
  long *aplStack_80 [5];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)(ulong)*(uint *)(param_2 + 0x38);
  FUN_104add41c();
  plStack_240 = plVar3;
  FUN_104a81bf8(&ppuStack_190,&DAT_10f6856fe,&plStack_240);
  func_0x0001004c669c(aiStack_208,&ppuStack_190,1,&plStack_258);
  func_0x000104a81d78(apuStack_128,&DAT_10f6856fe,aiStack_208);
  FUN_104a81de8(auStack_c0,&DAT_10f638ab2,param_2 + 0x88);
  func_0x0001004c669c(auStack_1b8,apuStack_128,2,&plStack_220);
  lVar7 = 0;
  do {
    plStack_220 = (long *)((long)aplStack_80 + lVar7 + 0x10);
    func_0x000100482ae0(&plStack_220);
    func_0x000100482900(acStack_89 + lVar7 + 1,*(undefined8 *)((long)aplStack_80 + lVar7));
    if (acStack_89[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar7));
    }
    if (acStack_a9[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar7));
    }
    lVar7 = lVar7 + -0x68;
  } while (lVar7 != -0xd0);
  func_0x000100482900(aiStack_208,uStack_200);
  plStack_220 = alStack_150 + 2;
  func_0x000100482ae0(&plStack_220);
  func_0x000100482900(&plStack_158,alStack_150[0]);
  if (uStack_160._7_1_ < '\0') {
    __ZdlPv(plStack_170);
  }
  if (lStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  FUN_104aab794(aiStack_208,param_2 + 0xc0);
  if (aiStack_208[0] != 0) {
    func_0x00010002b024(apuStack_128,&DAT_10f35cf1f);
    puVar4 = auStack_1b8;
    ppuStack_190 = apuStack_128;
    FUN_104a81f70(puVar4,apuStack_128,&UNK_10dd5b8f9,&ppuStack_190,&plStack_220);
    func_0x0001004829b8(puVar4 + 0x38,aiStack_208);
    if (cStack_111 < '\0') {
      __ZdlPv(apuStack_128[0]);
    }
  }
  FUN_104aac17c(param_2 + 0xa0,auStack_1b8);
  __ZNSt3__19to_stringEl(&plStack_258,*(undefined8 *)(param_2 + 0x18));
  func_0x00010002b024(&ppuStack_190,"subchannelId");
  uStack_160 = lStack_248;
  lStack_178 = CONCAT44(lStack_178._4_4_,4);
  lStack_168 = lStack_250;
  plStack_170 = plStack_258;
  plStack_258 = (long *)0x0;
  lStack_250 = 0;
  lStack_248 = 0;
  plStack_158 = alStack_150;
  alStack_150[0] = 0;
  alStack_150[1] = 0;
  alStack_150[3] = 0;
  alStack_150[4] = 0;
  alStack_150[2] = 0;
  func_0x0001004c669c(&plStack_240,&ppuStack_190,1,&pplStack_290);
  FUN_104a81e3c(apuStack_128,&DAT_10f416301,&plStack_240);
  func_0x000104a81eac(auStack_c0,"data",auStack_1b8);
  func_0x0001004c669c(&plStack_220,apuStack_128,2,&plStack_270);
  lVar7 = 0;
  do {
    plStack_270 = (long *)((long)aplStack_80 + lVar7 + 0x10);
    func_0x000100482ae0(&plStack_270);
    func_0x000100482900(acStack_89 + lVar7 + 1,*(undefined8 *)((long)aplStack_80 + lVar7));
    if (acStack_89[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar7));
    }
    if (acStack_a9[lVar7] < '\0') {
      __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar7));
    }
    lVar7 = lVar7 + -0x68;
  } while (lVar7 != -0xd0);
  func_0x000100482900(&plStack_240,pplStack_238);
  plStack_270 = alStack_150 + 2;
  func_0x000100482ae0(&plStack_270);
  func_0x000100482900(&plStack_158,alStack_150[0]);
  if (uStack_160 < 0) {
    __ZdlPv(plStack_170);
  }
  if (lStack_180 < 0) {
    __ZdlPv(ppuStack_190);
  }
  if (lStack_248 < 0) {
    __ZdlPv(plStack_258);
  }
  ppuVar8 = (undefined1 **)(param_2 + 0x40);
  func_0x000100460448(ppuVar8);
  if (*(long *)(param_2 + 0x80) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)(*(long *)(param_2 + 0x80) + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar3 = *(long **)(param_2 + 0x80);
  }
  func_0x000100466b80(ppuVar8);
  if ((plVar3 != (long *)0x0) && (plVar3[3] != 0)) {
    __ZNSt3__19to_stringEl(&plStack_270);
    func_0x00010002b024(apuStack_128,"socketId");
    lStack_f8 = lStack_260;
    uStack_110 = 4;
    uStack_100 = uStack_268;
    plStack_108 = plStack_270;
    plStack_270 = (long *)0x0;
    uStack_268 = 0;
    lStack_260 = 0;
    puStack_f0 = &uStack_e8;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_d8 = 0;
    FUN_104a81f1c(auStack_c0,&DAT_10f68f148,plVar3 + 4);
    func_0x0001004c669c(&plStack_258,apuStack_128,2,&uStack_271);
    ppuStack_190 = (undefined1 **)CONCAT44(ppuStack_190._4_4_,5);
    uStack_188 = 0;
    lStack_180 = 0;
    lStack_178 = 0;
    plStack_170 = plStack_258;
    lStack_168 = lStack_250;
    uStack_160 = lStack_248;
    plVar5 = &lStack_168;
    if (lStack_248 != 0) {
      plStack_258 = &lStack_250;
      *(long **)(lStack_250 + 0x10) = &lStack_168;
      lStack_250 = 0;
      lStack_248 = 0;
      plVar5 = plStack_170;
    }
    plStack_170 = plVar5;
    plStack_158 = (long *)0x0;
    alStack_150[0] = 0;
    alStack_150[1] = 0;
    pplStack_290 = &plStack_240;
    pplStack_238 = (long **)0x0;
    aplStack_230[0] = (long *)0x0;
    plStack_240 = (long *)0x0;
    uStack_288 = 0;
    plVar5 = (long *)0x50;
    __Znwm();
    pplVar6 = aplStack_230;
    aplStack_230[0] = plVar5 + 10;
    plStack_240 = plVar5;
    pplStack_238 = (long **)plVar5;
    func_0x0001004c6b30(pplVar6,&ppuStack_190,alStack_150 + 2,plVar5);
    pplStack_238 = pplVar6;
    func_0x00010002b024(&pplStack_290,"socketRef");
    pplVar6 = &plStack_220;
    puStack_198 = (undefined1 *)&pplStack_290;
    FUN_104a81f70(pplVar6,&pplStack_290,&UNK_10dd5b8f9,&puStack_198,&uStack_199);
    *(undefined4 *)(pplVar6 + 7) = 6;
    FUN_104a7781c(pplVar6 + 0xe);
    pplVar6[0xf] = (long *)pplStack_238;
    pplVar6[0xe] = plStack_240;
    pplVar6[0x10] = aplStack_230[0];
    pplStack_238 = (long **)0x0;
    aplStack_230[0] = (long *)0x0;
    plStack_240 = (long *)0x0;
    if (cStack_279 < '\0') {
      __ZdlPv(pplStack_290);
    }
    pplStack_290 = &plStack_240;
    func_0x000100482ae0(&pplStack_290);
    pplStack_290 = &plStack_158;
    func_0x000100482ae0(&pplStack_290);
    func_0x000100482900(&plStack_170,lStack_168);
    if (lStack_178 < 0) {
      __ZdlPv(uStack_188);
    }
    func_0x000100482900(&plStack_258,lStack_250);
    lVar7 = 0;
    do {
      pplStack_290 = (long **)((long)aplStack_80 + lVar7 + 0x10);
      func_0x000100482ae0(&pplStack_290);
      func_0x000100482900(acStack_89 + lVar7 + 1,*(undefined8 *)((long)aplStack_80 + lVar7));
      if (acStack_89[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_a0 + lVar7));
      }
      if (acStack_a9[lVar7] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_c0 + lVar7));
      }
      lVar7 = lVar7 + -0x68;
    } while (lVar7 != -0xd0);
    ppuVar8 = (undefined1 **)0xffffffffffffff30;
    if (lStack_260 < 0) {
      __ZdlPv(plStack_270);
    }
  }
  *param_1 = 5;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plStack_220;
  plVar5 = (long *)(param_1 + 10);
  *plVar5 = lStack_218;
  *(long *)(param_1 + 0xc) = lStack_210;
  if (lStack_210 == 0) {
    *(long **)(param_1 + 8) = plVar5;
  }
  else {
    *(long **)(lStack_218 + 0x10) = plVar5;
    plStack_220 = &lStack_218;
    lStack_218 = 0;
    lStack_210 = 0;
  }
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  if (plVar3 != (long *)0x0) {
    plVar5 = plVar3 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
  }
  func_0x000100482900(&plStack_220,lStack_218);
  apuStack_128[0] = auStack_1d0;
  func_0x000100482ae0(apuStack_128);
  func_0x000100482900(auStack_1e8,uStack_1e0);
  if (cStack_1e9 < '\0') {
    __ZdlPv(uStack_200);
  }
  puVar4 = auStack_1b8;
  func_0x000100482900(puVar4,uStack_1b0);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    if (cStack_279 < '\0') {
      __ZdlPv(pplStack_290);
    }
    pplStack_290 = &plStack_240;
    func_0x000100482ae0(&pplStack_290);
    FUN_104a773c0(&ppuStack_190);
    func_0x000100482900(&plStack_258,lStack_250);
    lVar7 = 0x68;
    do {
      func_0x000104a77414((long)apuStack_128 + lVar7);
      lVar7 = lVar7 + -0x68;
    } while (lVar7 != -0x68);
    if (lStack_260 < 0) {
      __ZdlPv(plStack_270);
    }
    plVar5 = plVar3 + 1;
    do {
      lVar7 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar7 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar3 + 8))(plVar3);
    }
    func_0x000100482900(&plStack_220,lStack_218);
    FUN_104a773c0(aiStack_208);
    func_0x000100482900(auStack_1b8,uStack_1b0);
    do {
      do {
        __Unwind_Resume(puVar4);
        func_0x000100482900(aiStack_208,uStack_200);
        func_0x000104a77414(&ppuStack_190);
      } while (apuStack_128 == ppuVar8);
      do {
        ppuVar8 = ppuVar8 + -0xd;
        func_0x000104a77414(ppuVar8);
      } while (ppuVar8 != apuStack_128);
    } while( true );
  }
  return;
}



/* Entry: 104a81bf8; end: 104a81c4b;  */

long FUN_104a81bf8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104a81c4c(lVar1 + 0x18,*param_3,0);
  return param_1;
}



/* Entry: 104a81c4c; end: 104a81d0b;  */

undefined4 * FUN_104a81c4c(undefined4 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined7 uStack_28;
  char cStack_21;
  
  func_0x00010002b024(&uStack_38);
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  if (cStack_21 < '\0') {
    func_0x000100033dac(param_1 + 2,uStack_38,uStack_30);
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    if (cStack_21 < '\0') {
      __ZdlPv(uStack_38);
    }
  }
  else {
    *(undefined8 *)(param_1 + 4) = uStack_30;
    *(undefined8 *)(param_1 + 2) = uStack_38;
    *(undefined8 *)(param_1 + 10) = 0;
    *(ulong *)(param_1 + 6) = CONCAT17(cStack_21,uStack_28);
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined4 **)(param_1 + 8) = param_1 + 10;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
  }
  return param_1;
}



/* Entry: 104a81d0c; end: 104a81de7;  */

undefined4 * FUN_104a81d0c(undefined4 *param_1,undefined8 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 3;
  if (param_3 == 0) {
    uVar1 = 4;
  }
  *param_1 = uVar1;
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    func_0x000100033dac(param_1 + 2,*param_2,param_2[1]);
  }
  else {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    *(undefined8 *)(param_1 + 6) = param_2[2];
    *(undefined8 *)(param_1 + 4) = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar2;
  }
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  return param_1;
}



/* Entry: 104a81de8; end: 104a81e3b;  */

long FUN_104a81de8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104a81d0c(lVar1 + 0x18,param_3,0);
  return param_1;
}



/* Entry: 104a81e3c; end: 104a81f1b;  */

void FUN_104a81e3c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  func_0x00010002b024();
  *(undefined4 *)(param_1 + 0x18) = 5;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = *param_3;
  plVar1 = param_3 + 1;
  lVar3 = *plVar1;
  plVar2 = (long *)(param_1 + 0x40);
  *plVar2 = lVar3;
  lVar4 = param_3[2];
  *(long *)(param_1 + 0x48) = lVar4;
  if (lVar4 == 0) {
    *(long **)(param_1 + 0x38) = plVar2;
  }
  else {
    *(long **)(lVar3 + 0x10) = plVar2;
    *param_3 = plVar1;
    *plVar1 = 0;
    param_3[2] = 0;
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}



/* Entry: 104a81f1c; end: 104a81f6f;  */

long FUN_104a81f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010002b024();
  FUN_104a81d0c(lVar1 + 0x18,param_3,0);
  return param_1;
}



/* Entry: 104a81f70; end: 104a8204b;  */

undefined1  [16]
FUN_104a81f70(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_60;
  long *plStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  FUN_104a77478(param_1,&uStack_48,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x88;
    __Znwm();
    param_4 = (undefined8 *)*param_4;
    uVar3 = param_4[2];
    uVar5 = *param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_4[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined8 *)(lVar4 + 0x60) = 0;
    *(undefined8 *)(lVar4 + 0x58) = 0;
    *(undefined8 *)(lVar4 + 0x40) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined8 *)(lVar4 + 0x50) = 0;
    *(undefined8 *)(lVar4 + 0x48) = 0;
    *(undefined8 *)(lVar4 + 0x68) = 0;
    *(undefined8 *)(lVar4 + 0x70) = 0;
    *(long *)(lVar4 + 0x58) = lVar4 + 0x60;
    *(undefined8 *)(lVar4 + 0x78) = 0;
    *(undefined8 *)(lVar4 + 0x80) = 0;
    uStack_50 = 1;
    plStack_58 = param_1 + 1;
    func_0x0001004c6a98(param_1,uStack_48,plVar2,lVar4);
    uStack_60 = 0;
    func_0x0001004c6aec(&uStack_60,0);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 104a8204c; end: 104a8205f;  */

void FUN_104a8204c(void)

{
  long lVar1;
  long lStack_28;
  
  FUN_104a84cc4();
  lVar1 = lRam00000001136a1db8;
  if (lRam00000001136a1db8 != 0) {
    lStack_28 = lRam00000001136a1db8;
    FUN_104a84a6c(&lStack_28);
    __ZdlPv(lVar1);
  }
  lRam00000001136a1db8 = 0;
  return;
}



/* Entry: 104a82060; end: 104a82067;  */

void FUN_104a82060(void)

{
  return;
}



/* Entry: 104a82068; end: 104a8208b;  */

void FUN_104a82068(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_1107c1f60;
  return;
}



/* Entry: 104a8208c; end: 104a8208f;  */

void FUN_104a8208c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a82090; end: 104a820cb;  */

long FUN_104a82090(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c1fc0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a820cc; end: 104a820d7;  */

undefined ** FUN_104a820cc(void)

{
  return &PTR_DAT_1107c1fc0;
}



/* Entry: 104a820d8; end: 104a82137;  */

void FUN_104a820d8(long *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x00010047fdf4(param_2,"grpc.internal.config_selector");
  if ((param_2 == (int *)0x0) || (*param_2 != 2)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_2 + 4);
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
  }
  *param_1 = lVar4;
  return;
}



/* Entry: 104a82138; end: 104a821ab;  */

void FUN_104a82138(long *param_1)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  plVar2 = (long *)*param_1;
  *param_1 = 0;
  func_0x000100836fa4(param_1 + 2,0,param_1[1]);
  if (plVar2 != (long *)0x0) {
    plVar1 = plVar2 + 1;
    do {
      lVar5 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar5 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a82190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}



/* Entry: 104a821ac; end: 104a821d3;  */

void FUN_104a821ac(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uStack_48;
  undefined1 uStack_39;
  ulong uStack_38;
  
  if (*(long *)(param_1 + 8) == 0) {
    if (param_2 != 0) {
      *(long *)(param_1 + 8) = param_2;
      return;
    }
  }
  else {
    func_0x00010bda9b6c();
  }
  func_0x00010bda9b34();
  plVar3 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_38 = 0;
      func_0x0001004c1168(param_1 + 0x18,&uStack_38,0,0);
      if ((uStack_38 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_48 = 0;
    func_0x0001004bd7e8(&uStack_39,param_1 + 0x18,&uStack_48);
    if ((uStack_48 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104a821d4; end: 104a821f3;  */

void FUN_104a821d4(long param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uStack_38;
  undefined1 uStack_29;
  ulong uStack_28;
  
  plVar3 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca0();
    if ((((ulong)plVar3 & 1) == 0) &&
       (func_0x000100460dc4(), (*(byte *)(*plVar3 + 0x28) >> 1 & 1) != 0)) {
      uStack_28 = 0;
      func_0x0001004c1168(param_1 + 0x18,&uStack_28,0,0);
      if ((uStack_28 & 1) == 0) {
        return;
      }
      func_0x00010084dad0();
      return;
    }
    uStack_38 = 0;
    func_0x0001004bd7e8(&uStack_29,param_1 + 0x18,&uStack_38);
    if ((uStack_38 & 1) != 0) {
      func_0x00010084dad0();
    }
    return;
  }
  return;
}



/* Entry: 104a821f4; end: 104a82223;  */

long FUN_104a821f4(long param_1)

{
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a82224; end: 104a82273;  */

undefined8 * FUN_104a82224(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c1fe0;
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a82274; end: 104a82277;  */

undefined8 * FUN_104a82274(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_1107c1fe0;
  plVar3 = (long *)param_1[2];
  do {
    lVar4 = *plVar3;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar2) {
      *plVar3 = lVar4 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar4 + -1 == 0) {
    func_0x000100836ca4();
  }
  return param_1;
}



/* Entry: 104a82278; end: 104a8228b;  */

void FUN_104a82278(void)

{
  FUN_104a82224();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a8228c; end: 104a822af;  */

void FUN_104a8228c(undefined8 param_1)

{
  FUN_104aab078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 104a822b0; end: 104a8235f;  */

void FUN_104a822b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x000100460448(param_1 + 0x28);
  lVar1 = param_1 + 0x10;
  lVar2 = lVar1;
  func_0x0001004d368c(lVar1,param_2);
  if ((param_1 + 0x18 != lVar2) && (*(long *)(lVar2 + 0xb0) == param_3)) {
    FUN_104a823f8(lVar1,lVar2);
    func_0x0001004d6d80(lVar2 + 0x20);
    __ZdlPv(lVar2);
  }
  func_0x000100466b80(param_1 + 0x28);
  return;
}



/* Entry: 104a82360; end: 104a82363;  */

long FUN_104a82360(long param_1)

{
  func_0x0001005a5f48(param_1 + 0x28);
  FUN_104a82378(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 104a82364; end: 104a82377;  */

void FUN_104a82364(void)

{
  FUN_104a823c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a82378; end: 104a823bf;  */

void FUN_104a82378(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_104a82378(param_1,*param_2);
    FUN_104a82378(param_1,param_2[1]);
    func_0x0001004d6d80(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 104a823c0; end: 104a823f7;  */

long FUN_104a823c0(long param_1)

{
  func_0x0001005a5f48(param_1 + 0x28);
  FUN_104a82378(param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 104a823f8; end: 104a82467;  */

long * FUN_104a823f8(long *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = param_2;
  plVar1 = (long *)param_2[1];
  if ((long *)param_2[1] == (long *)0x0) {
    do {
      plVar4 = (long *)plVar3[2];
      bVar2 = (long *)*plVar4 != plVar3;
      plVar3 = plVar4;
    } while (bVar2);
  }
  else {
    do {
      plVar4 = plVar1;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
  if ((long *)*param_1 == param_2) {
    *param_1 = (long)plVar4;
  }
  param_1[2] = param_1[2] + -1;
  FUN_104a7ee40(param_1[1]);
  return plVar4;
}



/* Entry: 104a82468; end: 104a825bb;  */

void FUN_104a82468(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5,
                  long *param_6)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar4 = (long *)0x30;
  __Znwm();
  lVar7 = param_2[1];
  plVar4[1] = *param_2;
  plVar4[2] = lVar7;
  *(undefined8 *)((long)plVar4 + 0x17) = *(undefined8 *)((long)param_2 + 0xf);
  uVar1 = *(undefined1 *)((long)param_2 + 0x17);
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar7 = *param_5;
  *param_5 = 0;
  lVar8 = *param_6;
  *param_6 = 0;
  *plVar4 = (long)&PTR_FUN_1107c20b0;
  *(undefined1 *)((long)plVar4 + 0x1f) = uVar1;
  plVar4[4] = lVar7;
  plVar4[5] = lVar8;
  uVar5 = 0x230;
  __Znwm();
  plVar6 = (long *)*param_3;
  *param_3 = 0;
  FUN_104a90350();
  *param_1 = uVar5;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  if (plVar6 != (long *)0x0) {
    plVar4 = plVar6 + 1;
    do {
      lVar7 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}



/* Entry: 104a825bc; end: 104a826f3;  */

undefined8 * FUN_104a825bc(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c20b0;
  plVar4 = (long *)param_1[5];
  if (plVar4 != (long *)0x0) {
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (long *)param_1[4];
  if (plVar4 != (long *)0x0) {
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 8))();
    }
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    __ZdlPv(param_1[1]);
  }
  return param_1;
}



/* Entry: 104a826f4; end: 104a8272f;  */

void FUN_104a826f4(undefined8 *param_1)

{
  *param_1 = 1;
  param_1[1] = 0x1c;
  param_1[2] = "/grpc.health.v1.Health/Watch";
  return;
}



/* Entry: 104a82730; end: 104a8281b;  */

void FUN_104a82730(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_38;
  
  lVar1 = 0;
  func_0x00010b28ba8c(0,0,&PTR_DAT_11336f028);
  plVar2 = (long *)&UNK_110ccfc30;
  func_0x00010b28a954(&UNK_110ccfc30,lVar1);
  if ((char)*(byte *)(param_2 + 0x1f) < '\0') {
    lVar3 = *(long *)(param_2 + 8);
    uVar4 = *(ulong *)(param_2 + 0x10);
  }
  else {
    lVar3 = param_2 + 8;
    uVar4 = (ulong)*(byte *)(param_2 + 0x1f);
  }
  *plVar2 = lVar3;
  plVar2[1] = uVar4;
  func_0x00010b289158();
  func_0x0001005a7e6c(param_1,uStack_38);
  lVar3 = (long)param_1 + 9;
  if (*param_1 != 0) {
    lVar3 = param_1[2];
  }
  _memcpy(lVar3,plVar2,uStack_38);
  if (lVar1 != 0) {
    func_0x00010b28bb80(lVar1);
  }
  return;
}



/* Entry: 104a8281c; end: 104a82a0f;  */

void FUN_104a8281c(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *****pppppuVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined8 ****appppuStack_68 [2];
  char cStack_51;
  ulong uStack_50;
  char cStack_48;
  
  lVar5 = 0;
  func_0x00010b28ba8c(0,0,&PTR_DAT_11336f028);
  piVar7 = (int *)&UNK_110ccfc48;
  func_0x00010b28a954(&UNK_110ccfc48,lVar5);
  if ((piVar7 == (int *)0x0) ||
     (func_0x00010b28893c(param_4,param_5,piVar7,&UNK_110ccfc48,0,0,lVar5), (int)param_4 != 0)) {
    func_0x00010ae775f4(appppuStack_68,"cannot parse health check response",0x22);
    func_0x00010bce1afc(&uStack_50,appppuStack_68);
    if (((ulong)appppuStack_68[0] & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    cStack_48 = *piVar7 == 1;
    uStack_50 = 0;
  }
  if (lVar5 != 0) {
    func_0x00010b28bb80(lVar5);
  }
  if (uStack_50 == 0) {
    uVar6 = 2;
    if (cStack_48 == '\0') {
      uVar6 = 3;
    }
    pcVar2 = "backend unhealthy";
    if (cStack_48 != '\0') {
      pcVar2 = "OK";
    }
    FUN_104a82ac0(param_2,uVar6,pcVar2);
    *param_1 = 0;
  }
  else {
    func_0x00010ae77430(appppuStack_68,&uStack_50,1);
    pppppuVar1 = (undefined8 *****)appppuStack_68[0];
    if (-1 < cStack_51) {
      pppppuVar1 = appppuStack_68;
    }
    FUN_104a82ac0(param_2,3,pppppuVar1);
    if (cStack_51 < '\0') {
      __ZdlPv(appppuStack_68[0]);
    }
    *param_1 = uStack_50;
    if ((uStack_50 & 1) != 0) {
      piVar7 = (int *)(uStack_50 - 1);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
        if (bVar4) {
          *piVar7 = *piVar7 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  FUN_104a82b58(&uStack_50);
  return;
}



/* Entry: 104a82a10; end: 104a82abf;  */

void FUN_104a82a10(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uStack_88;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)param_3 == 0xc) {
    func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/health/health_check_client.cc"
                        ,0x73,2,&UNK_10dd50293);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      func_0x00010047e7b4(auStack_48,&UNK_10dd50293);
      func_0x00010047e7e4(lVar2 + 0xc0,3,auStack_48);
    }
    param_3 = &UNK_10dd50293;
    param_2 = 2;
    FUN_104a82ac0(param_1,2,&UNK_10dd50293);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  plVar3 = *(long **)(param_1 + 0x28);
  if ((int)param_2 == 3) {
    puVar1 = param_3;
    _strlen(param_3);
    func_0x00010ae77644(&uStack_88,param_3,puVar1);
  }
  else {
    uStack_88 = 0;
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,param_2,&uStack_88);
  if ((uStack_88 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a82ac0; end: 104a82b57;  */

void FUN_104a82ac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uStack_38;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if ((int)param_2 == 3) {
    uVar1 = param_3;
    _strlen(param_3);
    func_0x00010ae77644(&uStack_38,param_3,uVar1);
  }
  else {
    uStack_38 = 0;
  }
  (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&uStack_38);
  if ((uStack_38 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a82b58; end: 104a82b87;  */

ulong * FUN_104a82b58(ulong *param_1)

{
  if ((*param_1 & 1) != 0) {
    func_0x00010084dad0();
  }
  return param_1;
}



/* Entry: 104a82b88; end: 104a82bc7;  */

/* WARNING: Possible PIC construction at 0x000104a82ba4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104a82ba8) */

void FUN_104a82b88(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(**(undefined8 **)*param_1);
  return;
}



/* Entry: 104a82bc8; end: 104a82bcf;  */

void FUN_104a82bc8(void)

{
  return;
}



/* Entry: 104a82bd0; end: 104a82c17;  */

long * FUN_104a82bd0(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_104a82c18(param_1,param_2 + 1);
    }
    else {
      FUN_104a82c88(param_1);
    }
  }
  return param_1;
}



/* Entry: 104a82c18; end: 104a82c87;  */

ulong * FUN_104a82c18(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = param_1 + 1;
  if (*param_1 != 0) {
    func_0x00010047c654();
    puVar1 = (ulong *)*param_1;
    if (puVar1 != (ulong *)0x0) {
      *param_1 = 0;
      if (((ulong)puVar1 & 1) != 0) {
        func_0x00010084dad0();
      }
    }
    return puVar1;
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    func_0x000107c60e14(*puVar1);
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  param_1[3] = param_2[2];
  param_1[2] = uVar3;
  *puVar1 = uVar2;
  *(undefined1 *)((long)param_2 + 0x17) = 0;
  *(undefined1 *)param_2 = 0;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    func_0x000107c60e14(param_1[4]);
  }
  uVar3 = param_2[4];
  uVar2 = param_2[3];
  param_1[6] = param_2[5];
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  *(undefined1 *)((long)param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    func_0x000107c60e14(param_1[7]);
  }
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[9] = param_2[8];
  param_1[8] = uVar3;
  param_1[7] = uVar2;
  *(undefined1 *)((long)param_2 + 0x47) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  func_0x00010047c9f4(param_1 + 10,param_2 + 9);
  func_0x00010047ca5c(param_1 + 0xd);
  uVar2 = param_2[0xc];
  param_1[0xe] = param_2[0xd];
  param_1[0xd] = uVar2;
  param_1[0xf] = param_2[0xe];
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  if (*(char *)((long)param_1 + 0x97) < '\0') {
    func_0x000107c60e14(param_1[0x10]);
  }
  uVar3 = param_2[0x10];
  uVar2 = param_2[0xf];
  param_1[0x12] = param_2[0x11];
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  *(undefined1 *)((long)param_2 + 0x8f) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  return puVar1;
}



/* Entry: 104a82c88; end: 104a82d23;  */

void FUN_104a82c88(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined *puStack_30;
  undefined *puStack_28;
  
  func_0x000104a82d68();
  uVar1 = *param_2;
  *param_2 = 0x36;
  uVar4 = *param_1;
  if (uVar1 == uVar4) {
    if ((uVar1 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_1 = uVar1;
    puStack_28 = (undefined *)0x36;
    if ((uVar4 & 1) == 0) goto LAB_104a82ce4;
    func_0x00010084dad0(uVar4);
  }
  uVar1 = *param_1;
LAB_104a82ce4:
  if (uVar1 != 0) {
    return;
  }
  puStack_30 = &UNK_10f6d19ac;
  puStack_28 = &UNK_10f6d196c;
  uStack_38 = 0x4a;
  uStack_34 = 2;
  func_0x00010ae77bf0(&PTR_DAT_113311b68,&uStack_34,&puStack_30,&uStack_38,&puStack_28);
  puVar3 = puStack_28;
  puVar2 = puStack_28;
  _strlen(puStack_28);
  func_0x000107c2b9b4(&puStack_30,0xd,puVar3,puVar2);
  puVar3 = (undefined *)*param_1;
  if (puStack_30 != puVar3) {
    *param_1 = (ulong)puStack_30;
    puStack_30 = (undefined *)0x36;
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
    func_0x000107c2b9b0();
    puVar3 = puStack_30;
  }
  if (((ulong)puVar3 & 1) != 0) {
    func_0x000107c2b9b0();
  }
  return;
}



/* Entry: 104a82d24; end: 104a82def;  */

void FUN_104a82d24(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)((long)param_2 + 0x2f) < '\0') {
    __ZdlPv(param_2[3]);
  }
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(*param_2);
  return;
}



/* Entry: 104a82df0; end: 104a82eb3;  */

void FUN_104a82df0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 auStack_160 [8];
  int iStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 auStack_130 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_104a82f6c(auStack_160,0,param_3);
  do {
    if (iStack_158 == 2) {
      return;
    }
    puVar1 = auStack_130;
    lVar2 = 0;
    do {
      *puVar1 = uStack_150;
      puVar1[1] = uStack_148;
      FUN_104a82eb4(auStack_160);
      puVar1 = puVar1 + 2;
      if (lVar2 == 0xf) break;
      lVar2 = lVar2 + 1;
    } while (iStack_158 != 2);
    FUN_104a82fcc(param_1,param_1[1],auStack_130,puVar1);
  } while( true );
}



/* Entry: 104a82eb4; end: 104a82f6b;  */

long * FUN_104a82eb4(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  
  while( true ) {
    if ((int)param_1[1] == 1) {
      *(undefined4 *)(param_1 + 1) = 2;
      return param_1;
    }
    lVar2 = *(long *)param_1[4];
    plVar4 = (long *)((long *)param_1[4])[1];
    plVar3 = param_1 + 5;
    lVar5 = lVar2;
    plVar6 = plVar4;
    func_0x00010082b424();
    if ((long *)(lVar2 + (long)plVar4) == plVar3) {
      *(undefined4 *)(param_1 + 1) = 1;
    }
    plVar7 = (long *)*param_1;
    if (plVar4 < plVar7) break;
    uVar8 = (long)plVar3 - (lVar2 + (long)plVar7);
    uVar1 = (long)plVar4 - (long)plVar7;
    if (uVar8 <= (ulong)((long)plVar4 - (long)plVar7)) {
      uVar1 = uVar8;
    }
    param_1[2] = lVar2 + (long)plVar7;
    param_1[3] = uVar1;
    *param_1 = (long)plVar7 + uVar1 + lVar5;
    if (uVar1 != 0) {
      return param_1;
    }
  }
  plVar4 = (long *)&UNK_10f2fca6e;
  FUN_104a6f9e8();
  *plVar4 = 0;
  *(int *)(plVar4 + 1) = (int)lVar5;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = (long)plVar6;
  *(char *)(plVar4 + 5) = (char)plVar6[2];
  lVar2 = plVar6[1];
  if (*plVar6 == 0) {
    *(undefined4 *)(plVar4 + 1) = 2;
  }
  else if ((int)lVar5 != 2) {
    FUN_104a82eb4(plVar4);
    return plVar4;
  }
  *plVar4 = lVar2;
  return plVar4;
}



/* Entry: 104a82f6c; end: 104a82fcb;  */

long * FUN_104a82f6c(long *param_1,int param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = 0;
  *(int *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = (long)param_3;
  *(char *)(param_1 + 5) = (char)param_3[2];
  lVar1 = param_3[1];
  if (*param_3 == 0) {
    *(undefined4 *)(param_1 + 1) = 2;
  }
  else if (param_2 != 2) {
    FUN_104a82eb4(param_1);
    return param_1;
  }
  *param_1 = lVar1;
  return param_1;
}



/* Entry: 104a82fcc; end: 104a831df;  */

long * FUN_104a82fcc(long *param_1,long *param_2,long *param_3,long *param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plStack_68;
  long *plStack_60;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  
  if (0 < param_5) {
    plVar2 = param_1 + 2;
    plVar3 = (long *)param_1[1];
    if (*plVar2 - (long)plVar3 >> 4 < param_5) {
      lVar5 = *param_1;
      uVar1 = param_5 + ((long)plVar3 - lVar5 >> 4);
      if (uVar1 >> 0x3c != 0) {
        FUN_104a831e0();
        if (plStack_58 != plStack_60) {
          plStack_58 = (long *)((long)plStack_58 +
                               (((long)plStack_60 - (long)plStack_58) + 0xfU & 0xfffffffffffffff0));
        }
        if (plStack_68 != (long *)0x0) {
          __ZdlPv();
        }
        __Unwind_Resume(param_1);
        plVar2 = (long *)&DAT_10f62a4d8;
        FUN_104a6fa70();
        *plVar2 = (long)&PTR_FUN_1107c2180;
        func_0x000100748390(plVar2[4]);
        plVar3 = (long *)plVar2[5];
        plVar2[5] = 0;
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 8))();
        }
        func_0x0001004c05d4(plVar2 + 2);
        return plVar2;
      }
      uVar4 = *plVar2 - lVar5;
      uVar6 = (long)uVar4 >> 3;
      if (uVar6 <= uVar1) {
        uVar6 = uVar1;
      }
      if (0x7fffffffffffffef < uVar4) {
        uVar6 = 0xfffffffffffffff;
      }
      plStack_48 = plVar2;
      if (uVar6 == 0) {
        plStack_68 = (long *)0x0;
      }
      else {
        func_0x000100477c28();
        plStack_68 = plVar2;
      }
      plStack_60 = plStack_68 + ((long)param_2 - lVar5 >> 4) * 2;
      plStack_50 = plStack_68 + uVar6 * 2;
      plStack_58 = plStack_60 + param_5 * 2;
      plVar2 = plStack_60;
      do {
        lVar5 = param_3[1];
        plVar3 = plVar2 + 2;
        *plVar2 = *param_3;
        plVar2[1] = lVar5;
        plVar2 = plVar3;
        param_3 = param_3 + 2;
      } while (plVar3 != plStack_58);
      func_0x00010014af14(param_1,&plStack_68,param_2);
      if (plStack_58 != plStack_60) {
        plStack_58 = (long *)((long)plStack_58 +
                             ((long)plStack_60 + (0xf - (long)plStack_58) & 0xfffffffffffffff0U));
      }
      param_2 = param_1;
      if (plStack_68 != (long *)0x0) {
        __ZdlPv();
      }
    }
    else {
      lVar5 = (long)plVar3 - (long)param_2 >> 4;
      plVar2 = plVar3;
      if (lVar5 < param_5) {
        plVar9 = param_3 + lVar5 * 2;
        plVar8 = plVar3;
        for (plVar7 = plVar9; plVar7 != param_4; plVar7 = plVar7 + 2) {
          lVar5 = plVar7[1];
          *plVar8 = *plVar7;
          plVar8[1] = lVar5;
          plVar2 = plVar2 + 2;
          plVar8 = plVar8 + 2;
        }
        param_1[1] = (long)plVar2;
        if ((long)plVar3 - (long)param_2 < 1) {
          return param_2;
        }
      }
      else {
        plVar9 = param_3 + param_5 * 2;
      }
      plVar7 = plVar2;
      for (plVar8 = plVar2 + param_5 * -2; plVar8 < plVar3; plVar8 = plVar8 + 2) {
        lVar5 = *plVar8;
        plVar7[1] = plVar8[1];
        *plVar7 = lVar5;
        plVar7 = plVar7 + 2;
      }
      param_1[1] = (long)plVar7;
      plVar3 = param_2;
      if (plVar2 != param_2 + param_5 * 2) {
        _memmove(plVar2 + ((long)plVar2 - (long)(param_2 + param_5 * 2) >> 4) * -2,param_2);
      }
      for (; plVar9 != param_3; param_3 = param_3 + 2) {
        lVar5 = param_3[1];
        *plVar3 = *param_3;
        plVar3[1] = lVar5;
        plVar3 = plVar3 + 2;
      }
    }
  }
  return param_2;
}



/* Entry: 104a831e0; end: 104a831f3;  */

undefined8 * FUN_104a831e0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  *puVar1 = &PTR_FUN_1107c2180;
  func_0x000100748390(puVar1[4]);
  plVar2 = (long *)puVar1[5];
  puVar1[5] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  func_0x0001004c05d4(puVar1 + 2);
  return puVar1;
}



/* Entry: 104a831f4; end: 104a8324b;  */

undefined8 * FUN_104a831f4(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1107c2180;
  func_0x000100748390(param_1[4]);
  plVar1 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x0001004c05d4(param_1 + 2);
  return param_1;
}



/* Entry: 104a8324c; end: 104a83253;  */

void FUN_104a8324c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104a83250);
  (*pcVar1)();
}



/* Entry: 104a83254; end: 104a8330b;  */

void FUN_104a83254(long *param_1)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = param_1 + 1;
  (**(code **)(*param_1 + 0x38))();
  do {
    lVar3 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar3 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (lVar3 + -1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000104a832a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



/* Entry: 104a8330c; end: 104a8330f;  */

void FUN_104a8330c(void)

{
  return;
}



/* Entry: 104a83310; end: 104a83323;  */

long * FUN_104a83310(undefined8 param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  FUN_104a6fa70();
  if (plVar1 != param_2) {
    if (*param_2 == 0) {
      FUN_104a8336c(plVar1,param_2 + 1);
    }
    else {
      FUN_104a83438(plVar1);
    }
  }
  return plVar1;
}



/* Entry: 104a83324; end: 104a8336b;  */

long * FUN_104a83324(long *param_1,long *param_2)

{
  if (param_1 != param_2) {
    if (*param_2 == 0) {
      FUN_104a8336c(param_1,param_2 + 1);
    }
    else {
      FUN_104a83438(param_1);
    }
  }
  return param_1;
}



/* Entry: 104a8336c; end: 104a83437;  */

/* WARNING: Possible PIC construction at 0x0001004c8ac8: Changing call to branch */

void FUN_104a8336c(ulong *param_1,ulong *param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  code *pcVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  int *piVar22;
  undefined8 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong *unaff_x19;
  long *plVar27;
  ulong unaff_x20;
  ulong *unaff_x21;
  ulong unaff_x22;
  long *plVar28;
  ulong unaff_x23;
  ulong unaff_x24;
  undefined8 unaff_x25;
  undefined8 *puVar29;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  undefined *unaff_x30;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  puVar9 = param_1 + 1;
  if (*param_1 == 0) {
    if (puVar9 != param_2) {
      lVar24 = param_2[1] - *param_2;
      puVar8 = (undefined1 *)register0x00000008;
      uVar14 = *param_2;
      uVar25 = param_2[1];
      do {
        uVar16 = uVar25;
        uVar15 = uVar14;
        uVar17 = (lVar24 >> 3) * -0x30c30c30c30c30c3;
        *(ulong *)(puVar8 + -0x40) = unaff_x24;
        *(ulong *)(puVar8 + -0x38) = unaff_x23;
        *(ulong *)(puVar8 + -0x30) = unaff_x22;
        *(ulong **)(puVar8 + -0x28) = unaff_x21;
        *(ulong *)(puVar8 + -0x20) = unaff_x20;
        *(ulong **)(puVar8 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar8 + -0x10) = unaff_x29;
        *(undefined **)(puVar8 + -8) = unaff_x30;
        unaff_x21 = puVar9 + 2;
        if (uVar17 <= (ulong)(((long)(*unaff_x21 - *puVar9) >> 3) * -0x30c30c30c30c30c3)) {
          lVar24 = (long)(puVar9[1] - *puVar9) >> 3;
          if ((ulong)(lVar24 * -0x30c30c30c30c30c3) < uVar17) {
            lVar24 = uVar15 + lVar24 * 8;
            FUN_104a834f4(uVar15,lVar24);
            func_0x0001004c5154(unaff_x21,lVar24,uVar16,puVar9[1]);
code_r0x0001004c89ec:
            puVar9[1] = (ulong)unaff_x21;
          }
          else {
            FUN_104a834f4(uVar15);
            uVar14 = puVar9[1];
            while (uVar14 != uVar16) {
              uVar14 = uVar14 - 0xa8;
              func_0x0001004d79ec();
            }
            puVar9[1] = uVar16;
          }
          return;
        }
        unaff_x24 = 0x186186186186186;
        func_0x0001004c886c(puVar9);
        if (uVar17 < 0x186186186186187) {
          lVar18 = (long)(puVar9[2] - *puVar9) >> 3;
          uVar14 = lVar18 * -0x6186186186186186;
          if (uVar14 < uVar17 || uVar14 + (lVar24 >> 3) * 0x30c30c30c30c30c3 == 0) {
            uVar14 = uVar17;
          }
          if (0xc30c30c30c30c2 < (ulong)(lVar18 * -0x30c30c30c30c30c3)) {
            uVar14 = unaff_x24;
          }
          func_0x0001004c5078(puVar9,uVar14);
          func_0x0001004c5154(unaff_x21,uVar15,uVar16,puVar9[1]);
          goto code_r0x0001004c89ec;
        }
        unaff_x19 = puVar9;
        FUN_104a83310();
        puVar9[1] = uVar15;
        func_0x000107c60bd8();
        puVar9[1] = uVar17;
        func_0x000107c60bd8();
        *(undefined8 *)(puVar8 + -0xa0) = unaff_x28;
        *(undefined8 *)(puVar8 + -0x98) = unaff_x27;
        *(undefined8 *)(puVar8 + -0x90) = unaff_x26;
        *(undefined8 *)(puVar8 + -0x88) = unaff_x25;
        *(undefined8 *)(puVar8 + -0x80) = 0x186186186186186;
        *(ulong *)(puVar8 + -0x78) = uVar17;
        *(ulong *)(puVar8 + -0x70) = uVar15;
        *(ulong **)(puVar8 + -0x68) = unaff_x21;
        *(ulong *)(puVar8 + -0x60) = uVar16;
        *(ulong **)(puVar8 + -0x58) = puVar9;
        *(undefined1 **)(puVar8 + -0x50) = puVar8 + -0x10;
        *(undefined **)(puVar8 + -0x48) = &UNK_1004c8a50;
        unaff_x29 = puVar8 + -0x50;
        *(undefined8 *)(puVar8 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        *(undefined8 *)(puVar8 + -0x268) = 0;
        *(undefined8 *)(puVar8 + -0x260) = 0;
        *(undefined8 *)(puVar8 + -600) = 0;
        if (unaff_x19[6] != 0 || (ulong *)(puVar8 + -0x268) == unaff_x19 + 7) {
          uVar14 = unaff_x19[0xe];
          puVar10 = (undefined8 *)0x48;
          func_0x000107c60e20();
          lVar24 = *(long *)(puVar8 + -0x268);
          uVar21 = *(undefined8 *)(puVar8 + -600);
          lVar18 = *(long *)(puVar8 + -0x260);
          *(undefined8 *)(puVar8 + -0x260) = 0;
          *(undefined8 *)(puVar8 + -600) = 0;
          *(undefined8 *)(puVar8 + -0x268) = 0;
          *(undefined8 *)(puVar8 + -0x240) = 0;
          *(long *)(puVar8 + -0x238) = lVar24;
          *(undefined8 *)(puVar8 + -0x228) = uVar21;
          *(long *)(puVar8 + -0x230) = lVar18;
          *(undefined8 *)(puVar8 + -0x250) = 0;
          *(undefined8 *)(puVar8 + -0x248) = 0;
          plVar28 = (long *)unaff_x19[5];
          *puVar10 = &PTR_FUN_1107c25f0;
          puVar10[1] = 1;
          *(ulong **)(puVar8 + -0x288) = unaff_x19;
          puVar10[2] = unaff_x19;
          puVar10[4] = 0;
          puVar10[3] = 0;
          puVar10[6] = 0;
          puVar10[5] = 0;
          *(undefined1 *)(puVar10 + 7) = 0;
          if (lVar18 - lVar24 == 0) goto code_r0x0001004c8f2c;
          lVar19 = lVar18 - lVar24 >> 3;
          if (0x555555555555555 < (ulong)(lVar19 * -0x30c30c30c30c30c3)) goto code_r0x0001004c921c;
          lVar11 = lVar19 * -0x2492492492492490;
          func_0x000107c60e20();
          puVar10[4] = lVar11;
          puVar10[5] = lVar11;
          puVar10[6] = lVar11 + lVar19 * -0x2492492492492490;
          *(ulong *)(puVar8 + -0x280) = uVar14;
          goto code_r0x0001004c8b84;
        }
        lVar24 = unaff_x19[8] - unaff_x19[7];
        puVar9 = (ulong *)(puVar8 + -0x268);
        unaff_x30 = &UNK_1004c8acc;
        puVar8 = puVar8 + -0x2c0;
        uVar14 = unaff_x19[7];
        uVar25 = unaff_x19[8];
        unaff_x20 = uVar16;
        unaff_x22 = uVar15;
        unaff_x23 = uVar17;
      } while( true );
    }
  }
  else {
    *puVar9 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    func_0x0001004c50cc(puVar9,*param_2,param_2[1],
                        ((long)(param_2[1] - *param_2) >> 3) * -0x30c30c30c30c30c3);
    uVar14 = *param_1;
    if ((uVar14 != 0) && (*param_1 = 0, (uVar14 & 1) != 0)) {
      func_0x00010084dad0();
    }
  }
  return;
code_r0x0001004c8b84:
  do {
    func_0x0001004c5150(puVar8 + -0x158,lVar24);
    func_0x0001004c5150(puVar8 + -0x200,puVar8 + -0x158);
    (**(code **)(*plVar28 + 0x10))(puVar8 + -0x208,plVar28,puVar8 + -0x200,uVar14);
    func_0x0001004d79ec(puVar8 + -0x200);
    lVar11 = *(long *)(puVar8 + -0x208);
    lVar19 = puVar10[3];
    if (lVar11 == 0) {
      if (lVar19 != 0) {
        uVar21 = puVar10[2];
        FUN_104aca84c(puVar8 + -0x220,puVar8 + -0x158);
        puVar1 = *(undefined1 **)(puVar8 + -0x220);
        if (-1 < (char)puVar8[-0x209]) {
          puVar1 = puVar8 + -0x220;
        }
        *(undefined8 *)(puVar8 + -0x2b8) = uVar21;
        *(undefined1 **)(puVar8 + -0x2b0) = puVar1;
        *(long *)(puVar8 + -0x2c0) = lVar19;
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                            ,0x17f,1,"[%s %p] could not create subchannel for address %s, ignoring")
        ;
        if ((char)puVar8[-0x209] < '\0') {
          func_0x000107c60e14(*(undefined8 *)(puVar8 + -0x220));
        }
        goto code_r0x0001004c8d60;
      }
    }
    else {
      if (lVar19 != 0) {
        *(undefined8 *)(puVar8 + -0x290) = puVar10[2];
        lVar2 = puVar10[4];
        lVar3 = puVar10[5];
        FUN_104aca84c(puVar8 + -0x220,puVar8 + -0x158);
        puVar1 = *(undefined1 **)(puVar8 + -0x220);
        if (-1 < (char)puVar8[-0x209]) {
          puVar1 = puVar8 + -0x220;
        }
        *(long *)(puVar8 + -0x2a0) = lVar11;
        *(undefined1 **)(puVar8 + -0x298) = puVar1;
        *(undefined8 **)(puVar8 + -0x2b0) = puVar10;
        *(long *)(puVar8 + -0x2a8) = (lVar3 - lVar2 >> 4) * -0x5555555555555555;
        *(long *)(puVar8 + -0x2c0) = lVar19;
        *(undefined8 *)(puVar8 + -0x2b8) = *(undefined8 *)(puVar8 + -0x290);
        func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                            ,0x186,1,
                            "[%s %p] subchannel list %p index %lu: Created subchannel %p for address %s"
                           );
        if ((char)puVar8[-0x209] < '\0') {
          func_0x000107c60e14(*(undefined8 *)(puVar8 + -0x220));
        }
        uVar14 = *(ulong *)(puVar8 + -0x280);
      }
      puVar13 = (undefined8 *)puVar10[5];
      if (puVar13 < (undefined8 *)puVar10[6]) {
        puVar13[3] = 0;
        puVar13[2] = 0;
        puVar13[5] = 0;
        puVar13[4] = 0;
        puVar20 = puVar13 + 6;
        puVar13[1] = 0;
        *puVar13 = 0;
      }
      else {
        puVar29 = (undefined8 *)puVar10[4];
        lVar19 = (long)puVar13 - (long)puVar29 >> 4;
        uVar14 = lVar19 * -0x5555555555555555 + 1;
        if (0x555555555555555 < uVar14) {
          func_0x000104a845b0();
          goto code_r0x0001004c9220;
        }
        lVar11 = (long)puVar10[6] - (long)puVar29 >> 4;
        uVar25 = lVar11 * 0x5555555555555556;
        if (uVar25 < uVar14 || uVar25 - uVar14 == 0) {
          uVar25 = uVar14;
        }
        if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar11 * -0x5555555555555555)) {
          uVar25 = 0x555555555555555;
        }
        if (uVar25 == 0) {
          lVar11 = 0;
        }
        else {
          if (0x555555555555555 < uVar25) {
            FUN_104a7757c();
            goto code_r0x0001004c9220;
          }
          lVar11 = uVar25 * 0x30;
          func_0x000107c60e20();
        }
        puVar20 = (undefined8 *)(lVar11 + lVar19 * 0x10);
        puVar20[3] = 0;
        puVar20[2] = 0;
        puVar20[5] = 0;
        puVar20[4] = 0;
        puVar20[1] = 0;
        *puVar20 = 0;
        puVar23 = puVar20;
        if (puVar13 != puVar29) {
          do {
            uVar26 = puVar13[-5];
            uVar21 = puVar13[-6];
            puVar6 = puVar13 + -3;
            uVar30 = puVar13[-4];
            uVar32 = puVar13[-1];
            uVar31 = puVar13[-2];
            puVar13 = puVar13 + -6;
            puVar23[-3] = *puVar6;
            puVar23[-4] = uVar30;
            puVar23[-1] = uVar32;
            puVar23[-2] = uVar31;
            puVar23[-5] = uVar26;
            puVar23[-6] = uVar21;
            puVar23 = puVar23 + -6;
          } while (puVar13 != puVar29);
          puVar13 = (undefined8 *)puVar10[4];
        }
        puVar20 = puVar20 + 6;
        puVar10[4] = puVar23;
        puVar10[5] = puVar20;
        puVar10[6] = lVar11 + uVar25 * 0x30;
        if (puVar13 != (undefined8 *)0x0) {
          func_0x000107c60e14(puVar13);
        }
        uVar14 = *(ulong *)(puVar8 + -0x280);
      }
      puVar10[5] = puVar20;
      uVar21 = *(undefined8 *)(puVar8 + -0x208);
      *(undefined8 *)(puVar8 + -0x208) = 0;
      puVar20[-4] = uVar21;
      puVar20[-3] = 0;
      *(undefined1 *)(puVar20 + -2) = 0;
      *(undefined1 *)((long)puVar20 + -0xc) = 0;
      puVar20[-1] = 0;
      puVar20[-6] = &PTR_FUN_1107c2620;
      puVar20[-5] = puVar10;
code_r0x0001004c8d60:
      plVar12 = *(long **)(puVar8 + -0x208);
      if (plVar12 != (long *)0x0) {
        plVar27 = plVar12 + 1;
        do {
          lVar19 = *plVar27;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar5) {
            *plVar27 = lVar19 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar19 + -1 == 0) {
          (**(code **)(*plVar12 + 8))();
        }
      }
    }
    func_0x0001004d79ec(puVar8 + -0x158);
    lVar24 = lVar24 + 0xa8;
  } while (lVar24 != lVar18);
  lVar24 = puVar10[4];
  lVar18 = puVar10[5];
  do {
    if (lVar24 == lVar18) {
code_r0x0001004c8f2c:
      *(undefined1 **)(puVar8 + -0x158) = puVar8 + -0x238;
      func_0x0001004c4cbc(puVar8 + -0x158);
      *puVar10 = &PTR_FUN_1107c2578;
      *(undefined1 *)((long)puVar10 + 0x39) = 0;
      puVar10[8] = 0;
      lVar24 = *(long *)(puVar8 + -0x288);
      plVar28 = (long *)(lVar24 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
        if (bVar5) {
          *plVar28 = *plVar28 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(undefined1 **)(puVar8 + -0x158) = puVar8 + -0x250;
      func_0x0001004c4cbc(puVar8 + -0x158);
      plVar12 = (long *)(lVar24 + 0x80);
      puVar13 = (undefined8 *)*plVar12;
      *plVar12 = (long)puVar10;
      if (puVar13 != (undefined8 *)0x0) {
        (**(code **)*puVar13)();
        puVar10 = (undefined8 *)*plVar12;
      }
      if (puVar10[5] == puVar10[4]) {
        uVar14 = *(ulong *)(lVar24 + 0x30);
        if (uVar14 == 0) {
          *(char **)(puVar8 + -0x158) = "empty address list: ";
          *(undefined8 *)(puVar8 + -0x150) = 0x14;
          uVar14 = *(ulong *)(lVar24 + 0x60);
          plVar28 = (long *)*(long *)(lVar24 + 0x58);
          if (-1 < (char)*(byte *)(lVar24 + 0x6f)) {
            uVar14 = (ulong)*(byte *)(lVar24 + 0x6f);
            plVar28 = (long *)(lVar24 + 0x58);
          }
          *(long **)(puVar8 + -0x200) = plVar28;
          *(ulong *)(puVar8 + -0x1f8) = uVar14;
          func_0x00010047c83c(puVar8 + -0x220,puVar8 + -0x158,puVar8 + -0x200);
          uVar14 = *(ulong *)(puVar8 + -0x218);
          puVar1 = *(undefined1 **)(puVar8 + -0x220);
          if (-1 < (char)puVar8[-0x209]) {
            uVar14 = (ulong)(byte)puVar8[-0x209];
            puVar1 = puVar8 + -0x220;
          }
          func_0x000107c2b9cc(puVar8 + -0x238,puVar1,uVar14);
          if ((char)puVar8[-0x209] < '\0') {
            func_0x000107c60e14(*(undefined8 *)(puVar8 + -0x220));
          }
        }
        else {
          *(ulong *)(puVar8 + -0x238) = uVar14;
          if ((uVar14 & 1) != 0) {
            piVar22 = (int *)(uVar14 - 1);
            do {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
              if (bVar5) {
                *piVar22 = *piVar22 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
        }
        plVar28 = *(long **)(lVar24 + 0x28);
        puVar10 = (undefined8 *)0x10;
        func_0x000107c60e20();
        uVar14 = *(ulong *)(puVar8 + -0x238);
        if ((uVar14 & 1) == 0) {
          *puVar10 = &PTR_FUN_1107c1550;
          puVar10[1] = uVar14;
        }
        else {
          piVar22 = (int *)(uVar14 - 1);
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar5) {
              *piVar22 = *piVar22 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          *puVar10 = &PTR_FUN_1107c1550;
          puVar10[1] = uVar14;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar22,0x10);
            if (bVar5) {
              *piVar22 = *piVar22 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          func_0x00010084dad0();
        }
        *(undefined8 **)(puVar8 + -0x270) = puVar10;
        (**(code **)(*plVar28 + 0x18))(plVar28,3,puVar8 + -0x238,puVar8 + -0x270);
        plVar28 = *(long **)(puVar8 + -0x270);
        *(undefined8 *)(puVar8 + -0x270) = 0;
        if (plVar28 != (long *)0x0) {
          (**(code **)(*plVar28 + 8))();
        }
        if ((*(ulong *)(puVar8 + -0x238) & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      else if (*(long *)(lVar24 + 0x78) == 0) {
        plVar27 = *(long **)(lVar24 + 0x28);
        *(undefined8 *)(puVar8 + -0x158) = 0;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
          if (bVar5) {
            *plVar28 = *plVar28 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        puVar10 = (undefined8 *)0x18;
        func_0x000107c60e20();
        *puVar10 = &PTR_DAT_1107c21d0;
        puVar10[1] = lVar24;
        *(undefined1 *)(puVar10 + 2) = 0;
        *(undefined8 **)(puVar8 + -0x278) = puVar10;
        (**(code **)(*plVar27 + 0x18))(plVar27,1,puVar8 + -0x158,puVar8 + -0x278);
        plVar28 = *(long **)(puVar8 + -0x278);
        *(undefined8 *)(puVar8 + -0x278) = 0;
        if (plVar28 != (long *)0x0) {
          (**(code **)(*plVar28 + 8))();
        }
        if ((*(ulong *)(puVar8 + -0x158) & 1) != 0) {
          func_0x00010084dad0();
        }
      }
      if ((*(long *)(*plVar12 + 0x28) == *(long *)(*plVar12 + 0x20)) ||
         (*(long *)(lVar24 + 0x88) == 0)) {
        *(undefined8 *)(lVar24 + 0x88) = 0;
        func_0x0001004d8960(lVar24 + 0x78,plVar12);
      }
      *(undefined1 **)(puVar8 + -0x158) = puVar8 + -0x268;
      func_0x0001004c4cbc(puVar8 + -0x158);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0xb0)) {
        return;
      }
      func_0x000107c60e78();
code_r0x0001004c921c:
      func_0x000104a845b0();
code_r0x0001004c9220:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1004c9224);
      (*pcVar7)();
    }
    lVar11 = *(long *)(lVar24 + 8);
    lVar19 = *(long *)(lVar11 + 0x18);
    if (lVar19 != 0) {
      uVar21 = *(undefined8 *)(lVar11 + 0x10);
      lVar2 = *(long *)(lVar11 + 0x20);
      uVar26 = *(undefined8 *)(lVar24 + 0x10);
      *(long *)(puVar8 + -0x2a0) = (*(long *)(lVar11 + 0x28) - lVar2 >> 4) * -0x5555555555555555;
      *(undefined8 *)(puVar8 + -0x298) = uVar26;
      *(long *)(puVar8 + -0x2b0) = lVar11;
      *(long *)(puVar8 + -0x2a8) = (lVar24 - lVar2 >> 4) * -0x5555555555555555;
      *(long *)(puVar8 + -0x2c0) = lVar19;
      *(undefined8 *)(puVar8 + -0x2b8) = uVar21;
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                          ,0x13f,1,
                          "[%s %p] subchannel list %p index %lu of %lu (subchannel %p): starting watch"
                         );
    }
    if (*(long *)(lVar24 + 0x18) != 0) {
      *(char **)(puVar8 + -0x2c0) = "pending_watcher_ == nullptr";
      func_0x0001004686cc("/var/lib/snapci/workspace/checkouts/Snapchat/GrpcCpp/grpc/src/core/ext/filters/client_channel/lb_policy/subchannel_list.h"
                          ,0x146,2,"assertion failed: %s");
      func_0x000107c60ebc();
      goto code_r0x0001004c9220;
    }
    puVar13 = (undefined8 *)0x18;
    func_0x000107c60e20();
    lVar19 = *(long *)(lVar24 + 8);
    plVar28 = (long *)(lVar19 + 8);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar5) {
        *plVar28 = *plVar28 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    *puVar13 = &PTR_DAT_1107c26d8;
    puVar13[1] = lVar24;
    puVar13[2] = lVar19;
    *(undefined8 **)(lVar24 + 0x18) = puVar13;
    plVar28 = *(long **)(lVar24 + 0x10);
    *(undefined8 **)(puVar8 + -0x220) = puVar13;
    (**(code **)(*plVar28 + 0x10))(plVar28,puVar8 + -0x220);
    plVar28 = *(long **)(puVar8 + -0x220);
    *(undefined8 *)(puVar8 + -0x220) = 0;
    if (plVar28 != (long *)0x0) {
      (**(code **)(*plVar28 + 8))();
    }
    lVar24 = lVar24 + 0x30;
  } while( true );
}



/* Entry: 104a83438; end: 104a834f3;  */

void FUN_104a83438(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  ulong *puVar4;
  ulong *puStack_28;
  
  if (*param_1 == 0) {
    puStack_28 = param_1 + 1;
    func_0x0001004c4cbc(&puStack_28);
  }
  param_2 = (ulong *)*param_2;
  if (((ulong)param_2 & 1) != 0) {
    piVar3 = (int *)((long)param_2 - 1);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar2) {
        *piVar3 = *piVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar4 = (ulong *)*param_1;
  if (param_2 == puVar4) {
    puStack_28 = param_2;
    if (((ulong)param_2 & 1) != 0) {
      func_0x00010084dad0();
    }
  }
  else {
    *param_1 = (ulong)param_2;
    puStack_28 = (ulong *)0x36;
    if (((ulong)puVar4 & 1) == 0) goto LAB_104a834bc;
    func_0x00010084dad0(puVar4);
  }
  param_2 = (ulong *)*param_1;
LAB_104a834bc:
  if (param_2 == (ulong *)0x0) {
    func_0x00010ae77b40(param_1);
  }
  return;
}



/* Entry: 104a834f4; end: 104a8354f;  */

undefined1  [16] FUN_104a834f4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 0xa8) {
    FUN_104aca6c4(param_3,param_1);
    param_3 = param_3 + 0xa8;
    lVar1 = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 104a83550; end: 104a83557;  */

void FUN_104a83550(void)

{
  return;
}



/* Entry: 104a83558; end: 104a8358b;  */

void FUN_104a83558(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_1107c2240;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 104a8358c; end: 104a8358f;  */

void FUN_104a8358c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a83590; end: 104a835cb;  */

long FUN_104a83590(long param_1,undefined8 param_2)

{
  FUN_104a7385c(param_2,&PTR_DAT_1107c22a0);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 104a835cc; end: 104a835d7;  */

undefined ** FUN_104a835cc(void)

{
  return &PTR_DAT_1107c22a0;
}



/* Entry: 104a835d8; end: 104a8365b;  */

void FUN_104a835d8(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x38) = 1;
  if (*(long *)(param_1 + 0x48) != 0) {
    func_0x000104abe9c0(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x20),
                        *(undefined8 *)(param_1 + 0x20));
    puVar1 = *(undefined8 **)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    func_0x000104abe9c0(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x20),
                        *(undefined8 *)(param_1 + 0x20));
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
  return;
}



/* Entry: 104a8365c; end: 104a8369f;  */

long * FUN_104a8365c(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_1 = lVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)();
  }
  return param_1;
}



/* Entry: 104a836a0; end: 104a8378b;  */

void FUN_104a836a0(long param_1)

{
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x28))();
    if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104a836dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x50) + 0x28))();
      return;
    }
  }
  return;
}



/* Entry: 104a8378c; end: 104a8381f;  */

undefined8 * FUN_104a8378c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c22c0;
  puVar4 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[8];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  *param_1 = &PTR_FUN_1107c2180;
  func_0x000100748390(param_1[4]);
  plVar5 = (long *)param_1[5];
  param_1[5] = 0;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
  }
  func_0x0001004c05d4(param_1 + 2);
  return param_1;
}



/* Entry: 104a83820; end: 104a838b7;  */

void FUN_104a83820(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_1107c22c0;
  puVar4 = (undefined8 *)param_1[10];
  param_1[10] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  puVar4 = (undefined8 *)param_1[9];
  param_1[9] = 0;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)();
  }
  plVar5 = (long *)param_1[8];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  FUN_104a831f4(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104a838b8; end: 104a838c3;  */

char * FUN_104a838b8(void)

{
  return "child_policy_handler";
}



/* Entry: 104a838c4; end: 104a8397f;  */

undefined8 * FUN_104a838c4(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_1107c2338;
  plVar4 = (long *)param_1[1];
  if (plVar4 != (long *)0x0) {
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
    if (lVar5 + -1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  param_1[1] = 0;
  return param_1;
}



/* Entry: 104a83980; end: 104a839cb;  */

void FUN_104a83980(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    lVar2 = *(long *)(lVar1 + 0x50);
    if (lVar2 == 0) {
      lVar2 = *(long *)(lVar1 + 0x48);
    }
    if (*(long *)(param_1 + 0x10) == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000104a839b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(lVar1 + 0x28) + 0x20))();
      return;
    }
  }
  return;
}



/* Entry: 104a839cc; end: 104a83a47;  */

void FUN_104a839cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  
  if ((*(char *)(*(long *)(param_1 + 8) + 0x38) == '\0') &&
     ((uVar1 = param_1, func_0x0001004d8848(), (uVar1 & 1) != 0 ||
      (uVar1 = param_1, func_0x0001004c94c4(), (int)uVar1 != 0)))) {
    plVar2 = *(long **)(*(long *)(param_1 + 8) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x000104a83a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 104a83a48; end: 104a83a4f;  */

undefined1  [16]
FUN_104a83a48(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long alStack_88 [8];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = (long *)0x2;
  uVar4 = param_2;
  func_0x0001004686b8();
  if ((int)plVar1 != 0) {
    plVar1 = alStack_88;
    func_0x000107c616d0(plVar1,0x40,param_4,&stack0x00000000);
    if ((int)(uint)plVar1 < 0) {
      plVar3 = (long *)0x0;
      plVar1 = (long *)0x0;
    }
    else if ((uint)plVar1 < 0x40) {
      plVar1 = (long *)0x0;
      plVar3 = alStack_88;
    }
    else {
      plVar1 = (long *)(((ulong)plVar1 & 0xffffffff) + 1);
      func_0x000100460200();
      func_0x000107c616d0();
      plVar3 = plVar1;
    }
    FUN_104a6e9e0(param_1,param_2,2,plVar3);
    func_0x000100460314();
    uVar4 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = plVar1;
    return auVar6;
  }
  func_0x000107c60e78();
  if (uVar4 >> 0x3d == 0) {
    lVar2 = uVar4 << 3;
    func_0x000107c60e20(lVar2);
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
  FUN_104a7757c();
  lVar2 = plVar1[1];
  lVar5 = plVar1[2];
  while (lVar5 != lVar2) {
    plVar1[2] = lVar5 + -8;
    plVar3 = *(long **)(lVar5 + -8);
    *(undefined8 *)(lVar5 + -8) = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    lVar5 = plVar1[2];
  }
  if (*plVar1 != 0) {
    func_0x000107c60e14();
  }
  auVar8._8_8_ = uVar4;
  auVar8._0_8_ = plVar1;
  return auVar8;
}



/* Entry: 104a83a50; end: 104a83b63;  */

void FUN_104a83a50(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar6 = *(long **)(param_1 + 0x10);
  if ((*(byte *)(param_2 + 2) & 1) != 0) {
    puVar4 = *(uint **)param_2[1];
    if ((*puVar4 >> 0x15 & 1) != 0) {
      lVar7 = *(long *)(puVar4 + 0x22);
      *puVar4 = *puVar4 & 0xffdfffff;
      if (lVar7 != 0) {
        plVar5 = (long *)*plVar6;
        if (plVar5 != (long *)0x0) {
          plVar1 = plVar5 + 1;
          do {
            lVar8 = *plVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar8 + -1 == 0) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
        *plVar6 = lVar7;
        lVar7 = *param_2;
        plVar6[2] = (long)FUN_104a83bdc;
        plVar6[3] = (long)plVar6;
        plVar6[4] = 0;
        plVar6[5] = lVar7;
        *param_2 = (long)(plVar6 + 1);
      }
    }
  }
  if ((*(byte *)(param_2 + 2) >> 3 & 1) != 0) {
    lVar7 = *(long *)(param_2[1] + 0x48);
    plVar6[8] = (long)FUN_104a83c68;
    plVar6[9] = (long)plVar6;
    plVar6[10] = 0;
    plVar6[0xb] = lVar7;
    *(long **)(param_2[1] + 0x48) = plVar6 + 7;
  }
                    /* WARNING: Could not recover jumptable at 0x000100614e9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104a83b64; end: 104a83bcf;  */

void FUN_104a83b64(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if (*plVar5 != 0) {
    func_0x000104a8412c(*plVar5,(char)plVar5[6] == '\0',(char)plVar5[0xc]);
    plVar5 = (long *)*plVar5;
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
      if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104a83bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 8))();
        return;
      }
    }
  }
  return;
}



/* Entry: 104a83bd0; end: 104a83bdb;  */

void FUN_104a83bd0(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 104a83bdc; end: 104a83c67;  */

void FUN_104a83bdc(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_2;
  if (uStack_30 == 0) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uStack_30 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if ((uStack_30 & 1) != 0) {
      piVar4 = (int *)(uStack_30 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  func_0x00010082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a83c68; end: 104a83cf3;  */

void FUN_104a83c68(long param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uStack_30;
  undefined1 uStack_21;
  
  uStack_30 = *param_2;
  if (uStack_30 == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    uStack_30 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    if ((uStack_30 & 1) != 0) {
      piVar4 = (int *)(uStack_30 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar2) {
          *piVar4 = *piVar4 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
  }
  func_0x00010082b8d4(&uStack_21,uVar3,&uStack_30);
  if ((uStack_30 & 1) != 0) {
    func_0x00010084dad0();
  }
  return;
}



/* Entry: 104a83cf4; end: 104a83d47;  */

void FUN_104a83cf4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000100474f14(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 104a83d48; end: 104a83e6f;  */

void FUN_104a83d48(ulong *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 in_x7;
  ulong *puVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong *puStack_58;
  ulong *puStack_50;
  ulong *puStack_48;
  ulong *puStack_40;
  ulong *puStack_38;
  
  puVar3 = param_1 + 2;
  puVar4 = (ulong *)param_1[1];
  if (puVar4 < (ulong *)*puVar3) {
    uVar5 = *param_2;
    *puVar4 = uVar5;
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puVar4 = puVar4 + 1;
    param_1[1] = (ulong)puVar4;
  }
  else {
    lVar9 = (long)((long)puVar4 - *param_1) >> 3;
    uVar5 = lVar9 + 1;
    if (uVar5 >> 0x3d != 0) {
      puVar3 = param_2;
      FUN_104a83ee4();
      FUN_104a84040(&puStack_58);
      puVar4 = param_1;
      __Unwind_Resume();
      uVar5 = puVar4[1];
      func_0x000104a83f2c(puVar4 + 2,uVar5,uVar5,*puVar4,*puVar4,puVar3[1],puVar3[1],in_x7,param_2,
                          param_1,&stack0xfffffffffffffff0,FUN_104a83e70);
      puVar3[1] = uVar5;
      uVar8 = *puVar4;
      *puVar4 = uVar5;
      puVar3[1] = uVar8;
      uVar5 = puVar4[1];
      puVar4[1] = puVar3[2];
      puVar3[2] = uVar5;
      uVar5 = puVar4[2];
      puVar4[2] = puVar3[3];
      puVar3[3] = uVar5;
      *puVar3 = puVar3[1];
      return;
    }
    uVar7 = (long)*puVar3 - *param_1;
    uVar8 = (long)uVar7 >> 2;
    if (uVar8 <= uVar5) {
      uVar8 = uVar5;
    }
    if (0x7ffffffffffffff7 < uVar7) {
      uVar8 = 0x1fffffffffffffff;
    }
    puStack_38 = puVar3;
    if (uVar8 == 0) {
      puStack_58 = (ulong *)0x0;
    }
    else {
      FUN_104a83ef8();
      puStack_58 = puVar3;
    }
    puStack_50 = puStack_58 + lVar9;
    puStack_40 = puStack_58 + uVar8;
    uVar5 = *param_2;
    *puStack_50 = uVar5;
    if ((uVar5 & 1) != 0) {
      piVar6 = (int *)(uVar5 - 1);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar6,0x10);
        if (bVar2) {
          *piVar6 = *piVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    puStack_48 = puStack_50 + 1;
    FUN_104a83e70(param_1,&puStack_58);
    puVar4 = (ulong *)param_1[1];
    FUN_104a84040(&puStack_58);
  }
  param_1[1] = (ulong)puVar4;
  return;
}



/* Entry: 104a83e70; end: 104a83ee3;  */

void FUN_104a83e70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  func_0x000104a83f2c(param_1 + 2,uVar2,uVar2,*param_1,*param_1,param_2[1],param_2[1]);
  param_2[1] = uVar2;
  uVar1 = *param_1;
  *param_1 = uVar2;
  param_2[1] = uVar1;
  uVar2 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar2;
  *param_2 = param_2[1];
  return;
}



/* Entry: 104a83ee4; end: 104a83ef7;  */

undefined1  [16]
FUN_104a83ee4(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &DAT_10f62a4d8;
  FUN_104a6fa70();
  if (param_2 >> 0x3d == 0) {
    lVar2 = param_2 << 3;
    __Znwm(lVar2);
    auVar4._8_8_ = param_2;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  FUN_104a7757c();
  puStack_88 = &uStack_70;
  puStack_80 = &uStack_60;
  puStack_58 = param_7;
  puVar3 = param_7;
  while (param_3 != param_5) {
    param_3 = param_3 + -1;
    puStack_58 = puStack_58 + -1;
    *puStack_58 = *param_3;
    *param_3 = 0x36;
    puVar3 = puVar3 + -1;
  }
  uStack_78 = 1;
  puStack_90 = puVar1;
  uStack_70 = param_6;
  puStack_68 = param_7;
  uStack_60 = param_6;
  FUN_104a83fbc(&puStack_90);
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = param_6;
  return auVar5;
}



/* Entry: 104a83ef8; end: 104a83fbb;  */

undefined1  [16]
FUN_104a83ef8(undefined8 param_1,ulong param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 *puStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  
  if (param_2 >> 0x3d == 0) {
    lVar1 = param_2 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_2;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  FUN_104a7757c();
  puStack_78 = &uStack_60;
  puStack_70 = &uStack_50;
  puStack_48 = param_7;
  puVar2 = param_7;
  while (param_3 != param_5) {
    param_3 = param_3 + -1;
    puStack_48 = puStack_48 + -1;
    *puStack_48 = *param_3;
    *param_3 = 0x36;
    puVar2 = puVar2 + -1;
  }
  uStack_68 = 1;
  uStack_80 = param_1;
  uStack_60 = param_6;
  puStack_58 = param_7;
  uStack_50 = param_6;
  FUN_104a83fbc(&uStack_80);
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = param_6;
  return auVar4;
}



/* Entry: 104a83fbc; end: 104a83fef;  */

long FUN_104a83fbc(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    FUN_104a83ff0(param_1);
  }
  return param_1;
}



/* Entry: 104a83ff0; end: 104a8403f;  */

void FUN_104a83ff0(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1[2] + 8);
  lVar3 = *(long *)(param_1[1] + 8);
  if (lVar1 != lVar3) {
    uVar2 = *param_1;
    do {
      FUN_104a713e4(uVar2,lVar1);
      lVar1 = lVar1 + 8;
    } while (lVar1 != lVar3);
  }
  return;
}



/* Entry: 104a84040; end: 104a840b3;  */

long * FUN_104a84040(long *param_1)

{
  func_0x000104a84070();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}


