/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107503708; end: 10750376f;  */

void FUN_107503708(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  plStack_28 = (long *)*param_2;
  *param_2 = 0;
  FUN_1074f3c74(lVar1 + 0x480,&plStack_28);
  if (plStack_28 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107503750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plStack_28 + 8))();
    return;
  }
  return;
}



/* Entry: 107503770; end: 1075037cb;  */

void FUN_107503770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined ***pppuVar3;
  undefined **ppuVar4;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lVar2 = lVar1;
  func_0x000107508724();
  uStack_28 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar2 + 0x2ba0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1 + 0x2bb8,param_3);
  ppuStack_48 = &PTR_FUN_1109b7928;
  pppuStack_30 = &ppuStack_48;
  lStack_40 = lVar1;
  FUN_107480850(*(long *)(lVar1 + 8) + 0x28,&ppuStack_48);
  FUN_10748097c(&ppuStack_48);
  func_0x000107508708(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar3 = &ppuStack_48;
    FUN_10748097c();
    func_0x000107508734();
    ppuVar4 = pppuVar3[1];
    if (((ulong)ppuVar4[0x14] & 1) != 0) {
      if (*(char *)(ppuVar4 + 10) == '\x01') {
        *(undefined1 *)(ppuVar4 + 10) = 0;
      }
      ppuVar4[0xb] = (undefined *)0x0;
      ppuVar4[0xc] = (undefined *)0x0;
      if (*(char *)(ppuVar4 + 0x12) == '\x01') {
        *(undefined1 *)(ppuVar4 + 0x12) = 0;
      }
    }
    *(undefined1 *)(ppuVar4 + 0x14) = 0;
    return;
  }
  return;
}



/* Entry: 1075037cc; end: 107503843;  */

void FUN_1075037cc(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar6 = param_2[1];
  uVar5 = *param_2;
  if (param_2[1] != 0) {
    plVar1 = (long *)(param_2[1] + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar6;
  *param_1 = uVar5;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar4;
  func_0x000107503fd8();
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 107503844; end: 107503887;  */

long FUN_107503844(long param_1)

{
  func_0x0001000e30f4(param_1 + 0x78);
  FUN_1073b4994(param_1 + 0x60);
  func_0x0001073bd510(param_1 + 0x48);
  func_0x0001073bd510(param_1 + 0x30);
  FUN_1073bbf4c(param_1 + 8);
  return param_1;
}



/* Entry: 107503888; end: 1075038a7;  */

void FUN_107503888(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001072ba030();
  }
  return;
}



/* Entry: 1075038a8; end: 107503943;  */

undefined8 FUN_1075038a8(long param_1)

{
  undefined8 unaff_x19;
  
  FUN_10747c9d8(param_1 + 8);
  func_0x0001074fe710();
  if (param_1 != 0) {
    func_0x0001074fe5f8();
  }
  return unaff_x19;
}



/* Entry: 107503944; end: 10750396b;  */

void FUN_107503944(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_107508a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10750396c; end: 1075039cb;  */

long * FUN_10750396c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  func_0x0001072508a0(param_1);
  if (param_1[1] != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1075039cc; end: 1075039df;  */

void FUN_1075039cc(void)

{
  func_0x0001075039a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075039e0; end: 107503a03;  */

long FUN_1075039e0(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107503f7c();
  func_0x000107503fac();
  *param_1 = &PTR_SUB_1109b75e8;
  FUN_107503b00(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 107503a04; end: 107503a27;  */

void FUN_107503a04(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107503fac(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109b75e8;
  FUN_107503b00(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107503a28; end: 107503a87;  */

void FUN_107503a28(void)

{
  int iVar1;
  long unaff_x20;
  undefined1 auStack_30 [16];
  
  func_0x000107503fac();
  FUN_107503b30(auStack_30,unaff_x20 + 8);
  iVar1 = (int)unaff_x20 + 8;
  func_0x000107503bbc();
  if (iVar1 != 0) {
    (**(code **)(**(long **)(unaff_x20 + 0x20) + 0xc0))();
  }
  func_0x000107270b00(auStack_30);
  return;
}



/* Entry: 107503a88; end: 107503abf;  */

long FUN_107503a88(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b7648);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107503ac0; end: 107503acb;  */

undefined ** FUN_107503ac0(void)

{
  return &PTR_DAT_1109b7648;
}



/* Entry: 107503acc; end: 107503aff;  */

void FUN_107503acc(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107503fac();
  *param_1 = &PTR_SUB_1109b75e8;
  FUN_107503b00(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107503b00; end: 107503b2f;  */

void FUN_107503b00(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107503b30; end: 107503c37;  */

void FUN_107503b30(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_107503ba8;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_107503ba8:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107503c38; end: 107503c4b;  */

void FUN_107503c38(void)

{
  func_0x000107503c0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107503c4c; end: 107503c6f;  */

long FUN_107503c4c(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107503f7c();
  func_0x000107503fac();
  *param_1 = &PTR_SUB_1109b7668;
  FUN_107503b00(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return unaff_x20;
}



/* Entry: 107503c70; end: 107503c93;  */

void FUN_107503c70(long param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107503fac(param_2,param_1 + 8);
  *param_2 = &PTR_SUB_1109b7668;
  FUN_107503b00(param_2 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107503c94; end: 107503d33;  */

undefined1 * FUN_107503c94(void)

{
  undefined1 in_ZR;
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long unaff_x20;
  long *plVar4;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [64];
  undefined8 uStack_28;
  
  func_0x000107503fac();
  func_0x000107503ea0();
  puVar3 = (undefined1 *)(unaff_x20 + 8);
  uStack_28 = extraout_x8;
  FUN_107503b30(auStack_78);
  iVar1 = (int)unaff_x20 + 8;
  func_0x000107503bbc();
  if (iVar1 != 0) {
    plVar4 = *(long **)(unaff_x20 + 0x20);
    func_0x00010729807c(auStack_68);
    puVar3 = auStack_68;
    (**(code **)(*plVar4 + 0xd0))(plVar4);
    func_0x00010724b3d8(auStack_68);
  }
  puVar2 = auStack_78;
  func_0x000107270b00();
  func_0x000107503e70(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010724b3d8(auStack_68);
  puVar2 = auStack_78;
  func_0x000107270b00(puVar2);
  func_0x000107503e84();
  func_0x0001004a5364(puVar3,&PTR_DAT_1109b76c8);
  puVar2 = puVar2 + 8;
  if ((int)puVar3 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



/* Entry: 107503d34; end: 107503d6b;  */

long FUN_107503d34(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_1109b76c8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 107503d6c; end: 107503d77;  */

undefined ** FUN_107503d6c(void)

{
  return &PTR_DAT_1109b76c8;
}



/* Entry: 107503d78; end: 107503ddb;  */

void FUN_107503d78(undefined8 *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x000107503fac();
  *param_1 = &PTR_SUB_1109b7668;
  FUN_107503b00(param_1 + 1);
  *(undefined8 *)(unaff_x20 + 0x20) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 107503ddc; end: 107503e4f;  */

void FUN_107503ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    func_0x0001072694c4(param_1,param_4);
    FUN_107503e50(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x0001072694f8(&uStack_40);
  return;
}



/* Entry: 107503e50; end: 107504013;  */

void FUN_107503e50(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 2) {
    uVar2 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar2;
    puVar1 = puVar1 + 2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 107504014; end: 1075043c3;  */

long * FUN_107504014(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
                    long param_6,long *param_7)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  plVar5 = param_2;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  *param_2 = (long)(plVar5 + 1);
  uStack_98 = 0x800000003;
  uStack_90 = 0xfe502a;
  uStack_88 = 0x3f866666;
  func_0x0001077f3c4c();
  func_0x0001077f3790();
  lVar6 = 0xa8;
  __Znwm();
  func_0x0001074802a8();
  param_2[1] = lVar6;
  lVar6 = *param_2;
  puVar7 = (undefined8 *)0x68;
  __Znwm();
  FUN_1073af4e0(&uStack_80);
  uVar4 = uStack_78;
  uVar3 = uStack_80;
  uStack_78 = 0;
  uStack_80 = 0;
  *puVar7 = 2;
  puVar7[1] = lVar6;
  uStack_90 = 0;
  uStack_98 = 0;
  puVar7[3] = uVar4;
  puVar7[2] = uVar3;
  puVar7[5] = 0;
  puVar7[4] = 0;
  puVar7[7] = 0;
  puVar7[6] = 0;
  puVar7[9] = 0;
  puVar7[8] = 0;
  puVar7[0xb] = 0;
  puVar7[10] = 0;
  puVar7[0xc] = 0;
  param_2[2] = (long)puVar7;
  func_0x00010724b8b8(&uStack_98);
  func_0x00010724b8b8(&uStack_80);
  param_2[3] = param_5;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_2 + 7) = 0;
  *(undefined1 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 9) = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  *(undefined1 *)(param_2 + 0xb) = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined1 *)(param_2 + 0xe) = 0;
  *(undefined1 *)(param_2 + 0xf) = 0;
  *(undefined1 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0x11) = 0;
  *(undefined1 *)(param_2 + 0x12) = 0;
  *(undefined1 *)(param_2 + 0x13) = 0;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x16) = 0;
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x19) = 0;
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  *(undefined1 *)(param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 0x1d) = 0;
  *(undefined1 *)(param_2 + 0x1e) = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_2 + 0x21) = 0;
  *(undefined1 *)(param_2 + 0x22) = 0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  *(undefined1 *)(param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 0x25) = 0;
  *(undefined1 *)(param_2 + 0x26) = 0;
  *(undefined1 *)(param_2 + 0x27) = 0;
  *(undefined1 *)(param_2 + 0x28) = 0;
  *(undefined1 *)(param_2 + 0x29) = 0;
  *(undefined1 *)(param_2 + 0x2a) = 0;
  *(undefined1 *)(param_2 + 0x2b) = 0;
  *(undefined1 *)(param_2 + 0x2c) = 0;
  *(undefined1 *)(param_2 + 0x2d) = 0;
  *(undefined1 *)(param_2 + 0x2e) = 0;
  *(undefined1 *)(param_2 + 0x2f) = 0;
  *(undefined1 *)(param_2 + 0x30) = 0;
  *(undefined1 *)(param_2 + 0x31) = 0;
  param_2[0x47] = 0;
  param_2[0x46] = 0;
  param_2[0x58] = 0;
  param_2[0x33] = 0;
  param_2[0x32] = 0;
  param_2[0x35] = 0;
  param_2[0x34] = 0;
  param_2[0x37] = 0;
  param_2[0x36] = 0;
  param_2[0x39] = 0;
  param_2[0x38] = 0;
  param_2[0x3b] = 0;
  param_2[0x3a] = 0;
  param_2[0x3d] = 0;
  param_2[0x3c] = 0;
  _bzero(param_2 + 0x72,0x98);
  *(undefined4 *)(param_2 + 0x85) = 0x3f800000;
  param_2[0x87] = 0;
  param_2[0x86] = 0;
  param_2[0x89] = 0;
  param_2[0x88] = 0;
  param_2[0x8b] = 0;
  param_2[0x8a] = 0;
  param_2[0x8d] = 0;
  param_2[0x8c] = 0;
  param_2[0x8f] = 0;
  param_2[0x8e] = 0;
  plVar5 = param_3;
  (**(code **)(*param_3 + 0x10))(param_3);
  FUN_1074ea938(param_1,param_2 + 0x90,plVar5,(*(byte *)(param_3 + 2) ^ 0xff) & 1,param_4,param_6,
                param_2[3],param_2[2]);
  param_2[0x565] = (long)param_3;
  param_2[0x566] = (long)&PTR_PTR_1131ad7e0;
  *(int *)(param_2 + 0x567) = (int)param_1;
  param_2[0x568] = 0;
  *(undefined4 *)(param_2 + 0x569) = 0;
  param_2[0x56a] = param_6;
  param_2[0x56b] = *param_7;
  lVar6 = param_7[1];
  param_2[0x56c] = lVar6;
  if (lVar6 != 0) {
    plVar5 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_2[0x56d] = 0;
  *(undefined1 *)(param_2 + 0x56e) = 0;
  *(undefined1 *)((long)param_2 + 0x2b74) = 0;
  *(undefined1 *)(param_2 + 0x56f) = 0;
  *(undefined1 *)(param_2 + 0x570) = 0;
  *(undefined1 *)(param_2 + 0x571) = 0;
  *(undefined1 *)(param_2 + 0x573) = 0;
  func_0x00010002b838(param_2 + 0x574,"");
  func_0x00010002b838(param_2 + 0x577,"");
  param_2[0x57c] = 0;
  param_2[0x57b] = 0;
  param_2[0x57a] = 0;
  func_0x00010726ed14(param_2 + 0x57d);
  param_2[0x57f] = (long)param_2;
  return param_2;
}



/* Entry: 1075043c4; end: 107504463;  */

long FUN_1075043c4(long param_1)

{
  FUN_107507c40(param_1 + 0x2be8);
  func_0x0001073bd510(param_1 + 0x2bd0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2bb8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x2ba0);
  func_0x000107508930();
  func_0x00010725afe8(param_1 + 0x2b58);
  func_0x000107507b04(param_1 + 0x2b40);
  FUN_1074eb16c(param_1 + 0x480);
  FUN_1075069a0(param_1 + 0x430);
  func_0x000107506a80(param_1 + 0x408);
  FUN_107506b14(param_1 + 0x1a0);
  func_0x000107507adc(param_1 + 400);
  FUN_107507a88(param_1 + 0x10);
  FUN_107507a34(param_1 + 8);
  return param_1;
}



/* Entry: 107504464; end: 1075044d3;  */

void FUN_107504464(long param_1)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auStack_40 [32];
  
  func_0x0001075087fc();
  FUN_10743fefc(auStack_40,*(undefined8 *)(param_1 + 0x2b28),1);
  plVar1 = *(long **)(unaff_x20 + 0x2b28);
  func_0x0001073caeb8();
  func_0x0001075089b8(*(undefined8 *)(*plVar1 + 0x18));
  func_0x0001075087f0(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001075089b8();
  func_0x0001075087d0(*(undefined8 *)(unaff_x20 + 0x1368));
  func_0x0001075089b8();
  FUN_10744008c(auStack_40);
  return;
}



/* Entry: 1075044d4; end: 107504717;  */

void FUN_1075044d4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined1 in_ZR;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  long *plVar5;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long lVar6;
  int extraout_w10;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 *puStack_1b0;
  code *pcStack_1a8;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [64];
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long alStack_a8 [4];
  long alStack_88 [3];
  long *plStack_70;
  undefined8 uStack_68;
  
  puVar4 = param_2;
  func_0x000107508724();
  plVar7 = puVar4 + 1;
  uStack_68 = extraout_x8;
  if (puVar4[4] == 0) {
    plVar2 = &lStack_f8;
    FUN_107504718(plVar2,param_1 + 0x2be8);
    FUN_1073af260();
    (**(code **)(*plVar2 + 0x20))(&lStack_110);
    lVar1 = lStack_f0;
    lVar6 = lStack_f8;
    lVar9 = lStack_108;
    lVar8 = lStack_110;
    lStack_f8 = 0;
    lStack_f0 = 0;
    lStack_110 = 0;
    lStack_108 = 0;
    lStack_e0 = lVar6;
    lStack_d8 = lVar1;
    uStack_140 = 0;
    uStack_138 = 0;
    lStack_d0 = lStack_e8;
    lStack_c8 = lVar8;
    uStack_120 = 0;
    lStack_118 = lStack_100;
    lStack_130 = lStack_e8;
    uStack_128 = 0;
    lStack_c0 = lVar9;
    lStack_b8 = lStack_100;
    plVar2 = (long *)0x38;
    __Znwm();
    *plVar2 = (long)&PTR_SUB_1109b76f8;
    plVar2[1] = lVar6;
    lStack_e0 = 0;
    lStack_d8 = 0;
    plVar2[2] = lVar1;
    plVar2[3] = lStack_e8;
    plVar2[4] = lVar8;
    plVar2[5] = lVar9;
    lStack_c8 = 0;
    lStack_c0 = 0;
    plVar2[6] = lStack_100;
    in_ZR = plVar7 == alStack_88;
    plStack_70 = plVar2;
    if (!(bool)in_ZR) {
      plVar5 = (long *)param_2[4];
      in_ZR = plVar5 == plVar7;
      if ((bool)in_ZR) {
        (**(code **)(*plVar5 + 0x18))(plVar5,alStack_88);
        func_0x0001075087f0(param_2[4]);
        (*extraout_x8_00)();
        param_2[4] = plStack_70;
        plStack_70 = alStack_88;
      }
      else {
        param_2[4] = plVar2;
        plStack_70 = plVar5;
      }
    }
    func_0x00010725b6a4(alStack_88);
    FUN_10750476c(&lStack_e0);
    FUN_10750476c(&uStack_140);
    func_0x00010725b1d4(&lStack_110);
    func_0x00010725b1d4(&lStack_f8);
  }
  uVar3 = *(ulong *)(param_1 + 0x2b28);
  func_0x0001075088d4();
  (*extraout_x8_01)();
  if ((uVar3 & 1) == 0) {
    auStack_198[0] = 1;
    uStack_190 = *param_2;
    auStack_188[0] = 0;
    uStack_148 = 0;
    plVar2 = (long *)auStack_198;
    func_0x00010725b570(plVar7);
    plVar7 = (long *)auStack_188;
    func_0x00010725b590();
  }
  else {
    plVar7 = *(long **)(param_1 + 0x2b28);
    func_0x00010725b620(&lStack_b0,param_2);
    plVar2 = &lStack_b0;
    func_0x000107508888(*(undefined8 *)(*plVar7 + 0x38));
    plVar7 = alStack_a8;
    func_0x00010725b6a4();
  }
  func_0x000107508708(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if ((int)plVar2 != 0) {
      func_0x000104bd46a0(plVar7);
      FUN_10750476c(&lStack_e0);
      FUN_10750476c(&uStack_140);
      func_0x00010725b1d4(&lStack_110);
      plVar7 = &lStack_f8;
      func_0x00010725b1d4();
    }
    func_0x000107508734();
    pcStack_1a8 = FUN_107504718;
    lVar9 = plVar2[1];
    lVar8 = *plVar2;
    puStack_1b0 = &stack0xfffffffffffffff0;
    if (plVar2[1] != 0) {
      do {
        func_0x0001075087b4();
      } while (extraout_w10 != 0);
    }
    lVar6 = plVar2[2];
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    plVar7[1] = lVar9;
    *plVar7 = lVar8;
    uStack_1c0 = 0;
    uStack_1b8 = 0;
    plVar7[2] = lVar6;
    func_0x00010725b1d4(&uStack_1c0);
    func_0x00010725b1d4(&uStack_1d0);
    return;
  }
  return;
}



/* Entry: 107504718; end: 10750476b;  */

void FUN_107504718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int extraout_w10;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (param_2[1] != 0) {
    do {
      func_0x0001075087b4();
    } while (extraout_w10 != 0);
  }
  uVar1 = param_2[2];
  uStack_30 = 0;
  uStack_28 = 0;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  uStack_20 = 0;
  uStack_18 = 0;
  param_1[2] = uVar1;
  func_0x00010725b1d4(&uStack_20);
  func_0x00010725b1d4(&uStack_30);
  return;
}



/* Entry: 10750476c; end: 10750478f;  */

/* WARNING: Possible PIC construction at 0x000107504780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107504784) */
/* WARNING: Removing unreachable block (ram,0x0001075089c0) */

long FUN_10750476c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x00010725c0a0();
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 107504790; end: 10750485b;  */

void FUN_107504790(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_68 [32];
  long lStack_48;
  long lStack_40;
  
  if ((*(char *)(param_1 + 0x2b74) == '\x01') && (*(int *)(param_1 + 0x2b70) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_107480328(uVar3,lVar1);
  }
  plVar2 = *(long **)(param_1 + 0x10);
  FUN_107508ca8(auStack_68,plVar2);
  if (lStack_48 != lStack_40) {
    plVar2 = *(long **)(param_1 + 0x2b30);
    (**(code **)(*plVar2 + 0x58))(plVar2,&lStack_48);
  }
  plVar4 = *(long **)(param_1 + 0x18);
  __ZNSt3__16chrono12steady_clock3nowEv();
  (**(code **)(*plVar4 + 0x38))(plVar4,plVar2);
  FUN_1074eb3d8(param_1 + 0x480);
  FUN_10750485c(param_1);
  func_0x0001073bd510(&lStack_48);
  return;
}



/* Entry: 10750485c; end: 1075048c7;  */

void FUN_10750485c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lStack_38;
  long *plStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  __ZNSt3__16chrono12steady_clock3nowEv();
  plStack_30 = &lStack_28;
  lStack_38 = param_1;
  lStack_28 = lVar1;
  if (*(char *)(param_1 + 0x2b80) == '\x01') {
    plVar2 = (long *)(param_1 + 0x2b78);
    func_0x00010725d8e8();
    if (lStack_28 - *plVar2 < 1000000000) {
      return;
    }
  }
  FUN_10750686c(&lStack_38);
  return;
}



/* Entry: 1075048c8; end: 107505cdb;  */

void FUN_1075048c8(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long **pplVar5;
  undefined1 in_ZR;
  ulong **ppuVar6;
  ulong ***pppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long ***ppplVar12;
  long ***ppplVar13;
  undefined4 *puVar14;
  char *pcVar15;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  code *extraout_x8_06;
  code *extraout_x8_07;
  code *extraout_x8_08;
  code *extraout_x8_09;
  code *extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  int iVar16;
  int extraout_w10;
  int extraout_w10_00;
  undefined1 uVar17;
  long *plVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  long *plVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  byte bVar35;
  byte bVar38;
  byte bVar39;
  undefined4 uVar36;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 auVar37 [16];
  byte bVar52;
  undefined4 uVar53;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 *puStack_7e0;
  undefined1 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 uStack_7c8;
  undefined1 uStack_7c0;
  undefined8 uStack_7bc;
  undefined1 auStack_7b0 [24];
  undefined1 auStack_798 [16];
  undefined1 auStack_788 [24];
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined4 uStack_740;
  undefined4 uStack_73c;
  undefined4 uStack_738;
  undefined8 uStack_734;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 auStack_6e0 [24];
  ulong **ppuStack_6c8;
  long *plStack_6c0;
  long *plStack_6b8;
  undefined8 uStack_6b0;
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  long ***ppplStack_678;
  undefined4 uStack_670;
  undefined8 *puStack_608;
  undefined8 *puStack_600;
  undefined8 *puStack_5f0;
  undefined8 *puStack_5e8;
  undefined1 auStack_5d8 [24];
  undefined8 *puStack_5c0;
  undefined8 *puStack_5b8;
  long *plStack_5a8;
  long lStack_5a0;
  char cStack_591;
  undefined1 auStack_590 [24];
  undefined8 *puStack_578;
  ulong **ppuStack_570;
  undefined8 *puStack_568;
  undefined1 uStack_558;
  undefined1 uStack_554;
  undefined1 uStack_550;
  undefined1 uStack_54c;
  undefined1 uStack_548;
  long **pplStack_460;
  long lStack_458;
  long *plStack_450;
  ulong **ppuStack_448;
  ulong **ppuStack_438;
  ulong **ppuStack_430;
  undefined1 uStack_400;
  byte bStack_3f8;
  int iStack_2b8;
  int iStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  ulong **ppuStack_298;
  undefined8 uStack_290;
  undefined8 *puStack_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  uint uStack_274;
  ulong uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined4 auStack_258 [2];
  undefined4 uStack_250;
  undefined1 uStack_24c;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 auStack_190 [66];
  undefined8 uStack_88;
  
  func_0x000107508724();
  plVar32 = (long *)*param_3;
  uStack_88 = extraout_x8;
  if (plVar32 == (long *)0x0) {
    func_0x000107508a0c();
    uVar36 = SUB84(param_3,0);
    func_0x000107508980();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    goto LAB_1075059bc;
  }
  lVar31 = plVar32[1];
  cStack_591 = (char)lVar31 + -0x80;
  FUN_1074178c4();
  ppuVar6 = (ulong **)param_2[1];
  FUN_1074808b4(ppuVar6,lVar31 + 0x180);
  if (param_2[0x56b] != 0) {
    func_0x0001073caeb8(param_2[0x565]);
    plStack_5a8 = (long *)param_2[0x56b];
    lStack_5a0 = param_2[0x56c];
    if (lStack_5a0 != 0) {
      do {
        func_0x0001075087b4();
      } while (extraout_w10 != 0);
    }
    func_0x0001075088d4();
    (*extraout_x8_00)();
    ppuVar6 = (ulong **)&plStack_5a8;
    func_0x00010725afe8();
  }
  FUN_1073c89ec();
  ppuStack_570 = ppuVar6;
  FUN_107505cdc(&ppuStack_298,0x6d,&cStack_591,&ppuStack_570);
  func_0x000107508808(&pplStack_460,&ppuStack_298);
  FUN_10743d7bc(auStack_190,&pplStack_460);
  func_0x000107288cd8(&pplStack_460);
  func_0x000107262330(&ppuStack_298);
  if (*(int *)(param_2 + 0x569) == 0) {
    func_0x0001075087f0(param_2[0x566]);
    (*extraout_x8_01)();
  }
  pppuVar7 = (ulong ***)param_2[0x566];
  (*(code *)(*pppuVar7)[5])();
  if (param_2[0x568] == 0) {
    func_0x0001073caeb8(param_2[0x565]);
    uVar8 = 0x458;
    __Znwm(0x458);
    FUN_1075001c4();
    pplStack_460 = (long **)0x0;
    FUN_107507b24(param_2 + 0x568,uVar8);
    pppuVar7 = (ulong ***)&pplStack_460;
    func_0x000107507b04();
  }
  if (param_2[0x32] == 0) {
    uVar8 = param_2[0x565];
    func_0x0001073caeb8(uVar8);
    uVar9 = param_2[0x565];
    func_0x0001075087d0(uVar9);
    (*extraout_x8_02)();
    ppuVar6 = (ulong **)param_2[0x56b];
    lVar26 = param_2[0x56c];
    puVar10 = (undefined8 *)0xa8;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_1109b7858;
    pplStack_460 = (long **)ppuVar6;
    lStack_458 = lVar26;
    if (lVar26 != 0) {
      do {
        func_0x0001075087b4();
      } while (extraout_w10_00 != 0);
    }
    func_0x0001073ca244(puVar10 + 3,uVar8,uVar9,&pplStack_460);
    func_0x00010725afe8(&pplStack_460);
    uStack_290 = 0;
    ppuStack_298 = (ulong **)0x0;
    pplStack_460 = (long **)param_2[0x32];
    lStack_458 = param_2[0x33];
    param_2[0x32] = puVar10 + 3;
    param_2[0x33] = puVar10;
    func_0x000107507adc(&pplStack_460);
    pppuVar7 = &ppuStack_298;
    func_0x000107507adc();
  }
  FUN_1073c89ec();
  ppplStack_678 = (long ***)pppuVar7;
  FUN_107505cdc(&ppuStack_570,0x6e,&cStack_591,&ppplStack_678);
  func_0x000107508808(&ppuStack_298,&ppuStack_570);
  FUN_10743d7bc(&pplStack_460,&ppuStack_298);
  func_0x000107288cd8(&ppuStack_298);
  func_0x000107262330(&ppuStack_570);
  (**(code **)(*(long *)param_2[0x565] + 0x18))();
  FUN_10743d7e4(&pplStack_460);
  if (param_2[0x56a] == 0) {
LAB_107504b44:
    plVar11 = (long *)0x0;
  }
  else {
    pplStack_460 = (long **)((ulong)pplStack_460 & 0xffffffffffffff00);
    lVar26 = param_2[0x56a] + 0xae0;
    func_0x00010724e2c8(lVar26,&pplStack_460);
    if ((int)lVar26 == 0) goto LAB_107504b44;
    plVar11 = (long *)param_2[0x565];
    func_0x0001073caeb8();
    (**(code **)(*plVar11 + 0x58))();
  }
  (**(code **)(*plVar32 + 0x18))(&puStack_5c0,plVar32);
  for (puVar10 = puStack_5c0; puVar10 != puStack_5b8; puVar10 = puVar10 + 1) {
    plVar18 = (long *)*puVar10;
    plVar29 = plVar18;
    (**(code **)(*plVar18 + 0x48))();
    if ((((int)plVar29 != 0) && ((**(code **)(*plVar18 + 0x50))(), plVar18 != (long *)0x0)) &&
       (*plVar18 != plVar18[1])) {
      if (((ulong)plVar11 & 1) != 0) {
        if (param_2[0x56d] == 0) {
          uVar8 = 0x128;
          __Znwm(0x128);
          FUN_1074de920();
          pplStack_460 = (long **)0x0;
          FUN_107505d50(param_2 + 0x56d,uVar8);
          func_0x000107507c20(&pplStack_460);
        }
        goto LAB_107504c20;
      }
      break;
    }
  }
  FUN_107505d50(param_2 + 0x56d,0);
LAB_107504c20:
  func_0x0001078696e8(auStack_5d8);
  FUN_1074f38e8(param_2 + 0x90,auStack_5d8);
  func_0x000107289df8(&pplStack_460,param_2[0x56a] + 0x6e0);
  pplVar5 = pplStack_460;
  if ((ulong **)pplStack_460 == (ulong **)0x0) {
    uVar36 = 0;
  }
  else {
    uVar36 = FUN_10750833c(pplStack_460);
  }
  func_0x000107289e5c(&pplStack_460);
  uVar3 = 0xbba3d70a;
  if ((ulong **)pplVar5 != (ulong **)0x0) {
    uVar3 = uVar36;
  }
  uVar9 = param_2[0x565];
  uVar53 = *(undefined4 *)(param_2 + 0x567);
  uVar19 = param_2[0x568];
  uVar23 = param_2[0x32];
  ppuStack_570 = (ulong **)((ulong)ppuStack_570 & 0xffffffffffffff00);
  func_0x00010724e2c8(param_2[0x56a] + 0xa40,&ppuStack_570);
  ppplStack_678 = (long ***)((ulong)ppplStack_678 & 0xffffffffffffff00);
  func_0x00010724e2c8(param_2[0x56a] + 0xab0,&ppplStack_678);
  ppuStack_298 = (ulong **)CONCAT44(ppuStack_298._4_4_,0xfff);
  lVar26 = param_2[0x56a] + 0xac0;
  func_0x0001072b86c8(lVar26,&ppuStack_298);
  lVar28 = plVar32[1];
  uVar8 = uVar9;
  func_0x0001073caeb8(uVar9);
  uVar33 = *(undefined8 *)(lVar28 + 0xfe0);
  uVar34 = *(undefined8 *)(lVar28 + 0xfe8);
  uVar27 = *(undefined8 *)(lVar28 + 0xff0);
  uVar36 = *(undefined4 *)(lVar28 + 0xfd0);
  uVar1 = *(undefined4 *)(lVar28 + 0xfd4);
  uVar30 = *(undefined8 *)(lVar28 + 0xfd8);
  plVar11 = plVar32;
  (**(code **)(*plVar32 + 0x28))();
  plVar29 = plVar32;
  func_0x0001075088d4();
  (*extraout_x8_03)();
  FUN_1074d51c4(uVar53,uVar3,&pplStack_460,uVar8,uVar9,uVar33,uVar34,uVar27,uVar36,uVar1,uVar30,
                lVar28,uVar19,plVar11,plVar29,param_2 + 4,uVar23,param_2 + 0x34,param_2 + 0x81,
                param_2 + 0x86,auStack_5d8,0,(int)lVar26);
  uStack_2a4 = *(undefined4 *)(lVar28 + 0x1020);
  uStack_2a8 = *(undefined4 *)(lVar28 + 0x1008);
  FUN_1074d6cc0(&pplStack_460);
  (**(code **)(*plVar32 + 0x20))(&puStack_5f0,plVar32);
  plVar11 = plVar32;
  (**(code **)(*plVar32 + 0x18))(&puStack_608);
  FUN_1073c89ec();
  plStack_6c0 = plVar11;
  FUN_107505cdc(&ppplStack_678,0x6f,&cStack_591,&plStack_6c0);
  func_0x000107508808(&ppuStack_570,&ppplStack_678);
  func_0x0001075089c8();
  func_0x000107288cd8(&ppuStack_570);
  func_0x00010750894c();
  (**(code **)(*plStack_450 + 0x20))(&ppuStack_570,plStack_450,&DAT_10f2ded2d);
  puVar10 = puStack_5e8;
  for (puVar20 = puStack_5f0; puVar4 = puStack_600, puVar21 = puStack_608, puVar20 != puVar10;
      puVar20 = puVar20 + 1) {
    func_0x0001075087d0(*puVar20,ppuStack_570);
    (*extraout_x8_04)();
  }
  for (; in_ZR = puVar21 == puVar4, !(bool)in_ZR; puVar21 = puVar21 + 1) {
    func_0x0001075087d0(*puVar21);
    (*extraout_x8_05)();
  }
  FUN_1075005ac(param_2[0x568],ppuStack_570);
  func_0x0001075087ac(*(undefined8 *)(*plVar32 + 0x28));
  FUN_1073c7c54();
  func_0x0001075087ac(*(undefined8 *)(*plVar32 + 0x30));
  FUN_1074dba20();
  FUN_1074f41a4(param_2 + 0x90,ppuStack_570);
  uVar8 = param_2[0x565];
  func_0x0001073caeb8(uVar8);
  plVar11 = param_2 + 0x287;
  FUN_1074e65f4(plVar11,uVar8,ppuStack_570);
  func_0x0001075089d4();
  if (plVar11 != (long *)0x0) {
    func_0x0001075087dc();
  }
  func_0x000107508810();
  pplVar5 = pplStack_460;
  lVar26 = param_2[0x56d];
  if (lVar26 != 0) {
    func_0x00010750877c();
    (*extraout_x8_06)();
    ppuStack_298 = (ulong **)*plVar11;
    func_0x0001074df56c(lVar26,pplVar5,&ppuStack_298);
  }
  fStack_2b0 = 1.0 - fStack_2ac *
                     (float)(ulong)((((long)puStack_600 - (long)puStack_608 >> 3) + 2) *
                                   (long)iStack_2b8);
  iVar22 = (int)param_2 + 0x1438;
  FUN_1074e6db8();
  if (iVar22 != 0) {
    ppuStack_298 = (ulong **)param_2[0x4f5];
    auVar37 = NEON_fmov(0x3f800000,4);
    puStack_288 = auVar37._8_8_;
    uStack_290 = auVar37._0_8_;
    uStack_280 = CONCAT31(uStack_280._1_3_,1);
    uStack_27c = 0x3f800000;
    uStack_278 = CONCAT31(uStack_278._1_3_,1);
    uStack_274 = uStack_274 & 0xffffff00;
    uStack_270 = uStack_270 & 0xffffffffffffff00;
    plVar11 = plStack_450;
    (**(code **)(*plStack_450 + 0x28))(&ppuStack_570,plStack_450,&UNK_10f415f56,&ppuStack_298);
    func_0x000107508a18();
    if (plVar11 != (long *)0x0) {
      func_0x0001075086fc();
      func_0x0001075089d4();
      if (plVar11 != (long *)0x0) {
        func_0x0001075086fc();
      }
    }
    ppplVar12 = (long ***)ppuStack_448;
    func_0x0001075088d4();
    (*extraout_x8_07)();
    puVar20 = puStack_600;
    puVar10 = puStack_608;
    if (((ulong)ppplVar12 & 1) == 0) {
      ppuStack_298 = (ulong **)CONCAT44(ppuStack_298._4_4_,0xf0);
      uStack_280 = 0;
      uStack_260 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_278 = 0x10996720;
      uStack_274 = 1;
      auStack_258[0] = 0xf0;
      uStack_250 = 0;
      uStack_24c = 1;
      uStack_238 = 0;
      uStack_248 = 0;
      uStack_240 = 0;
      ppuStack_570 = (ulong **)CONCAT44(ppuStack_570._4_4_,1);
      puStack_568 = (undefined8 *)((ulong)puStack_568 & 0xffffffff00000000);
      ppplStack_678 = *(long ****)*param_2;
      uStack_670 = 3;
      FUN_10743fa9c((long *)*param_2,&ppuStack_298,&ppuStack_570,&ppplStack_678,7);
      func_0x000107262330(&ppuStack_298);
    }
    else {
      uStack_400 = 8;
      ppuStack_298 = ppuStack_448;
      func_0x0001075087d0();
      (*extraout_x8_08)();
      ppplVar12 = (long ***)ppuStack_438;
      FUN_107417d68();
      if ((int)ppplVar12 != 0) {
        FUN_1074d79d4(&pplStack_460);
      }
      iVar22 = 0;
      uVar25 = ((ulong)((long)puVar20 - (long)puVar10) >> 3) - 1;
      iVar24 = (int)uVar25;
      while (-1 < iVar24) {
        plVar29 = (long *)puStack_608[uVar25 & 0x7fffffff];
        plVar11 = plVar29;
        iStack_2b4 = iVar22;
        (**(code **)(*plVar29 + 0x20))(plVar29,uStack_400);
        ppuVar6 = ppuStack_448;
        if ((int)plVar11 != 0) {
          (**(code **)(*plVar29 + 0x28))(plVar29);
          func_0x000107264c5c();
          ppuStack_570 = ppuVar6;
          func_0x00010750873c((long *)(*ppuVar6)[2],ppuVar6);
          (**(code **)(*plVar29 + 0x18))(auStack_690,plVar29,&pplStack_460);
          func_0x0001072bc5c4(auStack_690);
          (**(code **)(*plVar29 + 0x40))();
          if ((int)plVar29 != 0) {
            (*(code *)(*ppuStack_448)[7])();
          }
          FUN_10748eeb8(&ppuStack_570);
        }
        iVar22 = iVar22 + 1;
        uVar25 = uVar25 - 1;
        iVar24 = (int)uVar25;
      }
      func_0x0001075088e0();
    }
    ppuVar6 = ppuStack_448;
    ppuStack_448 = (ulong **)0x0;
    if ((long ***)ppuVar6 != (long ***)0x0) {
      func_0x0001075086fc();
    }
  }
  iVar22 = 0;
  uStack_400 = 1;
  uVar25 = ((ulong)((long)puStack_600 - (long)puStack_608) >> 3) - 1;
  iVar24 = (int)uVar25;
  while (-1 < iVar24) {
    plVar29 = (long *)puStack_608[uVar25 & 0x7fffffff];
    plVar11 = plVar29;
    iStack_2b4 = iVar22;
    (**(code **)(*plVar29 + 0x20))(plVar29,uStack_400);
    if ((int)plVar11 != 0) {
      (**(code **)(*plVar29 + 0x18))(auStack_6a8,plVar29,&pplStack_460);
      func_0x0001072bc5c4(auStack_6a8);
    }
    iVar22 = iVar22 + 1;
    uVar25 = uVar25 - 1;
    iVar24 = (int)uVar25;
  }
  lVar26 = param_2[0x56d];
  if (lVar26 == 0) {
    iVar22 = 0;
  }
  else {
    func_0x0001074df5f8();
    iVar22 = (int)lVar26;
  }
  if ((bStack_3f8 >> 5 & 1) == 0) {
    if (((*(byte *)(param_2[0x565] + 0x10) & 1) == 0) &&
       (in_ZR = *(char *)(lVar31 + 0x101c) == '\x01', (bool)in_ZR)) {
      bVar35 = *(byte *)(lVar31 + 0x100c);
      bVar38 = *(byte *)(lVar31 + 0x100d);
      bVar39 = *(byte *)(lVar31 + 0x100e);
      bVar40 = *(byte *)(lVar31 + 0x100f);
      bVar41 = *(byte *)(lVar31 + 0x1010);
      bVar42 = *(byte *)(lVar31 + 0x1011);
      bVar43 = *(byte *)(lVar31 + 0x1012);
      bVar44 = *(byte *)(lVar31 + 0x1013);
      bVar45 = *(byte *)(lVar31 + 0x1014);
      bVar46 = *(byte *)(lVar31 + 0x1015);
      bVar47 = *(byte *)(lVar31 + 0x1016);
      bVar48 = *(byte *)(lVar31 + 0x1017);
      bVar49 = *(byte *)(lVar31 + 0x1018);
      bVar50 = *(byte *)(lVar31 + 0x1019);
      bVar51 = *(byte *)(lVar31 + 0x101a);
      bVar52 = *(byte *)(lVar31 + 0x101b);
    }
    else {
      in_ZR = (*(byte *)(param_2 + 0x573) & 1) == 0;
      iVar24 = -(uint)!(bool)in_ZR;
      bVar49 = (byte)iVar24;
      bVar35 = *(byte *)(param_2 + 0x571) & bVar49;
      bVar50 = (byte)((uint)iVar24 >> 8);
      bVar38 = *(byte *)((long)param_2 + 0x2b89) & bVar50;
      bVar51 = (byte)((uint)iVar24 >> 0x10);
      bVar39 = *(byte *)((long)param_2 + 0x2b8a) & bVar51;
      bVar52 = (byte)((uint)iVar24 >> 0x18);
      bVar40 = *(byte *)((long)param_2 + 0x2b8b) & bVar52;
      bVar41 = *(byte *)((long)param_2 + 0x2b8c) & bVar49;
      bVar42 = *(byte *)((long)param_2 + 0x2b8d) & bVar50;
      bVar43 = *(byte *)((long)param_2 + 0x2b8e) & bVar51;
      bVar44 = *(byte *)((long)param_2 + 0x2b8f) & bVar52;
      bVar45 = *(byte *)(param_2 + 0x572) & bVar49;
      bVar46 = *(byte *)((long)param_2 + 0x2b91) & bVar50;
      bVar47 = *(byte *)((long)param_2 + 0x2b92) & bVar51;
      bVar48 = *(byte *)((long)param_2 + 0x2b93) & bVar52;
      bVar49 = *(byte *)((long)param_2 + 0x2b94) & bVar49;
      bVar50 = *(byte *)((long)param_2 + 0x2b95) & bVar50;
      bVar51 = *(byte *)((long)param_2 + 0x2b96) & bVar51;
      bVar52 = *(byte *)((long)param_2 + 0x2b97) & bVar52;
    }
  }
  else {
    bVar35 = 0;
    bVar38 = 0;
    bVar39 = 0;
    bVar40 = 0;
    bVar41 = 0;
    bVar42 = 0;
    bVar43 = 0;
    bVar44 = 0;
    bVar45 = 0;
    bVar46 = 0;
    bVar47 = 0;
    bVar48 = 0;
    bVar49 = 0;
    bVar50 = 0;
    bVar51 = 0x80;
    bVar52 = 0x3f;
  }
  uStack_7f8 = (undefined8 *)
               CONCAT17(bVar52,CONCAT16(bVar51,CONCAT15(bVar50,CONCAT14(bVar49,CONCAT13(bVar48,
                                                  CONCAT12(bVar47,CONCAT11(bVar46,bVar45)))))));
  uStack_800 = CONCAT17(bVar44,CONCAT16(bVar43,CONCAT15(bVar42,CONCAT14(bVar41,CONCAT13(bVar40,
                                                  CONCAT12(bVar39,CONCAT11(bVar38,bVar35)))))));
  ppplVar12 = (long ***)ppuStack_438;
  FUN_107417d68();
  if ((int)ppplVar12 == 0) {
LAB_1075052c4:
    uVar17 = 1;
    if (iVar22 == 0) goto LAB_1075052b0;
LAB_1075052cc:
    ppplVar12 = (long ***)(param_2[0x56d] + (ulong)*(byte *)(param_2[0x56d] + 0x78) * 0x18 + 0x48);
  }
  else {
    func_0x0001075088f8();
    if (((!(bool)in_ZR) || ((long **)ppuStack_430[0x29c] == (long **)0x0)) ||
       (in_ZR = *(int *)(ppuStack_430[0x29c] + 10) == 1, !(bool)in_ZR)) {
      uStack_7f8 = (undefined8 *)0x0;
      uStack_800 = 0;
      goto LAB_1075052c4;
    }
    uVar17 = 0;
    if (iVar22 != 0) goto LAB_1075052cc;
LAB_1075052b0:
    func_0x00010750877c();
    (*extraout_x8_09)();
  }
  puStack_288 = uStack_7f8;
  uStack_290 = uStack_800;
  uStack_280 = CONCAT31(uStack_280._1_3_,uVar17);
  uStack_27c = 0x3f800000;
  uStack_278 = CONCAT31(uStack_278._1_3_,1);
  uStack_274 = 0;
  uStack_270 = CONCAT71(uStack_270._1_7_,1);
  uVar36 = 0xf415f74;
  plVar11 = plStack_450;
  ppuStack_298 = (ulong **)ppplVar12;
  (**(code **)(*plStack_450 + 0x28))(&ppuStack_570,plStack_450,&UNK_10f415f74,&ppuStack_298);
  func_0x000107508a18();
  if (plVar11 != (long *)0x0) {
    func_0x0001075086fc();
    func_0x0001075089d4();
    if (plVar11 != (long *)0x0) {
      func_0x0001075086fc();
    }
  }
  ppplVar12 = (long ***)ppuStack_448;
  func_0x0001075088d4();
  (*extraout_x8_10)();
  if (((ulong)ppplVar12 & 1) == 0) {
    func_0x000107508a0c(param_2[0x565]);
    func_0x000107508980();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    func_0x0001075088f8();
    if (((((bool)in_ZR) &&
         (ppplVar12 = (long ***)ppuStack_438, FUN_107417d68(), (int)ppplVar12 != 0)) &&
        (ppplVar12 = (long ***)ppuStack_430, (long **)ppuStack_430[0x29c] != (long **)0x0)) &&
       (in_ZR = *(int *)(ppuStack_430[0x29c] + 10) == 1, (bool)in_ZR)) {
      ppplVar13 = (long ***)ppuStack_430;
      FUN_1074e6ea0();
      ppplVar12 = &pplStack_460;
      FUN_1074d9164(ppplVar12,ppplVar13);
    }
    func_0x0001075088f8();
    if ((((bool)in_ZR) &&
        (FUN_107417d68(), ppplVar12 = (long ***)ppuStack_438, (int)ppuStack_438 != 0)) &&
       (*(float *)(ppuStack_430 + 0x29f) != 0.0)) {
      ppplVar12 = &pplStack_460;
      FUN_1074d7d08();
    }
    plStack_6c0 = (long *)0x0;
    plStack_6b8 = (long *)0x0;
    uStack_6b0 = 0;
    if (puStack_608 == puStack_600) {
LAB_107505628:
      func_0x0001072bc39c(&ppuStack_570,&ppuStack_570);
    }
    else {
      FUN_1073c89ec();
      ppuStack_6c8 = (ulong **)ppplVar12;
      FUN_107505cdc(&ppplStack_678,0x70,&cStack_591,&ppuStack_6c8);
      func_0x000107508808(&ppuStack_570,&ppplStack_678);
      func_0x0001075089c8();
      func_0x000107288cd8(&ppuStack_570);
      func_0x00010750894c();
      if (iVar22 == 0) {
        func_0x0001075088e8();
        FUN_107505d68();
      }
      else {
        iVar24 = 0;
        for (lVar26 = 0; iVar16 = (int)((ulong)((long)puStack_600 - (long)puStack_608) >> 3),
            lVar26 < iVar16; lVar26 = lVar26 + 1) {
          uVar25 = puStack_608[lVar26];
          func_0x000107508a0c();
          (*extraout_x8_11)();
          if ((uVar25 & 1) != 0) {
            plVar11 = (long *)puStack_608[lVar26];
            (**(code **)(*plVar11 + 0x50))();
            if ((plVar11 != (long *)0x0) && (*plVar11 != plVar11[1])) {
              in_ZR = lVar26 == iVar24;
              if (iVar24 < lVar26) {
                func_0x0001075088e8();
                FUN_107505d68();
              }
              ppuVar6 = ppuStack_448;
              ppuStack_448 = (ulong **)0x0;
              if ((long ***)ppuVar6 != (long ***)0x0) {
                func_0x0001075086fc();
              }
              FUN_1074dfb0c(param_2[0x56d],&pplStack_460,plVar11);
              ppuStack_570 = (ulong **)
                             (param_2[0x56d] + (ulong)*(byte *)(param_2[0x56d] + 0x78) * 0x18 + 0x48
                             );
              puStack_568 = (undefined8 *)((ulong)puStack_568 & 0xffffffffffffff00);
              uStack_558 = 0;
              uStack_554 = 0;
              uStack_550 = 0;
              uStack_54c = 0;
              uStack_548 = 0;
              uVar36 = 0xf415f80;
              (**(code **)(*plStack_450 + 0x28))
                        (&ppplStack_678,plStack_450,&UNK_10f415f80,&ppuStack_570);
              ppuVar6 = ppuStack_448;
              ppuStack_448 = (ulong **)ppplStack_678;
              ppplStack_678 = (long ***)0x0;
              if (ppuVar6 != (ulong **)0x0) {
                func_0x0001075086fc();
                ppplVar12 = ppplStack_678;
                ppplStack_678 = (long ***)0x0;
                if (ppplVar12 != (long ***)0x0) {
                  func_0x0001075086fc();
                }
              }
              ppplVar12 = (long ***)ppuStack_448;
              func_0x0001075088d4();
              (*extraout_x8_12)();
              if (((ulong)ppplVar12 & 1) == 0) {
                func_0x000107508a0c(param_2[0x565]);
                func_0x000107508980();
                *(undefined1 *)param_1 = 0;
                *(undefined1 *)(param_1 + 2) = 0;
                func_0x000107508810();
                goto LAB_107505984;
              }
              iVar24 = (int)lVar26 + 1;
            }
          }
        }
        if (iVar24 < iVar16) {
          func_0x0001075088e8();
          FUN_107505d68();
        }
      }
      func_0x000107508810();
      if (plStack_6c0 == plStack_6b8) goto LAB_107505628;
      func_0x0001072bc4a4(&ppuStack_298,1);
      puStack_568 = puStack_288;
      puStack_288[2] = 0;
      *puStack_288 = &PTR_DAT_11099bbd8;
      puStack_288[1] = 0;
      puStack_288[4] = plStack_6b8;
      puStack_288[3] = plStack_6c0;
      puStack_288[5] = uStack_6b0;
      plStack_6c0 = (long *)0x0;
      plStack_6b8 = (long *)0x0;
      uStack_6b0 = 0;
      *(undefined4 *)(puStack_288 + 6) = 0;
      puStack_288 = (undefined8 *)0x0;
      ppuStack_570 = (ulong **)(puStack_568 + 3);
      func_0x0001072bc694(&ppuStack_298);
    }
    in_ZR = puStack_5f0 == puStack_5e8;
    if (!(bool)in_ZR) {
      ppuStack_298 = ppuStack_448;
      func_0x0001075087d0();
      func_0x000107508860();
      for (; in_ZR = puStack_5f0 == puStack_5e8, !(bool)in_ZR; puStack_5f0 = puStack_5f0 + 1) {
        (**(code **)(*(long *)*puStack_5f0 + 0x18))(auStack_6e0,(long *)*puStack_5f0,&pplStack_460);
        func_0x0001072bc5c4(auStack_6e0);
      }
      func_0x0001075088e0();
    }
    ppuVar6 = ppuStack_448;
    ppuStack_448 = (ulong **)0x0;
    if ((long ***)ppuVar6 != (long ***)0x0) {
      func_0x0001075086fc();
    }
    if (iVar22 != 0) {
      FUN_1074e0c98(param_2[0x56d],&pplStack_460);
    }
    (**(code **)(*(long *)param_2[0x565] + 0x40))((long *)param_2[0x565],plStack_450);
    plVar11 = plStack_450;
    iVar22 = *(int *)(lVar31 + 0xfd0);
    if (iVar22 == 0) {
      func_0x00010750877c();
      (*extraout_x8_14)();
      func_0x000107508888(*(undefined8 *)(*plVar11 + 0x30));
    }
    else {
      lVar26 = param_2[0x56a] + 0x560;
      func_0x00010724e330();
      plVar11 = plStack_450;
      in_ZR = (((uint)lVar26 ^ 0xffffffff) & 0x101) == 0;
      if ((bool)in_ZR) {
        func_0x00010750877c();
        (*extraout_x8_13)();
        func_0x000107508888(*(undefined8 *)(*plVar11 + 0x30));
      }
      plVar11 = plStack_450;
      uStack_7d8 = *(undefined1 *)(lVar31 + 0x1038);
      uStack_7d0 = *(undefined8 *)(lVar31 + 0x1028);
      uStack_7c8 = *(undefined1 *)(lVar31 + 0x1030);
      uStack_7c0 = *(undefined1 *)(lVar31 + 0x1039);
      uStack_7bc = param_3[6];
      puStack_7e0 = param_2;
      func_0x0001075087ac(*(undefined8 *)(*plVar32 + 0x38));
      func_0x000107410ee0(auStack_7b0,lVar26);
      FUN_1074116bc(auStack_798,&ppuStack_570);
      func_0x000107277f0c(auStack_788,auStack_5d8);
      FUN_107504718(&uStack_770,param_2 + 0x57d);
      FUN_107506d24(&uStack_758,&puStack_7e0);
      puStack_578 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x90;
      __Znwm();
      puVar10[2] = uStack_768;
      puVar10[1] = uStack_770;
      puVar10[5] = uStack_750;
      puVar10[4] = uStack_758;
      puVar10[7] = CONCAT44(uStack_73c,uStack_740);
      puVar10[6] = uStack_748;
      *(undefined8 *)((long)puVar10 + 0x44) = uStack_734;
      *(ulong *)((long)puVar10 + 0x3c) = CONCAT44(uStack_738,uStack_73c);
      puVar10[0xb] = uStack_720;
      puVar10[10] = uStack_728;
      puVar10[0xe] = uStack_708;
      puVar10[0xd] = uStack_710;
      *puVar10 = &PTR_FUN_1109b78a8;
      uStack_770 = 0;
      uStack_768 = 0;
      puVar10[3] = uStack_760;
      puVar10[0xc] = uStack_718;
      uStack_728 = 0;
      uStack_720 = 0;
      uStack_718 = 0;
      uStack_710 = 0;
      puVar10[0x10] = uStack_6f8;
      puVar10[0xf] = uStack_700;
      uStack_700 = 0;
      uStack_6f8 = 0;
      uStack_708 = 0;
      puVar10[0x11] = uStack_6f0;
      puStack_578 = puVar10;
      (**(code **)(*plVar11 + 0x38))(plVar11,auStack_590);
      func_0x0001006393ec(auStack_590);
      FUN_1075061d4(&uStack_770);
      func_0x0001075061f8(&puStack_7e0);
    }
    plVar11 = plStack_450;
    plStack_450 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      func_0x0001075087dc();
    }
    ppuVar6 = (ulong **)pplStack_460;
    func_0x0001075087f0(pplStack_460);
    (*extraout_x8_15)();
    if (iVar22 == 0) {
      plVar11 = (long *)param_2[0x566];
      ppuStack_298 = (ulong **)CONCAT44(ppuStack_298._4_4_,(uint)*(byte *)(lVar31 + 0x1038));
      uStack_290 = *(undefined8 *)(lVar31 + 0x1028);
      puStack_288 = (undefined8 *)CONCAT71(puStack_288._1_7_,*(undefined1 *)(lVar31 + 0x1030));
      uStack_280 = CONCAT31(uStack_280._1_3_,*(undefined1 *)(lVar31 + 0x1039));
      uStack_27c = (undefined4)param_3[6];
      uStack_278 = (undefined4)((ulong)param_3[6] >> 0x20);
      func_0x0001075087ac(*(undefined8 *)(*plVar32 + 0x38));
      func_0x000107410ee0(&uStack_270,ppuVar6);
      FUN_1074116bc(auStack_258,&ppuStack_570);
      func_0x000107277f0c(&uStack_248,auStack_5d8);
      func_0x000107508888(*(undefined8 *)(*plVar11 + 0x30));
      FUN_107506d90(&ppuStack_298);
    }
    if ((*(byte *)(lVar31 + 0x1038) & 1) == 0) {
      *(undefined4 *)(param_2 + 0x569) = 1;
      pcVar15 = "partial";
    }
    else {
      in_ZR = *(int *)(param_2 + 0x569) == 2;
      if ((bool)in_ZR) {
        pcVar15 = "fully";
      }
      else {
        *(undefined4 *)(param_2 + 0x569) = 2;
        (**(code **)(*(long *)param_2[0x566] + 0x38))();
        uVar2 = *(uint *)(param_2 + 0x569);
        in_ZR = uVar2 == 2;
        if (uVar2 < 3) {
          pcVar15 = (&PTR_DAT_1109b7998)[uVar2];
        }
        else {
          pcVar15 = "unknown";
        }
      }
    }
    func_0x00010002b838(&ppuStack_298,pcVar15);
    pppuVar7 = &ppuStack_298;
    FUN_1074d68f0(&pplStack_460,pppuVar7,param_2 + 0x574,lVar31 + 0x180);
    uVar36 = SUB84(pppuVar7,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_298);
    param_1[1] = (long)puStack_568;
    *param_1 = (long)ppuStack_570;
    ppuStack_570 = (ulong **)0x0;
    puStack_568 = (undefined8 *)0x0;
    *(undefined1 *)(param_1 + 2) = 1;
    func_0x0001072ba030(&ppuStack_570);
LAB_107505984:
    func_0x0001072bc514(&plStack_6c0);
  }
  func_0x0001074fb7a0(&puStack_608);
  func_0x0001074fb7a0(&puStack_5f0);
  func_0x0001074d5b14(&pplStack_460);
  func_0x00010726b264(auStack_5d8);
  func_0x0001074fb7a0(&puStack_5c0);
  FUN_10743d7e4();
LAB_1075059bc:
  func_0x000107508708(uStack_88);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000107508810();
    func_0x0001072bc514(&plStack_6c0);
    func_0x0001074fb7a0(&puStack_608);
    func_0x0001074fb7a0(&puStack_5f0);
    func_0x0001074d5b14(&pplStack_460);
    func_0x00010726b264(auStack_5d8);
    func_0x0001074fb7a0(&puStack_5c0);
    puVar14 = auStack_190;
    FUN_10743d7e4();
    func_0x000107508734();
    *puVar14 = uVar36;
    puVar14[6] = 0;
    *(undefined8 *)(puVar14 + 0xc) = 0;
    *(undefined8 *)(puVar14 + 0xe) = 0;
    *(undefined ***)(puVar14 + 8) = &PTR_DAT_110996720;
    *(undefined8 *)(puVar14 + 10) = 0;
    puVar14[0x10] = uVar36;
    puVar14[0x12] = 1;
    *(undefined1 *)(puVar14 + 0x13) = 1;
    *(undefined8 *)(puVar14 + 0x16) = 0;
    *(undefined8 *)(puVar14 + 0x18) = 0;
    *(undefined8 *)(puVar14 + 0x14) = 0;
    FUN_1074fa2a4();
    return;
  }
  return;
}



/* Entry: 107505cdc; end: 107505d4f;  */

void FUN_107505cdc(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined ***)(param_1 + 8) = &PTR_DAT_110996720;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0x10] = param_2;
  param_1[0x12] = 1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  FUN_1074fa2a4(param_1,&PTR_DAT_1109b76d8,param_3,&PTR_s_api_1109b76e0,param_4);
  return;
}



/* Entry: 107505d50; end: 107505d67;  */

void FUN_107505d50(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074df008(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107505d68; end: 1075061d3;  */

long * FUN_107505d68(long *param_1,uint param_2,uint param_3,int param_4,long param_5,
                    undefined8 param_6)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  long *unaff_x19;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined1 auStack_c0 [56];
  undefined1 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  
  func_0x000107508724();
  uVar1 = (int)param_3 < (int)param_2 || *param_1 == param_1[1];
  plVar7 = param_1;
  uStack_68 = extraout_x8;
  if ((int)param_3 >= (int)param_2 && *param_1 != param_1[1]) {
    *(undefined1 *)(param_5 + 0x60) = 2;
    func_0x0001075087d0();
    (*extraout_x8_00)();
    plVar6 = (long *)(long)(int)param_2;
    iVar3 = ~param_3 + param_4;
    unaff_x19 = (long *)(long)(int)param_3;
    for (plVar7 = unaff_x19; (long)plVar6 <= (long)plVar7; plVar7 = (long *)((long)plVar7 + -1)) {
      *(int *)(param_5 + 0x1ac) = iVar3;
      plVar5 = *(long **)(*param_1 + (long)plVar7 * 8);
      plVar2 = plVar5;
      (**(code **)(*plVar5 + 0x20))(plVar5,*(undefined1 *)(param_5 + 0x60));
      if ((int)plVar2 != 0) {
        uVar4 = *(undefined8 *)(param_5 + 0x18);
        (**(code **)(*plVar5 + 0x28))(plVar5);
        func_0x000107264c5c();
        func_0x000107508918();
        func_0x00010750873c(uVar4);
        (**(code **)(*plVar5 + 0x28))(plVar5);
        func_0x000107508960();
        uStack_88 = *(undefined1 *)(param_5 + 0x60);
        func_0x000107508978(auStack_80,plVar5);
        FUN_107506b68(param_6,auStack_c0);
        func_0x0001075087a4();
        (**(code **)(*plVar5 + 0x40))();
        if ((int)plVar5 != 0) {
          func_0x000107508908();
          (*extraout_x8_01)();
        }
        func_0x0001075088b4();
      }
      iVar3 = iVar3 + 1;
    }
    func_0x000107508880();
    *(undefined1 *)(param_5 + 0x60) = 4;
    plVar7 = *(long **)(param_5 + 0x18);
    func_0x0001075087d0();
    (*extraout_x8_02)();
    iVar3 = ~param_2 + param_4;
    for (plVar2 = plVar6; uVar1 = plVar2 == unaff_x19, (long)plVar2 <= (long)unaff_x19;
        plVar2 = (long *)((long)plVar2 + 1)) {
      *(int *)(param_5 + 0x1ac) = iVar3;
      plVar5 = *(long **)(*param_1 + (long)plVar2 * 8);
      plVar7 = plVar5;
      (**(code **)(*plVar5 + 0x20))(plVar5,*(undefined1 *)(param_5 + 0x60));
      if ((int)plVar7 != 0) {
        uVar4 = *(undefined8 *)(param_5 + 0x18);
        func_0x0001075087ac(*(undefined8 *)(*plVar5 + 0x28));
        func_0x000107264c5c();
        func_0x000107508918();
        func_0x00010750873c(uVar4);
        func_0x0001075087ac(*(undefined8 *)(*plVar5 + 0x28));
        func_0x000107508960();
        uStack_88 = *(undefined1 *)(param_5 + 0x60);
        func_0x000107508978(auStack_80,plVar5);
        func_0x000107508954();
        func_0x0001075087a4();
        (**(code **)(*plVar5 + 0x40))();
        plVar7 = plVar5;
        if ((int)plVar5 != 0) {
          func_0x000107508908();
          (*extraout_x8_03)();
          plVar7 = plVar5;
        }
        func_0x0001075088b4();
      }
      iVar3 = iVar3 + -1;
    }
    func_0x000107508880();
    if (*(int *)(param_5 + 0x68) != 0) {
      *(undefined1 *)(param_5 + 0x60) = 0x10;
      plVar7 = *(long **)(param_5 + 0x18);
      func_0x0001075087d0();
      func_0x000107508860();
      param_4 = ~param_3 + param_4;
      for (; uVar1 = unaff_x19 == plVar6, (long)plVar6 <= (long)unaff_x19;
          unaff_x19 = (long *)((long)unaff_x19 + -1)) {
        *(int *)(param_5 + 0x1ac) = param_4;
        plVar2 = *(long **)(*param_1 + (long)unaff_x19 * 8);
        plVar7 = plVar2;
        (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined1 *)(param_5 + 0x60));
        if ((int)plVar7 != 0) {
          plVar7 = *(long **)(param_5 + 0x18);
          (**(code **)(*plVar2 + 0x28))(plVar2);
          func_0x000107264c5c();
          func_0x00010750873c(*(undefined8 *)(*plVar7 + 0x10),plVar7);
          (**(code **)(*plVar2 + 0x28))(plVar2);
          func_0x000107508960();
          uStack_88 = *(undefined1 *)(param_5 + 0x60);
          func_0x000107508978(auStack_80,plVar2);
          func_0x000107508954();
          func_0x0001075087a4();
          (**(code **)(*plVar2 + 0x40))();
          plVar7 = plVar2;
          if ((int)plVar2 != 0) {
            func_0x000107508908();
            (*extraout_x8_04)();
            plVar7 = plVar2;
          }
          func_0x0001075088b4();
        }
        param_4 = param_4 + 1;
      }
      func_0x000107508880();
    }
  }
  func_0x000107508708(uStack_68);
  if ((bool)uVar1) {
    return plVar7;
  }
  ___stack_chk_fail();
  func_0x0001075088b4();
  func_0x000107508880();
  __Unwind_Resume();
  func_0x0001075061f8(plVar7 + 3);
  func_0x00010725c0a0();
  if (plVar7 != (long *)0x0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 1075061d4; end: 10750622b;  */

undefined8 FUN_1075061d4(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001075061f8(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10750622c; end: 10750675f;  */

void FUN_10750622c(undefined4 *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  undefined1 uVar8;
  undefined8 extraout_x8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_3b0 [32];
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined4 auStack_378 [6];
  undefined4 uStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined4 uStack_338;
  undefined4 uStack_330;
  undefined1 uStack_32c;
  undefined8 uStack_328;
  long lStack_320;
  undefined8 uStack_318;
  long lStack_308;
  undefined8 uStack_300;
  undefined1 *puStack_2f8;
  undefined4 uStack_2f0;
  undefined8 uStack_2ec;
  undefined4 uStack_2e4;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined1 auStack_2c0 [31];
  undefined1 uStack_2a1;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 auStack_288 [2];
  long lStack_280;
  long lStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined1 auStack_180 [264];
  undefined8 uStack_78;
  
  func_0x000107508724();
  plVar10 = (long *)*param_3;
  uStack_78 = extraout_x8;
  if (plVar10 == (long *)0x0) {
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 0x24) = 0;
  }
  else {
    lVar14 = plVar10[1];
    lVar9 = lVar14 + 0x180;
    FUN_1074178c4();
    uStack_2a1 = (undefined1)lVar9;
    func_0x0001078696e8(auStack_2c0);
    FUN_1074f38e8(param_2 + 0x480,auStack_2c0);
    lVar9 = *(long *)(lVar14 + 0xfe0);
    uStack_300 = *(undefined8 *)(lVar14 + 0xff0);
    uStack_2ec = *(undefined8 *)(lVar9 + 0x1268);
    uStack_2e4 = *(undefined4 *)(lVar9 + 0x1270);
    uStack_2f0 = 0x3dcccccd;
    uStack_2e0 = *(undefined8 *)(lVar9 + 0x1274);
    uStack_2d8 = *(undefined4 *)(lVar9 + 0x127c);
    uStack_2d4 = *(undefined4 *)(lVar9 + 0x1280);
    uStack_2d0 = *(undefined8 *)(lVar14 + 0x1000);
    uStack_2c8 = *(undefined8 *)(param_2 + 0x29a8);
    auStack_378[0] = 0x6a;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_340 = 0;
    ppuStack_358 = &PTR_DAT_110996720;
    uStack_350 = 0;
    uStack_338 = 0x6a;
    uStack_330 = 1;
    uStack_32c = 1;
    lStack_320 = 0;
    uStack_318 = 0;
    uStack_328 = 0;
    lStack_308 = lVar14 + 0x180;
    puStack_2f8 = auStack_2c0;
    func_0x00010749964c(auStack_378,&PTR_DAT_1109b76d8,&uStack_2a1);
    func_0x000107508808(auStack_288,auStack_378);
    FUN_10743d7bc(auStack_180,auStack_288);
    func_0x000107288cd8(auStack_288);
    func_0x000107262330(auStack_378);
    (**(code **)(*plVar10 + 0x18))(&puStack_390,plVar10);
    FUN_1073b61b4(auStack_378,&lStack_308);
    puVar5 = puStack_388;
    for (puVar11 = puStack_390; puVar11 != puVar5; puVar11 = puVar11 + 1) {
      (**(code **)(*(long *)*puVar11 + 0x58))((long *)*puVar11,auStack_378);
      uStack_328 = CONCAT44(uStack_328._4_4_,(int)uStack_328 + 1);
    }
    auStack_288[0] = (undefined4)((ulong)((long)puStack_388 - (long)puStack_390) >> 3);
    FUN_1073b6270(&lStack_280,lStack_320);
    if (*(char *)(lVar14 + 0x101c) == '\x01') {
      puVar5 = (undefined8 *)(lVar14 + 0x100c);
      FUN_107506760();
      uStack_260 = puVar5[1];
      uStack_268 = *puVar5;
    }
    else {
      uStack_268 = 0;
      uStack_260 = 0;
    }
    lVar2 = lStack_320;
    lStack_210 = 0;
    uStack_218 = 0;
    uStack_200 = 0;
    lStack_208 = 0;
    uStack_230 = 0;
    uStack_238 = 0;
    lStack_220 = 0;
    lStack_228 = 0;
    uStack_250 = 0;
    uStack_258 = 0;
    uStack_240 = 0;
    uStack_248 = 0;
    plVar10 = (long *)(lStack_320 + 0x18);
    lVar9 = *plVar10;
    lVar7 = *(long *)(lStack_320 + 0x20);
    if (lVar9 != lVar7) {
      FUN_107506dc4(lVar9,lVar7,LZCOUNT(lVar7 - lVar9 >> 3) << 1 ^ 0x7e,1);
      lVar9 = *(long *)(lVar2 + 0x18);
      lVar7 = *(long *)(lVar2 + 0x20);
    }
    FUN_107506778(lVar9,lVar7,*(undefined8 *)(param_2 + 0x2bd0),*(undefined8 *)(param_2 + 0x2bd8),
                  &uStack_258,uStack_258);
    FUN_107506778(*(undefined8 *)(param_2 + 0x2bd0),*(undefined8 *)(param_2 + 0x2bd8),
                  *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),&uStack_240,uStack_240
                 );
    plVar6 = (long *)(param_2 + 0x2bd0);
    if (plVar6 != plVar10) {
      lVar7 = *(long *)(lVar2 + 0x18);
      lVar2 = *(long *)(lVar2 + 0x20);
      uVar12 = lVar2 - lVar7;
      lVar9 = *(long *)(param_2 + 0x2bd0);
      if ((ulong)(*(long *)(param_2 + 0x2be0) - lVar9) < uVar12) {
        if (lVar9 != 0) {
          *(long *)(param_2 + 0x2bd8) = lVar9;
          __ZdlPv(lVar9);
          *plVar6 = 0;
          *(undefined8 *)(param_2 + 0x2bd8) = 0;
          *(undefined8 *)(param_2 + 0x2be0) = 0;
        }
        FUN_1073bc0b4(plVar6,(long)uVar12 >> 3);
        if ((ulong)plVar6 >> 0x3d != 0) goto LAB_1075066d8;
        lVar9 = param_2 + 0x2be0;
        FUN_1073bc134();
        *(long *)(param_2 + 0x2bd0) = lVar9;
        *(long *)(param_2 + 0x2bd8) = lVar9;
        *(long *)(param_2 + 0x2be0) = lVar9 + (long)plVar6 * 8;
LAB_107506558:
        if (lVar2 != lVar7) {
          _memmove(lVar9,lVar7,uVar12);
        }
        lVar9 = lVar9 + uVar12;
      }
      else {
        lVar13 = *(long *)(param_2 + 0x2bd8);
        if (uVar12 <= (ulong)(lVar13 - lVar9)) goto LAB_107506558;
        lVar1 = lVar7 + (lVar13 - lVar9);
        if (lVar13 != lVar9) {
          _memmove(lVar9,lVar7);
          lVar13 = *(long *)(param_2 + 0x2bd8);
        }
        lVar2 = lVar2 - lVar1;
        if (lVar2 != 0) {
          _memmove(lVar13,lVar1,lVar2);
        }
        lVar9 = lVar13 + lVar2;
      }
      *(long *)(param_2 + 0x2bd8) = lVar9;
    }
    if (*(long *)(lVar14 + 0x1000) != 0) {
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_2a0 = 0;
      func_0x000107508890(*(undefined8 *)(*(long *)(lVar14 + 0x1000) + 8));
      FUN_1075078b8();
      FUN_1073b4994(&uStack_2a0);
      FUN_1075078b8(&lStack_228,auStack_3b0);
      FUN_1073b4994(auStack_3b0);
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      func_0x000107508890(*(undefined8 *)(*(long *)(lVar14 + 0x1000) + 0x20));
      func_0x00010014d224();
      func_0x0001000e30f4(&uStack_2a0);
      func_0x00010014d224(&lStack_210,auStack_3b0);
      func_0x0001000e30f4(auStack_3b0);
    }
    uVar3 = uStack_230;
    if (lStack_280 == lStack_278) {
      in_ZR = lStack_228 == lStack_220 && lStack_210 == lStack_208;
      if (lStack_228 != lStack_220 || lStack_210 != lStack_208) goto LAB_10750660c;
      uVar8 = 0;
      *(undefined1 *)param_1 = 0;
    }
    else {
      in_ZR = false;
LAB_10750660c:
      *param_1 = auStack_288[0];
      *(long *)(param_1 + 2) = lStack_280;
      *(long *)(param_1 + 4) = lStack_278;
      *(undefined8 *)(param_1 + 6) = uStack_270;
      lStack_278 = 0;
      uStack_270 = 0;
      lStack_280 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_260;
      *(undefined8 *)(param_1 + 8) = uStack_268;
      *(undefined8 *)(param_1 + 0xe) = uStack_250;
      *(undefined8 *)(param_1 + 0xc) = uStack_258;
      *(undefined8 *)(param_1 + 0x10) = uStack_248;
      uStack_258 = 0;
      uStack_250 = 0;
      *(undefined8 *)(param_1 + 0x14) = uStack_238;
      *(undefined8 *)(param_1 + 0x12) = uStack_240;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      *(undefined8 *)(param_1 + 0x16) = uVar3;
      *(long *)(param_1 + 0x18) = lStack_228;
      *(long *)(param_1 + 0x1a) = lStack_220;
      *(undefined8 *)(param_1 + 0x1c) = uStack_218;
      lStack_228 = 0;
      lStack_220 = 0;
      *(long *)(param_1 + 0x1e) = lStack_210;
      *(undefined8 *)(param_1 + 0x22) = uStack_200;
      *(long *)(param_1 + 0x20) = lStack_208;
      lStack_208 = 0;
      uStack_200 = 0;
      uVar8 = 1;
      uStack_218 = 0;
      lStack_210 = 0;
    }
    *(undefined1 *)(param_1 + 0x24) = uVar8;
    FUN_107503844(auStack_288);
    func_0x0001073b622c(auStack_378);
    func_0x0001074fb7a0(&puStack_390);
    FUN_10743d7e4(auStack_180);
    func_0x00010726b264(auStack_2c0);
  }
  func_0x000107508708(uStack_78);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_1075066d8:
  FUN_1073bc128();
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1075066e0);
  (*pcVar4)();
}



/* Entry: 107506760; end: 107506777;  */

void FUN_107506760(uint *param_1,undefined8 param_2,uint *param_3,uint *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint **ppuVar1;
  uint *unaff_x19;
  uint *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((param_1[4] & 1) != 0) {
    return;
  }
  func_0x000104bdc2c8();
  func_0x0001075087fc();
  uStack_70 = param_5;
  uStack_68 = param_6;
  puStack_60 = param_3;
  puStack_58 = param_1;
  while ((unaff_x20 != unaff_x19 && (puStack_60 != param_4))) {
    if (*unaff_x20 < *puStack_60) {
      FUN_10750767c(&uStack_70,unaff_x20);
      ppuVar1 = &puStack_58;
    }
    else {
      if (*unaff_x20 <= *puStack_60) {
        puStack_58 = unaff_x20 + 2;
      }
      ppuVar1 = &puStack_60;
      unaff_x20 = puStack_60;
    }
    *ppuVar1 = unaff_x20 + 2;
    unaff_x20 = puStack_58;
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 2) {
    FUN_10750767c(&uStack_50,unaff_x20);
  }
  return;
}



/* Entry: 107506778; end: 107506833;  */

void FUN_107506778(uint *param_1,undefined8 param_2,uint *param_3,uint *param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint **ppuVar1;
  uint *unaff_x19;
  uint *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001075087fc();
  uStack_60 = param_5;
  uStack_58 = param_6;
  puStack_50 = param_3;
  puStack_48 = param_1;
  while ((unaff_x20 != unaff_x19 && (puStack_50 != param_4))) {
    if (*unaff_x20 < *puStack_50) {
      FUN_10750767c(&uStack_60,unaff_x20);
      ppuVar1 = &puStack_48;
    }
    else {
      if (*unaff_x20 <= *puStack_50) {
        puStack_48 = unaff_x20 + 2;
      }
      ppuVar1 = &puStack_50;
      unaff_x20 = puStack_50;
    }
    *ppuVar1 = unaff_x20 + 2;
    unaff_x20 = puStack_48;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 2) {
    FUN_10750767c(&uStack_40,unaff_x20);
  }
  return;
}



/* Entry: 107506834; end: 10750686b;  */

void FUN_107506834(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x2b68) != 0) {
    FUN_1074df05c();
  }
  plVar1 = *(long **)(param_1 + 0x2b28);
  func_0x0001073caeb8();
                    /* WARNING: Could not recover jumptable at 0x000107506868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x28))();
  return;
}



/* Entry: 10750686c; end: 107506903;  */

void FUN_10750686c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  uVar3 = *puVar5;
  puVar1 = param_1;
  FUN_1075079a0();
  func_0x000107874e34();
  FUN_107507908(uVar3,0x80,puVar1);
  uVar4 = *puVar5;
  FUN_1075079a0();
  func_0x000107874e04();
  FUN_107507908(uVar4,0x81,uVar3);
  lVar2 = puVar5[0x56d];
  if (lVar2 != 0) {
    uVar3 = *puVar5;
    func_0x0001074df0c8();
    FUN_107507908(uVar3,0xa6,lVar2);
  }
  uVar3 = *(undefined8 *)param_1[1];
  if ((*(byte *)(puVar5 + 0x570) & 1) == 0) {
    *(undefined1 *)(puVar5 + 0x570) = 1;
  }
  puVar5[0x56f] = uVar3;
  return;
}



/* Entry: 107506904; end: 107506993;  */

void FUN_107506904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined8 extraout_x8;
  undefined **ppuStack_48;
  long lStack_40;
  undefined ***pppuStack_30;
  undefined8 uStack_28;
  
  lVar1 = param_1;
  func_0x000107508724();
  uStack_28 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(lVar1 + 0x2ba0);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_(param_1 + 0x2bb8,param_3)
  ;
  ppuStack_48 = &PTR_FUN_1109b7928;
  pppuStack_30 = &ppuStack_48;
  lStack_40 = param_1;
  FUN_107480850(*(long *)(param_1 + 8) + 0x28,&ppuStack_48);
  FUN_10748097c(&ppuStack_48);
  func_0x000107508708(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pppuVar2 = &ppuStack_48;
    FUN_10748097c();
    func_0x000107508734();
    ppuVar3 = pppuVar2[1];
    if (((ulong)ppuVar3[0x14] & 1) != 0) {
      if (*(char *)(ppuVar3 + 10) == '\x01') {
        *(undefined1 *)(ppuVar3 + 10) = 0;
      }
      ppuVar3[0xb] = (undefined *)0x0;
      ppuVar3[0xc] = (undefined *)0x0;
      if (*(char *)(ppuVar3 + 0x12) == '\x01') {
        *(undefined1 *)(ppuVar3 + 0x12) = 0;
      }
    }
    *(undefined1 *)(ppuVar3 + 0x14) = 0;
    return;
  }
  return;
}



/* Entry: 107506994; end: 10750699f;  */

void FUN_107506994(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if ((*(byte *)(lVar1 + 0xa0) & 1) != 0) {
    if (*(char *)(lVar1 + 0x50) == '\x01') {
      *(undefined1 *)(lVar1 + 0x50) = 0;
    }
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    if (*(char *)(lVar1 + 0x90) == '\x01') {
      *(undefined1 *)(lVar1 + 0x90) = 0;
    }
  }
  *(undefined1 *)(lVar1 + 0xa0) = 0;
  return;
}



/* Entry: 1075069a0; end: 107506a43;  */

long FUN_1075069a0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x38;
  do {
    func_0x0001075069d4(param_1 + lVar1);
    lVar1 = lVar1 + -0x18;
  } while (lVar1 != -0x10);
  return param_1;
}



/* Entry: 107506a44; end: 107506a4b;  */

void FUN_107506a44(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001075087fc(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010730b284();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107506a4c; end: 107506afb;  */

void FUN_107506a4c(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001075087fc();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x00010730b284();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107506afc; end: 107506b13;  */

void FUN_107506afc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107506b14; end: 107506b67;  */

long FUN_107506b14(long param_1)

{
  func_0x0001074d9564(param_1 + 0x260);
  func_0x0001074d9564(param_1 + 600);
  func_0x0001074d9564(param_1 + 0x250);
  func_0x0001074d9564(param_1 + 0x248);
  func_0x0001074d9564(param_1 + 0x240);
  func_0x0001074d9564(param_1 + 0x238);
  func_0x0001074d9564(param_1 + 0x230);
  return param_1;
}



/* Entry: 107506b68; end: 107506ccb;  */

void FUN_107506b68(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar4 = param_1[1];
  if (uVar4 < (ulong)param_1[2]) {
    FUN_107506ccc(uVar4,param_2);
    lVar10 = uVar4 + 0x58;
  }
  else {
    lVar10 = uVar4 - *param_1;
    uVar1 = lVar10 / 0x58 + 1;
    if (0x2e8ba2e8ba2e8ba < uVar1) {
      FUN_107506d10();
LAB_107506cc8:
      func_0x000104bd35f4();
      func_0x000104c318bc();
      *(undefined1 *)(uVar4 + 0x38) = *(undefined1 *)(param_2 + 0x38);
      *(undefined8 *)(uVar4 + 0x48) = 0;
      *(undefined8 *)(uVar4 + 0x50) = 0;
      *(undefined8 *)(uVar4 + 0x40) = 0;
      uVar12 = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(uVar4 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(uVar4 + 0x40) = uVar12;
      *(undefined8 *)(uVar4 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x50) = 0;
      return;
    }
    uVar3 = (param_1[2] - *param_1) / 0x58;
    uVar8 = uVar3 * 2;
    if (uVar8 < uVar1 || uVar8 - uVar1 == 0) {
      uVar8 = uVar1;
    }
    if (0x1745d1745d1745c < uVar3) {
      uVar8 = 0x2e8ba2e8ba2e8ba;
    }
    if (uVar8 == 0) {
      lVar5 = 0;
    }
    else {
      if (0x2e8ba2e8ba2e8ba < uVar8) goto LAB_107506cc8;
      lVar5 = uVar8 * 0x58;
      __Znwm();
    }
    lVar10 = lVar5 + lVar10;
    FUN_107506ccc(lVar10,param_2);
    lVar9 = *param_1;
    lVar2 = param_1[1];
    lVar11 = lVar10 + ((lVar2 - lVar9) / -0x58) * 0x58;
    lVar6 = lVar11;
    for (lVar7 = lVar9; lVar7 != lVar2; lVar7 = lVar7 + 0x58) {
      FUN_107506ccc(lVar6,lVar7);
      lVar6 = lVar6 + 0x58;
    }
    for (; lVar9 != lVar2; lVar9 = lVar9 + 0x58) {
      func_0x0001072bc59c(lVar9);
    }
    lVar10 = lVar10 + 0x58;
    lVar7 = *param_1;
    *param_1 = lVar11;
    param_1[1] = lVar10;
    param_1[2] = lVar5 + uVar8 * 0x58;
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar10;
  return;
}



/* Entry: 107506ccc; end: 107506d0f;  */

void FUN_107506ccc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  return;
}



/* Entry: 107506d10; end: 107506d23;  */

void FUN_107506d10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x000107508a00();
  uVar3 = param_2[1];
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar6 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar6;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  func_0x000107410ee0(puVar1 + 6,param_2 + 6);
  FUN_1074116bc(unaff_x19 + 0x48,unaff_x20 + 0x48);
  func_0x000107277f0c(unaff_x19 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 107506d24; end: 107506d8f;  */

void FUN_107506d24(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107508a00();
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)((long)param_1 + 0x1c) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  func_0x000107410ee0(param_1 + 6,param_2 + 6);
  FUN_1074116bc(unaff_x19 + 0x48,unaff_x20 + 0x48);
  func_0x000107277f0c(unaff_x19 + 0x58,unaff_x20 + 0x58);
  return;
}



/* Entry: 107506d90; end: 107506dc3;  */

long FUN_107506d90(long param_1)

{
  func_0x00010726b264(param_1 + 0x50);
  func_0x0001072ba030(param_1 + 0x40);
  func_0x000107411420(param_1 + 0x28);
  return param_1;
}



/* Entry: 107506dc4; end: 1075073bf;  */

void FUN_107506dc4(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  uint *unaff_x19;
  uint *unaff_x20;
  
  func_0x0001075087fc();
  do {
    puVar12 = unaff_x19 + -2;
    puVar14 = unaff_x20;
LAB_107506dfc:
    while( true ) {
      unaff_x20 = puVar14;
      uVar9 = (long)unaff_x19 - (long)unaff_x20 >> 3;
      switch(uVar9) {
      case 0:
      case 1:
        goto LAB_107508754;
      case 2:
        if (*unaff_x20 <= unaff_x19[-2]) {
          return;
        }
        uVar10 = *(undefined8 *)unaff_x20;
        *(undefined8 *)unaff_x20 = *(undefined8 *)(unaff_x19 + -2);
        *(undefined8 *)(unaff_x19 + -2) = uVar10;
        return;
      case 3:
        puVar14 = unaff_x20 + 2;
        uVar8 = *puVar14;
        if (uVar8 < *unaff_x20) {
          uVar10 = *(undefined8 *)unaff_x20;
          if (*puVar12 < uVar8) {
            *(undefined8 *)unaff_x20 = *(undefined8 *)puVar12;
          }
          else {
            *(undefined8 *)unaff_x20 = *(undefined8 *)puVar14;
            *(undefined8 *)puVar14 = uVar10;
            if ((uint)uVar10 <= *puVar12) {
              return;
            }
            *(undefined8 *)puVar14 = *(undefined8 *)puVar12;
          }
          *(undefined8 *)puVar12 = uVar10;
        }
        else if (*puVar12 < uVar8) {
          uVar10 = *(undefined8 *)puVar14;
          *(undefined8 *)puVar14 = *(undefined8 *)puVar12;
          *(undefined8 *)puVar12 = uVar10;
          if (*puVar14 < *unaff_x20) {
            uVar10 = *(undefined8 *)unaff_x20;
            *(undefined8 *)unaff_x20 = *(undefined8 *)puVar14;
            *(undefined8 *)puVar14 = uVar10;
            return;
          }
        }
        return;
      case 4:
        func_0x0001075087fc(unaff_x20,unaff_x20 + 2);
        FUN_1075073c0();
        bVar5 = unaff_x20[4] <= *puVar12;
        if (((!bVar5) && (func_0x000107508818(), !bVar5)) && (func_0x000107508838(), !bVar5)) {
          func_0x0001075089ec();
        }
        return;
      case 5:
        puVar14 = unaff_x20 + 6;
        func_0x0001075087fc(unaff_x20,unaff_x20 + 2);
        FUN_107507450();
        if (*puVar12 < *puVar14) {
          uVar10 = *(undefined8 *)puVar14;
          *(undefined8 *)puVar14 = *(undefined8 *)puVar12;
          *(undefined8 *)puVar12 = uVar10;
          bVar5 = unaff_x20[4] <= *puVar14;
          if (((!bVar5) && (func_0x000107508818(), !bVar5)) && (func_0x000107508838(), !bVar5)) {
            func_0x0001075089ec();
          }
        }
        return;
      }
      if ((long)uVar9 < 0x18) {
        if ((param_4 & 1) == 0) {
          puVar14 = unaff_x20;
          if (unaff_x20 == unaff_x19) {
            return;
          }
          while( true ) {
            unaff_x20 = unaff_x20 + 2;
            puVar12 = puVar14 + 2;
            if (puVar12 == unaff_x19) break;
            puVar6 = puVar14 + 2;
            uVar8 = *puVar14;
            puVar14 = puVar12;
            if (*puVar6 < uVar8) {
              uVar10 = *(undefined8 *)puVar12;
              puVar12 = unaff_x20;
              do {
                puVar13 = puVar12 + -2;
                *(undefined8 *)puVar12 = *(undefined8 *)puVar13;
                puVar6 = puVar12 + -4;
                puVar12 = puVar13;
              } while ((uint)uVar10 < *puVar6);
              *(undefined8 *)puVar13 = uVar10;
            }
          }
          return;
        }
        if (unaff_x20 == unaff_x19) {
          return;
        }
        lVar16 = 0;
        puVar14 = unaff_x20;
        goto LAB_107507128;
      }
      if (param_3 == 0) {
        if (unaff_x20 == unaff_x19) {
          return;
        }
        uVar11 = uVar9 - 2 >> 1;
        uVar15 = uVar11;
        goto LAB_1075071a4;
      }
      puVar14 = unaff_x20 + (uVar9 & 0xfffffffffffffffe);
      if (uVar9 < 0x81) {
        func_0x000107508970(puVar14,unaff_x20);
      }
      else {
        func_0x000107508970(unaff_x20,puVar14);
        FUN_1075073c0(unaff_x20 + 2,puVar14 + -2,unaff_x19 + -4);
        FUN_1075073c0(unaff_x20 + 4,puVar14 + 2,unaff_x19 + -6);
        FUN_1075073c0(puVar14 + -2,puVar14,puVar14 + 2);
        uVar10 = *(undefined8 *)unaff_x20;
        *(undefined8 *)unaff_x20 = *(undefined8 *)puVar14;
        *(undefined8 *)puVar14 = uVar10;
      }
      param_3 = param_3 + -1;
      if (((param_4 & 1) != 0) || (unaff_x20[-2] < *unaff_x20)) break;
      uVar10 = *(undefined8 *)unaff_x20;
      uVar8 = (uint)uVar10;
      puVar14 = unaff_x20;
      if (uVar8 < *puVar12) {
        do {
          puVar14 = puVar14 + 2;
        } while (*puVar14 <= uVar8);
      }
      else {
        do {
          puVar14 = puVar14 + 2;
          if (unaff_x19 <= puVar14) break;
        } while (*puVar14 <= uVar8);
      }
      puVar6 = unaff_x19;
      if (puVar14 < unaff_x19) {
        do {
          puVar6 = puVar6 + -2;
        } while (uVar8 < *puVar6);
      }
      while (puVar14 < puVar6) {
        uVar18 = *(undefined8 *)puVar14;
        *(undefined8 *)puVar14 = *(undefined8 *)puVar6;
        *(undefined8 *)puVar6 = uVar18;
        do {
          puVar14 = puVar14 + 2;
        } while (*puVar14 <= uVar8);
        do {
          puVar6 = puVar6 + -2;
        } while (uVar8 < *puVar6);
      }
      puVar6 = puVar14 + -2;
      if (unaff_x20 != puVar6) {
        *(undefined8 *)unaff_x20 = *(undefined8 *)puVar6;
      }
      param_4 = 0;
      *(undefined8 *)puVar6 = uVar10;
    }
    lVar16 = 0;
    uVar10 = *(undefined8 *)unaff_x20;
    do {
      lVar4 = lVar16 + 8;
      lVar16 = lVar16 + 8;
      uVar8 = (uint)uVar10;
    } while (*(uint *)((long)unaff_x20 + lVar4) < uVar8);
    puVar6 = (uint *)((long)unaff_x20 + lVar16);
    puVar13 = unaff_x19;
    puVar14 = puVar6;
    if (lVar16 == 8) {
      do {
        puVar7 = puVar13;
        if (puVar13 <= puVar6) break;
        puVar13 = puVar13 + -2;
        puVar7 = puVar13;
      } while (uVar8 <= *puVar13);
    }
    else {
      do {
        puVar13 = puVar13 + -2;
        puVar7 = puVar13;
      } while (uVar8 <= *puVar13);
    }
    while (puVar14 < puVar13) {
      uVar18 = *(undefined8 *)puVar14;
      *(undefined8 *)puVar14 = *(undefined8 *)puVar13;
      *(undefined8 *)puVar13 = uVar18;
      do {
        puVar14 = puVar14 + 2;
      } while (*puVar14 < uVar8);
      do {
        puVar13 = puVar13 + -2;
      } while (uVar8 <= *puVar13);
    }
    puVar13 = puVar14 + -2;
    if (unaff_x20 != puVar13) {
      *(undefined8 *)unaff_x20 = *(undefined8 *)puVar13;
    }
    *(undefined8 *)puVar13 = uVar10;
    if (puVar6 < puVar7) goto LAB_107506f78;
    puVar6 = unaff_x20;
    FUN_10750751c(unaff_x20,puVar13);
    puVar7 = puVar14;
    FUN_10750751c(puVar14,unaff_x19);
    if ((int)puVar7 == 0) goto code_r0x000107506f74;
    unaff_x19 = puVar13;
    if (((ulong)puVar6 & 1) != 0) {
      return;
    }
  } while( true );
LAB_107507128:
  puVar12 = puVar14 + 2;
  if (puVar12 == unaff_x19) {
    return;
  }
  if (puVar14[2] < *puVar14) {
    uVar10 = *(undefined8 *)puVar12;
    lVar4 = lVar16;
    do {
      lVar17 = lVar4;
      puVar1 = (undefined8 *)((long)unaff_x20 + lVar17);
      puVar1[1] = *puVar1;
      puVar14 = unaff_x20;
      if (lVar17 == 0) goto LAB_10750717c;
      lVar4 = lVar17 + -8;
    } while ((uint)uVar10 < *(uint *)(puVar1 + -1));
    puVar14 = (uint *)((long)unaff_x20 + lVar17);
LAB_10750717c:
    *(undefined8 *)puVar14 = uVar10;
  }
  lVar16 = lVar16 + 8;
  puVar14 = puVar12;
  goto LAB_107507128;
LAB_1075071a4:
  do {
    if ((long)uVar15 <= (long)uVar11) {
      uVar20 = (uVar15 & 0x3fffffffffffffff) << 1 | 1;
      puVar14 = unaff_x20 + uVar20 * 2;
      uVar19 = uVar15 * 2 + 2;
      if ((long)uVar19 < (long)uVar9) {
        uVar2 = *puVar14;
        uVar3 = puVar14[2];
        uVar8 = uVar2;
        if (uVar2 <= uVar3) {
          uVar8 = uVar3;
        }
        puVar12 = puVar14 + 2;
        if (uVar3 <= uVar2) {
          puVar12 = puVar14;
          uVar19 = uVar20;
        }
      }
      else {
        uVar8 = *puVar14;
        puVar12 = puVar14;
        uVar19 = uVar20;
      }
      puVar14 = unaff_x20 + uVar15 * 2;
      if (*puVar14 <= uVar8) {
        uVar10 = *(undefined8 *)puVar14;
        do {
          puVar6 = puVar12;
          *(undefined8 *)puVar14 = *(undefined8 *)puVar6;
          if ((long)uVar11 < (long)uVar19) break;
          uVar20 = uVar19 << 1 | 1;
          puVar14 = unaff_x20 + uVar20 * 2;
          uVar19 = uVar19 * 2 + 2;
          if ((long)uVar19 < (long)uVar9) {
            uVar2 = *puVar14;
            uVar3 = puVar14[2];
            uVar8 = uVar2;
            if (uVar2 <= uVar3) {
              uVar8 = uVar3;
            }
            puVar12 = puVar14 + 2;
            if (uVar3 <= uVar2) {
              puVar12 = puVar14;
              uVar19 = uVar20;
            }
          }
          else {
            uVar8 = *puVar14;
            puVar12 = puVar14;
            uVar19 = uVar20;
          }
          puVar14 = puVar6;
        } while ((uint)uVar10 <= uVar8);
        *(undefined8 *)puVar6 = uVar10;
      }
    }
    uVar15 = uVar15 - 1;
  } while (-1 < (long)uVar15);
  do {
    if ((long)uVar9 < 2) {
LAB_107508754:
      return;
    }
    uVar10 = *(undefined8 *)unaff_x20;
    puVar14 = unaff_x20;
    uVar15 = 0;
    do {
      uVar19 = uVar15 << 1 | 1;
      uVar11 = uVar15 * 2 + 2;
      puVar12 = puVar14 + uVar15 * 2 + 2;
      uVar20 = uVar19;
      if (((long)uVar11 < (long)uVar9) &&
         (puVar12 = puVar14 + uVar15 * 2 + 4, uVar20 = uVar11,
         puVar14[uVar15 * 2 + 4] <= puVar14[uVar15 * 2 + 2])) {
        puVar12 = puVar14 + uVar15 * 2 + 2;
        uVar20 = uVar19;
      }
      *(undefined8 *)puVar14 = *(undefined8 *)puVar12;
      puVar14 = puVar12;
      uVar15 = uVar20;
    } while ((long)uVar20 <= (long)(uVar9 - 2 >> 1));
    unaff_x19 = unaff_x19 + -2;
    if (puVar12 == unaff_x19) {
      *(undefined8 *)puVar12 = uVar10;
    }
    else {
      *(undefined8 *)puVar12 = *(undefined8 *)unaff_x19;
      *(undefined8 *)unaff_x19 = uVar10;
      lVar16 = (long)puVar12 + (8 - (long)unaff_x20) >> 3;
      if (1 < lVar16) {
        uVar15 = lVar16 - 2U >> 1;
        if (unaff_x20[uVar15 * 2] < *puVar12) {
          uVar10 = *(undefined8 *)puVar12;
          puVar14 = unaff_x20 + uVar15 * 2;
          do {
            puVar6 = puVar14;
            *(undefined8 *)puVar12 = *(undefined8 *)puVar6;
            if (uVar15 == 0) break;
            uVar15 = uVar15 - 1 >> 1;
            puVar12 = puVar6;
            puVar14 = unaff_x20 + uVar15 * 2;
          } while (unaff_x20[uVar15 * 2] < (uint)uVar10);
          *(undefined8 *)puVar6 = uVar10;
        }
      }
    }
    uVar9 = uVar9 - 1;
  } while( true );
code_r0x000107506f74:
  if (((ulong)puVar6 & 1) == 0) {
LAB_107506f78:
    FUN_107506dc4(unaff_x20,puVar13,param_3,param_4 & 1);
    param_4 = 0;
  }
  goto LAB_107506dfc;
}



/* Entry: 1075073c0; end: 10750744f;  */

void FUN_1075073c0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    uVar2 = *(undefined8 *)param_1;
    if (*param_3 < uVar1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar2;
      if ((uint)uVar2 <= *param_3) {
        return;
      }
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
    }
    *(undefined8 *)param_3 = uVar2;
  }
  else if (*param_3 < uVar1) {
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar2;
    if (*param_2 < *param_1) {
      uVar2 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar2;
      return;
    }
  }
  return;
}



/* Entry: 107507450; end: 10750749b;  */

void FUN_107507450(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  
  func_0x0001075087fc();
  FUN_1075073c0();
  bVar1 = *param_3 <= *param_4;
  if (((!bVar1) && (func_0x000107508818(), !bVar1)) && (func_0x000107508838(), !bVar1)) {
    func_0x0001075089ec();
  }
  return;
}



/* Entry: 10750749c; end: 10750751b;  */

void FUN_10750749c(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4,uint *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  
  func_0x0001075087fc();
  FUN_107507450();
  if (*param_5 < *param_4) {
    uVar2 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar2;
    bVar1 = *param_3 <= *param_4;
    if (((!bVar1) && (func_0x000107508818(), !bVar1)) && (func_0x000107508838(), !bVar1)) {
      func_0x0001075089ec();
    }
  }
  return;
}



/* Entry: 10750751c; end: 10750767b;  */

bool FUN_10750751c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint *puVar4;
  undefined8 uVar5;
  long lVar6;
  uint *puVar7;
  uint *unaff_x19;
  uint *unaff_x20;
  uint *puVar8;
  
  func_0x000107508a00();
  switch(param_2 - param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    if (unaff_x20[-2] < *unaff_x19) {
      uVar5 = *(undefined8 *)unaff_x19;
      *(undefined8 *)unaff_x19 = *(undefined8 *)(unaff_x20 + -2);
      *(undefined8 *)(unaff_x20 + -2) = uVar5;
      return true;
    }
    return true;
  case 3:
    FUN_1075073c0();
    break;
  case 4:
    FUN_107507450();
    break;
  case 5:
    FUN_10750749c();
    break;
  default:
    func_0x000107508970();
    lVar2 = 0;
    iVar3 = 0;
    puVar7 = unaff_x19 + 6;
    puVar8 = unaff_x19 + 4;
    while (puVar4 = puVar7, puVar4 != unaff_x20) {
      if (*puVar4 < *puVar8) {
        uVar5 = *(undefined8 *)puVar4;
        lVar1 = lVar2;
        do {
          lVar6 = lVar1;
          *(undefined8 *)((long)unaff_x19 + lVar6 + 0x18) =
               *(undefined8 *)((long)unaff_x19 + lVar6 + 0x10);
          puVar7 = unaff_x19;
          if (lVar6 == -0x10) goto LAB_107507624;
          lVar1 = lVar6 + -8;
        } while ((uint)uVar5 < *(uint *)((long)unaff_x19 + lVar6 + 8));
        puVar7 = (uint *)((long)unaff_x19 + lVar6 + 0x10);
LAB_107507624:
        *(undefined8 *)puVar7 = uVar5;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return puVar4 + 2 == unaff_x20;
        }
      }
      lVar2 = lVar2 + 8;
      puVar8 = puVar4;
      puVar7 = puVar4 + 2;
    }
  }
  return true;
}



/* Entry: 10750767c; end: 1075078b7;  */

long * FUN_10750767c(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long *plStack_98;
  long *plStack_90;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  
  plVar1 = (long *)*param_1;
  plVar2 = (long *)param_1[1];
  plVar5 = (long *)plVar1[1];
  plVar4 = plVar1 + 2;
  if (plVar5 < (long *)*plVar4) {
    plVar4 = plVar2;
    if (plVar2 == plVar5) {
      *plVar5 = *param_2;
      plVar1[1] = (long)(plVar5 + 1);
    }
    else {
      plVar7 = plVar5;
      for (plVar3 = plVar5 + -1; plVar3 < plVar5; plVar3 = plVar3 + 1) {
        *plVar7 = *plVar3;
        plVar7 = plVar7 + 1;
      }
      plVar1[1] = (long)plVar7;
      if (plVar5 != plVar2 + 1) {
        _memmove(plVar2 + 1,plVar2);
        plVar7 = (long *)plVar1[1];
      }
      lVar9 = 8;
      if (plVar7 <= param_2 || param_2 < plVar2) {
        lVar9 = 0;
      }
      *plVar2 = *(long *)((long)param_2 + lVar9);
    }
  }
  else {
    plVar7 = plVar1;
    FUN_1073bc0b4(plVar1,((long)plVar5 - *plVar1 >> 3) + 1);
    plVar5 = (long *)*plVar1;
    lVar9 = (long)plVar2 - (long)plVar5;
    plStack_90 = plVar4;
    if (plVar7 == (long *)0x0) {
      lVar6 = 0;
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = plVar4;
      FUN_1073bc134();
      lVar6 = (long)plVar7 << 3;
    }
    plStack_a8 = (long *)((long)plVar3 + lVar9);
    plStack_98 = (long *)((long)plVar3 + lVar6);
    plStack_b0 = plVar3;
    plStack_a0 = plStack_a8;
    if (lVar9 == lVar6) {
      if (plVar2 == plVar5) {
        lVar6 = 1;
        plStack_60 = plVar4;
        FUN_1073bc134();
        lVar8 = (long)plStack_a0 - (long)plStack_a8;
        for (lVar9 = 0; lVar8 != lVar9; lVar9 = lVar9 + 8) {
          *(undefined8 *)((long)plVar4 + lVar9) = *(undefined8 *)((long)plStack_a8 + lVar9);
        }
        plStack_78 = plStack_a8;
        plStack_80 = plStack_b0;
        plStack_68 = plStack_98;
        plStack_70 = plStack_a0;
        plStack_b0 = plVar4;
        plStack_a8 = plVar4;
        plStack_a0 = (long *)((long)plVar4 + lVar8);
        plStack_98 = plVar4 + lVar6;
        FUN_1073bc170(&plStack_80);
      }
      else {
        plStack_a8 = plStack_a8 + ((lVar9 >> 3) + 1) / -2;
        plStack_a0 = plStack_a8;
      }
    }
    plVar4 = plStack_a8;
    *plStack_a0 = *param_2;
    plStack_a0 = plStack_a0 + 1;
    _memcpy(plStack_a0,plVar2,plVar1[1] - (long)plVar2);
    plStack_a0 = (long *)((long)plStack_a0 + (plVar1[1] - (long)plVar2));
    plVar1[1] = (long)plVar2;
    lVar9 = (long)plStack_a8 - ((long)plVar2 - *plVar1);
    _memcpy(lVar9);
    plStack_b0 = (long *)*plVar1;
    *plVar1 = lVar9;
    plVar1[1] = (long)plStack_a0;
    lVar9 = plVar1[2];
    plVar1[2] = (long)plStack_98;
    plStack_a8 = plStack_b0;
    plStack_a0 = plStack_b0;
    plStack_98 = (long *)lVar9;
    FUN_1073bc170(&plStack_b0);
  }
  param_1[1] = (long)(plVar4 + 1);
  return param_1;
}



/* Entry: 1075078b8; end: 107507907;  */

void FUN_1075078b8(long *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x0001075087fc();
  if (*param_1 != 0) {
    FUN_1073b4a04();
    __ZdlPv(*unaff_x20);
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
  }
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[2] = unaff_x19[2];
  *unaff_x19 = 0;
  unaff_x19[1] = 0;
  unaff_x19[2] = 0;
  return;
}



/* Entry: 107507908; end: 10750799f;  */

void FUN_107507908(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 auStack_90 [6];
  undefined4 uStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_78 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  ppuStack_70 = &PTR_DAT_110996720;
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_44 = 1;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  uStack_98 = 1;
  uStack_b0 = *param_1;
  uStack_a8 = 3;
  auStack_a0[0] = param_3;
  auStack_90[0] = param_2;
  uStack_50 = param_2;
  FUN_10743fa44(param_1,auStack_90,auStack_a0,&uStack_b0,7);
  func_0x000107262330(auStack_90);
  return;
}



/* Entry: 1075079a0; end: 107507a0b;  */

undefined8 FUN_1075079a0(void)

{
  int iVar1;
  
  if ((bRam00000001131ad8b8 & 1) == 0) {
    iVar1 = 0x131ad8b8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_107507a0c(0x1131ad7e8);
      ___cxa_guard_release(0x1131ad8b8);
    }
  }
  return 0x1131ad7e8;
}



/* Entry: 107507a0c; end: 107507a33;  */

void FUN_107507a0c(long param_1)

{
  __ZNSt3__119__shared_mutex_baseC1Ev();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 200) = 0x3f800000;
  return;
}



/* Entry: 107507a34; end: 107507a53;  */

void FUN_107507a34(void)

{
  func_0x0001075088c8();
  FUN_107507a54();
  return;
}



/* Entry: 107507a54; end: 107507a6b;  */

void FUN_107507a54(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_1074802fc(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107507a6c; end: 107507a87;  */

void FUN_107507a6c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_1074802fc(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107507a88; end: 107507aa7;  */

void FUN_107507a88(void)

{
  func_0x0001075088c8();
  FUN_107507aa8();
  return;
}



/* Entry: 107507aa8; end: 107507abf;  */

void FUN_107507aa8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107508a6c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107507ac0; end: 107507adb;  */

void FUN_107507ac0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107508a6c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107507adc; end: 107507b23;  */

long FUN_107507adc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107507b24; end: 107507b3b;  */

void FUN_107507b24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107507b58(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107507b3c; end: 107507b57;  */

void FUN_107507b3c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107507b58(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107507b58; end: 107507c3f;  */

/* WARNING: Possible PIC construction at 0x000107507b94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107507bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107507bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107507bec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107507bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107507c0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107507c00) */
/* WARNING: Removing unreachable block (ram,0x000107507bf0) */
/* WARNING: Removing unreachable block (ram,0x000107507bc0) */
/* WARNING: Removing unreachable block (ram,0x000107507bb0) */
/* WARNING: Removing unreachable block (ram,0x000107507b98) */
/* WARNING: Removing unreachable block (ram,0x000107507c10) */

long FUN_107507b58(long param_1)

{
  func_0x0001072a7938(param_1 + 0x3e0);
  FUN_1073eb118(param_1 + 0x3c8);
  FUN_1073eb118(param_1 + 0x3b0);
  func_0x0001074de820(param_1 + 0x380);
  func_0x00010730b10c(param_1 + 0x338);
  if (*(char *)(param_1 + 0x330) == '\x01') {
    func_0x00010730af90(param_1 + 0x328);
  }
  return param_1 + 0x300;
}



/* Entry: 107507c40; end: 107507c67;  */

long FUN_107507c40(long param_1)

{
  FUN_107507c68();
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 107507c68; end: 107507cbf;  */

void FUN_107507c68(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107250860();
  }
  *param_1 = 0;
  param_1[1] = 0;
  func_0x0001072508cc(&stack0xffffffffffffffe0);
  return;
}



/* Entry: 107507cc0; end: 107507cd3;  */

void FUN_107507cc0(void)

{
  func_0x000107507c94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107507cd4; end: 107507cfb;  */

undefined8 FUN_107507cd4(void)

{
  undefined8 unaff_x20;
  
  __Znwm(0x38);
  func_0x0001075087fc();
  func_0x000107508870(&PTR_SUB_1109b76f8);
  func_0x000107283e34();
  return unaff_x20;
}



/* Entry: 107507cfc; end: 107507d1f;  */

void FUN_107507cfc(long param_1,undefined8 param_2)

{
  func_0x0001075087fc(param_2,param_1 + 8);
  func_0x000107508870(&PTR_SUB_1109b76f8);
  func_0x000107283e34();
  return;
}



/* Entry: 107507d20; end: 107507ecb;  */

void FUN_107507d20(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined1 in_ZR;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 extraout_x8;
  int extraout_w10;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auStack_128 [88];
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [24];
  undefined8 *puStack_70;
  undefined8 uStack_68;
  
  func_0x000107508724();
  uStack_68 = extraout_x8;
  func_0x0001072bb94c(auStack_128);
  func_0x000107284284(auStack_98,param_1 + 0x20);
  uVar6 = param_1 + 0x20;
  func_0x0001072842e4();
  if ((uVar6 & 1) != 0) {
    puVar7 = (undefined8 *)0x70;
    __Znwm();
    plVar10 = puVar7 + 1;
    *plVar10 = 0;
    puVar7[2] = 0;
    *puVar7 = &PTR_FUN_1109b7778;
    puVar1 = puVar7 + 3;
    func_0x0001072bb94c(puVar1,auStack_128);
    plVar8 = (long *)(param_1 + 0x20);
    puStack_a8 = puVar1;
    puStack_a0 = puVar7;
    func_0x00010728433c();
    uVar2 = *(undefined8 *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    uStack_d0 = uVar2;
    lStack_c8 = lVar3;
    if (lVar3 != 0) {
      do {
        func_0x0001075087b4();
      } while (extraout_w10 != 0);
    }
    uVar11 = *(undefined8 *)(param_1 + 0x18);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *plVar10 = *plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puStack_70 = (undefined8 *)0x0;
    puVar9 = (undefined8 *)0x30;
    uStack_c0 = uVar11;
    puStack_b8 = puVar1;
    puStack_b0 = puVar7;
    __Znwm();
    *puVar9 = &PTR_FUN_1109b77c8;
    puVar9[1] = uVar2;
    uStack_d0 = 0;
    lStack_c8 = 0;
    puVar9[2] = lVar3;
    puVar9[3] = uVar11;
    puVar9[4] = puVar1;
    puVar9[5] = puVar7;
    puStack_b8 = (undefined8 *)0x0;
    puStack_b0 = (undefined8 *)0x0;
    puStack_70 = puVar9;
    (**(code **)(*plVar8 + 0x10))(plVar8,auStack_88);
    func_0x0001006393ec(auStack_88);
    FUN_107507f68(&uStack_d0);
    func_0x000107508208(&puStack_a8);
  }
  func_0x000107270b00();
  func_0x00010750893c(auStack_128);
  func_0x000107508708(uStack_68);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001006393ec(auStack_88);
    FUN_107507f68(&uStack_d0);
    func_0x000107508208(&puStack_a8);
    func_0x000107270b00(auStack_98);
    func_0x00010750893c(auStack_128);
    func_0x000107508734();
    func_0x0001075089e0();
    func_0x0001075088ac();
    func_0x00010750876c();
    return;
  }
  return;
}



/* Entry: 107507ecc; end: 107507ef3;  */

void FUN_107507ecc(undefined8 param_1)

{
  func_0x0001075089e0();
  func_0x0001075088ac(param_1,&PTR_DAT_1109b7838);
  func_0x00010750876c();
  return;
}



/* Entry: 107507ef4; end: 107507eff;  */

undefined ** FUN_107507ef4(void)

{
  return &PTR_DAT_1109b7838;
}



/* Entry: 107507f00; end: 107507f37;  */

void FUN_107507f00(void)

{
  func_0x0001075087fc();
  func_0x000107508870(&PTR_SUB_1109b76f8);
  func_0x000107283e34();
  return;
}



/* Entry: 107507f38; end: 107507f67;  */

void FUN_107507f38(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001075087b4();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 107507f68; end: 107507f8b;  */

undefined8 FUN_107507f68(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107508208(param_1 + 0x18);
  func_0x00010725c0a0();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 107507f8c; end: 107507f8f;  */

void FUN_107507f8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b7778;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107507f90; end: 107507fa3;  */

void FUN_107507f90(void)

{
  func_0x000107507fb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107507fa4; end: 107507fbf;  */

void FUN_107507fa4(long param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    func_0x00010725b5b0();
  }
  return;
}



/* Entry: 107507fc0; end: 107507feb;  */

undefined8 * FUN_107507fc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b77c8;
  FUN_107507f68(param_1 + 1);
  return param_1;
}



/* Entry: 107507fec; end: 107507fff;  */

void FUN_107507fec(void)

{
  FUN_107507fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107508000; end: 107508027;  */

long FUN_107508000(void)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)0x30;
  __Znwm();
  func_0x000107508a00();
  *puVar1 = &PTR_FUN_1109b77c8;
  FUN_107507f38(puVar1 + 1);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x0001075087b4();
    } while (extraout_w10 != 0);
  }
  return unaff_x19;
}



/* Entry: 107508028; end: 10750804b;  */

void FUN_107508028(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107508a00(param_2,param_1 + 8);
  *param_2 = &PTR_FUN_1109b77c8;
  FUN_107507f38(param_2 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001075087b4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10750804c; end: 107508107;  */

void FUN_10750804c(long param_1)

{
  long lVar1;
  long *plVar2;
  long *aplStack_88 [2];
  undefined1 auStack_78 [72];
  undefined1 auStack_30 [16];
  
  func_0x000107508184(auStack_30,param_1 + 8);
  func_0x00010726fc00(aplStack_88,param_1 + 8);
  if ((aplStack_88[0] == (long *)0x0) || (*aplStack_88[0] == -1)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x18);
  }
  func_0x0001072508cc(aplStack_88);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x2b30), plVar2 != (long *)0x0)) {
    func_0x0001072bb94c(aplStack_88,*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*plVar2 + 0x60))(plVar2,aplStack_88);
    func_0x00010725b590(auStack_78);
  }
  func_0x000107270b00(auStack_30);
  return;
}



/* Entry: 107508108; end: 10750812f;  */

void FUN_107508108(undefined8 param_1)

{
  func_0x0001075089e0();
  func_0x0001075088ac(param_1,&PTR_DAT_1109b7828);
  func_0x00010750876c();
  return;
}



/* Entry: 107508130; end: 10750813b;  */

undefined ** FUN_107508130(void)

{
  return &PTR_DAT_1109b7828;
}



/* Entry: 10750813c; end: 10750822f;  */

void FUN_10750813c(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107508a00();
  *param_1 = &PTR_FUN_1109b77c8;
  FUN_107507f38(param_1 + 1);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x19 + 0x20) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x0001075087b4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107508230; end: 107508233;  */

void FUN_107508230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b7858;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107508234; end: 107508247;  */

void FUN_107508234(void)

{
  FUN_107508278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


