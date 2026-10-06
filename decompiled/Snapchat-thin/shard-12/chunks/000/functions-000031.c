/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c7311c; end: 108c73127;  */

void FUN_108c7311c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110abd7f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108c73128; end: 108c7314f;  */

void FUN_108c73128(void)

{
  FUN_108c7311c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c73150; end: 108c73153;  */

undefined8 FUN_108c73150(void)

{
  return 0;
}



/* Entry: 108c73154; end: 108c73183;  */

undefined8 FUN_108c73154(void)

{
  func_0x000107c34db0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73184; end: 108c73187;  */

undefined8 FUN_108c73184(void)

{
  return 0;
}



/* Entry: 108c73188; end: 108c731d3;  */

undefined8 FUN_108c73188(void)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34d3c();
  func_0x000107c34d50();
  func_0x000107c2a8e4();
  func_0x000107c2a8e8(*unaff_x19);
  func_0x000107c34d8c();
  func_0x000107c34d84();
  return 1;
}



/* Entry: 108c731d4; end: 108c73203;  */

undefined8 FUN_108c731d4(void)

{
  func_0x000107c34d5c();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73204; end: 108c73233;  */

undefined8 FUN_108c73204(void)

{
  func_0x000108c74af0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73234; end: 108c73263;  */

undefined8 FUN_108c73234(void)

{
  func_0x000108c74afc();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73264; end: 108c7326b;  */

void FUN_108c73264(double param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_90 [56];
  long lStack_58;
  long alStack_50 [2];
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x000100492e28(alStack_50,uVar2);
  if (alStack_50[0] != 0) {
    func_0x000100467380(0);
    func_0x00010046778c();
    func_0x000100467768();
    func_0x000100493cd8();
    func_0x00010048a654();
    lVar3 = (long)param_1;
    func_0x0001004a2704(auStack_90,lVar3);
    func_0x00010048a704();
    iVar1 = (int)uVar2 + 0x10;
    func_0x0001004a4bf8();
    lStack_58 = lVar3;
    if (iVar1 == 0) {
      func_0x0001004a4c94();
      func_0x0001004a4ca0();
    }
    else {
      func_0x0001004a4c94();
      func_0x0001004a4ca0();
    }
    func_0x0001004a21bc(auStack_90);
  }
  func_0x00010048b4a0(alStack_50);
  return;
}



/* Entry: 108c7326c; end: 108c7328b;  */

void FUN_108c7326c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c2a8e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c7328c; end: 108c7328f;  */

void FUN_108c7328c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108c73290; end: 108c732d3;  */

undefined8 * FUN_108c73290(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110abed50;
  param_1[1] = param_2;
  param_1[2] = &DAT_11383d918;
  param_1[3] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_108c732d4(param_1,param_3);
  return param_1;
}



/* Entry: 108c732d4; end: 108c73337;  */

long FUN_108c732d4(long param_1,long param_2)

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
      FUN_108c7924c(param_1);
    }
    else {
      func_0x000108c79214(param_1);
    }
  }
  return param_1;
}



/* Entry: 108c73338; end: 108c73353;  */

ulong * FUN_108c73338(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x18);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x000100063c9c();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      func_0x00010006903c();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 108c73354; end: 108c73367;  */

void FUN_108c73354(void)

{
  FUN_108c73368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c73368; end: 108c733cb;  */

undefined8 * FUN_108c73368(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_DAT_110abd910;
  plVar2 = (long *)param_1[3];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000107c2a888(lVar1);
    func_0x000107c34de8();
  }
  lVar1 = param_1[1];
  param_1[1] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108c733cc; end: 108c7351f;  */

void FUN_108c733cc(long param_1)

{
  func_0x000107c34da8();
  if (param_1 != 0) {
    func_0x000107c34d30();
  }
  return;
}



/* Entry: 108c73520; end: 108c73547;  */

void FUN_108c73520(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 uStack_11;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0xc0);
  func_0x000107c34d64((&PTR_FUN_110abdae0)[*(byte *)(lVar1 + 0xa0)],&uStack_11,param_2,lVar1);
  FUN_108c713ec(1);
  return;
}



/* Entry: 108c73548; end: 108c7356b;  */

void FUN_108c73548(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c34e20();
  func_0x000108c74b60();
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if ((*(char *)(lVar1 + 0xa1) == '\x01') && (*(long *)(lVar1 + 0x58) != 0)) {
    func_0x000107c34dcc();
    *(undefined1 *)(lVar1 + 0xa1) = 0;
  }
  return;
}



/* Entry: 108c7356c; end: 108c73577;  */

void FUN_108c7356c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_DAT_110abd980;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



/* Entry: 108c73578; end: 108c73633;  */

void FUN_108c73578(void)

{
  undefined1 in_ZR;
  long *plVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  int extraout_w12;
  long lStack_68;
  long lStack_60;
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_40;
  undefined8 uStack_28;
  
  func_0x000107c34d40();
  plVar1 = &lStack_68;
  uStack_28 = extraout_x8;
  func_0x000107c34e2c();
  if (lStack_68 != 0) {
    plVar1 = *(long **)(lStack_68 + 200);
    uStack_40 = 0;
    if (lStack_60 != 0) {
      do {
        func_0x000107c34d88();
        uStack_40 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    pcStack_58 = FUN_108c73634;
    ppuStack_50 = &PTR_DAT_110abd9b0;
    func_0x00010b281378();
    func_0x000107c34d6c(ppuStack_50);
    func_0x000107c34db4();
  }
  func_0x000107c34dd8();
  func_0x000107c34d1c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000108c74b34(&pcStack_58);
    func_0x000107c34db4();
    func_0x000107c34dd8();
    func_0x000108c74b2c();
                    /* WARNING: Could not recover jumptable at 0x000108c73640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)plVar1[2] + 0x18))();
    return;
  }
  return;
}



/* Entry: 108c73634; end: 108c73663;  */

void FUN_108c73634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c73640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
  return;
}



/* Entry: 108c73664; end: 108c7377b;  */

void FUN_108c73664(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long *plVar4;
  undefined8 extraout_x8;
  long lVar5;
  undefined8 extraout_x9;
  int extraout_w12;
  long lStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_80;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_38;
  
  func_0x000107c34d40();
  plVar4 = &lStack_a8;
  uStack_38 = extraout_x8;
  func_0x000107c34e2c();
  if (lStack_a8 != 0) {
    plVar4 = *(long **)(lStack_a8 + 200);
    if (lStack_a0 == 0) {
      lVar5 = 0;
    }
    else {
      plVar1 = (long *)(lStack_a0 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        lVar5 = lStack_a0;
      } while (cVar2 != '\0');
    }
    pcStack_68 = FUN_108c7377c;
    ppuStack_60 = &PTR_DAT_110abd9e0;
    lStack_58 = lStack_a8;
    lStack_50 = lStack_a0;
    uStack_80 = 0;
    if (lVar5 != 0) {
      do {
        func_0x000107c34d88();
        uStack_80 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    pcStack_98 = FUN_108c7379c;
    ppuStack_90 = &PTR_FUN_110abd9f8;
    func_0x00010b281520();
    func_0x000107c34d34(ppuStack_90);
    func_0x000107c34db4();
    func_0x000107c34d6c(ppuStack_60);
    func_0x000107c34dd8();
  }
  func_0x000107c34df8();
  func_0x000107c34d1c(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107c34d34(ppuStack_90);
    func_0x000107c34db4();
    func_0x000107c34d48(ppuStack_60);
    func_0x000107c34dd8();
    func_0x000107c34df8();
    func_0x000108c74b2c();
                    /* WARNING: Could not recover jumptable at 0x000108c73788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)plVar4[2] + 0x10))();
    return;
  }
  return;
}



/* Entry: 108c7377c; end: 108c7379b;  */

void FUN_108c7377c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108c73788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 108c7379c; end: 108c737bf;  */

void FUN_108c7379c(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c34e20();
  func_0x000108c74b60();
  lVar1 = *(long *)(unaff_x19 + 0x10);
  if ((*(char *)(lVar1 + 0xa1) == '\x01') && (*(long *)(lVar1 + 0x58) != 0)) {
    func_0x000107c34dcc();
    *(undefined1 *)(lVar1 + 0xa1) = 0;
  }
  return;
}



/* Entry: 108c737c0; end: 108c737fb;  */

void FUN_108c737c0(long param_1)

{
  param_1 = param_1 + 8;
  func_0x00010048b470();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 108c737fc; end: 108c738d3;  */

undefined8
FUN_108c737fc(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  byte *unaff_x19;
  long lVar3;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  func_0x000107c34d20();
  uVar2 = 4;
  *param_5 = 4;
  lVar3 = *param_3;
  if (*(char *)(lVar3 + 0x90) == '\x01') {
    func_0x000108c74bb0();
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    puVar1 = (undefined8 *)0x8;
    __Znwm();
    *puVar1 = &PTR_FUN_110abdaa8;
    puStack_78 = puVar1;
    FUN_108c7281c(lVar3,&stack0xffffffffffffffa8,&uStack_70,&puStack_78);
    if (puStack_78 != (undefined8 *)0x0) {
      func_0x000107c34d30();
    }
    func_0x000108c74be0();
    func_0x000107c34dd0();
    uVar2 = (ulong)*unaff_x19;
  }
  func_0x000107c34d14((&PTR_FUN_110abda60)[uVar2],&stack0xffffffffffffffa8);
  return 1;
}



/* Entry: 108c738d4; end: 108c73953;  */

undefined8 FUN_108c738d4(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000107c34e48();
  func_0x000107c34d20();
  func_0x000107c34e00();
  FUN_108c73a60(*param_3);
  func_0x000108c74b80();
  func_0x000108c74ab4();
  return 1;
}



/* Entry: 108c73954; end: 108c73983;  */

undefined8 FUN_108c73954(void)

{
  func_0x000107c34db0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73984; end: 108c73987;  */

undefined8 FUN_108c73984(void)

{
  return 0;
}



/* Entry: 108c73988; end: 108c739b7;  */

undefined8 FUN_108c73988(void)

{
  func_0x000107c34d58();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c739b8; end: 108c739e7;  */

undefined8 FUN_108c739b8(void)

{
  func_0x000107c34d5c();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c739e8; end: 108c73a17;  */

undefined8 FUN_108c739e8(void)

{
  func_0x000108c74af0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73a18; end: 108c73a47;  */

undefined8 FUN_108c73a18(void)

{
  func_0x000108c74afc();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73a48; end: 108c73a5f;  */

void FUN_108c73a48(void)

{
  return;
}



/* Entry: 108c73a60; end: 108c73a93;  */

void FUN_108c73a60(long param_1)

{
  FUN_108c74f5c(*(long *)(param_1 + 0xa8) + 0x18);
  FUN_108c73a94((long *)(param_1 + 0xa8));
  func_0x000108c71934(*(undefined4 *)(param_1 + 0xd8));
  func_0x000108c71854();
  func_0x000108c71894();
  func_0x000108c71908();
  func_0x000108c718ec();
  func_0x000108c7186c();
  func_0x000107c34d08();
  func_0x000108c718f8();
  func_0x000108c71900();
  return;
}



/* Entry: 108c73a94; end: 108c73abb;  */

void FUN_108c73a94(undefined8 *param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  func_0x000107c2a8ec(&uStack_20);
  return;
}



/* Entry: 108c73abc; end: 108c73abf;  */

undefined8 FUN_108c73abc(void)

{
  return 0;
}



/* Entry: 108c73ac0; end: 108c73af7;  */

undefined8 FUN_108c73ac0(void)

{
  undefined1 *in_x4;
  
  *in_x4 = 0;
  FUN_108c73b54();
  return 1;
}



/* Entry: 108c73af8; end: 108c73b33;  */

undefined8 FUN_108c73af8(void)

{
  func_0x000107c34e48();
  func_0x000107c34d20();
  func_0x000108c74bc0(5);
  func_0x000108c74b80();
  func_0x000108c74ab4();
  return 1;
}



/* Entry: 108c73b34; end: 108c73b53;  */

undefined8 FUN_108c73b34(void)

{
  undefined1 *in_x4;
  
  *in_x4 = 5;
  FUN_108c73c34();
  return 1;
}



/* Entry: 108c73b54; end: 108c73b83;  */

undefined8 FUN_108c73b54(void)

{
  func_0x000107c34db0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73b84; end: 108c73b87;  */

undefined8 FUN_108c73b84(void)

{
  return 0;
}



/* Entry: 108c73b88; end: 108c73bd3;  */

undefined8 FUN_108c73b88(void)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34d3c();
  func_0x000107c34d50();
  func_0x000107c2a8e4();
  func_0x000107c2a8e8(*unaff_x19);
  func_0x000107c34d8c();
  func_0x000107c34d84();
  return 1;
}



/* Entry: 108c73bd4; end: 108c73c03;  */

undefined8 FUN_108c73bd4(void)

{
  func_0x000107c34d58();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73c04; end: 108c73c33;  */

undefined8 FUN_108c73c04(void)

{
  func_0x000107c34d5c();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73c34; end: 108c73c63;  */

undefined8 FUN_108c73c34(void)

{
  func_0x000108c74af0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73c64; end: 108c73c93;  */

undefined8 FUN_108c73c64(void)

{
  func_0x000108c74afc();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73c94; end: 108c73d3b;  */

void FUN_108c73c94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_108c72704(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xc0));
  FUN_108c730bc(*(long *)(param_1 + 0x10) + 0x108);
  lVar3 = *(long *)(param_1 + 0x10);
  if (*(long *)(lVar3 + 0xf8) != 0) {
    func_0x000108c7349c(*(undefined8 *)(lVar3 + 0xf0));
    *(undefined8 *)(lVar3 + 0xf0) = 0;
    lVar2 = *(long *)(lVar3 + 0xe8);
    for (lVar1 = 0; lVar2 != lVar1; lVar1 = lVar1 + 1) {
      *(undefined8 *)(*(long *)(lVar3 + 0xe0) + lVar1 * 8) = 0;
    }
    *(undefined8 *)(lVar3 + 0xf8) = 0;
    lVar3 = *(long *)(param_1 + 0x10);
  }
  uStack_28 = *(undefined8 *)(lVar3 + 0x40);
  uStack_30 = *(undefined8 *)(lVar3 + 0x38);
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  func_0x000107c27c4c(&uStack_30);
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000108c73d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108c73d3c; end: 108c73dd7;  */

long FUN_108c73d3c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c34e10(param_1 + 8);
  FUN_108c48174();
  lVar1 = unaff_x19;
  func_0x00010048b470();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108c73dd8; end: 108c73dff;  */

void FUN_108c73dd8(void)

{
  func_0x000108c73dcc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c73e00; end: 108c73e07;  */

undefined8 FUN_108c73e00(void)

{
  return 0;
}



/* Entry: 108c73e08; end: 108c73e1b;  */

void FUN_108c73e08(void)

{
  func_0x000108c73e24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108c73e1c; end: 108c73e2f;  */

void FUN_108c73e1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004a55f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 108c73e30; end: 108c73e5f;  */

undefined8 FUN_108c73e30(void)

{
  func_0x000107c34db0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73e60; end: 108c73e63;  */

undefined8 FUN_108c73e60(void)

{
  return 0;
}



/* Entry: 108c73e64; end: 108c73eaf;  */

undefined8 FUN_108c73e64(void)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34d3c();
  func_0x000107c34d50();
  func_0x000107c2a8e4();
  func_0x000107c2a8e8(*unaff_x19);
  func_0x000107c34d8c();
  func_0x000107c34d84();
  return 1;
}



/* Entry: 108c73eb0; end: 108c73edf;  */

undefined8 FUN_108c73eb0(void)

{
  func_0x000107c34d58();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73ee0; end: 108c73f0f;  */

undefined8 FUN_108c73ee0(void)

{
  func_0x000108c74af0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73f10; end: 108c73f3f;  */

undefined8 FUN_108c73f10(void)

{
  func_0x000108c74afc();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73f40; end: 108c73f43;  */

undefined8 FUN_108c73f40(void)

{
  return 0;
}



/* Entry: 108c73f44; end: 108c73f87;  */

undefined8 FUN_108c73f44(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  func_0x000107c34e48();
  func_0x000107c34d20();
  func_0x000107c34e00();
  func_0x000107c2a8cc(*param_3,3);
  func_0x000108c74b80();
  func_0x000108c74ab4();
  return 1;
}



/* Entry: 108c73f88; end: 108c73fb7;  */

undefined8 FUN_108c73f88(void)

{
  func_0x000107c34db0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c73fb8; end: 108c73fbb;  */

undefined8 FUN_108c73fb8(void)

{
  return 0;
}



/* Entry: 108c73fbc; end: 108c74007;  */

undefined8 FUN_108c73fbc(void)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34d3c();
  func_0x000107c34d50();
  func_0x000107c2a8e4();
  func_0x000107c2a8e8(*unaff_x19);
  func_0x000107c34d8c();
  func_0x000107c34d84();
  return 1;
}



/* Entry: 108c74008; end: 108c74037;  */

undefined8 FUN_108c74008(void)

{
  func_0x000107c34d58();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74038; end: 108c74067;  */

undefined8 FUN_108c74038(void)

{
  func_0x000107c34d5c();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74068; end: 108c74097;  */

undefined8 FUN_108c74068(void)

{
  func_0x000108c74af0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74098; end: 108c740c7;  */

undefined8 FUN_108c74098(void)

{
  func_0x000108c74afc();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c740c8; end: 108c741bb;  */

void FUN_108c740c8(long param_1)

{
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  lVar3 = puVar1[2];
  if ((lVar3 == 0) || (lVar2 = puVar1[4], lVar2 == 0)) {
    lStack_50 = 0;
    FUN_108c7281c(*puVar1,puVar1 + 6,puVar1 + 9,&lStack_50);
    param_1 = lStack_50;
  }
  else {
    lVar4 = puVar1[3];
    func_0x000107c34dec();
    lStack_50 = lVar3;
    lStack_48 = lVar4;
    if (lVar4 != 0) {
      do {
        func_0x000107c34d44();
      } while (extraout_w10 != 0);
      lVar2 = puVar1[4];
    }
    lStack_58 = puVar1[5];
    lStack_60 = lVar2;
    if (lStack_58 != 0) {
      do {
        func_0x000107c34d44();
      } while (extraout_w10_00 != 0);
    }
    func_0x000108c71ca8(param_1,&lStack_50,&lStack_60);
    func_0x0001086cce20(&lStack_60);
    FUN_108c71f20(&lStack_50);
    func_0x000108c74c28();
  }
  if (param_1 != 0) {
    func_0x000107c34d30();
  }
  return;
}



/* Entry: 108c741bc; end: 108c741db;  */

void FUN_108c741bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108c72aac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c741dc; end: 108c741df;  */

void FUN_108c741dc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108c741e0; end: 108c7432f;  */

void FUN_108c741e0(long param_1)

{
  code *pcVar1;
  long ***ppplVar2;
  long **extraout_x8;
  long **pplVar3;
  int extraout_w11;
  long lVar4;
  long *plVar5;
  long ***appplStack_58 [2];
  char cStack_41;
  long *plStack_40;
  long *plStack_38;
  
  plVar5 = *(long **)(param_1 + 0x10);
  if ((plVar5[2] == 0) || (plVar5[4] == 0)) {
    appplStack_58[0] = (long ***)0x0;
    FUN_108c7281c(*plVar5,plVar5 + 6,plVar5 + 9,appplStack_58);
    if (appplStack_58[0] != (long ***)0x0) {
      func_0x000107c34d30();
    }
  }
  else {
    ppplVar2 = *(long ****)(*plVar5 + 0x68);
    func_0x000107c2a884();
    pplVar3 = *ppplVar2;
    plStack_38 = (long *)ppplVar2[1];
    plStack_40 = (long *)pplVar3;
    if ((long **)plStack_38 != (long **)0x0) {
      do {
        func_0x000107c34da4();
        pplVar3 = extraout_x8;
      } while (extraout_w11 != 0);
    }
    if (pplVar3 == (long **)0x0) {
      func_0x00010bd3f434(appplStack_58,&UNK_10f50ec32,0x1b,&UNK_10f50ec4e);
      if (-1 < cStack_41) {
        appplStack_58[0] = (long ***)appplStack_58;
      }
      func_0x00010bd3f4e0(appplStack_58[0],"unknown",0x269);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x108c742f4);
      (*pcVar1)();
    }
    lVar4 = *plVar5;
    func_0x000107c34dec();
    func_0x000108c720f0();
    appplStack_58[0] = ppplVar2;
    FUN_108c7281c(lVar4,plVar5 + 6,plVar5 + 9,appplStack_58);
    if (appplStack_58[0] != (long ***)0x0) {
      func_0x000107c34d30();
    }
    func_0x000107c2814c(&plStack_40);
  }
  return;
}



/* Entry: 108c74330; end: 108c7434f;  */

void FUN_108c74330(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_108c72c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108c74350; end: 108c74357;  */

void FUN_108c74350(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108c74358; end: 108c74393;  */

undefined8 FUN_108c74358(void)

{
  func_0x000107c34e00();
  FUN_108c74404();
  return 1;
}



/* Entry: 108c74394; end: 108c743cf;  */

undefined8 FUN_108c74394(void)

{
  func_0x000107c34e48();
  func_0x000107c34d20();
  func_0x000108c74bc0(6);
  func_0x000108c74b80();
  func_0x000108c74ab4();
  return 1;
}



/* Entry: 108c743d0; end: 108c743ff;  */

undefined8 FUN_108c743d0(void)

{
  func_0x000107c34db0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74400; end: 108c74403;  */

undefined8 FUN_108c74400(void)

{
  return 0;
}



/* Entry: 108c74404; end: 108c7444f;  */

undefined8 FUN_108c74404(void)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34d3c();
  func_0x000107c34d50();
  func_0x000107c2a8e4();
  func_0x000107c2a8e8(*unaff_x19);
  func_0x000107c34d8c();
  func_0x000107c34d84();
  return 1;
}



/* Entry: 108c74450; end: 108c7447f;  */

undefined8 FUN_108c74450(void)

{
  func_0x000107c34d58();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74480; end: 108c744af;  */

undefined8 FUN_108c74480(void)

{
  func_0x000107c34d5c();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c744b0; end: 108c744df;  */

undefined8 FUN_108c744b0(void)

{
  func_0x000108c74af0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c744e0; end: 108c7450f;  */

undefined8 FUN_108c744e0(void)

{
  func_0x000108c74afc();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74510; end: 108c74513;  */

undefined8 FUN_108c74510(void)

{
  return 0;
}



/* Entry: 108c74514; end: 108c74593;  */

undefined8 FUN_108c74514(void)

{
  undefined1 *in_x4;
  
  func_0x000107c34e48();
  func_0x000107c34d20();
  *in_x4 = 0;
  FUN_108c74594();
  func_0x000108c74b80();
  func_0x000108c74ab4();
  return 1;
}



/* Entry: 108c74594; end: 108c74687;  */

undefined8 * FUN_108c74594(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  code **ppcVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined4 uVar3;
  int extraout_w10;
  undefined8 *unaff_x19;
  int *unaff_x20;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_38;
  
  func_0x000107c34e18();
  func_0x000107c34d40();
  uStack_38 = extraout_x8_00;
  if (*(int *)(param_2 + 0x94) - 1U < 2) {
    uVar6 = unaff_x19[3];
    uVar5 = unaff_x19[2];
    if (unaff_x19[3] != 0) {
      do {
        func_0x000107c34d44();
      } while (extraout_w10 != 0);
    }
    pcStack_98 = FUN_108c749bc;
    ppuStack_90 = &PTR_FUN_110abdf40;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_88 = uVar5;
    uStack_80 = uVar6;
    func_0x000107c34de4();
    func_0x000107c34dfc();
    func_0x000107c34d48(ppuStack_90);
    func_0x000107c2a898(&uStack_a8);
  }
  FUN_108c74f5c(unaff_x19[0x15] + 0x18);
  FUN_108c73a94();
  uVar3 = 3;
  if (*unaff_x20 == 0x10) {
    uVar3 = 4;
  }
  uVar1 = *unaff_x20 == 0;
  uStack_78 = 5;
  if (!(bool)uVar1) {
    uStack_78 = uVar3;
  }
  func_0x000107c34d1c(uStack_38);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x000107c34d48(ppuStack_90);
    func_0x000107c2a898(&uStack_a8);
    func_0x000108c74b2c();
    func_0x000107c34db0();
    func_0x000107c2a8e4();
    func_0x000107c34d74();
    return (undefined8 *)0x1;
  }
  func_0x000100489ca8();
  uStack_38 = extraout_x8;
  func_0x000100493108();
  func_0x000100493114();
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uStack_78);
  func_0x000100493160(&UNK_1004c16ec);
  func_0x000100493174();
  ppcVar2 = &pcStack_98;
  func_0x000100493180();
  func_0x0001004a5764(ppuStack_90);
  func_0x0001004931c0();
  func_0x00010048b398(uStack_38);
  if (!(bool)uVar1) {
    func_0x000107c60e78();
    func_0x0001004a5764(ppuStack_90);
    func_0x0001004931c0();
    func_0x000107c34d70();
    *unaff_x19 = &PTR_DAT_110abdf10;
    pcVar4 = ppcVar2[1];
    unaff_x19[2] = ppcVar2[2];
    unaff_x19[1] = pcVar4;
    ppcVar2[1] = (code *)0x0;
    ppcVar2[2] = (code *)0x0;
    *(undefined4 *)(unaff_x19 + 3) = *(undefined4 *)(ppcVar2 + 3);
    return unaff_x19;
  }
  return unaff_x19;
}



/* Entry: 108c74688; end: 108c746b7;  */

undefined8 FUN_108c74688(void)

{
  func_0x000107c34db0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c746b8; end: 108c746bb;  */

undefined8 FUN_108c746b8(void)

{
  return 0;
}



/* Entry: 108c746bc; end: 108c74707;  */

undefined8 FUN_108c746bc(void)

{
  undefined8 *unaff_x19;
  
  func_0x000107c34d3c();
  func_0x000107c34d50();
  func_0x000107c2a8e4();
  func_0x000107c2a8e8(*unaff_x19);
  func_0x000107c34d8c();
  func_0x000107c34d84();
  return 1;
}



/* Entry: 108c74708; end: 108c74737;  */

undefined8 FUN_108c74708(void)

{
  func_0x000107c34d58();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74738; end: 108c74767;  */

undefined8 FUN_108c74738(void)

{
  func_0x000107c34d5c();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74768; end: 108c74797;  */

undefined8 FUN_108c74768(void)

{
  func_0x000108c74af0();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c74798; end: 108c747c7;  */

undefined8 FUN_108c74798(void)

{
  func_0x000108c74afc();
  func_0x000107c2a8e4();
  func_0x000107c34d74();
  return 1;
}



/* Entry: 108c747c8; end: 108c747df;  */

/* WARNING: Removing unreachable block (ram,0x000108c74898) */

void FUN_108c747c8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long lVar4;
  
  func_0x000108c74c1c();
  func_0x000108c74c1c();
  lVar4 = param_1[2];
  puVar1 = *(undefined8 **)(lVar4 + 0x110);
  for (puVar3 = *(undefined8 **)(lVar4 + 0x108); puVar2 = puVar1, puVar3 != puVar1;
      puVar3 = puVar3 + 1) {
    func_0x000108c74c10(*puVar3);
    puVar2 = puVar3;
    if ((int)param_1 != 0) goto LAB_108c74824;
  }
LAB_108c74854:
  if (puVar2 == *(undefined8 **)(lVar4 + 0x110)) {
    return;
  }
  lVar4 = lVar4 + 0x108;
  func_0x000107c34e18(lVar4,puVar2);
  lVar4 = *(long *)(lVar4 + 8);
  while (lVar4 != unaff_x19) {
    lVar4 = lVar4 + -8;
    func_0x000108c730f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
LAB_108c74824:
  while (puVar3 = puVar3 + 1, puVar3 != puVar1) {
    func_0x000108c74c10(*puVar3);
    if (((ulong)param_1 & 1) == 0) {
      param_1 = puVar2;
      FUN_108c748a4(puVar2,puVar3);
      puVar2 = puVar2 + 1;
    }
  }
  goto LAB_108c74854;
}



/* Entry: 108c747e0; end: 108c748a3;  */

/* WARNING: Removing unreachable block (ram,0x000108c74898) */

void FUN_108c747e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = param_1[2];
  puVar1 = *(undefined8 **)(lVar4 + 0x110);
  for (puVar3 = *(undefined8 **)(lVar4 + 0x108); puVar2 = puVar1, puVar3 != puVar1;
      puVar3 = puVar3 + 1) {
    func_0x000108c74c10(*puVar3);
    puVar2 = puVar3;
    if ((int)param_1 != 0) goto LAB_108c74824;
  }
LAB_108c74854:
  if (puVar2 == *(undefined8 **)(lVar4 + 0x110)) {
    return;
  }
  lVar4 = lVar4 + 0x108;
  func_0x000107c34e18(lVar4,puVar2);
  lVar4 = *(long *)(lVar4 + 8);
  while (lVar4 != unaff_x19) {
    lVar4 = lVar4 + -8;
    func_0x000108c730f8();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
LAB_108c74824:
  while (puVar3 = puVar3 + 1, puVar3 != puVar1) {
    func_0x000108c74c10(*puVar3);
    if (((ulong)param_1 & 1) == 0) {
      param_1 = puVar2;
      FUN_108c748a4(puVar2,puVar3);
      puVar2 = puVar2 + 1;
    }
  }
  goto LAB_108c74854;
}



/* Entry: 108c748a4; end: 108c7492b;  */

long * FUN_108c748a4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *param_2 = 0;
  lVar1 = *param_1;
  *param_1 = lVar2;
  if (lVar1 != 0) {
    func_0x000107c34d30();
  }
  return param_1;
}



/* Entry: 108c7492c; end: 108c74963;  */

long FUN_108c7492c(long param_1)

{
  long lVar1;
  long unaff_x19;
  
  func_0x000107c34e10(param_1 + 8);
  func_0x000107c28294();
  lVar1 = unaff_x19;
  func_0x00010048b470();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 108c74964; end: 108c749ab;  */

void FUN_108c74964(void)

{
  undefined8 uStack_30;
  
  func_0x000108c74be8();
  if ((uStack_30 != 0) && ((*(byte *)(uStack_30 + 0x98) & 1) == 0)) {
    *(undefined1 *)(uStack_30 + 0x98) = 1;
    FUN_108c72fbc();
  }
  func_0x000107c34d90();
  return;
}


