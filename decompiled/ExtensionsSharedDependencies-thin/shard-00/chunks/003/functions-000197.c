/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004721a0; end: 004721a3;  */

void FUN_004721a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7758;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004721a4; end: 004721b7;  */

void FUN_004721a4(void)

{
  FUN_0047229c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004721b8; end: 004721c7;  */

void FUN_004721b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004721c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004721c8; end: 0047227b;  */

void FUN_004721c8(undefined1 param_1,long param_2)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long lVar2;
  undefined1 auStack_1f0 [376];
  undefined8 uStack_78;
  undefined8 auStack_70 [5];
  undefined8 uStack_48;
  
  puVar1 = auStack_1f0;
  func_0x00472a00();
  lVar2 = *(long *)(param_2 + 0x10);
  *(undefined1 *)(lVar2 + 0x59) = param_1;
  uStack_48 = extraout_x8;
  FUN_0046e188(auStack_1f0,lVar2 + 0x10);
  uStack_78 = *(undefined8 *)(lVar2 + 400);
  (**(code **)(*(long *)(lVar2 + 0x198) + 0x10))(auStack_70,lVar2 + 0x198);
  func_0x00472bcc();
  func_0x00472a2c(auStack_70[0]);
  FUN_00460acc(auStack_1f0);
  func_0x004729b8(uStack_48);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00472a2c(auStack_70[0]);
  FUN_00460acc();
  func_0x00472a38();
  if (*(long *)(puVar1 + 8) != 0) {
    FUN_00471c60();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0047227c; end: 0047229b;  */

void FUN_0047227c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00471c60();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 0047229c; end: 004722bb;  */

void FUN_0047229c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 004722bc; end: 004722e7;  */

long FUN_004722bc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 004722e8; end: 00472443;  */

void FUN_004722e8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  undefined1 auStack_c0 [40];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  
  plVar5 = *(long **)(param_2 + 0x20);
  iVar3 = *(int *)(param_2 + 0x14);
  uStack_58 = 0;
  uStack_50 = 0;
  ppuStack_68 = &PTR_FUN_009e5290;
  uStack_60 = 0;
  uStack_48 = 0x26;
  uVar4 = 0x9001c;
  if (*(int *)(param_2 + 0x10) == 1) {
    uVar4 = 0x9001d;
  }
  uVar1 = 0x9001e;
  if (*(int *)(param_2 + 0x10) != 2) {
    uVar1 = uVar4;
  }
  FUN_00460b34(&ppuStack_68,uVar1);
  FUN_00425cb4(auStack_80,"AttemptIndex");
  FUN_004708a8(param_1);
  func_0x00472aa0();
  FUN_00425cb4(auStack_98,"RetryMode");
  pcVar2 = "scheduled_hedging";
  if (iVar3 != 1) {
    pcVar2 = "existing_sequential";
  }
  FUN_0045a3ec(param_1,auStack_98,pcVar2);
  FUN_004708cc();
  FUN_00460bd4(auStack_c0,param_1);
  func_0x00472b5c();
  func_0x00472b64();
  FUN_004590f8(&ppuStack_68);
  (**(code **)(*plVar5 + 0x18))(plVar5,auStack_c0);
  func_0x00472a98();
  return;
}



/* Entry: 00472444; end: 00472477;  */

void FUN_00472444(long param_1)

{
  param_1 = param_1 + 0x18;
  func_0x0045addc();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 00472478; end: 0047293b;  */

void FUN_00472478(undefined4 *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  code *extraout_x8;
  code *extraout_x8_00;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 auStack_140 [2];
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined1 auStack_f8 [40];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  puVar1 = auStack_140;
  puVar2 = auStack_140;
  plVar8 = *(long **)(param_2 + 0x10);
  auStack_140[0] = *param_1;
  uStack_130 = *(undefined8 *)(param_1 + 4);
  uStack_138 = *(undefined8 *)(param_1 + 2);
  uStack_128 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uStack_118 = *(undefined8 *)(param_1 + 10);
  uStack_120 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  uStack_110 = *(undefined8 *)(param_1 + 0xc);
  uStack_108 = *(ulong *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  uStack_100 = param_1[0x10];
  FUN_0047293c(plVar8 + 0xd);
  func_0x0046327c(auStack_140);
  func_0x004657a4(auStack_140);
  plVar6 = (long *)plVar8[0xb];
  FUN_004718f0(&ppuStack_88,(int)plVar8[3],plVar8 + 7,(char)plVar8[10],puVar2);
  func_0x00472b84();
  plVar3 = plVar6;
  (*extraout_x8)(plVar6,&ppuStack_88);
  func_0x00472a90();
  func_0x00472b90();
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_FUN_009e5290;
  lStack_80 = 0;
  uStack_68 = 0x2a;
  FUN_00460b34();
  func_0x00472b30();
  func_0x00463324(puVar1);
  FUN_0045a3ec(plVar3,auStack_a0,puVar1);
  FUN_00425cb4(auStack_b8,"AckHedgePolicy");
  func_0x00472aa0();
  FUN_004708cc();
  func_0x00472b00();
  func_0x00472ab8();
  func_0x00472af0();
  func_0x00472a90();
  func_0x00472b84();
  func_0x00472a10();
  func_0x00472af8();
  func_0x00472b90();
  func_0x00472a80();
  func_0x0047299c();
  func_0x00472b38();
  func_0x00472b1c();
  __ZNSt3__19to_stringEi(auStack_b8,auStack_140[0]);
  func_0x00472a1c();
  FUN_00425cb4(auStack_d0,"FromServer");
  func_0x00472aa0();
  FUN_004708cc();
  func_0x00472b00();
  func_0x00472bec();
  func_0x00472ab8();
  func_0x00472af0();
  func_0x00472a90();
  func_0x00472b84();
  func_0x00472a10();
  func_0x00472af8();
  if (uStack_108._4_1_ == '\x01') {
    func_0x00472b90();
    uVar7 = uStack_108 & 0xffffffff;
    func_0x00472a80();
    func_0x0047299c();
    func_0x00472b38();
    func_0x00472b30();
    __ZNSt3__19to_stringEi(auStack_b8,uVar7);
    func_0x00472bb8();
    FUN_004708cc();
    func_0x00472b00();
    func_0x00472ab8();
    func_0x00472af0();
    func_0x00472a90();
    func_0x00472b84();
    func_0x00472a10();
    func_0x00472af8();
  }
  if (uStack_100._1_1_ == '\x01') {
    func_0x00472b90();
    func_0x00472a80();
    func_0x0047299c();
    func_0x00472b38();
    func_0x00472b1c();
    __ZNSt3__19to_stringEi(auStack_b8,auStack_140[0]);
    func_0x00472a1c();
    FUN_004708cc();
    func_0x00472b00();
    func_0x00472ab8();
    func_0x00472af0();
    func_0x00472a90();
    func_0x00472b84();
    func_0x00472a10();
    func_0x00472af8();
  }
  func_0x00472b90();
  func_0x00472a80();
  func_0x0047299c();
  func_0x00472b38();
  func_0x00472b9c();
  func_0x00472b30();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,plVar8 + 7);
  func_0x00472a1c();
  func_0x00472b74();
  FUN_00425cb4(auStack_d0);
  func_0x004729d8();
  func_0x00472aa0();
  func_0x00472b00();
  func_0x00472bec();
  func_0x00472ab8();
  func_0x00472af0();
  func_0x00472a90();
  ppuVar4 = (undefined **)(plVar8 + 0xd);
  FUN_0045a3bc();
  ppuStack_88 = ppuVar4;
  (**(code **)(*plVar6 + 0x20))(plVar6,auStack_f8,&ppuStack_88);
  func_0x00472af8();
  if ((*(byte *)(plVar8[0x11] + 8) & 1) == 0) {
    (*(code *)plVar8[0x10])(puVar2);
  }
  ppuStack_88 = (undefined **)0x0;
  lStack_80 = 0;
  lVar5 = plVar8[1];
  if ((((lVar5 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_80 = lVar5, lVar5 != 0))
      && (ppuStack_88 = (undefined **)*plVar8, ppuStack_88 != (undefined **)0x0)) &&
     (ppuStack_88[0x1b] != (undefined *)0x0)) {
    func_0x00472b40();
    (*extraout_x8_00)();
  }
  func_0x00471010(&ppuStack_88);
  FUN_00464a10(auStack_140);
  return;
}



/* Entry: 0047293c; end: 00472977;  */

void FUN_0047293c(long *param_1)

{
  long *plVar1;
  
  if ((char)param_1[2] == '\x01') {
    plVar1 = param_1;
    FUN_0045a458();
    *param_1 = *param_1 + (long)plVar1;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



/* Entry: 00472978; end: 00472997;  */

void FUN_00472978(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_00472064();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 00472998; end: 00472bf3;  */

void FUN_00472998(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 00472bf4; end: 00472c3f;  */

undefined8 * FUN_00472bf4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_1 = &PTR_FUN_009e77f0;
  param_1[1] = uVar1;
  (**(code **)(param_2[1] + 0x10))(param_1 + 2);
  uVar1 = *param_3;
  param_1[8] = param_3[1];
  param_1[7] = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  return param_1;
}



/* Entry: 00472c40; end: 00472dcb;  */

code ** FUN_00472c40(long param_1,undefined1 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  qword *pqVar4;
  code **ppcVar5;
  long *plVar6;
  qword qVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long alStack_c0 [5];
  undefined1 uStack_98;
  code *pcStack_90;
  undefined **ppuStack_88;
  qword *pqStack_80;
  long *plStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  qVar7 = *(qword *)(param_1 + 8);
  plVar6 = alStack_c0;
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  uStack_98 = param_2;
  FUN_0045cc3c();
  lVar9 = puVar8[2];
  __ZNSt3__15mutex4lockEv(lVar9 + 8);
  lVar10 = *(long *)(lVar9 + 0x70);
  pcStack_90 = FUN_00472e24;
  ppuStack_88 = &PTR_FUN_009e7830;
  pqVar4 = &segment_command_00000020.vmaddr;
  __Znwm();
  *pqVar4 = qVar7;
  (**(code **)(alStack_c0[0] + 0x10))(pqVar4 + 1,alStack_c0);
  *(undefined1 *)(pqVar4 + 6) = uStack_98;
  pqStack_80 = pqVar4;
  plStack_60 = plVar6;
  FUN_0045cc5c(lVar9 + 0x48,&pcStack_90);
  func_0x00472eac();
  ppcVar5 = (code **)(lVar9 + 8);
  __ZNSt3__15mutex6unlockEv();
  if (lVar10 == 0) {
    plVar6 = (long *)*puVar8;
    ppuStack_88 = (undefined **)puVar8[3];
    pcStack_90 = (code *)puVar8[2];
    if (puVar8[3] != 0) {
      plVar1 = (long *)(puVar8[3] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,&pcStack_90);
    ppcVar5 = &pcStack_90;
    FUN_0045d30c();
  }
  func_0x00472e9c();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return ppcVar5;
  }
  ___stack_chk_fail();
  FUN_0045d30c(&pcStack_90);
  func_0x00472e9c();
  __Unwind_Resume();
  *ppcVar5 = (code *)&PTR_FUN_009e77f0;
  func_0x0045cbec(ppcVar5 + 7);
  (**(code **)ppcVar5[2])();
  return ppcVar5;
}



/* Entry: 00472dcc; end: 00472dcf;  */

undefined8 * FUN_00472dcc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e77f0;
  func_0x0045cbec(param_1 + 7);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 00472dd0; end: 00472de3;  */

void FUN_00472dd0(void)

{
  FUN_00472de4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 00472de4; end: 00472e23;  */

undefined8 * FUN_00472de4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e77f0;
  func_0x0045cbec(param_1 + 7);
  (**(code **)param_1[2])();
  return param_1;
}



/* Entry: 00472e24; end: 00472e43;  */

void FUN_00472e24(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if ((*(byte *)(puVar1[1] + 8) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00472e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(*(undefined1 *)(puVar1 + 6));
  return;
}



/* Entry: 00472e44; end: 00472e83;  */

void FUN_00472e44(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    (*(code *)**(undefined8 **)(lVar1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 00472e84; end: 00472ebb;  */

void FUN_00472e84(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 00472ebc; end: 00472ef7;  */

void FUN_00472ebc(void)

{
  undefined1 auStack_30 [16];
  
  FUN_00472ef8(auStack_30,&UNK_00803b34);
  func_0x00473268();
  FUN_0047311c();
  return;
}



/* Entry: 00472ef8; end: 00472f17;  */

void FUN_00472ef8(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_00473010(&uStack_11,param_1);
  return;
}



/* Entry: 00472f18; end: 00472f53;  */

void FUN_00472f18(void)

{
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  uStack_28 = 0xa4cb800;
  FUN_00472f54(auStack_40,&uStack_28);
  func_0x00473268();
  FUN_0047311c();
  return;
}



/* Entry: 00472f54; end: 00472f73;  */

void FUN_00472f54(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_00473148(&uStack_11,param_1);
  return;
}



/* Entry: 00472f74; end: 00472fef;  */

void FUN_00472f74(undefined8 *param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_004732c0(param_2,10);
  uStack_31 = (undefined1)param_2;
  func_0x0045dc54(&uStack_30,&uStack_31);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_0045e718(&uStack_30);
  return;
}



/* Entry: 00472ff0; end: 0047300f;  */

void FUN_00472ff0(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_004731a4(&uStack_11,param_1);
  return;
}



/* Entry: 00473010; end: 0047306b;  */

long FUN_00473010(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 in_ZR;
  long lVar2;
  int *unaff_x20;
  undefined8 *puStack_30;
  
  func_0x0047321c();
  func_0x00473284();
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_009e7858;
  iVar1 = *unaff_x20;
  puStack_30[3] = &PTR_DAT_009e78a8;
  puStack_30[4] = (long)iVar1;
  func_0x00473238();
  func_0x0047310c();
  func_0x00473250();
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar2 = param_1;
  FUN_00473098();
  *(long *)(param_1 + 0x10) = lVar2;
  return param_1;
}



/* Entry: 0047306c; end: 00473097;  */

long FUN_0047306c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_00473098();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 00473098; end: 004730c3;  */

void FUN_00473098(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x666666666666667) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)(param_2 * 0x28);
    return;
  }
  FUN_0040cee8();
  *param_1 = &PTR_FUN_009e7858;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004730c4; end: 004730c7;  */

void FUN_004730c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009e7858;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004730c8; end: 004730db;  */

void FUN_004730c8(void)

{
  func_0x004730fc();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004730dc; end: 0047311b;  */

void FUN_004730dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004730e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 0047311c; end: 00473147;  */

long FUN_0047311c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0040ce94();
  }
  return param_1;
}



/* Entry: 00473148; end: 004731a3;  */

void FUN_00473148(void)

{
  undefined1 in_ZR;
  undefined8 *unaff_x20;
  undefined1 auStack_80 [16];
  undefined8 *puStack_70;
  undefined8 *puStack_30;
  
  func_0x0047321c();
  func_0x00473284();
  *puStack_30 = &PTR_FUN_009e7858;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_009e78a8;
  puStack_30[4] = *unaff_x20;
  func_0x00473238();
  func_0x0047310c();
  func_0x00473250();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x0047321c();
    FUN_0045e674(auStack_80,1);
    *puStack_70 = &PTR_FUN_009e57e8;
    puStack_70[1] = 0;
    puStack_70[2] = 0;
    puStack_70[3] = &PTR_DAT_009e5838;
    *(undefined1 *)(puStack_70 + 4) = *(undefined1 *)unaff_x20;
    func_0x00473238();
    func_0x0045e708();
    func_0x00473250();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
    }
  }
  return;
}



/* Entry: 004731a4; end: 0047320f;  */

void FUN_004731a4(void)

{
  undefined1 in_ZR;
  undefined1 *unaff_x20;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  
  func_0x0047321c();
  FUN_0045e674(auStack_40,1);
  *puStack_30 = &PTR_FUN_009e57e8;
  puStack_30[1] = 0;
  puStack_30[2] = 0;
  puStack_30[3] = &PTR_DAT_009e5838;
  *(undefined1 *)(puStack_30 + 4) = *unaff_x20;
  func_0x00473238();
  func_0x0045e708();
  func_0x00473250();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
  }
  return;
}



/* Entry: 00473210; end: 0047328f;  */

void FUN_00473210(void)

{
  return;
}



/* Entry: 00473290; end: 004732bf;  */

void FUN_00473290(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_00473424(param_1,&uStack_14);
  if (param_1 != 0) {
    FUN_0047bbf4(param_1 + 0x18);
  }
  return;
}



/* Entry: 004732c0; end: 004732d7;  */

long FUN_004732c0(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_14;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    uStack_14 = param_2;
    FUN_00473424(param_1,&uStack_14);
    lVar1 = 0;
    if (param_1 != 0) {
      lVar1 = param_1 + 0x18;
      FUN_0047bbf4(lVar1);
    }
    return lVar1;
  }
  return 0;
}



/* Entry: 004732d8; end: 0047332b;  */

void FUN_004732d8(undefined1 *param_1,long param_2,undefined4 param_3)

{
  undefined4 uStack_24;
  
  if (((*(byte *)(param_2 + 0x28) & 1) == 0) ||
     (uStack_24 = param_3, FUN_00473424(param_2,&uStack_24), param_2 == 0)) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    FUN_00462e1c(param_1,param_2 + 0x18);
  }
  return;
}



/* Entry: 0047332c; end: 00473423;  */

undefined1  [16] FUN_0047332c(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  char acStack_50 [8];
  ulong uStack_48;
  byte bStack_39;
  char cStack_38;
  
  pcVar1 = acStack_50;
  pcVar2 = acStack_50;
  FUN_004732d8(acStack_50);
  if (cStack_38 == '\x01') {
    if (-1 < (char)bStack_39) {
      uStack_48 = (ulong)bStack_39;
    }
    if (uStack_48 != 0) {
      __ZNKSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE2atEm(acStack_50,0);
      if (*pcVar1 == '-') goto LAB_00473384;
    }
    __ZNSt3__16stoullERKNS_12basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEEPmi
              (acStack_50,0,10);
    uVar5 = (ulong)pcVar2 & 0xffffffffffffff00;
    uVar4 = (ulong)pcVar2 & 0xff;
    uVar3 = 1;
  }
  else {
LAB_00473384:
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
  }
  FUN_00457530(acStack_50);
  auVar6._0_8_ = uVar5 | uVar4;
  auVar6._8_8_ = uVar3;
  return auVar6;
}



/* Entry: 00473424; end: 004734bf;  */

long FUN_00473424(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 004734c0; end: 0047361b;  */

void FUN_004734c0(ulong *param_1,ulong param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong extraout_x8;
  ulong uVar6;
  ulong unaff_x24;
  ulong uVar7;
  ulong uVar8;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    uVar8 = param_2;
    FUN_004732c0(param_2,0xb);
    if ((int)uVar8 == 0) {
      bVar2 = false;
      uVar8 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = param_2;
      FUN_0047332c();
      bVar2 = false;
      uVar8 = 0;
      if (((uVar7 & 1) != 0) && (uVar6 != 0)) {
        uVar3 = 0xd;
        unaff_x24 = param_2;
        FUN_0047332c();
        if ((unaff_x24 != 0 & uVar3) == 0) {
          unaff_x24 = 86400000;
        }
        bVar2 = true;
        uVar8 = uVar6;
      }
      uVar7 = uVar8 & 0xffffffffffffff00;
      uVar8 = uVar8 & 0xff;
    }
    uVar6 = param_2;
    FUN_004732c0(param_2,0xe);
    if ((int)uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0;
      uVar4 = 0;
      param_2 = extraout_x8;
    }
    else {
      uVar4 = 0xf;
      uVar6 = param_2;
      FUN_0047332c();
      uVar3 = 0;
      FUN_0047332c();
      if ((param_2 != 0 & uVar3) == 0) {
        param_2 = 86400000;
      }
      if (uVar6 < 2) {
        uVar6 = 1;
      }
      if ((uVar4 & 1) == 0) {
        uVar6 = 1;
      }
      uVar4 = uVar6 & 0xffffffffffffff00;
      uVar6 = uVar6 & 0xff;
      bVar1 = true;
    }
    if (bVar1 || bVar2) {
      *param_1 = uVar7 | uVar8;
      param_1[1] = unaff_x24;
      *(bool *)(param_1 + 2) = bVar2;
      param_1[3] = uVar4 | uVar6;
      param_1[4] = param_2;
      uVar5 = 1;
      *(bool *)(param_1 + 5) = bVar1;
      goto LAB_00473600;
    }
  }
  uVar5 = 0;
  *(undefined1 *)param_1 = 0;
LAB_00473600:
  *(undefined1 *)(param_1 + 6) = uVar5;
  return;
}



/* Entry: 0047361c; end: 004736ef;  */

void FUN_0047361c(long param_1,long param_2)

{
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined1 auStack_70 [56];
  undefined1 auStack_38 [24];
  
  FUN_004736f0(auStack_70,param_2);
  auStack_90[0] = 0;
  uStack_78 = 0;
  FUN_0064b6ec(param_2,"arroyo_convo_id",0xf);
  if ((param_2 != 0) && (*(char *)(param_2 + 8) == '\x04')) {
    FUN_0071e480(auStack_38);
    FUN_00473a54(auStack_90,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  func_0x00473d2c(param_1 + 0xc0);
  func_0x00473cf4();
  func_0x00473d4c();
  func_0x00473d2c(param_1 + 0xe0);
  func_0x00473cf4();
  func_0x00473d1c();
  return;
}



/* Entry: 004736f0; end: 00473787;  */

void FUN_004736f0(undefined1 *param_1,long param_2)

{
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [56];
  
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_0064b6ec(param_2,"grouping_commands",0x11);
  if ((param_2 != 0) && (*(char *)(param_2 + 8) == '\x04')) {
    FUN_0071e480(auStack_70);
    FUN_00473990(auStack_58,auStack_70);
    FUN_00473b94(param_1,auStack_58);
    FUN_00473aa8(auStack_58);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_70);
  }
  return;
}



/* Entry: 00473788; end: 0047383b;  */

void FUN_00473788(undefined1 *param_1,long param_2)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined1 auStack_38 [24];
  
  *param_1 = 0;
  param_1[0x18] = 0;
  if (*(char *)(param_2 + 0x30) == '\x01') {
    uVar2 = *(ulong *)(param_2 + 0x10);
    puVar3 = (ulong *)(param_2 + 0x10);
    if ((uVar2 & 1) != 0) {
      puVar3 = (ulong *)(uVar2 + 7);
    }
    lVar5 = (long)*(int *)(param_2 + 0x18) << 3;
    do {
      if (lVar5 == 0) {
        return;
      }
      uVar2 = *puVar3;
      lVar5 = lVar5 + -8;
      puVar3 = puVar3 + 1;
    } while (*(int *)(uVar2 + 0x1c) != 2);
    ppuVar4 = *(undefined ***)(*(long *)(uVar2 + 0x10) + 0x18);
    ppuVar1 = &PTR_PTR_00b091b8;
    if (ppuVar4 != (undefined **)0x0) {
      ppuVar1 = ppuVar4;
    }
    FUN_0047c54c(auStack_38,ppuVar1);
    FUN_00473a54(param_1,auStack_38);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_38);
  }
  return;
}



/* Entry: 0047383c; end: 004738ff;  */

void FUN_0047383c(long param_1,long param_2)

{
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined1 auStack_70 [56];
  undefined1 auStack_38 [24];
  
  FUN_00473900(auStack_70,param_2);
  auStack_90[0] = 0;
  uStack_78 = 0;
  FUN_00425cb4(auStack_38,"arroyo_convo_id");
  FUN_00473c20(param_2,auStack_38);
  func_0x00473cfc();
  if (param_2 != 0) {
    FUN_0046083c(auStack_90,param_2 + 0x28);
  }
  func_0x00473d2c(param_1 + 0xc0);
  func_0x00473cf4();
  func_0x00473d4c();
  func_0x00473d2c(param_1 + 0xe0);
  func_0x00473cf4();
  func_0x00473d1c();
  return;
}



/* Entry: 00473900; end: 0047398f;  */

void FUN_00473900(undefined1 *param_1,long param_2)

{
  undefined1 auStack_58 [56];
  
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_00425cb4(auStack_58,"grouping_commands");
  FUN_00473c20(param_2,auStack_58);
  func_0x00473d08();
  if (param_2 != 0) {
    FUN_00473990(auStack_58,param_2 + 0x28);
    FUN_00473b94(param_1,auStack_58);
    FUN_00473aa8(auStack_58);
  }
  return;
}



/* Entry: 00473990; end: 00473a53;  */

void FUN_00473990(undefined1 *param_1,long *param_2)

{
  undefined ***pppuVar1;
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  
  if (*(char *)((long)param_2 + 0x17) < '\0') {
    if (param_2[1] != 0) {
      param_2 = (long *)*param_2;
      goto LAB_004739c0;
    }
  }
  else if (*(char *)((long)param_2 + 0x17) != '\0') {
LAB_004739c0:
    FUN_00652118(&uStack_38,param_2);
    ppuStack_68 = &PTR_FUN_009eb878;
    uStack_60 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_58 = 0;
    uStack_40 = 0;
    pppuVar1 = &ppuStack_68;
    FUN_00549e84(pppuVar1,uStack_38,iStack_30 - (int)uStack_38);
    if (((ulong)pppuVar1 & 1) == 0) {
      *param_1 = 0;
      param_1[0x30] = 0;
    }
    else {
      func_0x00473ac8(param_1,&ppuStack_68);
    }
    FUN_0049a12c(&ppuStack_68);
    FUN_0040d974(&uStack_38);
    return;
  }
  *param_1 = 0;
  param_1[0x30] = 0;
  return;
}



/* Entry: 00473a54; end: 00473aa7;  */

undefined8 * FUN_00473a54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 3) == '\x01') {
    FUN_004575b8(param_1);
  }
  else {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    *(undefined1 *)(param_1 + 3) = 1;
  }
  return param_1;
}



/* Entry: 00473aa8; end: 00473ae3;  */

void FUN_00473aa8(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_0049a12c();
  }
  return;
}



/* Entry: 00473ae4; end: 00473aef;  */

undefined8 * FUN_00473ae4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_009eb878;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00473b30(param_1,param_2);
  return param_1;
}



/* Entry: 00473af0; end: 00473b2f;  */

undefined8 * FUN_00473af0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_009eb878;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_00473b30(param_1,param_3);
  return param_1;
}



/* Entry: 00473b30; end: 00473b93;  */

long FUN_00473b30(long param_1,long param_2)

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
      FUN_0049a384(param_1);
    }
    else {
      FUN_0049a34c(param_1);
    }
  }
  return param_1;
}



/* Entry: 00473b94; end: 00473bb7;  */

undefined8 FUN_00473b94(undefined8 param_1)

{
  FUN_00473bb8();
  return param_1;
}



/* Entry: 00473bb8; end: 00473bdf;  */

long FUN_00473bb8(long param_1,long param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  
  cVar1 = *(char *)(param_1 + 0x30);
  if (cVar1 != *(char *)(param_2 + 0x30)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0x30) == '\x01') {
        FUN_0049a12c();
        *(undefined1 *)(param_1 + 0x30) = 0;
      }
      return param_1;
    }
    FUN_00473ae4();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    if (param_1 != param_2) {
      uVar2 = *(ulong *)(param_1 + 8);
      if ((uVar2 & 1) != 0) {
        uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
      }
      uVar3 = *(ulong *)(param_2 + 8);
      if ((uVar3 & 1) != 0) {
        uVar3 = *(ulong *)(uVar3 & 0xfffffffffffffffe);
      }
      if (uVar2 == uVar3) {
        FUN_0049a384(param_1);
      }
      else {
        FUN_0049a34c(param_1);
      }
    }
    return param_1;
  }
  return param_1;
}



/* Entry: 00473be0; end: 00473c1f;  */

void FUN_00473be0(long param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    FUN_0049a12c();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



/* Entry: 00473c20; end: 00473cf3;  */

long FUN_00473c20(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  plVar6 = (long *)param_1[1];
  if ((plVar6 != (long *)0x0) && (plVar2 = param_1 + 3, *plVar2 != 0)) {
    FUN_004597c4();
    uVar7 = (long)plVar6 - 1;
    if (((ulong)plVar6 & uVar7) == 0) {
      plVar8 = (long *)((ulong)plVar2 & uVar7);
    }
    else {
      plVar8 = plVar2;
      if (plVar6 <= plVar2) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar2 / (ulong)plVar6;
        }
        plVar8 = (long *)((long)plVar2 - uVar1 * (long)plVar6);
      }
    }
    plVar5 = *(long **)(*param_1 + (long)plVar8 * 8);
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar5[1];
        if (plVar2 != plVar4) break;
        lVar3 = (long)(plVar5 + 2);
        FUN_00459c38(lVar3,param_2);
        if ((int)lVar3 != 0) {
          return (long)plVar5;
        }
      }
      if (((ulong)plVar6 & uVar7) == 0) {
        plVar4 = (long *)((ulong)plVar4 & uVar7);
      }
      else if (plVar6 <= plVar4) {
        uVar1 = 0;
        if (plVar6 != (long *)0x0) {
          uVar1 = (ulong)plVar4 / (ulong)plVar6;
        }
        plVar4 = (long *)((long)plVar4 - uVar1 * (long)plVar6);
      }
    } while (plVar4 == plVar8);
  }
  return 0;
}



/* Entry: 00473cf4; end: 00473d5f;  */

void FUN_00473cf4(void)

{
  char in_stack_00000018;
  
  if (in_stack_00000018 == '\x01') {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00473d60; end: 00473dbf;  */

undefined8 * FUN_00473d60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00474378(param_1 + 3);
  *(undefined1 *)((long)param_1 + 0x124) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  FUN_00474914(param_1 + 0x1b);
  return param_1;
}



/* Entry: 00473dc0; end: 00473e0b;  */

undefined8 FUN_00473dc0(long *param_1)

{
  undefined8 unaff_x19;
  
  FUN_00473e0c(param_1 + 3);
  if (((*(byte *)(param_1 + 2) & 1) == 0) && (*param_1 != 0)) {
    FUN_00473e34(param_1);
  }
  FUN_004743c0(param_1 + 0x20);
  func_0x0045addc();
  if (param_1 != (long *)0x0) {
    func_0x0040ce94();
  }
  return unaff_x19;
}



/* Entry: 00473e0c; end: 00473e33;  */

void FUN_00473e0c(long param_1)

{
  FUN_0047293c(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xd8) = 1;
  return;
}



/* Entry: 00473e34; end: 0047424b;  */

void FUN_00473e34(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined ***pppuVar5;
  char *pcVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puStack_100;
  undefined1 uStack_f8;
  undefined1 auStack_d8 [24];
  char *apcStack_c0 [3];
  undefined1 auStack_a8 [24];
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  if (*(char *)(param_1 + 0x1e) == '\x01') {
    puVar3 = param_1 + 0x1b;
    FUN_0045a3bc();
    uStack_f8 = 1;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_009e5290;
    uStack_88 = 0;
    uStack_70 = 0x1f;
    puStack_100 = puVar3;
    (**(code **)(*(long *)*param_1 + 0x20))((long *)*param_1,&ppuStack_90,&puStack_100);
    func_0x00474958();
  }
  pcVar6 = (char *)(param_1 + 8);
  for (uVar10 = 0; uVar10 != 4; uVar10 = uVar10 + 1) {
    pcVar4 = pcVar6 + -0x28;
    if ((*pcVar6 == '\x01') && (pcVar6[-0x10] == '\x01')) {
      FUN_0045a3bc();
      plVar8 = (long *)*param_1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      ppuStack_90 = &PTR_FUN_009e5290;
      uStack_70 = 0x20;
      apcStack_c0[0] = pcVar4;
      func_0x00474994(auStack_a8);
      pcVar4 = "Unknown";
      if ((uVar10 & 0xfffffffc) == 0) {
        pcVar4 = (&PTR_s_BuildData_009e78e8)[uVar10 & 3];
      }
      FUN_0045a3ec(&ppuStack_90,auStack_a8,pcVar4);
      func_0x00474984();
      func_0x00474960();
      func_0x00474958();
      (**(code **)(*plVar8 + 0x20))(plVar8,&puStack_100,apcStack_c0);
      func_0x00474968();
    }
    pcVar6 = pcVar6 + 0x30;
  }
  lVar1 = param_1[0x21];
  for (lVar9 = param_1[0x20]; lVar9 != lVar1; lVar9 = lVar9 + 0x30) {
    plVar8 = (long *)*param_1;
    uVar2 = *(uint *)(lVar9 + 0x18);
    uStack_88 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_009e5290;
    uStack_70 = 0x21;
    func_0x00474994(apcStack_c0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,lVar9);
    pppuVar5 = &ppuStack_90;
    FUN_00470964(pppuVar5,apcStack_c0,auStack_d8);
    pcVar6 = "invalid_dim_name";
    if (uVar2 >> 0x12 < 3) {
      pcVar6 = (&PTR_s_notifrecvresult_00b04d18)[uVar2 >> 0x10];
    }
    FUN_00425cb4(auStack_a8,pcVar6);
    pcVar6 = "invalid_dimension_value";
    if ((uVar2 & 0xffff) < 0x24) {
      pcVar6 = (&PTR_s_ready_00b04d78)[uVar2 & 0xffff];
    }
    FUN_0045a3ec(pppuVar5,auStack_a8,pcVar6);
    func_0x00474960();
    FUN_00460bd4(&puStack_100,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
    func_0x00474970();
    func_0x00474958();
    (**(code **)(*plVar8 + 0x18))(plVar8,&puStack_100);
    func_0x00474968();
    if (*(char *)(lVar9 + 0x28) == '\x01') {
      plVar8 = (long *)*param_1;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      ppuStack_90 = &PTR_FUN_009e5290;
      uStack_70 = 0x22;
      func_0x00474994(auStack_a8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(apcStack_c0,lVar9);
      FUN_00470964(&ppuStack_90,auStack_a8,apcStack_c0);
      func_0x00474984();
      func_0x00474970();
      func_0x00474960();
      func_0x00474958();
      (**(code **)(*plVar8 + 0x28))(plVar8,&puStack_100,*(undefined8 *)(lVar9 + 0x20));
      func_0x00474968();
    }
  }
  if ((*(byte *)((long)param_1 + 0x124) & 1) != 0) {
    plVar8 = (long *)*param_1;
    uVar10 = *(ulong *)((long)param_1 + 0x11c);
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_009e5290;
    uStack_88 = 0;
    uStack_70 = 0x23;
    pppuVar5 = &ppuStack_90;
    FUN_0047487c(pppuVar5,*(undefined4 *)(param_1 + 0x23));
    FUN_00425cb4(auStack_a8,"ErrorCode");
    uVar7 = (undefined4)uVar10;
    if ((uVar10 & 0x100000000) == 0) {
      uVar7 = 0xffffffff;
    }
    __ZNSt3__19to_stringEi(apcStack_c0,uVar7);
    FUN_00470964(pppuVar5,auStack_a8,apcStack_c0);
    func_0x00474984();
    func_0x00474970();
    func_0x00474960();
    func_0x00474958();
    (**(code **)(*plVar8 + 0x18))(plVar8,&puStack_100);
    func_0x00474968();
  }
  return;
}



/* Entry: 0047424c; end: 0047429b;  */

void FUN_0047424c(long param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = param_1;
  FUN_0045a1e8();
  puVar2 = (undefined8 *)(param_1 + (long)param_2 * 0x30);
  if ((*(byte *)(puVar2 + 5) & 1) == 0) {
    *(undefined1 *)(puVar2 + 5) = 1;
  }
  *puVar2 = 0;
  puVar2[1] = lVar1;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined1 *)(puVar2 + 3) = 0;
  *(undefined1 *)((long)puVar2 + 0x1c) = 0;
  *(undefined1 *)(puVar2 + 4) = 0;
  return;
}



/* Entry: 0047429c; end: 004742a7;  */

void FUN_0047429c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18 + (long)(int)param_2 * 0x30;
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    FUN_0047424c(param_1 + 0x18,param_2);
  }
  FUN_0047293c(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x1c) = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *(int *)(param_1 + 0xf4) = (int)param_2;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



/* Entry: 004742a8; end: 0047430b;  */

void FUN_004742a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + (long)(int)param_2 * 0x30;
  if ((*(byte *)(lVar1 + 0x28) & 1) == 0) {
    FUN_0047424c(param_1,param_2);
  }
  FUN_0047293c(lVar1);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  *(int *)(lVar1 + 0x1c) = (int)param_3;
  *(char *)(lVar1 + 0x20) = (char)((ulong)param_3 >> 0x20);
  *(int *)(param_1 + 0xdc) = (int)param_2;
  *(undefined1 *)(param_1 + 0xe0) = 1;
  return;
}



/* Entry: 0047430c; end: 0047433b;  */

void FUN_0047430c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_24 = param_3;
  uStack_20 = param_4;
  uStack_18 = param_5;
  FUN_0047433c(param_1 + 0x100,param_2,&uStack_24,&uStack_20);
  return;
}



/* Entry: 0047433c; end: 00474377;  */

long FUN_0047433c(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (uVar1 < *(ulong *)(param_1 + 0x10)) {
    FUN_00474470();
    lVar2 = uVar1 + 0x30;
  }
  else {
    lVar2 = param_1;
    FUN_004744a4();
  }
  *(long *)(param_1 + 8) = lVar2;
  return lVar2 + -0x30;
}



/* Entry: 00474378; end: 0047439f;  */

void FUN_00474378(long param_1)

{
  FUN_004743a0();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xe0) = 0;
  return;
}



/* Entry: 004743a0; end: 004743bf;  */

void FUN_004743a0(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(undefined1 *)(param_1 + lVar1) = 0;
    ((undefined1 *)(param_1 + lVar1))[0x28] = 0;
    lVar1 = lVar1 + 0x30;
  } while (lVar1 != 0xc0);
  return;
}



/* Entry: 004743c0; end: 0047442f;  */

undefined8 FUN_004743c0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x004743f4(&uStack_28);
  return param_1;
}



/* Entry: 00474430; end: 00474437;  */

void FUN_00474430(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 00474438; end: 0047446f;  */

void FUN_00474438(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 00474470; end: 004744a3;  */

void FUN_00474470(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  FUN_00474564(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 004744a4; end: 00474563;  */

long FUN_004744a4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_68 [16];
  long lStack_58;
  
  plVar1 = param_1;
  FUN_0047459c(param_1,(param_1[1] - *param_1) / 0x30 + 1);
  FUN_00474684(auStack_68,plVar1,(param_1[1] - *param_1) / 0x30,param_1 + 2);
  FUN_00474564(lStack_58,param_2,param_3,param_4);
  lStack_58 = lStack_58 + 0x30;
  FUN_004745ec(param_1,auStack_68);
  lVar2 = param_1[1];
  func_0x00474810(auStack_68);
  return lVar2;
}



/* Entry: 00474564; end: 0047459b;  */

void FUN_00474564(long param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  uVar1 = *param_4;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}



/* Entry: 0047459c; end: 004745eb;  */

long * FUN_0047459c(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x555555555555555;
    }
    return plVar2;
  }
  FUN_00474670();
  plVar2 = param_1 + 2;
  lVar3 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_00474720(plVar2,*param_1,param_1[1],lVar3);
  param_2[1] = lVar3;
  lVar3 = *param_1;
  param_1[1] = lVar3;
  *param_1 = param_2[1];
  param_2[1] = lVar3;
  lVar3 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar3;
  lVar3 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar3;
  *param_2 = param_2[1];
  return plVar2;
}



/* Entry: 004745ec; end: 0047466f;  */

void FUN_004745ec(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30;
  FUN_00474720(param_1 + 2,*param_1,param_1[1],lVar1);
  param_2[1] = lVar1;
  lVar1 = *param_1;
  param_1[1] = lVar1;
  *param_1 = param_2[1];
  param_2[1] = lVar1;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return;
}



/* Entry: 00474670; end: 00474683;  */

long * FUN_00474670(undefined8 param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  long lVar2;
  
  pcVar1 = "vector";
  FUN_0040d774();
  *(long *)((long)pcVar1 + 0x18) = 0;
  *(long *)((long)pcVar1 + 0x20) = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004746d0();
  }
  lVar2 = param_4 + param_3 * 0x30;
  *(long *)pcVar1 = param_4;
  *(long *)((long)pcVar1 + 8) = lVar2;
  *(long *)((long)pcVar1 + 0x10) = lVar2;
  *(long *)((long)pcVar1 + 0x18) = param_4 + param_2 * 0x30;
  return (long *)pcVar1;
}



/* Entry: 00474684; end: 004746f3;  */

long * FUN_00474684(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x004746d0();
  }
  lVar1 = param_4 + param_3 * 0x30;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x30;
  return param_1;
}



/* Entry: 004746f4; end: 0047471f;  */

void FUN_004746f4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x0077a078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_0099c630)((long)param_2 * 0x30);
    return;
  }
  FUN_0040cee8();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    puStack_38[2] = puVar1[2];
    puStack_38[1] = uVar3;
    *puStack_38 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    uVar3 = puVar1[4];
    uVar2 = puVar1[3];
    *(undefined1 *)(puStack_38 + 5) = *(undefined1 *)(puVar1 + 5);
    puStack_38[4] = uVar3;
    puStack_38[3] = uVar2;
    puStack_38 = puStack_38 + 6;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  func_0x004747cc(&uStack_60);
  return;
}



/* Entry: 00474720; end: 0047483b;  */

void FUN_00474720(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (puVar1 = param_2; puVar1 != param_3; puVar1 = puVar1 + 6) {
    uVar3 = puVar1[1];
    uVar2 = *puVar1;
    puStack_28[2] = puVar1[2];
    puStack_28[1] = uVar3;
    *puStack_28 = uVar2;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    uVar3 = puVar1[4];
    uVar2 = puVar1[3];
    *(undefined1 *)(puStack_28 + 5) = *(undefined1 *)(puVar1 + 5);
    puStack_28[4] = uVar3;
    puStack_28[3] = uVar2;
    puStack_28 = puStack_28 + 6;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_2);
  }
  func_0x004747cc(&uStack_50);
  return;
}



/* Entry: 0047483c; end: 00474843;  */

void FUN_0047483c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 00474844; end: 0047487b;  */

void FUN_00474844(long param_1,long param_2)

{
  while (param_2 != *(long *)(param_1 + 0x10)) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  }
  return;
}



/* Entry: 0047487c; end: 00474913;  */

undefined8 FUN_0047487c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  char *pcVar2;
  undefined1 auStack_38 [24];
  
  if (((uint)(param_2 >> 0x12) & 0x3fff) < 3) {
    pcVar2 = (&PTR_s_notifrecvresult_00b04d18)[param_2 >> 0x10 & 0xffff];
  }
  else {
    pcVar2 = "invalid_dim_name";
  }
  FUN_00425cb4(auStack_38,pcVar2);
  uVar1 = (uint)param_2 & 0xffff;
  if (uVar1 < 0x24) {
    pcVar2 = (&PTR_s_ready_00b04d78)[uVar1];
  }
  else {
    pcVar2 = "invalid_dimension_value";
  }
  FUN_0045a3ec(param_1,auStack_38,pcVar2);
  func_0x0047499c();
  return param_1;
}



/* Entry: 00474914; end: 00474947;  */

void FUN_00474914(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = param_1;
    FUN_0045a1e8();
    *(long *)(param_1 + 8) = lVar1;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 00474948; end: 004749a7;  */

void FUN_00474948(void)

{
  return;
}



/* Entry: 004749a8; end: 00474b0f;  */

void FUN_004749a8(undefined1 *param_1,long param_2)

{
  undefined1 auStack_158 [24];
  undefined8 uStack_140;
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [40];
  byte bStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((*(long *)(param_2 + 0xb8) == 0) || ((*(byte *)(param_2 + 0x60) & 1) == 0)) {
    *param_1 = 0;
    param_1[0x98] = 0;
  }
  else {
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    FUN_0064b608(auStack_88,param_2 + 0x48,&uStack_58);
    if ((bStack_60 & 1) == 0) {
      *param_1 = 0;
      param_1[0x98] = 0;
    }
    else {
      FUN_004736f0(auStack_c0,auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_158,param_2);
      uStack_140 = *(undefined8 *)(param_2 + 0x68);
      if (*(char *)(param_2 + 0x70) == '\0') {
        uStack_140 = 0;
      }
      FUN_00474b10(auStack_138,auStack_c0);
      FUN_00459e04(auStack_100,param_2 + 0xc0);
      FUN_00459e04(auStack_e0,param_2 + 0xe0);
      FUN_00474b88(param_1,auStack_158);
      FUN_00474ca0(auStack_158);
      FUN_00473aa8(auStack_c0);
    }
    FUN_00460a8c(auStack_88);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_58);
  }
  return;
}



/* Entry: 00474b10; end: 00474b4b;  */

undefined1 * FUN_00474b10(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_00474b4c();
  return param_1;
}



/* Entry: 00474b4c; end: 00474b5f;  */

void FUN_00474b4c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_00474b7c();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 00474b60; end: 00474b7b;  */

void FUN_00474b60(long param_1)

{
  FUN_00474b7c();
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



/* Entry: 00474b7c; end: 00474b87;  */

undefined8 * FUN_00474b7c(undefined8 *param_1,long param_2)

{
  param_1[1] = 0;
  *param_1 = &PTR_FUN_009eb878;
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    func_0x0049ac80();
  }
  FUN_0049a9d0(param_1 + 2,0,param_2 + 0x10);
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



/* Entry: 00474b88; end: 00474ba3;  */

void FUN_00474b88(long param_1)

{
  FUN_00474ba4();
  *(undefined1 *)(param_1 + 0x98) = 1;
  return;
}



/* Entry: 00474ba4; end: 00474c5f;  */

undefined8 * FUN_00474ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  param_1[3] = param_2[3];
  FUN_00474c60(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    uVar2 = param_2[0xc];
    uVar1 = param_2[0xb];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xb] = uVar1;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xb] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if (*(char *)(param_2 + 0x12) == '\x01') {
    uVar2 = param_2[0x10];
    uVar1 = param_2[0xf];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    param_1[0xf] = uVar1;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0xf] = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  return param_1;
}



/* Entry: 00474c60; end: 00474c8b;  */

undefined1 * FUN_00474c60(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x30] = 0;
  FUN_00474c8c();
  return param_1;
}



/* Entry: 00474c8c; end: 00474c9f;  */

void FUN_00474c8c(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_00473ae4();
    *(undefined1 *)(param_1 + 0x30) = 1;
    return;
  }
  return;
}



/* Entry: 00474ca0; end: 00474cd7;  */

void FUN_00474ca0(long param_1)

{
  FUN_00457530(param_1 + 0x78);
  FUN_00457530(param_1 + 0x58);
  FUN_00473aa8(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00779c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_00998a30)
            (param_1);
  return;
}



/* Entry: 00474cd8; end: 00474cdf;  */

void FUN_00474cd8(void)

{
  return;
}



/* Entry: 00474ce0; end: 00475027;  */

void FUN_00474ce0(undefined8 *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 ***pppuVar6;
  undefined8 ***pppuVar7;
  char *pcVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  ulong uVar11;
  char *pcVar12;
  undefined8 ***pppuVar13;
  undefined8 ****ppppuVar14;
  long lVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 ***pppuStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 ***apppuStack_a8 [4];
  undefined8 ***pppuStack_88;
  undefined8 ***pppuStack_80;
  undefined8 ***pppuStack_78;
  undefined8 ***pppuStack_70;
  undefined8 ***pppuStack_68;
  
  if ((*(byte *)(param_3 + 0x50) & 1) == 0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    uVar11 = *(ulong *)(param_3 + 0x30);
    puVar2 = (ulong *)(param_3 + 0x30);
    if ((uVar11 & 1) != 0) {
      puVar2 = (ulong *)(uVar11 + 7);
    }
    pppuStack_b8 = (undefined8 ****)0x0;
    pppuStack_b0 = (undefined8 ****)0x0;
    apppuStack_a8[0] = (undefined8 ****)0x0;
    for (lVar15 = (long)*(int *)(param_3 + 0x38) << 3; lVar15 != 0; lVar15 = lVar15 + -8) {
      if (*(int *)(*puVar2 + 0x1c) == 1) {
        if ((*(char *)(param_2 + 0x18) == '\x01') && ((*(byte *)(param_3 + 0x70) & 1) != 0)) {
          pcVar8 = "conversation_id=";
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&pppuStack_88,"conversation_id=",param_3 + 0x58);
          func_0x00475364();
          if (*(char **)(param_2 + 8) <= pcVar8 + 1) {
            func_0x00475338();
            func_0x00475370();
            func_0x00475318();
            func_0x00475348();
            func_0x00475350();
            pppuVar13 = (undefined8 ***)0x10000000000;
            goto LAB_00474e78;
          }
          func_0x00475338();
          func_0x00475370();
          func_0x00475318();
          func_0x00475348();
          func_0x00475350();
        }
      }
      else if (((*(int *)(*puVar2 + 0x1c) == 2) && (*(char *)(param_2 + 0x30) == '\x01')) &&
              ((*(byte *)(param_3 + 0x90) & 1) != 0)) {
        pcVar8 = "bundle_id=";
        __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                  (&pppuStack_88,"bundle_id=",param_3 + 0x78);
        func_0x00475364();
        pcVar12 = *(char **)(param_2 + 0x20);
        if (pcVar12 < pcVar8 + 1) {
          func_0x00475328();
          func_0x00475370();
          func_0x00475318();
        }
        else {
          func_0x00475328();
          func_0x00475370();
          func_0x00475318();
        }
        func_0x00475348();
        func_0x00475350();
        if (pcVar12 < pcVar8 + 1) {
          pppuVar13 = (undefined8 ***)0x100000000000001;
LAB_00474e78:
          if (pppuStack_b0 < apppuStack_a8[0]) {
            *pppuStack_b0 = pppuVar13;
            pppuStack_b0 = pppuStack_b0 + 1;
          }
          else {
            ppppuVar9 = &pppuStack_b8;
            FUN_00475284(ppppuVar9,((long)pppuStack_b0 - (long)pppuStack_b8 >> 3) + 1);
            pppuVar7 = pppuStack_b0;
            pppuVar6 = pppuStack_b8;
            pppuStack_68 = apppuStack_a8;
            if (ppppuVar9 == (undefined8 ****)0x0) {
              ppppuVar10 = (undefined8 ****)0x0;
            }
            else {
              ppppuVar10 = apppuStack_a8;
              FUN_0045cadc();
            }
            puVar1 = (undefined8 *)((long)ppppuVar10 + ((long)pppuVar7 - (long)pppuVar6));
            *puVar1 = pppuVar13;
            ppppuVar14 = (undefined8 ****)((long)puVar1 - ((long)pppuStack_b0 - (long)pppuStack_b8))
            ;
            pppuStack_88 = ppppuVar10;
            pppuStack_80 = (undefined8 ***)puVar1;
            pppuStack_78 = (undefined8 ***)(puVar1 + 1);
            pppuStack_70 = ppppuVar10 + (long)ppppuVar9;
            _memcpy(ppppuVar14);
            pppuVar6 = pppuStack_78;
            pppuVar13 = apppuStack_a8[0];
            apppuStack_a8[0] = pppuStack_70;
            pppuStack_b0 = pppuStack_78;
            pppuStack_78 = pppuStack_b8;
            pppuStack_70 = pppuVar13;
            pppuStack_88 = pppuStack_b8;
            pppuStack_80 = pppuStack_b8;
            pppuStack_b8 = ppppuVar14;
            FUN_004752c4(&pppuStack_88);
            pppuStack_b0 = pppuVar6;
          }
        }
      }
      puVar2 = puVar2 + 1;
    }
    if (pppuStack_b8 == pppuStack_b0) {
      *(undefined1 *)param_1 = 0;
      *(undefined1 *)(param_1 + 3) = 0;
    }
    else {
      FUN_0045c9cc(&uStack_d0,&pppuStack_b8);
      uVar5 = uStack_c0;
      uVar4 = uStack_c8;
      uVar3 = uStack_d0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_d0 = 0;
      param_1[1] = uVar4;
      *param_1 = uVar3;
      param_1[2] = uVar5;
      pppuStack_80 = (undefined8 ****)0x0;
      pppuStack_78 = (undefined8 ****)0x0;
      pppuStack_88 = (undefined8 ****)0x0;
      *(undefined1 *)(param_1 + 3) = 1;
      FUN_0045cb80(&pppuStack_88);
      FUN_0045cb80(&uStack_d0);
    }
    FUN_0045cb80(&pppuStack_b8);
  }
  return;
}



/* Entry: 00475028; end: 0047502f;  */

void FUN_00475028(void)

{
  return;
}


