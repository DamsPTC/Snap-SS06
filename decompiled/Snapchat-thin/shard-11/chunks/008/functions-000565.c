/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10896e564; end: 10896e567;  */

void FUN_10896e564(long param_1,undefined8 param_2)

{
  func_0x0001089715e8(*(undefined8 *)(param_1 + 0xc0),param_1,param_2,*(undefined8 *)(param_1 + 200)
                     );
  FUN_10896e15c();
  return;
}



/* Entry: 10896e568; end: 10896e58b;  */

undefined8 FUN_10896e568(undefined8 param_1)

{
  FUN_10896e604();
  return param_1;
}



/* Entry: 10896e58c; end: 10896e603;  */

void FUN_10896e58c(undefined8 param_1)

{
  int unaff_w19;
  undefined1 auStack_120 [208];
  undefined1 *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_31;
  
  func_0x0001089719a0();
  puStack_50 = &uStack_31;
  uStack_48 = param_1;
  uStack_40 = param_1;
  func_0x000108971888();
  FUN_10896e530();
  FUN_10896e604(&puStack_50);
  if (unaff_w19 != 0) {
    FUN_10896e508(auStack_120);
  }
  func_0x000108971f94(auStack_120);
  FUN_10896e568(&puStack_50);
  return;
}



/* Entry: 10896e604; end: 10896e647;  */

void FUN_10896e604(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x000108971864();
  if (extraout_x8 != 0) {
    FUN_10895c544(extraout_x8 + 0xa0);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  if (*(long *)(unaff_x19 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10896e648; end: 10896e657;  */

undefined8 * FUN_10896e648(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_10896e6c0(param_2,0,0);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[4] = param_2;
  param_1[7] = &PTR_FUN_110a9cb70;
  param_1[8] = param_1 + 4;
  param_1[9] = &PTR_FUN_110a9cad0;
  param_1[10] = &PTR_DAT_110a9cb90;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 10896e658; end: 10896e6bf;  */

undefined8 *
FUN_10896e658(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  FUN_10896e6c0();
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[4] = param_4;
  param_1[7] = &PTR_FUN_110a9cb70;
  param_1[8] = param_1 + 4;
  param_1[9] = &PTR_FUN_110a9cad0;
  param_1[10] = &PTR_DAT_110a9cb90;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 10896e6c0; end: 10896e6cb;  */

void FUN_10896e6c0(undefined8 *param_1)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110aa0218;
  uStack_18 = 0;
  func_0x00010bd41e70(*param_1,&ppuStack_20,FUN_10896e704,param_1);
  return;
}



/* Entry: 10896e6cc; end: 10896e703;  */

void FUN_10896e6cc(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110aa0218;
  uStack_18 = 0;
  func_0x00010bd41e70(param_1,&ppuStack_20,FUN_10896e704,param_2);
  return;
}



/* Entry: 10896e704; end: 10896e73b;  */

undefined8 FUN_10896e704(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_10896e73c();
  return uVar1;
}



/* Entry: 10896e73c; end: 10896e77b;  */

void FUN_10896e73c(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = &PTR_DAT_110aa02b8;
  param_1[1] = 0;
  func_0x00010bd41118(param_1 + 5);
  func_0x000108971acc(&UNK_110aa0228);
  return;
}



/* Entry: 10896e77c; end: 10896e78f;  */

void FUN_10896e77c(void)

{
  return;
}



/* Entry: 10896e790; end: 10896e867;  */

long * FUN_10896e790(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 uStack_41;
  undefined **ppuStack_40;
  undefined8 uStack_38;
  
  ppuStack_40 = (undefined **)0x0;
  pcVar3 = (code *)**(undefined8 **)(param_2 + 0x30);
  lVar1 = param_2;
  (**(code **)(*(long *)(param_2 + 0x18) + 0x18))(param_2);
  (*pcVar3)(&ppuStack_40,lVar1,&uStack_41);
  puVar2 = *ppuStack_40;
  ppuStack_40 = &PTR_DAT_110aa0100;
  uStack_38 = 0;
  func_0x00010bd41e70(puVar2,&ppuStack_40,FUN_10896e868,*(undefined8 *)(puVar2 + 0x48));
  *param_1 = (long)puVar2;
  FUN_10896e970(param_1 + 1);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = -1;
  param_1[6] = 0;
  param_1[7] = 0;
  func_0x00010bd3f528(param_1 + 8,param_2);
  FUN_10896e970(&ppuStack_40);
  param_1[1] = (long)ppuStack_40;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



/* Entry: 10896e868; end: 10896e913;  */

undefined8 * FUN_10896e868(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x70;
  __Znwm();
  puVar1[2] = 0;
  puVar1[3] = param_1;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_110aa0120;
  puVar1[1] = 0;
  puVar1[5] = &PTR_DAT_110d9e038;
  puVar1[8] = 0;
  puVar1[6] = 0;
  puVar1[7] = &PTR_DAT_110d9e220;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  FUN_10894d994();
  puVar1[0xd] = param_1;
  func_0x00010bd40268();
  func_0x00010bd40ea4(puVar1[0xd],puVar1 + 5);
  return puVar1;
}



/* Entry: 10896e914; end: 10896e917;  */

undefined8 * FUN_10896e914(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa0120;
  func_0x00010bd40ed8(param_1[0xd],param_1 + 5);
  func_0x00010bd42ef0(param_1 + 5);
  return param_1;
}



/* Entry: 10896e918; end: 10896e92b;  */

void FUN_10896e918(void)

{
  FUN_10896e930();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896e92c; end: 10896e92f;  */

void FUN_10896e92c(void)

{
  return;
}



/* Entry: 10896e930; end: 10896e96f;  */

undefined8 * FUN_10896e930(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa0120;
  func_0x00010bd40ed8(param_1[0xd],param_1 + 5);
  func_0x00010bd42ef0(param_1 + 5);
  return param_1;
}



/* Entry: 10896e970; end: 10896e9b3;  */

long * FUN_10896e970(long *param_1)

{
  undefined4 *puVar1;
  undefined8 uStack_30;
  undefined4 uStack_24;
  
  uStack_24 = 0xfffffffe;
  uStack_30 = 0x7ffffffffffffffe;
  puVar1 = &uStack_24;
  FUN_10896e9b4(puVar1,&uStack_30,0);
  *param_1 = (long)puVar1;
  return param_1;
}



/* Entry: 10896e9b4; end: 10896e9df;  */

undefined8 FUN_10896e9b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  FUN_10896b16c(&uStack_18,param_1,param_2);
  return uStack_18;
}



/* Entry: 10896e9e0; end: 10896ea23;  */

undefined8 * FUN_10896e9e0(undefined8 *param_1)

{
  undefined1 auStack_38 [24];
  
  FUN_10896b324(*param_1,param_1 + 1,auStack_38);
  func_0x00010bd43af0(param_1 + 8);
  FUN_10894ef54(param_1 + 3);
  return param_1;
}



/* Entry: 10896ea24; end: 10896ea5b;  */

long * FUN_10896ea24(long *param_1)

{
  func_0x00010bd41148(*param_1 + 0x28,param_1 + 1);
  func_0x00010bd43af0(param_1 + 4);
  return param_1;
}



/* Entry: 10896ea5c; end: 10896ea9b;  */

long * FUN_10896ea5c(long *param_1)

{
  long *plVar1;
  
  func_0x000107c27914(param_1 + 0x25);
  func_0x000107c27914(param_1 + 0x20);
  FUN_10896e9e0(param_1 + 0x11);
  FUN_10896e9e0(param_1 + 2);
  if (((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x78), plVar1 != (long *)0x0)) &&
     (*plVar1 != 0)) {
    if (*(long *)plVar1[1] != 0) {
      func_0x00010bd462b8();
      func_0x00010bd462c4(*param_1 + 0x78);
    }
  }
  if (param_1[1] != 0) {
    func_0x000107c2b1cc();
  }
  if (*param_1 != 0) {
    func_0x000107c2b7b0();
  }
  return param_1;
}



/* Entry: 10896ea9c; end: 10896ea9f;  */

undefined8 * FUN_10896ea9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa0180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10896eaa0; end: 10896eab3;  */

void FUN_10896eaa0(void)

{
  FUN_10896eabc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10896eab4; end: 10896eabb;  */

bool FUN_10896eab4(long param_1,int param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 uStack_60;
  undefined1 auStack_54 [28];
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  plVar4 = (long *)(param_1 + 8);
  if (param_2 == 0) {
    return false;
  }
  if (0 < *(int *)(*param_3 + 0xac)) {
    return true;
  }
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010bd43490(auStack_54,plVar4,&uStack_38);
  if ((uStack_28 & 1) == 0) {
    uVar1 = *(undefined8 *)(*param_3 + 0xb8);
code_r0x00010bd46020:
    if (*(char *)(param_1 + 0x1f) < '\0') {
      plVar4 = (long *)*plVar4;
    }
    func_0x00010ae57a10(uVar1,plVar4,0);
    iVar3 = (int)uVar1;
  }
  else {
    if (uStack_28 == 1) {
      uVar1 = *(undefined8 *)(*param_3 + 0xb8);
      if ((int)uStack_38 == 0) goto code_r0x00010bd46020;
    }
    else {
      uVar1 = *(undefined8 *)(*param_3 + 0xb8);
    }
    uStack_60 = 0;
    lVar2 = (long)*(char *)(param_1 + 0x1f);
    if (lVar2 < 0) {
      plVar4 = (long *)*plVar4;
      lVar2 = *(long *)(param_1 + 0x10);
    }
    func_0x00010ae57700(uVar1,plVar4,lVar2,0,&uStack_60);
    iVar3 = (int)uVar1;
    func_0x000107c2b534(uStack_60);
  }
  return iVar3 == 1;
}



/* Entry: 10896eabc; end: 10896eae7;  */

undefined8 * FUN_10896eabc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aa0180;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
  return param_1;
}



/* Entry: 10896eae8; end: 10896eb47;  */

void FUN_10896eae8(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [40];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 0x260) == 1) {
    FUN_108b80b94(auStack_48,0x7e1,&UNK_10f4ed967);
    func_0x000108971994();
    FUN_1089686dc();
    func_0x000108b80d84(auStack_48);
    FUN_10896842c(lVar1);
  }
  return;
}



/* Entry: 10896eb48; end: 10896eb63;  */

void FUN_10896eb48(void)

{
  return;
}



/* Entry: 10896eb64; end: 10896ebef;  */

void FUN_10896eb64(long param_1)

{
  code *extraout_x8;
  long lVar1;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [48];
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar1 + 0x260) == 2) {
    FUN_108962f5c(auStack_90);
    FUN_1089682c0(auStack_50,lVar1,auStack_90);
    func_0x000104c05024(auStack_50);
    func_0x00010b4fc988(auStack_90);
    lVar1 = *(long *)(lVar1 + 600);
    if ((*(byte *)(lVar1 + 0x10) & 1) == 0) {
      *(undefined1 *)(lVar1 + 0x10) = 1;
    }
    *(undefined8 *)(lVar1 + 8) = 5000000000;
    func_0x000108971de8();
    (*extraout_x8)();
  }
  return;
}



/* Entry: 10896ebf0; end: 10896ec0b;  */

void FUN_10896ebf0(void)

{
  return;
}



/* Entry: 10896ec0c; end: 10896ec43;  */

void FUN_10896ec0c(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  code *extraout_x8_00;
  long unaff_x19;
  
  func_0x0001089718b0();
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    *(undefined8 *)(unaff_x19 + 8) = 0;
  }
  else {
    __ZNSt3__119__shared_weak_count4lockEv();
    *(long *)(unaff_x19 + 8) = lVar1;
    if (lVar1 != 0) {
      return;
    }
  }
  func_0x00010527822c();
  func_0x000108971ddc();
  if (extraout_x8 != 0) {
    func_0x000108971808();
    (*extraout_x8_00)();
  }
  return;
}



/* Entry: 10896ec44; end: 10896ec6f;  */

void FUN_10896ec44(void)

{
  long extraout_x8;
  code *extraout_x8_00;
  
  func_0x000108971ddc();
  if (extraout_x8 != 0) {
    func_0x000108971808();
    (*extraout_x8_00)();
  }
  return;
}



/* Entry: 10896ec70; end: 10896eca3;  */

undefined8 * FUN_10896ec70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  FUN_108b8660c(param_1 + 3);
  return param_1;
}



/* Entry: 10896eca4; end: 10896ecb7;  */

void FUN_10896eca4(void)

{
  return;
}



/* Entry: 10896ecb8; end: 10896ece3;  */

void FUN_10896ecb8(void)

{
  long extraout_x8;
  code *extraout_x8_00;
  
  func_0x000108971ddc();
  if (extraout_x8 != 0) {
    func_0x000108971808();
    (*extraout_x8_00)();
  }
  return;
}



/* Entry: 10896ece4; end: 10896f1b3;  */

/* WARNING: Removing unreachable block (ram,0x00010896eec0) */
/* WARNING: Removing unreachable block (ram,0x00010896eef0) */

void FUN_10896ece4(long param_1)

{
  undefined **ppuVar1;
  undefined1 uVar2;
  byte **ppbVar3;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  byte *pbVar4;
  code *extraout_x8_03;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  code *pcVar9;
  long lVar10;
  long lStack_140;
  long lStack_138;
  byte *pbStack_130;
  undefined1 auStack_128 [24];
  undefined8 *puStack_110;
  long lStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [24];
  undefined8 *puStack_d8;
  undefined8 uStack_c8;
  long lStack_c0;
  byte *apbStack_b8 [3];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 auStack_80 [3];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  
  func_0x000108971508();
  uVar2 = *(char *)(param_1 + 0x40) == '\x01';
  if ((bool)uVar2) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(long *)(param_1 + 0x30) = param_1 + 0x41;
  *(long *)(param_1 + 0x38) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x40) = 1;
  uStack_48 = extraout_x8;
  func_0x0001089715f8();
  lVar10 = *extraout_x8_00;
  *extraout_x8_00 = 0;
  puStack_d8 = *(undefined8 **)(lVar10 + 0x38);
  uStack_c8 = *(undefined8 *)(lVar10 + 0x48);
  (*(code *)puStack_d8[1])(auStack_f0,lVar10 + 0x20);
  lStack_c0 = *(long *)(lVar10 + 0x50);
  pcVar9 = *(code **)(lStack_c0 + 0x40);
  (*(code *)puStack_d8[3])(auStack_f0);
  (*pcVar9)(auStack_80);
  ppuVar1 = ppuStack_68;
  ppuStack_a0 = ppuStack_68;
  ppuStack_90 = ppuStack_58;
  ppuStack_68 = &PTR_DAT_110a9cc38;
  ppuStack_58 = &PTR_DAT_110a9cc58;
  (*(code *)ppuVar1[2])(apbStack_b8,auStack_80);
  ppuStack_88 = ppuStack_50;
  uStack_60 = 0;
  ppuStack_50 = &PTR_FUN_110a9cd38;
  func_0x000108971a28(*ppuStack_68);
  ppuVar1 = ppuStack_a0;
  puStack_110 = ppuStack_a0;
  lStack_100 = (long)ppuStack_90;
  ppuStack_a0 = &PTR_DAT_110a9cc38;
  ppuStack_90 = &PTR_DAT_110a9cc58;
  (*(code *)ppuVar1[2])(auStack_128,apbStack_b8);
  uStack_f8 = ppuStack_88;
  uStack_98 = 0;
  ppuStack_88 = &PTR_FUN_110a9cd38;
  ppbVar3 = apbStack_b8;
  (*(code *)*ppuStack_a0)();
  if (*(code **)(lStack_100 + 0x18) == (code *)0x0) {
    pcVar9 = *(code **)(lStack_100 + 0x10);
    lStack_140 = 0;
    lStack_138 = lVar10;
    func_0x00010897200c();
    _pthread_getspecific();
    if ((ppbVar3 == (byte **)0x0) || (pbVar6 = ppbVar3[1], pbVar6 == (byte *)0x0)) {
LAB_10896efc4:
      auStack_80[0] = 0x20;
      lVar7 = 0x28;
      _malloc();
      if (lVar7 == 0) goto LAB_10896f088;
      apbStack_b8[0] = (byte *)(lVar7 + 8);
      __ZNSt3__15alignEmmRPvRm(8,0x20,apbStack_b8,auStack_80);
      *(long *)(apbStack_b8[0] + -8) = lVar7;
      if (apbStack_b8[0] == (byte *)0x0) goto LAB_10896f088;
      bVar5 = 6;
      pbStack_130 = apbStack_b8[0];
    }
    else {
      pbVar4 = *(byte **)(pbVar6 + 0x20);
      if (pbVar4 == (byte *)0x0) {
        pbVar8 = *(byte **)(pbVar6 + 0x28);
        if (pbVar8 == (byte *)0x0) goto LAB_10896efc4;
        lVar7 = 5;
        uVar2 = false;
        pbVar4 = pbVar8;
        if ((((ulong)pbVar8 & 7) != 0) || (uVar2 = *pbVar8 == 5, *pbVar8 < 6)) goto LAB_10896efb8;
      }
      else {
        uVar2 = ((ulong)pbVar4 & 7) == 0;
        if ((!(bool)uVar2) || (uVar2 = *pbVar4 == 6, *pbVar4 < 6)) {
          pbVar8 = *(byte **)(pbVar6 + 0x28);
          if (pbVar8 == (byte *)0x0) {
            lVar7 = 4;
          }
          else {
            lVar7 = 4;
            uVar2 = false;
            if ((((ulong)pbVar8 & 7) == 0) && (uVar2 = *pbVar8 == 5, 5 < *pbVar8)) {
              lVar7 = 5;
              goto LAB_10896efa8;
            }
          }
LAB_10896efb8:
          pbVar6 = pbVar6 + lVar7 * 8;
          pbVar6[0] = 0;
          pbVar6[1] = 0;
          pbVar6[2] = 0;
          pbVar6[3] = 0;
          pbVar6[4] = 0;
          pbVar6[5] = 0;
          pbVar6[6] = 0;
          pbVar6[7] = 0;
          _free(*(undefined8 *)(pbVar4 + -8));
          goto LAB_10896efc4;
        }
        lVar7 = 4;
        pbVar8 = pbVar4;
      }
LAB_10896efa8:
      pbVar6 = pbVar6 + lVar7 * 8;
      pbVar6[0] = 0;
      pbVar6[1] = 0;
      pbVar6[2] = 0;
      pbVar6[3] = 0;
      pbVar6[4] = 0;
      pbVar6[5] = 0;
      pbVar6[6] = 0;
      pbVar6[7] = 0;
      bVar5 = *pbVar8;
      pbStack_130 = pbVar8;
    }
    pbStack_130[0x18] = bVar5;
    lStack_138 = 0;
    *(code **)pbStack_130 = FUN_108968e8c;
    *(long *)(pbStack_130 + 8) = lVar10;
    (*pcVar9)(auStack_128,&pbStack_130);
    if (pbStack_130 != (byte *)0x0) {
      func_0x000108971ee8(*(undefined8 *)pbStack_130);
    }
    lVar10 = lStack_138;
    if (lStack_138 != 0) {
      func_0x000108971734();
      func_0x0001089718c8(auStack_80);
      ppuStack_50 = *(undefined ***)(lVar10 + 0x50);
      func_0x000108971548(auStack_80,apbStack_b8);
      func_0x000108971e18();
      func_0x000108971a28();
      if (apbStack_b8[0] != (byte *)0x0) {
        func_0x000108971808();
        (*extraout_x8_03)();
      }
    }
  }
  else {
    lStack_140 = lVar10;
    (**(code **)(lStack_100 + 0x18))(auStack_128,FUN_108968d28,&lStack_140);
  }
  lVar10 = lStack_140;
  if (lStack_140 != 0) {
    lStack_140 = 0;
    func_0x000108971734();
    func_0x0001089718c8(auStack_80);
    ppuStack_50 = *(undefined ***)(lVar10 + 0x50);
    func_0x000108971548(auStack_80,apbStack_b8);
    func_0x000108971e18();
    func_0x000108971a28();
    if (apbStack_b8[0] != (byte *)0x0) {
      func_0x000108971808();
      (*extraout_x8_01)();
    }
    if (lStack_140 != 0) {
      func_0x000108971808();
      (*extraout_x8_02)();
    }
  }
  (*(code *)*puStack_110)(auStack_128);
  func_0x0001089721cc(*puStack_d8);
  func_0x000108971480(uStack_48);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10896f088:
  __ZNSt9bad_allocC1Ev(auStack_80);
  FUN_10894e1dc();
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10896f098);
  (*pcVar9)();
}



/* Entry: 10896f1b4; end: 10896f1d3;  */

void FUN_10896f1b4(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108971834();
  puVar1 = unaff_x19;
  func_0x0001089717c8();
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (puVar1 != (undefined1 *)0x0)) {
    if (*(long *)(puVar1 + 0x10) == 0) {
      lVar2 = 2;
    }
    else {
      if (*(long *)(puVar1 + 0x18) != 0) goto FUN_10894e15c;
      lVar2 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    *(undefined1 **)(puVar1 + lVar2 * 8) = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
    return;
  }
  return;
}



/* Entry: 10896f1d4; end: 10896fdbf;  */

void FUN_10896f1d4(long param_1)

{
  byte ******ppppppbVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte *****pppppbVar7;
  byte ****ppppbVar8;
  byte bVar9;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  int *piVar10;
  ulong uVar11;
  long extraout_x8_01;
  undefined8 extraout_x8_02;
  long extraout_x8_03;
  undefined8 extraout_x8_04;
  undefined8 *extraout_x8_05;
  long extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined8 extraout_x8_08;
  byte ******extraout_x8_09;
  byte ******extraout_x8_10;
  code *extraout_x8_11;
  code *extraout_x8_12;
  code *extraout_x8_13;
  code *extraout_x8_14;
  code *extraout_x8_15;
  long lVar12;
  code *extraout_x8_16;
  code *extraout_x8_17;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  long extraout_x9_01;
  byte ******extraout_x9_02;
  byte *******pppppppbVar13;
  byte *******pppppppbVar14;
  byte ****ppppbVar15;
  long lVar16;
  byte ****ppppbVar17;
  long *plVar18;
  long lVar19;
  byte ******ppppppbVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  byte ******ppppppbStack_270;
  byte ******ppppppbStack_268;
  byte *****pppppbStack_260;
  byte *****pppppbStack_258;
  byte *****pppppbStack_250;
  byte ******ppppppbStack_248;
  byte ******ppppppbStack_240;
  undefined1 auStack_238 [24];
  undefined8 *puStack_220;
  long lStack_210;
  long lStack_208;
  byte ******ppppppbStack_200;
  byte *****pppppbStack_1f8;
  byte *****pppppbStack_1f0;
  byte *****pppppbStack_1e8;
  long lStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  byte *****pppppbStack_1c8;
  undefined8 uStack_1c0;
  byte *****pppppbStack_1b8;
  byte *****pppppbStack_1b0;
  undefined1 auStack_1a8 [24];
  undefined8 *puStack_190;
  long lStack_178;
  undefined1 auStack_170 [24];
  undefined8 *puStack_158;
  long lStack_148;
  undefined8 uStack_140;
  byte **appbStack_138 [3];
  byte *****pppppbStack_120;
  byte *****pppppbStack_110;
  byte *****pppppbStack_108;
  byte ******ppppppbStack_100;
  byte *****pppppbStack_f8;
  byte *****pppppbStack_f0;
  byte *****pppppbStack_e8;
  undefined1 auStack_e0 [8];
  undefined **ppuStack_d8;
  byte *****pppppbStack_d0;
  byte *****pppppbStack_c8;
  undefined8 uStack_c0;
  byte *****pppppbStack_b8;
  byte *****pppppbStack_b0;
  byte ******ppppppbStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  byte *****pppppbStack_90;
  byte *****pppppbStack_80;
  byte *****pppppbStack_78;
  undefined8 uStack_70;
  
  func_0x000108971508();
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(long *)(param_1 + 0x30) = param_1 + 0x68;
  *(long *)(param_1 + 0x38) = param_1 + 0x70;
  *(long *)(param_1 + 0x40) = param_1 + 0x50;
  *(long *)(param_1 + 0x48) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  uStack_70 = extraout_x8;
  func_0x0001089715f8();
  pppppppbVar14 = (byte *******)*extraout_x8_00;
  *extraout_x8_00 = 0;
  plVar18 = *(long **)(param_1 + 0x30);
  lVar12 = *(long *)(param_1 + 0x38);
  piVar10 = *(int **)(param_1 + 0x40);
  if ((*(ulong *)(piVar10 + 4) & 1) == 0) {
    plVar18 = (long *)*plVar18;
LAB_10896f270:
    lVar19 = *plVar18;
    ppppppbVar20 = pppppppbVar14[0xd];
    ppppppbStack_a8 = (byte ******)&ppppppbStack_270;
    lVar16 = lRam0000000113847398;
    ppppppbStack_270 = (byte ******)pppppppbVar14;
    _pthread_getspecific();
    puVar5 = (undefined8 *)0x0;
    if (lVar16 != 0) {
      puVar5 = *(undefined8 **)(lVar16 + 8);
    }
    FUN_10894e06c();
    ppppppbVar1 = ppppppbStack_270;
    lVar16 = plVar18[1];
    *puVar5 = 0;
    puVar5[1] = FUN_108969ea4;
    *(undefined4 *)(puVar5 + 2) = 0;
    uVar22 = *(undefined8 *)(lVar19 + 0x38);
    uVar21 = *(undefined8 *)(lVar19 + 0x30);
    puVar5[5] = *(undefined8 *)(lVar19 + 0x40);
    puVar5[4] = uVar22;
    puVar5[3] = uVar21;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = FUN_10896a194;
    *(int *)(puVar5 + 9) = (int)lVar16;
    ppppppbStack_270 = (byte ******)0x0;
    puVar5[10] = ppppppbVar1;
    puVar6 = puVar5;
    puStack_a0 = puVar5;
    (**(code **)plVar18[9])();
    uVar11 = puVar6[1];
    if (uVar11 == 0x800000010df77d92) {
LAB_10896f31c:
      puVar5[0xe] = &PTR_DAT_110a9cc38;
      puVar5[0xf] = 0;
      bVar3 = true;
      puVar5[0x10] = &PTR_DAT_110a9cc58;
      puVar5[0x11] = &PTR_FUN_110a9cd38;
    }
    else {
      if ((long)uVar11 < 0) {
        uVar11 = uVar11 & 0x7fffffffffffffff;
        _strcmp(uVar11,&DAT_10df77d92);
        if ((int)uVar11 == 0) goto LAB_10896f31c;
      }
      pcVar2 = *(code **)(plVar18[10] + 0x58);
      (**(code **)(plVar18[7] + 0x18))(plVar18 + 4);
      (*pcVar2)(&ppppppbStack_100);
      func_0x00010897203c();
      puVar5[0xe] = extraout_x8_01;
      puVar5[0x10] = extraout_x9;
      pppppbStack_e8 = (byte *****)&PTR_DAT_110a9cc38;
      ppuStack_d8 = &PTR_DAT_110a9cc58;
      func_0x000108971d30(*(undefined8 *)(extraout_x8_01 + 0x10),puVar5 + 0xb);
      func_0x000108972090();
      puVar5[0x11] = extraout_x8_02;
      func_0x000108971878();
      func_0x00010897184c();
      bVar3 = puVar5[0xf] == 0;
    }
    lVar16 = puVar5[10];
    pppppbStack_1e8 = *(byte ******)(lVar16 + 0x38);
    ppuStack_1d8 = *(undefined ***)(lVar16 + 0x48);
    ppppbVar15 = (byte ****)(lVar16 + 0x20);
    (*(code *)pppppbStack_1e8[1])(&ppppppbStack_200);
    ppuStack_1d0 = *(undefined ***)(lVar16 + 0x50);
    if (bVar3) {
      if (lStack_1e0 != plVar18[8]) {
        if (((lStack_1e0 != 0) != (plVar18[8] == 0)) && (ppuStack_1d8 == (undefined **)plVar18[9]))
        {
          uVar11 = 0;
          ppppbVar15 = (byte ****)(plVar18 + 4);
          (*(code *)ppuStack_1d8[1])();
          if ((uVar11 & 1) != 0) goto LAB_10896f464;
        }
        goto LAB_10896f47c;
      }
LAB_10896f464:
      puVar5[0x15] = &PTR_DAT_110a9cc38;
      puVar5[0x16] = 0;
      puVar5[0x17] = &PTR_DAT_110a9cc58;
      puVar5[0x18] = &PTR_FUN_110a9cd38;
    }
    else {
LAB_10896f47c:
      pcVar2 = (code *)ppuStack_1d0[0xb];
      (*(code *)pppppbStack_1e8[3])(&ppppppbStack_200);
      ppppbVar15 = (byte ****)appbStack_138;
      (*pcVar2)(&ppppppbStack_100);
      func_0x00010897203c();
      puVar5[0x15] = extraout_x8_03;
      puVar5[0x17] = extraout_x9_00;
      pppppbStack_e8 = (byte *****)&PTR_DAT_110a9cc38;
      ppuStack_d8 = &PTR_DAT_110a9cc58;
      func_0x000108971d30(*(undefined8 *)(extraout_x8_03 + 0x10),puVar5 + 0x12);
      func_0x000108972090();
      puVar5[0x18] = extraout_x8_04;
      func_0x000108971878();
      func_0x00010897184c();
    }
    (*(code *)*pppppbStack_1e8)(&ppppppbStack_200);
    puStack_98 = puVar5;
    if (ppppppbVar20 != (byte ******)0x0) {
      ppppbVar17 = *(byte *****)(lVar19 + 0x28);
      pppppbVar7 = *ppppppbVar20;
      ppppbVar8 = (byte ****)0x0;
      if (pppppbVar7 == (byte *****)0x0) {
LAB_10896f538:
        func_0x00010897200c();
        _pthread_getspecific();
        pppppbVar7 = (byte *****)0x0;
        if (ppppbVar8 != (byte ****)0x0) {
          pppppbVar7 = (byte *****)ppppbVar8[1];
        }
        ppppbVar15 = (byte ****)0x28;
        func_0x000108972130();
      }
      else {
        func_0x000108971c6c();
        *ppppppbVar20 = (byte *****)0x0;
        if ((ppppbVar15 < (byte ****)0x28) || (((ulong)pppppbVar7 & 7) != 0)) {
          ppppbVar8 = (byte ****)0x0;
          if (pppppbVar7 != (byte *****)0x0) {
            func_0x00010897200c();
            _pthread_getspecific();
            ppppbVar8 = (byte ****)0x0;
            if (pppppbVar7 != (byte *****)0x0) {
              ppppbVar8 = pppppbVar7[1];
            }
            func_0x00010bd3f778();
          }
          goto LAB_10896f538;
        }
      }
      *pppppbVar7 = (byte ****)&PTR_FUN_110aa0068;
      lVar16 = plVar18[1];
      pppppbVar7[1] = ppppbVar17;
      pppppbVar7[2] = (byte ****)(plVar18 + 2);
      *(int *)(pppppbVar7 + 3) = (int)lVar16;
      *(undefined4 *)((long)pppppbVar7 + 0x1c) = 1;
      pppppbVar7[4] = ppppbVar15;
      *ppppppbVar20 = pppppbVar7;
      puVar5[6] = pppppbVar7 + 1;
    }
    uVar4 = *(char *)(lVar12 + 1) == '\x02';
    uVar21 = 0x10;
    if (!(bool)uVar4) {
      uVar21 = 0x1c;
    }
    func_0x00010bd415ec(lVar19 + 0x28,plVar18 + 1,puVar5,0,lVar12,uVar21);
  }
  else {
    uVar4 = *(ulong *)(piVar10 + 4) == 1;
    if ((bool)uVar4) {
      plVar18 = (long *)*plVar18;
      if (*piVar10 == 0) goto LAB_10896f270;
    }
    else {
      plVar18 = (long *)*plVar18;
    }
    ppppppbStack_270 = (byte ******)0x0;
    pppppbStack_258 = *(byte ******)(piVar10 + 2);
    pppppbStack_260 = *(byte ******)piVar10;
    pppppbStack_250 = *(byte ******)(piVar10 + 4);
    puStack_220 = (undefined8 *)plVar18[7];
    lStack_210 = plVar18[9];
    ppppppbStack_268 = (byte ******)pppppppbVar14;
    (*(code *)puStack_220[1])(auStack_238,plVar18 + 4);
    lStack_208 = plVar18[10];
    pppppbStack_120 = (byte *****)pppppppbVar14[7];
    pppppbStack_110 = (byte *****)pppppppbVar14[9];
    (*(code *)pppppbStack_120[1])(appbStack_138,pppppppbVar14 + 4);
    pppppbStack_108 = (byte *****)pppppppbVar14[10];
    pcVar2 = *(code **)(lStack_208 + 0x20);
    (*(code *)puStack_220[3])(auStack_238);
    (*pcVar2)(&ppppppbStack_100);
    func_0x00010897203c();
    puStack_190 = extraout_x8_05;
    func_0x00010897201c();
    func_0x000108971d30(auStack_1a8);
    func_0x000108972090();
    lStack_178 = extraout_x8_06;
    func_0x000108971878();
    func_0x00010897184c();
    pcVar2 = *(code **)(lStack_178 + 0x88);
    (*(code *)puStack_190[3])(auStack_1a8);
    (*pcVar2)(&ppppppbStack_100);
    func_0x00010897203c();
    pppppbStack_1e8 = (byte *****)extraout_x8_07;
    ppuStack_1d8 = (undefined **)extraout_x9_01;
    func_0x00010897201c();
    func_0x000108971d30(&ppppppbStack_200);
    func_0x000108972090();
    ppuStack_1d0 = (undefined **)extraout_x8_08;
    func_0x000108971878();
    func_0x00010897184c();
    pppppbVar7 = pppppbStack_1e8;
    puStack_158 = pppppbStack_1e8;
    lStack_148 = (long)ppuStack_1d8;
    pppppbStack_1e8 = (byte *****)&PTR_DAT_110a9cc38;
    ppuStack_1d8 = &PTR_DAT_110a9cc58;
    (*(code *)pppppbVar7[2])(auStack_170,&ppppppbStack_200);
    uStack_140 = ppuStack_1d0;
    lStack_1e0 = 0;
    ppuStack_1d0 = &PTR_FUN_110a9cd38;
    (*(code *)*pppppbStack_1e8)(&ppppppbStack_200);
    ppppppbStack_200 = ppppppbStack_268;
    ppppppbStack_268 = (byte ******)0x0;
    pppppbStack_1f0 = pppppbStack_258;
    pppppbStack_1f8 = pppppbStack_260;
    pppppbStack_1e8 = pppppbStack_250;
    pppppbVar7 = (byte *****)pppppbStack_108[0xb];
    (*(code *)pppppbStack_120[3])(appbStack_138);
    (*(code *)pppppbVar7)(&ppppppbStack_100);
    func_0x00010897203c();
    pppppbStack_1c8 = (byte *****)extraout_x8_09;
    pppppbStack_1b8 = (byte *****)extraout_x9_02;
    func_0x00010897201c();
    func_0x000108971d30(&lStack_1e0);
    func_0x000108972090();
    pppppbStack_1b0 = (byte *****)extraout_x8_10;
    func_0x000108971878();
    func_0x00010897184c();
    pppppbVar7 = pppppbStack_1c8;
    if (*(code **)(lStack_148 + 0x18) == (code *)0x0) {
      pcVar2 = *(code **)(lStack_148 + 0x10);
      ppppppbStack_100 = ppppppbStack_200;
      pppppbStack_f0 = pppppbStack_1f0;
      pppppbStack_f8 = pppppbStack_1f8;
      pppppbStack_e8 = pppppbStack_1e8;
      pppppbStack_c8 = pppppbStack_1c8;
      pppppbStack_b8 = pppppbStack_1b8;
      ppppppbStack_200 = (byte ******)0x0;
      pppppbStack_1c8 = (byte *****)&PTR_DAT_110a9cc38;
      pppppbStack_1b8 = (byte *****)&PTR_DAT_110a9cc58;
      (*(code *)pppppbVar7[2])(auStack_e0,&lStack_1e0);
      pppppbStack_b0 = pppppbStack_1b0;
      uStack_1c0 = 0;
      pppppbStack_1b0 = (byte *****)&PTR_FUN_110a9cd38;
      lVar12 = lRam0000000113847398;
      _pthread_getspecific();
      if ((lVar12 == 0) || (lVar12 = *(long *)(lVar12 + 8), lVar12 == 0)) {
LAB_10896fa10:
        ppppppbStack_a8 = (byte ******)0x70;
        ppppppbVar20 = (byte ******)0x78;
        _malloc();
        if (ppppppbVar20 == (byte ******)0x0) goto LAB_10896fb64;
        ppppppbStack_240 = ppppppbVar20 + 1;
        __ZNSt3__15alignEmmRPvRm(8,0x70,&ppppppbStack_240,&ppppppbStack_a8);
        ppppppbStack_240[-1] = (byte *****)ppppppbVar20;
        if ((byte *******)ppppppbStack_240 == (byte *******)0x0) goto LAB_10896fb64;
        bVar9 = 0x1a;
        pppppppbVar13 = (byte *******)ppppppbStack_240;
      }
      else {
        pppppppbVar14 = *(byte ********)(lVar12 + 0x20);
        if (pppppppbVar14 == (byte *******)0x0) {
          pppppppbVar13 = *(byte ********)(lVar12 + 0x28);
          if (pppppppbVar13 == (byte *******)0x0) goto LAB_10896fa10;
          lVar16 = 5;
          uVar4 = false;
          pppppppbVar14 = pppppppbVar13;
          if ((((ulong)pppppppbVar13 & 7) != 0) ||
             (uVar4 = *(byte *)pppppppbVar13 == 0x19, *(byte *)pppppppbVar13 < 0x1a))
          goto LAB_10896fa04;
        }
        else {
          uVar4 = ((ulong)pppppppbVar14 & 7) == 0;
          if ((!(bool)uVar4) ||
             (uVar4 = *(byte *)pppppppbVar14 == 0x1a, *(byte *)pppppppbVar14 < 0x1a)) {
            pppppppbVar13 = *(byte ********)(lVar12 + 0x28);
            if (pppppppbVar13 == (byte *******)0x0) {
              lVar16 = 4;
            }
            else {
              lVar16 = 4;
              uVar4 = false;
              if ((((ulong)pppppppbVar13 & 7) == 0) &&
                 (uVar4 = *(byte *)pppppppbVar13 == 0x19, 0x19 < *(byte *)pppppppbVar13)) {
                lVar16 = 5;
                goto LAB_10896f9ec;
              }
            }
LAB_10896fa04:
            *(undefined8 *)(lVar12 + lVar16 * 8) = 0;
            _free(pppppppbVar14[-1]);
            goto LAB_10896fa10;
          }
          lVar16 = 4;
          pppppppbVar13 = pppppppbVar14;
        }
LAB_10896f9ec:
        *(undefined8 *)(lVar12 + lVar16 * 8) = 0;
        bVar9 = *(byte *)pppppppbVar13;
      }
      pppppbVar7 = pppppbStack_c8;
      *(byte *)(pppppppbVar13 + 0xd) = bVar9;
      pppppppbVar13[1] = ppppppbStack_100;
      pppppppbVar13[3] = (byte ******)pppppbStack_f0;
      pppppppbVar13[2] = (byte ******)pppppbStack_f8;
      pppppppbVar13[4] = (byte ******)pppppbStack_e8;
      pppppppbVar13[8] = (byte ******)pppppbStack_c8;
      pppppppbVar13[10] = (byte ******)pppppbStack_b8;
      ppppppbStack_100 = (byte ******)0x0;
      pppppbStack_c8 = (byte *****)&PTR_DAT_110a9cc38;
      pppppbStack_b8 = (byte *****)&PTR_DAT_110a9cc58;
      (*(code *)pppppbVar7[2])(pppppppbVar13 + 5,auStack_e0);
      pppppppbVar13[0xb] = (byte ******)pppppbStack_b0;
      uStack_c0 = 0;
      pppppbStack_b0 = (byte *****)&PTR_FUN_110a9cd38;
      *pppppppbVar13 = (byte ******)FUN_108969d00;
      ppppppbStack_248 = (byte ******)pppppppbVar13;
      (*pcVar2)(auStack_170,&ppppppbStack_248);
      if ((byte *******)ppppppbStack_248 != (byte *******)0x0) {
        func_0x000108971ee8(*ppppppbStack_248);
      }
      (*(code *)*pppppbStack_c8)(auStack_e0);
      ppppppbVar20 = ppppppbStack_100;
      if ((byte *******)ppppppbStack_100 != (byte *******)0x0) {
        ppppppbStack_100 = (byte ******)0x0;
        ppppppbStack_240 = ppppppbVar20;
        pppppbStack_90 = ppppppbVar20[7];
        pppppbStack_80 = ppppppbVar20[9];
        func_0x0001089718c8(pppppbStack_90[1],&ppppppbStack_a8);
        pppppbStack_78 = ppppppbVar20[10];
        func_0x000108971548(&ppppppbStack_a8,&ppppppbStack_240);
        (*(code *)*pppppbStack_90)(&ppppppbStack_a8);
        if ((byte *******)ppppppbStack_240 != (byte *******)0x0) {
          func_0x000108971808();
          (*extraout_x8_16)();
        }
        if ((byte *******)ppppppbStack_100 != (byte *******)0x0) {
          func_0x000108971808();
          (*extraout_x8_17)();
        }
      }
    }
    else {
      (**(code **)(lStack_148 + 0x18))(auStack_170,FUN_1089696c4,&ppppppbStack_200);
    }
    (*(code *)*pppppbStack_1c8)(&lStack_1e0);
    ppppppbVar20 = ppppppbStack_200;
    if ((byte *******)ppppppbStack_200 != (byte *******)0x0) {
      ppppppbStack_200 = (byte ******)0x0;
      ppppppbStack_a8 = ppppppbVar20;
      func_0x000108971898();
      func_0x0001089718c8(&ppppppbStack_100);
      pppppbStack_d0 = ppppppbVar20[10];
      func_0x000108971548(&ppppppbStack_100,&ppppppbStack_a8);
      func_0x000108971e74();
      func_0x00010897184c();
      if ((byte *******)ppppppbStack_a8 != (byte *******)0x0) {
        func_0x000108971808();
        (*extraout_x8_11)();
      }
      if ((byte *******)ppppppbStack_200 != (byte *******)0x0) {
        func_0x000108971808();
        (*extraout_x8_12)();
      }
    }
    (*(code *)*puStack_158)(auStack_170);
    (*(code *)*puStack_190)(auStack_1a8);
    (*(code *)*pppppbStack_120)(appbStack_138);
    (*(code *)*puStack_220)(auStack_238);
    ppppppbVar20 = ppppppbStack_268;
    if ((byte *******)ppppppbStack_268 != (byte *******)0x0) {
      ppppppbStack_200 = ppppppbStack_268;
      func_0x000108971898();
      func_0x0001089718c8(&ppppppbStack_100);
      pppppbStack_d0 = ppppppbVar20[10];
      func_0x000108971548(&ppppppbStack_100,&ppppppbStack_200);
      func_0x000108971e74();
      func_0x00010897184c();
      if ((byte *******)ppppppbStack_200 != (byte *******)0x0) {
        func_0x000108971808();
        (*extraout_x8_13)();
      }
    }
  }
  ppppppbVar20 = ppppppbStack_270;
  if ((byte *******)ppppppbStack_270 != (byte *******)0x0) {
    ppppppbStack_270 = (byte ******)0x0;
    ppppppbStack_200 = ppppppbVar20;
    func_0x000108971898();
    func_0x0001089718c8(&ppppppbStack_100);
    pppppbStack_d0 = ppppppbVar20[10];
    func_0x000108971548(&ppppppbStack_100,&ppppppbStack_200);
    func_0x000108971e74();
    func_0x00010897184c();
    if ((byte *******)ppppppbStack_200 != (byte *******)0x0) {
      func_0x000108971808();
      (*extraout_x8_14)();
    }
    if ((byte *******)ppppppbStack_270 != (byte *******)0x0) {
      func_0x000108971808();
      (*extraout_x8_15)();
    }
  }
  func_0x000108971480(uStack_70);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
LAB_10896fb64:
  __ZNSt9bad_allocC1Ev(&ppppppbStack_a8);
  FUN_10894e1dc();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10896fb74);
  (*pcVar2)();
}



/* Entry: 10896fdc0; end: 10896fddf;  */

void FUN_10896fdc0(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108971834();
  puVar1 = unaff_x19;
  func_0x0001089717c8();
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (puVar1 != (undefined1 *)0x0)) {
    if (*(long *)(puVar1 + 0x10) == 0) {
      lVar2 = 2;
    }
    else {
      if (*(long *)(puVar1 + 0x18) != 0) goto FUN_10894e15c;
      lVar2 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    *(undefined1 **)(puVar1 + lVar2 * 8) = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
    return;
  }
  return;
}



/* Entry: 10896fde0; end: 10897001f;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10896fde0(long param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *apuStack_e8 [3];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  undefined8 *puStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000108971508();
  uVar2 = *(char *)(param_1 + 0x54) == '\x01';
  if ((bool)uVar2) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(long *)(param_1 + 0x30) = param_1 + 0x48;
  *(long *)(param_1 + 0x38) = param_1 + 0x50;
  *(long *)(param_1 + 0x40) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x54) = 1;
  uStack_58 = extraout_x8;
  func_0x0001089715f8();
  lVar9 = *extraout_x8_00;
  *extraout_x8_00 = 0;
  uVar1 = **(undefined4 **)(param_1 + 0x38);
  puVar11 = (undefined8 *)**(undefined8 **)(param_1 + 0x30);
  uVar10 = *puVar11;
  puVar12 = *(undefined8 **)(lVar9 + 0x68);
  if (puVar12 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)*puVar12;
    if (puVar5 == (undefined8 *)0x0) {
LAB_10896fea0:
      lVar6 = lRam0000000113847398;
      _pthread_getspecific();
      puVar5 = (undefined8 *)0x0;
      if (lVar6 != 0) {
        puVar5 = *(undefined8 **)(lVar6 + 8);
      }
      param_2 = 0x20;
      func_0x000108972130();
    }
    else {
      func_0x000108971c6c();
      *puVar12 = 0;
      bVar3 = ((ulong)puVar5 & 7) == 0;
      uVar2 = 0x1f < param_2 && bVar3;
      if (0x1f >= param_2 || !bVar3) {
        if (puVar5 != (undefined8 *)0x0) {
          _pthread_getspecific();
          func_0x0001089720e0();
        }
        goto LAB_10896fea0;
      }
    }
    *puVar5 = &PTR_DAT_110aa0030;
    puVar13 = puVar5 + 1;
    *puVar13 = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5[3] = param_2;
    alStack_98[1] = 0;
    *puVar12 = puVar5;
    alStack_98[2] = param_2;
    func_0x00010bd3f974(alStack_98 + 1);
  }
  apuStack_e8[2] = puVar11 + 1;
  uStack_cc = 0;
  uStack_c8 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  alStack_98[1] = 0;
  alStack_98[2] = 0;
  alStack_98[3] = 0;
  ppuVar7 = apuStack_e8;
  iVar8 = (int)alStack_98 + 8;
  apuStack_e8[0] = puVar13;
  apuStack_e8[1] = (undefined8 *)uVar10;
  uStack_d0 = uVar1;
  lStack_a0 = lVar9;
  func_0x000108971c78();
  FUN_10896a30c();
  lVar9 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_a0 = 0;
    alStack_98[0] = lVar9;
    puStack_78 = *(undefined8 **)(lVar9 + 0x38);
    uStack_68 = *(undefined8 *)(lVar9 + 0x48);
    func_0x0001089718c8(puStack_78[1],alStack_98 + 1);
    uStack_60 = *(undefined8 *)(lVar9 + 0x50);
    ppuVar7 = (undefined8 **)(alStack_98 + 1);
    iVar8 = (int)alStack_98;
    func_0x000108971548();
    func_0x0001089721cc(*puStack_78);
    if (alStack_98[0] != 0) {
      func_0x000108971808();
      (*extraout_x8_01)();
    }
    if (lStack_a0 != 0) {
      func_0x000108971808();
      (*extraout_x8_02)();
    }
  }
  func_0x000108971480(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    func_0x000108971660();
    func_0x000108972178();
    func_0x0001089718d0();
  }
  func_0x000108971f4c();
  func_0x000108971834();
  ppuVar4 = ppuVar7;
  func_0x0001089717c8(ppuVar7,0x58);
  func_0x00010bd42e30();
  if ((apuStack_e8 < (undefined8 **)0x3fd) && (ppuVar4 != (undefined8 **)0x0)) {
    if (ppuVar4[2] == (undefined8 *)0x0) {
      lVar9 = 2;
    }
    else {
      if (ppuVar4[3] != (undefined8 *)0x0) goto FUN_10894e15c;
      lVar9 = 3;
    }
    *(undefined1 *)ppuVar7 = *(undefined1 *)((long)ppuVar7 + (long)apuStack_e8);
    ppuVar4[lVar9] = ppuVar7;
    return;
  }
FUN_10894e15c:
  if (ppuVar7 != (undefined8 **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(ppuVar7[-1]);
    return;
  }
  return;
}



/* Entry: 108970020; end: 10897003f;  */

void FUN_108970020(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108971834();
  puVar1 = unaff_x19;
  func_0x0001089717c8();
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (puVar1 != (undefined1 *)0x0)) {
    if (*(long *)(puVar1 + 0x10) == 0) {
      lVar2 = 2;
    }
    else {
      if (*(long *)(puVar1 + 0x18) != 0) goto FUN_10894e15c;
      lVar2 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    *(undefined1 **)(puVar1 + lVar2 * 8) = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
    return;
  }
  return;
}



/* Entry: 108970040; end: 1089702df;  */

void FUN_108970040(long param_1)

{
  undefined8 in_x5;
  undefined1 extraout_w8;
  uint uVar1;
  undefined8 uVar2;
  code *extraout_x8;
  long lVar3;
  code *extraout_x8_00;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  func_0x000108972308();
  if (*(char *)(param_1 + 0x100) == '\x02') {
    func_0x000108971e24();
    lVar4 = *(long *)(unaff_x19 + 0xd8);
    func_0x000108971870();
    FUN_10896ec44(unaff_x19 + 200);
    *(undefined4 *)(lVar4 + 0x260) = 2;
    if (*(long *)(lVar4 + 0x28) != 0) {
      func_0x000108971de8();
      (*extraout_x8)();
    }
    *(undefined8 *)(unaff_x19 + 0xd0) = unaff_x20;
    func_0x000108971a4c();
    *(undefined1 *)(unaff_x19 + 0x100) = extraout_w8;
    func_0x000108971758();
    if (extraout_x10 != 0) {
      func_0x000108971f28();
    }
    func_0x000108971930();
  }
  else {
    if (*(char *)(param_1 + 0x100) == '\x01') {
      FUN_108968698(unaff_x19 + 0x78);
      lVar4 = *(long *)(unaff_x19 + 0xd8);
      FUN_10896ec44(unaff_x19 + 0x78);
      FUN_10896ec44(unaff_x19 + 0xc0);
      uStack_3c = *(undefined4 *)(lVar4 + 0x70);
      *(undefined8 *)(unaff_x19 + 0xb0) = 0;
      *(undefined8 *)(unaff_x19 + 0xb8) = 0;
      *(undefined8 *)(unaff_x19 + 0xa8) = 0;
      func_0x0001089721c4(*(undefined4 *)(lVar4 + 0x98),lVar4 + 0x9c,0xffff,0x1001,&uStack_3c,in_x5,
                          unaff_x19 + 0xa8);
      uStack_38 = *(undefined4 *)(*(long *)(unaff_x19 + 0xd8) + 0x74);
      *(undefined8 *)(unaff_x19 + 0x98) = 0;
      *(undefined8 *)(unaff_x19 + 0xa0) = 0;
      *(undefined8 *)(unaff_x19 + 0x90) = 0;
      func_0x0001089721c4(*(undefined4 *)(*(long *)(unaff_x19 + 0xd8) + 0x98),lVar4 + 0x9c,0xffff,
                          0x1002,&uStack_38,in_x5,unaff_x19 + 0x90);
      uStack_34 = 1;
      *(undefined8 *)(unaff_x19 + 0x80) = 0;
      *(undefined8 *)(unaff_x19 + 0x88) = 0;
      *(undefined8 *)(unaff_x19 + 0x78) = 0;
      func_0x0001089721c4(*(undefined4 *)(*(long *)(unaff_x19 + 0xd8) + 0x98),lVar4 + 0x9c,6,1,
                          &uStack_34,in_x5,unaff_x19 + 0x78);
      FUN_10896a2b0(unaff_x19 + 200,*(long *)(unaff_x19 + 0xd8) + 0xe8,0);
      func_0x000108971b34();
      FUN_108968620(unaff_x19 + 0x30);
      *(undefined1 *)(unaff_x19 + 0x100) = 2;
      uVar2 = *(undefined8 *)(unaff_x19 + 0x30);
    }
    else {
      lVar4 = *(long *)(*(long *)(unaff_x19 + 0xd8) + 0x250);
      lVar3 = *(long *)(*(long *)(unaff_x19 + 0xd8) + 0x60);
      if ((*(byte *)(lVar4 + 0x10) & 1) == 0) {
        *(undefined1 *)(lVar4 + 0x10) = 1;
      }
      *(long *)(lVar4 + 8) = lVar3 * 1000000;
      func_0x000108971de8();
      (*extraout_x8_00)();
      lVar4 = *(long *)(unaff_x19 + 0xd8);
      *(undefined8 *)(unaff_x19 + 0x50) = 0;
      *(undefined8 *)(unaff_x19 + 0x58) = 0;
      *(undefined8 *)(unaff_x19 + 0x48) = 0;
      if (*(int *)(lVar4 + 0x98) == -1) {
        uVar1 = (uint)*(byte *)(lVar4 + 0x39);
        if (uVar1 != 2) {
          uVar1 = 0x1e;
        }
        *(uint *)(unaff_x19 + 0xfc) = uVar1;
        FUN_1089695e0(unaff_x19 + 0x60,*(undefined8 *)(lVar4 + 0x90),(int *)(lVar4 + 0x98),
                      unaff_x19 + 0xfc,unaff_x19 + 0x48);
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x40);
      uVar2 = *(undefined8 *)(lVar4 + 0x38);
      uVar6 = *(undefined8 *)(lVar4 + 0x44);
      *(undefined8 *)(unaff_x19 + 0xf4) = *(undefined8 *)(lVar4 + 0x4c);
      *(undefined8 *)(unaff_x19 + 0xec) = uVar6;
      *(undefined8 *)(unaff_x19 + 0xe8) = uVar5;
      *(undefined8 *)(unaff_x19 + 0xe0) = uVar2;
      *(undefined8 *)(unaff_x19 + 0x38) = *(undefined8 *)(unaff_x19 + 0x50);
      *(undefined8 *)(unaff_x19 + 0x30) = *(undefined8 *)(unaff_x19 + 0x48);
      *(undefined8 *)(unaff_x19 + 0x40) = *(undefined8 *)(unaff_x19 + 0x58);
      func_0x000108969650(unaff_x19 + 0xc0,lVar4 + 0x90,unaff_x19 + 0xe0,unaff_x19 + 0x30);
      func_0x000108971b34();
      FUN_108968620(unaff_x19 + 0x78);
      *(undefined1 *)(unaff_x19 + 0x100) = 1;
      uVar2 = *(undefined8 *)(unaff_x19 + 0x78);
    }
    func_0x0001089714d8(uVar2);
  }
  return;
}



/* Entry: 1089702e0; end: 10897033f;  */

void FUN_1089702e0(undefined **param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 **ppuVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined **ppuVar3;
  int iVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **extraout_x8;
  code *extraout_x8_00;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined **unaff_x21;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long in_stack_00000020;
  undefined **in_stack_00000028;
  undefined *in_stack_00000030;
  undefined **in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined **in_stack_00000048;
  undefined *in_stack_00000058;
  undefined **in_stack_00000060;
  undefined8 uStack_58;
  undefined8 *puStack_40;
  undefined **ppuStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  ppuVar2 = (undefined8 **)&stack0xffffffffffffffe0;
  puVar7 = (undefined *)(ulong)*(byte *)(param_1 + 0x20);
  ppuVar6 = (undefined **)0x78;
  puVar8 = (undefined8 *)0xc0;
  ppuVar3 = param_1;
  switch(*(byte *)(param_1 + 0x20)) {
  case 0:
  case 3:
    goto code_r0x00010897032c;
  case 1:
    goto code_r0x00010897031c;
  case 2:
  case 5:
  case 10:
  case 0xd:
  case 0x2d:
  case 0x6a:
  case 0x9a:
    ppuVar6 = (undefined **)0x30;
  case 9:
    puVar8 = (undefined8 *)0xc8;
    goto code_r0x00010897031c;
  case 4:
  case 7:
    goto code_r0x000108970334;
  case 6:
    goto code_r0x000108970324;
  case 8:
  case 0xb:
    goto code_r0x000108970328;
  case 0xc:
  case 0xf:
    goto code_r0x000108970338;
  case 0xe:
    goto code_r0x000108970320;
  case 0x10:
  case 0x20:
  case 0x23:
  case 0x5b:
  case 0x5e:
    goto code_r0x000108970464;
  case 0x11:
  case 0xfd:
    goto code_r0x000108970444;
  case 0x12:
    goto code_r0x00010897046c;
  case 0x13:
  case 0x1e:
  case 0x34:
  case 0x59:
  case 0xc9:
  case 0xe7:
    goto code_r0x0001089703d8;
  case 0x14:
  case 0x2e:
  case 0x4f:
  case 0x6b:
  case 0x9b:
  case 0xc5:
  case 0xe3:
  case 0xfe:
    goto code_r0x00010897044c;
  case 0x15:
  case 0x31:
  case 0x36:
  case 0x50:
    goto code_r0x0001089703e0;
  default:
    goto code_r0x000108970498;
  case 0x17:
  case 0x43:
  case 0x52:
  case 0x78:
  case 0x90:
  case 0xa8:
  case 0xc0:
    goto code_r0x0001089704a4;
  case 0x18:
  case 0x21:
  case 0x3b:
  case 0x53:
  case 0x5c:
  case 0x7d:
  case 0x85:
  case 0x86:
  case 0x91:
  case 0xad:
  case 0xb5:
  case 0xb6:
  case 0xc1:
  case 0xd0:
  case 0xd1:
  case 0xe1:
  case 0xee:
  case 0xef:
  case 0xf8:
    goto code_r0x0001089704c4;
  case 0x19:
  case 0x54:
  case 0x72:
  case 0xa2:
  case 0xdd:
    goto code_r0x0001089703e4;
  case 0x1a:
  case 0x55:
  case 0x80:
  case 0x83:
  case 0xb0:
  case 0xb3:
  case 0xcb:
  case 0xce:
  case 0xe9:
  case 0xec:
    goto code_r0x0001089704a0;
  case 0x1b:
  case 0x29:
  case 0x47:
  case 0x56:
  case 100:
  case 0x6e:
  case 0x6f:
  case 0x76:
  case 0x8a:
  case 0x9e:
  case 0x9f:
  case 0xa6:
  case 0xba:
  case 0xd5:
  case 0xf3:
    goto code_r0x0001089704d0;
  case 0x1c:
  case 0x1d:
  case 0x48:
  case 0x57:
  case 0x58:
  case 0xdf:
    goto code_r0x0001089704c8;
  case 0x1f:
  case 0x35:
  case 0x5a:
  case 0x7e:
  case 0xae:
    goto code_r0x0001089703dc;
  case 0x22:
  case 0x27:
  case 0x3e:
  case 0x4d:
  case 0x5d:
  case 0x62:
  case 0x70:
  case 0x74:
  case 0x97:
  case 0xa0:
  case 0xa4:
  case 0xd8:
    goto code_r0x0001089704e0;
  case 0x24:
  case 0x2a:
  case 0x41:
  case 0x46:
  case 0x5f:
  case 0x65:
  case 0x93:
  case 0xc3:
  case 0xfb:
    goto code_r0x0001089704dc;
  case 0x26:
  case 0x38:
  case 0x61:
  case 0x82:
  case 0x8b:
  case 0x8f:
  case 0xb2:
  case 0xbb:
  case 0xbf:
  case 0xcd:
  case 0xd6:
  case 0xeb:
  case 0xf4:
    goto code_r0x0001089704cc;
  case 0x28:
  case 99:
  case 0xe0:
    goto code_r0x0001089704d4;
  case 0x2b:
  case 0x30:
  case 0x4a:
  case 0x66:
  case 0x71:
  case 0x7a:
  case 0x88:
  case 0xa1:
  case 0xaa:
  case 0xb8:
  case 0xd3:
  case 0xd9:
  case 0xdb:
  case 0xf1:
  case 0xf9:
    goto code_r0x0001089704e4;
  case 0x2c:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x99:
    goto code_r0x000108970428;
  case 0x2f:
  case 0xc6:
  case 0xe4:
  case 0xff:
    goto code_r0x000108970460;
  case 0x32:
  case 0x33:
  case 0x3d:
  case 0x44:
  case 0x49:
  case 0x8c:
  case 0x94:
  case 0xbc:
  case 200:
  case 0xd7:
  case 0xe6:
  case 0xf5:
    goto code_r0x000108970490;
  case 0x37:
  case 0x3c:
  case 0x42:
  case 0x79:
  case 0x84:
  case 0x92:
  case 0x98:
  case 0xa9:
  case 0xb4:
  case 0xc2:
  case 0xcf:
  case 0xdc:
  case 0xed:
  case 0xfa:
    goto code_r0x0001089704a8;
  case 0x3a:
  case 0x6d:
  case 0x95:
  case 0x9d:
    goto code_r0x00010897049c;
  case 0x3f:
  case 0x4b:
  case 0x8d:
  case 0xbd:
    goto code_r0x0001089704b4;
  case 0x45:
  case 0xf6:
    goto code_r0x0001089704ac;
  case 0x4c:
  case 0x75:
  case 0x7c:
  case 0x89:
  case 0xa5:
  case 0xac:
  case 0xb9:
  case 0xd4:
  case 0xde:
  case 0xf2:
  case 0xf7:
    goto code_r0x0001089704b8;
  case 0x4e:
  case 0xc4:
  case 0xe2:
  case 0xfc:
    goto code_r0x000108970438;
  case 0x6c:
  case 0x7f:
  case 0x9c:
    goto code_r0x0001089703e8;
  case 0x77:
  case 0xa7:
    goto code_r0x0001089703ec;
  case 0xaf:
  case 199:
  case 0xe5:
    break;
  case 0xca:
    goto code_r0x0001089703f4;
  case 0xe8:
    goto LAB_1089703f8;
  }
  ppuVar6 = (undefined **)((ulong)param_1 & 7);
code_r0x0001089703d8:
  in_CY = (undefined8 *)0x1f < param_2;
code_r0x0001089703dc:
  in_ZR = false;
  if ((bool)in_CY) {
    in_ZR = ppuVar6 == (undefined **)0x0;
  }
code_r0x0001089703e0:
  if (!(bool)in_ZR) {
code_r0x0001089703e4:
code_r0x0001089703e8:
    param_1 = (undefined **)*unaff_x25;
code_r0x0001089703ec:
    _pthread_getspecific();
    if (param_1 != (undefined **)0x0) {
code_r0x0001089703f4:
    }
LAB_1089703f8:
    func_0x0001089720e0();
    lVar5 = *unaff_x25;
    _pthread_getspecific();
    puVar8 = (undefined8 *)0x0;
    if (lVar5 != 0) {
      puVar8 = *(undefined8 **)(lVar5 + 8);
    }
    param_1 = (undefined **)0x20;
    func_0x000108972130();
  }
  ppuVar6 = &PTR_FUN_110aa00d8;
  in_stack_00000038 = param_1;
code_r0x000108970428:
  *puVar8 = ppuVar6;
  puVar8[1] = 0;
  *(undefined4 *)(puVar8 + 2) = 0;
code_r0x000108970438:
  puVar8[3] = param_1;
  in_stack_00000030 = (undefined *)0x0;
  *unaff_x24 = puVar8;
code_r0x000108970444:
  func_0x00010bd3f974(&stack0x00000030);
code_r0x00010897044c:
code_r0x000108970460:
code_r0x000108970464:
  puVar8 = (undefined8 *)&stack0xfffffffffffffff0;
code_r0x00010897046c:
  in_stack_00000030 = (undefined *)0x0;
  in_stack_00000038 = (undefined **)0x0;
  in_stack_00000040 = 0;
  param_1 = (undefined **)&stack0xfffffffffffffff0;
  param_2 = &stack0x00000030;
  func_0x000108971c78();
  FUN_10896c364();
  ppuVar3 = unaff_x21;
code_r0x000108970490:
  iVar4 = (int)param_2;
  if (ppuVar3 == (undefined **)0x0) goto LAB_1089704f8;
  in_stack_00000020 = 0;
  in_stack_00000028 = ppuVar3;
code_r0x000108970498:
  ppuVar6 = (undefined **)ppuVar3[7];
code_r0x00010897049c:
  puVar7 = ppuVar3[9];
code_r0x0001089704a0:
  in_stack_00000048 = ppuVar6;
code_r0x0001089704a4:
  in_stack_00000058 = puVar7;
code_r0x0001089704a8:
  ppuVar6 = (undefined **)ppuVar6[1];
code_r0x0001089704ac:
  func_0x0001089718c8(ppuVar6,&stack0x00000030);
code_r0x0001089704b4:
  ppuVar6 = (undefined **)ppuVar3[10];
code_r0x0001089704b8:
  param_1 = &stack0x00000030;
  param_2 = &stack0x00000028;
  in_stack_00000060 = ppuVar6;
code_r0x0001089704c4:
  func_0x000108971548(param_1);
code_r0x0001089704c8:
  ppuVar6 = in_stack_00000048;
code_r0x0001089704cc:
  ppuVar6 = (undefined **)*ppuVar6;
code_r0x0001089704d0:
  param_1 = &stack0x00000030;
code_r0x0001089704d4:
  (*(code *)ppuVar6)();
  ppuVar6 = in_stack_00000028;
code_r0x0001089704dc:
  iVar4 = (int)param_2;
  if (ppuVar6 != (undefined **)0x0) {
code_r0x0001089704e0:
    func_0x000108971808();
    ppuVar6 = extraout_x8;
    goto code_r0x0001089704e4;
  }
LAB_1089704e8:
  if (in_stack_00000020 != 0) {
    func_0x000108971808();
    (*extraout_x8_00)();
  }
LAB_1089704f8:
  func_0x000108971480(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 == 0) {
    func_0x000108971660();
    FUN_108968f38(puVar8 + 6);
    func_0x000108971ed0();
  }
  func_0x000108971f4c();
  ppuVar2 = &puStack_40;
  pcStack_28 = FUN_108970584;
  puStack_40 = puVar8;
  ppuStack_38 = param_1;
  puStack_30 = &stack0xfffffffffffffff0;
  func_0x000108971834();
  param_2 = (undefined8 *)0x80;
  unaff_x29 = puStack_30;
  unaff_x30 = pcStack_28;
  goto FUN_10896881c;
code_r0x0001089704e4:
  iVar4 = (int)param_2;
  (*(code *)ppuVar6)();
  goto LAB_1089704e8;
code_r0x00010897031c:
  ppuVar3 = (undefined **)((long)param_1 + (long)ppuVar6);
code_r0x000108970320:
  FUN_10896ec44(ppuVar3);
code_r0x000108970324:
  ppuVar3 = (undefined **)((long)param_1 + (long)puVar8);
code_r0x000108970328:
  FUN_10896ec44(ppuVar3);
code_r0x00010897032c:
  func_0x000108971d20();
code_r0x000108970334:
  param_2 = (undefined8 *)0x108;
code_r0x000108970338:
FUN_10896881c:
  uVar1 = (ulong)*ppuVar2;
  puVar7 = (undefined *)ppuVar2[1];
  *ppuVar2 = (undefined8 *)uVar1;
  ppuVar2[1] = (undefined8 *)puVar7;
  ppuVar2[2] = (undefined8 *)unaff_x29;
  ppuVar2[3] = (undefined8 *)unaff_x30;
  func_0x0001089717c8(param_1,param_2);
  func_0x00010bd42e30();
  if ((uVar1 < 0x3fd) && (param_1 != (undefined **)0x0)) {
    if (param_1[2] == (undefined *)0x0) {
      lVar5 = 2;
    }
    else {
      if (param_1[3] != (undefined *)0x0) goto FUN_10894e15c;
      lVar5 = 3;
    }
    *puVar7 = puVar7[uVar1];
    param_1[lVar5] = puVar7;
    return;
  }
FUN_10894e15c:
  if (puVar7 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(puVar7 + -8));
    return;
  }
  return;
}



/* Entry: 108970340; end: 108970583;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_108970340(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 **ppuVar7;
  int iVar8;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *apuStack_d0 [4];
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  long lStack_a0;
  long alStack_98 [4];
  undefined8 *puStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000108971508();
  uVar2 = *(char *)(param_1 + 0x78) == '\x01';
  if ((bool)uVar2) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(long *)(param_1 + 0x40) = param_1 + 0x70;
  *(long *)(param_1 + 0x48) = param_1 + 0x60;
  *(long *)(param_1 + 0x50) = param_1 + 0x79;
  *(long *)(param_1 + 0x58) = param_1 + 0x10;
  *(undefined1 *)(param_1 + 0x78) = 1;
  uStack_58 = extraout_x8;
  func_0x0001089715f8();
  lVar9 = *extraout_x8_00;
  *extraout_x8_00 = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  uVar10 = **(undefined8 **)(param_1 + 0x40);
  puVar11 = *(undefined8 **)(lVar9 + 0x68);
  if (puVar11 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    puVar5 = (undefined8 *)*puVar11;
    if (puVar5 == (undefined8 *)0x0) {
LAB_1089703fc:
      lVar6 = lRam0000000113847398;
      _pthread_getspecific();
      puVar5 = (undefined8 *)0x0;
      if (lVar6 != 0) {
        puVar5 = *(undefined8 **)(lVar6 + 8);
      }
      param_2 = 0x20;
      func_0x000108972130();
    }
    else {
      func_0x000108971c6c();
      *puVar11 = 0;
      bVar3 = ((ulong)puVar5 & 7) == 0;
      uVar2 = 0x1f < param_2 && bVar3;
      if (0x1f >= param_2 || !bVar3) {
        if (puVar5 != (undefined8 *)0x0) {
          _pthread_getspecific();
          func_0x0001089720e0();
        }
        goto LAB_1089703fc;
      }
    }
    *puVar5 = &PTR_FUN_110aa00d8;
    puVar12 = puVar5 + 1;
    *puVar12 = 0;
    *(undefined4 *)(puVar5 + 2) = 0;
    puVar5[3] = param_2;
    alStack_98[1] = 0;
    *puVar11 = puVar5;
    alStack_98[2] = param_2;
    func_0x00010bd3f974(alStack_98 + 1);
  }
  apuStack_d0[3] = (undefined8 *)puVar1[1];
  apuStack_d0[2] = (undefined8 *)*puVar1;
  uStack_b0 = 0;
  uStack_a8 = 0;
  alStack_98[1] = 0;
  alStack_98[2] = 0;
  alStack_98[3] = 0;
  ppuVar7 = apuStack_d0;
  iVar8 = (int)alStack_98 + 8;
  apuStack_d0[0] = puVar12;
  apuStack_d0[1] = (undefined8 *)uVar10;
  lStack_a0 = lVar9;
  func_0x000108971c78();
  FUN_10896c364();
  lVar9 = lStack_a0;
  if (lStack_a0 != 0) {
    lStack_a0 = 0;
    alStack_98[0] = lVar9;
    puStack_78 = *(undefined8 **)(lVar9 + 0x38);
    uStack_68 = *(undefined8 *)(lVar9 + 0x48);
    func_0x0001089718c8(puStack_78[1],alStack_98 + 1);
    uStack_60 = *(undefined8 *)(lVar9 + 0x50);
    iVar8 = (int)alStack_98;
    func_0x000108971548(alStack_98 + 1);
    ppuVar7 = (undefined8 **)(alStack_98 + 1);
    (*(code *)*puStack_78)();
    if (alStack_98[0] != 0) {
      func_0x000108971808();
      (*extraout_x8_01)();
    }
    if (lStack_a0 != 0) {
      func_0x000108971808();
      (*extraout_x8_02)();
    }
  }
  func_0x000108971480(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  if (iVar8 == 0) {
    func_0x000108971660();
    FUN_108968f38(&lStack_a0);
    func_0x000108971ed0();
  }
  func_0x000108971f4c();
  func_0x000108971834();
  ppuVar4 = ppuVar7;
  func_0x0001089717c8(ppuVar7,0x80);
  func_0x00010bd42e30();
  if ((apuStack_d0 < (undefined8 **)0x3fd) && (ppuVar4 != (undefined8 **)0x0)) {
    if (ppuVar4[2] == (undefined8 *)0x0) {
      lVar9 = 2;
    }
    else {
      if (ppuVar4[3] != (undefined8 *)0x0) goto FUN_10894e15c;
      lVar9 = 3;
    }
    *(undefined1 *)ppuVar7 = *(undefined1 *)((long)ppuVar7 + (long)apuStack_d0);
    ppuVar4[lVar9] = ppuVar7;
    return;
  }
FUN_10894e15c:
  if (ppuVar7 != (undefined8 **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(ppuVar7[-1]);
    return;
  }
  return;
}



/* Entry: 108970584; end: 1089705a3;  */

void FUN_108970584(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  
  func_0x000108971834();
  puVar1 = unaff_x19;
  func_0x0001089717c8();
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (puVar1 != (undefined1 *)0x0)) {
    if (*(long *)(puVar1 + 0x10) == 0) {
      lVar2 = 2;
    }
    else {
      if (*(long *)(puVar1 + 0x18) != 0) goto FUN_10894e15c;
      lVar2 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    *(undefined1 **)(puVar1 + lVar2 * 8) = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
    return;
  }
  return;
}



/* Entry: 1089705a4; end: 10897099f;  */

void FUN_1089705a4(long param_1)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 extraout_w8;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  long *plVar9;
  undefined1 auStack_48 [24];
  
  func_0x000108972308();
  if (*(char *)(param_1 + 0x114) == '\x02') {
    lVar6 = unaff_x19 + 0x50;
    FUN_1089688b8();
    lVar8 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x300);
    lVar5 = *(long *)(*(long *)(unaff_x19 + 0x108) + 0x2f8);
    func_0x000108971d38();
    FUN_10896ecb8(unaff_x19 + 0x100);
    if (lVar6 != lVar8 - lVar5) {
      func_0x000108971bcc();
      func_0x000108971e80();
LAB_10897085c:
      func_0x000108971610();
LAB_1089708d4:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1089708d8);
      (*pcVar3)();
    }
    lVar6 = *(long *)(unaff_x19 + 0x108);
    plVar9 = *(long **)(lVar6 + 0x28);
    if (plVar9 != (long *)0x0) {
      if (*(char *)(unaff_x19 + 0x118) < '\0') {
        *(undefined ***)(unaff_x19 + 0x50) = &PTR_DAT_110cf6238;
        *(undefined8 *)(unaff_x19 + 0x58) = 0;
        *(undefined8 *)(unaff_x19 + 0x68) = 0;
        *(undefined8 *)(unaff_x19 + 0x60) = 0;
        *(undefined8 *)(unaff_x19 + 0x78) = 0;
        *(undefined8 *)(unaff_x19 + 0x70) = 0;
        *(undefined8 *)(unaff_x19 + 0x88) = 0;
        *(undefined8 *)(unaff_x19 + 0x80) = 0;
        *(undefined8 *)(unaff_x19 + 0x90) = 0;
        *(undefined8 *)(unaff_x19 + 0x98) = 0;
        *(undefined4 *)(unaff_x19 + 0xb0) = 1;
        *(undefined8 *)(unaff_x19 + 0xa0) = 0;
        *(undefined8 *)(unaff_x19 + 0xa8) = 0;
        uVar7 = unaff_x19 + 0x50;
        func_0x000107c3034c(uVar7,*(undefined8 *)(lVar6 + 0x2f8),
                            *(int *)(lVar6 + 0x300) - (int)*(undefined8 *)(lVar6 + 0x2f8));
        if ((uVar7 & 1) == 0) {
          func_0x000108971bcc();
          func_0x000108971e80();
          func_0x000108971610();
          goto LAB_1089708d4;
        }
        plVar9 = *(long **)(*(long *)(unaff_x19 + 0x108) + 0x28);
        (**(code **)(*plVar9 + 0x20))(plVar9,unaff_x19 + 0x50);
        func_0x00010b4fe36c(unaff_x19 + 0x50);
      }
      else {
        func_0x000108b866a4(unaff_x19 + 0xb8,*(long *)(lVar6 + 0x2f8),
                            *(long *)(lVar6 + 0x300) - *(long *)(lVar6 + 0x2f8),0);
        FUN_10895b428(unaff_x19 + 0x50,unaff_x19 + 0xb8,unaff_x19 + 0x30);
        func_0x000107c27914(unaff_x19 + 0xd0);
        (**(code **)(*plVar9 + 0x28))(plVar9,unaff_x19 + 0x50);
        func_0x000107c27914(unaff_x19 + 0x80);
      }
      uVar7 = (ulong)*(byte *)(unaff_x19 + 0x117);
      goto LAB_10897079c;
    }
LAB_1089707b8:
    *(undefined8 *)(unaff_x19 + 0x50) = unaff_x20;
    func_0x000108971a4c();
    *(undefined1 *)(unaff_x19 + 0x114) = extraout_w8;
    func_0x000108971758();
    if (extraout_x10 != 0) {
      func_0x000108971f28();
    }
    func_0x000108971930();
  }
  else {
    if (*(char *)(param_1 + 0x114) == '\x01') {
      lVar6 = unaff_x19 + 0x50;
      FUN_1089688b8();
      *(bool *)(unaff_x19 + 0x117) = lVar6 != 4;
      func_0x000108971d38();
      FUN_10896ecb8(unaff_x19 + 0xf8);
      if (lVar6 != 4) {
        func_0x000108971bcc();
        func_0x000108971e80();
        func_0x000108971610();
        goto LAB_1089708d4;
      }
      bVar1 = *(byte *)(unaff_x19 + 0x110);
      *(byte *)(unaff_x19 + 0x118) = bVar1;
      *(byte *)(unaff_x19 + 0x110) = bVar1 & 0x7f;
      uVar2 = (uint)(bVar1 & 0x7f) << 0x18 | (uint)*(byte *)(unaff_x19 + 0x111) << 0x10 |
              (uint)*(byte *)(unaff_x19 + 0x112) << 8 | (uint)*(byte *)(unaff_x19 + 0x113);
      if (uVar2 == 0) {
        func_0x000108971bcc();
        func_0x000108971e80();
        goto LAB_10897085c;
      }
      if (((char)bVar1 < '\0') && (800000 < uVar2)) {
        *(ulong *)(unaff_x19 + 0x40) = (ulong)uVar2;
        *(undefined8 *)(unaff_x19 + 0x48) = 0;
        func_0x000107c2793c(&UNK_10f4ed7d1);
        func_0x000107c3173c(auStack_48);
        FUN_108968904(auStack_48);
        goto LAB_1089708d4;
      }
      if ((-1 < (char)bVar1) && (0x800 < uVar2)) {
        *(ulong *)(unaff_x19 + 0x30) = (ulong)uVar2;
        *(undefined8 *)(unaff_x19 + 0x38) = 0;
        func_0x000107c2793c(&UNK_10f4ed7f9);
        func_0x000107c3173c(auStack_48);
        FUN_108968904(auStack_48);
        goto LAB_1089708d4;
      }
      func_0x000107c2823c(*(long *)(unaff_x19 + 0x108) + 0x2f8);
      lVar8 = *(long *)(unaff_x19 + 0x108);
      lVar5 = *(long *)(lVar8 + 0x300) - *(long *)(lVar8 + 0x2f8);
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = *(long *)(lVar8 + 0x2f8);
      }
      FUN_10896c308(unaff_x19 + 0x100,lVar8 + 0xe8,lVar6,lVar5);
      func_0x000108971b34();
      FUN_108968880(unaff_x19 + 0x50);
      uVar4 = 2;
    }
    else {
      uVar7 = unaff_x19 + 0x110;
      *(ulong *)(unaff_x19 + 0xe8) = uVar7;
      *(undefined8 *)(unaff_x19 + 0xf0) = 4;
LAB_10897079c:
      *(undefined1 *)(unaff_x19 + 0x116) = 0;
      *(byte *)(unaff_x19 + 0x115) = (byte)uVar7 & 1;
      if (*(int *)(*(long *)(unaff_x19 + 0x108) + 0x260) == 3) goto LAB_1089707b8;
      *(undefined4 *)(unaff_x19 + 0x110) = 0;
      FUN_10896c308(unaff_x19 + 0xf8,*(long *)(unaff_x19 + 0x108) + 0xe8,
                    *(undefined8 *)(unaff_x19 + 0xe8),*(undefined8 *)(unaff_x19 + 0xf0));
      func_0x000108971b34();
      FUN_108968880(unaff_x19 + 0x50);
      uVar4 = 1;
    }
    *(undefined1 *)(unaff_x19 + 0x114) = uVar4;
    func_0x0001089714d8(*(undefined8 *)(unaff_x19 + 0x50));
  }
  return;
}



/* Entry: 1089709a0; end: 1089709ff;  */

void FUN_1089709a0(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  undefined1 extraout_w8;
  ulong uVar5;
  code *extraout_x8;
  long extraout_x10;
  long lVar6;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  ulong uVar7;
  long unaff_x21;
  int unaff_w22;
  undefined8 uVar8;
  
  bVar4 = *(byte *)(param_1 + 0x114);
  uVar5 = (ulong)bVar4;
  uVar2 = 0;
  uVar3 = 0;
  lVar6 = (ulong)(byte)(&UNK_10df78f50)[uVar5] * 4 + 0x1089709cc;
  lVar1 = param_1;
  uVar7 = unaff_x20;
  switch(bVar4) {
  case 0:
  case 3:
    goto code_r0x0001089709ec;
  case 1:
  case 6:
  case 9:
  case 0x29:
  case 0x66:
  case 0x96:
    uVar7 = param_1 + 0xf8;
  case 5:
    *(undefined1 *)(param_1 + 0x117) = *(undefined1 *)(param_1 + 0x115);
code_r0x0001089709d8:
    break;
  case 2:
    uVar7 = param_1 + 0x100;
    break;
  case 4:
  case 7:
    break;
  case 8:
  case 0xb:
    goto code_r0x00010896881c;
  case 10:
    goto code_r0x0001089709d8;
  case 0xc:
  case 0x1c:
  case 0x1f:
  case 0x57:
  case 0x5a:
    goto code_r0x000108970b1c;
  case 0xd:
  case 0xf9:
    goto code_r0x000108970afc;
  case 0xe:
    goto LAB_108970b24;
  case 0x10:
  case 0x2a:
  case 0x4b:
  case 0x67:
  case 0x97:
  case 0xc1:
  case 0xdf:
  case 0xfa:
    goto code_r0x000108970b04;
  case 0x11:
  case 0x2d:
  case 0x32:
  case 0x4c:
    goto code_r0x000108970a98;
  default:
    goto code_r0x000108970b50;
  case 0x13:
  case 0x3f:
  case 0x4e:
  case 0x74:
  case 0x8c:
  case 0xa4:
  case 0xbc:
    goto code_r0x000108970b5c;
  case 0x14:
  case 0x1d:
  case 0x37:
  case 0x4f:
  case 0x58:
  case 0x79:
  case 0x81:
  case 0x82:
  case 0x8d:
  case 0xa9:
  case 0xb1:
  case 0xb2:
  case 0xbd:
  case 0xcc:
  case 0xcd:
  case 0xdd:
  case 0xea:
  case 0xeb:
  case 0xf4:
    goto code_r0x000108970b7c;
  case 0x15:
  case 0x50:
  case 0x6e:
  case 0x9e:
  case 0xd9:
    goto code_r0x000108970a9c;
  case 0x16:
  case 0x51:
  case 0x7c:
  case 0x7f:
  case 0xac:
  case 0xaf:
  case 199:
  case 0xca:
  case 0xe5:
  case 0xe8:
    goto code_r0x000108970b58;
  case 0x17:
  case 0x25:
  case 0x43:
  case 0x52:
  case 0x60:
  case 0x6a:
  case 0x6b:
  case 0x72:
  case 0x86:
  case 0x9a:
  case 0x9b:
  case 0xa2:
  case 0xb6:
  case 0xd1:
  case 0xef:
    goto code_r0x000108970b88;
  case 0x18:
  case 0x19:
  case 0x44:
  case 0x53:
  case 0x54:
  case 0xdb:
    goto LAB_108970b80;
  case 0x1b:
  case 0x31:
  case 0x56:
  case 0x7a:
  case 0xaa:
    goto code_r0x000108970a94;
  case 0x1e:
  case 0x23:
  case 0x3a:
  case 0x49:
  case 0x59:
  case 0x5e:
  case 0x6c:
  case 0x70:
  case 0x93:
  case 0x9c:
  case 0xa0:
  case 0xd4:
    goto code_r0x000108970b98;
  case 0x20:
  case 0x26:
  case 0x3d:
  case 0x42:
  case 0x5b:
  case 0x61:
  case 0x8f:
  case 0xbf:
  case 0xf7:
    func_0x000108971f6c();
code_r0x000108970b98:
    lVar1 = param_1 + 0xe0;
    FUN_10896ec44();
code_r0x000108970be0:
    if (unaff_w22 == 4) {
      lVar1 = *(long *)(param_1 + 0xe8);
      func_0x00010897185c();
      if (*(int *)(lVar1 + 0x260) == 3) {
        func_0x00010897181c(&stack0x00000000);
        func_0x00010894fa8c(&stack0xffffffffffffffe0,&stack0x00000000);
        if ((uVar2 & 1) == 0) goto code_r0x000108970c24;
      }
      else {
code_r0x000108970c24:
        FUN_108969584(&stack0x00000018,2,0);
        func_0x00010894fa8c(&stack0xffffffffffffffe0,&stack0x00000018);
        if ((uVar3 & 1) == 0) {
          FUN_108968710(&stack0x00000018,&stack0xffffffffffffffe0,&UNK_10f4ed791,0xf);
          func_0x000108971f18(*(undefined8 *)(param_1 + 0xe8));
          func_0x0001089718c0();
        }
      }
      ___cxa_end_catch();
      goto code_r0x000108970af0;
    }
    if (unaff_w22 == 3) {
      uVar8 = *(undefined8 *)(param_1 + 0xe8);
      func_0x00010897185c();
      FUN_1089686dc(uVar8,lVar1);
      ___cxa_end_catch();
      goto code_r0x000108970af0;
    }
    if (unaff_w22 == 2) {
      func_0x00010897185c();
      func_0x000108971c60();
      func_0x000108972154();
      func_0x000108971f18(*(undefined8 *)(param_1 + 0xe8));
      func_0x0001089718c0();
      ___cxa_end_catch();
      goto code_r0x000108970af0;
    }
    func_0x0001089720c4();
    func_0x00010897185c();
    func_0x000108971b8c();
    ___cxa_end_catch();
    goto LAB_108970b0c;
  case 0x22:
  case 0x34:
  case 0x5d:
  case 0x7e:
  case 0x87:
  case 0x8b:
  case 0xae:
  case 0xb7:
  case 0xbb:
  case 0xc9:
  case 0xd2:
  case 0xe7:
  case 0xf0:
    goto code_r0x000108970b84;
  case 0x24:
  case 0x5f:
  case 0xdc:
    goto code_r0x000108970b8c;
  case 0x27:
  case 0x2c:
  case 0x46:
  case 0x62:
  case 0x6d:
  case 0x76:
  case 0x84:
  case 0x9d:
  case 0xa6:
  case 0xb4:
  case 0xcf:
  case 0xd5:
  case 0xd7:
  case 0xed:
  case 0xf5:
    lVar1 = param_1;
    func_0x000108971f6c();
    goto code_r0x000108970be0;
  case 0x28:
  case 99:
  case 100:
  case 0x65:
  case 0x95:
    func_0x000108971e24();
    func_0x000108971870();
    FUN_10896ec44(param_1 + 0xe0);
  case 0x4a:
  case 0xc0:
  case 0xde:
  case 0xf8:
code_r0x000108970af0:
    FUN_10896842c(*(undefined8 *)(param_1 + 0xe8));
    unaff_x21 = 0;
code_r0x000108970afc:
    func_0x0001089720c4();
    if ((int)unaff_x21 == 0) {
LAB_108970b0c:
      *(ulong *)(param_1 + 0xa8) = unaff_x20;
      func_0x000108971a4c();
      *(undefined1 *)(param_1 + 0xf0) = extraout_w8;
code_r0x000108970b18:
      func_0x000108971758();
      lVar6 = extraout_x10;
code_r0x000108970b1c:
      if (lVar6 != 0) {
        func_0x000108971f28();
      }
LAB_108970b24:
      func_0x000108971930();
    }
    else {
code_r0x000108970b04:
      if ((int)unaff_x21 == 3) goto LAB_108970b0c;
LAB_108970b80:
      func_0x000108971d20();
code_r0x000108970b84:
code_r0x000108970b88:
      param_2 = 0xf8;
code_r0x000108970b8c:
      FUN_10896881c(param_1,param_2);
    }
    goto LAB_108970b70;
  case 0x2b:
  case 0xc2:
  case 0xe0:
  case 0xfb:
    goto code_r0x000108970b18;
  case 0x2e:
  case 0x2f:
  case 0x39:
  case 0x40:
  case 0x45:
  case 0x88:
  case 0x90:
  case 0xb8:
  case 0xc4:
  case 0xd3:
  case 0xe2:
  case 0xf1:
  case 0xfd:
    FUN_108968658(param_1 + 0xd8);
    goto code_r0x000108970b50;
  case 0x33:
  case 0x38:
  case 0x3e:
  case 0x75:
  case 0x80:
  case 0x8e:
  case 0x94:
  case 0xa5:
  case 0xb0:
  case 0xbe:
  case 0xcb:
  case 0xd8:
  case 0xe9:
  case 0xf6:
    goto code_r0x000108970b60;
  case 0x36:
  case 0x69:
  case 0x91:
  case 0x99:
    goto code_r0x000108970b54;
  case 0x3b:
  case 0x47:
  case 0x89:
  case 0xb9:
    goto code_r0x000108970b6c;
  case 0x41:
  case 0xf2:
    goto LAB_108970b64;
  case 0x48:
  case 0x71:
  case 0x78:
  case 0x85:
  case 0xa1:
  case 0xa8:
  case 0xb5:
  case 0xd0:
  case 0xda:
  case 0xee:
  case 0xf3:
    goto LAB_108970b70;
  case 0x68:
  case 0x7b:
  case 0x98:
    goto code_r0x000108970aa0;
  case 0x73:
  case 0xa3:
    goto LAB_108970aa4;
  case 0xab:
  case 0xc3:
  case 0xe1:
  case 0xfc:
    func_0x000107c27914();
  case 0xf:
  case 0x1a:
  case 0x30:
  case 0x55:
  case 0xc5:
  case 0xe3:
  case 0xfe:
    lVar1 = *(long *)(unaff_x21 + 600);
code_r0x000108970a94:
    uVar5 = (ulong)*(byte *)(lVar1 + 0x10);
code_r0x000108970a98:
    if ((uVar5 & 1) == 0) {
code_r0x000108970a9c:
      bVar4 = 1;
code_r0x000108970aa0:
      *(byte *)(lVar1 + 0x10) = bVar4;
    }
LAB_108970aa4:
    uVar5 = 0xf200;
code_r0x000108970aa8:
    uVar5 = uVar5 | 0x2a050000;
code_r0x000108970aac:
    uVar5 = uVar5 | 0x100000000;
code_r0x000108970ab0:
    *(ulong *)(lVar1 + 8) = uVar5;
    func_0x000108971de8();
    (*extraout_x8)();
    FUN_1089687a8(param_1 + 0xe0,*(undefined8 *)(param_1 + 0xe8));
    func_0x000108971b34();
    FUN_108968620(param_1 + 0x30);
    bVar4 = 2;
LAB_108970b64:
    *(byte *)(param_1 + 0xf0) = bVar4;
    uVar5 = *(ulong *)(param_1 + 0x30);
code_r0x000108970b6c:
    func_0x0001089714d8(uVar5);
LAB_108970b70:
code_r0x000108970b7c:
    return;
  case 0xc6:
    goto code_r0x000108970aac;
  case 0xe4:
    goto code_r0x000108970ab0;
  case 0xff:
    goto code_r0x000108970aa8;
  }
  func_0x000108971d38();
  FUN_10896ecb8(uVar7);
code_r0x0001089709ec:
  func_0x000108971d20();
code_r0x00010896881c:
  func_0x0001089717c8(param_1,0x120);
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (param_1 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = 2;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 0) goto FUN_10894e15c;
      lVar1 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    *(undefined1 **)(param_1 + lVar1 * 8) = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
    return;
  }
  return;
code_r0x000108970b50:
  func_0x000108971b34();
code_r0x000108970b54:
  lVar1 = param_1 + 0x30;
code_r0x000108970b58:
code_r0x000108970b5c:
  FUN_108968620(lVar1);
code_r0x000108970b60:
  bVar4 = 1;
  goto LAB_108970b64;
}



/* Entry: 108970a00; end: 108970de7;  */

/* WARNING: Removing unreachable block (ram,0x000108970b04) */
/* WARNING: Removing unreachable block (ram,0x000108970b80) */

void FUN_108970a00(long param_1)

{
  undefined1 extraout_w8;
  undefined1 uVar1;
  code *extraout_x8;
  long extraout_x10;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  
  func_0x000108972308();
  if (*(char *)(param_1 + 0xf0) == '\x02') {
    func_0x000108971e24();
    func_0x000108971870();
    FUN_10896ec44(unaff_x19 + 0xe0);
    FUN_10896842c(*(undefined8 *)(unaff_x19 + 0xe8));
    func_0x0001089720c4();
    *(undefined8 *)(unaff_x19 + 0xa8) = unaff_x20;
    func_0x000108971a4c();
    *(undefined1 *)(unaff_x19 + 0xf0) = extraout_w8;
    func_0x000108971758();
    if (extraout_x10 != 0) {
      func_0x000108971f28();
    }
    func_0x000108971930();
  }
  else {
    if (*(char *)(param_1 + 0xf0) == '\x01') {
      func_0x000108971e24();
      func_0x000108971870();
      FUN_10896ec44(unaff_x19 + 0xd8);
      func_0x000108b866a4(unaff_x19 + 0x78,&UNK_10df78f5c,4,0);
      FUN_10895b428(unaff_x19 + 0x30,unaff_x19 + 0x78,unaff_x19 + 0xf1);
      lVar2 = *(long *)(unaff_x19 + 0xe8);
      lVar3 = unaff_x19 + 0x90;
      func_0x000107c27914(lVar3);
      __ZNSt3__16chrono12steady_clock3nowEv();
      FUN_108966b18(lVar2 + 0x2a0,unaff_x19 + 0x30,lVar3);
      lVar3 = *(long *)(unaff_x19 + 0xe8);
      func_0x000107c27914(unaff_x19 + 0x60);
      lVar3 = *(long *)(lVar3 + 600);
      if ((*(byte *)(lVar3 + 0x10) & 1) == 0) {
        *(undefined1 *)(lVar3 + 0x10) = 1;
      }
      *(undefined8 *)(lVar3 + 8) = 5000000000;
      func_0x000108971de8();
      (*extraout_x8)();
      FUN_1089687a8(unaff_x19 + 0xe0,*(undefined8 *)(unaff_x19 + 0xe8));
      func_0x000108971b34();
      FUN_108968620(unaff_x19 + 0x30);
      uVar1 = 2;
    }
    else {
      *(code **)(unaff_x19 + 0xa8) = FUN_10896eca4;
      *(undefined ***)(unaff_x19 + 0xb0) = &PTR_DAT_110aa0200;
      *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x19 + 0xe8);
      FUN_108968658(unaff_x19 + 0xd8);
      func_0x000108971b34();
      FUN_108968620(unaff_x19 + 0x30);
      uVar1 = 1;
    }
    *(undefined1 *)(unaff_x19 + 0xf0) = uVar1;
    func_0x0001089714d8(*(undefined8 *)(unaff_x19 + 0x30));
  }
  return;
}



/* Entry: 108970de8; end: 108970e8b;  */

/* WARNING: Possible PIC construction at 0x000108968ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108969000) */
/* WARNING: Removing unreachable block (ram,0x000108969050) */
/* WARNING: Removing unreachable block (ram,0x00010896903c) */
/* WARNING: Removing unreachable block (ram,0x0001089690ac) */
/* WARNING: Removing unreachable block (ram,0x0001089690d4) */
/* WARNING: Removing unreachable block (ram,0x0001089690f4) */
/* WARNING: Removing unreachable block (ram,0x00010896910c) */
/* WARNING: Removing unreachable block (ram,0x000108969118) */
/* WARNING: Removing unreachable block (ram,0x000108969174) */
/* WARNING: Removing unreachable block (ram,0x00010896917c) */
/* WARNING: Removing unreachable block (ram,0x000108971f34) */
/* WARNING: Removing unreachable block (ram,0x00010896916c) */
/* WARNING: Removing unreachable block (ram,0x0001089715dc) */
/* WARNING: Removing unreachable block (ram,0x0001089690c8) */
/* WARNING: Removing unreachable block (ram,0x000108971d18) */

void FUN_108970de8(ulong *param_1,code *param_2)

{
  ulong **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong **ppuVar5;
  undefined1 in_ZR;
  ulong *puVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 extraout_w8;
  ulong *puVar9;
  code *pcVar10;
  ulong uVar11;
  undefined *puVar12;
  long extraout_x10;
  long extraout_x10_00;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  long lVar13;
  long unaff_x22;
  long unaff_x23;
  undefined1 *unaff_x29;
  undefined1 *puVar14;
  code *unaff_x30;
  ulong *puStack_50;
  ulong *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  ppuVar1 = (ulong **)&stack0xffffffffffffffd0;
  bVar7 = (byte)param_1[0x1e];
  puVar9 = (ulong *)(ulong)bVar7;
  lVar13 = 0xd8;
  puVar2 = &stack0xffffffffffffffd0;
  puVar3 = &stack0xffffffffffffffd0;
  puVar4 = &stack0xffffffffffffffd0;
  ppuVar5 = (ulong **)&stack0xffffffffffffffd0;
  puVar6 = param_1;
  puVar14 = &stack0xfffffffffffffff0;
  switch(bVar7) {
  case 2:
  case 5:
  case 0x25:
  case 0x62:
  case 0x92:
    lVar13 = 0xe0;
  case 1:
    func_0x000108971870();
    puVar6 = (ulong *)((long)param_1 + lVar13);
  case 6:
    FUN_10896ec44(puVar6);
    func_0x0001089720c4();
  case 0:
  case 3:
    func_0x000108971d20();
    param_2 = (code *)0xf8;
    puVar14 = unaff_x29;
  case 4:
  case 7:
    goto FUN_10896881c;
  case 0x24:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x91:
    param_1[6] = (ulong)(param_1 + 2);
    *param_1 = 0;
    *(undefined1 *)(param_1 + 9) = 2;
    func_0x000108971758();
    if (extraout_x10 != 0) {
      func_0x000108971f28();
    }
    func_0x000108971930();
    return;
  case 0x2a:
  case 0x2b:
  case 0x35:
  case 0x3c:
  case 0x41:
  case 0x84:
  case 0x8c:
  case 0xb4:
  case 0xc0:
  case 0xcf:
  case 0xde:
  case 0xed:
  case 0xf9:
    puStack_48 = puVar9;
  default:
    puVar9 = (ulong *)(ulong)(byte)param_1[0x51];
  case 0x32:
  case 0x65:
  case 0x8d:
  case 0x95:
    in_ZR = (int)puVar9 == 2;
  case 0x12:
  case 0x4d:
  case 0x78:
  case 0x7b:
  case 0xa8:
  case 0xab:
  case 0xc3:
  case 0xc6:
  case 0xe1:
  case 0xe4:
  case 0xfc:
  case 0xff:
    if ((bool)in_ZR) {
      FUN_108968698(param_1 + 0x11);
      func_0x000108971bbc();
      func_0x00010897221c();
      in_ZR = *(char *)(*(long *)param_1[3] + 0x71) == '\x01';
      if ((bool)in_ZR) {
        func_0x00010bd3f528(&stack0x00000030,param_1 + 0x3b);
        func_0x000108971fec();
        func_0x00010897211c();
        func_0x000108971968();
        func_0x000108971814(param_1 + 0x11,&stack0xfffffffffffffff8);
        func_0x00010bd3f54c(param_1 + 0x26,param_1 + 0x11);
        func_0x00010bd43af0(param_1 + 0x11);
        func_0x000108971fcc();
        pcVar10 = *(code **)(param_1[0x2b] + 0x18);
        if (pcVar10 == (code *)0x0) {
          pcVar10 = *(code **)(param_1[0x2b] + 0x10);
          puVar6 = param_1 + 0x4b;
          __ZNSt13exception_ptrC1ERKS_(puVar6,unaff_x23 + 8);
          param_1[0x45] = (ulong)&stack0xffffffffffffffe7;
          func_0x00010bd42e30();
          func_0x0001089717dc();
          param_1[0x47] = 0;
          __ZNSt13exception_ptrC1ERKS_(puVar6 + 2,param_1 + 0x4b);
          *puVar6 = (ulong)FUN_108969294;
          param_1[0x46] = 0;
          FUN_108969270(param_1 + 0x45);
          param_2 = (code *)&stack0xffffffffffffffd8;
          (*pcVar10)(param_1 + 0x26);
          func_0x000108971ed8();
          __ZNSt13exception_ptrD1Ev(param_1 + 0x4b);
        }
        else {
          param_2 = FUN_108969250;
          (*pcVar10)(param_1 + 0x26,FUN_108969250,&stack0xffffffffffffffe8);
        }
        func_0x000108971fc4();
        puVar6 = param_1 + 0x26;
      }
      else {
        func_0x00010bd3f528(&stack0x00000030,param_1 + 0x3b);
        func_0x000108971fec();
        func_0x00010897211c();
        func_0x00010bd3f57c(param_1 + 0x1f,&stack0xfffffffffffffff8,&UNK_10df7906e,0);
        FUN_10896911c(param_1 + 0x18,param_1 + 0x1f);
        func_0x000108971fcc();
        pcVar10 = *(code **)(param_1[0x1d] + 0x18);
        if (pcVar10 == (code *)0x0) {
          pcVar10 = *(code **)(param_1[0x1d] + 0x10);
          puVar6 = param_1 + 0x49;
          __ZNSt13exception_ptrC1ERKS_(puVar6,unaff_x23 + 8);
          param_1[0x42] = (ulong)&stack0xffffffffffffffe7;
          func_0x00010bd42e30();
          func_0x0001089717dc();
          param_1[0x44] = 0;
          __ZNSt13exception_ptrC1ERKS_(puVar6 + 2,param_1 + 0x49);
          *puVar6 = (ulong)FUN_10896937c;
          param_1[0x43] = 0;
          FUN_108969358(param_1 + 0x42);
          param_2 = (code *)&stack0xffffffffffffffd8;
          (*pcVar10)(param_1 + 0x18);
          func_0x000108971ed8();
          __ZNSt13exception_ptrD1Ev(param_1 + 0x49);
        }
        else {
          param_2 = FUN_108969338;
          (*pcVar10)(param_1 + 0x18,FUN_108969338,&stack0xffffffffffffffe8);
        }
        func_0x000108971fc4();
        func_0x00010bd43af0(param_1 + 0x18);
        puVar6 = param_1 + 0x1f;
      }
      func_0x00010bd43af0(puVar6);
      func_0x00010bd43af0(&stack0xfffffffffffffff8);
      __ZNSt13exception_ptrD1Ev(unaff_x22 + 8);
      func_0x000108971f64();
      func_0x00010897220c();
      puVar6 = param_1 + 0x3b;
      func_0x00010bd43af0();
      func_0x000108972214();
      goto LAB_108971248;
    }
  case 0xf:
  case 0x3b:
  case 0x4a:
  case 0x70:
  case 0x88:
  case 0xa0:
  case 0xb8:
    in_ZR = (int)puVar9 == 1;
  case 0x2f:
  case 0x34:
  case 0x3a:
  case 0x71:
  case 0x7c:
  case 0x8a:
  case 0x90:
  case 0xa1:
  case 0xac:
  case 0xba:
  case 199:
  case 0xd4:
  case 0xe5:
  case 0xf2:
    if ((bool)in_ZR) {
code_r0x000108970fb8:
      FUN_108968698(param_1 + 0x11);
      goto code_r0x000108970fc0;
    }
    func_0x000108968ca8(param_1 + 0x34,param_1 + 0x2d);
    func_0x00010bd3f528(&stack0x00000030,param_1 + 0x2d);
    param_2 = (code *)&stack0x00000030;
    func_0x000108968ca8(param_1 + 0x3b);
    func_0x000108971f64();
    func_0x000108968ce0(param_1 + 0x4e);
    func_0x000108971b34();
    puVar6 = param_1 + 0x11;
    FUN_108968620();
    uVar8 = 1;
LAB_1089710c4:
    *(undefined1 *)(param_1 + 0x51) = uVar8;
    func_0x0001089714d8(param_1[0x11]);
    while( true ) {
      func_0x000108971480(puStack_48);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      if ((int)param_2 == 0) break;
      func_0x000108971ed8();
      __ZNSt13exception_ptrD1Ev(param_1 + 0x49);
      func_0x000108971fc4();
      func_0x00010bd43af0(param_1 + 0x18);
      func_0x00010bd43af0(param_1 + 0x1f);
      func_0x00010bd43af0(&stack0xfffffffffffffff8);
      __ZNSt13exception_ptrD1Ev(unaff_x22 + 8);
      func_0x000108971f64();
      func_0x00010897220c();
      puVar6 = param_1 + 0x3b;
      func_0x00010bd43af0();
      func_0x000108972214();
      func_0x00010897185c();
      func_0x000108971b8c();
      ___cxa_end_catch();
LAB_108971248:
      param_1[0x34] = (ulong)(param_1 + 2);
      func_0x000108971a4c();
      *(undefined1 *)(param_1 + 0x51) = extraout_w8;
      func_0x000108971758();
      if (extraout_x10_00 != 0) {
        func_0x000108971f28();
      }
      func_0x000108971930();
    }
    break;
  case 0x37:
  case 0x43:
  case 0x85:
  case 0xb5:
code_r0x000108970fc0:
    func_0x000108971bbc();
  case 0x44:
  case 0x6d:
  case 0x74:
  case 0x81:
  case 0x9d:
  case 0xa4:
  case 0xb1:
  case 0xcc:
  case 0xd6:
  case 0xea:
  case 0xef:
    func_0x00010897218c();
    puVar9 = *(ulong **)param_1[3];
  case 0x10:
  case 0x19:
  case 0x33:
  case 0x4b:
  case 0x54:
  case 0x75:
  case 0x7d:
  case 0x7e:
  case 0x89:
  case 0xa5:
  case 0xad:
  case 0xae:
  case 0xb9:
  case 200:
  case 0xc9:
  case 0xd9:
  case 0xe6:
  case 0xe7:
  case 0xf0:
    *(undefined1 *)((long)puVar9 + 0x71) = 0;
  case 0x14:
  case 0x15:
  case 0x40:
  case 0x4f:
  case 0x50:
  case 0xd7:
    param_1[0x4f] = 0;
  case 0x1e:
  case 0x30:
  case 0x59:
  case 0x7a:
  case 0x83:
  case 0x87:
  case 0xaa:
  case 0xb3:
  case 0xb7:
  case 0xc5:
  case 0xce:
  case 0xe3:
  case 0xec:
  case 0xfe:
    puVar9 = param_1 + 0x50;
  case 0x13:
  case 0x21:
  case 0x3f:
  case 0x4e:
  case 0x5c:
  case 0x66:
  case 0x67:
  case 0x6e:
  case 0x82:
  case 0x96:
  case 0x97:
  case 0x9e:
  case 0xb2:
  case 0xcd:
  case 0xeb:
    puVar6 = param_1 + 0x4c;
  case 0x20:
  case 0x5b:
  case 0xd8:
    func_0x000108968c68(puVar9,puVar6);
    func_0x000108971b34();
  case 0x1c:
  case 0x22:
  case 0x39:
  case 0x3e:
  case 0x57:
  case 0x5d:
  case 0x8b:
  case 0xbb:
  case 0xf3:
    puVar6 = param_1 + 0x11;
  case 0x1a:
  case 0x1f:
  case 0x36:
  case 0x45:
  case 0x55:
  case 0x5a:
  case 0x68:
  case 0x6c:
  case 0x8f:
  case 0x98:
  case 0x9c:
  case 0xd0:
  case 0x23:
  case 0x28:
  case 0x42:
  case 0x5e:
  case 0x69:
  case 0x72:
  case 0x80:
  case 0x99:
  case 0xa2:
  case 0xb0:
  case 0xcb:
  case 0xd1:
  case 0xd3:
  case 0xe9:
  case 0xf1:
    FUN_108968620();
    uVar8 = 2;
    goto LAB_1089710c4;
  case 0x3d:
  case 0xee:
    goto code_r0x000108970fb8;
  case 0x46:
  case 0xbc:
  case 0xda:
  case 0xf4:
    __Unwind_Resume();
    ppuVar1 = &puStack_50;
    pcStack_38 = FUN_108970f48;
    puStack_50 = param_1 + 2;
    puStack_48 = param_1;
    puStack_40 = &stack0xfffffffffffffff0;
  case 9:
  case 0xf5:
    puVar2 = (undefined1 *)ppuVar1;
  case 0xc:
  case 0x26:
  case 0x47:
  case 99:
  case 0x93:
  case 0xbd:
  case 0xdb:
  case 0xf6:
    puVar3 = puVar2;
    if ((char)puVar6[9] == '\x01') {
      func_0x000108971870();
      func_0x000108972138();
    }
  case 0x27:
  case 0xbe:
  case 0xdc:
  case 0xf7:
    func_0x000108971d20();
    puVar4 = puVar3;
  case 8:
  case 0x18:
  case 0x1b:
  case 0x53:
  case 0x56:
    param_2 = (code *)0x50;
    ppuVar5 = (ulong **)puVar4;
  case 10:
    puVar14 = *(undefined1 **)((long)ppuVar5 + 0x10);
    unaff_x30 = *(code **)((long)ppuVar5 + 0x18);
    goto LAB_1089719ac;
  case 0xa7:
  case 0xbf:
  case 0xdd:
  case 0xf8:
    puVar9 = param_1 + 7;
  case 0xb:
  case 0x16:
  case 0x2c:
  case 0x51:
  case 0xc1:
  case 0xdf:
  case 0xfa:
    func_0x000108968524(puVar9);
  case 0x17:
  case 0x2d:
  case 0x52:
  case 0x76:
  case 0xa6:
    func_0x000108971b34();
  case 0xd:
  case 0x29:
  case 0x2e:
  case 0x48:
    puVar6 = param_1 + 6;
  case 0x11:
  case 0x4c:
  case 0x6a:
  case 0x9a:
  case 0xd5:
  case 100:
  case 0x77:
  case 0x94:
    FUN_108968620(puVar6);
  case 0x6f:
  case 0x9f:
    bVar7 = 1;
  case 0xfb:
    *(byte *)(param_1 + 9) = bVar7;
  case 0xc2:
    puVar9 = (ulong *)param_1[6];
  case 0xe0:
    func_0x0001089714d8(puVar9);
    return;
  }
  __Unwind_Resume();
  bVar7 = (byte)puVar6[0x51];
  uVar11 = (ulong)bVar7;
  ppuVar5 = &puStack_50;
  puStack_50 = param_1 + 2;
  puStack_48 = param_1;
  puStack_40 = &stack0xfffffffffffffff0;
  pcStack_38 = FUN_108971408;
  puVar12 = &UNK_10df78f58;
  switch(bVar7) {
  case 0:
  case 3:
    goto code_r0x000108971458;
  case 1:
  case 0x21:
  case 0x5e:
  case 0x8e:
    func_0x000108971bbc();
    func_0x00010897218c();
    break;
  case 2:
    func_0x000108971bbc();
    func_0x00010897221c();
    func_0x00010897220c();
    break;
  case 4:
  case 0x14:
  case 0x17:
  case 0x4f:
  case 0x52:
    return;
  case 5:
  case 0xf1:
    *puVar6 = uVar11;
    uVar11 = *(ulong *)(param_2 + 8);
  case 8:
  case 0x22:
  case 0x43:
  case 0x5f:
  case 0x8f:
  case 0xb9:
  case 0xd7:
  case 0xf2:
    puVar6[1] = uVar11;
    return;
  case 6:
    *puVar6 = (ulong)&UNK_10df78f58;
    puVar6[1] = uVar11 + 0x40;
    return;
  case 7:
  case 0x12:
  case 0x28:
  case 0x4d:
  case 0xbd:
  case 0xdb:
  case 0xf6:
    return;
  case 9:
  case 0x25:
  case 0x2a:
  case 0x44:
    return;
  default:
    return;
  case 0xb:
  case 0x37:
  case 0x46:
  case 0x6c:
  case 0x84:
  case 0x9c:
  case 0xb4:
    return;
  case 0xc:
  case 0x15:
  case 0x2f:
  case 0x47:
  case 0x50:
  case 0x71:
  case 0x79:
  case 0x7a:
  case 0x85:
  case 0xa1:
  case 0xa9:
  case 0xaa:
  case 0xb5:
  case 0xc4:
  case 0xc5:
  case 0xd5:
  case 0xe2:
  case 0xe3:
  case 0xec:
  case 0xfd:
  case 0xfe:
    return;
  case 0xd:
  case 0x48:
  case 0x66:
  case 0x96:
  case 0xd1:
    return;
  case 0xe:
  case 0x49:
  case 0x74:
  case 0x77:
  case 0xa4:
  case 0xa7:
  case 0xbf:
  case 0xc2:
  case 0xdd:
  case 0xe0:
  case 0xf8:
  case 0xfb:
    return;
  case 0xf:
  case 0x1d:
  case 0x3b:
  case 0x4a:
  case 0x58:
  case 0x62:
  case 99:
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0x93:
  case 0x9a:
  case 0xae:
  case 0xc9:
  case 0xe7:
    return;
  case 0x10:
  case 0x11:
  case 0x3c:
  case 0x4b:
  case 0x4c:
  case 0xd3:
    return;
  case 0x13:
  case 0x29:
  case 0x4e:
  case 0x72:
  case 0xa2:
    return;
  case 0x18:
  case 0x1e:
  case 0x35:
  case 0x3a:
  case 0x53:
  case 0x59:
  case 0x87:
  case 0xb7:
  case 0xef:
    puVar12 = (undefined *)0x31564c5409030009;
  case 0x16:
  case 0x1b:
  case 0x32:
  case 0x41:
  case 0x51:
  case 0x56:
  case 100:
  case 0x68:
  case 0x8b:
  case 0x94:
  case 0x98:
  case 0xcc:
    puVar12[0x71] = bVar7;
  case 0x1f:
  case 0x24:
  case 0x3e:
  case 0x5a:
  case 0x65:
  case 0x6e:
  case 0x7c:
  case 0x95:
  case 0x9e:
  case 0xac:
  case 199:
  case 0xcd:
  case 0xcf:
  case 0xe5:
  case 0xed:
    puVar6[3] = 0;
    return;
  case 0x1a:
  case 0x2c:
  case 0x55:
  case 0x76:
  case 0x7f:
  case 0x83:
  case 0xa6:
  case 0xaf:
  case 0xb3:
  case 0xc1:
  case 0xca:
  case 0xdf:
  case 0xe8:
  case 0xfa:
    return;
  case 0x1c:
  case 0x57:
  case 0xd4:
    return;
  case 0x20:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x8d:
  case 0x60:
  case 0x73:
  case 0x90:
  case 0x6b:
  case 0x9b:
    return;
  case 0x23:
  case 0xba:
  case 0xd8:
  case 0xf3:
    return;
  case 0x26:
  case 0x27:
  case 0x31:
  case 0x38:
  case 0x3d:
  case 0x80:
  case 0x88:
  case 0xb0:
  case 0xbc:
  case 0xcb:
  case 0xda:
  case 0xe9:
  case 0xf5:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____cxa_free_exception_110346bc8)();
    return;
  case 0x2b:
  case 0x30:
  case 0x36:
  case 0x6d:
  case 0x78:
  case 0x86:
  case 0x8c:
  case 0x9d:
  case 0xa8:
  case 0xb6:
  case 0xc3:
  case 0xd0:
  case 0xe1:
  case 0xee:
  case 0xfc:
    return;
  case 0x2e:
  case 0x61:
  case 0x89:
  case 0x91:
    return;
  case 0x33:
  case 0x3f:
  case 0x81:
  case 0xb1:
    return;
  case 0x39:
  case 0xea:
    return;
  case 0x40:
  case 0x69:
  case 0x70:
  case 0x7d:
  case 0x99:
  case 0xa0:
  case 0xad:
  case 200:
  case 0xd2:
  case 0xe6:
  case 0xeb:
    return;
  case 0x42:
  case 0xb8:
  case 0xd6:
  case 0xf0:
    return;
  case 0xa3:
  case 0xbb:
  case 0xd9:
  case 0xf4:
    return;
  case 0xbe:
    return;
  case 0xdc:
    return;
  case 0xf7:
    return;
  }
  func_0x00010bd43af0(puVar6 + 0x3b);
  func_0x000108972214();
code_r0x000108971458:
  func_0x000108969420(puVar6 + 2);
  FUN_10895c544(puVar6 + 0x4c);
  func_0x00010bd43af0(puVar6 + 0x2d);
  param_2 = (code *)0x290;
  puVar14 = puStack_40;
  unaff_x30 = pcStack_38;
LAB_1089719ac:
  register0x00000008 = (BADSPACEBASE *)(ppuVar5 + 4);
  unaff_x20 = (ulong)*ppuVar5;
  unaff_x19 = (undefined1 *)ppuVar5[1];
  param_1 = puVar6;
FUN_10896881c:
  *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined1 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = puVar14;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  func_0x0001089717c8(param_1,param_2);
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (param_1 != (ulong *)0x0)) {
    if (param_1[2] == 0) {
      lVar13 = 2;
    }
    else {
      if (param_1[3] != 0) goto FUN_10894e15c;
      lVar13 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    param_1[lVar13] = (ulong)unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 == (undefined1 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
  return;
}



/* Entry: 108970e8c; end: 108970f47;  */

void FUN_108970e8c(long param_1,undefined8 param_2)

{
  long extraout_x10;
  undefined8 *unaff_x19;
  undefined8 unaff_x20;
  
  func_0x000108972308();
  if (*(char *)(param_1 + 0x48) == '\0') {
    func_0x000108968524(unaff_x19 + 7,*(undefined8 *)unaff_x19[8]);
    func_0x000108971b34();
    FUN_108968620(unaff_x19 + 6,param_2,unaff_x19 + 7);
    *(undefined1 *)(unaff_x19 + 9) = 1;
    func_0x0001089714d8(unaff_x19[6]);
  }
  else {
    func_0x000108971e24();
    func_0x000108971870();
    func_0x000108972138();
    unaff_x19[6] = unaff_x20;
    *unaff_x19 = 0;
    *(undefined1 *)(unaff_x19 + 9) = 2;
    func_0x000108971758();
    if (extraout_x10 != 0) {
      func_0x000108971f28();
    }
    func_0x000108971930();
  }
  return;
}



/* Entry: 108970f48; end: 108970f7f;  */

void FUN_108970f48(long param_1)

{
  long lVar1;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    func_0x000108971870();
    func_0x000108972138();
  }
  func_0x000108971d20();
  func_0x0001089717c8(param_1,0x50);
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (param_1 != 0)) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = 2;
    }
    else {
      if (*(long *)(param_1 + 0x18) != 0) goto FUN_10894e15c;
      lVar1 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    *(undefined1 **)(param_1 + lVar1 * 8) = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 != (undefined1 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
    return;
  }
  return;
}



/* Entry: 108970f80; end: 108971407;  */

/* WARNING: Possible PIC construction at 0x000108968ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108969000) */
/* WARNING: Removing unreachable block (ram,0x000108969050) */
/* WARNING: Removing unreachable block (ram,0x00010896903c) */
/* WARNING: Removing unreachable block (ram,0x0001089690ac) */
/* WARNING: Removing unreachable block (ram,0x0001089690d4) */
/* WARNING: Removing unreachable block (ram,0x0001089690f4) */
/* WARNING: Removing unreachable block (ram,0x00010896910c) */
/* WARNING: Removing unreachable block (ram,0x000108969118) */
/* WARNING: Removing unreachable block (ram,0x000108969174) */
/* WARNING: Removing unreachable block (ram,0x00010896917c) */
/* WARNING: Removing unreachable block (ram,0x000108971f34) */
/* WARNING: Removing unreachable block (ram,0x00010896916c) */
/* WARNING: Removing unreachable block (ram,0x0001089715dc) */
/* WARNING: Removing unreachable block (ram,0x0001089690c8) */
/* WARNING: Removing unreachable block (ram,0x000108971d18) */

void FUN_108970f80(long param_1,code *param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 uVar6;
  undefined1 extraout_w8;
  long lVar7;
  undefined8 extraout_x8;
  code *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long extraout_x10;
  undefined1 *unaff_x19;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puStack_e8;
  undefined1 uStack_d9;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [56];
  undefined8 *apuStack_90 [9];
  undefined8 uStack_48;
  
  func_0x0001089714ac();
  uVar1 = param_1 + 0x10;
  uStack_48 = extraout_x8;
  if (*(char *)(param_1 + 0x288) == '\x02') {
    FUN_108968698(unaff_x19 + 0x88);
    func_0x000108971bbc();
    func_0x00010897221c();
    uVar3 = *(char *)(**(long **)(unaff_x19 + 0x18) + 0x71) == '\x01';
    if ((bool)uVar3) {
      func_0x00010bd3f528(apuStack_90,unaff_x19 + 0x1d8);
      func_0x000108971fec();
      func_0x00010897211c();
      func_0x000108971968();
      func_0x000108971814(unaff_x19 + 0x88,auStack_c8);
      func_0x00010bd3f54c(unaff_x19 + 0x130,unaff_x19 + 0x88);
      func_0x00010bd43af0(unaff_x19 + 0x88);
      func_0x000108971fcc();
      pcVar8 = *(code **)(*(long *)(unaff_x19 + 0x158) + 0x18);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = *(code **)(*(long *)(unaff_x19 + 0x158) + 0x10);
        puVar4 = (undefined8 *)(unaff_x19 + 600);
        __ZNSt13exception_ptrC1ERKS_(puVar4,unaff_x23 + 8);
        *(undefined1 **)(unaff_x19 + 0x228) = &uStack_d9;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        *(undefined8 *)(unaff_x19 + 0x238) = 0;
        __ZNSt13exception_ptrC1ERKS_(puVar4 + 2,unaff_x19 + 600);
        *puVar4 = FUN_108969294;
        *(undefined8 *)(unaff_x19 + 0x230) = 0;
        puStack_e8 = puVar4;
        FUN_108969270(unaff_x19 + 0x228);
        param_2 = (code *)&puStack_e8;
        (*pcVar8)(unaff_x19 + 0x130);
        func_0x000108971ed8();
        __ZNSt13exception_ptrD1Ev(unaff_x19 + 600);
      }
      else {
        param_2 = FUN_108969250;
        (*pcVar8)(unaff_x19 + 0x130,FUN_108969250,auStack_d8);
      }
      func_0x000108971fc4();
      puVar5 = unaff_x19 + 0x130;
    }
    else {
      func_0x00010bd3f528(apuStack_90,unaff_x19 + 0x1d8);
      func_0x000108971fec();
      func_0x00010897211c();
      func_0x00010bd3f57c(unaff_x19 + 0xf8,auStack_c8,&UNK_10df7906e,0);
      FUN_10896911c(unaff_x19 + 0xc0,unaff_x19 + 0xf8);
      func_0x000108971fcc();
      pcVar8 = *(code **)(*(long *)(unaff_x19 + 0xe8) + 0x18);
      if (pcVar8 == (code *)0x0) {
        pcVar8 = *(code **)(*(long *)(unaff_x19 + 0xe8) + 0x10);
        puVar4 = (undefined8 *)(unaff_x19 + 0x248);
        __ZNSt13exception_ptrC1ERKS_(puVar4,unaff_x23 + 8);
        *(undefined1 **)(unaff_x19 + 0x210) = &uStack_d9;
        func_0x00010bd42e30();
        func_0x0001089717dc();
        *(undefined8 *)(unaff_x19 + 0x220) = 0;
        __ZNSt13exception_ptrC1ERKS_(puVar4 + 2,unaff_x19 + 0x248);
        *puVar4 = FUN_10896937c;
        *(undefined8 *)(unaff_x19 + 0x218) = 0;
        puStack_e8 = puVar4;
        FUN_108969358(unaff_x19 + 0x210);
        param_2 = (code *)&puStack_e8;
        (*pcVar8)(unaff_x19 + 0xc0);
        func_0x000108971ed8();
        __ZNSt13exception_ptrD1Ev(unaff_x19 + 0x248);
      }
      else {
        param_2 = FUN_108969338;
        (*pcVar8)(unaff_x19 + 0xc0,FUN_108969338,auStack_d8);
      }
      func_0x000108971fc4();
      func_0x00010bd43af0(unaff_x19 + 0xc0);
      puVar5 = unaff_x19 + 0xf8;
    }
    func_0x00010bd43af0(puVar5);
    func_0x00010bd43af0(auStack_c8);
    __ZNSt13exception_ptrD1Ev(unaff_x22 + 8);
    func_0x000108971f64();
    func_0x00010897220c();
    puVar4 = (undefined8 *)(unaff_x19 + 0x1d8);
    func_0x00010bd43af0();
    func_0x000108972214();
    goto LAB_108971248;
  }
  uVar3 = *(char *)(param_1 + 0x288) == '\x01';
  if ((bool)uVar3) {
    FUN_108968698(unaff_x19 + 0x88);
    func_0x000108971bbc();
    func_0x00010897218c();
    *(undefined1 *)(**(long **)(unaff_x19 + 0x18) + 0x71) = 0;
    *(undefined8 *)(unaff_x19 + 0x278) = 0;
    func_0x000108968c68(unaff_x19 + 0x280,unaff_x19 + 0x260);
    func_0x000108971b34();
    puVar4 = (undefined8 *)(unaff_x19 + 0x88);
    FUN_108968620();
    uVar6 = 2;
  }
  else {
    func_0x000108968ca8(unaff_x19 + 0x1a0,unaff_x19 + 0x168);
    func_0x00010bd3f528(apuStack_90,unaff_x19 + 0x168);
    param_2 = (code *)apuStack_90;
    func_0x000108968ca8(unaff_x19 + 0x1d8);
    func_0x000108971f64();
    func_0x000108968ce0(unaff_x19 + 0x270);
    func_0x000108971b34();
    puVar4 = (undefined8 *)(unaff_x19 + 0x88);
    FUN_108968620();
    uVar6 = 1;
  }
  unaff_x19[0x288] = uVar6;
  func_0x0001089714d8(*(undefined8 *)(unaff_x19 + 0x88));
  while( true ) {
    func_0x000108971480(uStack_48);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    if ((int)param_2 == 0) break;
    func_0x000108971ed8();
    __ZNSt13exception_ptrD1Ev(unaff_x19 + 0x248);
    func_0x000108971fc4();
    func_0x00010bd43af0(unaff_x19 + 0xc0);
    func_0x00010bd43af0(unaff_x19 + 0xf8);
    func_0x00010bd43af0(auStack_c8);
    __ZNSt13exception_ptrD1Ev(unaff_x22 + 8);
    func_0x000108971f64();
    func_0x00010897220c();
    puVar4 = (undefined8 *)(unaff_x19 + 0x1d8);
    func_0x00010bd43af0();
    func_0x000108972214();
    func_0x00010897185c();
    func_0x000108971b8c();
    ___cxa_end_catch();
LAB_108971248:
    *(ulong *)(unaff_x19 + 0x1a0) = uVar1;
    func_0x000108971a4c();
    unaff_x19[0x288] = extraout_w8;
    func_0x000108971758();
    if (extraout_x10 != 0) {
      func_0x000108971f28();
    }
    func_0x000108971930();
  }
  __Unwind_Resume();
  bVar2 = *(byte *)(puVar4 + 0x51);
  puVar9 = (undefined8 *)(ulong)bVar2;
  puVar10 = &UNK_10df78f58;
  switch(bVar2) {
  case 0:
  case 3:
    goto FUN_10896881c;
  case 1:
  case 0x21:
  case 0x5e:
  case 0x8e:
    func_0x000108971bbc();
    func_0x00010897218c();
    break;
  case 2:
    func_0x000108971bbc();
    func_0x00010897221c();
    func_0x00010897220c();
    break;
  case 4:
  case 0x14:
  case 0x17:
  case 0x4f:
  case 0x52:
    return;
  case 5:
  case 0xf1:
    *puVar4 = puVar9;
    puVar9 = *(undefined8 **)((long)param_2 + 8);
  case 8:
  case 0x22:
  case 0x43:
  case 0x5f:
  case 0x8f:
  case 0xb9:
  case 0xd7:
  case 0xf2:
    puVar4[1] = puVar9;
    return;
  case 6:
    *puVar4 = &UNK_10df78f58;
    puVar4[1] = puVar9 + 8;
    return;
  case 7:
  case 0x12:
  case 0x28:
  case 0x4d:
  case 0xbd:
  case 0xdb:
  case 0xf6:
    return;
  case 9:
  case 0x25:
  case 0x2a:
  case 0x44:
    return;
  default:
    return;
  case 0xb:
  case 0x37:
  case 0x46:
  case 0x6c:
  case 0x84:
  case 0x9c:
  case 0xb4:
    return;
  case 0xc:
  case 0x15:
  case 0x2f:
  case 0x47:
  case 0x50:
  case 0x71:
  case 0x79:
  case 0x7a:
  case 0x85:
  case 0xa1:
  case 0xa9:
  case 0xaa:
  case 0xb5:
  case 0xc4:
  case 0xc5:
  case 0xd5:
  case 0xe2:
  case 0xe3:
  case 0xec:
  case 0xfd:
  case 0xfe:
    return;
  case 0xd:
  case 0x48:
  case 0x66:
  case 0x96:
  case 0xd1:
    return;
  case 0xe:
  case 0x49:
  case 0x74:
  case 0x77:
  case 0xa4:
  case 0xa7:
  case 0xbf:
  case 0xc2:
  case 0xdd:
  case 0xe0:
  case 0xf8:
  case 0xfb:
    return;
  case 0xf:
  case 0x1d:
  case 0x3b:
  case 0x4a:
  case 0x58:
  case 0x62:
  case 99:
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0x93:
  case 0x9a:
  case 0xae:
  case 0xc9:
  case 0xe7:
    return;
  case 0x10:
  case 0x11:
  case 0x3c:
  case 0x4b:
  case 0x4c:
  case 0xd3:
    return;
  case 0x13:
  case 0x29:
  case 0x4e:
  case 0x72:
  case 0xa2:
    return;
  case 0x18:
  case 0x1e:
  case 0x35:
  case 0x3a:
  case 0x53:
  case 0x59:
  case 0x87:
  case 0xb7:
  case 0xef:
    puVar10 = (undefined *)0x31564c5409030009;
  case 0x16:
  case 0x1b:
  case 0x32:
  case 0x41:
  case 0x51:
  case 0x56:
  case 100:
  case 0x68:
  case 0x8b:
  case 0x94:
  case 0x98:
  case 0xcc:
    puVar10[0x71] = bVar2;
  case 0x1f:
  case 0x24:
  case 0x3e:
  case 0x5a:
  case 0x65:
  case 0x6e:
  case 0x7c:
  case 0x95:
  case 0x9e:
  case 0xac:
  case 199:
  case 0xcd:
  case 0xcf:
  case 0xe5:
  case 0xed:
    puVar4[3] = 0;
    return;
  case 0x1a:
  case 0x2c:
  case 0x55:
  case 0x76:
  case 0x7f:
  case 0x83:
  case 0xa6:
  case 0xaf:
  case 0xb3:
  case 0xc1:
  case 0xca:
  case 0xdf:
  case 0xe8:
  case 0xfa:
    return;
  case 0x1c:
  case 0x57:
  case 0xd4:
    return;
  case 0x20:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x8d:
  case 0x60:
  case 0x73:
  case 0x90:
  case 0x6b:
  case 0x9b:
    return;
  case 0x23:
  case 0xba:
  case 0xd8:
  case 0xf3:
    return;
  case 0x26:
  case 0x27:
  case 0x31:
  case 0x38:
  case 0x3d:
  case 0x80:
  case 0x88:
  case 0xb0:
  case 0xbc:
  case 0xcb:
  case 0xda:
  case 0xe9:
  case 0xf5:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____cxa_free_exception_110346bc8)();
    return;
  case 0x2b:
  case 0x30:
  case 0x36:
  case 0x6d:
  case 0x78:
  case 0x86:
  case 0x8c:
  case 0x9d:
  case 0xa8:
  case 0xb6:
  case 0xc3:
  case 0xd0:
  case 0xe1:
  case 0xee:
  case 0xfc:
    return;
  case 0x2e:
  case 0x61:
  case 0x89:
  case 0x91:
    return;
  case 0x33:
  case 0x3f:
  case 0x81:
  case 0xb1:
    return;
  case 0x39:
  case 0xea:
    return;
  case 0x40:
  case 0x69:
  case 0x70:
  case 0x7d:
  case 0x99:
  case 0xa0:
  case 0xad:
  case 200:
  case 0xd2:
  case 0xe6:
  case 0xeb:
    return;
  case 0x42:
  case 0xb8:
  case 0xd6:
  case 0xf0:
    return;
  case 0xa3:
  case 0xbb:
  case 0xd9:
  case 0xf4:
    return;
  case 0xbe:
    return;
  case 0xdc:
    return;
  case 0xf7:
    return;
  }
  func_0x00010bd43af0(puVar4 + 0x3b);
  func_0x000108972214();
FUN_10896881c:
  func_0x000108969420(puVar4 + 2);
  FUN_10895c544(puVar4 + 0x4c);
  func_0x00010bd43af0(puVar4 + 0x2d);
  func_0x0001089717c8(puVar4,0x290);
  func_0x00010bd42e30();
  if ((uVar1 < 0x3fd) && (puVar4 != (undefined8 *)0x0)) {
    if (puVar4[2] == 0) {
      lVar7 = 2;
    }
    else {
      if (puVar4[3] != 0) goto FUN_10894e15c;
      lVar7 = 3;
    }
    *unaff_x19 = unaff_x19[uVar1];
    puVar4[lVar7] = unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 == (undefined1 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
  return;
}



/* Entry: 108971408; end: 10897147f;  */

/* WARNING: Possible PIC construction at 0x000108968ffc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108969000) */
/* WARNING: Removing unreachable block (ram,0x000108969050) */
/* WARNING: Removing unreachable block (ram,0x00010896903c) */
/* WARNING: Removing unreachable block (ram,0x0001089690ac) */
/* WARNING: Removing unreachable block (ram,0x0001089690d4) */
/* WARNING: Removing unreachable block (ram,0x0001089690f4) */
/* WARNING: Removing unreachable block (ram,0x00010896910c) */
/* WARNING: Removing unreachable block (ram,0x000108969118) */
/* WARNING: Removing unreachable block (ram,0x000108969174) */
/* WARNING: Removing unreachable block (ram,0x00010896917c) */
/* WARNING: Removing unreachable block (ram,0x000108971f34) */
/* WARNING: Removing unreachable block (ram,0x00010896916c) */
/* WARNING: Removing unreachable block (ram,0x0001089715dc) */
/* WARNING: Removing unreachable block (ram,0x0001089690c8) */
/* WARNING: Removing unreachable block (ram,0x000108971d18) */

void FUN_108971408(ulong *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *unaff_x19;
  ulong unaff_x20;
  
  bVar1 = (byte)param_1[0x51];
  uVar3 = (ulong)bVar1;
  puVar4 = &UNK_10df78f58;
  switch(bVar1) {
  case 0:
  case 3:
    goto FUN_10896881c;
  case 1:
  case 0x21:
  case 0x5e:
  case 0x8e:
    func_0x000108971bbc();
    func_0x00010897218c();
    break;
  case 2:
    func_0x000108971bbc();
    func_0x00010897221c();
    func_0x00010897220c();
    break;
  case 4:
  case 0x14:
  case 0x17:
  case 0x4f:
  case 0x52:
    return;
  case 5:
  case 0xf1:
    *param_1 = uVar3;
    uVar3 = *(ulong *)(param_2 + 8);
  case 8:
  case 0x22:
  case 0x43:
  case 0x5f:
  case 0x8f:
  case 0xb9:
  case 0xd7:
  case 0xf2:
    param_1[1] = uVar3;
    return;
  case 6:
    *param_1 = (ulong)&UNK_10df78f58;
    param_1[1] = uVar3 + 0x40;
    return;
  case 7:
  case 0x12:
  case 0x28:
  case 0x4d:
  case 0xbd:
  case 0xdb:
  case 0xf6:
    return;
  case 9:
  case 0x25:
  case 0x2a:
  case 0x44:
    return;
  default:
    return;
  case 0xb:
  case 0x37:
  case 0x46:
  case 0x6c:
  case 0x84:
  case 0x9c:
  case 0xb4:
    return;
  case 0xc:
  case 0x15:
  case 0x2f:
  case 0x47:
  case 0x50:
  case 0x71:
  case 0x79:
  case 0x7a:
  case 0x85:
  case 0xa1:
  case 0xa9:
  case 0xaa:
  case 0xb5:
  case 0xc4:
  case 0xc5:
  case 0xd5:
  case 0xe2:
  case 0xe3:
  case 0xec:
  case 0xfd:
  case 0xfe:
    return;
  case 0xd:
  case 0x48:
  case 0x66:
  case 0x96:
  case 0xd1:
    return;
  case 0xe:
  case 0x49:
  case 0x74:
  case 0x77:
  case 0xa4:
  case 0xa7:
  case 0xbf:
  case 0xc2:
  case 0xdd:
  case 0xe0:
  case 0xf8:
  case 0xfb:
    return;
  case 0xf:
  case 0x1d:
  case 0x3b:
  case 0x4a:
  case 0x58:
  case 0x62:
  case 99:
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0x93:
  case 0x9a:
  case 0xae:
  case 0xc9:
  case 0xe7:
    return;
  case 0x10:
  case 0x11:
  case 0x3c:
  case 0x4b:
  case 0x4c:
  case 0xd3:
    return;
  case 0x13:
  case 0x29:
  case 0x4e:
  case 0x72:
  case 0xa2:
    return;
  case 0x18:
  case 0x1e:
  case 0x35:
  case 0x3a:
  case 0x53:
  case 0x59:
  case 0x87:
  case 0xb7:
  case 0xef:
    puVar4 = (undefined *)0x31564c5409030009;
  case 0x16:
  case 0x1b:
  case 0x32:
  case 0x41:
  case 0x51:
  case 0x56:
  case 100:
  case 0x68:
  case 0x8b:
  case 0x94:
  case 0x98:
  case 0xcc:
    puVar4[0x71] = bVar1;
  case 0x1f:
  case 0x24:
  case 0x3e:
  case 0x5a:
  case 0x65:
  case 0x6e:
  case 0x7c:
  case 0x95:
  case 0x9e:
  case 0xac:
  case 199:
  case 0xcd:
  case 0xcf:
  case 0xe5:
  case 0xed:
    param_1[3] = 0;
    return;
  case 0x1a:
  case 0x2c:
  case 0x55:
  case 0x76:
  case 0x7f:
  case 0x83:
  case 0xa6:
  case 0xaf:
  case 0xb3:
  case 0xc1:
  case 0xca:
  case 0xdf:
  case 0xe8:
  case 0xfa:
    return;
  case 0x1c:
  case 0x57:
  case 0xd4:
    return;
  case 0x20:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x8d:
  case 0x60:
  case 0x73:
  case 0x90:
  case 0x6b:
  case 0x9b:
    return;
  case 0x23:
  case 0xba:
  case 0xd8:
  case 0xf3:
    return;
  case 0x26:
  case 0x27:
  case 0x31:
  case 0x38:
  case 0x3d:
  case 0x80:
  case 0x88:
  case 0xb0:
  case 0xbc:
  case 0xcb:
  case 0xda:
  case 0xe9:
  case 0xf5:
                    /* WARNING: Could not recover jumptable at 0x00010bdbd898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR____cxa_free_exception_110346bc8)();
    return;
  case 0x2b:
  case 0x30:
  case 0x36:
  case 0x6d:
  case 0x78:
  case 0x86:
  case 0x8c:
  case 0x9d:
  case 0xa8:
  case 0xb6:
  case 0xc3:
  case 0xd0:
  case 0xe1:
  case 0xee:
  case 0xfc:
    return;
  case 0x2e:
  case 0x61:
  case 0x89:
  case 0x91:
    return;
  case 0x33:
  case 0x3f:
  case 0x81:
  case 0xb1:
    return;
  case 0x39:
  case 0xea:
    return;
  case 0x40:
  case 0x69:
  case 0x70:
  case 0x7d:
  case 0x99:
  case 0xa0:
  case 0xad:
  case 200:
  case 0xd2:
  case 0xe6:
  case 0xeb:
    return;
  case 0x42:
  case 0xb8:
  case 0xd6:
  case 0xf0:
    return;
  case 0xa3:
  case 0xbb:
  case 0xd9:
  case 0xf4:
    return;
  case 0xbe:
    return;
  case 0xdc:
    return;
  case 0xf7:
    return;
  }
  func_0x00010bd43af0(param_1 + 0x3b);
  func_0x000108972214();
FUN_10896881c:
  func_0x000108969420(param_1 + 2);
  FUN_10895c544(param_1 + 0x4c);
  func_0x00010bd43af0(param_1 + 0x2d);
  func_0x0001089717c8(param_1,0x290);
  func_0x00010bd42e30();
  if ((unaff_x20 < 0x3fd) && (param_1 != (ulong *)0x0)) {
    if (param_1[2] == 0) {
      lVar2 = 2;
    }
    else {
      if (param_1[3] != 0) goto FUN_10894e15c;
      lVar2 = 3;
    }
    *unaff_x19 = unaff_x19[unaff_x20];
    param_1[lVar2] = (ulong)unaff_x19;
    return;
  }
FUN_10894e15c:
  if (unaff_x19 == (undefined1 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(*(undefined8 *)(unaff_x19 + -8));
  return;
}



/* Entry: 108971480; end: 108971df3;  */

void FUN_108971480(void)

{
  return;
}



/* Entry: 108971df4; end: 108971e07;  */

void FUN_108971df4(void)

{
  FUN_10896a518();
  return;
}



/* Entry: 108971e08; end: 10897219b;  */

void FUN_108971e08(void)

{
  return;
}



/* Entry: 10897219c; end: 1089721b7;  */

void FUN_10897219c(void)

{
  long *unaff_x19;
  
  FUN_108968d7c(*(undefined8 *)(*unaff_x19 + 0x58));
  return;
}



/* Entry: 1089721b8; end: 10897233b;  */

void FUN_1089721b8(long param_1)

{
  long unaff_x19;
  
  param_1 = param_1 + 0x38;
  func_0x00010bd44064();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x19 + 0x68);
  *(undefined ***)(unaff_x19 + 0x68) = &PTR_FUN_110a9cd38;
  return;
}



/* Entry: 10897233c; end: 108972427;  */

undefined8 *
FUN_10897233c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  *param_1 = &PTR_DAT_110aa0650;
  param_1[2] = 0;
  param_1[3] = param_2;
  puVar1 = param_1;
  func_0x000107c27d0c();
  param_1[4] = puVar1;
  FUN_108973490(param_1 + 5,param_2,0);
  param_1[0x10] = param_3;
  _bzero(param_1 + 0x11,0x7e8);
  uVar3 = param_5[1];
  uVar2 = *param_5;
  uVar4 = *(undefined8 *)((long)param_5 + 0xc);
  *(undefined8 *)((long)param_1 + 0x884) = *(undefined8 *)((long)param_5 + 0x14);
  *(undefined8 *)((long)param_1 + 0x87c) = uVar4;
  param_1[0x10f] = uVar3;
  param_1[0x10e] = uVar2;
  *(undefined8 *)((long)param_1 + 0x88c) = 0;
  *(undefined8 *)((long)param_1 + 0x89c) = 0;
  *(undefined8 *)((long)param_1 + 0x894) = 0;
  *(undefined4 *)((long)param_1 + 0x8a4) = 0;
  *(undefined1 *)((long)param_1 + 0x88d) = 2;
  param_1[0x116] = 0;
  param_1[0x115] = 0;
  *(undefined1 *)(param_1 + 0x117) = 0;
  param_1[0x118] = param_4;
  *(undefined4 *)(param_1 + 0x119) = param_6;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x11d] = 0;
  param_1[0x11c] = 0;
  func_0x000107c28144();
  return param_1;
}



/* Entry: 108972428; end: 108972463;  */

undefined8 * FUN_108972428(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa0650;
  FUN_1089735ec(param_1 + 5);
  func_0x000108972e20(param_1 + 1);
  return param_1;
}



/* Entry: 108972464; end: 108972467;  */

undefined8 * FUN_108972464(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110aa0650;
  FUN_1089735ec(param_1 + 5);
  func_0x000108972e20(param_1 + 1);
  return param_1;
}



/* Entry: 108972468; end: 10897247b;  */

void FUN_108972468(void)

{
  FUN_108972428();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10897247c; end: 108972733;  */

void FUN_10897247c(undefined1 *param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 **ppuVar3;
  undefined4 uVar4;
  undefined1 *puStack_f0;
  ulong uStack_e8;
  byte bStack_d9;
  uint auStack_d0 [7];
  byte bStack_b4;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  uint *puStack_50;
  code *pcStack_48;
  
  ppuVar3 = &puStack_f0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  auStack_d0[0] = (uint)*(byte *)(param_2 + 0x871);
  if (auStack_d0[0] != 2) {
    auStack_d0[0] = 0x1e;
  }
  FUN_108973624(&uStack_90,*(undefined8 *)(param_2 + 0x28),param_2 + 0x30,auStack_d0,&uStack_68);
  if (((uStack_58 & 1) == 0) || (uStack_58 == 1 && (int)uStack_68 == 0)) {
    if (param_3 == 0) {
      bVar2 = *(char *)(param_2 + 0x871) != '\x02';
      if (bVar2) {
        uVar4 = 0;
        uStack_80 = *(undefined8 *)(param_2 + 0x880);
        uStack_88 = *(undefined8 *)(param_2 + 0x878);
        uStack_78 = *(undefined4 *)(param_2 + 0x888);
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x874);
        uStack_88 = 0;
        uStack_80 = 0;
        uStack_78 = 0;
      }
      uStack_90 = CONCAT44(uVar4,(uint)bVar2);
      FUN_108b82274(auStack_d0,&uStack_90);
      if ((bStack_b4 & 1) == 0) {
        func_0x000108b80bdc(&uStack_90,&UNK_10f4ed9c4);
        func_0x0001089737fc();
        return;
      }
      func_0x00010bd43838(&uStack_90,auStack_d0,0);
      uVar1 = 0x10;
      if (uStack_90._1_1_ != '\x02') {
        uVar1 = 0x1c;
      }
      func_0x00010bd42148(*(undefined4 *)(param_2 + 0x30),&uStack_90,uVar1,&uStack_68);
      if (((uStack_58 & 1) == 0) || ((uStack_58 == 1 && ((int)uStack_68 == 0)))) {
LAB_10897263c:
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        func_0x00010bd422dc(*(undefined4 *)(param_2 + 0x30),param_2 + 0x34,1,&uStack_90);
        func_0x000107c2a674(&uStack_90,&UNK_10f4eda4e);
        FUN_1089727d8(param_2);
        *param_1 = 0;
        param_1[0x28] = 0;
        return;
      }
      uStack_a8 = uStack_60;
      uStack_b0 = uStack_68;
      uStack_a0 = uStack_58;
      puStack_50 = auStack_d0;
      pcStack_48 = FUN_10895b6b4;
      func_0x000107c2793c(&UNK_10f4ed9ee);
      func_0x000108973860(&puStack_f0);
      if (-1 < (char)bStack_d9) {
        uStack_e8 = (ulong)bStack_d9;
        puStack_f0 = (undefined1 *)&puStack_f0;
      }
      FUN_108b80c4c(&uStack_90,&uStack_b0,puStack_f0,uStack_e8);
      func_0x0001089737fc();
      goto LAB_108972594;
    }
    FUN_108972734(&uStack_90,(undefined8 *)(param_2 + 0x28),param_2 + 0x870,&uStack_68);
    if (((uStack_58 & 1) == 0) || ((uStack_58 == 1 && ((int)uStack_68 == 0)))) goto LAB_10897263c;
    func_0x000108973868();
    func_0x000107c2793c(&UNK_10f4ed99c);
    func_0x000108973860(&uStack_b0);
    func_0x0001089738a0();
    func_0x0001089738d0(&uStack_90);
  }
  else {
    func_0x000108973868();
    func_0x000107c2793c(&UNK_10f4ed980);
    func_0x000108973860(&uStack_b0);
    func_0x0001089738a0();
    func_0x0001089738d0(&uStack_90);
  }
  func_0x0001089737fc();
  ppuVar3 = (undefined1 **)&uStack_b0;
LAB_108972594:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar3);
  return;
}



/* Entry: 108972734; end: 1089727d7;  */

void FUN_108972734(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  int *piVar2;
  undefined1 auStack_60 [28];
  uint uStack_44;
  
  piVar2 = (int *)(param_1 + 1);
  if (*piVar2 == -1) {
    uStack_44 = (uint)*(byte *)(param_2 + 1);
    if (uStack_44 != 2) {
      uStack_44 = 0x1e;
    }
    FUN_108973624(auStack_60,*param_1,piVar2,&uStack_44,param_3);
    uVar1 = param_3;
    func_0x000107c2a678();
    if ((uVar1 & 1) != 0) goto LAB_1089727bc;
  }
  FUN_1089737b8(auStack_60,*param_1,piVar2,param_2,param_3);
LAB_1089727bc:
  func_0x00010897384c();
  return;
}



/* Entry: 1089727d8; end: 108972913;  */

/* WARNING: Removing unreachable block (ram,0x000108972964) */
/* WARNING: Removing unreachable block (ram,0x00010897296c) */
/* WARNING: Removing unreachable block (ram,0x000108972970) */
/* WARNING: Removing unreachable block (ram,0x000108972974) */

void FUN_1089727d8(long param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  uStack_60 = *(undefined8 *)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10);
  if ((lVar4 != 0) && (__ZNSt3__119__shared_weak_count4lockEv(), lStack_58 = lVar4, lVar4 != 0)) {
    lVar4 = *(long *)(param_1 + 0x28);
    puStack_48 = &uStack_60;
    puVar2 = (undefined8 *)0xc0;
    lStack_50 = param_1;
    func_0x00010bd3faa4();
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *puVar2 = 0;
    puVar2[1] = FUN_108972e6c;
    *(undefined4 *)(puVar2 + 2) = 0;
    uVar3 = *(undefined8 *)(lVar4 + 0x40);
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    puVar2[4] = *(undefined8 *)(lVar4 + 0x38);
    puVar2[3] = uVar5;
    puVar2[5] = uVar3;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0x10897335c;
    *(undefined4 *)(puVar2 + 9) = uVar1;
    *(undefined4 *)((long)puVar2 + 0x4c) = 2;
    puVar2[10] = param_1 + 0x88;
    puVar2[0xb] = 0x7e8;
    puVar2[0xc] = param_1 + 0x88c;
    *(undefined4 *)(puVar2 + 0xd) = 0;
    puVar2[0xf] = lStack_58;
    puVar2[0xe] = uStack_60;
    uStack_60 = 0;
    lStack_58 = 0;
    puVar2[0x10] = lStack_50;
    puStack_40 = puVar2;
    FUN_10894fe4c(puVar2 + 0x11,0,0,param_1 + 0x48);
    puStack_38 = puVar2;
    func_0x00010bd414b4(lVar4 + 0x28,(undefined4 *)(param_1 + 0x30),0,puVar2,0,1,0);
    puStack_40 = (undefined8 *)0x0;
    puStack_38 = (undefined8 *)0x0;
    FUN_108972e48(&puStack_48);
    func_0x000108972c48(&uStack_60);
    return;
  }
  func_0x00010527822c();
  FUN_108972e48(&puStack_48);
  puVar2 = &uStack_60;
  func_0x000108972c48();
  func_0x000108973844();
  func_0x00010bd42a1c(*(undefined4 *)(puVar2 + 6),*(undefined1 *)((long)puVar2 + 0x34));
  puVar2[0x11a] = puVar2[0x11a] + 1;
  return;
}



/* Entry: 108972914; end: 108972a07;  */

void FUN_108972914(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulong uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uVar1 = 0x10;
  if (*(char *)(param_2 + 1) != '\x02') {
    uVar1 = 0x1c;
  }
  func_0x00010bd42a1c(*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x34),param_3,
                      param_4,0,param_2,uVar1,&uStack_38);
  if (((uStack_28 & 1) == 0) || (uStack_28 == 1 && (int)uStack_38 == 0)) {
    lVar2 = 0x8d0;
  }
  else {
    lVar2 = 0x8e8;
  }
  *(long *)(param_1 + lVar2) = *(long *)(param_1 + lVar2) + 1;
  return;
}



/* Entry: 108972a08; end: 108972b77;  */

void FUN_108972a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puVar4 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x30);
  func_0x00010bd42890(puVar4,*(undefined1 *)(param_1 + 0x34),param_2,param_3,0,&uStack_88);
  if (((uStack_78 & 1) == 0) || (uStack_78 == 1 && (int)uStack_88 == 0)) {
    *(long *)(param_1 + 0x8d0) = *(long *)(param_1 + 0x8d0) + 1;
  }
  else {
    *(long *)(param_1 + 0x8e8) = *(long *)(param_1 + 0x8e8) + 1;
    uStack_40 = *(ulong *)(param_1 + 0x18);
    uStack_68 = *(undefined8 *)(param_1 + 0x10);
    uStack_70 = *(undefined8 *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uStack_b0 = 0;
    uStack_98 = uStack_80;
    uStack_a0 = uStack_88;
    uStack_90 = uStack_78;
    uStack_40 = uStack_40 | 1;
    uStack_b8 = 0;
    uStack_58 = uStack_88;
    uStack_48 = uStack_78;
    uStack_50 = uStack_80;
    puStack_38 = &uStack_40;
    lStack_a8 = param_1;
    lStack_60 = param_1;
    func_0x00010bd42e30();
    FUN_10894e06c();
    *puVar4 = 0;
    puVar4[1] = FUN_108972c70;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[4] = uStack_68;
    puVar4[3] = uStack_70;
    uStack_70 = 0;
    uStack_68 = 0;
    puVar4[6] = uStack_58;
    puVar4[5] = lStack_60;
    puVar4[8] = uStack_48;
    puVar4[7] = uStack_50;
    puStack_30 = puVar4;
    puStack_28 = puVar4;
    func_0x00010bd4058c(*(undefined8 *)((uStack_40 & 0xfffffffffffffffc) + 8),puVar4,
                        uStack_40 >> 1 & 1);
    puStack_30 = (undefined8 *)0x0;
    puStack_28 = (undefined8 *)0x0;
    FUN_108972bbc(&puStack_38);
    func_0x000108972e20(&uStack_70);
    func_0x000108972e20(&uStack_b8);
  }
  return;
}



/* Entry: 108972b78; end: 108972bb3;  */

void FUN_108972b78(long param_1)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 auStack_28 [24];
  
  *(undefined8 *)(param_1 + 0x8c0) = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  func_0x00010bd412ac(auStack_28,*(long *)(param_1 + 0x28) + 0x28,param_1 + 0x30,&uStack_40);
  return;
}



/* Entry: 108972bb4; end: 108972bbb;  */

void FUN_108972bb4(long param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_108973408(*(undefined8 *)(param_1 + 0x28),param_1 + 0x30,&uStack_28);
  func_0x000107c2a674(&uStack_28,&UNK_10f4eda3f);
  return;
}



/* Entry: 108972bbc; end: 108972bdf;  */

undefined8 FUN_108972bbc(undefined8 param_1)

{
  FUN_108972dd8();
  return param_1;
}



/* Entry: 108972be0; end: 108972c6f;  */

void FUN_108972be0(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_28;
  
  uVar2 = *param_3;
  puVar1 = &UNK_10f4eda1f;
  if (*param_1 != 1) {
    puVar1 = &UNK_10f4eda19;
  }
  puStack_28 = &UNK_10f4eda27;
  if (*param_1 != 0) {
    puStack_28 = puVar1;
  }
  func_0x000107c28268(uVar2,&DAT_10f2fb62f,&puStack_28);
  *param_3 = uVar2;
  return;
}



/* Entry: 108972c70; end: 108972dd7;  */

void FUN_108972c70(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 uStack_91;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined4 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puStack_b0 = &uStack_91;
  lVar3 = *(long *)(param_2 + 0x20);
  uStack_d8 = *(undefined8 *)(param_2 + 0x20);
  lStack_e0 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  uStack_c8 = *(undefined8 *)(param_2 + 0x30);
  lStack_d0 = *(long *)(param_2 + 0x28);
  uStack_b8 = *(undefined8 *)(param_2 + 0x40);
  uStack_c0 = *(undefined8 *)(param_2 + 0x38);
  lStack_a8 = param_2;
  lStack_a0 = param_2;
  FUN_108972dd8(&puStack_b0);
  lVar1 = lStack_d0;
  if (param_1 != 0) {
    lStack_50 = 0;
    lStack_48 = 0;
    if (lVar3 != 0) {
      __ZNSt3__119__shared_weak_count4lockEv();
      lStack_48 = lVar3;
      if (((lVar3 != 0) && (lStack_50 = lStack_e0, lStack_e0 != 0)) &&
         (plVar4 = *(long **)(lVar1 + 0x8c0), plVar4 != (long *)0x0)) {
        uVar2 = SUB84(&uStack_c8,0);
        FUN_108b86440();
        lStack_40 = lVar1 + 0x8c8;
        uStack_38 = 0x108972be0;
        func_0x000107c2793c(&UNK_10f4eda0a);
        func_0x000108973860(&uStack_90);
        uStack_58 = uStack_80;
        uStack_60 = uStack_88;
        uStack_68 = uStack_90;
        uStack_90 = 0;
        uStack_88 = 0;
        uStack_80 = 0;
        ppuStack_78 = &PTR_FUN_110ab4390;
        uStack_70 = uVar2;
        (**(code **)(*plVar4 + 0x18))(plVar4,&ppuStack_78);
        func_0x000108b80d84(&ppuStack_78);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
      }
    }
    func_0x000108972c48(&lStack_50);
    DataMemoryBarrier(2,3);
  }
  func_0x000108972e20(&lStack_e0);
  FUN_108972bbc(&puStack_b0);
  return;
}



/* Entry: 108972dd8; end: 108972e47;  */

void FUN_108972dd8(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000108972e20(*(long *)(param_1 + 0x10) + 0x18);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894e450();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 108972e48; end: 108972e6b;  */

undefined8 FUN_108972e48(undefined8 param_1)

{
  FUN_108973090();
  return param_1;
}



/* Entry: 108972e6c; end: 10897308f;  */

void FUN_108972e6c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 **ppuVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_120;
  long lStack_118;
  long lStack_110;
  undefined1 uStack_101;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [4];
  long lStack_88;
  undefined1 auStack_70 [40];
  long lStack_48;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = param_2;
  lStack_110 = param_2;
  func_0x00010bd3f54c(auStack_a8,param_2 + 0x88);
  uStack_158 = *(undefined8 *)(param_2 + 0x78);
  uStack_160 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_2 + 0x70) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  uStack_150 = *(undefined8 *)(param_2 + 0x80);
  uStack_140 = *(undefined8 *)(param_2 + 0x20);
  uStack_148 = *(undefined8 *)(param_2 + 0x18);
  uStack_138 = *(undefined8 *)(param_2 + 0x28);
  uStack_130 = *(undefined8 *)(param_2 + 0x38);
  puStack_120 = (undefined1 *)&uStack_160;
  FUN_108973090(&puStack_120);
  if (param_1 != 0) {
    if (lStack_88 == 0) {
      FUN_1089730e8(&uStack_160);
    }
    else {
      puVar3 = auStack_a8;
      func_0x00010bd3f5e0(auStack_70,puVar3,&UNK_10df77d6e,0);
      if (*(code **)(lStack_48 + 0x18) == (code *)0x0) {
        pcVar5 = *(code **)(lStack_48 + 0x10);
        uStack_f0 = uStack_150;
        uStack_f8 = uStack_158;
        uStack_100 = uStack_160;
        uStack_160 = 0;
        uStack_158 = 0;
        uStack_e0 = uStack_140;
        uStack_e8 = uStack_148;
        uStack_d8 = uStack_138;
        uStack_d0 = uStack_130;
        puStack_c0 = &uStack_101;
        func_0x00010bd42e30();
        FUN_10894fc9c();
        puVar3[1] = uStack_100;
        puVar3[2] = uStack_f8;
        uStack_100 = 0;
        uStack_f8 = 0;
        puVar3[3] = uStack_f0;
        uVar2 = uStack_d8;
        uVar1 = uStack_e8;
        puVar3[5] = uStack_e0;
        puVar3[4] = uVar1;
        puVar3[6] = uVar2;
        puVar3[7] = uStack_d0;
        *puVar3 = FUN_10897328c;
        uStack_b8 = 0;
        uStack_b0 = 0;
        puStack_c8 = puVar3;
        FUN_108973268(&puStack_c0);
        (*pcVar5)(auStack_70,&puStack_c8);
        FUN_10894e00c(&puStack_c8);
        func_0x000108972c48(&uStack_100);
      }
      else {
        (**(code **)(lStack_48 + 0x18))(auStack_70,FUN_108973264,&uStack_160);
      }
      func_0x00010bd43af0(auStack_70);
    }
    DataMemoryBarrier(2,3);
  }
  func_0x000108973888();
  func_0x00010bd43af0(auStack_a8);
  FUN_108972e48();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10894e00c(&puStack_c8);
  func_0x000108972c48(&uStack_100);
  func_0x00010bd43af0(auStack_70);
  DataMemoryBarrier(2,3);
  func_0x000108973888();
  func_0x00010bd43af0(auStack_a8);
  ppuVar4 = &puStack_120;
  FUN_108972e48();
  func_0x000108973844();
  puVar6 = ppuVar4[2];
  if (puVar6 != (undefined1 *)0x0) {
    func_0x00010bd43af0(puVar6 + 0x88);
    func_0x000108972c48(puVar6 + 0x70);
    ppuVar4[2] = (undefined1 *)0x0;
  }
  if (ppuVar4[1] != (undefined1 *)0x0) {
    func_0x00010bd3facc(ppuVar4[1],0xc0);
    ppuVar4[1] = (undefined1 *)0x0;
  }
  return;
}



/* Entry: 108973090; end: 1089730e7;  */

void FUN_108973090(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    func_0x00010bd43af0(lVar1 + 0x88);
    func_0x000108972c48(lVar1 + 0x70);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd3facc(*(long *)(param_1 + 8),0xc0);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1089730e8; end: 108973263;  */

void FUN_1089730e8(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  long lStack_40;
  code *pcStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_10894fc44(auStack_88,0x59,0);
  uVar1 = param_1 + 0x18;
  func_0x00010894fa8c(uVar1,auStack_88);
  if (((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x8c0) != 0)) {
    uVar1 = param_1 + 0x18;
    func_0x000107c2a678();
    if ((uVar1 & 1) == 0) {
      *(long *)(lVar2 + 0x8d8) = *(long *)(lVar2 + 0x8d8) + 1;
      plVar4 = *(long **)(lVar2 + 0x8c0);
      FUN_10895b3c8(auStack_88,*(undefined8 *)(lVar2 + 0x80),lVar2 + 0x88,uVar3);
      (**(code **)(*plVar4 + 0x10))(plVar4,auStack_88,lVar2 + 0x88c);
      func_0x000107c27914(auStack_58);
      FUN_1089727d8(lVar2);
    }
    else {
      *(long *)(lVar2 + 0x8e0) = *(long *)(lVar2 + 0x8e0) + 1;
      plVar4 = *(long **)(lVar2 + 0x8c0);
      uStack_98 = *(undefined8 *)(param_1 + 0x20);
      uStack_a0 = *(undefined8 *)(param_1 + 0x18);
      uStack_90 = *(undefined8 *)(param_1 + 0x28);
      lStack_40 = lVar2 + 0x8c8;
      pcStack_38 = FUN_108972be0;
      func_0x000107c2793c(&UNK_10f4eda2e);
      func_0x000108973860(auStack_b8);
      func_0x0001089738d0(auStack_88);
      (**(code **)(*plVar4 + 0x18))(plVar4,auStack_88);
      func_0x000108b80d84(auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    }
  }
  return;
}



/* Entry: 108973264; end: 108973267;  */

void FUN_108973264(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [48];
  undefined1 auStack_58 [24];
  long lStack_40;
  code *pcStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x10);
  FUN_10894fc44(auStack_88,0x59,0);
  uVar1 = param_1 + 0x18;
  func_0x00010894fa8c(uVar1,auStack_88);
  if (((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x8c0) != 0)) {
    uVar1 = param_1 + 0x18;
    func_0x000107c2a678();
    if ((uVar1 & 1) == 0) {
      *(long *)(lVar2 + 0x8d8) = *(long *)(lVar2 + 0x8d8) + 1;
      plVar4 = *(long **)(lVar2 + 0x8c0);
      FUN_10895b3c8(auStack_88,*(undefined8 *)(lVar2 + 0x80),lVar2 + 0x88,uVar3);
      (**(code **)(*plVar4 + 0x10))(plVar4,auStack_88,lVar2 + 0x88c);
      func_0x000107c27914(auStack_58);
      FUN_1089727d8(lVar2);
    }
    else {
      *(long *)(lVar2 + 0x8e0) = *(long *)(lVar2 + 0x8e0) + 1;
      plVar4 = *(long **)(lVar2 + 0x8c0);
      uStack_98 = *(undefined8 *)(param_1 + 0x20);
      uStack_a0 = *(undefined8 *)(param_1 + 0x18);
      uStack_90 = *(undefined8 *)(param_1 + 0x28);
      lStack_40 = lVar2 + 0x8c8;
      pcStack_38 = FUN_108972be0;
      func_0x000107c2793c(&UNK_10f4eda2e);
      func_0x000108973860(auStack_b8);
      func_0x0001089738d0(auStack_88);
      (**(code **)(*plVar4 + 0x18))(plVar4,auStack_88);
      func_0x000108b80d84(auStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b8);
    }
  }
  return;
}



/* Entry: 108973268; end: 10897328b;  */

undefined8 FUN_108973268(undefined8 param_1)

{
  FUN_108973314();
  return param_1;
}



/* Entry: 10897328c; end: 108973313;  */

void FUN_10897328c(long param_1,int param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 *puStack_40;
  long lStack_38;
  long lStack_30;
  undefined1 uStack_21;
  
  puStack_40 = &uStack_21;
  uStack_78 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  uStack_70 = *(undefined8 *)(param_1 + 0x18);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  lStack_38 = param_1;
  lStack_30 = param_1;
  FUN_108973314(&puStack_40);
  if (param_2 != 0) {
    FUN_1089730e8(&uStack_80);
  }
  func_0x000108973888();
  FUN_108973268(&puStack_40);
  return;
}



/* Entry: 108973314; end: 1089733cb;  */

void FUN_108973314(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000108972c48(*(long *)(param_1 + 0x10) + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010bd42e30();
    FUN_10894fe18();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 1089733cc; end: 108973407;  */

void FUN_1089733cc(undefined8 *param_1)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  FUN_108973408(*param_1,param_1 + 1,&uStack_28);
  func_0x000107c2a674(&uStack_28,&UNK_10f4eda3f);
  return;
}



/* Entry: 108973408; end: 10897348f;  */

void FUN_108973408(undefined8 *param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_40 = 0x200;
  uStack_48 = 0x1c;
  iVar1 = *param_3;
  func_0x00010bd42b1c(iVar1,&uStack_40,&uStack_48,param_4);
  if (iVar1 == 0) {
    func_0x00010bd438c4(&uStack_40,uStack_48);
    param_1[1] = CONCAT44(uStack_34,uStack_38);
    *param_1 = uStack_40;
    *(ulong *)((long)param_1 + 0x14) = CONCAT44(uStack_28,uStack_2c);
    *(ulong *)((long)param_1 + 0xc) = CONCAT44(uStack_30,uStack_34);
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
    *(undefined1 *)((long)param_1 + 1) = 2;
  }
  return;
}



/* Entry: 108973490; end: 10897349f;  */

undefined8 * FUN_108973490(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_108973508(param_2,0,0);
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[4] = param_2;
  param_1[7] = &PTR_FUN_110a9cb70;
  param_1[8] = param_1 + 4;
  param_1[9] = &PTR_FUN_110a9cad0;
  param_1[10] = &PTR_DAT_110a9cb90;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 1089734a0; end: 108973507;  */

undefined8 *
FUN_1089734a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  FUN_108973508();
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 3) = 2;
  param_1[4] = param_4;
  param_1[7] = &PTR_FUN_110a9cb70;
  param_1[8] = param_1 + 4;
  param_1[9] = &PTR_FUN_110a9cad0;
  param_1[10] = &PTR_DAT_110a9cb90;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  return param_1;
}



/* Entry: 108973508; end: 108973513;  */

void FUN_108973508(undefined8 *param_1)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110aa06f0;
  uStack_18 = 0;
  func_0x00010bd41e70(*param_1,&ppuStack_20,FUN_10897354c,param_1);
  return;
}



/* Entry: 108973514; end: 10897354b;  */

void FUN_108973514(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuStack_20;
  undefined8 uStack_18;
  
  ppuStack_20 = &PTR_DAT_110aa06f0;
  uStack_18 = 0;
  func_0x00010bd41e70(param_1,&ppuStack_20,FUN_10897354c,param_2);
  return;
}



/* Entry: 10897354c; end: 10897358f;  */

undefined8 FUN_10897354c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x48;
  __Znwm(0x48);
  FUN_108973590();
  return uVar1;
}



/* Entry: 108973590; end: 1089735d7;  */

undefined8 * FUN_108973590(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = 0;
  *param_1 = &PTR_DAT_110aa0790;
  param_1[1] = 0;
  func_0x00010bd41118(param_1 + 5);
  *param_1 = &PTR_FUN_110aa0710;
  return param_1;
}



/* Entry: 1089735d8; end: 1089735eb;  */

void FUN_1089735d8(void)

{
  return;
}



/* Entry: 1089735ec; end: 108973623;  */

long * FUN_1089735ec(long *param_1)

{
  func_0x00010bd41148(*param_1 + 0x28,param_1 + 1);
  func_0x00010bd43af0(param_1 + 4);
  return param_1;
}



/* Entry: 108973624; end: 10897369f;  */

void FUN_108973624(long param_1,long param_2,undefined4 *param_3,undefined8 param_4)

{
  int aiStack_48 [4];
  ulong uStack_38;
  
  func_0x00010bd41388(aiStack_48,param_1 + 0x28,param_2,*param_3,2,0x11,param_4);
  if (((uStack_38 & 1) == 0) || ((uStack_38 == 1 && (aiStack_48[0] == 0)))) {
    *(undefined4 *)(param_2 + 0x10) = *param_3;
  }
  func_0x00010897384c();
  return;
}



/* Entry: 1089736a0; end: 1089737b7;  */

void FUN_1089736a0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  bool bVar2;
  undefined1 *puVar3;
  undefined1 auStack_d8 [68];
  uint uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined8 **ppuStack_78;
  long lStack_70;
  char cStack_61;
  undefined8 **ppuStack_60;
  long lStack_58;
  uint *puStack_50;
  code *pcStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c2837c(auStack_d8);
  puVar3 = auStack_d8;
  func_0x000107c28378(puVar3,param_2);
  lVar1 = *param_2;
  *param_2 = (long)puVar3;
  param_2[1] = param_2[1] + (lVar1 - (long)puVar3);
  bVar2 = *(char *)(param_1 + 1) != '\x02';
  if (bVar2) {
    uStack_90 = 0;
    uStack_84 = *(undefined8 *)(param_1 + 0x10);
    uStack_8c = *(undefined8 *)(param_1 + 8);
    uStack_7c = *(undefined4 *)(param_1 + 0x18);
  }
  else {
    uStack_90 = *(undefined4 *)(param_1 + 4);
    uStack_84 = 0;
    uStack_8c = 0;
    uStack_7c = 0;
  }
  uStack_94 = (uint)bVar2;
  uStack_40 = (ulong)((uint)(*(ushort *)(param_1 + 2) >> 8) |
                     (*(ushort *)(param_1 + 2) & 0xff00ff) << 8);
  puStack_50 = &uStack_94;
  pcStack_48 = FUN_10895b6b4;
  uStack_38 = 0;
  func_0x000107c2793c(&UNK_10f315928);
  func_0x000107c3173c(&ppuStack_78);
  ppuStack_60 = ppuStack_78;
  if (-1 < (long)cStack_61) {
    ppuStack_60 = &ppuStack_78;
  }
  lStack_58 = lStack_70;
  if (-1 < cStack_61) {
    lStack_58 = (long)cStack_61;
  }
  puVar3 = auStack_d8;
  func_0x000107c28388(puVar3,&ppuStack_60,param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_78);
  *param_3 = (long)puVar3;
  return;
}



/* Entry: 1089737b8; end: 1089737fb;  */

void FUN_1089737b8(undefined8 param_1,undefined4 *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  if (*(char *)(param_3 + 1) != '\x02') {
    uVar1 = 0x1c;
  }
  func_0x00010bd4238c(*param_2,param_3,uVar1);
  func_0x00010897384c();
  return;
}



/* Entry: 1089737fc; end: 1089738d7;  */

void FUN_1089737fc(void)

{
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 *unaff_x19;
  undefined4 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  
  *unaff_x19 = &PTR_FUN_110ab4390;
  *(undefined4 *)(unaff_x19 + 1) = in_stack_00000068;
  unaff_x19[3] = in_stack_00000078;
  unaff_x19[2] = in_stack_00000070;
  unaff_x19[4] = in_stack_00000080;
  in_stack_00000070 = 0;
  in_stack_00000078 = 0;
  in_stack_00000080 = 0;
  *(undefined1 *)(unaff_x19 + 5) = 1;
  puVar1 = (undefined8 *)&stack0x00000060;
  func_0x000108b80de0();
  *puVar1 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(puVar1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_1103469b0)();
  return;
}



/* Entry: 1089738d8; end: 1089739f3;  */

void FUN_1089738d8(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  puVar6 = (undefined8 *)0x908;
  __Znwm();
  plVar8 = puVar6 + 1;
  *plVar8 = 0;
  puVar6[2] = 0;
  *puVar6 = &PTR_DAT_110aa0810;
  puVar1 = puVar6 + 3;
  FUN_10897233c(puVar1,uVar2,uVar3,param_3,param_4,param_5);
  lVar7 = puVar6[5];
  if ((lVar7 == 0) || (*(long *)(lVar7 + 8) == -1)) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    plVar8 = puVar6 + 2;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar5) {
        *plVar8 = *plVar8 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uStack_70 = puVar6[4];
    puVar6[4] = puVar1;
    puVar6[5] = puVar6;
    puStack_90 = puVar1;
    puStack_88 = puVar6;
    puStack_80 = puVar1;
    puStack_78 = puVar6;
    lStack_68 = lVar7;
    func_0x000108972e20(&uStack_70);
    func_0x000108972c48(&puStack_80);
  }
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar6;
  puStack_90 = (undefined8 *)0x0;
  puStack_88 = (undefined8 *)0x0;
  func_0x000108972c48(&puStack_90);
  return;
}



/* Entry: 1089739f4; end: 1089739ff;  */

void FUN_1089739f4(void)

{
  return;
}



/* Entry: 108973a00; end: 108973a13;  */

void FUN_108973a00(void)

{
  func_0x000108973a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108973a14; end: 108973a57;  */

void FUN_108973a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108973a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 108973a58; end: 108973ae7;  */

undefined8 * FUN_108973a58(undefined8 *param_1)

{
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1089740b8(param_1 + 4);
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 500;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  FUN_108973ae8(param_1 + 0x21);
  return param_1;
}


