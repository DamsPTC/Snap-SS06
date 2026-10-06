/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105979394; end: 1059793c3;  */

undefined8 * FUN_105979394(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_1108c45c0;
  puVar1 = param_1;
  func_0x00010044fab4();
  param_1[1] = puVar1;
  return param_1;
}



/* Entry: 1059793c4; end: 10597952b;  */

void FUN_1059793c4(long param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puStack_70;
  undefined8 *puStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar4 = (undefined8 *)0x90;
  __Znwm();
  plVar6 = puVar4 + 1;
  *plVar6 = 0;
  puVar4[2] = 0;
  *puVar4 = &PTR_DAT_1108c4610;
  puVar7 = puVar4 + 3;
  *puVar7 = &PTR_DAT_110cee9a8;
  puVar4[6] = 0;
  puVar4[5] = 0;
  puVar4[8] = 0;
  puVar4[7] = 0;
  puVar4[10] = 0;
  puVar4[9] = 0;
  puVar4[0xc] = 0;
  puVar4[0xb] = 0;
  puVar4[0xe] = 0;
  puVar4[0xd] = 0;
  puVar4[0x10] = 0;
  puVar4[0xf] = 0;
  puVar4[0x11] = 0;
  puVar4[4] = &PTR_DAT_110ceea10;
  puStack_60 = puVar7;
  puStack_58 = puVar4;
  if (*(char *)(param_2 + 0x20) == '\x01') {
    func_0x0001002a8234(puVar4 + 10,param_2);
  }
  if (*(char *)(param_3 + 0x18) == '\x01') {
    uVar1 = *(ulong *)(param_3 + 8);
    if (-1 < (char)*(byte *)(param_3 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_3 + 0x17);
    }
    if (uVar1 != 0) {
      func_0x0001002a8234(puVar4 + 6,param_3);
    }
  }
  if ((param_4 >> 0x20 & 1) != 0) {
    *(int *)(puVar4 + 0xe) = (int)param_4;
    *(undefined1 *)((long)puVar4 + 0x74) = 1;
  }
  *(undefined4 *)(puVar4 + 0xf) = 2;
  *(undefined1 *)((long)puVar4 + 0x7c) = 1;
  uVar5 = *(undefined8 *)(param_1 + 8);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar3) {
      *plVar6 = *plVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_70 = puVar7;
  puStack_68 = puVar4;
  func_0x00010b4a72ec(uVar5,&puStack_70);
  func_0x000105979594(&puStack_70);
  func_0x00010597956c(&puStack_60);
  return;
}



/* Entry: 10597952c; end: 105979537;  */

void FUN_10597952c(void)

{
  return;
}



/* Entry: 105979538; end: 10597954b;  */

void FUN_105979538(void)

{
  func_0x00010597955c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10597954c; end: 10597956b;  */

void FUN_10597954c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105979554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10597956c; end: 1059795bb;  */

long FUN_10597956c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1059795bc; end: 1059795d3;  */

void FUN_1059795bc(void)

{
  return;
}



/* Entry: 1059795d4; end: 10597961f;  */

void FUN_1059795d4(long param_1)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    func_0x000105979a4c();
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_80,1);
    func_0x000105979a3c();
  }
  return;
}



/* Entry: 105979620; end: 10597982b;  */

void FUN_105979620(undefined8 param_1,long *param_2)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_130 [40];
  undefined1 uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  func_0x00010002b838(auStack_e8,&UNK_10f3160fd);
  plVar1 = param_2;
  (**(code **)(*param_2 + 0x10))();
  if ((uint)plVar1 < 0x31) {
    pcVar2 = (&PTR_DAT_1108c4710)[(ulong)plVar1 & 0xffffffff];
  }
  else {
    pcVar2 = "unknown";
  }
  func_0x00010002b838(auStack_100,pcVar2);
  (**(code **)(*param_2 + 0x20))();
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar3 == lVar4) || (((lVar4 - lVar3) / 0x18 & 1U) != 0)) {
    auStack_130[0] = 0;
    uStack_108 = 0;
  }
  else {
    lVar5 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_50 = 0x3f800000;
    for (lVar6 = 0; lVar6 != (lVar4 - lVar3) / 0x18; lVar6 = lVar6 + 2) {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_a0,lVar3 + lVar5);
      FUN_105979900(auStack_88,auStack_a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_d0,*param_2 + lVar5 + 0x18);
      FUN_105979900(auStack_b8,auStack_d0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
      func_0x00010060413c(&uStack_70,auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
      lVar3 = *param_2;
      lVar4 = param_2[1];
      lVar5 = lVar5 + 0x30;
    }
    func_0x000100626ea4(auStack_130,&uStack_70);
    func_0x00010028ad98(&uStack_70);
  }
  FUN_105979974(param_1,auStack_e8,auStack_100,auStack_130);
  func_0x00010062706c(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  return;
}



/* Entry: 10597982c; end: 10597988f;  */

void FUN_10597982c(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    func_0x000105979a4c();
    (**(code **)(*plVar1 + 0x18))(plVar1,auStack_80,(long)((double)*param_3 / 1000000.0));
    func_0x000105979a3c();
  }
  return;
}



/* Entry: 105979890; end: 1059798df;  */

void FUN_105979890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auStack_80 [96];
  
  plVar1 = *(long **)(param_1 + 8);
  if (plVar1 != (long *)0x0) {
    func_0x000105979a4c();
    (**(code **)(*plVar1 + 0x20))(plVar1,auStack_80,param_3);
    func_0x000105979a3c();
  }
  return;
}



/* Entry: 1059798e0; end: 1059798e3;  */

undefined8 * FUN_1059798e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c46c8;
  FUN_10595d480(param_1 + 1);
  return param_1;
}



/* Entry: 1059798e4; end: 1059798f7;  */

void FUN_1059798e4(void)

{
  func_0x000105979a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1059798f8; end: 1059798ff;  */

undefined8 FUN_1059798f8(void)

{
  return 1;
}



/* Entry: 105979900; end: 105979973;  */

void FUN_105979900(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if ((long)*(char *)((long)param_2 + 0x17) < 0) {
    puVar3 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)((long)puVar3 + param_2[1]);
  }
  else {
    puVar2 = (undefined8 *)((long)param_2 + (long)*(char *)((long)param_2 + 0x17));
    puVar3 = param_2;
  }
  for (; puVar3 != puVar2; puVar3 = (undefined8 *)((long)puVar3 + 1)) {
    uVar1 = *(undefined1 *)puVar3;
    ___tolower();
    *(undefined1 *)puVar3 = uVar1;
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}



/* Entry: 105979974; end: 105979a2f;  */

undefined8 *
FUN_105979974(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

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
  uVar2 = param_3[1];
  uVar1 = *param_3;
  param_1[5] = param_3[2];
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  param_3[1] = 0;
  param_3[2] = 0;
  *param_3 = 0;
  func_0x000100626f0c(param_1 + 6,param_4);
  return param_1;
}



/* Entry: 105979a30; end: 105979a9b;  */

void FUN_105979a30(void)

{
  return;
}



/* Entry: 105979a9c; end: 105979abb;  */

void FUN_105979a9c(void)

{
  FUN_105979abc();
  return;
}



/* Entry: 105979abc; end: 105979b13;  */

bool FUN_105979abc(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while ((param_1 != param_2 &&
         (lVar1 = param_1, func_0x0001000e107c(param_1,param_3), (int)lVar1 != 0))) {
    param_1 = param_1 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return param_1 == param_2;
}



/* Entry: 105979b14; end: 105979b23;  */

void FUN_105979b14(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f3164a0;
  func_0x00010002b82c(param_1,&UNK_10f3164a0);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 105979b24; end: 105979b8b;  */

long FUN_105979b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010597a208();
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  FUN_105979b8c();
  func_0x000105979c04(param_1 + 0x100,param_3);
  return param_1;
}



/* Entry: 105979b8c; end: 105979c5f;  */

long FUN_105979b8c(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x18,param_2 + 0x18);
  uVar1 = *(undefined4 *)(param_2 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar1;
  func_0x0001002a969c(param_1 + 0x48,param_2 + 0x48);
  _memcpy(param_1 + 0x68,param_2 + 0x68,0x58);
  func_0x0001002a969c(param_1 + 0xc0,param_2 + 0xc0);
  func_0x0001002a969c(param_1 + 0xe0,param_2 + 0xe0);
  return param_1;
}



/* Entry: 105979c60; end: 105979def;  */

void FUN_105979c60(void)

{
  undefined ***pppuVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010597a250();
  func_0x000105979a54(auStack_60,(ulong)*(uint *)(unaff_x20 + 0x40) | 0x100000000);
  plVar2 = (long *)*unaff_x19;
  uStack_78 = 0;
  uStack_70 = 0;
  ppuStack_88 = &PTR_FUN_1108c28b8;
  uStack_80 = 0;
  uStack_68 = 6;
  func_0x00010002b838(auStack_a0,&UNK_10f3164fe);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_b8,auStack_60);
  pppuVar1 = &ppuStack_88;
  FUN_105973c64(pppuVar1,auStack_a0,auStack_b8);
  func_0x00010002b838(auStack_d0,&UNK_10f31650a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,auStack_48);
  FUN_105973c64(pppuVar1,auStack_d0,auStack_e8);
  (**(code **)(*plVar2 + 0x18))(plVar2,pppuVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  func_0x000100907750(&ppuStack_88);
  plVar2 = *(long **)(unaff_x20 + 0x100);
  (**(code **)(*plVar2 + 0x10))();
  if ((int)plVar2 != 0) {
    FUN_105979df0();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x00010597a2a4();
  return;
}



/* Entry: 105979df0; end: 10597a1d3;  */

void FUN_105979df0(void)

{
  undefined1 *puVar1;
  undefined8 *unaff_x19;
  long *plVar2;
  long unaff_x20;
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined **ppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [88];
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_230;
  func_0x00010597a250();
  FUN_1059879d4(auStack_a0,unaff_x20 + 0x48);
  func_0x00010597a2c0();
  func_0x00010002b838(auStack_d0);
  func_0x00010597a2b4();
  FUN_105987c64();
  func_0x00010597a2cc();
  func_0x00010597a2ac(auStack_b8);
  func_0x00010597a294();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x00010597a2c0();
  func_0x00010002b838(auStack_e8);
  func_0x00010597a2b4();
  FUN_105987c64();
  func_0x00010597a2cc();
  func_0x00010597a2ac(auStack_d0);
  func_0x00010597a294();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  func_0x00010597a2c0();
  func_0x00010002b838(auStack_100);
  func_0x00010597a2b4();
  FUN_105987c64();
  func_0x00010597a2cc();
  func_0x00010597a2ac(auStack_e8);
  func_0x00010597a294();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  func_0x00010597a2c0();
  func_0x00010002b838(auStack_118);
  func_0x00010597a2b4();
  FUN_105987c64();
  func_0x00010597a2cc();
  func_0x00010597a2ac(auStack_100);
  func_0x00010597a294();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  plVar2 = (long *)*unaff_x19;
  uStack_130 = 0;
  uStack_128 = 0;
  ppuStack_140 = &PTR_FUN_1108c28b8;
  uStack_138 = 0;
  uStack_120 = 7;
  func_0x00010002b838(auStack_158,&UNK_10f31650a);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_170,auStack_48);
  FUN_105973c64(&ppuStack_140,auStack_158,auStack_170);
  func_0x00010002b838(auStack_188,"campaign_type");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a0,auStack_b8);
  func_0x00010597a29c();
  func_0x00010002b838(auStack_1b8,"user_l7");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1d0,auStack_d0);
  func_0x00010597a29c();
  func_0x00010002b838(auStack_1e8,"user_region");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_200,auStack_e8);
  func_0x00010597a29c();
  func_0x00010002b838(auStack_218,"task_source");
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_230,auStack_100);
  func_0x00010597a29c();
  (**(code **)(*plVar2 + 0x18))(plVar2,puVar1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_230);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_218);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_188);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_170);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_158);
  func_0x000100907750(&ppuStack_140);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
  FUN_10596f7c4(auStack_a0);
  func_0x00010597a2a4();
  return;
}



/* Entry: 10597a1d4; end: 10597a2d7;  */

void FUN_10597a1d4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_2 + 3) == '\x01') {
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    return;
  }
  uVar1 = *param_3;
  func_0x00010002b82c(param_1,uVar1);
  func_0x000107c613d0(uVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10597a2d8; end: 10597a36b;  */

undefined4 * FUN_10597a2d8(undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  
  *param_1 = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 1) = 1;
  uVar2 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar2 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  puVar1 = &UNK_10ddc5e10;
  if (uVar2 != 0) {
    puVar1 = (undefined *)(param_2 + 0x18);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 2,puVar1);
  if (*(char *)(param_2 + 0x60) == '\x01') {
    uVar2 = *(ulong *)(param_2 + 0x50);
    if (-1 < (char)*(byte *)(param_2 + 0x5f)) {
      uVar2 = (ulong)*(byte *)(param_2 + 0x5f);
    }
    *(ulong *)(param_1 + 8) = uVar2;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return param_1;
}



/* Entry: 10597a36c; end: 10597a73b;  */

void FUN_10597a36c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [32];
  undefined4 uStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000105979a54(auStack_80,*param_1);
  plVar5 = (long *)*param_2;
  func_0x00010597a744();
  uStack_88 = 4;
  func_0x00010002b838(auStack_c0,&UNK_10f31651e);
  func_0x00010597a754(auStack_d8);
  puVar3 = auStack_a8;
  FUN_105973c64(puVar3,auStack_c0,auStack_d8);
  func_0x00010002b838(auStack_f0,&UNK_10f315e2c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_108,param_1 + 1);
  FUN_105973c64(puVar3,auStack_f0,auStack_108);
  uVar1 = *(uint *)(param_1 + 6);
  if (uVar1 >> 0x12 < 3) {
    puVar4 = (&PTR_DAT_11310f028)[uVar1 >> 0x10];
  }
  else {
    puVar4 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_68,puVar4);
  if ((uVar1 & 0xffff) < 0x24) {
    puVar4 = (&PTR_DAT_11310f088)[uVar1 & 0xffff];
  }
  else {
    puVar4 = &UNK_10f3158c2;
  }
  func_0x000100906e58(puVar3,auStack_68,puVar4);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_68);
  (**(code **)(*plVar5 + 0x18))(plVar5,puVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
  func_0x00010597a73c();
  if (*(int *)(param_1 + 6) == 2) {
    plVar5 = (long *)*param_2;
    func_0x00010597a744();
    uStack_88 = 5;
    func_0x00010002b838(auStack_120,&UNK_10f31651e);
    func_0x00010597a754(auStack_138);
    puVar3 = auStack_a8;
    FUN_105973c64(puVar3,auStack_120,auStack_138);
    FUN_1059779d8();
    func_0x00010002b838(auStack_150,&DAT_10f2faa11);
    if (*(char *)((long)param_1 + 0x3c) == '\x01') {
      uVar2 = *(undefined4 *)(param_1 + 7);
    }
    else {
      uVar2 = 0xffffffff;
    }
    __ZNSt3__19to_stringEi(auStack_168,uVar2);
    FUN_105973c64(puVar3,auStack_150,auStack_168);
    (**(code **)(*plVar5 + 0x18))(plVar5,puVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_168);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_138);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_120);
    func_0x00010597a73c();
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    plVar5 = (long *)*param_2;
    func_0x00010597a744();
    uStack_88 = 0xc;
    func_0x00010002b838(auStack_180,&UNK_10f31651e);
    func_0x00010597a754(auStack_198);
    puVar3 = auStack_a8;
    FUN_105973c64(puVar3,auStack_180,auStack_198);
    func_0x00010002b838(auStack_1b0,&UNK_10f315e2c);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1c8,param_1 + 1);
    FUN_105973c64(puVar3,auStack_1b0,auStack_1c8);
    (**(code **)(*plVar5 + 0x28))(plVar5,puVar3,param_1[4]);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_198);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_180);
    func_0x00010597a73c();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
  return;
}



/* Entry: 10597a73c; end: 10597a75b;  */

undefined8 * FUN_10597a73c(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x98) = &PTR_DAT_1108c2920;
  func_0x0001000e30f4(unaff_x29 + -0x90);
  return (undefined8 *)(unaff_x29 + -0x98);
}



/* Entry: 10597a75c; end: 10597a7bb;  */

long FUN_10597a75c(long param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 8) = 1;
  uVar1 = *(ulong *)(param_2 + 0x20);
  if (-1 < (char)*(byte *)(param_2 + 0x2f)) {
    uVar1 = (ulong)*(byte *)(param_2 + 0x2f);
  }
  puVar2 = &UNK_10ddc5e10;
  if (uVar1 != 0) {
    puVar2 = (undefined *)(param_2 + 0x18);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x10,puVar2);
  return param_1;
}



/* Entry: 10597a7bc; end: 10597ab9f;  */

void FUN_10597a7bc(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined **ppuStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000105979a54(auStack_90,*(undefined8 *)(param_1 + 1));
  plVar5 = (long *)*param_2;
  uStack_a8 = 0;
  uStack_a0 = 0;
  ppuStack_b8 = &PTR_FUN_1108c28b8;
  uStack_b0 = 0;
  uStack_98 = 8;
  func_0x00010002b838(auStack_d0,&UNK_10f31651e);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_e8,auStack_90);
  pppuVar3 = &ppuStack_b8;
  FUN_105973c64(pppuVar3,auStack_d0,auStack_e8);
  func_0x00010002b838(auStack_100,&UNK_10f31652a);
  func_0x000100906e58(pppuVar3,auStack_100,(&PTR_DAT_1108c48d8)[*param_1]);
  func_0x00010002b838(auStack_118,&UNK_10f315e2c);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_130,param_1 + 4);
  FUN_105973c64(pppuVar3,auStack_118,auStack_130);
  uVar1 = param_1[10];
  if (uVar1 >> 0x12 < 3) {
    puVar4 = (&PTR_DAT_11310f028)[uVar1 >> 0x10];
  }
  else {
    puVar4 = &UNK_10f3158b1;
  }
  func_0x00010002b838(auStack_78,puVar4);
  if ((uVar1 & 0xffff) < 0x24) {
    puVar4 = (&PTR_DAT_11310f088)[uVar1 & 0xffff];
  }
  else {
    puVar4 = &UNK_10f3158c2;
  }
  func_0x000100906e58(pppuVar3,auStack_78,puVar4);
  FUN_10597aba0();
  (**(code **)(*plVar5 + 0x18))(plVar5,pppuVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_130);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_118);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_100);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  func_0x00010597aba8();
  if (param_1[10] == 0x2000b) {
    plVar5 = (long *)*param_2;
    uStack_a8 = 0;
    uStack_a0 = 0;
    ppuStack_b8 = &PTR_FUN_1108c28b8;
    uStack_b0 = 0;
    uStack_98 = 0xb;
    func_0x00010002b838(auStack_148,&UNK_10f31651e);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_160,auStack_90)
    ;
    pppuVar3 = &ppuStack_b8;
    FUN_105973c64(pppuVar3,auStack_148,auStack_160);
    func_0x00010002b838(auStack_178,&UNK_10f31652a);
    func_0x000100906e58(pppuVar3,auStack_178,(&PTR_DAT_1108c48d8)[*param_1]);
    uVar1 = param_1[0xb];
    if (uVar1 < 0xc0000) {
      puVar4 = (&PTR_DAT_11310f028)[uVar1 >> 0x10];
    }
    else {
      puVar4 = &UNK_10f3158b1;
    }
    func_0x00010002b838(auStack_78,puVar4);
    if ((uVar1 & 0xffff) < 0x24) {
      puVar4 = (&PTR_DAT_11310f088)[uVar1 & 0xffff];
    }
    else {
      puVar4 = &UNK_10f3158c2;
    }
    func_0x000100906e58(pppuVar3,auStack_78,puVar4);
    FUN_10597aba0();
    func_0x00010002b838(auStack_190,&DAT_10f2faa11);
    if ((char)param_1[0xd] == '\x01') {
      iVar2 = param_1[0xc];
    }
    else {
      iVar2 = -1;
    }
    __ZNSt3__19to_stringEi(auStack_1a8,iVar2);
    FUN_105973c64(pppuVar3,auStack_190,auStack_1a8);
    (**(code **)(*plVar5 + 0x18))(plVar5,pppuVar3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_190);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_178);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_160);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_148);
    func_0x00010597aba8();
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  return;
}



/* Entry: 10597aba0; end: 10597abaf;  */

void FUN_10597aba0(void)

{
  long unaff_x29;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)
            (unaff_x29 + -0x68);
  return;
}



/* Entry: 10597abb0; end: 10597ac47;  */

void FUN_10597abb0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 in_ZR;
  code **ppcVar3;
  undefined1 *puVar4;
  code *pcVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  code *pcVar9;
  code *extraout_x8;
  code *pcVar10;
  undefined **ppuVar11;
  code *extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar12;
  ulong uVar13;
  code **ppcVar14;
  long lVar15;
  undefined *puVar16;
  undefined1 auStack_5c0 [24];
  undefined1 auStack_5a8 [24];
  undefined1 auStack_590 [24];
  undefined1 auStack_578 [24];
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined8 *apuStack_518 [12];
  long lStack_4b8;
  undefined1 uStack_4b0;
  undefined8 uStack_4a8;
  ulong *puStack_4a0;
  ulong uStack_498;
  long lStack_438;
  undefined **ppuStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_410;
  byte bStack_338;
  undefined **ppuStack_330;
  ulong uStack_328;
  code *pcStack_320;
  ulong uStack_318;
  undefined4 uStack_310;
  long lStack_2b0;
  byte bStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined1 auStack_200 [8];
  undefined **ppuStack_1f8;
  undefined1 auStack_1f0 [240];
  char cStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  undefined1 uStack_e8;
  undefined1 auStack_e0 [32];
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcStack_58 = FUN_10597bee8;
  ppuStack_50 = &PTR_DAT_1108c49a8;
  uStack_48 = param_2;
  FUN_10597ac48();
  ppcVar3 = &pcStack_58;
  func_0x0001005ed4a0();
  func_0x00010597c0d0(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010597c040();
  func_0x000104bd46a0();
  puVar4 = auStack_e0;
  func_0x00010007847c(puVar4,&UNK_10f316b24);
  puStack_f8 = (undefined *)0x0;
  func_0x0001004b4e98();
  uStack_e8 = 1;
  ppcVar14 = ppcVar3 + 6;
  if (*(char *)(ppcVar3 + 7) == '\0') {
    ppcVar14 = (code **)&UNK_10ddc5e28;
  }
  pcVar9 = *ppcVar14;
  if ((long)pcVar9 < 1) {
    pcVar9 = (code *)0x10;
  }
  pcVar5 = ppcVar3[0x17];
  puStack_f0 = puVar4;
  func_0x00010597c064();
  (*extraout_x8)();
  pcVar10 = ppcVar3[4];
  ppcVar14 = ppcVar3 + 0x11;
  FUN_10596e5f0(auStack_200,*ppcVar14,(long)pcVar5 - (long)pcVar10,ppcVar3[3],ppcVar3[6],ppcVar3[7])
  ;
  uStack_210 = 0;
  uStack_218 = 0;
  uStack_208 = 0;
  if (pcVar9 < (code *)0x492492492492493) {
    func_0x00010597c0e4(&uStack_218);
    FUN_10597bc54();
    FUN_10597bcc4(&uStack_218,&ppuStack_330);
    FUN_10597bdac(&ppuStack_330);
    lStack_228 = 0;
    lStack_230 = 0;
    uStack_220 = 0;
    if (pcVar9 < (code *)0x24924924924924a) {
      func_0x00010597c0e4(&lStack_230);
      FUN_10596badc();
      FUN_10596ba54(&lStack_230,&ppuStack_330);
      func_0x00010596bbf8(&ppuStack_330);
      ppuStack_330 = (undefined **)0x0;
      uStack_328 = uStack_328 & 0xffffffffffffff00;
      bStack_238 = 0;
      if (cStack_100 == '\0') {
        ppuVar11 = (undefined **)0x0;
      }
      else {
        FUN_105962aa8(&uStack_328,auStack_1f0);
        FUN_105962970(auStack_1f0);
        ppuVar11 = ppuStack_330;
      }
      ppuStack_330 = ppuStack_1f8;
      ppuStack_1f8 = ppuVar11;
      _bzero(&ppuStack_430,0x100);
      do {
        if ((((bStack_238 & 1) == 0) && ((bStack_338 & 1) == 0)) || (ppuStack_330 == ppuStack_430))
        {
          func_0x00010597c090();
          puVar6 = &uStack_328;
          FUN_105962b28();
          lVar15 = lStack_230;
          lVar1 = lStack_228;
          if (uStack_218 != uStack_210) {
            uStack_4a8 = 0;
            puStack_4a0 = (ulong *)0x0;
            uStack_498 = uStack_498 & 0xffffffffffffff00;
            func_0x0001004b4e98();
            uStack_498 = CONCAT71(uStack_498._1_7_,1);
            pcVar9 = *ppcVar14;
            puStack_4a0 = puVar6;
            func_0x00010002b838(auStack_530,&UNK_10f3156f2);
            FUN_10596e184(&ppuStack_330,pcVar9,auStack_530);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_530);
            uVar12 = uStack_210;
            for (uVar13 = uStack_218; uVar13 != uVar12; uVar13 = uVar13 + 0x38) {
              FUN_10596e648(*ppcVar14,uVar13,pcVar5,*(undefined8 *)(uVar13 + 0x18));
            }
            func_0x00010054cbac(&ppuStack_330);
            puVar7 = &uStack_4a8;
            func_0x0001005e3518();
            pcVar9 = ppcVar3[0x15];
            uStack_420 = 0;
            uStack_418 = 0;
            ppuStack_430 = &PTR_FUN_1108c28b8;
            uStack_428 = 0;
            uStack_410 = 0x14;
            pppuVar8 = &ppuStack_430;
            apuStack_518[0] = puVar7;
            func_0x00010597c0a8(pppuVar8);
            (**(code **)(*(long *)pcVar9 + 0x20))(pcVar9,pppuVar8,apuStack_518);
            func_0x000100907750(&ppuStack_430);
            func_0x00010054d120(&ppuStack_330);
            lVar15 = lStack_230;
            lVar1 = lStack_228;
          }
          for (; lVar15 != lVar1; lVar15 = lVar15 + 0x70) {
            ppuStack_430 = (undefined **)0x0;
            uStack_428 = 0;
            ppuStack_330 = (undefined **)((ulong)ppuStack_330 & 0xffffffffffffff00);
            uStack_318 = uStack_318 & 0xffffffffffffff00;
            func_0x00010597c064(ppcVar3[0x13]);
            (*extraout_x8_00)();
            FUN_10596a8f8(&ppuStack_330);
            func_0x00010595cc04(&ppuStack_430);
          }
          pcVar9 = ppcVar3[0x19];
          func_0x00010597c064();
          (*extraout_x8_01)();
          ppuStack_330 = (undefined **)(pcVar5 + -(long)pcVar9);
          if (pcVar9 <= pcVar5) {
            pcStack_320 = ppcVar3[3];
            uStack_328 = (long)pcVar5 - (long)pcVar10;
            FUN_10597c4c8(ppcVar14,ppcVar3 + 0x15,&ppuStack_330);
          }
          uVar12 = uStack_210;
          for (uVar13 = uStack_218; pcVar9 = ppcVar3[0x15], uVar13 != uVar12; uVar13 = uVar13 + 0x38
              ) {
            uStack_328 = 0;
            pcStack_320 = (code *)0x0;
            uStack_318 = 0;
            ppuStack_330 = &PTR_FUN_1108c28b8;
            uStack_310 = 0x12;
            func_0x00010002b838(auStack_548,&UNK_10f315e2c);
            uVar2 = *(ulong *)(uVar13 + 0x28);
            if (-1 < (char)*(byte *)(uVar13 + 0x37)) {
              uVar2 = (ulong)*(byte *)(uVar13 + 0x37);
            }
            puVar16 = &UNK_10ddc5e10;
            if (uVar2 != 0) {
              puVar16 = (undefined *)(uVar13 + 0x20);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_560,puVar16);
            pppuVar8 = &ppuStack_330;
            FUN_105973c64(pppuVar8,auStack_548,auStack_560);
            func_0x00010002b838(auStack_578,&UNK_10f316b66);
            func_0x000105979a8c(auStack_590,*(undefined8 *)(uVar13 + 0x18));
            FUN_105973c64(pppuVar8,auStack_578,auStack_590);
            (**(code **)(*(long *)pcVar9 + 0x18))(pcVar9,pppuVar8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_590);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_578);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_560);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_548);
            func_0x00010597c070();
          }
          pcStack_320 = (code *)0x0;
          uStack_318 = 0;
          uStack_328 = 0;
          ppuStack_330 = &PTR_FUN_1108c28b8;
          uStack_310 = 0x11;
          pppuVar8 = &ppuStack_330;
          func_0x00010597c0a8(pppuVar8);
          func_0x00010002b838(auStack_5a8,&UNK_10f316b77);
          func_0x000105979a7c(auStack_5c0,(lStack_228 - lStack_230) / 0x70);
          FUN_105973c64(pppuVar8,auStack_5a8,auStack_5c0);
          (**(code **)(*(long *)pcVar9 + 0x18))(pcVar9,pppuVar8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5c0);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5a8);
          func_0x00010597c070();
          func_0x0001005529b4(&puStack_f8);
          pcVar9 = ppcVar3[0x15];
          pcStack_320 = (code *)0x0;
          uStack_318 = 0;
          uStack_328 = 0;
          ppuStack_330 = &PTR_FUN_1108c28b8;
          uStack_310 = 0x16;
          pppuVar8 = &ppuStack_330;
          func_0x00010597c0a8(pppuVar8);
          func_0x00010002b838(&ppuStack_430,PTR_DAT_11310f060);
          func_0x000100906e58(pppuVar8,&ppuStack_430,PTR_DAT_11310f148);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_430);
          ppuVar11 = &puStack_f8;
          func_0x0001005e3518();
          ppuStack_430 = ppuVar11;
          (**(code **)(*(long *)pcVar9 + 0x20))(pcVar9,pppuVar8,&ppuStack_430);
          func_0x00010597c070();
          func_0x00010596778c(&lStack_230);
          FUN_10597b5e8(&uStack_218);
          FUN_10597bf14(auStack_200);
          func_0x000100078bd8(auStack_e0);
          return;
        }
        if ((bStack_238 & 1) == 0) {
          puVar16 = ppuStack_330[1];
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (apuStack_518,ppuStack_330 + 0xb);
          func_0x0001004c3cd0(&uStack_4a8,&UNK_10f2e0451,apuStack_518);
          func_0x00010bcc7444(puVar16,0x65,&uStack_4a8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_4a8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_518);
        }
        uVar13 = uStack_210;
        lVar1 = lStack_2b0 + 1;
        lStack_438 = lVar1;
        if (uStack_210 < uStack_208) {
          func_0x00010597c048();
          uVar13 = uVar13 + 0x38;
        }
        else {
          lVar15 = (long)(uStack_210 - uStack_218) / 0x38;
          uVar13 = lVar15 + 1;
          if (0x492492492492492 < uVar13) {
            func_0x00010597bc40();
            goto LAB_10597b324;
          }
          uVar2 = (long)(uStack_208 - uStack_218) / 0x38;
          uVar12 = uVar2 * 2;
          if (uVar12 < uVar13 || uVar12 - uVar13 == 0) {
            uVar12 = uVar13;
          }
          if (0x249249249249248 < uVar2) {
            uVar12 = 0x492492492492492;
          }
          FUN_10597bc54(&uStack_4a8,uVar12,lVar15,&uStack_208);
          uVar13 = uStack_498;
          func_0x00010597c048();
          uStack_498 = uVar13 + 0x38;
          FUN_10597bcc4(&uStack_218,&uStack_4a8);
          uVar13 = uStack_210;
          FUN_10597bdac(&uStack_4a8);
        }
        uStack_210 = uVar13;
        FUN_105987750(apuStack_518,&uStack_328,*(undefined4 *)(ppcVar3 + 0x10));
        uStack_4b0 = 1;
        lStack_4b8 = lVar1;
        FUN_105966214(&uStack_4a8,apuStack_518);
        func_0x00010595cb7c(apuStack_518);
        FUN_10596b88c(&lStack_230,&uStack_4a8);
        func_0x00010595cb7c(&uStack_4a8);
        FUN_1059628d0(&ppuStack_330);
      } while( true );
    }
    FUN_1059675d4();
  }
  else {
    func_0x00010597bc40();
  }
LAB_10597b324:
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10597b328);
  (*pcVar9)();
}



/* Entry: 10597ac48; end: 10597b527;  */

void FUN_10597ac48(long param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  ulong uVar10;
  code *extraout_x8;
  undefined **ppuVar11;
  code *extraout_x8_00;
  code *extraout_x8_01;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined8 *apuStack_4b8 [12];
  long lStack_458;
  undefined1 uStack_450;
  undefined8 uStack_448;
  ulong *puStack_440;
  ulong uStack_438;
  long lStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  byte bStack_2d8;
  undefined **ppuStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined4 uStack_2b0;
  long lStack_250;
  byte bStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined **ppuStack_198;
  undefined1 auStack_190 [240];
  char cStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [32];
  
  puVar4 = auStack_80;
  func_0x00010007847c(puVar4,&UNK_10f316b24);
  puStack_98 = (undefined *)0x0;
  func_0x0001004b4e98();
  uStack_88 = 1;
  puVar6 = (ulong *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x38) == '\0') {
    puVar6 = (ulong *)&UNK_10ddc5e28;
  }
  uVar10 = *puVar6;
  if ((long)uVar10 < 1) {
    uVar10 = 0x10;
  }
  uVar5 = *(ulong *)(param_1 + 0xb8);
  puStack_90 = puVar4;
  func_0x00010597c064();
  (*extraout_x8)();
  uVar9 = uVar5 - *(long *)(param_1 + 0x20);
  puVar13 = (undefined8 *)(param_1 + 0x88);
  FUN_10596e5f0(auStack_1a0,*puVar13,uVar9,*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  if (uVar10 < 0x492492492492493) {
    func_0x00010597c0e4(&uStack_1b8);
    FUN_10597bc54();
    FUN_10597bcc4(&uStack_1b8,&ppuStack_2d0);
    FUN_10597bdac(&ppuStack_2d0);
    lStack_1c8 = 0;
    lStack_1d0 = 0;
    uStack_1c0 = 0;
    if (uVar10 < 0x24924924924924a) {
      func_0x00010597c0e4(&lStack_1d0);
      FUN_10596badc();
      FUN_10596ba54(&lStack_1d0,&ppuStack_2d0);
      func_0x00010596bbf8(&ppuStack_2d0);
      ppuStack_2d0 = (undefined **)0x0;
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      bStack_1d8 = 0;
      if (cStack_a0 == '\0') {
        ppuVar11 = (undefined **)0x0;
      }
      else {
        FUN_105962aa8(&uStack_2c8,auStack_190);
        FUN_105962970(auStack_190);
        ppuVar11 = ppuStack_2d0;
      }
      ppuStack_2d0 = ppuStack_198;
      ppuStack_198 = ppuVar11;
      _bzero(&ppuStack_3d0,0x100);
      do {
        if ((((bStack_1d8 & 1) == 0) && ((bStack_2d8 & 1) == 0)) || (ppuStack_2d0 == ppuStack_3d0))
        {
          func_0x00010597c090();
          puVar6 = &uStack_2c8;
          FUN_105962b28();
          lVar16 = lStack_1d0;
          lVar1 = lStack_1c8;
          if (uStack_1b8 != uStack_1b0) {
            uStack_448 = 0;
            puStack_440 = (ulong *)0x0;
            uStack_438 = uStack_438 & 0xffffffffffffff00;
            func_0x0001004b4e98();
            uStack_438 = CONCAT71(uStack_438._1_7_,1);
            uVar14 = *puVar13;
            puStack_440 = puVar6;
            func_0x00010002b838(auStack_4d0,&UNK_10f3156f2);
            FUN_10596e184(&ppuStack_2d0,uVar14,auStack_4d0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d0);
            uVar12 = uStack_1b0;
            for (uVar10 = uStack_1b8; uVar10 != uVar12; uVar10 = uVar10 + 0x38) {
              FUN_10596e648(*puVar13,uVar10,uVar5,*(undefined8 *)(uVar10 + 0x18));
            }
            func_0x00010054cbac(&ppuStack_2d0);
            puVar7 = &uStack_448;
            func_0x0001005e3518();
            plVar15 = *(long **)(param_1 + 0xa8);
            uStack_3c0 = 0;
            uStack_3b8 = 0;
            ppuStack_3d0 = &PTR_FUN_1108c28b8;
            uStack_3c8 = 0;
            uStack_3b0 = 0x14;
            pppuVar8 = &ppuStack_3d0;
            apuStack_4b8[0] = puVar7;
            func_0x00010597c0a8(pppuVar8);
            (**(code **)(*plVar15 + 0x20))(plVar15,pppuVar8,apuStack_4b8);
            func_0x000100907750(&ppuStack_3d0);
            func_0x00010054d120(&ppuStack_2d0);
            lVar16 = lStack_1d0;
            lVar1 = lStack_1c8;
          }
          for (; lVar16 != lVar1; lVar16 = lVar16 + 0x70) {
            ppuStack_3d0 = (undefined **)0x0;
            uStack_3c8 = 0;
            ppuStack_2d0 = (undefined **)((ulong)ppuStack_2d0 & 0xffffffffffffff00);
            uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
            func_0x00010597c064(*(undefined8 *)(param_1 + 0x98));
            (*extraout_x8_00)();
            FUN_10596a8f8(&ppuStack_2d0);
            func_0x00010595cc04(&ppuStack_3d0);
          }
          uVar10 = *(ulong *)(param_1 + 200);
          func_0x00010597c064();
          (*extraout_x8_01)();
          ppuStack_2d0 = (undefined **)(uVar5 - uVar10);
          if (uVar10 <= uVar5) {
            uStack_2c0 = *(undefined8 *)(param_1 + 0x18);
            uStack_2c8 = uVar9;
            FUN_10597c4c8(puVar13,param_1 + 0xa8,&ppuStack_2d0);
          }
          uVar5 = uStack_1b0;
          for (uVar10 = uStack_1b8; plVar15 = *(long **)(param_1 + 0xa8), uVar10 != uVar5;
              uVar10 = uVar10 + 0x38) {
            uStack_2c8 = 0;
            uStack_2c0 = 0;
            uStack_2b8 = 0;
            ppuStack_2d0 = &PTR_FUN_1108c28b8;
            uStack_2b0 = 0x12;
            func_0x00010002b838(auStack_4e8,&UNK_10f315e2c);
            uVar9 = *(ulong *)(uVar10 + 0x28);
            if (-1 < (char)*(byte *)(uVar10 + 0x37)) {
              uVar9 = (ulong)*(byte *)(uVar10 + 0x37);
            }
            puVar17 = &UNK_10ddc5e10;
            if (uVar9 != 0) {
              puVar17 = (undefined *)(uVar10 + 0x20);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_500,puVar17);
            pppuVar8 = &ppuStack_2d0;
            FUN_105973c64(pppuVar8,auStack_4e8,auStack_500);
            func_0x00010002b838(auStack_518,&UNK_10f316b66);
            func_0x000105979a8c(auStack_530,*(undefined8 *)(uVar10 + 0x18));
            FUN_105973c64(pppuVar8,auStack_518,auStack_530);
            (**(code **)(*plVar15 + 0x18))(plVar15,pppuVar8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_530);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_500);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4e8);
            func_0x00010597c070();
          }
          uStack_2c0 = 0;
          uStack_2b8 = 0;
          uStack_2c8 = 0;
          ppuStack_2d0 = &PTR_FUN_1108c28b8;
          uStack_2b0 = 0x11;
          pppuVar8 = &ppuStack_2d0;
          func_0x00010597c0a8(pppuVar8);
          func_0x00010002b838(auStack_548,&UNK_10f316b77);
          func_0x000105979a7c(auStack_560,(lStack_1c8 - lStack_1d0) / 0x70);
          FUN_105973c64(pppuVar8,auStack_548,auStack_560);
          (**(code **)(*plVar15 + 0x18))(plVar15,pppuVar8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_560);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_548);
          func_0x00010597c070();
          func_0x0001005529b4(&puStack_98);
          plVar15 = *(long **)(param_1 + 0xa8);
          uStack_2c0 = 0;
          uStack_2b8 = 0;
          uStack_2c8 = 0;
          ppuStack_2d0 = &PTR_FUN_1108c28b8;
          uStack_2b0 = 0x16;
          pppuVar8 = &ppuStack_2d0;
          func_0x00010597c0a8(pppuVar8);
          func_0x00010002b838(&ppuStack_3d0,PTR_DAT_11310f060);
          func_0x000100906e58(pppuVar8,&ppuStack_3d0,PTR_DAT_11310f148);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3d0);
          ppuVar11 = &puStack_98;
          func_0x0001005e3518();
          ppuStack_3d0 = ppuVar11;
          (**(code **)(*plVar15 + 0x20))(plVar15,pppuVar8,&ppuStack_3d0);
          func_0x00010597c070();
          func_0x00010596778c(&lStack_1d0);
          FUN_10597b5e8(&uStack_1b8);
          FUN_10597bf14(auStack_1a0);
          func_0x000100078bd8(auStack_80);
          return;
        }
        if ((bStack_1d8 & 1) == 0) {
          puVar17 = ppuStack_2d0[1];
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (apuStack_4b8,ppuStack_2d0 + 0xb);
          func_0x0001004c3cd0(&uStack_448,&UNK_10f2e0451,apuStack_4b8);
          func_0x00010bcc7444(puVar17,0x65,&uStack_448);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_448);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_4b8);
        }
        uVar10 = uStack_1b0;
        lVar1 = lStack_250 + 1;
        lStack_3d8 = lVar1;
        if (uStack_1b0 < uStack_1a8) {
          func_0x00010597c048();
          uVar10 = uVar10 + 0x38;
        }
        else {
          lVar16 = (long)(uStack_1b0 - uStack_1b8) / 0x38;
          uVar10 = lVar16 + 1;
          if (0x492492492492492 < uVar10) {
            func_0x00010597bc40();
            goto LAB_10597b324;
          }
          uVar2 = (long)(uStack_1a8 - uStack_1b8) / 0x38;
          uVar12 = uVar2 * 2;
          if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
            uVar12 = uVar10;
          }
          if (0x249249249249248 < uVar2) {
            uVar12 = 0x492492492492492;
          }
          FUN_10597bc54(&uStack_448,uVar12,lVar16,&uStack_1a8);
          uVar10 = uStack_438;
          func_0x00010597c048();
          uStack_438 = uVar10 + 0x38;
          FUN_10597bcc4(&uStack_1b8,&uStack_448);
          uVar10 = uStack_1b0;
          FUN_10597bdac(&uStack_448);
        }
        uStack_1b0 = uVar10;
        FUN_105987750(apuStack_4b8,&uStack_2c8,*(undefined4 *)(param_1 + 0x80));
        uStack_450 = 1;
        lStack_458 = lVar1;
        FUN_105966214(&uStack_448,apuStack_4b8);
        func_0x00010595cb7c(apuStack_4b8);
        FUN_10596b88c(&lStack_1d0,&uStack_448);
        func_0x00010595cb7c(&uStack_448);
        FUN_1059628d0(&ppuStack_2d0);
      } while( true );
    }
    FUN_1059675d4();
  }
  else {
    func_0x00010597bc40();
  }
LAB_10597b324:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10597b328);
  (*pcVar3)();
}



/* Entry: 10597b528; end: 10597b57f;  */

void FUN_10597b528(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  ulong uVar9;
  ulong uVar10;
  code *extraout_x8;
  undefined **ppuVar11;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  undefined *puVar17;
  undefined1 auStack_560 [24];
  undefined1 auStack_548 [24];
  undefined1 auStack_530 [24];
  undefined1 auStack_518 [24];
  undefined1 auStack_500 [24];
  undefined1 auStack_4e8 [24];
  undefined1 auStack_4d0 [24];
  undefined8 *apuStack_4b8 [12];
  long lStack_458;
  undefined1 uStack_450;
  undefined8 uStack_448;
  ulong *puStack_440;
  ulong uStack_438;
  long lStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined4 uStack_3b0;
  byte bStack_2d8;
  undefined **ppuStack_2d0;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  ulong uStack_2b8;
  undefined4 uStack_2b0;
  long lStack_250;
  byte bStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 auStack_1a0 [8];
  undefined **ppuStack_198;
  undefined1 auStack_190 [240];
  char cStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [32];
  
  if (param_2 == 1) {
    uVar10 = *(ulong *)(param_1 + 0xd8);
    func_0x00010597c064();
    (*extraout_x8_02)();
    if ((uVar10 & 1) != 0) {
      return;
    }
  }
  else if ((param_2 == 0) && ((*(byte *)(param_1 + 0x40) & 1) == 0)) {
    return;
  }
  puVar4 = auStack_80;
  func_0x00010007847c(puVar4,&UNK_10f316b24);
  puStack_98 = (undefined *)0x0;
  func_0x0001004b4e98();
  uStack_88 = 1;
  puVar6 = (ulong *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x38) == '\0') {
    puVar6 = (ulong *)&UNK_10ddc5e28;
  }
  uVar10 = *puVar6;
  if ((long)uVar10 < 1) {
    uVar10 = 0x10;
  }
  uVar5 = *(ulong *)(param_1 + 0xb8);
  puStack_90 = puVar4;
  func_0x00010597c064();
  (*extraout_x8)();
  uVar9 = uVar5 - *(long *)(param_1 + 0x20);
  puVar13 = (undefined8 *)(param_1 + 0x88);
  FUN_10596e5f0(auStack_1a0,*puVar13,uVar9,*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a8 = 0;
  if (uVar10 < 0x492492492492493) {
    func_0x00010597c0e4(&uStack_1b8);
    FUN_10597bc54();
    FUN_10597bcc4(&uStack_1b8,&ppuStack_2d0);
    FUN_10597bdac(&ppuStack_2d0);
    lStack_1c8 = 0;
    lStack_1d0 = 0;
    uStack_1c0 = 0;
    if (uVar10 < 0x24924924924924a) {
      func_0x00010597c0e4(&lStack_1d0);
      FUN_10596badc();
      FUN_10596ba54(&lStack_1d0,&ppuStack_2d0);
      func_0x00010596bbf8(&ppuStack_2d0);
      ppuStack_2d0 = (undefined **)0x0;
      uStack_2c8 = uStack_2c8 & 0xffffffffffffff00;
      bStack_1d8 = 0;
      if (cStack_a0 == '\0') {
        ppuVar11 = (undefined **)0x0;
      }
      else {
        FUN_105962aa8(&uStack_2c8,auStack_190);
        FUN_105962970(auStack_190);
        ppuVar11 = ppuStack_2d0;
      }
      ppuStack_2d0 = ppuStack_198;
      ppuStack_198 = ppuVar11;
      _bzero(&ppuStack_3d0,0x100);
      do {
        if ((((bStack_1d8 & 1) == 0) && ((bStack_2d8 & 1) == 0)) || (ppuStack_2d0 == ppuStack_3d0))
        {
          func_0x00010597c090();
          puVar6 = &uStack_2c8;
          FUN_105962b28();
          lVar16 = lStack_1d0;
          lVar1 = lStack_1c8;
          if (uStack_1b8 != uStack_1b0) {
            uStack_448 = 0;
            puStack_440 = (ulong *)0x0;
            uStack_438 = uStack_438 & 0xffffffffffffff00;
            func_0x0001004b4e98();
            uStack_438 = CONCAT71(uStack_438._1_7_,1);
            uVar14 = *puVar13;
            puStack_440 = puVar6;
            func_0x00010002b838(auStack_4d0,&UNK_10f3156f2);
            FUN_10596e184(&ppuStack_2d0,uVar14,auStack_4d0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4d0);
            uVar12 = uStack_1b0;
            for (uVar10 = uStack_1b8; uVar10 != uVar12; uVar10 = uVar10 + 0x38) {
              FUN_10596e648(*puVar13,uVar10,uVar5,*(undefined8 *)(uVar10 + 0x18));
            }
            func_0x00010054cbac(&ppuStack_2d0);
            puVar7 = &uStack_448;
            func_0x0001005e3518();
            plVar15 = *(long **)(param_1 + 0xa8);
            uStack_3c0 = 0;
            uStack_3b8 = 0;
            ppuStack_3d0 = &PTR_FUN_1108c28b8;
            uStack_3c8 = 0;
            uStack_3b0 = 0x14;
            pppuVar8 = &ppuStack_3d0;
            apuStack_4b8[0] = puVar7;
            func_0x00010597c0a8(pppuVar8);
            (**(code **)(*plVar15 + 0x20))(plVar15,pppuVar8,apuStack_4b8);
            func_0x000100907750(&ppuStack_3d0);
            func_0x00010054d120(&ppuStack_2d0);
            lVar16 = lStack_1d0;
            lVar1 = lStack_1c8;
          }
          for (; lVar16 != lVar1; lVar16 = lVar16 + 0x70) {
            ppuStack_3d0 = (undefined **)0x0;
            uStack_3c8 = 0;
            ppuStack_2d0 = (undefined **)((ulong)ppuStack_2d0 & 0xffffffffffffff00);
            uStack_2b8 = uStack_2b8 & 0xffffffffffffff00;
            func_0x00010597c064(*(undefined8 *)(param_1 + 0x98));
            (*extraout_x8_00)();
            FUN_10596a8f8(&ppuStack_2d0);
            func_0x00010595cc04(&ppuStack_3d0);
          }
          uVar10 = *(ulong *)(param_1 + 200);
          func_0x00010597c064();
          (*extraout_x8_01)();
          ppuStack_2d0 = (undefined **)(uVar5 - uVar10);
          if (uVar10 <= uVar5) {
            uStack_2c0 = *(undefined8 *)(param_1 + 0x18);
            uStack_2c8 = uVar9;
            FUN_10597c4c8(puVar13,param_1 + 0xa8,&ppuStack_2d0);
          }
          uVar5 = uStack_1b0;
          for (uVar10 = uStack_1b8; plVar15 = *(long **)(param_1 + 0xa8), uVar10 != uVar5;
              uVar10 = uVar10 + 0x38) {
            uStack_2c8 = 0;
            uStack_2c0 = 0;
            uStack_2b8 = 0;
            ppuStack_2d0 = &PTR_FUN_1108c28b8;
            uStack_2b0 = 0x12;
            func_0x00010002b838(auStack_4e8,&UNK_10f315e2c);
            uVar9 = *(ulong *)(uVar10 + 0x28);
            if (-1 < (char)*(byte *)(uVar10 + 0x37)) {
              uVar9 = (ulong)*(byte *)(uVar10 + 0x37);
            }
            puVar17 = &UNK_10ddc5e10;
            if (uVar9 != 0) {
              puVar17 = (undefined *)(uVar10 + 0x20);
            }
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                      (auStack_500,puVar17);
            pppuVar8 = &ppuStack_2d0;
            FUN_105973c64(pppuVar8,auStack_4e8,auStack_500);
            func_0x00010002b838(auStack_518,&UNK_10f316b66);
            func_0x000105979a8c(auStack_530,*(undefined8 *)(uVar10 + 0x18));
            FUN_105973c64(pppuVar8,auStack_518,auStack_530);
            (**(code **)(*plVar15 + 0x18))(plVar15,pppuVar8);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_530);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_518);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_500);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_4e8);
            func_0x00010597c070();
          }
          uStack_2c0 = 0;
          uStack_2b8 = 0;
          uStack_2c8 = 0;
          ppuStack_2d0 = &PTR_FUN_1108c28b8;
          uStack_2b0 = 0x11;
          pppuVar8 = &ppuStack_2d0;
          func_0x00010597c0a8(pppuVar8);
          func_0x00010002b838(auStack_548,&UNK_10f316b77);
          func_0x000105979a7c(auStack_560,(lStack_1c8 - lStack_1d0) / 0x70);
          FUN_105973c64(pppuVar8,auStack_548,auStack_560);
          (**(code **)(*plVar15 + 0x18))(plVar15,pppuVar8);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_560);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_548);
          func_0x00010597c070();
          func_0x0001005529b4(&puStack_98);
          plVar15 = *(long **)(param_1 + 0xa8);
          uStack_2c0 = 0;
          uStack_2b8 = 0;
          uStack_2c8 = 0;
          ppuStack_2d0 = &PTR_FUN_1108c28b8;
          uStack_2b0 = 0x16;
          pppuVar8 = &ppuStack_2d0;
          func_0x00010597c0a8(pppuVar8);
          func_0x00010002b838(&ppuStack_3d0,PTR_DAT_11310f060);
          func_0x000100906e58(pppuVar8,&ppuStack_3d0,PTR_DAT_11310f148);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_3d0);
          ppuVar11 = &puStack_98;
          func_0x0001005e3518();
          ppuStack_3d0 = ppuVar11;
          (**(code **)(*plVar15 + 0x20))(plVar15,pppuVar8,&ppuStack_3d0);
          func_0x00010597c070();
          func_0x00010596778c(&lStack_1d0);
          FUN_10597b5e8(&uStack_1b8);
          FUN_10597bf14(auStack_1a0);
          func_0x000100078bd8(auStack_80);
          return;
        }
        if ((bStack_1d8 & 1) == 0) {
          puVar17 = ppuStack_2d0[1];
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                    (apuStack_4b8,ppuStack_2d0 + 0xb);
          func_0x0001004c3cd0(&uStack_448,&UNK_10f2e0451,apuStack_4b8);
          func_0x00010bcc7444(puVar17,0x65,&uStack_448);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_448);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(apuStack_4b8);
        }
        uVar10 = uStack_1b0;
        lVar1 = lStack_250 + 1;
        lStack_3d8 = lVar1;
        if (uStack_1b0 < uStack_1a8) {
          func_0x00010597c048();
          uVar10 = uVar10 + 0x38;
        }
        else {
          lVar16 = (long)(uStack_1b0 - uStack_1b8) / 0x38;
          uVar10 = lVar16 + 1;
          if (0x492492492492492 < uVar10) {
            func_0x00010597bc40();
            goto LAB_10597b324;
          }
          uVar2 = (long)(uStack_1a8 - uStack_1b8) / 0x38;
          uVar12 = uVar2 * 2;
          if (uVar12 < uVar10 || uVar12 - uVar10 == 0) {
            uVar12 = uVar10;
          }
          if (0x249249249249248 < uVar2) {
            uVar12 = 0x492492492492492;
          }
          FUN_10597bc54(&uStack_448,uVar12,lVar16,&uStack_1a8);
          uVar10 = uStack_438;
          func_0x00010597c048();
          uStack_438 = uVar10 + 0x38;
          FUN_10597bcc4(&uStack_1b8,&uStack_448);
          uVar10 = uStack_1b0;
          FUN_10597bdac(&uStack_448);
        }
        uStack_1b0 = uVar10;
        FUN_105987750(apuStack_4b8,&uStack_2c8,*(undefined4 *)(param_1 + 0x80));
        uStack_450 = 1;
        lStack_458 = lVar1;
        FUN_105966214(&uStack_448,apuStack_4b8);
        func_0x00010595cb7c(apuStack_4b8);
        FUN_10596b88c(&lStack_1d0,&uStack_448);
        func_0x00010595cb7c(&uStack_448);
        FUN_1059628d0(&ppuStack_2d0);
      } while( true );
    }
    FUN_1059675d4();
  }
  else {
    func_0x00010597bc40();
  }
LAB_10597b324:
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10597b328);
  (*pcVar3)();
}



/* Entry: 10597b580; end: 10597b5e7;  */

undefined8 FUN_10597b580(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x00010002b838(auStack_38,PTR_DAT_11310f048);
  func_0x000100906e58(param_1,auStack_38,(&PTR_DAT_11310f088)[(uint)param_2 & 0x13]);
  func_0x00010597c0b0();
  return param_2;
}



/* Entry: 10597b5e8; end: 10597b637;  */

long * FUN_10597b5e8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x38;
      func_0x00010597bdf8(lVar1);
    }
    param_1[1] = lVar2;
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10597b638; end: 10597bb7f;  */

void FUN_10597b638(long param_1,undefined ***param_2)

{
  byte bVar1;
  undefined1 uVar2;
  code **ppcVar3;
  code **ppcVar4;
  undefined ***pppuVar5;
  code *extraout_x8;
  undefined **ppuVar6;
  code *extraout_x8_00;
  long *plVar7;
  int iVar8;
  undefined ***unaff_x20;
  undefined8 uVar9;
  undefined *puVar10;
  undefined ***unaff_x23;
  undefined1 auStack_510 [112];
  undefined1 auStack_4a0 [112];
  undefined **ppuStack_430;
  undefined8 uStack_428;
  byte bStack_330;
  undefined **ppuStack_328;
  ulong auStack_320 [3];
  undefined4 uStack_308;
  byte bStack_228;
  undefined ***pppuStack_220;
  undefined ***pppuStack_218;
  undefined8 uStack_210;
  undefined1 auStack_208 [8];
  undefined **ppuStack_200;
  undefined1 auStack_1f8 [248];
  char cStack_100;
  undefined **appuStack_f8 [3];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [24];
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined ***pppuStack_78;
  undefined8 uStack_58;
  
  uStack_58 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pcStack_88 = FUN_10597bf88;
  ppuStack_80 = &PTR_DAT_1108c49c0;
  uVar2 = *(char *)(param_1 + 0x78) == '\x01';
  pppuStack_78 = param_2;
  if (!(bool)uVar2) goto LAB_10597b974;
  uVar2 = 1;
  if (*(long *)(param_1 + 0x48) == *(long *)(param_1 + 0x50)) goto LAB_10597b974;
  func_0x00010007847c(auStack_a0,&UNK_10f316b87);
  unaff_x20 = *(undefined ****)(param_1 + 0xb8);
  func_0x00010597c064();
  (*extraout_x8)();
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010002b838(appuStack_f8,&UNK_10f315707);
  param_2 = appuStack_f8;
  FUN_10596e184(auStack_e0,uVar9);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appuStack_f8);
  if ((*(byte *)(param_1 + 0xf0) & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 0x88);
    FUN_10596e714();
    bVar1 = *(byte *)(param_1 + 0xf0);
    if ((uint)bVar1 == ((uint)param_2 & 0xff)) {
      if (bVar1 != 0) {
        *(undefined8 *)(param_1 + 0xe8) = uVar9;
      }
      if (((ulong)param_2 & 1) != 0) goto LAB_10597b6f0;
    }
    else {
      if (bVar1 == 0) {
        *(undefined8 *)(param_1 + 0xe8) = uVar9;
        *(undefined1 *)(param_1 + 0xf0) = 1;
        goto LAB_10597b6f0;
      }
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
  }
  else {
LAB_10597b6f0:
    pppuVar5 = (undefined ***)(*(long *)(param_1 + 0x60) + *(long *)(param_1 + 0xe8));
    uVar2 = unaff_x20 == pppuVar5;
    if (unaff_x20 <= pppuVar5) goto LAB_10597b964;
  }
  FUN_10596e7d8(auStack_208,*(undefined8 *)(param_1 + 0x88),(long *)(param_1 + 0x48),
                *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70));
  pppuStack_218 = (undefined ***)0x0;
  pppuStack_220 = (undefined ***)0x0;
  uStack_210 = 0;
  ppuStack_328 = (undefined **)0x0;
  unaff_x23 = &ppuStack_328;
  auStack_320[0] = auStack_320[0] & 0xffffffffffffff00;
  bStack_228 = 0;
  if (cStack_100 == '\0') {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    FUN_1059634e4(auStack_320,auStack_1f8);
    FUN_105963394(auStack_1f8);
    ppuVar6 = ppuStack_328;
  }
  ppuStack_328 = ppuStack_200;
  ppuStack_200 = ppuVar6;
  _bzero(&ppuStack_430,0x108);
  while ((((bStack_228 & 1) != 0 || ((bStack_330 & 1) != 0)) && (ppuStack_328 != ppuStack_430))) {
    if ((bStack_228 & 1) == 0) {
      puVar10 = ppuStack_328[1];
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_510,ppuStack_328 + 0xb);
      func_0x0001004c3cd0(auStack_4a0,&UNK_10f2e0451,auStack_510);
      func_0x00010bcc7444(puVar10,0x65,auStack_4a0);
      func_0x00010597c05c();
      func_0x00010597c0c8();
    }
    func_0x00010596e814(*(undefined8 *)(param_1 + 0x88),auStack_320,unaff_x20,1);
    *(undefined ****)(param_1 + 0xe8) = unaff_x20;
    *(undefined1 *)(param_1 + 0xf0) = 1;
    FUN_1059877f4(auStack_510,auStack_320,*(undefined4 *)(param_1 + 0x80));
    FUN_105966214(auStack_4a0,auStack_510);
    func_0x00010595cb7c(auStack_510);
    FUN_10596b88c(&pppuStack_220,auStack_4a0);
    func_0x00010595cb7c(auStack_4a0);
    FUN_1059632f4(&ppuStack_328);
  }
  func_0x00010597c084();
  FUN_1059635c8(auStack_320);
  func_0x00010054cbac(auStack_e0);
  pppuVar5 = pppuStack_218;
  for (unaff_x20 = pppuStack_220; uVar2 = unaff_x20 == pppuVar5, !(bool)uVar2;
      unaff_x20 = unaff_x20 + 0xe) {
    ppuStack_430 = (undefined **)0x0;
    uStack_428 = 0;
    ppuStack_328 = (undefined **)((ulong)ppuStack_328 & 0xffffffffffffff00);
    auStack_320[2] = auStack_320[2] & 0xffffffffffffff00;
    func_0x00010597c064(*(undefined8 *)(param_1 + 0x98));
    (*extraout_x8_00)();
    FUN_10596a8f8(&ppuStack_328);
    func_0x00010595cc04(&ppuStack_430);
  }
  plVar7 = *(long **)(param_1 + 0xa8);
  auStack_320[1] = 0;
  auStack_320[2] = 0;
  ppuStack_328 = &PTR_FUN_1108c28b8;
  auStack_320[0] = 0;
  uStack_308 = 0x15;
  func_0x00010002b838(&ppuStack_430,&UNK_10f316b77);
  func_0x000105979a7c(auStack_4a0,((long)pppuStack_218 - (long)pppuStack_220) / 0x70);
  param_2 = &ppuStack_328;
  FUN_105973c64(param_2,&ppuStack_430,auStack_4a0);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  func_0x00010597c05c();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_430);
  func_0x000100907750(&ppuStack_328);
  func_0x00010596778c(&pppuStack_220);
  FUN_10597bfb4(auStack_208);
LAB_10597b964:
  func_0x00010054d120(auStack_e0);
  do {
    func_0x000100078bd8(auStack_a0);
LAB_10597b974:
    ppcVar3 = &pcStack_88;
    func_0x0001005ed4a0(ppcVar3);
    func_0x00010597c0d0(uStack_58);
    if ((bool)uVar2) {
      return;
    }
    ___stack_chk_fail();
    ppcVar4 = ppcVar3;
    pppuVar5 = param_2;
    if ((int)param_2 == 0) {
LAB_10597ba58:
      do {
        func_0x00010597c040();
      } while ((int)pppuVar5 == 0);
      param_2 = pppuVar5;
      func_0x00010597c05c();
      func_0x00010597c0c8();
      func_0x00010597c084();
      FUN_1059635c8(unaff_x23 + 1);
      func_0x00010596778c(&pppuStack_220);
      FUN_10597bfb4(auStack_208);
      ppcVar3 = ppcVar4;
      unaff_x20 = pppuVar5;
    }
    else {
      func_0x000104bd46a0(ppcVar3);
      func_0x00010597c034();
      pppuVar5 = param_2;
      if ((int)unaff_x20 == 0) goto LAB_10597ba58;
    }
    func_0x00010054d120(auStack_e0);
    iVar8 = (int)unaff_x20;
    uVar2 = iVar8 == 4;
    if ((bool)uVar2) {
      ___cxa_begin_catch(ppcVar3);
      ___cxa_end_catch();
    }
    else {
      uVar2 = iVar8 == 3;
      if ((bool)uVar2) {
        ___cxa_begin_catch(ppcVar3);
        ___cxa_end_catch();
      }
      else {
        ___cxa_begin_catch(ppcVar3);
        uVar2 = iVar8 == 2;
        if ((bool)uVar2) {
          ___cxa_end_catch();
        }
        else {
          ___cxa_end_catch();
        }
      }
    }
  } while( true );
}



/* Entry: 10597bb80; end: 10597bc27;  */

void FUN_10597bb80(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x00010007847c(auStack_38,&UNK_10f316bc5);
  FUN_10596e848(*(undefined8 *)(param_1 + 0x88));
  func_0x000100078bd8(auStack_38);
  return;
}



/* Entry: 10597bc28; end: 10597bc2b;  */

undefined8 * FUN_10597bc28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4918;
  func_0x000100902aac(param_1 + 0x1b);
  func_0x000100902ad0(param_1 + 0x19);
  func_0x000100902af4(param_1 + 0x17);
  func_0x000100902b24(param_1 + 0x15);
  func_0x000100901b38(param_1 + 0x13);
  func_0x000100902b48(param_1 + 0x11);
  func_0x0001008ff428(param_1 + 9);
  func_0x000100902b88(param_1 + 1);
  return param_1;
}



/* Entry: 10597bc2c; end: 10597bc53;  */

void FUN_10597bc2c(void)

{
  FUN_10597be78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10597bc54; end: 10597bcc3;  */

void FUN_10597bc54(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x00010597c034();
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    lVar3 = 0;
  }
  else {
    if ((long *)0x492492492492492 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x00010597c028();
      puVar6 = (undefined8 *)*param_1;
      puVar1 = (undefined8 *)param_1[1];
      puVar7 = (undefined8 *)
               (*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar6) / -0x38) * 0x38);
      puVar2 = puVar7;
      for (puVar5 = puVar6; puVar5 != puVar1; puVar5 = puVar5 + 7) {
        uVar9 = puVar5[1];
        uVar8 = *puVar5;
        puVar2[2] = puVar5[2];
        puVar2[1] = uVar9;
        *puVar2 = uVar8;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar2[3] = puVar5[3];
        uVar9 = puVar5[5];
        uVar8 = puVar5[4];
        puVar2[6] = puVar5[6];
        puVar2[5] = uVar9;
        puVar2[4] = uVar8;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[4] = 0;
        puVar2 = puVar2 + 7;
      }
      for (; puVar6 != puVar1; puVar6 = puVar6 + 7) {
        func_0x00010597bdf8(puVar6);
      }
      unaff_x19[1] = (long)puVar7;
      lVar3 = *unaff_x20;
      *unaff_x20 = (long)puVar7;
      unaff_x20[1] = lVar3;
      unaff_x19[1] = lVar3;
      lVar3 = unaff_x20[1];
      unaff_x20[1] = unaff_x19[2];
      unaff_x19[2] = lVar3;
      lVar3 = unaff_x20[2];
      unaff_x20[2] = unaff_x19[3];
      unaff_x19[3] = lVar3;
      *unaff_x19 = unaff_x19[1];
      return;
    }
    lVar3 = (long)unaff_x20 * 0x38;
    __Znwm();
  }
  lVar4 = lVar3 + param_3 * 0x38;
  *unaff_x19 = lVar3;
  unaff_x19[1] = lVar4;
  unaff_x19[2] = lVar4;
  unaff_x19[3] = lVar3 + (long)unaff_x20 * 0x38;
  return;
}



/* Entry: 10597bcc4; end: 10597bdab;  */

void FUN_10597bcc4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_10597c028();
  puVar5 = (undefined8 *)*param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar6 = (undefined8 *)(*(long *)(param_2 + 8) + (((long)puVar1 - (long)puVar5) / -0x38) * 0x38);
  puVar2 = puVar6;
  for (puVar4 = puVar5; puVar4 != puVar1; puVar4 = puVar4 + 7) {
    uVar8 = puVar4[1];
    uVar7 = *puVar4;
    puVar2[2] = puVar4[2];
    puVar2[1] = uVar8;
    *puVar2 = uVar7;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    puVar2[3] = puVar4[3];
    uVar8 = puVar4[5];
    uVar7 = puVar4[4];
    puVar2[6] = puVar4[6];
    puVar2[5] = uVar8;
    puVar2[4] = uVar7;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[4] = 0;
    puVar2 = puVar2 + 7;
  }
  for (; puVar5 != puVar1; puVar5 = puVar5 + 7) {
    func_0x00010597bdf8(puVar5);
  }
  unaff_x19[1] = puVar6;
  lVar3 = *unaff_x20;
  *unaff_x20 = (long)puVar6;
  unaff_x20[1] = lVar3;
  unaff_x19[1] = lVar3;
  lVar3 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar3;
  lVar3 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar3;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 10597bdac; end: 10597be1f;  */

long * FUN_10597bdac(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x38;
    func_0x00010597bdf8();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10597be20; end: 10597be77;  */

void FUN_10597be20(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined8 *)(param_1 + 0x18) = *param_3;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 0x20,param_4);
  return;
}



/* Entry: 10597be78; end: 10597bee7;  */

undefined8 * FUN_10597be78(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108c4918;
  func_0x000100902aac(param_1 + 0x1b);
  func_0x000100902ad0(param_1 + 0x19);
  func_0x000100902af4(param_1 + 0x17);
  func_0x000100902b24(param_1 + 0x15);
  func_0x000100901b38(param_1 + 0x13);
  func_0x000100902b48(param_1 + 0x11);
  func_0x0001008ff428(param_1 + 9);
  func_0x000100902b88(param_1 + 1);
  return param_1;
}



/* Entry: 10597bee8; end: 10597bf13;  */

void FUN_10597bee8(long param_1)

{
  if ((long *)**(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010597c0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)**(long **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10597bf14; end: 10597bf87;  */

undefined8 * FUN_10597bf14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [248];
  
  _bzero(auStack_130,0x100);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x20) != '\0') {
    FUN_105962970(param_1 + 2);
  }
  FUN_105962b28(auStack_128);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_105962b28(param_1 + 2);
  return param_1;
}



/* Entry: 10597bf88; end: 10597bfb3;  */

void FUN_10597bf88(long param_1)

{
  if ((long *)**(long **)(param_1 + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010597c0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)**(long **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10597bfb4; end: 10597c027;  */

undefined8 * FUN_10597bfb4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [256];
  
  _bzero(auStack_138,0x108);
  param_1[1] = 0;
  if (*(char *)(param_1 + 0x21) != '\0') {
    FUN_105963394(param_1 + 2);
  }
  FUN_1059635c8(auStack_130);
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_1059635c8(param_1 + 2);
  return param_1;
}



/* Entry: 10597c028; end: 10597c0f7;  */

void FUN_10597c028(void)

{
  return;
}



/* Entry: 10597c0f8; end: 10597c217;  */

void FUN_10597c0f8(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar1;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [64];
  long lStack_78;
  long lStack_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010597ce84();
  func_0x00010007847c(auStack_48,&UNK_10f316c2b);
  func_0x00010597ce9c(auStack_60);
  FUN_10597c274(&lStack_78,auStack_60);
  uVar1 = *unaff_x21;
  func_0x00010002b838(auStack_d0,&UNK_10f316c6b);
  FUN_10596e184(auStack_b8,uVar1,auStack_d0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_d0);
  if (lStack_78 != lStack_70) {
    FUN_10596e6c0(*unaff_x21,&lStack_78);
  }
  FUN_10596e388(*unaff_x21,*unaff_x19);
  func_0x00010054cbac(auStack_b8);
  func_0x00010597ceb0(auStack_60);
  func_0x00010054d120(auStack_b8);
  func_0x0001000e30f4(&lStack_78);
  FUN_10597ce28(auStack_60);
  func_0x000100078bd8(auStack_48);
  return;
}



/* Entry: 10597c218; end: 10597c273;  */

void FUN_10597c218(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_128 [264];
  
  func_0x00010596e680(auStack_128,*param_2,param_3[1],param_3[2],*param_3);
  FUN_10597c654(param_1,auStack_128);
  FUN_10597cd54(auStack_128);
  return;
}



/* Entry: 10597c274; end: 10597c2e7;  */

void FUN_10597c274(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x0001000fc044(param_1,(param_2[1] - *param_2) / 0xf0);
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xf0) {
    func_0x000100206870(param_1,lVar2);
  }
  return;
}



/* Entry: 10597c2e8; end: 10597c4c7;  */

void FUN_10597c2e8(long *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined ***pppuVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined1 auStack_80 [32];
  
  lVar4 = param_1[1];
  for (lVar6 = *param_1; lVar6 != lVar4; lVar6 = lVar6 + 0xf0) {
    plVar8 = (long *)*param_2;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    ppuStack_a8 = &PTR_FUN_1108c28b8;
    uStack_88 = 0x13;
    func_0x00010002b838(auStack_c0,&UNK_10f315e2c);
    uVar1 = *(ulong *)(lVar6 + 0x20);
    if (-1 < (char)*(byte *)(lVar6 + 0x2f)) {
      uVar1 = (ulong)*(byte *)(lVar6 + 0x2f);
    }
    puVar2 = &UNK_10ddc5e10;
    if (uVar1 != 0) {
      puVar2 = (undefined *)(lVar6 + 0x18);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_d8,puVar2);
    pppuVar5 = &ppuStack_a8;
    FUN_105973c64(pppuVar5,auStack_c0,auStack_d8);
    lVar9 = *(long *)(param_3 + 0x10);
    lVar7 = *(long *)(lVar6 + 0x78);
    func_0x00010002b838(auStack_80,PTR_DAT_11310f050);
    lVar3 = 0x98;
    if (lVar7 != lVar9) {
      lVar3 = 0xa0;
    }
    func_0x000100906e58(pppuVar5,auStack_80,*(undefined8 *)((long)&PTR_DAT_11310f088 + lVar3));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_80);
    func_0x00010002b838(auStack_f0,&UNK_10f316b66);
    func_0x000105979a8c(auStack_108,*(undefined8 *)(lVar6 + 0x78));
    FUN_105973c64(pppuVar5,auStack_f0,auStack_108);
    (**(code **)(*plVar8 + 0x18))(plVar8,pppuVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_108);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f0);
    func_0x00010597ce7c();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c0);
    func_0x000100907750(&ppuStack_a8);
  }
  return;
}



/* Entry: 10597c4c8; end: 10597c653;  */

void FUN_10597c4c8(void)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar3;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined8 *puStack_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [64];
  undefined8 uStack_a0;
  undefined1 *puStack_98;
  undefined1 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x00010597ce84();
  func_0x00010007847c(auStack_58,&UNK_10f316c8b);
  func_0x00010597ce9c(auStack_70);
  puVar1 = auStack_70;
  FUN_10597c274(&lStack_88);
  if (lStack_88 != lStack_80) {
    uStack_a0 = 0;
    func_0x0001004b4e98();
    uStack_90 = 1;
    uVar3 = *unaff_x21;
    puStack_98 = puVar1;
    func_0x00010002b838(auStack_f8,&UNK_10f316cd5);
    FUN_10596e184(auStack_e0,uVar3,auStack_f8);
    func_0x00010597ce7c();
    FUN_10596e560(*unaff_x21,&lStack_88,4,0);
    func_0x00010054cbac(auStack_e0);
    puVar2 = &uStack_a0;
    func_0x0001005e3518();
    uStack_118 = 0;
    uStack_110 = 0;
    ppuStack_128 = &PTR_FUN_1108c28b8;
    uStack_120 = 0;
    uStack_108 = 0x17;
    puStack_100 = puVar2;
    (**(code **)(*(long *)*unaff_x20 + 0x20))((long *)*unaff_x20,&ppuStack_128,&puStack_100);
    func_0x000100907750(&ppuStack_128);
    func_0x00010054d120(auStack_e0);
  }
  func_0x00010597ceb0(auStack_70);
  func_0x0001000e30f4(&lStack_88);
  FUN_10597ce28(auStack_70);
  func_0x000100078bd8(auStack_58);
  return;
}



/* Entry: 10597c654; end: 10597c6ff;  */

void FUN_10597c654(undefined8 param_1)

{
  undefined1 auStack_430 [256];
  undefined1 auStack_330 [256];
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [256];
  
  FUN_10597c748(auStack_230);
  FUN_10597c700(auStack_130,auStack_230);
  func_0x00010597ced8();
  FUN_10597c700(auStack_330,auStack_430);
  FUN_10597c8a8(param_1,auStack_130,auStack_330);
  func_0x00010597ced0();
  func_0x00010597ce6c(auStack_430);
  func_0x00010597ce74();
  func_0x00010597ce6c(auStack_230);
  return;
}



/* Entry: 10597c700; end: 10597c747;  */

void FUN_10597c700(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_130 [256];
  
  FUN_10597c760(auStack_130,param_2);
  FUN_10597c760(param_1,auStack_130);
  func_0x00010597ce74();
  return;
}



/* Entry: 10597c748; end: 10597c75f;  */

void FUN_10597c748(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_10597c7f8(param_1 + 1,param_2 + 0x10);
  uVar1 = *param_1;
  *param_1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar1;
  return;
}



/* Entry: 10597c760; end: 10597c77f;  */

void FUN_10597c760(void)

{
  func_0x00010597cee4();
  FUN_10597c780();
  return;
}



/* Entry: 10597c780; end: 10597c7ab;  */

undefined1 * FUN_10597c780(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xf0] = 0;
  FUN_10597c7ac();
  return param_1;
}



/* Entry: 10597c7ac; end: 10597c7bf;  */

void FUN_10597c7ac(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_105962ec4();
    *(undefined1 *)(param_1 + 0xf0) = 1;
    return;
  }
  return;
}



/* Entry: 10597c7c0; end: 10597c7f7;  */

void FUN_10597c7c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_10597c7f8(param_1 + 1,param_2 + 1);
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}



/* Entry: 10597c7f8; end: 10597c8a7;  */

void FUN_10597c7f8(long param_1,long param_2)

{
  char cVar1;
  undefined1 auStack_120 [240];
  
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 == *(char *)(param_2 + 0xf0)) {
    if (cVar1 != '\0') {
      FUN_105962ec4(auStack_120,param_1);
      FUN_105962e6c(param_1,param_2);
      FUN_105962e6c(param_2,auStack_120);
      func_0x000105962f00(auStack_120);
    }
    return;
  }
  if (cVar1 == '\0') {
    FUN_105962ea8(param_1,param_2);
  }
  else {
    FUN_105962ea8(param_2,param_1);
    param_2 = param_1;
  }
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    func_0x000105962f00();
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



/* Entry: 10597c8a8; end: 10597c933;  */

undefined8 * FUN_10597c8a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_230 [256];
  undefined1 auStack_130 [256];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x00010597cc18(auStack_130);
  func_0x00010597cc18(auStack_230,param_3);
  FUN_10597c934(param_1,auStack_130,auStack_230);
  func_0x00010597ce74();
  func_0x00010597ced0();
  return param_1;
}



/* Entry: 10597c934; end: 10597cb5b;  */

void FUN_10597c934(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x00010597ce84();
  uStack_98 = 0;
  uStack_a0 = param_1;
  do {
    if ((((*(byte *)(unaff_x20 + 0x1f) & 1) == 0) && ((*(byte *)(unaff_x19 + 0x1f) & 1) == 0)) ||
       (lVar7 = *unaff_x20, lVar7 == *unaff_x19)) {
      uStack_98 = 1;
      FUN_10597cb70(&uStack_a0);
      return;
    }
    if ((*(byte *)(unaff_x20 + 0x1f) & 1) == 0) {
      uVar9 = *(undefined8 *)(lVar7 + 8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_90,lVar7 + 0x58);
      func_0x0001004c3cd0(auStack_78,&UNK_10f2e0451,auStack_90);
      func_0x00010bcc7444(uVar9,0x65,auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
    }
    uVar4 = unaff_x21[1];
    if (uVar4 < (ulong)unaff_x21[2]) {
      FUN_105962ec4(uVar4,unaff_x20 + 1);
      lVar7 = uVar4 + 0xf0;
    }
    else {
      lVar7 = uVar4 - *unaff_x21;
      uVar4 = lVar7 / 0xf0 + 1;
      if (0x111111111111111 < uVar4) {
        FUN_10597cb5c();
LAB_10597cb24:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10597cb28);
        (*pcVar3)();
      }
      uVar2 = (unaff_x21[2] - *unaff_x21) / 0xf0;
      uVar8 = uVar2 * 2;
      if (uVar8 < uVar4 || uVar8 - uVar4 == 0) {
        uVar8 = uVar4;
      }
      if (0x88888888888887 < uVar2) {
        uVar8 = 0x111111111111111;
      }
      if (uVar8 == 0) {
        lVar10 = 0;
      }
      else {
        if (0x111111111111111 < uVar8) {
          func_0x000104bd35f4();
          goto LAB_10597cb24;
        }
        lVar10 = uVar8 * 0xf0;
        __Znwm();
      }
      lVar7 = lVar10 + lVar7;
      FUN_105962ec4(lVar7,unaff_x20 + 1);
      lVar11 = *unaff_x21;
      lVar1 = unaff_x21[1];
      lVar12 = lVar7 + ((lVar1 - lVar11) / -0xf0) * 0xf0;
      lVar5 = lVar12;
      for (lVar6 = lVar11; lVar6 != lVar1; lVar6 = lVar6 + 0xf0) {
        FUN_105962ec4(lVar5,lVar6);
        lVar5 = lVar5 + 0xf0;
      }
      for (; lVar11 != lVar1; lVar11 = lVar11 + 0xf0) {
        func_0x000105962f00(lVar11);
      }
      lVar7 = lVar7 + 0xf0;
      lVar6 = *unaff_x21;
      *unaff_x21 = lVar12;
      unaff_x21[1] = lVar7;
      unaff_x21[2] = lVar10 + uVar8 * 0xf0;
      if (lVar6 != 0) {
        __ZdlPv();
      }
    }
    unaff_x21[1] = lVar7;
    FUN_105962cd0();
  } while( true );
}



/* Entry: 10597cb5c; end: 10597cb6f;  */

undefined * FUN_10597cb5c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((puVar1[8] & 1) == 0) {
    func_0x00010597cb9c(puVar1);
  }
  return puVar1;
}



/* Entry: 10597cb70; end: 10597cbd7;  */

long FUN_10597cb70(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010597cb9c(param_1);
  }
  return param_1;
}



/* Entry: 10597cbd8; end: 10597cbdf;  */

void FUN_10597cbd8(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  lVar1 = param_1[1];
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0xf0;
    func_0x000105962f00();
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10597cbe0; end: 10597cc37;  */

void FUN_10597cbe0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_2) {
    lVar1 = lVar1 + -0xf0;
    func_0x000105962f00();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}



/* Entry: 10597cc38; end: 10597cc6f;  */

undefined1 * FUN_10597cc38(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0xf0] = 0;
  FUN_10597cc70();
  return param_1;
}



/* Entry: 10597cc70; end: 10597cc83;  */

void FUN_10597cc70(long param_1,long param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_10597cca0();
    *(undefined1 *)(param_1 + 0xf0) = 1;
    return;
  }
  return;
}



/* Entry: 10597cc84; end: 10597cc9f;  */

void FUN_10597cc84(long param_1)

{
  FUN_10597cca0();
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return;
}



/* Entry: 10597cca0; end: 10597cd53;  */

long FUN_10597cca0(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (lVar1 + 0x18,param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x48,param_2 + 0x48);
  _memcpy(param_1 + 0x60,param_2 + 0x60,0x50);
  func_0x00010028af84(param_1 + 0xb0,param_2 + 0xb0);
  func_0x00010028af84(param_1 + 0xd0,param_2 + 0xd0);
  return param_1;
}



/* Entry: 10597cd54; end: 10597cdb3;  */

undefined8 * FUN_10597cd54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_130 [256];
  
  func_0x00010597ced8();
  FUN_10597cdb4(param_1 + 1,auStack_130);
  func_0x00010597ce74();
  uVar1 = *param_1;
  *param_1 = 0;
  func_0x00010054cac4(uVar1);
  FUN_105962f28(param_1 + 2);
  return param_1;
}



/* Entry: 10597cdb4; end: 10597cddb;  */

undefined8 * FUN_10597cdb4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  FUN_10597cddc(param_1 + 1,param_2 + 1);
  return param_1;
}



/* Entry: 10597cddc; end: 10597cdff;  */

undefined8 FUN_10597cddc(undefined8 param_1)

{
  FUN_10597ce00();
  return param_1;
}



/* Entry: 10597ce00; end: 10597ce27;  */

void FUN_10597ce00(long param_1,long param_2)

{
  char cVar1;
  long unaff_x19;
  long unaff_x20;
  
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 != *(char *)(param_2 + 0xf0)) {
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xf0) == '\x01') {
        func_0x000105962f00();
        *(undefined1 *)(param_1 + 0xf0) = 0;
      }
      return;
    }
    func_0x000105962ec4();
    *(undefined1 *)(param_1 + 0xf0) = 1;
    return;
  }
  if (cVar1 != '\0') {
    func_0x000105963f38();
    func_0x000105964028();
    func_0x000105963f00();
    func_0x000100066230();
    func_0x000105964190(unaff_x20 + 0x60,unaff_x19 + 0x60);
    func_0x0001059642e4();
    func_0x0001059642d8();
    return;
  }
  return;
}



/* Entry: 10597ce28; end: 10597ce5b;  */

undefined8 FUN_10597ce28(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  func_0x00010597cb9c(&uStack_28);
  return param_1;
}



/* Entry: 10597ce5c; end: 10597cf43;  */

void FUN_10597ce5c(void)

{
  return;
}



/* Entry: 10597cf44; end: 10597d05b;  */

void FUN_10597cf44(undefined ***param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  undefined1 uVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined8 extraout_x8;
  undefined **ppuVar10;
  long extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  undefined **ppuVar11;
  undefined ***unaff_x20;
  undefined **unaff_x21;
  undefined ***unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  code *pcVar12;
  undefined1 auStack_b0 [8];
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined4 uStack_78;
  undefined8 uStack_38;
  undefined1 *puVar6;
  
  func_0x00010597e104();
  pppuVar8 = param_1 + 10;
  do {
    ppuVar10 = *pppuVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(pppuVar8,0x10);
    if (bVar3) {
      *(byte *)pppuVar8 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uStack_38 = extraout_x8;
  if (((ulong)ppuVar10 & 1) == 0) {
    ppuVar10 = param_1[3];
    uVar7 = in_ZR;
    if (ppuVar10 != (undefined **)0x0) {
      ppuVar11 = param_1[6];
      unaff_x21 = param_1[2];
      __ZNSt3__119__shared_weak_count4lockEv();
      param_1 = (undefined ***)0x0;
      uVar7 = in_ZR;
      if (ppuVar10 != (undefined **)0x0) {
        unaff_x20 = &ppuStack_98;
        ppuStack_98 = (undefined **)0x10597d66c;
        ppuStack_90 = &PTR_FUN_1108c4b10;
        ppuStack_a8 = (undefined **)0x0;
        uStack_a0 = 0;
        ppuStack_88 = unaff_x21;
        ppuStack_80 = ppuVar10;
        (**(code **)(*ppuVar11 + 0x10))(ppuVar11,&ppuStack_98);
        func_0x00010597e300();
        param_1 = &ppuStack_a8;
        FUN_10597d5a4();
        goto LAB_10597d010;
      }
    }
    FUN_10527822c();
  }
  else {
    ppuStack_88 = (undefined **)0x0;
    ppuStack_80 = (undefined **)0x0;
    ppuStack_98 = &PTR_FUN_1108c28b8;
    ppuStack_90 = (undefined **)0x0;
    uStack_78 = 0x18;
    (**(code **)(*param_1[0xb] + 0x18))(param_1[0xb],&ppuStack_98);
    param_1 = &ppuStack_98;
    func_0x000100907750();
LAB_10597d010:
    func_0x00010597e048(uStack_38);
    uVar7 = 0;
    if ((bool)in_ZR) {
      return;
    }
  }
  ___stack_chk_fail();
  func_0x00010597e300();
  pppuVar8 = &ppuStack_a8;
  FUN_10597d5a4();
  pcVar12 = FUN_10597d05c;
  func_0x00010597e160();
  puVar4 = auStack_b0;
  puVar5 = (undefined1 *)register0x00000008;
  while( true ) {
    pppuVar9 = pppuVar8;
    puVar6 = puVar4;
    *(undefined8 *)(puVar6 + -0x40) = unaff_x28;
    *(undefined8 *)(puVar6 + -0x38) = unaff_x27;
    *(undefined ****)(puVar6 + -0x30) = unaff_x22;
    *(undefined ***)(puVar6 + -0x28) = unaff_x21;
    *(undefined ****)(puVar6 + -0x20) = unaff_x20;
    *(undefined ****)(puVar6 + -0x18) = param_1;
    *(undefined1 **)(puVar6 + -0x10) = puVar5 + -0x10;
    *(code **)(puVar6 + -8) = pcVar12;
    pppuVar8 = pppuVar9;
    func_0x00010597e104();
    func_0x00010597e398();
    if (extraout_x8_00 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    unaff_x22 = pppuVar9 + 10;
    param_1 = pppuVar8;
    if (((ulong)*unaff_x22 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e344();
      (*extraout_x8_01)();
      param_1 = (undefined ***)pppuVar9[6];
      func_0x00010597e240(pppuVar8);
      if (extraout_x8_02 != 0) {
        plVar1 = (long *)(extraout_x8_02 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010597e1ac();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e35c();
      (*extraout_x8_04)();
      func_0x00010597e08c();
      func_0x00010597e290();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)(puVar6 + -0x48));
    if ((bool)uVar7) break;
    ___stack_chk_fail();
    pppuVar8 = param_1;
    func_0x00010597e08c();
    func_0x00010597e290();
    func_0x00010597e168();
    pcVar12 = FUN_10597d14c;
    func_0x00010597e160();
    puVar4 = puVar6 + -0x110;
    pppuVar8 = pppuVar8 + -1;
    unaff_x20 = pppuVar9;
    puVar5 = puVar6;
  }
  return;
}



/* Entry: 10597d05c; end: 10597d14b;  */

void FUN_10597d05c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  byte *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar5 = lVar4;
    func_0x00010597e104();
    func_0x00010597e398();
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    unaff_x22 = (byte *)(lVar4 + 0x50);
    unaff_x19 = lVar5;
    if ((*unaff_x22 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e344();
      (*extraout_x8_00)();
      unaff_x19 = *(long *)(lVar4 + 0x30);
      func_0x00010597e240(lVar5);
      if (extraout_x8_01 != 0) {
        plVar1 = (long *)(extraout_x8_01 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010597e1ac();
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e35c();
      (*extraout_x8_03)();
      func_0x00010597e08c();
      func_0x00010597e290();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    lVar5 = unaff_x19;
    func_0x00010597e08c();
    func_0x00010597e290();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d14c;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
    param_1 = lVar5 + -8;
    unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 10597d14c; end: 10597d153;  */

void FUN_10597d14c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  byte *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar5 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar4 = lVar5;
    func_0x00010597e104();
    func_0x00010597e398();
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    unaff_x22 = (byte *)(param_1 + 0x48);
    unaff_x19 = lVar4;
    if ((*unaff_x22 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e344();
      (*extraout_x8_00)();
      unaff_x19 = *(long *)(param_1 + 0x28);
      func_0x00010597e240(lVar4);
      if (extraout_x8_01 != 0) {
        plVar1 = (long *)(extraout_x8_01 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010597e1ac();
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e35c();
      (*extraout_x8_03)();
      func_0x00010597e08c();
      func_0x00010597e290();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010597e08c();
    func_0x00010597e290();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d14c;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
    unaff_x20 = lVar5;
  }
  return;
}



/* Entry: 10597d154; end: 10597d217;  */

void FUN_10597d154(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d218;
    func_0x00010597e160();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d218; end: 10597d21f;  */

void FUN_10597d218(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d218;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d220; end: 10597d2e3;  */

void FUN_10597d220(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d2e4;
    func_0x00010597e160();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d2e4; end: 10597d2eb;  */

void FUN_10597d2e4(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d2e4;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d2ec; end: 10597d3db;  */

void FUN_10597d2ec(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  byte *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar4 = param_1;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar5 = lVar4;
    func_0x00010597e104();
    func_0x00010597e398();
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    unaff_x22 = (byte *)(lVar4 + 0x50);
    unaff_x19 = lVar5;
    if ((*unaff_x22 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e344();
      (*extraout_x8_00)();
      unaff_x19 = *(long *)(lVar4 + 0x30);
      func_0x00010597e240(lVar5);
      if (extraout_x8_01 != 0) {
        plVar1 = (long *)(extraout_x8_01 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010597e1ac();
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e35c();
      (*extraout_x8_03)();
      func_0x00010597e08c();
      func_0x00010597e290();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    lVar5 = unaff_x19;
    func_0x00010597e08c();
    func_0x00010597e290();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d3dc;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
    param_1 = lVar5 + -8;
    unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 10597d3dc; end: 10597d3e3;  */

void FUN_10597d3dc(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  long lVar4;
  long lVar5;
  long extraout_x8;
  code *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  byte *unaff_x22;
  undefined8 unaff_x27;
  undefined8 unaff_x28;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    lVar5 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x28;
    *(undefined8 *)((long)register0x00000008 + -0x38) = unaff_x27;
    *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    lVar4 = lVar5;
    func_0x00010597e104();
    func_0x00010597e398();
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    unaff_x22 = (byte *)(param_1 + 0x48);
    unaff_x19 = lVar4;
    if ((*unaff_x22 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e344();
      (*extraout_x8_00)();
      unaff_x19 = *(long *)(param_1 + 0x28);
      func_0x00010597e240(lVar4);
      if (extraout_x8_01 != 0) {
        plVar1 = (long *)(extraout_x8_01 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      func_0x00010597e1ac();
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e35c();
      (*extraout_x8_03)();
      func_0x00010597e08c();
      func_0x00010597e290();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x48));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    param_1 = unaff_x19;
    func_0x00010597e08c();
    func_0x00010597e290();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d3dc;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x110);
    unaff_x20 = lVar5;
  }
  return;
}



/* Entry: 10597d3e4; end: 10597d4a7;  */

void FUN_10597d3e4(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d4a8;
    func_0x00010597e160();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d4a8; end: 10597d4af;  */

void FUN_10597d4a8(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d4a8;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d4b0; end: 10597d573;  */

void FUN_10597d4b0(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d574;
    func_0x00010597e160();
    param_1 = param_1 + -8;
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d574; end: 10597d57f;  */

void FUN_10597d574(long param_1)

{
  undefined1 in_ZR;
  long extraout_x8;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined1 *unaff_x29;
  code *unaff_x30;
  
  while( true ) {
    param_1 = param_1 + -8;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(code **)((long)register0x00000008 + -8) = unaff_x30;
    unaff_x29 = (undefined1 *)((long)register0x00000008 + -0x10);
    func_0x00010597df74(param_1);
    if (extraout_x8 != 0) {
      do {
        func_0x00010597e19c();
      } while (extraout_w10 != 0);
    }
    func_0x00010597e38c();
    if ((extraout_x8_00 & 1) == 0) {
      func_0x0001004b4e98();
      func_0x00010597e074();
      (*extraout_x8_01)();
      func_0x00010597dfbc(param_1);
      if (extraout_x8_02 != 0) {
        do {
          func_0x00010597e210();
        } while (extraout_w12 != 0);
      }
      func_0x00010597df98();
      if (extraout_x8_03 != 0) {
        do {
          func_0x00010597e19c();
        } while (extraout_w10_00 != 0);
      }
      func_0x00010597e0ec();
      func_0x00010597e2e0();
      func_0x00010597e0dc();
      func_0x00010597e194();
    }
    func_0x00010597e168();
    func_0x00010597e048(*(undefined8 *)((long)register0x00000008 + -0x38));
    if ((bool)in_ZR) break;
    ___stack_chk_fail();
    func_0x00010597dff0();
    func_0x00010597e194();
    func_0x00010597e168();
    unaff_x30 = FUN_10597d574;
    func_0x00010597e160();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xf0);
  }
  return;
}



/* Entry: 10597d580; end: 10597d593;  */

void FUN_10597d580(void)

{
  func_0x00010597d5cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10597d594; end: 10597d5a3;  */

undefined8 * FUN_10597d594(undefined8 *param_1)

{
  param_1[-1] = &PTR_DAT_1108c49e8;
  *param_1 = &PTR_FUN_1108c4a40;
  func_0x000100902b24(param_1 + 10);
  func_0x000100558bb4(param_1 + 7);
  func_0x000100450be4(param_1 + 5);
  func_0x00010597d61c(param_1 + 3);
  func_0x00010597d644(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 10597d5a4; end: 10597d6df;  */

long FUN_10597d5a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 10597d6e0; end: 10597d703;  */

long FUN_10597d6e0(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x0001000df548();
  }
  return param_1 + 8;
}



/* Entry: 10597d704; end: 10597d82f;  */

void FUN_10597d704(void)

{
  long extraout_x8;
  long unaff_x19;
  long *plVar1;
  
  func_0x00010597e374();
  if ((**(byte **)(unaff_x19 + 0x58) & 1) == 0) {
    func_0x00010597e3ac();
    (**(code **)(extraout_x8 + 0x10))();
    func_0x0001005e3518(unaff_x19 + 0x28);
    func_0x00010597e124();
    func_0x00010597df10();
    func_0x00010597e018();
    func_0x00010597e0ac();
    func_0x00010597e2a4();
    func_0x00010597e1e8();
    func_0x00010597e1f0();
    func_0x00010597e114();
    func_0x00010597df5c();
    func_0x00010597e028();
    func_0x00010597e0d0();
    func_0x00010597e188();
    func_0x00010597e068();
    func_0x00010597e1e0();
    func_0x00010597e114();
    func_0x00010597df44();
    func_0x00010597e038();
    func_0x00010597e0b8();
    func_0x00010597e188();
    func_0x00010597e05c();
    func_0x00010597e1d8();
    func_0x00010597e114();
    plVar1 = *(long **)(unaff_x19 + 0x48);
    func_0x00010597df2c();
    func_0x00010597e008();
    func_0x00010597e0c4();
    func_0x00010597e11c(*(undefined8 *)(*plVar1 + 0x28));
    func_0x00010597e1f8();
    func_0x00010597e114();
  }
  return;
}



/* Entry: 10597d830; end: 10597d867;  */

void FUN_10597d830(long param_1)

{
  param_1 = param_1 + 0x40;
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10597d868; end: 10597d97f;  */

void FUN_10597d868(void)

{
  ulong extraout_x8;
  long extraout_x8_00;
  
  func_0x00010597e170();
  func_0x00010597e230();
  if ((extraout_x8 & 1) == 0) {
    func_0x00010597e220();
    (**(code **)(extraout_x8_00 + 0x18))();
    func_0x00010597e2e8();
    func_0x00010597e124();
    func_0x00010597df10();
    func_0x00010597e018();
    func_0x00010597e0ac();
    func_0x00010597e2a4();
    func_0x00010597e1e8();
    func_0x00010597e1f0();
    func_0x00010597e114();
    func_0x00010597defc();
    func_0x00010597e298();
    func_0x00010597e028();
    func_0x00010597e0d0();
    func_0x00010597e188();
    func_0x00010597e068();
    func_0x00010597e1e0();
    func_0x00010597e114();
    func_0x00010597defc();
    func_0x00010597e284();
    func_0x00010597e038();
    func_0x00010597e0b8();
    func_0x00010597e188();
    func_0x00010597e05c();
    func_0x00010597e1d8();
    func_0x00010597e114();
    func_0x00010597defc();
    func_0x00010597e278();
    func_0x00010597e008();
    func_0x00010597e0c4();
    func_0x00010597e200();
    func_0x00010597e11c();
    func_0x00010597e1f8();
    func_0x00010597e114();
  }
  return;
}



/* Entry: 10597d980; end: 10597d9b3;  */

void FUN_10597d980(long param_1)

{
  param_1 = param_1 + 0x38;
  func_0x000100902b18();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}


