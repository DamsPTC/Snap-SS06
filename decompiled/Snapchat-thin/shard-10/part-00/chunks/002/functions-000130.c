/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107521694; end: 1075216b7;  */

long FUN_107521694(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107521aac();
  func_0x000107521b38();
  func_0x000107521b04(&PTR_FUN_1109b94f0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return unaff_x20;
}



/* Entry: 1075216b8; end: 1075216d7;  */

void FUN_1075216b8(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107521b38(param_2,param_1 + 8);
  func_0x000107521b04(&PTR_FUN_1109b94f0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 1075216d8; end: 1075217a7;  */

void FUN_1075216d8(void)

{
  int iVar1;
  long unaff_x19;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107521a90();
  iVar1 = (int)unaff_x19 + 8;
  func_0x0001075213c8();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x28);
    FUN_107521418(*(undefined8 *)(lVar2 + 8),0xf,0x24);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
      if ((*(byte *)(unaff_x20 + 0x19) & 1) == 0) {
        if (*(char *)(unaff_x20 + 0x18) == '\x01') {
          FUN_1075215b8(auStack_38);
          func_0x00010724ac30(*(undefined8 *)(lVar2 + 0x10),auStack_38);
          func_0x00010724c894(auStack_38);
        }
        else {
          func_0x0001072631dc(*(undefined8 *)(lVar2 + 0x10),unaff_x20 + 0x20);
        }
        FUN_107520f44(lVar2);
      }
    }
    else {
      plVar3 = *(long **)(lVar2 + 0x18);
      func_0x000107521b2c();
      func_0x000107521b20();
      func_0x000107521b14(*(undefined8 *)(*plVar3 + 0x18));
      func_0x000107521a88();
      func_0x000107521abc();
    }
  }
  func_0x000107521ab4();
  return;
}



/* Entry: 1075217a8; end: 1075217d3;  */

void FUN_1075217a8(undefined8 param_1,undefined8 param_2)

{
  func_0x000107521af4(param_2,param_1,&PTR_DAT_1109b9550);
  func_0x000107521ac4();
  return;
}



/* Entry: 1075217d4; end: 1075217df;  */

undefined ** FUN_1075217d4(void)

{
  return &PTR_DAT_1109b9550;
}



/* Entry: 1075217e0; end: 107521837;  */

void FUN_1075217e0(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107521b38();
  func_0x000107521b04(&PTR_FUN_1109b94f0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  return;
}



/* Entry: 107521838; end: 10752184b;  */

void FUN_107521838(void)

{
  func_0x000107521810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10752184c; end: 107521873;  */

long FUN_10752184c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  __Znwm(0x28);
  func_0x000107521b38();
  func_0x000107521b04(&PTR_SUB_1109b9570);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 107521874; end: 107521893;  */

void FUN_107521874(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107521b38(param_2,param_1 + 8);
  func_0x000107521b04(&PTR_SUB_1109b9570);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107521894; end: 107521977;  */

void FUN_107521894(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  
  func_0x000107521b38();
  FUN_107521344(auStack_50,unaff_x20 + 8);
  iVar1 = (int)unaff_x20 + 8;
  func_0x0001075213c8();
  if (iVar1 != 0) {
    if (*(int *)(unaff_x19 + 0x18) == 0) {
      plVar2 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x18);
      func_0x000107471f3c(auStack_40);
      (**(code **)(*plVar2 + 0x10))(plVar2,auStack_40);
      func_0x00010747030c(auStack_40);
    }
    else {
      plVar2 = *(long **)(*(long *)(unaff_x20 + 0x20) + 0x18);
      __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                (auStack_40);
      func_0x0001052b2bd0(auStack_28,auStack_40);
      (**(code **)(*plVar2 + 0x18))(plVar2,auStack_28);
      func_0x000107521a88();
      __ZNSt13runtime_errorD1Ev(auStack_40);
    }
  }
  func_0x000107270b00(auStack_50);
  return;
}



/* Entry: 107521978; end: 1075219a3;  */

void FUN_107521978(undefined8 param_1,undefined8 param_2)

{
  func_0x000107521af4(param_2,param_1,&PTR_DAT_1109b95e0);
  func_0x000107521ac4();
  return;
}



/* Entry: 1075219a4; end: 1075219af;  */

undefined ** FUN_1075219a4(void)

{
  return &PTR_DAT_1109b95e0;
}



/* Entry: 1075219b0; end: 107521a23;  */

void FUN_1075219b0(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107521b38();
  func_0x000107521b04(&PTR_SUB_1109b9570);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107521a24; end: 107521b43;  */

void FUN_107521a24(void)

{
  return;
}



/* Entry: 107521b44; end: 107521b8f;  */

uint FUN_107521b44(int param_1)

{
  uint uVar1;
  uint *unaff_x20;
  
  func_0x000107525728();
  func_0x000107327090();
  if ((param_1 == 0) || (FUN_107327234(), (*(ushort *)((long)unaff_x20 + 0x16) >> 6 & 1) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if ((*unaff_x20 & 0xffff0000) == 0) {
      uVar1 = *unaff_x20;
    }
  }
  return uVar1 & 0xffff;
}



/* Entry: 107521b90; end: 107521c9b;  */

void FUN_107521b90(undefined4 param_1,undefined8 *param_2,uint *param_3,undefined8 param_4)

{
  int *piVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar3 = param_3;
  func_0x000107327090(param_3,param_4);
  if (((int)puVar3 != 0) && (FUN_107327234(param_3,param_4), *(short *)((long)param_3 + 0x16) == 4))
  {
    lVar5 = 0;
    for (uVar6 = 0; uVar6 < *param_3; uVar6 = uVar6 + 1) {
      piVar1 = (int *)(*(long *)(param_3 + 2) + lVar5);
      uVar7 = param_1;
      if ((*(short *)((long)piVar1 + 0x16) == 4) && (*piVar1 == 2)) {
        lVar2 = *(long *)(param_3 + 2) + lVar5;
        lVar4 = *(long *)(lVar2 + 8);
        if (((*(ushort *)(lVar4 + 0x16) >> 4 & 1) != 0) &&
           ((*(ushort *)(lVar4 + 0x2e) >> 4 & 1) != 0)) {
          FUN_1075221c0();
          uVar7 = param_1;
          FUN_1075221c0(*(long *)(lVar2 + 8) + 0x18);
          uStack_58 = param_1;
          uStack_54 = uVar7;
          func_0x00010724de5c(param_2,&uStack_58);
        }
      }
      lVar5 = lVar5 + 0x18;
      param_1 = uVar7;
    }
  }
  return;
}



/* Entry: 107521c9c; end: 107521f7b;  */

undefined4 *
FUN_107521c9c(long param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  long *plVar7;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  long lStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_290 [32];
  undefined1 uStack_270;
  undefined1 uStack_258;
  undefined1 uStack_250;
  undefined1 uStack_238;
  undefined1 uStack_230;
  undefined1 uStack_1f8;
  undefined1 uStack_1f0;
  undefined1 uStack_1ec;
  undefined4 auStack_1e8 [2];
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long *plStack_1c8;
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined4 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined1 auStack_158 [24];
  undefined8 *puStack_140;
  undefined1 auStack_138 [208];
  undefined8 uStack_68;
  
  puVar5 = &uStack_2b0;
  puVar6 = &uStack_2b0;
  lVar1 = param_1;
  func_0x0001075255a0();
  uStack_68 = extraout_x8;
  func_0x00010785f1f4();
  uStack_2b0 = 0;
  plVar2 = (long *)(lVar1 + 0x170);
  func_0x0001072b86c8(plVar2,&uStack_2b0);
  plVar3 = plVar2;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plVar7 = plVar3;
  FUN_1073af260();
  (**(code **)(*plVar7 + 0x20))(&uStack_2b0);
  plVar7 = (long *)*param_3;
  auStack_1e8[0] = 0;
  uStack_1e0 = CONCAT44(uStack_2ac,uStack_2b0);
  lStack_1d8 = lStack_2a8;
  if (lStack_2a8 != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10 != 0);
  }
  uStack_1d0 = uStack_2a0;
  plStack_1c8 = plVar3;
  FUN_10752374c(auStack_1c0,param_5);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_1a0,param_2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_188,param_1);
  uStack_170 = SUB84(plVar2,0);
  lStack_160 = param_4[1];
  uStack_168 = *param_4;
  if (param_4[1] != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10_00 != 0);
  }
  puStack_140 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)0x98;
  __Znwm();
  *puVar4 = &PTR_SUB_1109b9628;
  *(undefined4 *)(puVar4 + 1) = auStack_1e8[0];
  puVar4[3] = lStack_1d8;
  puVar4[2] = uStack_1e0;
  if (lStack_1d8 != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10_01 != 0);
  }
  puVar4[4] = uStack_1d0;
  puVar4[5] = plStack_1c8;
  FUN_10752374c(puVar4 + 6,auStack_1c0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 10,auStack_1a0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(puVar4 + 0xd,auStack_188)
  ;
  *(undefined4 *)(puVar4 + 0x10) = uStack_170;
  puVar4[0x12] = lStack_160;
  puVar4[0x11] = uStack_168;
  if (lStack_160 != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10_02 != 0);
  }
  puStack_140 = puVar4;
  func_0x0001073176c8(auStack_290,&UNK_10f4161fc);
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_230 = 0;
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  func_0x000107273dcc(auStack_138,auStack_158,auStack_290);
  (**(code **)(*plVar7 + 0x18))(plVar7,auStack_138);
  func_0x000107273efc(auStack_138);
  func_0x000107273f24(auStack_290);
  func_0x0001006393ec(auStack_158);
  FUN_107521f7c(auStack_1e8);
  func_0x00010725b1d4();
  func_0x0001075254cc(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107273efc(auStack_138);
    func_0x000107273f24(auStack_290);
    func_0x0001006393ec(auStack_158);
    FUN_107521f7c(auStack_1e8);
    func_0x00010725b1d4(&uStack_2b0);
    func_0x000107525550();
    func_0x00010724b8b8((undefined1 *)((long)puVar6 + 0x80));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)puVar6 + 0x60));
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev
              ((undefined1 *)((long)puVar6 + 0x48));
    func_0x0001075219e0((undefined1 *)((long)puVar6 + 0x28));
    func_0x000107525758();
    return (undefined4 *)(undefined1 *)puVar6;
  }
  return puVar5;
}



/* Entry: 107521f7c; end: 107521fbb;  */

long FUN_107521f7c(long param_1)

{
  func_0x00010724b8b8(param_1 + 0x80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x60);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x48);
  func_0x0001075219e0(param_1 + 0x28);
  func_0x000107525758();
  return param_1;
}



/* Entry: 107521fbc; end: 107521fcf;  */

void FUN_107521fbc(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107525728();
  lVar5 = *plVar2;
  lVar1 = plVar2[1];
  lVar6 = *(long *)(param_2 + 8) + ((lVar1 - lVar5) / -0xa0) * 0xa0;
  lVar3 = lVar6;
  for (lVar4 = lVar5; lVar4 != lVar1; lVar4 = lVar4 + 0xa0) {
    FUN_1075220fc(lVar3,lVar4);
    lVar3 = lVar3 + 0xa0;
  }
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0xa0) {
    FUN_1075221d8(lVar5);
  }
  unaff_x19[1] = lVar6;
  lVar4 = *unaff_x20;
  *unaff_x20 = lVar6;
  unaff_x20[1] = lVar4;
  unaff_x19[1] = lVar4;
  lVar4 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = lVar4;
  lVar4 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = lVar4;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 107521fd0; end: 107522087;  */

void FUN_107521fd0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  func_0x000107525728();
  lVar4 = *param_1;
  lVar1 = param_1[1];
  lVar5 = *(long *)(param_2 + 8) + ((lVar1 - lVar4) / -0xa0) * 0xa0;
  lVar2 = lVar5;
  for (lVar3 = lVar4; lVar3 != lVar1; lVar3 = lVar3 + 0xa0) {
    FUN_1075220fc(lVar2,lVar3);
    lVar2 = lVar2 + 0xa0;
  }
  for (; lVar4 != lVar1; lVar4 = lVar4 + 0xa0) {
    FUN_1075221d8(lVar4);
  }
  unaff_x19[1] = lVar5;
  lVar3 = *unaff_x20;
  *unaff_x20 = lVar5;
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



/* Entry: 107522088; end: 1075220fb;  */

void FUN_107522088(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x19;
  ulong unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107525568();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    if (0x199999999999999 < unaff_x20) {
      func_0x000104bd35f4();
      func_0x000104c318bc();
      uVar4 = *(undefined8 *)(param_2 + 0x40);
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      uVar5 = *(undefined8 *)(param_2 + 0x41);
      *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_2 + 0x49);
      *(undefined8 *)(param_1 + 0x41) = uVar5;
      *(undefined8 *)(param_1 + 0x40) = uVar4;
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      uVar3 = *(undefined8 *)(param_2 + 0x58);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
      *(undefined8 *)(param_1 + 0x58) = uVar3;
      *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
      *(undefined8 *)(param_2 + 0x58) = 0;
      *(undefined8 *)(param_2 + 0x60) = 0;
      *(undefined8 *)(param_2 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x70) = 0;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x80) = 0;
      uVar3 = *(undefined8 *)(param_2 + 0x70);
      *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
      *(undefined8 *)(param_1 + 0x70) = uVar3;
      *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
      *(undefined8 *)(param_2 + 0x70) = 0;
      *(undefined8 *)(param_2 + 0x78) = 0;
      *(undefined8 *)(param_2 + 0x80) = 0;
      uVar4 = *(undefined8 *)(param_2 + 0x90);
      uVar3 = *(undefined8 *)(param_2 + 0x88);
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
      *(undefined8 *)(param_1 + 0x90) = uVar4;
      *(undefined8 *)(param_1 + 0x88) = uVar3;
      return;
    }
    lVar1 = unaff_x20 * 0xa0;
    __Znwm();
  }
  lVar2 = lVar1 + param_3 * 0xa0;
  *unaff_x19 = lVar1;
  unaff_x19[1] = lVar2;
  unaff_x19[2] = lVar2;
  unaff_x19[3] = lVar1 + unaff_x20 * 0xa0;
  return;
}



/* Entry: 1075220fc; end: 1075221bf;  */

void FUN_1075220fc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000104c318bc();
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(param_1 + 0x49) = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_1 + 0x41) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x90);
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  return;
}



/* Entry: 1075221c0; end: 1075221d7;  */

float FUN_1075221c0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  FUN_1073274d0();
  return (float)(double)CONCAT44(uVar2,uVar1);
}



/* Entry: 1075221d8; end: 107522253;  */

long FUN_1075221d8(long param_1)

{
  func_0x00010724e0ac(param_1 + 0x70);
  func_0x00010724e0ac(param_1 + 0x58);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 107522254; end: 107522297;  */

void FUN_107522254(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x000107525760((&PTR_FUN_1109b9608)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 107522298; end: 1075222a7;  */

long * FUN_107522298(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = param_2[1];
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0xa0;
      FUN_1075221d8();
    }
    param_2[1] = lVar2;
    __ZdlPv(*param_2);
  }
  return param_2;
}



/* Entry: 1075222a8; end: 1075222cb;  */

void FUN_1075222a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_2;
  FUN_1075222cc(param_1,&uStack_20);
  return;
}



/* Entry: 1075222cc; end: 10752236b;  */

long FUN_1075222cc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0x100;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 2;
  puVar1 = &uStack_68;
  lStack_70 = param_1;
  FUN_10752236c(puVar1,param_2,param_1);
  *(undefined8 **)(param_1 + 0x58) = puVar1;
  *(undefined8 *)(param_1 + 0x60) = param_2;
  if ((int)puVar1 == 0) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x18;
    FUN_1075223f8(param_1);
  }
  FUN_1075233f8(&lStack_70);
  func_0x000107302960(&uStack_68);
  return param_1;
}



/* Entry: 10752236c; end: 1075223f7;  */

undefined1  [16] FUN_10752236c(long param_1,undefined8 param_2)

{
  int extraout_w9;
  int extraout_w9_00;
  long unaff_x19;
  
  func_0x000107525568();
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_1074279b0(param_2);
  if ((*(int *)(unaff_x19 + 0x30) == 0) &&
     ((func_0x00010752567c(), extraout_w9 == 0 ||
      (((func_0x00010752551c(), *(int *)(unaff_x19 + 0x30) == 0 &&
        (func_0x000107525560(), *(int *)(unaff_x19 + 0x30) == 0)) &&
       (func_0x00010752567c(), extraout_w9_00 != 0)))))) {
    func_0x0001075254e0();
  }
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(unaff_x19 + 0x10);
  return *(undefined1 (*) [16])(unaff_x19 + 0x30);
}



/* Entry: 1075223f8; end: 107522433;  */

void FUN_1075223f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_107326ddc();
    uVar2 = param_2[1];
    uVar1 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *(undefined2 *)((long)param_2 + 0x16) = 0;
  }
  return;
}



/* Entry: 107522434; end: 10752248b;  */

void FUN_107522434(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  byte *extraout_x8;
  byte *extraout_x8_00;
  byte *pbVar8;
  undefined1 *extraout_x8_01;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar11;
  ulong extraout_x8_06;
  ulong extraout_x8_07;
  ulong uVar12;
  ulong extraout_x8_08;
  ulong extraout_x8_09;
  uint uVar13;
  undefined4 uVar14;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  int extraout_w9_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  ulong uVar15;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  uint uVar16;
  ulong uVar17;
  ulong extraout_x10;
  ulong extraout_x10_00;
  int iVar18;
  ulong uVar19;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  undefined8 uVar20;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  byte bVar21;
  byte *pbVar22;
  byte *pbVar23;
  double dVar24;
  double dVar25;
  long *plStack_70;
  uint uStack_68;
  byte *pbStack_60;
  long lStack_58;
  
  cVar4 = *(char *)*param_2;
  if (cVar4 == '\"') {
    lStack_58 = param_2[1];
    pbStack_60 = (byte *)(*param_2 + 1);
    uStack_68 = 0;
    plStack_70 = param_1;
    while( true ) {
      bVar21 = *pbStack_60;
      uVar16 = (uint)bVar21;
      cVar3 = SBORROW4(uVar16,0x5c);
      cVar4 = (int)(uVar16 - 0x5c) < 0;
      bVar5 = uVar16 == 0x5c;
      if (!bVar5) break;
      bVar21 = (&UNK_10de68d48)[pbStack_60[1]];
      if (bVar21 == 0) {
        lVar10 = (long)pbStack_60 - lStack_58;
        if (pbStack_60[1] != 0x75) {
          *(undefined4 *)(param_1 + 6) = 10;
          param_1[7] = lVar10;
          pbStack_60 = pbStack_60 + 1;
          goto LAB_1075227d8;
        }
        pbStack_60 = pbStack_60 + 2;
        plVar6 = param_1;
        FUN_107427c54(param_1,&pbStack_60);
        if ((int)param_1[6] != 0) goto LAB_1075227d8;
        plVar7 = plVar6;
        if (((uint)((ulong)plVar6 >> 10) & 0x3fffff) == 0x36) {
          pbVar8 = pbStack_60;
          if ((*pbStack_60 == 0x5c) && (pbVar8 = pbStack_60 + 1, pbStack_60[1] == 0x75)) {
            pbStack_60 = pbStack_60 + 2;
            plVar7 = param_1;
            FUN_107427c54(param_1,&pbStack_60,lVar10);
            if ((int)param_1[6] != 0) goto LAB_1075227d8;
            pbVar8 = pbStack_60;
            if (0xfffffbff < (int)plVar7 - 0xe000U) {
              plVar7 = (long *)(ulong)((int)plVar7 + (int)plVar6 * 0x400 + 0xfca02400);
              unaff_x21 = plVar6;
              goto LAB_1075226ec;
            }
          }
          pbStack_60 = pbVar8;
          *(undefined4 *)(param_1 + 6) = 9;
          goto LAB_1075227d4;
        }
LAB_1075226ec:
        func_0x000107303a70(&plStack_70,plVar7);
      }
      else {
        pbStack_60 = pbStack_60 + 2;
        func_0x00010752558c();
        pbVar8 = extraout_x8_00;
        if (bVar5 || cVar4 != cVar3) {
          func_0x0001075255c8();
LAB_1075226a8:
          pbVar8 = (byte *)unaff_x21[3];
        }
LAB_107522654:
        unaff_x21[3] = (long)(pbVar8 + 1);
        *pbVar8 = bVar21;
        uStack_68 = uStack_68 + 1;
      }
    }
    uVar16 = (uint)bVar21;
    cVar3 = SBORROW4(uVar16,0x22);
    cVar4 = (int)(uVar16 - 0x22) < 0;
    bVar5 = uVar16 == 0x22;
    if (bVar5) {
      pbStack_60 = pbStack_60 + 1;
      func_0x00010752558c();
      puVar9 = extraout_x8_01;
      if (bVar5 || cVar4 != cVar3) {
        func_0x0001075255c8();
        puVar9 = (undefined1 *)unaff_x21[3];
      }
      unaff_x21[3] = (long)(puVar9 + 1);
      *puVar9 = 0;
      uStack_68 = uStack_68 + 1;
      if ((int)param_1[6] != 0) goto LAB_1075227d8;
      plStack_70[3] = plStack_70[3] - (ulong)uStack_68;
      FUN_107522fd0();
      if (((ulong)param_3 & 1) != 0) goto LAB_1075227d8;
      lVar10 = (long)pbStack_60 - lStack_58;
      uVar14 = 0x10;
    }
    else {
      cVar3 = SBORROW4(uVar16,0x1f);
      uVar13 = (uint)bVar21;
      cVar4 = (int)(uVar13 - 0x1f) < 0;
      bVar5 = uVar13 == 0x1f;
      if (0x1f < uVar16) {
        bVar21 = *pbStack_60;
        pbStack_60 = pbStack_60 + 1;
        func_0x00010752558c();
        pbVar8 = extraout_x8;
        if (bVar5 || cVar4 != cVar3) {
          func_0x0001075255c8();
          goto LAB_1075226a8;
        }
        goto LAB_107522654;
      }
      lVar10 = (long)pbStack_60 - lStack_58;
      if (uVar13 == 0) {
        uVar14 = 0xb;
      }
      else {
        uVar14 = 0xc;
      }
    }
    *(undefined4 *)(param_1 + 6) = uVar14;
LAB_1075227d4:
    param_1[7] = lVar10;
LAB_1075227d8:
    param_2[1] = lStack_58;
    *param_2 = (long)pbStack_60;
    return;
  }
  if (cVar4 == '[') {
    func_0x000107525568();
    func_0x000107525838();
    FUN_107523164();
    if (((ulong)param_1 & 1) != 0) {
      func_0x000107525560();
      if ((int)unaff_x19[6] != 0) {
        return;
      }
      if (*(char *)*unaff_x20 == ']') {
        *unaff_x20 = (long)((char *)*unaff_x20 + 1);
      }
      else {
        while( true ) {
          param_3 = param_1;
          func_0x00010752551c();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
          func_0x000107525560();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
          func_0x00010752567c();
          if (extraout_w9_02 != 0x2c) break;
          func_0x00010752550c();
          param_1 = param_3;
          if ((int)unaff_x19[6] != 0) {
            return;
          }
        }
        if (extraout_w9_02 != 0x5d) {
          func_0x000107525818();
          uVar14 = 7;
          lVar10 = extraout_x8_05;
          goto LAB_1075229d8;
        }
        func_0x0001075257f0();
      }
      FUN_10752319c();
      if (((ulong)param_3 & 1) != 0) {
        return;
      }
    }
    lVar10 = *unaff_x20 - unaff_x20[1];
    uVar14 = 0x10;
LAB_1075229d8:
    *(undefined4 *)(unaff_x19 + 6) = uVar14;
    unaff_x19[7] = lVar10;
    return;
  }
  if (cVar4 == 'f') {
    func_0x0001075254b0();
    if ((((extraout_w10_05 == 0x61) && (func_0x0001075256a8(), extraout_w10_06 == 0x6c)) &&
        (func_0x000107525698(), extraout_w10_07 == 0x73)) &&
       (*unaff_x20 = extraout_x9_01 + 4, *(char *)(extraout_x9_01 + 4) == 'e')) {
      *unaff_x20 = extraout_x9_01 + 5;
      func_0x000107522f8c(param_3,0);
      if (((ulong)param_3 & 1) != 0) {
        return;
      }
    }
    func_0x0001075254e0();
    return;
  }
  if (cVar4 == '{') {
    func_0x000107525568();
    func_0x000107525838();
    func_0x0001075230bc();
    if (((ulong)param_1 & 1) != 0) {
      func_0x000107525560();
      if ((int)unaff_x19[6] != 0) {
        return;
      }
      if (*(char *)*unaff_x20 == '}') {
        *unaff_x20 = (long)((char *)*unaff_x20 + 1);
      }
      else {
        while( true ) {
          func_0x00010752567c();
          if (extraout_w9 != 0x22) {
            func_0x000107525818();
            uVar14 = 4;
            lVar10 = extraout_x8_03;
            goto LAB_1075228a8;
          }
          param_3 = unaff_x19;
          FUN_1075225d4();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
          func_0x000107525560();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
          func_0x00010752567c();
          if (extraout_w9_00 != 0x3a) {
            func_0x000107525818();
            uVar14 = 5;
            lVar10 = extraout_x8_04;
            goto LAB_1075228a8;
          }
          func_0x00010752550c();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
          func_0x00010752551c();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
          func_0x000107525560();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
          func_0x00010752567c();
          if (extraout_w9_01 != 0x2c) break;
          func_0x00010752550c();
          if ((int)unaff_x19[6] != 0) {
            return;
          }
        }
        if (extraout_w9_01 != 0x7d) {
          func_0x000107525818();
          uVar14 = 6;
          lVar10 = extraout_x8_02;
          goto LAB_1075228a8;
        }
        func_0x0001075257f0();
      }
      FUN_1075230f4();
      if (((ulong)param_3 & 1) != 0) {
        return;
      }
    }
    lVar10 = *unaff_x20 - unaff_x20[1];
    uVar14 = 0x10;
LAB_1075228a8:
    *(undefined4 *)(unaff_x19 + 6) = uVar14;
    unaff_x19[7] = lVar10;
    return;
  }
  if (cVar4 == 't') {
    func_0x0001075254b0();
    if (((extraout_w10_02 == 0x72) && (func_0x0001075256a8(), extraout_w10_03 == 0x75)) &&
       (func_0x000107525698(), extraout_w10_04 == 0x65)) {
      *unaff_x20 = extraout_x9_00 + 4;
      func_0x000107522f8c(param_3,1);
      if (((ulong)param_3 & 1) != 0) {
        return;
      }
    }
    func_0x0001075254e0();
    return;
  }
  if (cVar4 == 'n') {
    func_0x0001075254b0();
    if (((extraout_w10 == 0x75) && (func_0x0001075256a8(), extraout_w10_00 == 0x6c)) &&
       (func_0x000107525698(), extraout_w10_01 == 0x6c)) {
      *unaff_x20 = extraout_x9 + 4;
      FUN_107522edc();
      if (((ulong)param_3 & 1) != 0) {
        return;
      }
    }
    func_0x0001075254e0();
    return;
  }
  func_0x000107525728();
  pbVar8 = (byte *)*param_2;
  lVar10 = param_2[1];
  bVar21 = *pbVar8;
  pbVar23 = pbVar8;
  bVar1 = bVar21;
  if (bVar21 == 0x2d) {
    pbVar23 = pbVar8 + 1;
    bVar1 = pbVar8[1];
  }
  uVar16 = bVar1 - 0x30;
  uVar11 = (ulong)uVar16;
  if (uVar16 == 0) {
    uVar19 = 0;
    bVar5 = false;
    uVar15 = 0;
    bVar2 = false;
    dVar24 = 0.0;
    pbVar22 = pbVar23 + 1;
    uVar16 = (uint)*pbVar22;
    goto LAB_107522bfc;
  }
  if (bVar1 - 0x31 < 9) {
    pbVar22 = pbVar23 + 1;
    if (bVar21 == 0x2d) {
      uVar15 = 0;
      uVar19 = 0xccccccc;
      uVar20 = 0xccccccb;
      while( true ) {
        bVar1 = *pbVar22;
        uVar17 = (ulong)bVar1;
        if (9 < bVar1 - 0x30) break;
        if ((uint)uVar20 < (uint)uVar11) {
          if ((uint)uVar11 != (uint)uVar19) goto LAB_107522b24;
          if (0x38 < bVar1) {
            uVar17 = 0x39;
            uVar11 = uVar19;
            goto LAB_107522b24;
          }
        }
        func_0x0001075257dc();
        uVar11 = extraout_x8_06;
        uVar15 = extraout_x9_02;
        uVar19 = extraout_x11;
        uVar20 = extraout_x12;
      }
    }
    else {
      uVar15 = 0;
      uVar19 = 0x19999999;
      uVar20 = 0x19999998;
      while( true ) {
        bVar1 = *pbVar22;
        uVar17 = (ulong)bVar1;
        if (9 < bVar1 - 0x30) break;
        if (((uint)uVar20 < (uint)uVar11) &&
           (((uint)uVar11 != (uint)uVar19 || (uVar11 = uVar19, 0x35 < bVar1)))) goto LAB_107522b24;
        func_0x0001075257dc();
        uVar11 = extraout_x8_07;
        uVar15 = extraout_x9_03;
        uVar19 = extraout_x11_00;
        uVar20 = extraout_x12_00;
      }
    }
    uVar16 = (uint)bVar1;
    uVar19 = 0;
    bVar5 = false;
    bVar2 = false;
    dVar24 = 0.0;
    goto LAB_107522bfc;
  }
  uVar14 = 3;
  pbVar22 = pbVar23;
  goto LAB_107522e38;
LAB_107522bc0:
  dVar24 = (double)uVar19;
  while( true ) {
    uVar16 = (uint)uVar17;
    if (9 < uVar16 - 0x30) break;
    pbVar22 = pbVar22 + 1;
    uVar17 = (ulong)*pbVar22;
    dVar24 = (double)(uVar16 - 0x30) + dVar24 * 10.0;
  }
  bVar5 = true;
  goto LAB_107522bf4;
LAB_107522b24:
  uVar19 = uVar11 & 0xffffffff;
  if (bVar21 == 0x2d) {
    uVar12 = 0xccccccccccccccb;
    while (uVar16 = (uint)uVar17, uVar16 - 0x30 < 10) {
      if ((uVar12 < uVar19) && ((uVar19 != uVar12 + 1 || (0x38 < uVar16)))) goto LAB_107522bc0;
      func_0x0001075256f8();
      uVar12 = extraout_x8_08;
      uVar15 = extraout_x9_04;
      uVar17 = extraout_x10;
      uVar11 = extraout_x11_01;
    }
  }
  else {
    uVar12 = 0x1999999999999998;
    while (uVar16 = (uint)uVar17, uVar16 - 0x30 < 10) {
      if ((uVar12 < uVar19) && ((uVar19 != uVar12 + 1 || (0x35 < uVar16)))) goto LAB_107522bc0;
      func_0x0001075256f8();
      uVar12 = extraout_x8_09;
      uVar15 = extraout_x9_05;
      uVar17 = extraout_x10_00;
      uVar11 = extraout_x11_02;
    }
  }
  bVar5 = false;
  dVar24 = 0.0;
LAB_107522bf4:
  bVar2 = true;
LAB_107522bfc:
  if (uVar16 == 0x2e) {
    pbVar23 = pbVar22 + 1;
    uVar16 = (uint)*pbVar23;
    if (*pbVar23 - 0x3a < 0xfffffff6) {
      uVar14 = 0xe;
      pbVar22 = pbVar23;
    }
    else {
      iVar18 = 0;
      if (!bVar5) {
        if (!bVar2) {
          uVar19 = uVar11 & 0xffffffff;
        }
        while ((('/' < (char)uVar16 && (uVar16 < 0x3a)) && (uVar19 >> 0x35 == 0))) {
          pbVar23 = pbVar23 + 1;
          uVar19 = (ulong)(uVar16 - 0x30) + uVar19 * 10;
          iVar18 = iVar18 + -1;
          uVar16 = (uint)uVar15;
          if (uVar19 != 0) {
            uVar16 = uVar16 + 1;
          }
          uVar15 = (ulong)uVar16;
          uVar16 = (uint)*pbVar23;
        }
        dVar24 = (double)uVar19;
      }
      while (pbVar22 = pbVar23, '/' < (char)uVar16) {
        if (0x39 < uVar16) {
          bVar5 = true;
          goto LAB_107522cbc;
        }
        if ((int)uVar15 < 0x11) {
          dVar24 = (double)(uVar16 - 0x30) + dVar24 * 10.0;
          iVar18 = iVar18 + -1;
          if (0.0 < dVar24) {
            uVar15 = (ulong)((int)uVar15 + 1);
          }
        }
        pbVar23 = pbVar23 + 1;
        uVar16 = (uint)*pbVar23;
      }
LAB_107522e14:
      uVar13 = 0;
LAB_107522e18:
      func_0x000107303fc0(iVar18 + uVar13);
      if (dVar24 <= 1.79769313486232e+308) {
        dVar25 = -dVar24;
        if (bVar21 != 0x2d) {
          dVar25 = dVar24;
        }
        FUN_10752320c(dVar25);
        goto LAB_107522e5c;
      }
LAB_107522e30:
      uVar14 = 0xd;
      pbVar23 = pbVar8;
    }
  }
  else {
    iVar18 = 0;
LAB_107522cbc:
    if ((uVar16 | 0x20) == 0x65) {
      pbVar23 = pbVar22 + 1;
      bVar1 = *pbVar23;
      if (!bVar2) {
        uVar19 = uVar11 & 0xffffffff;
      }
      if (!bVar5) {
        dVar24 = (double)uVar19;
      }
      bVar5 = bVar1 != 0x2b;
      if ((bVar1 == 0x2b) || (bVar1 == 0x2d)) {
        pbVar23 = pbVar22 + 2;
        bVar1 = *pbVar23;
      }
      else {
        bVar5 = false;
      }
      uVar16 = bVar1 - 0x30;
      if (uVar16 < 10) {
        pbVar22 = pbVar23 + 1;
        if (bVar5) {
          pbVar23 = pbVar22;
          while (pbVar22 = pbVar23, *pbVar22 - 0x30 < 10) {
            uVar16 = ((uint)*pbVar22 + uVar16 * 10) - 0x30;
            pbVar23 = pbVar22 + 1;
            if ((iVar18 + 0x7ffffff7) / 10 < (int)uVar16) {
              do {
                pbVar22 = pbVar22 + 1;
                pbVar23 = pbVar22;
              } while (*pbVar22 - 0x30 < 10);
            }
          }
LAB_107522da4:
          uVar13 = -uVar16;
          if (!bVar5) {
            uVar13 = uVar16;
          }
          goto LAB_107522e18;
        }
        do {
          bVar1 = *pbVar22;
          if (9 < bVar1 - 0x30) goto LAB_107522da4;
          pbVar22 = pbVar22 + 1;
          uVar16 = ((uint)bVar1 + uVar16 * 10) - 0x30;
        } while ((int)uVar16 <= 0x134 - iVar18);
        goto LAB_107522e30;
      }
      uVar14 = 0xf;
      pbVar22 = pbVar23;
    }
    else {
      if (bVar5) goto LAB_107522e14;
      if (bVar2) {
        if (bVar21 != 0x2d) {
          func_0x000107523290();
        }
        else {
          FUN_107523254(param_3,-uVar19);
        }
      }
      else if (bVar21 != 0x2d) {
        func_0x000107523318(param_3,uVar11);
      }
      else {
        func_0x0001075232cc(param_3,-(int)uVar11);
      }
LAB_107522e5c:
      if (((ulong)param_3 & 1) != 0) goto LAB_107522e60;
      uVar14 = 0x10;
      pbVar23 = pbVar8;
    }
  }
LAB_107522e38:
  *(undefined4 *)(unaff_x20 + 6) = uVar14;
  unaff_x20[7] = (long)pbVar23 - lVar10;
LAB_107522e60:
  *unaff_x19 = (long)pbVar22;
  unaff_x19[1] = lVar10;
  return;
}



/* Entry: 10752248c; end: 1075225d3;  */

void FUN_10752248c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  long *unaff_x20;
  
  func_0x0001075254b0();
  if (((extraout_w10 == 0x75) && (func_0x0001075256a8(), extraout_w10_00 == 0x6c)) &&
     (func_0x000107525698(), extraout_w10_01 == 0x6c)) {
    *unaff_x20 = extraout_x9 + 4;
    FUN_107522edc();
    if ((param_3 & 1) != 0) {
      return;
    }
  }
  func_0x0001075254e0();
  return;
}



/* Entry: 1075225d4; end: 10752283f;  */

void FUN_1075225d4(ulong param_1,long *param_2,ulong param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  byte *extraout_x8;
  byte *extraout_x8_00;
  byte *pbVar6;
  undefined1 *extraout_x8_01;
  long lVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong unaff_x21;
  byte bVar12;
  ulong uStack_70;
  uint uStack_68;
  byte *pbStack_60;
  long lStack_58;
  long *plStack_50;
  
  lStack_58 = param_2[1];
  pbStack_60 = (byte *)(*param_2 + 1);
  uStack_68 = 0;
  uStack_70 = param_1;
  plStack_50 = param_2;
  while( true ) {
    bVar12 = *pbStack_60;
    uVar9 = (uint)bVar12;
    cVar1 = SBORROW4(uVar9,0x5c);
    cVar2 = (int)(uVar9 - 0x5c) < 0;
    bVar3 = uVar9 == 0x5c;
    if (!bVar3) break;
    bVar12 = (&UNK_10de68d48)[pbStack_60[1]];
    if (bVar12 == 0) {
      lVar7 = (long)pbStack_60 - lStack_58;
      if (pbStack_60[1] != 0x75) {
        *(undefined4 *)(param_1 + 0x30) = 10;
        *(long *)(param_1 + 0x38) = lVar7;
        pbStack_60 = pbStack_60 + 1;
        goto LAB_1075227d8;
      }
      pbStack_60 = pbStack_60 + 2;
      uVar4 = param_1;
      FUN_107427c54(param_1,&pbStack_60);
      if (*(int *)(param_1 + 0x30) != 0) goto LAB_1075227d8;
      uVar5 = uVar4;
      if (((uint)(uVar4 >> 10) & 0x3fffff) == 0x36) {
        pbVar6 = pbStack_60;
        if ((*pbStack_60 == 0x5c) && (pbVar6 = pbStack_60 + 1, pbStack_60[1] == 0x75)) {
          pbStack_60 = pbStack_60 + 2;
          uVar5 = param_1;
          FUN_107427c54(param_1,&pbStack_60,lVar7);
          if (*(int *)(param_1 + 0x30) != 0) goto LAB_1075227d8;
          pbVar6 = pbStack_60;
          if (0xfffffbff < (int)uVar5 - 0xe000U) {
            uVar5 = (ulong)((int)uVar5 + (int)uVar4 * 0x400 + 0xfca02400);
            unaff_x21 = uVar4;
            goto LAB_1075226ec;
          }
        }
        pbStack_60 = pbVar6;
        *(undefined4 *)(param_1 + 0x30) = 9;
        goto LAB_1075227d4;
      }
LAB_1075226ec:
      func_0x000107303a70(&uStack_70,uVar5);
    }
    else {
      pbStack_60 = pbStack_60 + 2;
      func_0x00010752558c();
      pbVar6 = extraout_x8_00;
      if (bVar3 || cVar2 != cVar1) {
        func_0x0001075255c8();
LAB_1075226a8:
        pbVar6 = *(byte **)(unaff_x21 + 0x18);
      }
LAB_107522654:
      *(byte **)(unaff_x21 + 0x18) = pbVar6 + 1;
      *pbVar6 = bVar12;
      uStack_68 = uStack_68 + 1;
    }
  }
  uVar9 = (uint)bVar12;
  cVar1 = SBORROW4(uVar9,0x22);
  cVar2 = (int)(uVar9 - 0x22) < 0;
  bVar3 = uVar9 == 0x22;
  if (bVar3) {
    pbStack_60 = pbStack_60 + 1;
    func_0x00010752558c();
    puVar8 = extraout_x8_01;
    if (bVar3 || cVar2 != cVar1) {
      func_0x0001075255c8();
      puVar8 = *(undefined1 **)(unaff_x21 + 0x18);
    }
    *(undefined1 **)(unaff_x21 + 0x18) = puVar8 + 1;
    *puVar8 = 0;
    uStack_68 = uStack_68 + 1;
    if (*(int *)(param_1 + 0x30) != 0) goto LAB_1075227d8;
    *(ulong *)(uStack_70 + 0x18) = *(long *)(uStack_70 + 0x18) - (ulong)uStack_68;
    FUN_107522fd0();
    if ((param_3 & 1) != 0) goto LAB_1075227d8;
    lVar7 = (long)pbStack_60 - lStack_58;
    uVar11 = 0x10;
  }
  else {
    cVar1 = SBORROW4(uVar9,0x1f);
    uVar10 = (uint)bVar12;
    cVar2 = (int)(uVar10 - 0x1f) < 0;
    bVar3 = uVar10 == 0x1f;
    if (0x1f < uVar9) {
      bVar12 = *pbStack_60;
      pbStack_60 = pbStack_60 + 1;
      func_0x00010752558c();
      pbVar6 = extraout_x8;
      if (bVar3 || cVar2 != cVar1) {
        func_0x0001075255c8();
        goto LAB_1075226a8;
      }
      goto LAB_107522654;
    }
    lVar7 = (long)pbStack_60 - lStack_58;
    if (uVar10 == 0) {
      uVar11 = 0xb;
    }
    else {
      uVar11 = 0xc;
    }
  }
  *(undefined4 *)(param_1 + 0x30) = uVar11;
LAB_1075227d4:
  *(long *)(param_1 + 0x38) = lVar7;
LAB_1075227d8:
  plStack_50[1] = lStack_58;
  *plStack_50 = (long)pbStack_60;
  return;
}



/* Entry: 107522840; end: 107522a3b;  */

void FUN_107522840(ulong param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined4 uVar2;
  int extraout_w9;
  int extraout_w9_00;
  int extraout_w9_01;
  ulong unaff_x19;
  long *unaff_x20;
  
  func_0x000107525568();
  func_0x000107525838();
  func_0x0001075230bc();
  if ((param_1 & 1) != 0) {
    func_0x000107525560();
    if (*(int *)(unaff_x19 + 0x30) != 0) {
      return;
    }
    if (*(char *)*unaff_x20 == '}') {
      *unaff_x20 = (long)((char *)*unaff_x20 + 1);
    }
    else {
      while( true ) {
        func_0x00010752567c();
        if (extraout_w9 != 0x22) {
          func_0x000107525818();
          uVar2 = 4;
          lVar1 = extraout_x8_00;
          goto LAB_1075228a8;
        }
        param_3 = unaff_x19;
        FUN_1075225d4();
        if (*(int *)(unaff_x19 + 0x30) != 0) {
          return;
        }
        func_0x000107525560();
        if (*(int *)(unaff_x19 + 0x30) != 0) {
          return;
        }
        func_0x00010752567c();
        if (extraout_w9_00 != 0x3a) {
          func_0x000107525818();
          uVar2 = 5;
          lVar1 = extraout_x8_01;
          goto LAB_1075228a8;
        }
        func_0x00010752550c();
        if (*(int *)(unaff_x19 + 0x30) != 0) {
          return;
        }
        func_0x00010752551c();
        if (*(int *)(unaff_x19 + 0x30) != 0) {
          return;
        }
        func_0x000107525560();
        if (*(int *)(unaff_x19 + 0x30) != 0) {
          return;
        }
        func_0x00010752567c();
        if (extraout_w9_01 != 0x2c) break;
        func_0x00010752550c();
        if (*(int *)(unaff_x19 + 0x30) != 0) {
          return;
        }
      }
      if (extraout_w9_01 != 0x7d) {
        func_0x000107525818();
        uVar2 = 6;
        lVar1 = extraout_x8;
        goto LAB_1075228a8;
      }
      func_0x0001075257f0();
    }
    FUN_1075230f4();
    if ((param_3 & 1) != 0) {
      return;
    }
  }
  lVar1 = *unaff_x20 - unaff_x20[1];
  uVar2 = 0x10;
LAB_1075228a8:
  *(undefined4 *)(unaff_x19 + 0x30) = uVar2;
  *(long *)(unaff_x19 + 0x38) = lVar1;
  return;
}



/* Entry: 107522a3c; end: 107522edb;  */

void FUN_107522a3c(undefined8 param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong uVar10;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar11;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  uint uVar12;
  ulong uVar13;
  ulong extraout_x10;
  ulong extraout_x10_00;
  int iVar14;
  ulong uVar15;
  ulong extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  ulong extraout_x11_02;
  undefined8 uVar16;
  undefined8 extraout_x12;
  undefined8 extraout_x12_00;
  long *unaff_x19;
  long unaff_x20;
  byte *pbVar17;
  byte *pbVar18;
  double dVar19;
  double dVar20;
  
  func_0x000107525728();
  pbVar2 = (byte *)*param_2;
  lVar3 = param_2[1];
  bVar4 = *pbVar2;
  pbVar18 = pbVar2;
  bVar5 = bVar4;
  if (bVar4 == 0x2d) {
    pbVar18 = pbVar2 + 1;
    bVar5 = pbVar2[1];
  }
  uVar12 = bVar5 - 0x30;
  uVar9 = (ulong)uVar12;
  if (uVar12 == 0) {
    uVar15 = 0;
    bVar1 = false;
    uVar11 = 0;
    bVar6 = false;
    dVar19 = 0.0;
    pbVar17 = pbVar18 + 1;
    uVar12 = (uint)*pbVar17;
    goto LAB_107522bfc;
  }
  if (bVar5 - 0x31 < 9) {
    pbVar17 = pbVar18 + 1;
    if (bVar4 == 0x2d) {
      uVar11 = 0;
      uVar15 = 0xccccccc;
      uVar16 = 0xccccccb;
      while( true ) {
        bVar5 = *pbVar17;
        uVar13 = (ulong)bVar5;
        if (9 < bVar5 - 0x30) break;
        if ((uint)uVar16 < (uint)uVar9) {
          if ((uint)uVar9 != (uint)uVar15) goto LAB_107522b24;
          if (0x38 < bVar5) {
            uVar13 = 0x39;
            uVar9 = uVar15;
            goto LAB_107522b24;
          }
        }
        func_0x0001075257dc();
        uVar9 = extraout_x8;
        uVar11 = extraout_x9;
        uVar15 = extraout_x11;
        uVar16 = extraout_x12;
      }
    }
    else {
      uVar11 = 0;
      uVar15 = 0x19999999;
      uVar16 = 0x19999998;
      while( true ) {
        bVar5 = *pbVar17;
        uVar13 = (ulong)bVar5;
        if (9 < bVar5 - 0x30) break;
        if (((uint)uVar16 < (uint)uVar9) &&
           (((uint)uVar9 != (uint)uVar15 || (uVar9 = uVar15, 0x35 < bVar5)))) goto LAB_107522b24;
        func_0x0001075257dc();
        uVar9 = extraout_x8_00;
        uVar11 = extraout_x9_00;
        uVar15 = extraout_x11_00;
        uVar16 = extraout_x12_00;
      }
    }
    uVar12 = (uint)bVar5;
    uVar15 = 0;
    bVar1 = false;
    bVar6 = false;
    dVar19 = 0.0;
    goto LAB_107522bfc;
  }
  uVar8 = 3;
  pbVar17 = pbVar18;
  goto LAB_107522e38;
LAB_107522bc0:
  dVar19 = (double)uVar15;
  while( true ) {
    uVar12 = (uint)uVar13;
    if (9 < uVar12 - 0x30) break;
    pbVar17 = pbVar17 + 1;
    uVar13 = (ulong)*pbVar17;
    dVar19 = (double)(uVar12 - 0x30) + dVar19 * 10.0;
  }
  bVar1 = true;
  goto LAB_107522bf4;
LAB_107522b24:
  uVar15 = uVar9 & 0xffffffff;
  if (bVar4 == 0x2d) {
    uVar10 = 0xccccccccccccccb;
    while (uVar12 = (uint)uVar13, uVar12 - 0x30 < 10) {
      if ((uVar10 < uVar15) && ((uVar15 != uVar10 + 1 || (0x38 < uVar12)))) goto LAB_107522bc0;
      func_0x0001075256f8();
      uVar10 = extraout_x8_01;
      uVar11 = extraout_x9_01;
      uVar13 = extraout_x10;
      uVar9 = extraout_x11_01;
    }
  }
  else {
    uVar10 = 0x1999999999999998;
    while (uVar12 = (uint)uVar13, uVar12 - 0x30 < 10) {
      if ((uVar10 < uVar15) && ((uVar15 != uVar10 + 1 || (0x35 < uVar12)))) goto LAB_107522bc0;
      func_0x0001075256f8();
      uVar10 = extraout_x8_02;
      uVar11 = extraout_x9_02;
      uVar13 = extraout_x10_00;
      uVar9 = extraout_x11_02;
    }
  }
  bVar1 = false;
  dVar19 = 0.0;
LAB_107522bf4:
  bVar6 = true;
LAB_107522bfc:
  if (uVar12 == 0x2e) {
    pbVar18 = pbVar17 + 1;
    uVar12 = (uint)*pbVar18;
    if (*pbVar18 - 0x3a < 0xfffffff6) {
      uVar8 = 0xe;
      pbVar17 = pbVar18;
    }
    else {
      iVar14 = 0;
      if (!bVar1) {
        if (!bVar6) {
          uVar15 = uVar9 & 0xffffffff;
        }
        while ((('/' < (char)uVar12 && (uVar12 < 0x3a)) && (uVar15 >> 0x35 == 0))) {
          pbVar18 = pbVar18 + 1;
          uVar15 = (ulong)(uVar12 - 0x30) + uVar15 * 10;
          iVar14 = iVar14 + -1;
          uVar12 = (uint)uVar11;
          if (uVar15 != 0) {
            uVar12 = uVar12 + 1;
          }
          uVar11 = (ulong)uVar12;
          uVar12 = (uint)*pbVar18;
        }
        dVar19 = (double)uVar15;
      }
      while (pbVar17 = pbVar18, '/' < (char)uVar12) {
        if (0x39 < uVar12) {
          bVar1 = true;
          goto LAB_107522cbc;
        }
        if ((int)uVar11 < 0x11) {
          dVar19 = (double)(uVar12 - 0x30) + dVar19 * 10.0;
          iVar14 = iVar14 + -1;
          if (0.0 < dVar19) {
            uVar11 = (ulong)((int)uVar11 + 1);
          }
        }
        pbVar18 = pbVar18 + 1;
        uVar12 = (uint)*pbVar18;
      }
LAB_107522e14:
      uVar7 = 0;
LAB_107522e18:
      func_0x000107303fc0(iVar14 + uVar7);
      if (dVar19 <= 1.79769313486232e+308) {
        dVar20 = -dVar19;
        if (bVar4 != 0x2d) {
          dVar20 = dVar19;
        }
        FUN_10752320c(dVar20);
        goto LAB_107522e5c;
      }
LAB_107522e30:
      uVar8 = 0xd;
      pbVar18 = pbVar2;
    }
  }
  else {
    iVar14 = 0;
LAB_107522cbc:
    if ((uVar12 | 0x20) == 0x65) {
      pbVar18 = pbVar17 + 1;
      bVar5 = *pbVar18;
      if (!bVar6) {
        uVar15 = uVar9 & 0xffffffff;
      }
      if (!bVar1) {
        dVar19 = (double)uVar15;
      }
      bVar1 = bVar5 != 0x2b;
      if ((bVar5 == 0x2b) || (bVar5 == 0x2d)) {
        pbVar18 = pbVar17 + 2;
        bVar5 = *pbVar18;
      }
      else {
        bVar1 = false;
      }
      uVar12 = bVar5 - 0x30;
      if (uVar12 < 10) {
        pbVar17 = pbVar18 + 1;
        if (bVar1) {
          pbVar18 = pbVar17;
          while (pbVar17 = pbVar18, *pbVar17 - 0x30 < 10) {
            uVar12 = ((uint)*pbVar17 + uVar12 * 10) - 0x30;
            pbVar18 = pbVar17 + 1;
            if ((iVar14 + 0x7ffffff7) / 10 < (int)uVar12) {
              do {
                pbVar17 = pbVar17 + 1;
                pbVar18 = pbVar17;
              } while (*pbVar17 - 0x30 < 10);
            }
          }
LAB_107522da4:
          uVar7 = -uVar12;
          if (!bVar1) {
            uVar7 = uVar12;
          }
          goto LAB_107522e18;
        }
        do {
          bVar5 = *pbVar17;
          if (9 < bVar5 - 0x30) goto LAB_107522da4;
          pbVar17 = pbVar17 + 1;
          uVar12 = ((uint)bVar5 + uVar12 * 10) - 0x30;
        } while ((int)uVar12 <= 0x134 - iVar14);
        goto LAB_107522e30;
      }
      uVar8 = 0xf;
      pbVar17 = pbVar18;
    }
    else {
      if (bVar1) goto LAB_107522e14;
      if (bVar6) {
        if (bVar4 != 0x2d) {
          func_0x000107523290();
        }
        else {
          FUN_107523254(param_3,-uVar15);
        }
      }
      else if (bVar4 != 0x2d) {
        func_0x000107523318(param_3,uVar9);
      }
      else {
        func_0x0001075232cc(param_3,-(int)uVar9);
      }
LAB_107522e5c:
      if ((param_3 & 1) != 0) goto LAB_107522e60;
      uVar8 = 0x10;
      pbVar18 = pbVar2;
    }
  }
LAB_107522e38:
  *(undefined4 *)(unaff_x20 + 0x30) = uVar8;
  *(long *)(unaff_x20 + 0x38) = (long)pbVar18 - lVar3;
LAB_107522e60:
  *unaff_x19 = (long)pbVar17;
  unaff_x19[1] = lVar3;
  return;
}



/* Entry: 107522edc; end: 107522fcf;  */

undefined8 FUN_107522edc(long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  undefined8 *puVar1;
  
  FUN_107525464();
  puVar1 = extraout_x8;
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107525500();
    puVar1 = *(undefined8 **)(param_1 + 0x40);
  }
  *(undefined8 **)(param_1 + 0x40) = puVar1 + 3;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  return 1;
}



/* Entry: 107522fd0; end: 107523067;  */

undefined8 FUN_107522fd0(undefined8 *param_1,undefined *param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  func_0x0001075256b8();
  if (param_4 == 0) {
    if ((bool)in_ZR || in_NG != in_OV) {
      func_0x0001075257b8();
      puVar2 = (undefined8 *)param_1[8];
    }
    param_1[8] = puVar2 + 3;
    puVar2[2] = 0;
    puVar1 = &UNK_10de374a7;
    if (param_2 != (undefined *)0x0) {
      puVar1 = param_2;
    }
    *(undefined2 *)((long)puVar2 + 0x16) = 0x405;
    *puVar2 = 0;
    puVar2[1] = puVar1;
    *(undefined4 *)puVar2 = param_3;
  }
  else {
    if ((bool)in_ZR || in_NG != in_OV) {
      func_0x0001075257b8();
      puVar2 = (undefined8 *)param_1[8];
    }
    param_1[8] = puVar2 + 3;
    FUN_107523068();
  }
  return 1;
}



/* Entry: 107523068; end: 1075230f3;  */

undefined8 *
FUN_107523068(undefined8 *param_1,undefined *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puStack_30;
  undefined4 uStack_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puStack_30 = &UNK_10de374a7;
  if (param_2 != (undefined *)0x0) {
    puStack_30 = param_2;
  }
  uStack_28 = param_3;
  FUN_107327ccc(param_1,&puStack_30,param_4);
  return param_1;
}



/* Entry: 1075230f4; end: 10752311b;  */

undefined8 FUN_1075230f4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010752560c((int)param_2,param_1,(int)param_2,param_2);
  FUN_10752311c();
  return 1;
}



/* Entry: 10752311c; end: 107523163;  */

void FUN_10752311c(int *param_1,undefined8 param_2,int param_3)

{
  *(undefined2 *)((long)param_1 + 0x16) = 3;
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    func_0x0001075255fc(0x30);
    func_0x0001075255e4();
  }
  *param_1 = param_3;
  param_1[1] = param_3;
  return;
}



/* Entry: 107523164; end: 10752319b;  */

void FUN_107523164(void)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  
  FUN_107525464();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107525500();
  }
  func_0x0001075256e8();
  *extraout_x8 = 0;
  func_0x000107525650();
  return;
}



/* Entry: 10752319c; end: 1075231c3;  */

undefined8 FUN_10752319c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010752560c((int)param_2,param_1,(int)param_2,param_2);
  FUN_1075231c4();
  return 1;
}



/* Entry: 1075231c4; end: 10752320b;  */

void FUN_1075231c4(int *param_1,undefined8 param_2,int param_3)

{
  *(undefined2 *)((long)param_1 + 0x16) = 4;
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    func_0x0001075255fc(0x18);
    func_0x0001075255e4();
  }
  *param_1 = param_3;
  param_1[1] = param_3;
  return;
}



/* Entry: 10752320c; end: 107523253;  */

void FUN_10752320c(undefined8 param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined8 *extraout_x8;
  
  FUN_107525464();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107525500();
  }
  func_0x0001075256e8();
  *extraout_x8 = param_1;
  func_0x000107525650();
  return;
}



/* Entry: 107523254; end: 107523363;  */

undefined8 FUN_107523254(long param_1)

{
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  long unaff_x20;
  
  func_0x000107525728();
  func_0x0001075256b8();
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x000107525498();
    param_1 = *(long *)(unaff_x20 + 0x40);
  }
  *(long *)(unaff_x20 + 0x40) = param_1 + 0x18;
  FUN_107523364();
  return 1;
}



/* Entry: 107523364; end: 1075233f7;  */

void FUN_107523364(ulong *param_1,ulong param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_2;
  *(undefined2 *)((long)param_1 + 0x16) = 0x96;
  if ((long)param_2 < 0) {
    if (param_2 < 0xffffffff80000000) {
      return;
    }
    uVar2 = 0xb6;
  }
  else {
    uVar1 = 0x1d6;
    if (param_2 >> 0x20 != 0) {
      uVar1 = 0x196;
    }
    uVar2 = 0x1f6;
    if (param_2 >> 0x1f != 0) {
      uVar2 = uVar1;
    }
  }
  *(undefined2 *)((long)param_1 + 0x16) = uVar2;
  return;
}



/* Entry: 1075233f8; end: 10752341f;  */

undefined8 * FUN_1075233f8(undefined8 *param_1)

{
  FUN_107523420(*param_1);
  return param_1;
}



/* Entry: 107523420; end: 10752345b;  */

void FUN_107523420(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  while (*(long *)(param_1 + 0x40) != *(long *)(param_1 + 0x38)) {
    *(long *)(param_1 + 0x40) = *(long *)(param_1 + 0x40) + -0x18;
    FUN_107326ddc();
  }
  plVar3 = (long *)(param_1 + 0x28);
  lVar1 = *(long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x40) != lVar1) {
    func_0x000107304460();
    lVar1 = plVar3[2];
    lVar2 = plVar3[3];
    lVar4 = *plVar3;
    func_0x0001073038ac(lVar4,lVar1,*(long *)(unaff_x20 + 0x20) - lVar1,unaff_x19);
    *(long *)(unaff_x20 + 0x10) = lVar4;
    *(long *)(unaff_x20 + 0x18) = lVar4 + (lVar2 - lVar1);
    *(long *)(unaff_x20 + 0x20) = lVar4 + unaff_x19;
    return;
  }
  _free(lVar1,0);
  *(long *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 10752345c; end: 10752374b;  */

undefined8 ** FUN_10752345c(undefined8 **param_1,long param_2,long param_3,uint *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 **ppuVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 extraout_x8;
  double dVar15;
  undefined8 uVar16;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  uint uStack_100;
  int iStack_fc;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 auStack_c8 [2];
  undefined8 *puStack_b8;
  undefined8 auStack_a0 [7];
  undefined8 uStack_68;
  
  ppuVar10 = param_1;
  lVar12 = param_2;
  lVar14 = param_3;
  func_0x0001075255a0();
  *ppuVar10 = (undefined8 *)0x0;
  ppuVar10[1] = (undefined8 *)0x0;
  ppuVar10[2] = (undefined8 *)0x0;
  puVar13 = (undefined8 *)((lVar14 - lVar12) / 0xa0);
  uStack_68 = extraout_x8;
  FUN_1074715d4();
  do {
    bVar9 = param_2 == param_3;
    if (bVar9) {
      func_0x0001075254cc(uStack_68);
      if (!bVar9) {
        ___stack_chk_fail();
        func_0x00010724e5f4(auStack_c8);
        func_0x00010747030c(param_1);
        __Unwind_Resume();
        puVar11 = (undefined8 *)puVar13[3];
        if (puVar11 == (undefined8 *)0x0) {
          ppuVar10[3] = (undefined8 *)0x0;
        }
        else if (puVar11 == puVar13) {
          func_0x000107525574();
        }
        else {
          func_0x0001075254f4();
          ppuVar10[3] = puVar11;
        }
        return ppuVar10;
      }
      return ppuVar10;
    }
    uVar2 = *(uint *)(param_2 + 0x40);
    if ((((int)uVar2 < 1) || (0x400 < uVar2)) ||
       (iVar3 = *(int *)(param_2 + 0x44), iVar3 - 0x401U < 0xfffffc00)) {
LAB_107523524:
      puStack_118 = (undefined8 *)0x0;
    }
    else {
      dVar15 = *(double *)(param_2 + 0x48);
      bVar9 = false;
      bVar7 = false;
      bVar8 = false;
      if (0.0 < dVar15) {
        bVar9 = false;
        bVar7 = false;
        bVar8 = true;
        if (!NAN(dVar15)) {
          bVar9 = dVar15 < 10.0;
          bVar7 = dVar15 == 10.0;
          bVar8 = false;
        }
      }
      if (((!bVar7 && bVar9 == bVar8) || (iVar4 = *(int *)(param_2 + 0x38), iVar4 < 0)) ||
         ((iVar5 = *(int *)(param_2 + 0x3c), iVar5 < 0 ||
          (((int)*param_4 <= iVar4 ||
           (((int)param_4[1] <= iVar5 || *param_4 < iVar4 + uVar2) ||
            (int)param_4[1] < iVar5 + iVar3)))))) goto LAB_107523524;
      uStack_100 = uVar2;
      iStack_fc = iVar3;
      func_0x00010724e0f8(auStack_c8,CONCAT44(iVar3,uVar2));
      uStack_108 = *(undefined8 *)(param_2 + 0x38);
      uStack_110 = 0;
      FUN_10746671c(param_4,auStack_c8,&uStack_108,&uStack_110,&uStack_100);
      puVar11 = (undefined8 *)0x10;
      __Znwm();
      func_0x000104c2fe00(auStack_a0,param_2);
      dVar15 = *(double *)(param_2 + 0x48);
      uVar6 = *(undefined1 *)(param_2 + 0x50);
      func_0x00010724e660(auStack_e0,param_2 + 0x58);
      func_0x00010724e660(auStack_f8,param_2 + 0x70);
      puVar13 = auStack_a0;
      func_0x00010777fcb8((float)dVar15,puVar11,puVar13,auStack_c8,uVar6,auStack_e0,auStack_f8,
                          param_2 + 0x88);
      puStack_118 = puVar11;
      func_0x00010724e0ac(auStack_f8);
      func_0x00010724e0ac(auStack_e0);
      func_0x000104c2f714(auStack_a0);
      func_0x00010724e5f4(auStack_c8);
      puVar11 = puStack_118;
      if (puStack_118 != (undefined8 *)0x0) {
        puVar1 = param_1[1];
        if (puVar1 < param_1[2]) {
          uVar16 = *puStack_118;
          puVar11 = puVar1 + 2;
          puVar1[1] = puStack_118[1];
          *puVar1 = uVar16;
          *puStack_118 = 0;
          puStack_118[1] = 0;
        }
        else {
          ppuVar10 = param_1;
          FUN_107470638(param_1,((long)puVar1 - (long)*param_1 >> 4) + 1);
          FUN_1074706bc(auStack_c8,ppuVar10,(long)param_1[1] - (long)*param_1 >> 4,param_1 + 2);
          uVar16 = *puVar11;
          puStack_b8[1] = puVar11[1];
          *puStack_b8 = uVar16;
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar13 = auStack_c8;
          puStack_b8 = puStack_b8 + 2;
          FUN_107470678(param_1);
          puVar11 = param_1[1];
          func_0x000107470858(auStack_c8);
        }
        param_1[1] = puVar11;
      }
    }
    ppuVar10 = &puStack_118;
    func_0x00010725bab8();
    param_2 = param_2 + 0xa0;
  } while( true );
}



/* Entry: 10752374c; end: 1075237bb;  */

long FUN_10752374c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000107525574();
  }
  else {
    func_0x0001075254f4();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 1075237bc; end: 1075237cf;  */

void FUN_1075237bc(void)

{
  func_0x000107523790();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075237d0; end: 107523807;  */

undefined8 FUN_1075237d0(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x98;
  __Znwm(0x98);
  FUN_1075243ec();
  return uVar1;
}



/* Entry: 107523808; end: 10752382b;  */

void FUN_107523808(long param_1,undefined8 param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107525568(param_2,param_1 + 8);
  func_0x00010752584c(&PTR_SUB_1109b9628);
  func_0x000107283e34();
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10752374c(unaff_x19 + 0x30,unaff_x20 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x50,unaff_x20 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x68,unaff_x20 + 0x60);
  *(undefined4 *)(unaff_x19 + 0x80) = *(undefined4 *)(unaff_x20 + 0x78);
  lVar1 = *(long *)(unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10752382c; end: 1075243b7;  */

void FUN_10752382c(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int *piVar14;
  int extraout_w8;
  int extraout_w8_00;
  undefined8 extraout_x8;
  ulong extraout_x8_00;
  long lVar15;
  ulong extraout_x8_01;
  int extraout_w10;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  int iStack_428;
  ulong *puStack_420;
  undefined8 *puStack_418;
  long lStack_410;
  ulong *puStack_400;
  undefined8 *puStack_3f8;
  long lStack_3f0;
  undefined4 uStack_3e8;
  undefined4 auStack_3d0 [2];
  long lStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 auStack_3a8 [32];
  ulong auStack_388 [9];
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong *puStack_328;
  ulong uStack_318;
  long lStack_310;
  undefined2 uStack_308;
  short sStack_302;
  undefined4 uStack_300;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined1 uStack_2cc;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  undefined8 *puStack_290;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  long lStack_260;
  undefined1 uStack_258;
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [24];
  uint uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 uStack_210;
  ulong *puStack_1a0;
  undefined8 *puStack_198;
  ulong uStack_190;
  uint uStack_188;
  undefined4 uStack_184;
  ulong *puStack_180;
  undefined8 auStack_178 [28];
  undefined8 uStack_98;
  
  lVar20 = param_1;
  func_0x0001075255a0();
  auStack_3d0[0] = 0;
  plVar16 = (long *)(lVar20 + 0x10);
  uStack_3c0 = *(undefined8 *)(lVar20 + 0x18);
  lVar15 = *plVar16;
  lStack_3c8 = lVar15;
  uStack_98 = extraout_x8;
  if (*(long *)(lVar20 + 0x18) != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10 != 0);
  }
  uStack_3b8 = *(undefined8 *)(param_1 + 0x20);
  uStack_3b0 = *(undefined8 *)(param_1 + 0x28);
  FUN_10752374c(auStack_3a8,param_1 + 0x30);
  uStack_318 = CONCAT44(uStack_318._4_4_,0x12);
  uStack_300 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  func_0x000107525824();
  uStack_2cc = 1;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2c8 = 0;
  func_0x000107525640();
  func_0x000107525774();
  func_0x000107288cd8(&uStack_2a8);
  func_0x000107525638();
  FUN_107326d6c(&uStack_318,0,0x400,0);
  uVar8 = *(char *)(param_1 + 0x67) == '\0';
  lVar20 = *(long *)(param_1 + 0x50);
  if (-1 < *(char *)(param_1 + 0x67)) {
    lVar20 = param_1 + 0x50;
  }
  FUN_1075222a8(&uStack_318,lVar20);
  if ((int)uStack_2c0 == 0) {
    uVar8 = sStack_302 == 3;
    if (!(bool)uVar8) {
      func_0x00010752576c();
      uStack_438 = uStack_2a0;
      uStack_440 = uStack_2a8;
      uStack_430 = uStack_298;
      func_0x0001075255b0();
      puVar10 = &uStack_2a8;
      iStack_428 = extraout_w8_00;
      goto LAB_1075239d0;
    }
    uStack_340 = 0;
    uStack_338 = 0;
    uStack_330 = 0;
    if ((int)uStack_318 == 0) {
      uVar18 = 0;
    }
    else {
      FUN_107522088(&uStack_2a8,uStack_318 & 0xffffffff,0,&uStack_330);
      FUN_107521fd0(&uStack_340,&uStack_2a8);
      func_0x000107522178(&uStack_2a8);
      uVar18 = uStack_318 & 0xffffffff;
    }
    piVar1 = (int *)(lStack_310 + 0x18);
    lVar20 = uVar18 * 0x30;
    uStack_440 = uStack_340;
    uStack_438 = uStack_338;
    uStack_430 = uStack_330;
    lVar21 = uVar18 * 3;
    while (lVar21 != 0) {
      uVar8 = 0;
      uStack_340 = uStack_440;
      uStack_338 = uStack_438;
      uStack_330 = uStack_430;
      if (*(short *)((long)piVar1 + 0x16) == 3) {
        if ((*(ushort *)((long)piVar1 + -2) >> 0xc & 1) == 0) {
          piVar14 = *(int **)(piVar1 + -4);
          iVar3 = piVar1[-6];
        }
        else {
          piVar14 = piVar1 + -6;
          iVar3 = 0x15 - (uint)*(byte *)((long)piVar1 + -3);
        }
        func_0x000104c302a4(auStack_388,piVar14,iVar3);
        func_0x000104c2fe00(&uStack_2a8,auStack_388);
        piVar14 = piVar1;
        FUN_107521b44(piVar1,&DAT_10f62b0e2);
        uStack_270 = SUB84(piVar14,0);
        piVar14 = piVar1;
        FUN_107521b44(piVar1,"y");
        uStack_26c = SUB84(piVar14,0);
        piVar14 = piVar1;
        FUN_107521b44(piVar1,"width");
        uStack_268 = SUB84(piVar14,0);
        piVar14 = piVar1;
        FUN_107521b44(piVar1,"height");
        uStack_264 = SUB84(piVar14,0);
        piVar14 = piVar1;
        func_0x000107327090(piVar1,&UNK_10f4161db);
        lVar21 = lVar15;
        lVar13 = 0x3ff0000000000000;
        if (((int)piVar14 != 0) &&
           (piVar14 = piVar1, FUN_107327234(piVar1,&UNK_10f4161db), lVar21 = lVar15,
           (*(ushort *)((long)piVar14 + 0x16) >> 4 & 1) != 0)) {
          FUN_1073274d0();
          lVar21 = lVar15;
          lVar13 = lVar15;
        }
        piVar14 = piVar1;
        lStack_260 = lVar13;
        func_0x000107327090(piVar1,&UNK_10f4161e6);
        if ((int)piVar14 == 0) {
          uStack_258 = false;
        }
        else {
          piVar14 = piVar1;
          FUN_107327234(piVar1,&UNK_10f4161e6);
          uStack_258 = *(short *)((long)piVar14 + 0x16) == 10;
        }
        FUN_107521b90(auStack_250,piVar1,&UNK_10f4161ea);
        FUN_107521b90(auStack_238,piVar1,&UNK_10f4161f3);
        piVar14 = piVar1;
        func_0x000107327090(piVar1,"content");
        lVar15 = lVar21;
        if (((((int)piVar14 == 0) ||
             (piVar14 = piVar1, FUN_107327234(piVar1,"content"), lVar15 = lVar21,
             *(short *)((long)piVar14 + 0x16) != 4)) || (*piVar14 != 4)) ||
           (((lVar13 = *(long *)(piVar14 + 2), (*(ushort *)(lVar13 + 0x16) >> 4 & 1) == 0 ||
             ((*(ushort *)(lVar13 + 0x2e) >> 4 & 1) == 0)) ||
            (((*(ushort *)(lVar13 + 0x46) >> 4 & 1) == 0 ||
             ((*(ushort *)(lVar13 + 0x5e) >> 4 & 1) == 0)))))) {
          uStack_210 = 0;
          uStack_220 = uStack_220 & 0xffffff00;
        }
        else {
          FUN_1075221c0();
          lVar13 = lVar21;
          FUN_1075221c0(*(long *)(piVar14 + 2) + 0x18);
          lVar22 = lVar13;
          FUN_1075221c0(*(long *)(piVar14 + 2) + 0x30);
          lVar15 = lVar22;
          FUN_1075221c0(*(long *)(piVar14 + 2) + 0x48);
          uStack_220 = (uint)lVar21;
          uStack_21c = (undefined4)lVar13;
          uStack_218 = (undefined4)lVar22;
          uStack_214 = (undefined4)lVar15;
          uStack_210 = 1;
        }
        uVar8 = uStack_338 == uStack_330;
        if (uStack_338 < uStack_330) {
          func_0x0001075220fc(uStack_338,&uStack_2a8);
          uVar18 = uStack_338 + 0xa0;
        }
        else {
          lVar21 = (long)(uStack_338 - uStack_340) / 0xa0;
          uVar18 = lVar21 + 1;
          if (0x199999999999999 < uVar18) {
            FUN_107521fbc();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1075240d8);
            (*pcVar7)();
          }
          uVar4 = (long)(uStack_330 - uStack_340) / 0xa0;
          uVar19 = uVar4 * 2;
          if (uVar19 < uVar18 || uVar19 - uVar18 == 0) {
            uVar19 = uVar18;
          }
          uVar8 = uVar4 == 0xcccccccccccccc;
          if (0xcccccccccccccb < uVar4) {
            uVar19 = 0x199999999999999;
          }
          FUN_107522088(&puStack_400,uVar19,lVar21,&uStack_330);
          func_0x0001075220fc(lStack_3f0,&uStack_2a8);
          lStack_3f0 = lStack_3f0 + 0xa0;
          FUN_107521fd0(&uStack_340,&puStack_400);
          uVar18 = uStack_338;
          func_0x000107522178(&puStack_400);
        }
        uStack_338 = uVar18;
        FUN_1075221d8(&uStack_2a8);
        func_0x000104c2f714(auStack_388);
      }
      piVar1 = piVar1 + 0xc;
      lVar20 = lVar20 + -0x30;
      uStack_440 = uStack_340;
      uStack_438 = uStack_338;
      uStack_430 = uStack_330;
      lVar21 = lVar20;
    }
    uStack_338 = 0;
    uStack_330 = 0;
    uStack_340 = 0;
    iStack_428 = 0;
    func_0x00010752220c(&uStack_340);
  }
  else {
    func_0x000107878d14(auStack_388,&uStack_318);
    func_0x0001004c3cd0(&uStack_2a8,"Failed to parse JSON: ",auStack_388);
    uStack_438 = uStack_2a0;
    uStack_440 = uStack_2a8;
    uStack_430 = uStack_298;
    func_0x0001075255b0();
    iStack_428 = extraout_w8;
    func_0x0001075255dc();
    puVar10 = auStack_388;
LAB_1075239d0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar10);
  }
  FUN_107326ea8(&uStack_318);
  func_0x000107525630();
  if (iStack_428 != 0) {
    func_0x000107284284(&uStack_318,plVar16);
    plVar17 = plVar16;
    func_0x0001072842e4();
    if (((ulong)plVar17 & 1) != 0) {
      func_0x00010728433c();
      puStack_1a0 = (ulong *)((ulong)puStack_1a0 & 0xffffffff00000000);
      FUN_10752374c(&puStack_198,param_1 + 0x30);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (auStack_178,&uStack_440);
      puStack_290 = (undefined8 *)0x0;
      puVar9 = (undefined8 *)0x48;
      __Znwm();
      *puVar9 = &PTR_SUB_1109b98a8;
      *(undefined4 *)(puVar9 + 1) = puStack_1a0._0_4_;
      func_0x000107525740();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (puVar9 + 6,auStack_178);
      puStack_290 = puVar9;
      (**(code **)(*plVar16 + 0x10))(plVar16,&uStack_2a8);
      func_0x000107525628();
      func_0x0001075252b8(&puStack_1a0);
    }
    func_0x000107270b00(&uStack_318);
    goto LAB_107523d84;
  }
  uVar8 = uStack_440 == uStack_438;
  if ((bool)uVar8) {
    uStack_190 = 0;
    puStack_1a0 = (ulong *)0x0;
    puStack_198 = (undefined8 *)0x0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2a8 = 0;
    uStack_188 = 0;
    FUN_1075244c0(auStack_3d0,&puStack_1a0);
    func_0x0001075255c0();
    func_0x00010747030c(&uStack_2a8);
    goto LAB_107523d84;
  }
  uVar2 = *(uint *)(param_1 + 0x80);
  uVar18 = (ulong)uVar2;
  puVar10 = auStack_388;
  FUN_107524600(puVar10,auStack_3d0);
  func_0x000107525674();
  puVar11 = puVar10;
  func_0x0001075256c8();
  FUN_107524600();
  puStack_328 = puVar10;
  if (uVar2 == 0) {
LAB_107523c7c:
    uStack_318 = CONCAT44(uStack_318._4_4_,0x11);
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    func_0x000107525824();
    uStack_2cc = 1;
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2c8 = 0;
    func_0x000107525640();
    func_0x000107525774();
    func_0x000107288cd8(&uStack_2a8);
    func_0x000107525638();
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_298 = CONCAT62(uStack_298._2_6_,1);
    func_0x000107525710();
    func_0x0001078ba1ec(&uStack_318);
    FUN_10742a894(&uStack_2a8,&uStack_318);
    func_0x000107525780();
    FUN_10752345c(&puStack_420,uStack_440,uStack_438,&uStack_2a8);
    func_0x00010724e5f4(&uStack_2a8);
    func_0x000107525630();
    puStack_3f8 = puStack_418;
    puStack_400 = puStack_420;
    lStack_3f0 = lStack_410;
    puStack_420 = (ulong *)0x0;
    puStack_418 = (undefined8 *)0x0;
    lStack_410 = 0;
    uStack_3e8 = 0;
    FUN_107524a3c(puVar10,&puStack_400);
    FUN_1075246d8(&puStack_400);
    func_0x00010747030c(&puStack_420);
  }
  else {
    func_0x000107525860(uStack_438 - uStack_440);
    uVar8 = extraout_x8_00 == uVar18;
    if (extraout_x8_00 <= uVar18) goto LAB_107523c7c;
    __ZNSt3__16chrono12steady_clock3nowEv();
    uStack_318 = 0;
    lStack_310 = 0;
    uStack_308 = 1;
    func_0x000107525710();
    func_0x0001078ba1ec(&puStack_1a0);
    FUN_10742a894(&uStack_318,&puStack_1a0);
    func_0x00010724e5f4(&puStack_1a0);
    puVar9 = (undefined8 *)0xa8;
    __Znwm();
    *puVar9 = &PTR_FUN_1109b9748;
    puVar10 = puVar9 + 3;
    *puVar10 = uStack_440;
    puVar9[5] = uStack_430;
    puVar9[4] = uStack_438;
    puVar9[6] = uStack_318;
    puVar9[7] = lStack_310;
    *(undefined1 *)(puVar9 + 8) = (undefined1)uStack_308;
    lVar15 = uStack_438 - uStack_440;
    *(undefined1 *)((long)puVar9 + 0x41) = uStack_308._1_1_;
    uStack_308 = CONCAT11(uStack_308._1_1_,1);
    puVar9[9] = 0x32aaaba7;
    plVar16 = puVar9 + 1;
    *plVar16 = 0;
    puVar9[2] = 0;
    uStack_440 = 0;
    uStack_438 = 0;
    uStack_430 = 0;
    uStack_318 = 0;
    lStack_310 = 0;
    *(undefined4 *)(puVar9 + 0x14) = 0;
    puVar9[0x11] = 0;
    puVar9[0x10] = 0;
    puVar9[0x13] = 0;
    puVar9[0x12] = 0;
    puVar9[0xd] = 0;
    puVar9[0xc] = 0;
    puVar9[0xf] = 0;
    puVar9[0xe] = 0;
    puVar9[0xb] = 0;
    puVar9[10] = 0;
    puStack_400 = puVar10;
    puStack_3f8 = puVar9;
    FUN_1074715d4(puVar9 + 0x11,lVar15 / 0xa0);
    uVar19 = 0;
    while( true ) {
      func_0x000107525860(puVar9[4] - puVar9[3]);
      uVar8 = uVar19 == extraout_x8_01;
      if (extraout_x8_01 <= uVar19) break;
      plVar17 = *(long **)(param_1 + 0x88);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *plVar16 = *plVar16 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      puVar12 = auStack_178;
      puStack_1a0 = puVar10;
      puStack_198 = puVar9;
      uStack_190 = uVar19;
      uStack_188 = uVar2;
      puStack_180 = puVar11;
      FUN_107524ab0(puVar12,&uStack_340);
      puStack_290 = (undefined8 *)0x0;
      func_0x000107525674();
      *puVar12 = &PTR_SUB_1109b9798;
      puVar12[2] = puStack_198;
      puVar12[1] = puStack_1a0;
      uVar4 = uStack_190;
      puStack_1a0 = (ulong *)0x0;
      puStack_198 = (undefined8 *)0x0;
      puVar12[4] = CONCAT44(uStack_184,uStack_188);
      puVar12[3] = uVar4;
      puVar12[5] = puStack_180;
      FUN_107524ab0(puVar12 + 6,auStack_178);
      puStack_290 = puVar12;
      (**(code **)(*plVar17 + 0x10))(plVar17,&uStack_2a8);
      func_0x000107525628();
      func_0x000107524a14(&puStack_1a0);
      uVar19 = uVar19 + uVar18;
    }
    FUN_1075249ec(&puStack_400);
    func_0x000107525780();
  }
  func_0x000107525274(&uStack_340);
  FUN_107524498(auStack_388);
LAB_107523d84:
  FUN_107522254(&uStack_440);
  FUN_107524498();
  func_0x0001075254cc(uStack_98);
  if (!(bool)uVar8) {
    ___stack_chk_fail();
    FUN_1075249ec(&puStack_400);
    func_0x000107525780();
    func_0x000107525274(&uStack_340);
    FUN_107524498(auStack_388);
    FUN_107522254(&uStack_440);
    FUN_107524498(auStack_3d0);
    func_0x000107525550();
    func_0x000107525734();
    func_0x0001075255d4();
    func_0x000107525540();
    return;
  }
  return;
}



/* Entry: 1075243b8; end: 1075243df;  */

void FUN_1075243b8(undefined8 param_1)

{
  func_0x000107525734();
  func_0x0001075255d4(param_1,&PTR_DAT_1109b9918);
  func_0x000107525540();
  return;
}



/* Entry: 1075243e0; end: 1075243eb;  */

undefined ** FUN_1075243e0(void)

{
  return &PTR_DAT_1109b9918;
}



/* Entry: 1075243ec; end: 107524497;  */

void FUN_1075243ec(void)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107525568();
  func_0x00010752584c(&PTR_SUB_1109b9628);
  func_0x000107283e34();
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10752374c(unaff_x19 + 0x30,unaff_x20 + 0x28);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x50,unaff_x20 + 0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (unaff_x19 + 0x68,unaff_x20 + 0x60);
  *(undefined4 *)(unaff_x19 + 0x80) = *(undefined4 *)(unaff_x20 + 0x78);
  lVar1 = *(long *)(unaff_x20 + 0x88);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x19 + 0x88) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107524498; end: 1075244bf;  */

long FUN_107524498(long param_1)

{
  func_0x0001075219e0(param_1 + 0x28);
  func_0x000107525758();
  return param_1;
}



/* Entry: 1075244c0; end: 1075245ff;  */

undefined4 * FUN_1075244c0(long param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  undefined4 auStack_b8 [4];
  undefined4 auStack_a8 [2];
  undefined1 auStack_a0 [32];
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined8 auStack_58 [3];
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  puVar6 = param_2;
  func_0x0001075255a0();
  uStack_38 = extraout_x8;
  func_0x000107284284(auStack_b8,lVar1 + 8);
  uVar2 = param_1 + 8;
  func_0x0001072842e4();
  if ((uVar2 & 1) != 0) {
    plVar3 = (long *)(param_1 + 8);
    func_0x00010728433c();
    auStack_a8[0] = 0;
    FUN_10752374c(auStack_a0,param_1 + 0x28);
    uStack_80 = *(undefined8 *)(param_1 + 0x20);
    FUN_107524674(auStack_78,param_2);
    puStack_40 = (undefined8 *)0x0;
    param_2 = (undefined8 *)0x58;
    __Znwm();
    *param_2 = &PTR_FUN_1109b96b8;
    *(undefined4 *)(param_2 + 1) = auStack_a8[0];
    func_0x000107525740();
    param_2[6] = uStack_80;
    FUN_107524674(param_2 + 7,auStack_78);
    puVar6 = auStack_58;
    puStack_40 = param_2;
    (**(code **)(*plVar3 + 0x10))(plVar3);
    func_0x0001006393ec(auStack_58);
    FUN_107524648(auStack_a8);
  }
  puVar4 = auStack_b8;
  func_0x000107270b00();
  func_0x0001075254cc(uStack_38);
  if ((bool)in_ZR) {
    return puVar4;
  }
  ___stack_chk_fail();
  func_0x0001006393ec(auStack_58);
  FUN_107524648(auStack_a8);
  puVar5 = auStack_b8;
  func_0x000107270b00();
  func_0x000107525550();
  func_0x000107525568();
  *puVar5 = *(undefined4 *)puVar6;
  func_0x000107283e34(puVar5 + 2,puVar6 + 1);
  *(undefined8 *)(puVar4 + 8) = param_2[4];
  FUN_10752374c(puVar4 + 10,param_2 + 5);
  return puVar4;
}



/* Entry: 107524600; end: 107524647;  */

void FUN_107524600(undefined4 *param_1,undefined4 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107525568();
  *param_1 = *param_2;
  func_0x000107283e34(param_1 + 2,param_2 + 2);
  *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10752374c(unaff_x19 + 0x28,unaff_x20 + 0x28);
  return;
}



/* Entry: 107524648; end: 107524673;  */

long FUN_107524648(long param_1)

{
  FUN_1075246d8(param_1 + 0x30);
  func_0x0001075219e0(param_1 + 8);
  return param_1;
}



/* Entry: 107524674; end: 1075246d7;  */

void FUN_107524674(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107525568();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_1075246d8();
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_DAT_1109b9698)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 1075246d8; end: 10752471b;  */

void FUN_1075246d8(long param_1)

{
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    func_0x000107525760((&PTR_FUN_1109b9688)[*(uint *)(param_1 + 0x18)]);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 10752471c; end: 107524773;  */

void FUN_10752471c(undefined8 param_1,undefined8 param_2)

{
  func_0x000107479e10(param_2);
  func_0x000107470330();
  return;
}



/* Entry: 107524774; end: 10752479f;  */

undefined8 * FUN_107524774(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b96b8;
  FUN_107524648(param_1 + 1);
  return param_1;
}



/* Entry: 1075247a0; end: 1075247b3;  */

void FUN_1075247a0(void)

{
  FUN_107524774();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075247b4; end: 1075247eb;  */

undefined8 FUN_1075247b4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x58;
  __Znwm(0x58);
  FUN_107524874();
  return uVar1;
}



/* Entry: 1075247ec; end: 10752480f;  */

void FUN_1075247ec(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 *puStack_38;
  
  func_0x000107525568(param_2,param_1 + 8);
  func_0x00010752584c(&PTR_FUN_1109b96b8);
  FUN_10752374c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = (undefined1 *)(unaff_x19 + 0x38);
  *puVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x50) = 0xffffffff;
  FUN_1075246d8(puVar3);
  uVar1 = *(uint *)(unaff_x20 + 0x48);
  if (uVar1 != 0xffffffff) {
    puStack_38 = puVar3;
    (*(code *)(&PTR_FUN_1109b9718)[uVar1])(&puStack_38,unaff_x20 + 0x30);
    *(uint *)(unaff_x19 + 0x50) = uVar1;
  }
  return;
}



/* Entry: 107524810; end: 107524867;  */

long * FUN_107524810(long param_1)

{
  long *plVar1;
  
  FUN_10752491c(param_1 + 0x30,0x13);
  plVar1 = *(long **)(param_1 + 0x28);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107525754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))();
    return plVar1;
  }
  func_0x000104bfeb48(0,param_1 + 0x38);
  if (plVar1[1] != 0) {
    func_0x0001000df548();
  }
  return plVar1;
}



/* Entry: 107524868; end: 107524873;  */

undefined ** FUN_107524868(void)

{
  return &PTR_DAT_1109b9728;
}



/* Entry: 107524874; end: 10752490b;  */

void FUN_107524874(void)

{
  uint uVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 *puStack_38;
  
  func_0x000107525568();
  func_0x00010752584c(&PTR_FUN_1109b96b8);
  FUN_10752374c();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar3 = (undefined1 *)(unaff_x19 + 0x38);
  *puVar3 = 0;
  *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
  *(undefined4 *)(unaff_x19 + 0x50) = 0xffffffff;
  FUN_1075246d8(puVar3);
  uVar1 = *(uint *)(unaff_x20 + 0x48);
  if (uVar1 != 0xffffffff) {
    puStack_38 = puVar3;
    (*(code *)(&PTR_FUN_1109b9718)[uVar1])(&puStack_38,unaff_x20 + 0x30);
    *(uint *)(unaff_x19 + 0x50) = uVar1;
  }
  return;
}



/* Entry: 10752490c; end: 10752491b;  */

undefined8 * FUN_10752490c(undefined8 *param_1,long *param_2)

{
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_107471f74(param_1,*param_2,param_2[1],param_2[1] - *param_2 >> 4);
  return param_1;
}



/* Entry: 10752491c; end: 1075249d7;  */

void FUN_10752491c(long *param_1,undefined4 param_2)

{
  long *plVar1;
  long lStack_a8;
  undefined4 uStack_a0;
  undefined4 auStack_98 [6];
  undefined4 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_28;
  
  plVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  lStack_28 = ((long)plVar1 - *param_1) / 1000;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  ppuStack_78 = &PTR_DAT_110996720;
  uStack_70 = 0;
  uStack_50 = 0;
  uStack_4c = 1;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  lStack_a8 = plVar1[1];
  uStack_a0 = 3;
  auStack_98[0] = param_2;
  uStack_58 = param_2;
  FUN_10743f9dc(plVar1 + 1,auStack_98,&lStack_28,&lStack_a8,7);
  func_0x000107262330(auStack_98);
  return;
}



/* Entry: 1075249d8; end: 1075249eb;  */

long * FUN_1075249d8(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107525754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return param_1;
  }
  func_0x000104bfeb48();
  if (param_1[1] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1075249ec; end: 107524a3b;  */

long FUN_1075249ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107524a3c; end: 107524a4f;  */

void FUN_107524a3c(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107525754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  *param_1 = (long)&PTR_FUN_1109b9748;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107524a50; end: 107524a5f;  */

void FUN_107524a50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b9748;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107524a60; end: 107524a73;  */

void FUN_107524a60(void)

{
  FUN_107524a50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107524a74; end: 107524aab;  */

long * FUN_107524a74(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010747030c(param_1 + 0x88);
  __ZNSt3__15mutexD1Ev(param_1 + 0x48);
  func_0x00010724e5f4(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x18);
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    while (lVar2 != lVar3) {
      lVar2 = lVar2 + -0xa0;
      FUN_1075221d8();
    }
    *(long *)(param_1 + 0x20) = lVar3;
    __ZdlPv(*plVar1);
  }
  return plVar1;
}



/* Entry: 107524aac; end: 107524aaf;  */

void FUN_107524aac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107524ab0; end: 107524b1f;  */

long FUN_107524ab0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (lVar1 == param_2) {
    func_0x000107525574();
  }
  else {
    func_0x0001075254f4();
    *(long *)(param_1 + 0x18) = lVar1;
  }
  return param_1;
}



/* Entry: 107524b20; end: 107524b33;  */

void FUN_107524b20(void)

{
  func_0x000107524af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107524b34; end: 107524b67;  */

undefined8 FUN_107524b34(undefined8 param_1)

{
  func_0x000107525674();
  FUN_107524d00();
  return param_1;
}



/* Entry: 107524b68; end: 107524b8b;  */

undefined8 * FUN_107524b68(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  *param_2 = &PTR_SUB_1109b9798;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar3 = *puVar1;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10 != 0);
  }
  uVar4 = puVar1[3];
  uVar3 = puVar1[2];
  param_2[5] = puVar1[4];
  param_2[4] = uVar4;
  param_2[3] = uVar3;
  FUN_107524ab0(param_2 + 6,puVar1 + 5);
  return param_2;
}



/* Entry: 107524b8c; end: 107524ccb;  */

void FUN_107524b8c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int extraout_w8;
  long *plVar4;
  ulong extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar4 = *(long **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar6 = *plVar4;
  uVar3 = (plVar4[1] - lVar6) / 0xa0;
  uVar2 = lVar5 + (ulong)*(uint *)(param_1 + 0x20);
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  FUN_10752345c(&uStack_48,lVar6 + lVar5 * 0xa0,lVar6 + uVar2 * 0xa0,plVar4 + 3);
  lVar7 = *(long *)(param_1 + 8);
  func_0x0001072ab574(lVar7 + 0x30);
  func_0x000107525860(uVar2 * 0xa0 + lVar5 * -0xa0);
  lVar6 = *(long *)(param_1 + 8);
  uVar1 = *(int *)(lVar6 + 0x88) + extraout_w8;
  *(uint *)(lVar6 + 0x88) = uVar1;
  FUN_107524d74(lVar6 + 0x70,*(undefined8 *)(lVar6 + 0x78),uStack_48,uStack_40);
  __ZNSt3__15mutex6unlockEv(lVar7 + 0x30);
  func_0x000107525860((*(long **)(param_1 + 8))[1] - **(long **)(param_1 + 8));
  if (extraout_x8 == uVar1) {
    FUN_10752491c(param_1 + 0x28,0x11);
    lVar6 = *(long *)(param_1 + 8);
    uStack_68 = *(undefined8 *)(lVar6 + 0x78);
    uStack_70 = *(undefined8 *)(lVar6 + 0x70);
    uStack_60 = *(undefined8 *)(lVar6 + 0x80);
    *(undefined8 *)(lVar6 + 0x78) = 0;
    *(undefined8 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x70) = 0;
    uStack_58 = 0;
    FUN_107524a3c(*(undefined8 *)(param_1 + 0x48),&uStack_70);
    func_0x0001075255f4();
  }
  func_0x00010747030c(&uStack_48);
  return;
}



/* Entry: 107524ccc; end: 107524cf3;  */

void FUN_107524ccc(undefined8 param_1)

{
  func_0x000107525734();
  func_0x0001075255d4(param_1,&PTR_DAT_1109b97f8);
  func_0x000107525540();
  return;
}



/* Entry: 107524cf4; end: 107524cff;  */

undefined ** FUN_107524cf4(void)

{
  return &PTR_DAT_1109b97f8;
}



/* Entry: 107524d00; end: 107524d73;  */

undefined8 * FUN_107524d00(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_SUB_1109b9798;
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[2] = param_2[1];
  param_1[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x000107525474();
    } while (extraout_w10 != 0);
  }
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[5] = param_2[4];
  param_1[4] = uVar3;
  param_1[3] = uVar2;
  FUN_107524ab0(param_1 + 6,param_2 + 5);
  return param_1;
}



/* Entry: 107524d74; end: 107524d7f;  */

long FUN_107524d74(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_68 [40];
  
  lVar3 = param_4 - param_3 >> 4;
  if (0 < lVar3) {
    lVar4 = param_1[1];
    if (param_1[2] - lVar4 >> 4 < lVar3) {
      plVar2 = param_1;
      FUN_107470638(param_1,lVar3 + (lVar4 - *param_1 >> 4));
      FUN_1074706bc(auStack_68,plVar2,param_2 - *param_1 >> 4,param_1 + 2);
      func_0x000107524f04(auStack_68,param_3,lVar3);
      FUN_107524f30(param_1,auStack_68,param_2);
      func_0x0001075257ac();
    }
    else {
      lVar1 = lVar4 - param_2 >> 4;
      if (lVar1 < lVar3) {
        FUN_107524e90(param_1,(lVar4 - param_2) + param_3,param_4,lVar3 - lVar1);
        if (lVar1 < 1) {
          return param_2;
        }
        FUN_10752586c();
      }
      else {
        FUN_10752586c();
      }
      FUN_1075250f4();
    }
  }
  return param_2;
}



/* Entry: 107524d80; end: 107524e8f;  */

long FUN_107524d80(long *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined1 auStack_68 [40];
  
  if (0 < param_5) {
    lVar3 = param_1[1];
    if (param_1[2] - lVar3 >> 4 < param_5) {
      plVar2 = param_1;
      FUN_107470638(param_1,param_5 + (lVar3 - *param_1 >> 4));
      FUN_1074706bc(auStack_68,plVar2,param_2 - *param_1 >> 4,param_1 + 2);
      func_0x000107524f04(auStack_68,param_3,param_5);
      FUN_107524f30(param_1,auStack_68,param_2);
      func_0x0001075257ac();
    }
    else {
      lVar1 = lVar3 - param_2 >> 4;
      if (lVar1 < param_5) {
        FUN_107524e90(param_1,(lVar3 - param_2) + param_3,param_4,param_5 - lVar1);
        if (lVar1 < 1) {
          return param_2;
        }
        FUN_10752586c();
      }
      else {
        FUN_10752586c();
      }
      FUN_1075250f4();
    }
  }
  return param_2;
}



/* Entry: 107524e90; end: 107524ec3;  */

void FUN_107524e90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  FUN_107524fec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 107524ec4; end: 107524f2f;  */

void FUN_107524ec4(long param_1,long param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (puVar2 = (undefined8 *)((long)*(undefined8 **)(param_1 + 8) + (param_2 - param_4));
      puVar2 < param_3; puVar2 = puVar2 + 2) {
    uVar3 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar3;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  func_0x000107525804(param_2);
  FUN_10752508c();
  return;
}



/* Entry: 107524f30; end: 107524feb;  */

undefined8 FUN_107524f30(long *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2[1];
  FUN_107470744(param_1 + 2,param_3,param_1[1],param_2[2]);
  lVar2 = *param_1;
  lVar3 = param_2[1];
  param_2[2] = param_2[2] + (param_1[1] - param_3);
  param_1[1] = param_3;
  lVar3 = lVar3 + (lVar2 - param_3);
  FUN_107470744(param_1 + 2,lVar2,param_3,lVar3);
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
  return uVar1;
}



/* Entry: 107524fec; end: 107524fff;  */

void FUN_107524fec(void)

{
  FUN_107525000();
  return;
}



/* Entry: 107525000; end: 10752506b;  */

undefined8 *
FUN_107525000(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    *param_2 = 0;
    param_2[1] = 0;
    puVar1 = puVar1 + 2;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  puStack_28 = puVar1;
  FUN_1074707dc(&uStack_50);
  return puVar1;
}



/* Entry: 10752506c; end: 10752508b;  */

void FUN_10752506c(void)

{
  func_0x000107525804();
  FUN_10752508c();
  return;
}



/* Entry: 10752508c; end: 1075250f3;  */

undefined1  [16] FUN_10752508c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = param_3;
  lVar1 = param_4;
  while (lVar1 = lVar1 + -0x10, lVar2 != param_2) {
    lVar2 = lVar2 + -0x10;
    FUN_10747cf60(lVar1,lVar2);
    param_4 = param_4 + -0x10;
  }
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = param_3;
  return auVar3;
}



/* Entry: 1075250f4; end: 10752512f;  */

long FUN_1075250f4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_1 + param_2 * 0x10;
  func_0x000107525110(param_1,lVar1);
  return lVar1;
}



/* Entry: 107525130; end: 107525183;  */

undefined1  [16] FUN_107525130(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 0x10) {
    FUN_10747cf60(lVar1,param_2);
    lVar1 = lVar1 + 0x10;
    param_4 = param_4 + 0x10;
  }
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  return auVar2;
}



/* Entry: 107525184; end: 1075251a7;  */

undefined8 FUN_107525184(undefined8 param_1)

{
  func_0x0001075256c8();
  FUN_107524498();
  return param_1;
}


